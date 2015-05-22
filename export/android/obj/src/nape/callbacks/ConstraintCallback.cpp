#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void ConstraintCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.ConstraintCallback","new",0x7f5608fa,"nape.callbacks.ConstraintCallback.new","nape/callbacks/ConstraintCallback.hx",185,0xe2929534)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//ConstraintCallback_obj::~ConstraintCallback_obj() { }

Dynamic ConstraintCallback_obj::__CreateEmpty() { return  new ConstraintCallback_obj; }
hx::ObjectPtr< ConstraintCallback_obj > ConstraintCallback_obj::__new()
{  hx::ObjectPtr< ConstraintCallback_obj > result = new ConstraintCallback_obj();
	result->__construct();
	return result;}

Dynamic ConstraintCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConstraintCallback_obj > result = new ConstraintCallback_obj();
	result->__construct();
	return result;}

::nape::constraint::Constraint ConstraintCallback_obj::get_constraint( ){
	HX_STACK_FRAME("nape.callbacks.ConstraintCallback","get_constraint",0xfa22424c,"nape.callbacks.ConstraintCallback.get_constraint","nape/callbacks/ConstraintCallback.hx",193,0xe2929534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	return this->zpp_inner->constraint->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ConstraintCallback_obj,get_constraint,return )

::String ConstraintCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.ConstraintCallback","toString",0xa15729d2,"nape.callbacks.ConstraintCallback.toString","nape/callbacks/ConstraintCallback.hx",198,0xe2929534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(200)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP")).Add(HX_CSTRING("BREAK"))->__get((this->zpp_inner->event - ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)));
	HX_STACK_LINE(201)
	::String _g = this->zpp_inner->constraint->outer->toString();		HX_STACK_VAR(_g,"_g");
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



ConstraintCallback_obj::ConstraintCallback_obj()
{
}

Dynamic ConstraintCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { return get_constraint(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_constraint") ) { return get_constraint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConstraintCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConstraintCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("constraint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_constraint"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConstraintCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstraintCallback_obj::__mClass,"__mClass");
};

#endif

Class ConstraintCallback_obj::__mClass;

void ConstraintCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.ConstraintCallback"), hx::TCanCast< ConstraintCallback_obj> ,sStaticFields,sMemberFields,
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

void ConstraintCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
