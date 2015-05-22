#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace geom{

Void Vec2Iterator_obj::__construct()
{
HX_STACK_FRAME("nape.geom.Vec2Iterator","new",0xd933886a,"nape.geom.Vec2Iterator.new","nape/geom/Vec2Iterator.hx",178,0x600081e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(198)
	this->zpp_next = null();
	HX_STACK_LINE(190)
	this->zpp_critical = false;
	HX_STACK_LINE(186)
	this->zpp_i = (int)0;
	HX_STACK_LINE(182)
	this->zpp_inner = null();
}
;
	return null();
}

//Vec2Iterator_obj::~Vec2Iterator_obj() { }

Dynamic Vec2Iterator_obj::__CreateEmpty() { return  new Vec2Iterator_obj; }
hx::ObjectPtr< Vec2Iterator_obj > Vec2Iterator_obj::__new()
{  hx::ObjectPtr< Vec2Iterator_obj > result = new Vec2Iterator_obj();
	result->__construct();
	return result;}

Dynamic Vec2Iterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2Iterator_obj > result = new Vec2Iterator_obj();
	result->__construct();
	return result;}

bool Vec2Iterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.geom.Vec2Iterator","hasNext",0xc9642a77,"nape.geom.Vec2Iterator.hasNext","nape/geom/Vec2Iterator.hx",240,0x600081e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int length = this->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(245)
	this->zpp_critical = true;
	HX_STACK_LINE(246)
	if (((this->zpp_i < length))){
		HX_STACK_LINE(247)
		return true;
	}
	else{
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(251)
			this->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::geom::Vec2Iterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2Iterator_obj,hasNext,return )

::nape::geom::Vec2 Vec2Iterator_obj::next( ){
	HX_STACK_FRAME("nape.geom.Vec2Iterator","next",0x33e3d5a9,"nape.geom.Vec2Iterator.next","nape/geom/Vec2Iterator.hx",264,0x600081e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	int _g = (this->zpp_i)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	return this->zpp_inner->at(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2Iterator_obj,next,return )

::nape::geom::Vec2Iterator Vec2Iterator_obj::zpp_pool;

::nape::geom::Vec2Iterator Vec2Iterator_obj::get( ::nape::geom::Vec2List list){
	HX_STACK_FRAME("nape.geom.Vec2Iterator","get",0xd92e38a0,"nape.geom.Vec2Iterator.get","nape/geom/Vec2Iterator.hx",217,0x600081e6)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::geom::Vec2Iterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(218)
	if (((::nape::geom::Vec2Iterator_obj::zpp_pool == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Vec2List_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::geom::Vec2Iterator ret1 = ::nape::geom::Vec2Iterator_obj::__new();		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Vec2List_obj::internal = false;
		HX_STACK_LINE(222)
		ret = ret1;
	}
	else{
		HX_STACK_LINE(225)
		::nape::geom::Vec2Iterator r = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::geom::Vec2Iterator_obj::zpp_pool = r->zpp_next;
		HX_STACK_LINE(227)
		ret = r;
	}
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vec2Iterator_obj,get,return )


Vec2Iterator_obj::Vec2Iterator_obj()
{
}

void Vec2Iterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2Iterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void Vec2Iterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic Vec2Iterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { return zpp_i; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { return zpp_next; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { return zpp_critical; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec2Iterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec2Iterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::geom::Vec2Iterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2Iterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("zpp_i"));
	outFields->push(HX_CSTRING("zpp_critical"));
	outFields->push(HX_CSTRING("zpp_next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Vec2List*/ ,(int)offsetof(Vec2Iterator_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsInt,(int)offsetof(Vec2Iterator_obj,zpp_i),HX_CSTRING("zpp_i")},
	{hx::fsBool,(int)offsetof(Vec2Iterator_obj,zpp_critical),HX_CSTRING("zpp_critical")},
	{hx::fsObject /*::nape::geom::Vec2Iterator*/ ,(int)offsetof(Vec2Iterator_obj,zpp_next),HX_CSTRING("zpp_next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("zpp_i"),
	HX_CSTRING("zpp_critical"),
	HX_CSTRING("zpp_next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2Iterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vec2Iterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2Iterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vec2Iterator_obj::zpp_pool,"zpp_pool");
};

#endif

Class Vec2Iterator_obj::__mClass;

void Vec2Iterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec2Iterator"), hx::TCanCast< Vec2Iterator_obj> ,sStaticFields,sMemberFields,
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

void Vec2Iterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace geom
