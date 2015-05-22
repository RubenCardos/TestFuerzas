#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void BodyListener_obj::__construct(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence)
{
HX_STACK_FRAME("nape.callbacks.BodyListener","new",0xe9cb886e,"nape.callbacks.BodyListener.new","nape/callbacks/BodyListener.hx",180,0x83186dc0)
HX_STACK_THIS(this)
HX_STACK_ARG(event,"event")
HX_STACK_ARG(options,"options")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(__o_precedence,"precedence")
int precedence = __o_precedence.Default(0);
{
	HX_STACK_LINE(184)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(252)
	super::__construct();
	HX_STACK_LINE(261)
	int xevent = (int)-1;		HX_STACK_VAR(xevent,"xevent");
	HX_STACK_LINE(262)
	::nape::callbacks::CbEvent _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(262)
			::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = _g;
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(262)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
	}
	HX_STACK_LINE(262)
	if (((event == _g1))){
		HX_STACK_LINE(262)
		xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE;
	}
	else{
		HX_STACK_LINE(263)
		::nape::callbacks::CbEvent _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(263)
				::nape::callbacks::CbEvent _g2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = _g2;
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(263)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
		}
		HX_STACK_LINE(263)
		if (((event == _g3))){
			HX_STACK_LINE(263)
			xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP;
		}
		else{
		}
	}
	HX_STACK_LINE(269)
	::nape::callbacks::OptionType _g4 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(269)
	::zpp_nape::callbacks::ZPP_BodyListener _g5 = ::zpp_nape::callbacks::ZPP_BodyListener_obj::__new(_g4,xevent,handler);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(269)
	this->zpp_inner_zn = _g5;
	HX_STACK_LINE(270)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(271)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(272)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(273)
	this->zpp_inner->precedence = precedence;
}
;
	return null();
}

//BodyListener_obj::~BodyListener_obj() { }

Dynamic BodyListener_obj::__CreateEmpty() { return  new BodyListener_obj; }
hx::ObjectPtr< BodyListener_obj > BodyListener_obj::__new(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence)
{  hx::ObjectPtr< BodyListener_obj > result = new BodyListener_obj();
	result->__construct(event,options,handler,__o_precedence);
	return result;}

Dynamic BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyListener_obj > result = new BodyListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::nape::callbacks::OptionType BodyListener_obj::get_options( ){
	HX_STACK_FRAME("nape.callbacks.BodyListener","get_options",0x2b1c0983,"nape.callbacks.BodyListener.get_options","nape/callbacks/BodyListener.hx",195,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return this->zpp_inner_zn->options->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyListener_obj,get_options,return )

::nape::callbacks::OptionType BodyListener_obj::set_options( ::nape::callbacks::OptionType options){
	HX_STACK_FRAME("nape.callbacks.BodyListener","set_options",0x3589108f,"nape.callbacks.BodyListener.set_options","nape/callbacks/BodyListener.hx",197,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(199)
	this->zpp_inner_zn->options->set(options->zpp_inner);
	HX_STACK_LINE(201)
	return this->zpp_inner_zn->options->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(BodyListener_obj,set_options,return )

Dynamic BodyListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.BodyListener","get_handler",0x90f385ef,"nape.callbacks.BodyListener.get_handler","nape/callbacks/BodyListener.hx",209,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	return this->zpp_inner_zn->handler;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyListener_obj,get_handler,return )

Dynamic BodyListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.BodyListener","set_handler",0x9b608cfb,"nape.callbacks.BodyListener.set_handler","nape/callbacks/BodyListener.hx",211,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(218)
	this->zpp_inner_zn->handler = handler;
	HX_STACK_LINE(220)
	return this->zpp_inner_zn->handler;
}


HX_DEFINE_DYNAMIC_FUNC1(BodyListener_obj,set_handler,return )


BodyListener_obj::BodyListener_obj()
{
}

void BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BodyListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return get_options(); }
		if (HX_FIELD_EQ(inName,"handler") ) { return get_handler(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return get_options_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return set_options_dyn(); }
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return set_options(inValue); }
		if (HX_FIELD_EQ(inName,"handler") ) { return set_handler(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_BodyListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("options"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_BodyListener*/ ,(int)offsetof(BodyListener_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_options"),
	HX_CSTRING("set_options"),
	HX_CSTRING("get_handler"),
	HX_CSTRING("set_handler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyListener_obj::__mClass,"__mClass");
};

#endif

Class BodyListener_obj::__mClass;

void BodyListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.BodyListener"), hx::TCanCast< BodyListener_obj> ,sStaticFields,sMemberFields,
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

void BodyListener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
