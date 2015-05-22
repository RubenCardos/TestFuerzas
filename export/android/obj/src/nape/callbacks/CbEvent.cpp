#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void CbEvent_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.CbEvent","new",0x341515e7,"nape.callbacks.CbEvent.new","nape/callbacks/CbEvent.hx",181,0xd410352b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CbEvent_obj::~CbEvent_obj() { }

Dynamic CbEvent_obj::__CreateEmpty() { return  new CbEvent_obj; }
hx::ObjectPtr< CbEvent_obj > CbEvent_obj::__new()
{  hx::ObjectPtr< CbEvent_obj > result = new CbEvent_obj();
	result->__construct();
	return result;}

Dynamic CbEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbEvent_obj > result = new CbEvent_obj();
	result->__construct();
	return result;}

::String CbEvent_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","toString",0x632121c5,"nape.callbacks.CbEvent.toString","nape/callbacks/CbEvent.hx",192,0xd410352b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::CbEvent _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("PRE");
	}
	else{
		HX_STACK_LINE(193)
		::nape::callbacks::CbEvent _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::CbEvent _g2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("BEGIN");
		}
		else{
			HX_STACK_LINE(194)
			::nape::callbacks::CbEvent _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::CbEvent _g4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("ONGOING");
			}
			else{
				HX_STACK_LINE(195)
				::nape::callbacks::CbEvent _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::CbEvent _g6 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = _g6;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					_g7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
				}
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _g7))){
					HX_STACK_LINE(195)
					return HX_CSTRING("END");
				}
				else{
					HX_STACK_LINE(196)
					::nape::callbacks::CbEvent _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(196)
					{
						HX_STACK_LINE(196)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(196)
							::nape::callbacks::CbEvent _g8 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = _g8;
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(196)
						_g9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
					}
					HX_STACK_LINE(196)
					if (((hx::ObjectPtr<OBJ_>(this) == _g9))){
						HX_STACK_LINE(196)
						return HX_CSTRING("WAKE");
					}
					else{
						HX_STACK_LINE(197)
						::nape::callbacks::CbEvent _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(197)
								::nape::callbacks::CbEvent _g10 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = _g10;
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(197)
							_g11 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
						}
						HX_STACK_LINE(197)
						if (((hx::ObjectPtr<OBJ_>(this) == _g11))){
							HX_STACK_LINE(197)
							return HX_CSTRING("SLEEP");
						}
						else{
							HX_STACK_LINE(198)
							::nape::callbacks::CbEvent _g13;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(198)
							{
								HX_STACK_LINE(198)
								if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(198)
									::nape::callbacks::CbEvent _g12 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = _g12;
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(198)
								_g13 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
							}
							HX_STACK_LINE(198)
							if (((hx::ObjectPtr<OBJ_>(this) == _g13))){
								HX_STACK_LINE(198)
								return HX_CSTRING("BREAK");
							}
							else{
								HX_STACK_LINE(199)
								return HX_CSTRING("");
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,toString,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BEGIN( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_BEGIN",0xa3422327,"nape.callbacks.CbEvent.get_BEGIN","nape/callbacks/CbEvent.hx",206,0xd410352b)
	HX_STACK_LINE(207)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(209)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g;
		HX_STACK_LINE(210)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(212)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BEGIN,return )

::nape::callbacks::CbEvent CbEvent_obj::get_ONGOING( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_ONGOING",0x4c2f82b9,"nape.callbacks.CbEvent.get_ONGOING","nape/callbacks/CbEvent.hx",220,0xd410352b)
	HX_STACK_LINE(221)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(223)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = _g;
		HX_STACK_LINE(224)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(226)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_ONGOING,return )

::nape::callbacks::CbEvent CbEvent_obj::get_END( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_END",0x30097d59,"nape.callbacks.CbEvent.get_END","nape/callbacks/CbEvent.hx",233,0xd410352b)
	HX_STACK_LINE(234)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(236)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = _g;
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(239)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_END,return )

::nape::callbacks::CbEvent CbEvent_obj::get_WAKE( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_WAKE",0xe42030c6,"nape.callbacks.CbEvent.get_WAKE","nape/callbacks/CbEvent.hx",246,0xd410352b)
	HX_STACK_LINE(247)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(249)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = _g;
		HX_STACK_LINE(250)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(252)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_WAKE,return )

::nape::callbacks::CbEvent CbEvent_obj::get_SLEEP( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_SLEEP",0x71b0f615,"nape.callbacks.CbEvent.get_SLEEP","nape/callbacks/CbEvent.hx",259,0xd410352b)
	HX_STACK_LINE(260)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
		HX_STACK_LINE(261)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(262)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(262)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = _g;
		HX_STACK_LINE(263)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(265)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_SLEEP,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BREAK( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_BREAK",0xabd85dbd,"nape.callbacks.CbEvent.get_BREAK","nape/callbacks/CbEvent.hx",272,0xd410352b)
	HX_STACK_LINE(273)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
		HX_STACK_LINE(274)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(275)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = _g;
		HX_STACK_LINE(276)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(278)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BREAK,return )

::nape::callbacks::CbEvent CbEvent_obj::get_PRE( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_PRE",0x3011d9a1,"nape.callbacks.CbEvent.get_PRE","nape/callbacks/CbEvent.hx",286,0xd410352b)
	HX_STACK_LINE(287)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
		HX_STACK_LINE(288)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(289)
		::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = _g;
		HX_STACK_LINE(290)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(292)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_PRE,return )


CbEvent_obj::CbEvent_obj()
{
}

Dynamic CbEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { return get_END(); }
		if (HX_FIELD_EQ(inName,"PRE") ) { return get_PRE(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { return get_WAKE(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BEGIN") ) { return get_BEGIN(); }
		if (HX_FIELD_EQ(inName,"SLEEP") ) { return get_SLEEP(); }
		if (HX_FIELD_EQ(inName,"BREAK") ) { return get_BREAK(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ONGOING") ) { return get_ONGOING(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PRE") ) { return get_PRE_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_WAKE") ) { return get_WAKE_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_BEGIN") ) { return get_BEGIN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLEEP") ) { return get_SLEEP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BREAK") ) { return get_BREAK_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ONGOING") ) { return get_ONGOING_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CbEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CbEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_BEGIN"),
	HX_CSTRING("get_ONGOING"),
	HX_CSTRING("get_END"),
	HX_CSTRING("get_WAKE"),
	HX_CSTRING("get_SLEEP"),
	HX_CSTRING("get_BREAK"),
	HX_CSTRING("get_PRE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

#endif

Class CbEvent_obj::__mClass;

void CbEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.CbEvent"), hx::TCanCast< CbEvent_obj> ,sStaticFields,sMemberFields,
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

void CbEvent_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
