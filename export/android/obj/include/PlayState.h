#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/nape/FlxNapeState.h>
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxAnalog)
HX_DECLARE_CLASS2(flixel,ui,FlxVirtualPad)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionListener)
HX_DECLARE_CLASS2(nape,callbacks,Listener)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::addons::nape::FlxNapeState_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::addons::nape::FlxNapeSprite _box1;
		::flixel::addons::nape::FlxNapeSprite _planet1;
		::flixel::addons::display::FlxBackdrop _bg;
		::flixel::addons::nape::FlxNapeSprite _planet2;
		::flixel::group::FlxTypedGroup _planets;
		::flixel::addons::nape::FlxNapeSprite _planetForce;
		int _numPlanets;
		::nape::callbacks::InteractionListener interactionListener;
		::nape::callbacks::CbType wallCollisionType;
		::nape::callbacks::CbType ballCollisionType;
		::flixel::ui::FlxVirtualPad _vPdad;
		::flixel::ui::FlxAnalog _vJoystick;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void movimiento( );
		Dynamic movimiento_dyn();

		virtual Void calcularPlaneta( );
		Dynamic calcularPlaneta_dyn();

		virtual Void planetGravity( ::flixel::addons::nape::FlxNapeSprite ball,::flixel::addons::nape::FlxNapeSprite planet);
		Dynamic planetGravity_dyn();

		virtual Void collisionHandle( ::nape::callbacks::InteractionCallback collision);
		Dynamic collisionHandle_dyn();

};


#endif /* INCLUDED_PlayState */ 
