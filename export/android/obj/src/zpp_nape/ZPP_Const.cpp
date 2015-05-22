#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_Const
#include <zpp_nape/ZPP_Const.h>
#endif
namespace zpp_nape{

Void ZPP_Const_obj::__construct()
{
	return null();
}

//ZPP_Const_obj::~ZPP_Const_obj() { }

Dynamic ZPP_Const_obj::__CreateEmpty() { return  new ZPP_Const_obj; }
hx::ObjectPtr< ZPP_Const_obj > ZPP_Const_obj::__new()
{  hx::ObjectPtr< ZPP_Const_obj > result = new ZPP_Const_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Const_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Const_obj > result = new ZPP_Const_obj();
	result->__construct();
	return result;}

Float ZPP_Const_obj::POSINF( ){
	HX_STACK_FRAME("zpp_nape.ZPP_Const","POSINF",0x143cd95e,"zpp_nape.ZPP_Const.POSINF","zpp_nape/Const.hx",185,0x5415a15d)
	HX_STACK_LINE(185)
	return ::Math_obj::POSITIVE_INFINITY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,POSINF,return )

Float ZPP_Const_obj::NEGINF( ){
	HX_STACK_FRAME("zpp_nape.ZPP_Const","NEGINF",0x7d95c422,"zpp_nape.ZPP_Const.NEGINF","zpp_nape/Const.hx",189,0x5415a15d)
	HX_STACK_LINE(189)
	return ::Math_obj::NEGATIVE_INFINITY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,NEGINF,return )

Float ZPP_Const_obj::FMAX;


ZPP_Const_obj::ZPP_Const_obj()
{
}

Dynamic ZPP_Const_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"POSINF") ) { return POSINF_dyn(); }
		if (HX_FIELD_EQ(inName,"NEGINF") ) { return NEGINF_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Const_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Const_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("POSINF"),
	HX_CSTRING("NEGINF"),
	HX_CSTRING("FMAX"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Const_obj::FMAX,"FMAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Const_obj::FMAX,"FMAX");
};

#endif

Class ZPP_Const_obj::__mClass;

void ZPP_Const_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.ZPP_Const"), hx::TCanCast< ZPP_Const_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ZPP_Const_obj::__boot()
{
	FMAX= 1e100;
}

} // end namespace zpp_nape
