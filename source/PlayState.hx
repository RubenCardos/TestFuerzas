package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.ui.FlxVirtualPad;
import flixel.ui.FlxAnalog;
import flixel.util.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.FlxCamera;
import flixel.util.FlxRandom;

import flixel.addons.display.FlxBackdrop;

import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeState;
import flixel.addons.nape.FlxNapeVelocity;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.phys.Material;
import nape.geom.Geom;
import nape.shape.Circle;
import nape.callbacks.*;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxNapeState
{
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	var _box1 : FlxNapeSprite; 
	var _planet1 : FlxNapeSprite; 
	var _bg : FlxBackdrop;
	var _planet2 : FlxNapeSprite;
	var _planets : FlxTypedGroup <FlxNapeSprite>;
	var _planetForce : FlxNapeSprite;
	var _numPlanets: Int = 2;
	
	var _coin : FlxSprite; 
	
	private var interactionListener:InteractionListener;
	private var wallCollisionType:CbType=new CbType();
	private var ballCollisionType:CbType=new CbType();
	
	
	var _vPdad : FlxVirtualPad;
	var _vJoystick : FlxAnalog;
	
	override public function create():Void
	{
		super.create();
		
		//FlxG.mouse.visible = false;
		
		//Fisicas
		createWalls(FlxG.width*2,FlxG.height*2);
		//FlxNapeState.space.gravity = new Vec2(0,500);
		
		//BG
		_bg = new FlxBackdrop("assets/images/Space.PNG",0,0,true,false);
		add(_bg);
		
		//Caja1 DINAMICA
		_box1 = new FlxNapeSprite(FlxG.width/4, FlxG.height/2-130);
		_box1.createCircularBody(21, BodyType.DYNAMIC);
		_box1.setBodyMaterial(0.2,0.8,0.8,7.8,0.001);//Material ACERO
		_box1.body.cbTypes.add(ballCollisionType);
		_box1.loadGraphic("assets/images/ball.png");
		add(_box1);
		
		//Planetas
		
		_planets =new FlxTypedGroup <FlxNapeSprite>();
		
		//Añadimos Planetas
		
		for(i in 1..._numPlanets+1){
			var _planet = new FlxNapeSprite(FlxG.width/2*i,FlxG.height/2);
			_planet.createCircularBody(67, BodyType.KINEMATIC);
			_planet.body.angularVel = FlxRandom.floatRanged(0.2,0.5);
			_planet.setBodyMaterial(0.2, 0.57, 0.74, 7.8, 0.001);//Material ACERO
			_planet.body.cbTypes.add(wallCollisionType);
			var ruta :String = "assets/images/planet" + Std.string(i) + ".png";
			trace(ruta);
			_planet.loadGraphic(ruta);
			_planets.add(_planet);
		}
		
		
		add(_planets);
		
		//Handle Collision
		interactionListener = new InteractionListener(CbEvent.BEGIN,InteractionType.COLLISION,wallCollisionType,ballCollisionType,collisionHandle);
		FlxNapeState.space.listeners.add(interactionListener);
		
		//Moneda
		_coin = new Coin(FlxG.width / 3, FlxG.height / 2);
		add(_coin);
		
		//Pad Virtual
		
		_vPdad = new FlxVirtualPad(DPadMode.LEFT_RIGHT, ActionMode.A);
		
		//Configuracion de los botones
		
		add(_vPdad);
		
		//Camara
		FlxG.camera.follow(_box1,FlxCamera.STYLE_LOCKON,1);
		
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
		
		calcularPlaneta();
		planetGravity(_box1,_planetForce);
		movimiento();
		
	}	
	
	private function movimiento(){
		
			if(FlxG.keys.anyJustPressed(["D"]) || _vPdad.buttonRight.status == FlxButton.PRESSED){
				_box1.body.applyImpulse(new Vec2(120,0));
			}
			
			if(FlxG.keys.anyJustPressed(["A"]) || _vPdad.buttonLeft.status == FlxButton.PRESSED){
				_box1.body.applyImpulse(new Vec2(-120,0));
			}
			
			if(FlxG.keys.anyPressed(["SPACE"])|| _vPdad.buttonA.status == FlxButton.PRESSED){
				FlxNapeVelocity.moveTowardsObject(_box1, _planetForce, -800);//con esto queda una gravedad mas suave
			}
	}
	
	private function calcularPlaneta(){
		var aux : Int = FlxG.width;
		for(planet in _planets){
			var dis : Int = FlxMath.distanceBetween(_box1, planet);
			if (dis < aux) {
				aux = dis;
				_planetForce = planet;
			}
		}
	}
	
	private function planetGravity(ball : FlxNapeSprite, planet : FlxNapeSprite){
		//FlxNapeVelocity.moveTowardsObject(_box1, _planet1, 300);//con esto queda una gravedad mas suave
		var dx : Int = Std.int(planet.body.position.x - ball.body.position.x);
		var dy : Int =Std.int( planet.body.position.y - ball.body.position.y);
		var impulse : Vec2 = Vec2.weak(dx, dy);
		impulse.length = 750;
		ball.body.applyImpulse(impulse);
		
		
	}
	
	private function collisionHandle(collision:InteractionCallback){
		
	}
}