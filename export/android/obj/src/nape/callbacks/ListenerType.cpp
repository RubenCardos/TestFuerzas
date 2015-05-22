#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void ListenerType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.ListenerType","new",0xec0b3486,"nape.callbacks.ListenerType.new","nape/callbacks/ListenerType.hx",181,0xddcbcca8)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ListenerType_obj::~ListenerType_obj() { }

Dynamic ListenerType_obj::__CreateEmpty() { return  new ListenerType_obj; }
hx::ObjectPtr< ListenerType_obj > ListenerType_obj::__new()
{  hx::ObjectPtr< ListenerType_obj > result = new ListenerType_obj();
	result->__construct();
	return result;}

Dynamic ListenerType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListenerType_obj > result = new ListenerType_obj();
	result->__construct();
	return result;}

::String ListenerType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","toString",0x56fca2c6,"nape.callbacks.ListenerType.toString","nape/callbacks/ListenerType.hx",192,0xddcbcca8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::ListenerType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("BODY");
	}
	else{
		HX_STACK_LINE(193)
		::nape::callbacks::ListenerType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::ListenerType _g2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("CONSTRAINT");
		}
		else{
			HX_STACK_LINE(194)
			::nape::callbacks::ListenerType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::ListenerType _g4 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("INTERACTION");
			}
			else{
				HX_STACK_LINE(195)
				::nape::callbacks::ListenerType _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::ListenerType _g6 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = _g6;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					_g7 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
				}
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _g7))){
					HX_STACK_LINE(195)
					return HX_CSTRING("PRE");
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


HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,toString,return )

::nape::callbacks::ListenerType ListenerType_obj::get_BODY( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_BODY",0xca24d045,"nape.callbacks.ListenerType.get_BODY","nape/callbacks/ListenerType.hx",203,0xddcbcca8)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_BODY,return )

::nape::callbacks::ListenerType ListenerType_obj::get_CONSTRAINT( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_CONSTRAINT",0x9db05e40,"nape.callbacks.ListenerType.get_CONSTRAINT","nape/callbacks/ListenerType.hx",216,0xddcbcca8)
	HX_STACK_LINE(217)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(219)
		::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = _g;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(222)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_CONSTRAINT,return )

::nape::callbacks::ListenerType ListenerType_obj::get_INTERACTION( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_INTERACTION",0x8147006f,"nape.callbacks.ListenerType.get_INTERACTION","nape/callbacks/ListenerType.hx",229,0xddcbcca8)
	HX_STACK_LINE(230)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(232)
		::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = _g;
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(235)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_INTERACTION,return )

::nape::callbacks::ListenerType ListenerType_obj::get_PRE( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_PRE",0xad2533c0,"nape.callbacks.ListenerType.get_PRE","nape/callbacks/ListenerType.hx",242,0xddcbcca8)
	HX_STACK_LINE(243)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(245)
		::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = _g;
		HX_STACK_LINE(246)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(248)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_PRE,return )


ListenerType_obj::ListenerType_obj()
{
}

Dynamic ListenerType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PRE") ) { return get_PRE(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { return get_BODY(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_PRE") ) { return get_PRE_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BODY") ) { return get_BODY_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CONSTRAINT") ) { return get_CONSTRAINT(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTERACTION") ) { return get_INTERACTION(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_CONSTRAINT") ) { return get_CONSTRAINT_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_INTERACTION") ) { return get_INTERACTION_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListenerType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ListenerType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_BODY"),
	HX_CSTRING("get_CONSTRAINT"),
	HX_CSTRING("get_INTERACTION"),
	HX_CSTRING("get_PRE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
};

#endif

Class ListenerType_obj::__mClass;

void ListenerType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.ListenerType"), hx::TCanCast< ListenerType_obj> ,sStaticFields,sMemberFields,
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

void ListenerType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
