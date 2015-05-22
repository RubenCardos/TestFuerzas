#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.InteractionType","new",0xd712f318,"nape.callbacks.InteractionType.new","nape/callbacks/InteractionType.hx",181,0xf2de5b1a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//InteractionType_obj::~InteractionType_obj() { }

Dynamic InteractionType_obj::__CreateEmpty() { return  new InteractionType_obj; }
hx::ObjectPtr< InteractionType_obj > InteractionType_obj::__new()
{  hx::ObjectPtr< InteractionType_obj > result = new InteractionType_obj();
	result->__construct();
	return result;}

Dynamic InteractionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionType_obj > result = new InteractionType_obj();
	result->__construct();
	return result;}

::String InteractionType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","toString",0x413ed2f4,"nape.callbacks.InteractionType.toString","nape/callbacks/InteractionType.hx",192,0xf2de5b1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::InteractionType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("COLLISION");
	}
	else{
		HX_STACK_LINE(193)
		::nape::callbacks::InteractionType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::InteractionType _g2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("SENSOR");
		}
		else{
			HX_STACK_LINE(194)
			::nape::callbacks::InteractionType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::InteractionType _g4 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("FLUID");
			}
			else{
				HX_STACK_LINE(195)
				::nape::callbacks::InteractionType _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::InteractionType _g6 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g6;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					_g7 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _g7))){
					HX_STACK_LINE(195)
					return HX_CSTRING("ANY");
				}
				else{
					HX_STACK_LINE(196)
					return HX_CSTRING("");
				}
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,toString,return )

::nape::callbacks::InteractionType InteractionType_obj::get_COLLISION( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_COLLISION",0x1d91a4e1,"nape.callbacks.InteractionType.get_COLLISION","nape/callbacks/InteractionType.hx",203,0xf2de5b1a)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_COLLISION,return )

::nape::callbacks::InteractionType InteractionType_obj::get_SENSOR( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_SENSOR",0xed25724b,"nape.callbacks.InteractionType.get_SENSOR","nape/callbacks/InteractionType.hx",215,0xf2de5b1a)
	HX_STACK_LINE(216)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g;
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_SENSOR,return )

::nape::callbacks::InteractionType InteractionType_obj::get_FLUID( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_FLUID",0x7164eaf9,"nape.callbacks.InteractionType.get_FLUID","nape/callbacks/InteractionType.hx",228,0xf2de5b1a)
	HX_STACK_LINE(229)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g;
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_FLUID,return )

::nape::callbacks::InteractionType InteractionType_obj::get_ANY( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_ANY",0x5a593e1b,"nape.callbacks.InteractionType.get_ANY","nape/callbacks/InteractionType.hx",241,0xf2de5b1a)
	HX_STACK_LINE(242)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
		HX_STACK_LINE(243)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(244)
		::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g;
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(247)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_ANY,return )


InteractionType_obj::InteractionType_obj()
{
}

Dynamic InteractionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return get_ANY(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { return get_FLUID(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { return get_SENSOR(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
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

Dynamic InteractionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_COLLISION"),
	HX_CSTRING("get_SENSOR"),
	HX_CSTRING("get_FLUID"),
	HX_CSTRING("get_ANY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

#endif

Class InteractionType_obj::__mClass;

void InteractionType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionType"), hx::TCanCast< InteractionType_obj> ,sStaticFields,sMemberFields,
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

void InteractionType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
