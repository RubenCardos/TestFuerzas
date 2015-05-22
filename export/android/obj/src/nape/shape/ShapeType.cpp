#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace shape{

Void ShapeType_obj::__construct()
{
HX_STACK_FRAME("nape.shape.ShapeType","new",0xb55a943a,"nape.shape.ShapeType.new","nape/shape/ShapeType.hx",181,0xe7bde238)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ShapeType_obj::~ShapeType_obj() { }

Dynamic ShapeType_obj::__CreateEmpty() { return  new ShapeType_obj; }
hx::ObjectPtr< ShapeType_obj > ShapeType_obj::__new()
{  hx::ObjectPtr< ShapeType_obj > result = new ShapeType_obj();
	result->__construct();
	return result;}

Dynamic ShapeType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeType_obj > result = new ShapeType_obj();
	result->__construct();
	return result;}

::String ShapeType_obj::toString( ){
	HX_STACK_FRAME("nape.shape.ShapeType","toString",0x4ed1d692,"nape.shape.ShapeType.toString","nape/shape/ShapeType.hx",192,0xe7bde238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::shape::ShapeType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::shape::ShapeType _g = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("CIRCLE");
	}
	else{
		HX_STACK_LINE(193)
		::nape::shape::ShapeType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::shape::ShapeType _g2 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("POLYGON");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,toString,return )

::nape::shape::ShapeType ShapeType_obj::get_CIRCLE( ){
	HX_STACK_FRAME("nape.shape.ShapeType","get_CIRCLE",0xb2b4593f,"nape.shape.ShapeType.get_CIRCLE","nape/shape/ShapeType.hx",201,0xe7bde238)
	HX_STACK_LINE(202)
	if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
		HX_STACK_LINE(203)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(204)
		::nape::shape::ShapeType _g = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = _g;
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(207)
	return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_CIRCLE,return )

::nape::shape::ShapeType ShapeType_obj::get_POLYGON( ){
	HX_STACK_FRAME("nape.shape.ShapeType","get_POLYGON",0xc7f4644b,"nape.shape.ShapeType.get_POLYGON","nape/shape/ShapeType.hx",214,0xe7bde238)
	HX_STACK_LINE(215)
	if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
		HX_STACK_LINE(216)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(217)
		::nape::shape::ShapeType _g = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = _g;
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(220)
	return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_POLYGON,return )


ShapeType_obj::ShapeType_obj()
{
}

Dynamic ShapeType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"CIRCLE") ) { return get_CIRCLE(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"POLYGON") ) { return get_POLYGON(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_CIRCLE") ) { return get_CIRCLE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_POLYGON") ) { return get_POLYGON_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_CIRCLE"),
	HX_CSTRING("get_POLYGON"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
};

#endif

Class ShapeType_obj::__mClass;

void ShapeType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.ShapeType"), hx::TCanCast< ShapeType_obj> ,sStaticFields,sMemberFields,
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

void ShapeType_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
