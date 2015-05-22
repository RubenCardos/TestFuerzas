#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
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

Void ConvexResult_obj::__construct()
{
HX_STACK_FRAME("nape.geom.ConvexResult","new",0x2285a4a2,"nape.geom.ConvexResult.new","nape/geom/ConvexResult.hx",180,0x8636d4ae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
}
;
	return null();
}

//ConvexResult_obj::~ConvexResult_obj() { }

Dynamic ConvexResult_obj::__CreateEmpty() { return  new ConvexResult_obj; }
hx::ObjectPtr< ConvexResult_obj > ConvexResult_obj::__new()
{  hx::ObjectPtr< ConvexResult_obj > result = new ConvexResult_obj();
	result->__construct();
	return result;}

Dynamic ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvexResult_obj > result = new ConvexResult_obj();
	result->__construct();
	return result;}

::nape::geom::Vec2 ConvexResult_obj::get_normal( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_normal",0x9c62f9ee,"nape.geom.ConvexResult.get_normal","nape/geom/ConvexResult.hx",194,0x8636d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	return this->zpp_inner->normal;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_normal,return )

::nape::geom::Vec2 ConvexResult_obj::get_position( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_position",0x4e3ae830,"nape.geom.ConvexResult.get_position","nape/geom/ConvexResult.hx",205,0x8636d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return this->zpp_inner->position;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_position,return )

Float ConvexResult_obj::get_toi( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_toi",0xa8eb4c67,"nape.geom.ConvexResult.get_toi","nape/geom/ConvexResult.hx",216,0x8636d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return this->zpp_inner->toiDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_toi,return )

::nape::shape::Shape ConvexResult_obj::get_shape( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_shape",0x9b97b13a,"nape.geom.ConvexResult.get_shape","nape/geom/ConvexResult.hx",227,0x8636d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	return this->zpp_inner->shape;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_shape,return )

Void ConvexResult_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.ConvexResult","dispose",0x3d6a9de1,"nape.geom.ConvexResult.dispose","nape/geom/ConvexResult.hx",247,0x8636d4ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		this->zpp_inner->free();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,dispose,(void))

::String ConvexResult_obj::toString( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","toString",0x90aa4d2a,"nape.geom.ConvexResult.toString","nape/geom/ConvexResult.hx",252,0x8636d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	::String _g = ::Std_obj::string(this->zpp_inner->shape);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	::String _g1 = (HX_CSTRING("{ shape: ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(256)
	::String _g2 = (_g1 + HX_CSTRING(" toi: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(256)
	::String _g3 = (_g2 + this->zpp_inner->toiDistance);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(256)
	return (_g3 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,toString,return )


ConvexResult_obj::ConvexResult_obj()
{
}

void ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexResult);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ConvexResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { return get_toi(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return get_shape(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return get_normal(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_toi") ) { return get_toi_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConvexResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvexResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("toi"));
	outFields->push(HX_CSTRING("shape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(int)offsetof(ConvexResult_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_normal"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_toi"),
	HX_CSTRING("get_shape"),
	HX_CSTRING("dispose"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvexResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvexResult_obj::__mClass,"__mClass");
};

#endif

Class ConvexResult_obj::__mClass;

void ConvexResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.ConvexResult"), hx::TCanCast< ConvexResult_obj> ,sStaticFields,sMemberFields,
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

void ConvexResult_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
