#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_Listener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","new",0x71eaf9ec,"zpp_nape.callbacks.ZPP_Listener.new","zpp_nape/callbacks/Listener.hx",174,0x87b155a7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(188)
	this->space = null();
	HX_STACK_LINE(187)
	this->interaction = null();
	HX_STACK_LINE(186)
	this->constraint = null();
	HX_STACK_LINE(185)
	this->body = null();
	HX_STACK_LINE(184)
	this->precedence = (int)0;
	HX_STACK_LINE(181)
	this->event = (int)0;
	HX_STACK_LINE(180)
	this->type = (int)0;
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(190)
	int _g = ::zpp_nape::ZPP_ID_obj::Listener();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(190)
	this->id = _g;
}
;
	return null();
}

//ZPP_Listener_obj::~ZPP_Listener_obj() { }

Dynamic ZPP_Listener_obj::__CreateEmpty() { return  new ZPP_Listener_obj; }
hx::ObjectPtr< ZPP_Listener_obj > ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZPP_Listener_obj > result = new ZPP_Listener_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Listener_obj > result = new ZPP_Listener_obj();
	result->__construct();
	return result;}

Void ZPP_Listener_obj::swapEvent( int event){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","swapEvent",0xd60ab313,"zpp_nape.callbacks.ZPP_Listener.swapEvent","zpp_nape/callbacks/Listener.hx",196,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Listener_obj,swapEvent,(void))

Void ZPP_Listener_obj::invalidate_precedence( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","invalidate_precedence",0x5e07721a,"zpp_nape.callbacks.ZPP_Listener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",197,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,invalidate_precedence,(void))

Void ZPP_Listener_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","addedToSpace",0x4325895f,"zpp_nape.callbacks.ZPP_Listener.addedToSpace","zpp_nape/callbacks/Listener.hx",198,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,addedToSpace,(void))

Void ZPP_Listener_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","removedFromSpace",0x0cfe1230,"zpp_nape.callbacks.ZPP_Listener.removedFromSpace","zpp_nape/callbacks/Listener.hx",199,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,removedFromSpace,(void))

Array< ::Dynamic > ZPP_Listener_obj::types;

Array< ::Dynamic > ZPP_Listener_obj::events;

bool ZPP_Listener_obj::setlt( ::zpp_nape::callbacks::ZPP_Listener a,::zpp_nape::callbacks::ZPP_Listener b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","setlt",0xdf0d4b36,"zpp_nape.callbacks.ZPP_Listener.setlt","zpp_nape/callbacks/Listener.hx",194,0x87b155a7)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(194)
	return (bool((a->precedence > b->precedence)) || bool((bool((a->precedence == b->precedence)) && bool((a->id > b->id)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Listener_obj,setlt,return )


ZPP_Listener_obj::ZPP_Listener_obj()
{
}

void ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Listener);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(precedence,"precedence");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_MEMBER_NAME(interaction,"interaction");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_END_CLASS();
}

void ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(precedence,"precedence");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
	HX_VISIT_MEMBER_NAME(interaction,"interaction");
	HX_VISIT_MEMBER_NAME(space,"space");
}

Dynamic ZPP_Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"setlt") ) { return setlt_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { return precedence; }
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { return interaction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::callbacks::ZPP_BodyListener >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::Listener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { precedence=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::callbacks::ZPP_ConstraintListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { interaction=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("precedence"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("constraint"));
	outFields->push(HX_CSTRING("interaction"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("types"),
	HX_CSTRING("events"),
	HX_CSTRING("setlt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::Listener*/ ,(int)offsetof(ZPP_Listener_obj,outer),HX_CSTRING("outer")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,event),HX_CSTRING("event")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,precedence),HX_CSTRING("precedence")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_BodyListener*/ ,(int)offsetof(ZPP_Listener_obj,body),HX_CSTRING("body")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_ConstraintListener*/ ,(int)offsetof(ZPP_Listener_obj,constraint),HX_CSTRING("constraint")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(ZPP_Listener_obj,interaction),HX_CSTRING("interaction")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Listener_obj,space),HX_CSTRING("space")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("id"),
	HX_CSTRING("type"),
	HX_CSTRING("event"),
	HX_CSTRING("precedence"),
	HX_CSTRING("body"),
	HX_CSTRING("constraint"),
	HX_CSTRING("interaction"),
	HX_CSTRING("space"),
	HX_CSTRING("swapEvent"),
	HX_CSTRING("invalidate_precedence"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::types,"types");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::events,"events");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::types,"types");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::events,"events");
};

#endif

Class ZPP_Listener_obj::__mClass;

void ZPP_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_Listener"), hx::TCanCast< ZPP_Listener_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Listener_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/Listener.hx",182,0x87b155a7)
		{
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType _g = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = _g;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType _g2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = _g2;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType _g4 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = _g4;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType _g6 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = _g6;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				_g7 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
			}
			HX_STACK_LINE(182)
			return Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3).Add(_g5).Add(_g7);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/Listener.hx",183,0x87b155a7)
		{
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = _g2;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = _g4;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g6 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = _g6;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g8 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = _g8;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g10 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = _g10;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g11 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent _g12 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = _g12;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				_g13 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(183)
			return Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3).Add(_g5).Add(_g7).Add(_g9).Add(_g11).Add(_g13);
		}
		return null();
	}
};
	events= _Function_0_2::Block();
}

} // end namespace zpp_nape
} // end namespace callbacks
