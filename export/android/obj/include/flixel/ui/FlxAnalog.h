#ifndef INCLUDED_flixel_ui_FlxAnalog
#define INCLUDED_flixel_ui_FlxAnalog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxSpriteGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,ui,FlxAnalog)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxAnalog_obj : public ::flixel::group::FlxSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxSpriteGroup_obj super;
		typedef FlxAnalog_obj OBJ_;
		FlxAnalog_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< Float >  __o_Ease);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAnalog_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< Float >  __o_Ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAnalog_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAnalog"); }

		int status;
		::flixel::FlxSprite thumb;
		::flixel::FlxSprite base;
		Dynamic onUp;
		Dynamic &onUp_dyn() { return onUp;}
		Dynamic onDown;
		Dynamic &onDown_dyn() { return onDown;}
		Dynamic onOver;
		Dynamic &onOver_dyn() { return onOver;}
		Dynamic onPressed;
		Dynamic &onPressed_dyn() { return onPressed;}
		::flixel::input::touch::FlxTouch _currentTouch;
		Array< ::Dynamic > _tempTouches;
		::flixel::util::FlxRect _zone;
		Float _radius;
		Float _direction;
		Float _amount;
		Float _ease;
		virtual Void createBase( );
		Dynamic createBase_dyn();

		virtual Void createThumb( );
		Dynamic createThumb_dyn();

		virtual Void createZone( );
		Dynamic createZone_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual bool updateAnalog( ::flixel::util::FlxPoint TouchPoint,bool Pressed,bool JustPressed,bool JustReleased,::flixel::input::touch::FlxTouch Touch);
		Dynamic updateAnalog_dyn();

		virtual Float getAngle( );
		Dynamic getAngle_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual Float set_x( Float X);

		virtual Float set_y( Float Y);

		static int NORMAL;
		static int HIGHLIGHT;
		static int PRESSED;
		static Array< ::Dynamic > _analogs;
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxAnalog */ 
