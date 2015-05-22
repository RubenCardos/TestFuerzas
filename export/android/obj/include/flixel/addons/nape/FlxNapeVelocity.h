#ifndef INCLUDED_flixel_addons_nape_FlxNapeVelocity
#define INCLUDED_flixel_addons_nape_FlxNapeVelocity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeVelocity)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  FlxNapeVelocity_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxNapeVelocity_obj OBJ_;
		FlxNapeVelocity_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxNapeVelocity_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeVelocity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxNapeVelocity"); }

		static Void moveTowardsObject( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  Speed);
		static Dynamic moveTowardsObject_dyn();

		static Void moveTowardsMouse( ::flixel::addons::nape::FlxNapeSprite Source,hx::Null< Float >  Speed);
		static Dynamic moveTowardsMouse_dyn();

		static Void moveTowardsTouch( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  Speed);
		static Dynamic moveTowardsTouch_dyn();

		static Void moveTowardsPoint( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::util::FlxPoint Target,hx::Null< Float >  Speed);
		static Dynamic moveTowardsPoint_dyn();

		static Void stopVelocity( ::flixel::addons::nape::FlxNapeSprite Source);
		static Dynamic stopVelocity_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeVelocity */ 
