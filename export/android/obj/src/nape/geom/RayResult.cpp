#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
namespace nape{
namespace geom{

Void RayResult_obj::__construct()
{
HX_STACK_FRAME("nape.geom.RayResult","new",0x9f3d594d,"nape.geom.RayResult.new","nape/geom/RayResult.hx",180,0xc2787b23)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
}
;
	return null();
}

//RayResult_obj::~RayResult_obj() { }

Dynamic RayResult_obj::__CreateEmpty() { return  new RayResult_obj; }
hx::ObjectPtr< RayResult_obj > RayResult_obj::__new()
{  hx::ObjectPtr< RayResult_obj > result = new RayResult_obj();
	result->__construct();
	return result;}

Dynamic RayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayResult_obj > result = new RayResult_obj();
	result->__construct();
	return result;}

::nape::geom::Vec2 RayResult_obj::get_normal( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_normal",0xe17c00a3,"nape.geom.RayResult.get_normal","nape/geom/RayResult.hx",194,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	return this->zpp_inner->normal;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_normal,return )

Float RayResult_obj::get_distance( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_distance",0x71a9b8b1,"nape.geom.RayResult.get_distance","nape/geom/RayResult.hx",205,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return this->zpp_inner->toiDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_distance,return )

bool RayResult_obj::get_inner( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_inner",0x1be4069a,"nape.geom.RayResult.get_inner","nape/geom/RayResult.hx",216,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return this->zpp_inner->inner;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_inner,return )

::nape::shape::Shape RayResult_obj::get_shape( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_shape",0xd9e4b825,"nape.geom.RayResult.get_shape","nape/geom/RayResult.hx",227,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	return this->zpp_inner->shape;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_shape,return )

Void RayResult_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.RayResult","dispose",0x7791840c,"nape.geom.RayResult.dispose","nape/geom/RayResult.hx",247,0xc2787b23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		this->zpp_inner->free();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,dispose,(void))

::String RayResult_obj::toString( ){
	HX_STACK_FRAME("nape.geom.RayResult","toString",0x388ccc9f,"nape.geom.RayResult.toString","nape/geom/RayResult.hx",252,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	::String _g = ::Std_obj::string(this->zpp_inner->shape);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	::String _g1 = (HX_CSTRING("{ shape: ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(256)
	::String _g2 = (_g1 + HX_CSTRING(" distance: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(256)
	::String _g3 = (_g2 + this->zpp_inner->toiDistance);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(256)
	::String _g4 = (_g3 + HX_CSTRING(" ?inner: "));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(256)
	::String _g5 = ::Std_obj::string(this->zpp_inner->inner);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(256)
	::String _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(256)
	return (_g6 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,toString,return )


RayResult_obj::RayResult_obj()
{
}

void RayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayResult);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void RayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic RayResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { return get_inner(); }
		if (HX_FIELD_EQ(inName,"shape") ) { return get_shape(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return get_normal(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return get_inner_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("shape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(int)offsetof(RayResult_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_normal"),
	HX_CSTRING("get_distance"),
	HX_CSTRING("get_inner"),
	HX_CSTRING("get_shape"),
	HX_CSTRING("dispose"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

#endif

Class RayResult_obj::__mClass;

void RayResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.RayResult"), hx::TCanCast< RayResult_obj> ,sStaticFields,sMemberFields,
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

void RayResult_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
