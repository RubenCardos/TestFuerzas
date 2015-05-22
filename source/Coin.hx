package;

import flixel.FlxSprite;
import flixel.FlxG;

class Coin extends FlxSprite
{
   public function new(X:Float=0, Y:Float=0) 
	{
		super(X, Y);
		loadGraphic("assets/images/coin.png", true, 32, 32);
		animation.add("iddle", [0, 1, 2, 3, 4, 5, 6], 12, true);
		animation.play("iddle");
	}

    override public function update():Void
    {
        super.update();
    }

    override public function destroy():Void
    {
        super.destroy();
    }
}