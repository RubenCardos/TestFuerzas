#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_AABBPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_AABBPair","new",0x0485453d,"zpp_nape.util.ZNPNode_ZPP_AABBPair.new","zpp_nape/util/Lists.hx",15674,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15708)
	this->elt = null();
	HX_STACK_LINE(15699)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_AABBPair_obj::~ZNPNode_ZPP_AABBPair_obj() { }

Dynamic ZNPNode_ZPP_AABBPair_obj::__CreateEmpty() { return  new ZNPNode_ZPP_AABBPair_obj; }
hx::ObjectPtr< ZNPNode_ZPP_AABBPair_obj > ZNPNode_ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_AABBPair_obj > result = new ZNPNode_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_AABBPair_obj > result = new ZNPNode_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_AABBPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_AABBPair","alloc",0xacb1ca92,"zpp_nape.util.ZNPNode_ZPP_AABBPair.alloc","zpp_nape/util/Lists.hx",15702,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBPair_obj,alloc,(void))

Void ZNPNode_ZPP_AABBPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_AABBPair","free",0xead7692f,"zpp_nape.util.ZNPNode_ZPP_AABBPair.free","zpp_nape/util/Lists.hx",15706,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15706)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBPair_obj,free,(void))

::zpp_nape::space::ZPP_AABBPair ZNPNode_ZPP_AABBPair_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_AABBPair","elem",0xea29a512,"zpp_nape.util.ZNPNode_ZPP_AABBPair.elem","zpp_nape/util/Lists.hx",15713,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15713)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBPair_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPNode_ZPP_AABBPair_obj::zpp_pool;


ZNPNode_ZPP_AABBPair_obj::ZNPNode_ZPP_AABBPair_obj()
{
}

void ZNPNode_ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_AABBPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBPair*/ ,(int)offsetof(ZNPNode_ZPP_AABBPair_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(int)offsetof(ZNPNode_ZPP_AABBPair_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_AABBPair_obj::__mClass;

void ZNPNode_ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_AABBPair"), hx::TCanCast< ZNPNode_ZPP_AABBPair_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_AABBPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
