#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void PreCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.PreCallback","new",0xf820f574,"nape.callbacks.PreCallback.new","nape/callbacks/PreCallback.hx",185,0x4a2c4f3e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//PreCallback_obj::~PreCallback_obj() { }

Dynamic PreCallback_obj::__CreateEmpty() { return  new PreCallback_obj; }
hx::ObjectPtr< PreCallback_obj > PreCallback_obj::__new()
{  hx::ObjectPtr< PreCallback_obj > result = new PreCallback_obj();
	result->__construct();
	return result;}

Dynamic PreCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreCallback_obj > result = new PreCallback_obj();
	result->__construct();
	return result;}

::nape::dynamics::Arbiter PreCallback_obj::get_arbiter( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_arbiter",0xfb267914,"nape.callbacks.PreCallback.get_arbiter","nape/callbacks/PreCallback.hx",197,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	return this->zpp_inner->pre_arbiter->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_arbiter,return )

::nape::phys::Interactor PreCallback_obj::get_int1( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_int1",0x9a05f257,"nape.callbacks.PreCallback.get_int1","nape/callbacks/PreCallback.hx",208,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	return this->zpp_inner->int1->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int1,return )

::nape::phys::Interactor PreCallback_obj::get_int2( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_int2",0x9a05f258,"nape.callbacks.PreCallback.get_int2","nape/callbacks/PreCallback.hx",219,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return this->zpp_inner->int2->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int2,return )

bool PreCallback_obj::get_swapped( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_swapped",0x58a88147,"nape.callbacks.PreCallback.get_swapped","nape/callbacks/PreCallback.hx",233,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	return this->zpp_inner->pre_swapped;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_swapped,return )

::String PreCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","toString",0x0cfec318,"nape.callbacks.PreCallback.toString","nape/callbacks/PreCallback.hx",238,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	::String ret = HX_CSTRING("Cb:PRE:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	::String _g = this->zpp_inner->int1->outer_i->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(240)
	::String _g1 = (HX_CSTRING(":") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(240)
	::String _g2 = (_g1 + HX_CSTRING("/"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(240)
	::String _g3 = this->zpp_inner->int2->outer_i->toString();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(240)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(240)
	hx::AddEq(ret,_g4);
	HX_STACK_LINE(241)
	::String _g5 = this->zpp_inner->pre_arbiter->wrapper()->toString();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(241)
	::String _g6 = (HX_CSTRING(" : ") + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(241)
	hx::AddEq(ret,_g6);
	HX_STACK_LINE(242)
	::String _g7 = ::Std_obj::string(this->zpp_inner->listener->outer);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(242)
	::String _g8 = (HX_CSTRING(" : listnener: ") + _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(242)
	hx::AddEq(ret,_g8);
	HX_STACK_LINE(243)
	return ret;
}



PreCallback_obj::PreCallback_obj()
{
}

Dynamic PreCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { return get_int1(); }
		if (HX_FIELD_EQ(inName,"int2") ) { return get_int2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { return get_arbiter(); }
		if (HX_FIELD_EQ(inName,"swapped") ) { return get_swapped(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_swapped") ) { return get_swapped_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PreCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("swapped"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_arbiter"),
	HX_CSTRING("get_int1"),
	HX_CSTRING("get_int2"),
	HX_CSTRING("get_swapped"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

#endif

Class PreCallback_obj::__mClass;

void PreCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.PreCallback"), hx::TCanCast< PreCallback_obj> ,sStaticFields,sMemberFields,
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

void PreCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
