#ifndef INCLUDED_flixel_ui__FlxAnalog_GraphicThumb
#define INCLUDED_flixel_ui__FlxAnalog_GraphicThumb

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/BitmapData.h>
HX_DECLARE_CLASS3(flixel,ui,_FlxAnalog,GraphicThumb)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
namespace flixel{
namespace ui{
namespace _FlxAnalog{


class HXCPP_CLASS_ATTRIBUTES  GraphicThumb_obj : public ::openfl::_v2::display::BitmapData_obj{
	public:
		typedef ::openfl::_v2::display::BitmapData_obj super;
		typedef GraphicThumb_obj OBJ_;
		GraphicThumb_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GraphicThumb_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicThumb_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GraphicThumb"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxAnalog

#endif /* INCLUDED_flixel_ui__FlxAnalog_GraphicThumb */ 
