#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void BodyCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.BodyCallback","new",0x1cd59e3f,"nape.callbacks.BodyCallback.new","nape/callbacks/BodyCallback.hx",185,0x8ff3bd0f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//BodyCallback_obj::~BodyCallback_obj() { }

Dynamic BodyCallback_obj::__CreateEmpty() { return  new BodyCallback_obj; }
hx::ObjectPtr< BodyCallback_obj > BodyCallback_obj::__new()
{  hx::ObjectPtr< BodyCallback_obj > result = new BodyCallback_obj();
	result->__construct();
	return result;}

Dynamic BodyCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyCallback_obj > result = new BodyCallback_obj();
	result->__construct();
	return result;}

::nape::phys::Body BodyCallback_obj::get_body( ){
	HX_STACK_FRAME("nape.callbacks.BodyCallback","get_body",0x0342bfec,"nape.callbacks.BodyCallback.get_body","nape/callbacks/BodyCallback.hx",193,0x8ff3bd0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	return this->zpp_inner->body->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyCallback_obj,get_body,return )

::String BodyCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.BodyCallback","toString",0x7adb5a6d,"nape.callbacks.BodyCallback.toString","nape/callbacks/BodyCallback.hx",198,0x8ff3bd0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(200)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP"))->__get((this->zpp_inner->event - ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)));
	HX_STACK_LINE(201)
	::String _g = this->zpp_inner->body->outer->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(201)
	::String _g1 = (HX_CSTRING(":") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(201)
	hx::AddEq(ret,_g1);
	HX_STACK_LINE(202)
	::String _g2 = ::Std_obj::string(this->zpp_inner->listener->outer);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(202)
	::String _g3 = (HX_CSTRING(" : listener: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(202)
	hx::AddEq(ret,_g3);
	HX_STACK_LINE(203)
	return ret;
}



BodyCallback_obj::BodyCallback_obj()
{
}

Dynamic BodyCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return get_body(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_body"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

#endif

Class BodyCallback_obj::__mClass;

void BodyCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.BodyCallback"), hx::TCanCast< BodyCallback_obj> ,sStaticFields,sMemberFields,
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

void BodyCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
