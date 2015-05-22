#ifndef INCLUDED_flixel_ui__FlxAnalog_GraphicBase
#define INCLUDED_flixel_ui__FlxAnalog_GraphicBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/BitmapData.h>
HX_DECLARE_CLASS3(flixel,ui,_FlxAnalog,GraphicBase)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
namespace flixel{
namespace ui{
namespace _FlxAnalog{


class HXCPP_CLASS_ATTRIBUTES  GraphicBase_obj : public ::openfl::_v2::display::BitmapData_obj{
	public:
		typedef ::openfl::_v2::display::BitmapData_obj super;
		typedef GraphicBase_obj OBJ_;
		GraphicBase_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GraphicBase_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GraphicBase"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxAnalog

#endif /* INCLUDED_flixel_ui__FlxAnalog_GraphicBase */ 
