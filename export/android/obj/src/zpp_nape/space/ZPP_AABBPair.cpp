#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","new",0x01861dfa,"zpp_nape.space.ZPP_AABBPair.new","zpp_nape/space/DynAABBPhase.hx",273,0x55500cf1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(281)
	this->next = null();
	HX_STACK_LINE(280)
	this->arb = null();
	HX_STACK_LINE(279)
	this->di = (int)0;
	HX_STACK_LINE(278)
	this->id = (int)0;
	HX_STACK_LINE(277)
	this->sleeping = false;
	HX_STACK_LINE(276)
	this->first = false;
	HX_STACK_LINE(275)
	this->n2 = null();
	HX_STACK_LINE(274)
	this->n1 = null();
}
;
	return null();
}

//ZPP_AABBPair_obj::~ZPP_AABBPair_obj() { }

Dynamic ZPP_AABBPair_obj::__CreateEmpty() { return  new ZPP_AABBPair_obj; }
hx::ObjectPtr< ZPP_AABBPair_obj > ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZPP_AABBPair_obj > result = new ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBPair_obj > result = new ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Void ZPP_AABBPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","alloc",0x8e280c8f,"zpp_nape.space.ZPP_AABBPair.alloc","zpp_nape/space/DynAABBPhase.hx",310,0x55500cf1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,alloc,(void))

Void ZPP_AABBPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","free",0x4e9435d2,"zpp_nape.space.ZPP_AABBPair.free","zpp_nape/space/DynAABBPhase.hx",321,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::zpp_nape::space::ZPP_AABBNode _g = this->n2 = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		this->n1 = _g;
		HX_STACK_LINE(331)
		this->sleeping = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,free,(void))

::zpp_nape::space::ZPP_AABBPair ZPP_AABBPair_obj::zpp_pool;


ZPP_AABBPair_obj::ZPP_AABBPair_obj()
{
}

void ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(n1,"n1");
	HX_MARK_MEMBER_NAME(n2,"n2");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(arb,"arb");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(n1,"n1");
	HX_VISIT_MEMBER_NAME(n2,"n2");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(arb,"arb");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_AABBPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { return n1; }
		if (HX_FIELD_EQ(inName,"n2") ) { return n2; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { return arb; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { n1=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n2") ) { n2=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { arb=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("n1"));
	outFields->push(HX_CSTRING("n2"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("sleeping"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("arb"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBPair_obj,n1),HX_CSTRING("n1")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBPair_obj,n2),HX_CSTRING("n2")},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,first),HX_CSTRING("first")},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,sleeping),HX_CSTRING("sleeping")},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,di),HX_CSTRING("di")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_AABBPair_obj,arb),HX_CSTRING("arb")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(int)offsetof(ZPP_AABBPair_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("n1"),
	HX_CSTRING("n2"),
	HX_CSTRING("first"),
	HX_CSTRING("sleeping"),
	HX_CSTRING("id"),
	HX_CSTRING("di"),
	HX_CSTRING("arb"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_AABBPair_obj::__mClass;

void ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_AABBPair"), hx::TCanCast< ZPP_AABBPair_obj> ,sStaticFields,sMemberFields,
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

void ZPP_AABBPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
