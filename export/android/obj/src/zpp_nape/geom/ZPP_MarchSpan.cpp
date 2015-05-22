#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchSpan_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","new",0x55819ba9,"zpp_nape.geom.ZPP_MarchSpan.new","zpp_nape/geom/MarchingSquares.hx",174,0xc3305538)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->out = false;
	HX_STACK_LINE(176)
	this->rank = (int)0;
	HX_STACK_LINE(175)
	this->parent = null();
	HX_STACK_LINE(215)
	this->parent = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_MarchSpan_obj::~ZPP_MarchSpan_obj() { }

Dynamic ZPP_MarchSpan_obj::__CreateEmpty() { return  new ZPP_MarchSpan_obj; }
hx::ObjectPtr< ZPP_MarchSpan_obj > ZPP_MarchSpan_obj::__new()
{  hx::ObjectPtr< ZPP_MarchSpan_obj > result = new ZPP_MarchSpan_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MarchSpan_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchSpan_obj > result = new ZPP_MarchSpan_obj();
	result->__construct();
	return result;}

Void ZPP_MarchSpan_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","free",0x76a6b143,"zpp_nape.geom.ZPP_MarchSpan.free","zpp_nape/geom/MarchingSquares.hx",206,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->parent = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,free,(void))

Void ZPP_MarchSpan_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","alloc",0x764193fe,"zpp_nape.geom.ZPP_MarchSpan.alloc","zpp_nape/geom/MarchingSquares.hx",210,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->out = false;
		HX_STACK_LINE(212)
		this->rank = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,alloc,(void))

::zpp_nape::geom::ZPP_MarchSpan ZPP_MarchSpan_obj::zpp_pool;


ZPP_MarchSpan_obj::ZPP_MarchSpan_obj()
{
}

void ZPP_MarchSpan_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchSpan);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_MarchSpan_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_MarchSpan_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { return rank; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MarchSpan_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MarchSpan_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("rank"));
	outFields->push(HX_CSTRING("out"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchSpan_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(ZPP_MarchSpan_obj,rank),HX_CSTRING("rank")},
	{hx::fsBool,(int)offsetof(ZPP_MarchSpan_obj,out),HX_CSTRING("out")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchSpan_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parent"),
	HX_CSTRING("rank"),
	HX_CSTRING("out"),
	HX_CSTRING("next"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchSpan_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchSpan_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_MarchSpan_obj::__mClass;

void ZPP_MarchSpan_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MarchSpan"), hx::TCanCast< ZPP_MarchSpan_obj> ,sStaticFields,sMemberFields,
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

void ZPP_MarchSpan_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
