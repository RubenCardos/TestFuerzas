#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace shape{

Void ValidationResult_obj::__construct()
{
HX_STACK_FRAME("nape.shape.ValidationResult","new",0x77e8ee3b,"nape.shape.ValidationResult.new","nape/shape/ValidationResult.hx",181,0xd4dffc13)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ValidationResult_obj::~ValidationResult_obj() { }

Dynamic ValidationResult_obj::__CreateEmpty() { return  new ValidationResult_obj; }
hx::ObjectPtr< ValidationResult_obj > ValidationResult_obj::__new()
{  hx::ObjectPtr< ValidationResult_obj > result = new ValidationResult_obj();
	result->__construct();
	return result;}

Dynamic ValidationResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ValidationResult_obj > result = new ValidationResult_obj();
	result->__construct();
	return result;}

::String ValidationResult_obj::toString( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","toString",0x0e5898f1,"nape.shape.ValidationResult.toString","nape/shape/ValidationResult.hx",192,0xd4dffc13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::shape::ValidationResult _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::shape::ValidationResult _g = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("VALID");
	}
	else{
		HX_STACK_LINE(193)
		::nape::shape::ValidationResult _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::shape::ValidationResult _g2 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("DEGENERATE");
		}
		else{
			HX_STACK_LINE(194)
			::nape::shape::ValidationResult _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE == null()))){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::shape::ValidationResult _g4 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = _g4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;
			}
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(194)
				return HX_CSTRING("CONCAVE");
			}
			else{
				HX_STACK_LINE(195)
				::nape::shape::ValidationResult _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING == null()))){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::shape::ValidationResult _g6 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = _g6;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					_g7 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;
				}
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _g7))){
					HX_STACK_LINE(195)
					return HX_CSTRING("SELF_INTERSECTING");
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


HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,toString,return )

::nape::shape::ValidationResult ValidationResult_obj::get_VALID( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_VALID",0x49f57d4e,"nape.shape.ValidationResult.get_VALID","nape/shape/ValidationResult.hx",203,0xd4dffc13)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::shape::ValidationResult _g = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = _g;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_VALID,return )

::nape::shape::ValidationResult ValidationResult_obj::get_DEGENERATE( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_DEGENERATE",0x3caf6604,"nape.shape.ValidationResult.get_DEGENERATE","nape/shape/ValidationResult.hx",216,0xd4dffc13)
	HX_STACK_LINE(217)
	if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE == null()))){
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(219)
		::nape::shape::ValidationResult _g = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = _g;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(222)
	return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_DEGENERATE,return )

::nape::shape::ValidationResult ValidationResult_obj::get_CONCAVE( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_CONCAVE",0x76050f61,"nape.shape.ValidationResult.get_CONCAVE","nape/shape/ValidationResult.hx",229,0xd4dffc13)
	HX_STACK_LINE(230)
	if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE == null()))){
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(232)
		::nape::shape::ValidationResult _g = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = _g;
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(235)
	return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_CONCAVE,return )

::nape::shape::ValidationResult ValidationResult_obj::get_SELF_INTERSECTING( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_SELF_INTERSECTING",0xf13da4a8,"nape.shape.ValidationResult.get_SELF_INTERSECTING","nape/shape/ValidationResult.hx",242,0xd4dffc13)
	HX_STACK_LINE(243)
	if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING == null()))){
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(245)
		::nape::shape::ValidationResult _g = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = _g;
		HX_STACK_LINE(246)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(248)
	return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_SELF_INTERSECTING,return )


ValidationResult_obj::ValidationResult_obj()
{
}

Dynamic ValidationResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"VALID") ) { return get_VALID(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONCAVE") ) { return get_CONCAVE(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_VALID") ) { return get_VALID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEGENERATE") ) { return get_DEGENERATE(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_CONCAVE") ) { return get_CONCAVE_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_DEGENERATE") ) { return get_DEGENERATE_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SELF_INTERSECTING") ) { return get_SELF_INTERSECTING(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_SELF_INTERSECTING") ) { return get_SELF_INTERSECTING_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ValidationResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ValidationResult_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_VALID"),
	HX_CSTRING("get_DEGENERATE"),
	HX_CSTRING("get_CONCAVE"),
	HX_CSTRING("get_SELF_INTERSECTING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidationResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationResult_obj::__mClass,"__mClass");
};

#endif

Class ValidationResult_obj::__mClass;

void ValidationResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.ValidationResult"), hx::TCanCast< ValidationResult_obj> ,sStaticFields,sMemberFields,
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

void ValidationResult_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
