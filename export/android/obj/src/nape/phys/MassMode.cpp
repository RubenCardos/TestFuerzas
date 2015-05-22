#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void MassMode_obj::__construct()
{
HX_STACK_FRAME("nape.phys.MassMode","new",0x1df9921f,"nape.phys.MassMode.new","nape/phys/MassMode.hx",181,0x8a4995d1)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MassMode_obj::~MassMode_obj() { }

Dynamic MassMode_obj::__CreateEmpty() { return  new MassMode_obj; }
hx::ObjectPtr< MassMode_obj > MassMode_obj::__new()
{  hx::ObjectPtr< MassMode_obj > result = new MassMode_obj();
	result->__construct();
	return result;}

Dynamic MassMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MassMode_obj > result = new MassMode_obj();
	result->__construct();
	return result;}

::String MassMode_obj::toString( ){
	HX_STACK_FRAME("nape.phys.MassMode","toString",0xc3775a8d,"nape.phys.MassMode.toString","nape/phys/MassMode.hx",192,0x8a4995d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::MassMode _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::MassMode _g = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DEFAULT");
	}
	else{
		HX_STACK_LINE(193)
		::nape::phys::MassMode _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::MassMode _g2 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
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


HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,toString,return )

::nape::phys::MassMode MassMode_obj::get_DEFAULT( ){
	HX_STACK_FRAME("nape.phys.MassMode","get_DEFAULT",0xce7e2577,"nape.phys.MassMode.get_DEFAULT","nape/phys/MassMode.hx",203,0x8a4995d1)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::phys::MassMode _g = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,get_DEFAULT,return )

::nape::phys::MassMode MassMode_obj::get_FIXED( ){
	HX_STACK_FRAME("nape.phys.MassMode","get_FIXED",0xdea9a8aa,"nape.phys.MassMode.get_FIXED","nape/phys/MassMode.hx",218,0x8a4995d1)
	HX_STACK_LINE(219)
	if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(221)
		::nape::phys::MassMode _g = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = _g;
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(224)
	return ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,get_FIXED,return )


MassMode_obj::MassMode_obj()
{
}

Dynamic MassMode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MassMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MassMode_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MassMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MassMode_obj::__mClass,"__mClass");
};

#endif

Class MassMode_obj::__mClass;

void MassMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.MassMode"), hx::TCanCast< MassMode_obj> ,sStaticFields,sMemberFields,
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

void MassMode_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
