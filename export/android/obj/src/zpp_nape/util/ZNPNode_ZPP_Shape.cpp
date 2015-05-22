#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Shape_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Shape","new",0xd4525b62,"zpp_nape.util.ZNPNode_ZPP_Shape.new","zpp_nape/util/Lists.hx",14857,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14891)
	this->elt = null();
	HX_STACK_LINE(14882)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Shape_obj::~ZNPNode_ZPP_Shape_obj() { }

Dynamic ZNPNode_ZPP_Shape_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Shape_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Shape_obj > ZNPNode_ZPP_Shape_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Shape_obj > result = new ZNPNode_ZPP_Shape_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Shape_obj > result = new ZNPNode_ZPP_Shape_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_Shape_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Shape","alloc",0xda8c73f7,"zpp_nape.util.ZNPNode_ZPP_Shape.alloc","zpp_nape/util/Lists.hx",14885,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Shape_obj,alloc,(void))

Void ZNPNode_ZPP_Shape_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Shape","free",0xee7db36a,"zpp_nape.util.ZNPNode_ZPP_Shape.free","zpp_nape/util/Lists.hx",14889,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14889)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Shape_obj,free,(void))

::zpp_nape::shape::ZPP_Shape ZNPNode_ZPP_Shape_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Shape","elem",0xedcfef4d,"zpp_nape.util.ZNPNode_ZPP_Shape.elem","zpp_nape/util/Lists.hx",14896,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14896)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Shape_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPNode_ZPP_Shape_obj::zpp_pool;


ZNPNode_ZPP_Shape_obj::ZNPNode_ZPP_Shape_obj()
{
}

void ZNPNode_ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Shape);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Shape_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Shape*/ ,(int)offsetof(ZNPNode_ZPP_Shape_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZNPNode_ZPP_Shape_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Shape_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Shape_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Shape_obj::__mClass;

void ZNPNode_ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Shape"), hx::TCanCast< ZNPNode_ZPP_Shape_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_Shape_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
