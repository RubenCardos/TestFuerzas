#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConvexResultList
#include <zpp_nape/util/ZPP_ConvexResultList.h>
#endif
namespace nape{
namespace geom{

Void ConvexResultIterator_obj::__construct()
{
HX_STACK_FRAME("nape.geom.ConvexResultIterator","new",0x511bf9b0,"nape.geom.ConvexResultIterator.new","nape/geom/ConvexResultIterator.hx",178,0xbabefb60)
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

//ConvexResultIterator_obj::~ConvexResultIterator_obj() { }

Dynamic ConvexResultIterator_obj::__CreateEmpty() { return  new ConvexResultIterator_obj; }
hx::ObjectPtr< ConvexResultIterator_obj > ConvexResultIterator_obj::__new()
{  hx::ObjectPtr< ConvexResultIterator_obj > result = new ConvexResultIterator_obj();
	result->__construct();
	return result;}

Dynamic ConvexResultIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvexResultIterator_obj > result = new ConvexResultIterator_obj();
	result->__construct();
	return result;}

bool ConvexResultIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.geom.ConvexResultIterator","hasNext",0xeae5b6bd,"nape.geom.ConvexResultIterator.hasNext","nape/geom/ConvexResultIterator.hx",240,0xbabefb60)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::nape::geom::ConvexResultList _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
			this->zpp_next = ::nape::geom::ConvexResultIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::geom::ConvexResultIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResultIterator_obj,hasNext,return )

::nape::geom::ConvexResult ConvexResultIterator_obj::next( ){
	HX_STACK_FRAME("nape.geom.ConvexResultIterator","next",0xa75e81a3,"nape.geom.ConvexResultIterator.next","nape/geom/ConvexResultIterator.hx",264,0xbabefb60)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	int _g = (this->zpp_i)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	return this->zpp_inner->at(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResultIterator_obj,next,return )

::nape::geom::ConvexResultIterator ConvexResultIterator_obj::zpp_pool;

::nape::geom::ConvexResultIterator ConvexResultIterator_obj::get( ::nape::geom::ConvexResultList list){
	HX_STACK_FRAME("nape.geom.ConvexResultIterator","get",0x5116a9e6,"nape.geom.ConvexResultIterator.get","nape/geom/ConvexResultIterator.hx",217,0xbabefb60)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::geom::ConvexResultIterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(218)
	if (((::nape::geom::ConvexResultIterator_obj::zpp_pool == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_ConvexResultList_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::geom::ConvexResultIterator ret1 = ::nape::geom::ConvexResultIterator_obj::__new();		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_ConvexResultList_obj::internal = false;
		HX_STACK_LINE(222)
		ret = ret1;
	}
	else{
		HX_STACK_LINE(225)
		::nape::geom::ConvexResultIterator r = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::geom::ConvexResultIterator_obj::zpp_pool = r->zpp_next;
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvexResultIterator_obj,get,return )


ConvexResultIterator_obj::ConvexResultIterator_obj()
{
}

void ConvexResultIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexResultIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ConvexResultIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic ConvexResultIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ConvexResultIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::ConvexResultIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::geom::ConvexResultIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::geom::ConvexResultList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvexResultIterator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::nape::geom::ConvexResultList*/ ,(int)offsetof(ConvexResultIterator_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsInt,(int)offsetof(ConvexResultIterator_obj,zpp_i),HX_CSTRING("zpp_i")},
	{hx::fsBool,(int)offsetof(ConvexResultIterator_obj,zpp_critical),HX_CSTRING("zpp_critical")},
	{hx::fsObject /*::nape::geom::ConvexResultIterator*/ ,(int)offsetof(ConvexResultIterator_obj,zpp_next),HX_CSTRING("zpp_next")},
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
	HX_MARK_MEMBER_NAME(ConvexResultIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConvexResultIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvexResultIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConvexResultIterator_obj::zpp_pool,"zpp_pool");
};

#endif

Class ConvexResultIterator_obj::__mClass;

void ConvexResultIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.ConvexResultIterator"), hx::TCanCast< ConvexResultIterator_obj> ,sStaticFields,sMemberFields,
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

void ConvexResultIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace geom
