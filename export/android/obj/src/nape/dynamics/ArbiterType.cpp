#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void ArbiterType_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ArbiterType","new",0x498d4181,"nape.dynamics.ArbiterType.new","nape/dynamics/ArbiterType.hx",181,0xeb73a8ef)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ArbiterType_obj::~ArbiterType_obj() { }

Dynamic ArbiterType_obj::__CreateEmpty() { return  new ArbiterType_obj; }
hx::ObjectPtr< ArbiterType_obj > ArbiterType_obj::__new()
{  hx::ObjectPtr< ArbiterType_obj > result = new ArbiterType_obj();
	result->__construct();
	return result;}

Dynamic ArbiterType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArbiterType_obj > result = new ArbiterType_obj();
	result->__construct();
	return result;}

::String ArbiterType_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","toString",0x6622a7eb,"nape.dynamics.ArbiterType.toString","nape/dynamics/ArbiterType.hx",192,0xeb73a8ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::dynamics::ArbiterType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::dynamics::ArbiterType _g = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("COLLISION");
	}
	else{
		HX_STACK_LINE(193)
		::nape::dynamics::ArbiterType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::dynamics::ArbiterType _g2 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("SENSOR");
		}
		else{
			HX_STACK_LINE(194)
			::nape::dynamics::ArbiterType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::dynamics::ArbiterType _g4 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("FLUID");
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


HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,toString,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_COLLISION( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_COLLISION",0xcc73708a,"nape.dynamics.ArbiterType.get_COLLISION","nape/dynamics/ArbiterType.hx",202,0xeb73a8ef)
	HX_STACK_LINE(203)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION == null()))){
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(205)
		::nape::dynamics::ArbiterType _g = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = _g;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(208)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_COLLISION,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_SENSOR( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_SENSOR",0xf261b302,"nape.dynamics.ArbiterType.get_SENSOR","nape/dynamics/ArbiterType.hx",215,0xeb73a8ef)
	HX_STACK_LINE(216)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR == null()))){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::nape::dynamics::ArbiterType _g = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = _g;
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_SENSOR,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_FLUID( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_FLUID",0x93db6e22,"nape.dynamics.ArbiterType.get_FLUID","nape/dynamics/ArbiterType.hx",228,0xeb73a8ef)
	HX_STACK_LINE(229)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID == null()))){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::nape::dynamics::ArbiterType _g = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = _g;
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_FLUID,return )


ArbiterType_obj::ArbiterType_obj()
{
}

Dynamic ArbiterType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { return get_FLUID(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { return get_SENSOR(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { return get_COLLISION(); }
		if (HX_FIELD_EQ(inName,"get_FLUID") ) { return get_FLUID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SENSOR") ) { return get_SENSOR_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_COLLISION") ) { return get_COLLISION_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArbiterType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArbiterType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_COLLISION"),
	HX_CSTRING("get_SENSOR"),
	HX_CSTRING("get_FLUID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#endif

Class ArbiterType_obj::__mClass;

void ArbiterType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.ArbiterType"), hx::TCanCast< ArbiterType_obj> ,sStaticFields,sMemberFields,
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

void ArbiterType_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
