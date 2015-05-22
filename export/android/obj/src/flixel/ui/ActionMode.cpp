#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_ActionMode
#include <flixel/ui/ActionMode.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::ActionMode ActionMode_obj::A;

::flixel::ui::ActionMode ActionMode_obj::A_B;

::flixel::ui::ActionMode ActionMode_obj::A_B_C;

::flixel::ui::ActionMode ActionMode_obj::A_B_X_Y;

::flixel::ui::ActionMode ActionMode_obj::NONE;

HX_DEFINE_CREATE_ENUM(ActionMode_obj)

int ActionMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("A")) return 1;
	if (inName==HX_CSTRING("A_B")) return 2;
	if (inName==HX_CSTRING("A_B_C")) return 3;
	if (inName==HX_CSTRING("A_B_X_Y")) return 4;
	if (inName==HX_CSTRING("NONE")) return 0;
	return super::__FindIndex(inName);
}

int ActionMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("A")) return 0;
	if (inName==HX_CSTRING("A_B")) return 0;
	if (inName==HX_CSTRING("A_B_C")) return 0;
	if (inName==HX_CSTRING("A_B_X_Y")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ActionMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("A")) return A;
	if (inName==HX_CSTRING("A_B")) return A_B;
	if (inName==HX_CSTRING("A_B_C")) return A_B_C;
	if (inName==HX_CSTRING("A_B_X_Y")) return A_B_X_Y;
	if (inName==HX_CSTRING("NONE")) return NONE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("A"),
	HX_CSTRING("A_B"),
	HX_CSTRING("A_B_C"),
	HX_CSTRING("A_B_X_Y"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActionMode_obj::A,"A");
	HX_MARK_MEMBER_NAME(ActionMode_obj::A_B,"A_B");
	HX_MARK_MEMBER_NAME(ActionMode_obj::A_B_C,"A_B_C");
	HX_MARK_MEMBER_NAME(ActionMode_obj::A_B_X_Y,"A_B_X_Y");
	HX_MARK_MEMBER_NAME(ActionMode_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActionMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ActionMode_obj::A,"A");
	HX_VISIT_MEMBER_NAME(ActionMode_obj::A_B,"A_B");
	HX_VISIT_MEMBER_NAME(ActionMode_obj::A_B_C,"A_B_C");
	HX_VISIT_MEMBER_NAME(ActionMode_obj::A_B_X_Y,"A_B_X_Y");
	HX_VISIT_MEMBER_NAME(ActionMode_obj::NONE,"NONE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ActionMode_obj::__mClass;

Dynamic __Create_ActionMode_obj() { return new ActionMode_obj; }

void ActionMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.ActionMode"), hx::TCanCast< ActionMode_obj >,sStaticFields,sMemberFields,
	&__Create_ActionMode_obj, &__Create,
	&super::__SGetClass(), &CreateActionMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ActionMode_obj::__boot()
{
hx::Static(A) = hx::CreateEnum< ActionMode_obj >(HX_CSTRING("A"),1);
hx::Static(A_B) = hx::CreateEnum< ActionMode_obj >(HX_CSTRING("A_B"),2);
hx::Static(A_B_C) = hx::CreateEnum< ActionMode_obj >(HX_CSTRING("A_B_C"),3);
hx::Static(A_B_X_Y) = hx::CreateEnum< ActionMode_obj >(HX_CSTRING("A_B_X_Y"),4);
hx::Static(NONE) = hx::CreateEnum< ActionMode_obj >(HX_CSTRING("NONE"),0);
}


} // end namespace flixel
} // end namespace ui
