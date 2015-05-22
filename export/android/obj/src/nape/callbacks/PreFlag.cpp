#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void PreFlag_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.PreFlag","new",0xdcfcc45b,"nape.callbacks.PreFlag.new","nape/callbacks/PreFlag.hx",182,0x68e91137)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PreFlag_obj::~PreFlag_obj() { }

Dynamic PreFlag_obj::__CreateEmpty() { return  new PreFlag_obj; }
hx::ObjectPtr< PreFlag_obj > PreFlag_obj::__new()
{  hx::ObjectPtr< PreFlag_obj > result = new PreFlag_obj();
	result->__construct();
	return result;}

Dynamic PreFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreFlag_obj > result = new PreFlag_obj();
	result->__construct();
	return result;}

::String PreFlag_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","toString",0x8f088ed1,"nape.callbacks.PreFlag.toString","nape/callbacks/PreFlag.hx",193,0x68e91137)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	::nape::callbacks::PreFlag _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(193)
			::nape::callbacks::PreFlag _g = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = _g;
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(193)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
	}
	HX_STACK_LINE(193)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(193)
		return HX_CSTRING("ACCEPT");
	}
	else{
		HX_STACK_LINE(194)
		::nape::callbacks::PreFlag _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(194)
				::nape::callbacks::PreFlag _g2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = _g2;
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(194)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
		}
		HX_STACK_LINE(194)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(194)
			return HX_CSTRING("IGNORE");
		}
		else{
			HX_STACK_LINE(195)
			::nape::callbacks::PreFlag _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(195)
					::nape::callbacks::PreFlag _g4 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = _g4;
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(195)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
			}
			HX_STACK_LINE(195)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(195)
				return HX_CSTRING("ACCEPT_ONCE");
			}
			else{
				HX_STACK_LINE(196)
				::nape::callbacks::PreFlag _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(196)
						::nape::callbacks::PreFlag _g6 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = _g6;
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(196)
					_g7 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
				}
				HX_STACK_LINE(196)
				if (((hx::ObjectPtr<OBJ_>(this) == _g7))){
					HX_STACK_LINE(196)
					return HX_CSTRING("IGNORE_ONCE");
				}
				else{
					HX_STACK_LINE(197)
					return HX_CSTRING("");
				}
			}
		}
	}
	HX_STACK_LINE(193)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,toString,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_ACCEPT",0x2d320036,"nape.callbacks.PreFlag.get_ACCEPT","nape/callbacks/PreFlag.hx",204,0x68e91137)
	HX_STACK_LINE(205)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::nape::callbacks::PreFlag _g = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = _g;
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_IGNORE",0xb4f42640,"nape.callbacks.PreFlag.get_IGNORE","nape/callbacks/PreFlag.hx",217,0x68e91137)
	HX_STACK_LINE(218)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::callbacks::PreFlag _g = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = _g;
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT_ONCE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_ACCEPT_ONCE",0x3c57dd6a,"nape.callbacks.PreFlag.get_ACCEPT_ONCE","nape/callbacks/PreFlag.hx",231,0x68e91137)
	HX_STACK_LINE(232)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(234)
		::nape::callbacks::PreFlag _g = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = _g;
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(237)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT_ONCE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE_ONCE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_IGNORE_ONCE",0xe49d9320,"nape.callbacks.PreFlag.get_IGNORE_ONCE","nape/callbacks/PreFlag.hx",245,0x68e91137)
	HX_STACK_LINE(246)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(248)
		::nape::callbacks::PreFlag _g = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = _g;
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(251)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE_ONCE,return )


PreFlag_obj::PreFlag_obj()
{
}

Dynamic PreFlag_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { return get_ACCEPT(); }
		if (HX_FIELD_EQ(inName,"IGNORE") ) { return get_IGNORE(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return get_ACCEPT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_IGNORE") ) { return get_IGNORE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ACCEPT_ONCE") ) { return get_ACCEPT_ONCE(); }
		if (HX_FIELD_EQ(inName,"IGNORE_ONCE") ) { return get_IGNORE_ONCE(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_ACCEPT_ONCE") ) { return get_ACCEPT_ONCE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_IGNORE_ONCE") ) { return get_IGNORE_ONCE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreFlag_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PreFlag_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_ACCEPT"),
	HX_CSTRING("get_IGNORE"),
	HX_CSTRING("get_ACCEPT_ONCE"),
	HX_CSTRING("get_IGNORE_ONCE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#endif

Class PreFlag_obj::__mClass;

void PreFlag_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.PreFlag"), hx::TCanCast< PreFlag_obj> ,sStaticFields,sMemberFields,
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

void PreFlag_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
