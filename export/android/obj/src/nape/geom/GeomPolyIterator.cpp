#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
namespace nape{
namespace geom{

Void GeomPolyIterator_obj::__construct()
{
HX_STACK_FRAME("nape.geom.GeomPolyIterator","new",0x34729534,"nape.geom.GeomPolyIterator.new","nape/geom/GeomPolyIterator.hx",178,0x1868ec5c)
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

//GeomPolyIterator_obj::~GeomPolyIterator_obj() { }

Dynamic GeomPolyIterator_obj::__CreateEmpty() { return  new GeomPolyIterator_obj; }
hx::ObjectPtr< GeomPolyIterator_obj > GeomPolyIterator_obj::__new()
{  hx::ObjectPtr< GeomPolyIterator_obj > result = new GeomPolyIterator_obj();
	result->__construct();
	return result;}

Dynamic GeomPolyIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomPolyIterator_obj > result = new GeomPolyIterator_obj();
	result->__construct();
	return result;}

bool GeomPolyIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.geom.GeomPolyIterator","hasNext",0x4e0a6441,"nape.geom.GeomPolyIterator.hasNext","nape/geom/GeomPolyIterator.hx",240,0x1868ec5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::nape::geom::GeomPolyList _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(244)
		_this->zpp_inner->valmod();
		HX_STACK_LINE(244)
		if ((_this->zpp_inner->zip_length)){
			HX_STACK_LINE(244)
			_this->zpp_inner->zip_length = false;
			HX_STACK_LINE(244)
			_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
		}
		HX_STACK_LINE(244)
		length = _this->zpp_inner->user_length;
	}
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
			this->zpp_next = ::nape::geom::GeomPolyIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::geom::GeomPolyIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPolyIterator_obj,hasNext,return )

::nape::geom::GeomPoly GeomPolyIterator_obj::next( ){
	HX_STACK_FRAME("nape.geom.GeomPolyIterator","next",0xafcff99f,"nape.geom.GeomPolyIterator.next","nape/geom/GeomPolyIterator.hx",264,0x1868ec5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	int _g = (this->zpp_i)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	return this->zpp_inner->at(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPolyIterator_obj,next,return )

::nape::geom::GeomPolyIterator GeomPolyIterator_obj::zpp_pool;

::nape::geom::GeomPolyIterator GeomPolyIterator_obj::get( ::nape::geom::GeomPolyList list){
	HX_STACK_FRAME("nape.geom.GeomPolyIterator","get",0x346d456a,"nape.geom.GeomPolyIterator.get","nape/geom/GeomPolyIterator.hx",217,0x1868ec5c)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::geom::GeomPolyIterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(218)
	if (((::nape::geom::GeomPolyIterator_obj::zpp_pool == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_GeomPolyList_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::geom::GeomPolyIterator ret1 = ::nape::geom::GeomPolyIterator_obj::__new();		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_GeomPolyList_obj::internal = false;
		HX_STACK_LINE(222)
		ret = ret1;
	}
	else{
		HX_STACK_LINE(225)
		::nape::geom::GeomPolyIterator r = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::geom::GeomPolyIterator_obj::zpp_pool = r->zpp_next;
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomPolyIterator_obj,get,return )


GeomPolyIterator_obj::GeomPolyIterator_obj()
{
}

void GeomPolyIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomPolyIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void GeomPolyIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic GeomPolyIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic GeomPolyIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::GeomPolyIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::geom::GeomPolyIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::geom::GeomPolyList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomPolyIterator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::nape::geom::GeomPolyList*/ ,(int)offsetof(GeomPolyIterator_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsInt,(int)offsetof(GeomPolyIterator_obj,zpp_i),HX_CSTRING("zpp_i")},
	{hx::fsBool,(int)offsetof(GeomPolyIterator_obj,zpp_critical),HX_CSTRING("zpp_critical")},
	{hx::fsObject /*::nape::geom::GeomPolyIterator*/ ,(int)offsetof(GeomPolyIterator_obj,zpp_next),HX_CSTRING("zpp_next")},
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
	HX_MARK_MEMBER_NAME(GeomPolyIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GeomPolyIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomPolyIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GeomPolyIterator_obj::zpp_pool,"zpp_pool");
};

#endif

Class GeomPolyIterator_obj::__mClass;

void GeomPolyIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.GeomPolyIterator"), hx::TCanCast< GeomPolyIterator_obj> ,sStaticFields,sMemberFields,
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

void GeomPolyIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace geom
