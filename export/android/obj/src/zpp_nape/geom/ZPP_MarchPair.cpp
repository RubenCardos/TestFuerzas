#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","new",0xba9d84f9,"zpp_nape.geom.ZPP_MarchPair.new","zpp_nape/geom/MarchingSquares.hx",219,0xc3305538)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(233)
	this->next = null();
	HX_STACK_LINE(232)
	this->spanr = null();
	HX_STACK_LINE(231)
	this->span2 = null();
	HX_STACK_LINE(230)
	this->span1 = null();
	HX_STACK_LINE(229)
	this->pd = null();
	HX_STACK_LINE(228)
	this->okeyr = (int)0;
	HX_STACK_LINE(227)
	this->keyr = (int)0;
	HX_STACK_LINE(226)
	this->pr = null();
	HX_STACK_LINE(225)
	this->okey2 = (int)0;
	HX_STACK_LINE(224)
	this->key2 = (int)0;
	HX_STACK_LINE(223)
	this->p2 = null();
	HX_STACK_LINE(222)
	this->okey1 = (int)0;
	HX_STACK_LINE(221)
	this->key1 = (int)0;
	HX_STACK_LINE(220)
	this->p1 = null();
}
;
	return null();
}

//ZPP_MarchPair_obj::~ZPP_MarchPair_obj() { }

Dynamic ZPP_MarchPair_obj::__CreateEmpty() { return  new ZPP_MarchPair_obj; }
hx::ObjectPtr< ZPP_MarchPair_obj > ZPP_MarchPair_obj::__new()
{  hx::ObjectPtr< ZPP_MarchPair_obj > result = new ZPP_MarchPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MarchPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchPair_obj > result = new ZPP_MarchPair_obj();
	result->__construct();
	return result;}

Void ZPP_MarchPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","free",0x89f6edf3,"zpp_nape.geom.ZPP_MarchPair.free","zpp_nape/geom/MarchingSquares.hx",260,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert _g = this->pd = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert _g1 = this->pr = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert _g2 = this->p2 = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(261)
		this->p1 = _g2;
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_MarchSpan _g3 = this->spanr = null();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_MarchSpan _g4 = this->span2 = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(262)
		this->span1 = _g4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchPair_obj,free,(void))

Void ZPP_MarchPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","alloc",0x4926714e,"zpp_nape.geom.ZPP_MarchPair.alloc","zpp_nape/geom/MarchingSquares.hx",266,0xc3305538)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchPair_obj,alloc,(void))

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchPair_obj::zpp_pool;


ZPP_MarchPair_obj::ZPP_MarchPair_obj()
{
}

void ZPP_MarchPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchPair);
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(key1,"key1");
	HX_MARK_MEMBER_NAME(okey1,"okey1");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(key2,"key2");
	HX_MARK_MEMBER_NAME(okey2,"okey2");
	HX_MARK_MEMBER_NAME(pr,"pr");
	HX_MARK_MEMBER_NAME(keyr,"keyr");
	HX_MARK_MEMBER_NAME(okeyr,"okeyr");
	HX_MARK_MEMBER_NAME(pd,"pd");
	HX_MARK_MEMBER_NAME(span1,"span1");
	HX_MARK_MEMBER_NAME(span2,"span2");
	HX_MARK_MEMBER_NAME(spanr,"spanr");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_MarchPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(key1,"key1");
	HX_VISIT_MEMBER_NAME(okey1,"okey1");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(key2,"key2");
	HX_VISIT_MEMBER_NAME(okey2,"okey2");
	HX_VISIT_MEMBER_NAME(pr,"pr");
	HX_VISIT_MEMBER_NAME(keyr,"keyr");
	HX_VISIT_MEMBER_NAME(okeyr,"okeyr");
	HX_VISIT_MEMBER_NAME(pd,"pd");
	HX_VISIT_MEMBER_NAME(span1,"span1");
	HX_VISIT_MEMBER_NAME(span2,"span2");
	HX_VISIT_MEMBER_NAME(spanr,"spanr");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_MarchPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		if (HX_FIELD_EQ(inName,"p2") ) { return p2; }
		if (HX_FIELD_EQ(inName,"pr") ) { return pr; }
		if (HX_FIELD_EQ(inName,"pd") ) { return pd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"key1") ) { return key1; }
		if (HX_FIELD_EQ(inName,"key2") ) { return key2; }
		if (HX_FIELD_EQ(inName,"keyr") ) { return keyr; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"okey1") ) { return okey1; }
		if (HX_FIELD_EQ(inName,"okey2") ) { return okey2; }
		if (HX_FIELD_EQ(inName,"okeyr") ) { return okeyr; }
		if (HX_FIELD_EQ(inName,"span1") ) { return span1; }
		if (HX_FIELD_EQ(inName,"span2") ) { return span2; }
		if (HX_FIELD_EQ(inName,"spanr") ) { return spanr; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MarchPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pr") ) { pr=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pd") ) { pd=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"key1") ) { key1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key2") ) { key2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyr") ) { keyr=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_MarchPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"okey1") ) { okey1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okey2") ) { okey2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okeyr") ) { okeyr=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"span1") ) { span1=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		if (HX_FIELD_EQ(inName,"span2") ) { span2=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spanr") ) { spanr=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_MarchPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MarchPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("p1"));
	outFields->push(HX_CSTRING("key1"));
	outFields->push(HX_CSTRING("okey1"));
	outFields->push(HX_CSTRING("p2"));
	outFields->push(HX_CSTRING("key2"));
	outFields->push(HX_CSTRING("okey2"));
	outFields->push(HX_CSTRING("pr"));
	outFields->push(HX_CSTRING("keyr"));
	outFields->push(HX_CSTRING("okeyr"));
	outFields->push(HX_CSTRING("pd"));
	outFields->push(HX_CSTRING("span1"));
	outFields->push(HX_CSTRING("span2"));
	outFields->push(HX_CSTRING("spanr"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,p1),HX_CSTRING("p1")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,key1),HX_CSTRING("key1")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okey1),HX_CSTRING("okey1")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,p2),HX_CSTRING("p2")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,key2),HX_CSTRING("key2")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okey2),HX_CSTRING("okey2")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,pr),HX_CSTRING("pr")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,keyr),HX_CSTRING("keyr")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okeyr),HX_CSTRING("okeyr")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,pd),HX_CSTRING("pd")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,span1),HX_CSTRING("span1")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,span2),HX_CSTRING("span2")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,spanr),HX_CSTRING("spanr")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchPair*/ ,(int)offsetof(ZPP_MarchPair_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("p1"),
	HX_CSTRING("key1"),
	HX_CSTRING("okey1"),
	HX_CSTRING("p2"),
	HX_CSTRING("key2"),
	HX_CSTRING("okey2"),
	HX_CSTRING("pr"),
	HX_CSTRING("keyr"),
	HX_CSTRING("okeyr"),
	HX_CSTRING("pd"),
	HX_CSTRING("span1"),
	HX_CSTRING("span2"),
	HX_CSTRING("spanr"),
	HX_CSTRING("next"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchPair_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_MarchPair_obj::__mClass;

void ZPP_MarchPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MarchPair"), hx::TCanCast< ZPP_MarchPair_obj> ,sStaticFields,sMemberFields,
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

void ZPP_MarchPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
