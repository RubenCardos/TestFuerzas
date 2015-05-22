#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimplifyP_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","new",0x2e4008a3,"zpp_nape.geom.ZPP_SimplifyP.new","zpp_nape/geom/Simplify.hx",257,0xe5fbc624)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(284)
	this->max = null();
	HX_STACK_LINE(283)
	this->min = null();
	HX_STACK_LINE(258)
	this->next = null();
}
;
	return null();
}

//ZPP_SimplifyP_obj::~ZPP_SimplifyP_obj() { }

Dynamic ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZPP_SimplifyP_obj > ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZPP_SimplifyP_obj > result = new ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimplifyP_obj > result = new ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Void ZPP_SimplifyP_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","free",0x44879f09,"zpp_nape.geom.ZPP_SimplifyP.free","zpp_nape/geom/Simplify.hx",288,0xe5fbc624)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::zpp_nape::geom::ZPP_SimplifyV _g = this->max = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		this->min = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,free,(void))

Void ZPP_SimplifyP_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","alloc",0xcd30b378,"zpp_nape.geom.ZPP_SimplifyP.alloc","zpp_nape/geom/Simplify.hx",293,0xe5fbc624)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,alloc,(void))

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::get( ::zpp_nape::geom::ZPP_SimplifyV min,::zpp_nape::geom::ZPP_SimplifyV max){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","get",0x2e3ab8d9,"zpp_nape.geom.ZPP_SimplifyP.get","zpp_nape/geom/Simplify.hx",295,0xe5fbc624)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
			HX_STACK_LINE(299)
			::zpp_nape::geom::ZPP_SimplifyP _g = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			ret = _g;
		}
		else{
			HX_STACK_LINE(305)
			ret = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(306)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret->next;
			HX_STACK_LINE(307)
			ret->next = null();
		}
		HX_STACK_LINE(312)
		Dynamic();
	}
	HX_STACK_LINE(314)
	ret->min = min;
	HX_STACK_LINE(315)
	ret->max = max;
	HX_STACK_LINE(316)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimplifyP_obj,get,return )


ZPP_SimplifyP_obj::ZPP_SimplifyP_obj()
{
}

void ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic ZPP_SimplifyP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyP*/ ,(int)offsetof(ZPP_SimplifyP_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyP_obj,min),HX_CSTRING("min")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyP_obj,max),HX_CSTRING("max")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_SimplifyP_obj::__mClass;

void ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimplifyP"), hx::TCanCast< ZPP_SimplifyP_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SimplifyP_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
