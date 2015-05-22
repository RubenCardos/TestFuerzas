#if !lime_hybrid


package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._legacy.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		path.set ("assets/images/ball.png", "assets/images/ball.png");
		type.set ("assets/images/ball.png", AssetType.IMAGE);
		path.set ("assets/images/Box.png", "assets/images/Box.png");
		type.set ("assets/images/Box.png", AssetType.IMAGE);
		path.set ("assets/images/coin.png", "assets/images/coin.png");
		type.set ("assets/images/coin.png", AssetType.IMAGE);
		path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		path.set ("assets/images/planet1.png", "assets/images/planet1.png");
		type.set ("assets/images/planet1.png", AssetType.IMAGE);
		path.set ("assets/images/planet2.png", "assets/images/planet2.png");
		type.set ("assets/images/planet2.png", AssetType.IMAGE);
		path.set ("assets/images/Space.PNG", "assets/images/Space.PNG");
		type.set ("assets/images/Space.PNG", AssetType.IMAGE);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
		type.set ("flixel/flixel-ui/img/box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
		type.set ("flixel/flixel-ui/img/button.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
		type.set ("flixel/flixel-ui/img/button_arrow_down.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
		type.set ("flixel/flixel-ui/img/button_arrow_left.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
		type.set ("flixel/flixel-ui/img/button_arrow_right.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
		type.set ("flixel/flixel-ui/img/button_arrow_up.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
		type.set ("flixel/flixel-ui/img/button_thin.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
		type.set ("flixel/flixel-ui/img/button_toggle.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
		type.set ("flixel/flixel-ui/img/check_box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
		type.set ("flixel/flixel-ui/img/check_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
		type.set ("flixel/flixel-ui/img/chrome.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
		type.set ("flixel/flixel-ui/img/chrome_flat.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
		type.set ("flixel/flixel-ui/img/chrome_inset.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
		type.set ("flixel/flixel-ui/img/chrome_light.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
		type.set ("flixel/flixel-ui/img/dropdown_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
		type.set ("flixel/flixel-ui/img/finger_big.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
		type.set ("flixel/flixel-ui/img/finger_small.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
		type.set ("flixel/flixel-ui/img/hilight.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
		type.set ("flixel/flixel-ui/img/invis.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
		type.set ("flixel/flixel-ui/img/minus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
		type.set ("flixel/flixel-ui/img/plus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
		type.set ("flixel/flixel-ui/img/radio.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
		type.set ("flixel/flixel-ui/img/radio_dot.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
		type.set ("flixel/flixel-ui/img/swatch.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
		type.set ("flixel/flixel-ui/img/tab.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
		type.set ("flixel/flixel-ui/img/tab_back.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
		type.set ("flixel/flixel-ui/xml/defaults.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
		type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
		type.set ("flixel/flixel-ui/xml/default_popup.xml", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/ball.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/planet1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/planet2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Space.PNG";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "flixel/flixel-ui/img/box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_thin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_toggle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_flat.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_inset.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_light.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/dropdown_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_big.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_small.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/hilight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/invis.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/minus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/plus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio_dot.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/swatch.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab_back.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/xml/defaults.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_loading_screen.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_popup.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		
		
		#else
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash












































#elseif html5












































#else

#if (windows || mac || linux)







#else




#end

#end


#else


package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		path.set ("assets/images/ball.png", "assets/images/ball.png");
		type.set ("assets/images/ball.png", AssetType.IMAGE);
		path.set ("assets/images/Box.png", "assets/images/Box.png");
		type.set ("assets/images/Box.png", AssetType.IMAGE);
		path.set ("assets/images/coin.png", "assets/images/coin.png");
		type.set ("assets/images/coin.png", AssetType.IMAGE);
		path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		path.set ("assets/images/planet1.png", "assets/images/planet1.png");
		type.set ("assets/images/planet1.png", AssetType.IMAGE);
		path.set ("assets/images/planet2.png", "assets/images/planet2.png");
		type.set ("assets/images/planet2.png", AssetType.IMAGE);
		path.set ("assets/images/Space.PNG", "assets/images/Space.PNG");
		type.set ("assets/images/Space.PNG", AssetType.IMAGE);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
		type.set ("flixel/flixel-ui/img/box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
		type.set ("flixel/flixel-ui/img/button.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
		type.set ("flixel/flixel-ui/img/button_arrow_down.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
		type.set ("flixel/flixel-ui/img/button_arrow_left.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
		type.set ("flixel/flixel-ui/img/button_arrow_right.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
		type.set ("flixel/flixel-ui/img/button_arrow_up.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
		type.set ("flixel/flixel-ui/img/button_thin.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
		type.set ("flixel/flixel-ui/img/button_toggle.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
		type.set ("flixel/flixel-ui/img/check_box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
		type.set ("flixel/flixel-ui/img/check_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
		type.set ("flixel/flixel-ui/img/chrome.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
		type.set ("flixel/flixel-ui/img/chrome_flat.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
		type.set ("flixel/flixel-ui/img/chrome_inset.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
		type.set ("flixel/flixel-ui/img/chrome_light.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
		type.set ("flixel/flixel-ui/img/dropdown_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
		type.set ("flixel/flixel-ui/img/finger_big.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
		type.set ("flixel/flixel-ui/img/finger_small.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
		type.set ("flixel/flixel-ui/img/hilight.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
		type.set ("flixel/flixel-ui/img/invis.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
		type.set ("flixel/flixel-ui/img/minus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
		type.set ("flixel/flixel-ui/img/plus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
		type.set ("flixel/flixel-ui/img/radio.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
		type.set ("flixel/flixel-ui/img/radio_dot.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
		type.set ("flixel/flixel-ui/img/swatch.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
		type.set ("flixel/flixel-ui/img/tab.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
		type.set ("flixel/flixel-ui/img/tab_back.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
		type.set ("flixel/flixel-ui/xml/defaults.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
		type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
		type.set ("flixel/flixel-ui/xml/default_popup.xml", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/ball.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/planet1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/planet2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Space.PNG";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "flixel/flixel-ui/img/box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_thin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_toggle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_flat.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_inset.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_light.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/dropdown_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_big.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_small.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/hilight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/invis.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/minus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/plus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio_dot.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/swatch.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab_back.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/xml/defaults.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_loading_screen.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_popup.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash












































#elseif html5












































#else



#if (windows || mac || linux)





#end

#if openfl

#end

#end
#end


#end