#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","new",0x472370a5,"zpp_nape.util.ZNPNode_ZPP_Body.new","zpp_nape/util/Lists.hx",14900,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14934)
	this->elt = null();
	HX_STACK_LINE(14925)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Body_obj::~ZNPNode_ZPP_Body_obj() { }

Dynamic ZNPNode_ZPP_Body_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Body_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Body_obj > ZNPNode_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Body_obj > result = new ZNPNode_ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Body_obj > result = new ZNPNode_ZPP_Body_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_Body_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","alloc",0x73bf9ffa,"zpp_nape.util.ZNPNode_ZPP_Body.alloc","zpp_nape/util/Lists.hx",14928,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,alloc,(void))

Void ZNPNode_ZPP_Body_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","free",0xf29f38c7,"zpp_nape.util.ZNPNode_ZPP_Body.free","zpp_nape/util/Lists.hx",14932,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14932)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,free,(void))

::zpp_nape::phys::ZPP_Body ZNPNode_ZPP_Body_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","elem",0xf1f174aa,"zpp_nape.util.ZNPNode_ZPP_Body.elem","zpp_nape/util/Lists.hx",14939,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14939)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPNode_ZPP_Body_obj::zpp_pool;


ZNPNode_ZPP_Body_obj::ZNPNode_ZPP_Body_obj()
{
}

void ZNPNode_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Body);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(int)offsetof(ZNPNode_ZPP_Body_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZNPNode_ZPP_Body_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Body_obj::__mClass;

void ZNPNode_ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Body"), hx::TCanCast< ZNPNode_ZPP_Body_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_Body_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
