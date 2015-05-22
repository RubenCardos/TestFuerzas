#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_DPadMode
#include <flixel/ui/DPadMode.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::DPadMode DPadMode_obj::FULL;

::flixel::ui::DPadMode DPadMode_obj::LEFT_RIGHT;

::flixel::ui::DPadMode DPadMode_obj::NONE;

::flixel::ui::DPadMode DPadMode_obj::UP_DOWN;

::flixel::ui::DPadMode DPadMode_obj::UP_LEFT_RIGHT;

HX_DEFINE_CREATE_ENUM(DPadMode_obj)

int DPadMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FULL")) return 4;
	if (inName==HX_CSTRING("LEFT_RIGHT")) return 2;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("UP_DOWN")) return 1;
	if (inName==HX_CSTRING("UP_LEFT_RIGHT")) return 3;
	return super::__FindIndex(inName);
}

int DPadMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FULL")) return 0;
	if (inName==HX_CSTRING("LEFT_RIGHT")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("UP_DOWN")) return 0;
	if (inName==HX_CSTRING("UP_LEFT_RIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DPadMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FULL")) return FULL;
	if (inName==HX_CSTRING("LEFT_RIGHT")) return LEFT_RIGHT;
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("UP_DOWN")) return UP_DOWN;
	if (inName==HX_CSTRING("UP_LEFT_RIGHT")) return UP_LEFT_RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("UP_DOWN"),
	HX_CSTRING("LEFT_RIGHT"),
	HX_CSTRING("UP_LEFT_RIGHT"),
	HX_CSTRING("FULL"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DPadMode_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(DPadMode_obj::LEFT_RIGHT,"LEFT_RIGHT");
	HX_MARK_MEMBER_NAME(DPadMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(DPadMode_obj::UP_DOWN,"UP_DOWN");
	HX_MARK_MEMBER_NAME(DPadMode_obj::UP_LEFT_RIGHT,"UP_LEFT_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DPadMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DPadMode_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(DPadMode_obj::LEFT_RIGHT,"LEFT_RIGHT");
	HX_VISIT_MEMBER_NAME(DPadMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(DPadMode_obj::UP_DOWN,"UP_DOWN");
	HX_VISIT_MEMBER_NAME(DPadMode_obj::UP_LEFT_RIGHT,"UP_LEFT_RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class DPadMode_obj::__mClass;

Dynamic __Create_DPadMode_obj() { return new DPadMode_obj; }

void DPadMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.DPadMode"), hx::TCanCast< DPadMode_obj >,sStaticFields,sMemberFields,
	&__Create_DPadMode_obj, &__Create,
	&super::__SGetClass(), &CreateDPadMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DPadMode_obj::__boot()
{
hx::Static(FULL) = hx::CreateEnum< DPadMode_obj >(HX_CSTRING("FULL"),4);
hx::Static(LEFT_RIGHT) = hx::CreateEnum< DPadMode_obj >(HX_CSTRING("LEFT_RIGHT"),2);
hx::Static(NONE) = hx::CreateEnum< DPadMode_obj >(HX_CSTRING("NONE"),0);
hx::Static(UP_DOWN) = hx::CreateEnum< DPadMode_obj >(HX_CSTRING("UP_DOWN"),1);
hx::Static(UP_LEFT_RIGHT) = hx::CreateEnum< DPadMode_obj >(HX_CSTRING("UP_LEFT_RIGHT"),3);
}


} // end namespace flixel
} // end namespace ui
