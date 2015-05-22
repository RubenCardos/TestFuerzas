#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void InertiaMode_obj::__construct()
{
HX_STACK_FRAME("nape.phys.InertiaMode","new",0xdfed1f79,"nape.phys.InertiaMode.new","nape/phys/InertiaMode.hx",181,0x22437677)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//InertiaMode_obj::~InertiaMode_obj() { }

Dynamic InertiaMode_obj::__CreateEmpty() { return  new InertiaMode_obj; }
hx::ObjectPtr< InertiaMode_obj > InertiaMode_obj::__new()
{  hx::ObjectPtr< InertiaMode_obj > result = new InertiaMode_obj();
	result->__construct();
	return result;}

Dynamic InertiaMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InertiaMode_obj > result = new InertiaMode_obj();
	result->__construct();
	return result;}

::String InertiaMode_obj::toString( ){
	HX_STACK_FRAME("nape.phys.InertiaMode","toString",0x5ea326f3,"nape.phys.InertiaMode.toString","nape/phys/InertiaMode.hx",192,0x22437677)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::InertiaMode _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::InertiaMode _g = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DEFAULT");
	}
	else{
		HX_STACK_LINE(193)
		::nape::phys::InertiaMode _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::InertiaMode _g2 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("FIXED");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,toString,return )

::nape::phys::InertiaMode InertiaMode_obj::get_DEFAULT( ){
	HX_STACK_FRAME("nape.phys.InertiaMode","get_DEFAULT",0x5b259cd1,"nape.phys.InertiaMode.get_DEFAULT","nape/phys/InertiaMode.hx",203,0x22437677)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::phys::InertiaMode _g = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,get_DEFAULT,return )

::nape::phys::InertiaMode InertiaMode_obj::get_FIXED( ){
	HX_STACK_FRAME("nape.phys.InertiaMode","get_FIXED",0x09d0b584,"nape.phys.InertiaMode.get_FIXED","nape/phys/InertiaMode.hx",218,0x22437677)
	HX_STACK_LINE(219)
	if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(221)
		::nape::phys::InertiaMode _g = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = _g;
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(224)
	return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,get_FIXED,return )


InertiaMode_obj::InertiaMode_obj()
{
}

Dynamic InertiaMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { return get_FIXED(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { return get_DEFAULT(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_FIXED") ) { return get_FIXED_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DEFAULT") ) { return get_DEFAULT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InertiaMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InertiaMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_DEFAULT"),
	HX_CSTRING("get_FIXED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InertiaMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InertiaMode_obj::__mClass,"__mClass");
};

#endif

Class InertiaMode_obj::__mClass;

void InertiaMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.InertiaMode"), hx::TCanCast< InertiaMode_obj> ,sStaticFields,sMemberFields,
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

void InertiaMode_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
