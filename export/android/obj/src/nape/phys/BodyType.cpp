#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void BodyType_obj::__construct()
{
HX_STACK_FRAME("nape.phys.BodyType","new",0x00b540a4,"nape.phys.BodyType.new","nape/phys/BodyType.hx",181,0x8b4ddeec)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BodyType_obj::~BodyType_obj() { }

Dynamic BodyType_obj::__CreateEmpty() { return  new BodyType_obj; }
hx::ObjectPtr< BodyType_obj > BodyType_obj::__new()
{  hx::ObjectPtr< BodyType_obj > result = new BodyType_obj();
	result->__construct();
	return result;}

Dynamic BodyType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyType_obj > result = new BodyType_obj();
	result->__construct();
	return result;}

::String BodyType_obj::toString( ){
	HX_STACK_FRAME("nape.phys.BodyType","toString",0x611be9e8,"nape.phys.BodyType.toString","nape/phys/BodyType.hx",192,0x8b4ddeec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("STATIC");
	}
	else{
		HX_STACK_LINE(193)
		::nape::phys::BodyType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::BodyType _g2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("DYNAMIC");
		}
		else{
			HX_STACK_LINE(194)
			::nape::phys::BodyType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::phys::BodyType _g4 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("KINEMATIC");
			}
			else{
				HX_STACK_LINE(195)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,toString,return )

::nape::phys::BodyType BodyType_obj::get_STATIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_STATIC",0x2a18d8b3,"nape.phys.BodyType.get_STATIC","nape/phys/BodyType.hx",203,0x8b4ddeec)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_STATIC,return )

::nape::phys::BodyType BodyType_obj::get_DYNAMIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_DYNAMIC",0xab5527ba,"nape.phys.BodyType.get_DYNAMIC","nape/phys/BodyType.hx",217,0x8b4ddeec)
	HX_STACK_LINE(218)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g;
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_DYNAMIC,return )

::nape::phys::BodyType BodyType_obj::get_KINEMATIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_KINEMATIC",0xce5daa00,"nape.phys.BodyType.get_KINEMATIC","nape/phys/BodyType.hx",232,0x8b4ddeec)
	HX_STACK_LINE(233)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(235)
		::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = _g;
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(238)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_KINEMATIC,return )


BodyType_obj::BodyType_obj()
{
}

Dynamic BodyType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"STATIC") ) { return get_STATIC(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DYNAMIC") ) { return get_DYNAMIC(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"KINEMATIC") ) { return get_KINEMATIC(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_STATIC") ) { return get_STATIC_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC") ) { return get_DYNAMIC_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_KINEMATIC") ) { return get_KINEMATIC_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_STATIC"),
	HX_CSTRING("get_DYNAMIC"),
	HX_CSTRING("get_KINEMATIC"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#endif

Class BodyType_obj::__mClass;

void BodyType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.BodyType"), hx::TCanCast< BodyType_obj> ,sStaticFields,sMemberFields,
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

void BodyType_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
