#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","new",0xfb6d9f10,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.new","zpp_nape/util/Lists.hx",16018,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16052)
	this->elt = null();
	HX_STACK_LINE(16043)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_SensorArbiter_obj::~ZNPNode_ZPP_SensorArbiter_obj() { }

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPNode_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > ZNPNode_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > result = new ZNPNode_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > result = new ZNPNode_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_SensorArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","alloc",0x71c27f25,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.alloc","zpp_nape/util/Lists.hx",16046,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,alloc,(void))

Void ZNPNode_ZPP_SensorArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","free",0xff3da7fc,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.free","zpp_nape/util/Lists.hx",16050,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16050)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPNode_ZPP_SensorArbiter_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","elem",0xfe8fe3df,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.elem","zpp_nape/util/Lists.hx",16057,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16057)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;


ZNPNode_ZPP_SensorArbiter_obj::ZNPNode_ZPP_SensorArbiter_obj()
{
}

void ZNPNode_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("elt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZNPNode_ZPP_SensorArbiter_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_SensorArbiter*/ ,(int)offsetof(ZNPNode_ZPP_SensorArbiter_obj,elt),HX_CSTRING("elt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("elt"),
	HX_CSTRING("elem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_SensorArbiter_obj::__mClass;

void ZNPNode_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_SensorArbiter"), hx::TCanCast< ZNPNode_ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_SensorArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
