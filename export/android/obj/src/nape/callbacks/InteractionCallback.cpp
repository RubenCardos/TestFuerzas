#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.InteractionCallback","new",0x346421a3,"nape.callbacks.InteractionCallback.new","nape/callbacks/InteractionCallback.hx",185,0xad3d8fef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//InteractionCallback_obj::~InteractionCallback_obj() { }

Dynamic InteractionCallback_obj::__CreateEmpty() { return  new InteractionCallback_obj; }
hx::ObjectPtr< InteractionCallback_obj > InteractionCallback_obj::__new()
{  hx::ObjectPtr< InteractionCallback_obj > result = new InteractionCallback_obj();
	result->__construct();
	return result;}

Dynamic InteractionCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionCallback_obj > result = new InteractionCallback_obj();
	result->__construct();
	return result;}

::nape::phys::Interactor InteractionCallback_obj::get_int1( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_int1",0x89893bc8,"nape.callbacks.InteractionCallback.get_int1","nape/callbacks/InteractionCallback.hx",196,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->zpp_inner->int1->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int1,return )

::nape::phys::Interactor InteractionCallback_obj::get_int2( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_int2",0x89893bc9,"nape.callbacks.InteractionCallback.get_int2","nape/callbacks/InteractionCallback.hx",207,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return this->zpp_inner->int2->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int2,return )

::nape::dynamics::ArbiterList InteractionCallback_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_arbiters",0x8426ced0,"nape.callbacks.InteractionCallback.get_arbiters","nape/callbacks/InteractionCallback.hx",218,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_arbiters,return )

::String InteractionCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","toString",0xfc820c89,"nape.callbacks.InteractionCallback.toString","nape/callbacks/InteractionCallback.hx",223,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("BEGIN")).Add(HX_CSTRING("END")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("ONGOING"))->__get(this->zpp_inner->event));
	HX_STACK_LINE(226)
	::String _g = this->zpp_inner->int1->outer_i->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(226)
	::String _g1 = (HX_CSTRING(":") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(226)
	::String _g2 = (_g1 + HX_CSTRING("/"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(226)
	::String _g3 = this->zpp_inner->int2->outer_i->toString();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(226)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(226)
	hx::AddEq(ret,_g4);
	HX_STACK_LINE(227)
	::String _g5 = this->zpp_inner->wrap_arbiters->toString();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(227)
	::String _g6 = (HX_CSTRING(" : ") + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(227)
	hx::AddEq(ret,_g6);
	HX_STACK_LINE(228)
	::String _g7 = ::Std_obj::string(this->zpp_inner->listener->outer);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(228)
	::String _g8 = (HX_CSTRING(" : listener: ") + _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(228)
	hx::AddEq(ret,_g8);
	HX_STACK_LINE(229)
	return ret;
}



InteractionCallback_obj::InteractionCallback_obj()
{
}

Dynamic InteractionCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { return get_int1(); }
		if (HX_FIELD_EQ(inName,"int2") ) { return get_int2(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("arbiters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_int1"),
	HX_CSTRING("get_int2"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

#endif

Class InteractionCallback_obj::__mClass;

void InteractionCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionCallback"), hx::TCanCast< InteractionCallback_obj> ,sStaticFields,sMemberFields,
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

void InteractionCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
