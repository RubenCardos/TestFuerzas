#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace nape{
namespace callbacks{

Void Listener_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.Listener","new",0x194abbac,"nape.callbacks.Listener.new","nape/callbacks/Listener.hx",177,0x82b91542)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
}
;
	return null();
}

//Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new()
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct();
	return result;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct();
	return result;}

::nape::callbacks::ListenerType Listener_obj::get_type( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_type",0xb8f84f77,"nape.callbacks.Listener.get_type","nape/callbacks/Listener.hx",188,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return ::zpp_nape::callbacks::ZPP_Listener_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::callbacks::ListenerType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_type,return )

::nape::callbacks::CbEvent Listener_obj::get_event( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_event",0x7b4690bd,"nape.callbacks.Listener.get_event","nape/callbacks/Listener.hx",196,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast< ::nape::callbacks::CbEvent >();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_event,return )

::nape::callbacks::CbEvent Listener_obj::set_event( ::nape::callbacks::CbEvent event){
	HX_STACK_FRAME("nape.callbacks.Listener","set_event",0x5e977cc9,"nape.callbacks.Listener.set_event","nape/callbacks/Listener.hx",198,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(205)
	if (((::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast< ::nape::callbacks::CbEvent >() != event))){
		HX_STACK_LINE(206)
		::nape::callbacks::CbEvent _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
				HX_STACK_LINE(206)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(206)
				::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g;
				HX_STACK_LINE(206)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(206)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
		}
		HX_STACK_LINE(206)
		int xevent;		HX_STACK_VAR(xevent,"xevent");
		HX_STACK_LINE(206)
		if (((event == _g1))){
			HX_STACK_LINE(206)
			xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN;
		}
		else{
			HX_STACK_LINE(206)
			::nape::callbacks::CbEvent _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent _g2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = _g2;
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(206)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(206)
			if (((event == _g3))){
				HX_STACK_LINE(206)
				xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING;
			}
			else{
				HX_STACK_LINE(206)
				::nape::callbacks::CbEvent _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent _g4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = _g4;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					_g5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
				}
				HX_STACK_LINE(206)
				if (((event == _g5))){
					HX_STACK_LINE(206)
					xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END;
				}
				else{
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(206)
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent _g6 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = _g6;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						_g7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
					}
					HX_STACK_LINE(206)
					if (((event == _g7))){
						HX_STACK_LINE(206)
						xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP;
					}
					else{
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent _g9;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(206)
						{
							HX_STACK_LINE(206)
							if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(206)
								::nape::callbacks::CbEvent _g8 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = _g8;
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(206)
							_g9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
						}
						HX_STACK_LINE(206)
						if (((event == _g9))){
							HX_STACK_LINE(206)
							xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE;
						}
						else{
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(206)
							{
								HX_STACK_LINE(206)
								if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(206)
									::nape::callbacks::CbEvent _g10 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = _g10;
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(206)
								_g11 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
							}
							HX_STACK_LINE(206)
							if (((event == _g11))){
								HX_STACK_LINE(206)
								xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_PRE;
							}
							else{
								HX_STACK_LINE(206)
								xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BREAK;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(207)
		this->zpp_inner->swapEvent(xevent);
	}
	HX_STACK_LINE(210)
	return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast< ::nape::callbacks::CbEvent >();
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_event,return )

int Listener_obj::get_precedence( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_precedence",0xe231fe87,"nape.callbacks.Listener.get_precedence","nape/callbacks/Listener.hx",223,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	return this->zpp_inner->precedence;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_precedence,return )

int Listener_obj::set_precedence( int precedence){
	HX_STACK_FRAME("nape.callbacks.Listener","set_precedence",0x0251e6fb,"nape.callbacks.Listener.set_precedence","nape/callbacks/Listener.hx",225,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(precedence,"precedence")
	HX_STACK_LINE(227)
	if (((this->zpp_inner->precedence != precedence))){
		HX_STACK_LINE(228)
		this->zpp_inner->precedence = precedence;
		HX_STACK_LINE(229)
		this->zpp_inner->invalidate_precedence();
	}
	HX_STACK_LINE(232)
	return this->zpp_inner->precedence;
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_precedence,return )

::nape::space::Space Listener_obj::get_space( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_space",0x86e85569,"nape.callbacks.Listener.get_space","nape/callbacks/Listener.hx",255,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(255)
		return null();
	}
	else{
		HX_STACK_LINE(255)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_space,return )

::nape::space::Space Listener_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.callbacks.Listener","set_space",0x6a394175,"nape.callbacks.Listener.set_space","nape/callbacks/Listener.hx",257,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(259)
	if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
		HX_STACK_LINE(260)
		if (((this->zpp_inner->space != null()))){
			HX_STACK_LINE(261)
			this->zpp_inner->space->outer->zpp_inner->wrap_listeners->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(263)
		if (((space != null()))){
			HX_STACK_LINE(264)
			::nape::callbacks::ListenerList _this = space->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(264)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(264)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(264)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else{
			HX_STACK_LINE(267)
			this->zpp_inner->space = null();
		}
	}
	HX_STACK_LINE(271)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(271)
		return null();
	}
	else{
		HX_STACK_LINE(271)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(271)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_space,return )

::String Listener_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.Listener","toString",0x24a371e0,"nape.callbacks.Listener.toString","nape/callbacks/Listener.hx",276,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::String event = Array_obj< ::String >::__new().Add(HX_CSTRING("BEGIN")).Add(HX_CSTRING("END")).Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP")).Add(HX_CSTRING("BREAK")).Add(HX_CSTRING("PRE")).Add(HX_CSTRING("ONGOING"))->__get(this->zpp_inner->event);		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(278)
	if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_BODY))){
		HX_STACK_LINE(279)
		::zpp_nape::callbacks::ZPP_BodyListener body = this->zpp_inner->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(280)
		::String _g = ::Std_obj::string(body->outer_zn->zpp_inner_zn->options->outer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		::String _g1 = (((HX_CSTRING("BodyListener{") + event) + HX_CSTRING("::")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(280)
		return (_g1 + HX_CSTRING("}"));
	}
	else{
		HX_STACK_LINE(282)
		if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_CONSTRAINT))){
			HX_STACK_LINE(283)
			::zpp_nape::callbacks::ZPP_ConstraintListener con = this->zpp_inner->constraint;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(284)
			::String _g2 = ::Std_obj::string(con->outer_zn->zpp_inner_zn->options->outer);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(284)
			::String _g3 = (((HX_CSTRING("ConstraintListener{") + event) + HX_CSTRING("::")) + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(284)
			return (_g3 + HX_CSTRING("}"));
		}
		else{
			HX_STACK_LINE(287)
			::zpp_nape::callbacks::ZPP_InteractionListener con = this->zpp_inner->interaction;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(288)
			::String itype;		HX_STACK_VAR(itype,"itype");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				int _g = con->itype;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(288)
				int _switch_1 = (_g);
				if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION)){
					HX_STACK_LINE(289)
					itype = HX_CSTRING("COLLISION");
				}
				else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR)){
					HX_STACK_LINE(290)
					itype = HX_CSTRING("SENSOR");
				}
				else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID)){
					HX_STACK_LINE(291)
					itype = HX_CSTRING("FLUID");
				}
				else  {
					HX_STACK_LINE(292)
					itype = HX_CSTRING("ALL");
				}
;
;
			}
			HX_STACK_LINE(294)
			::String _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(294)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_INTERACTION))){
				HX_STACK_LINE(294)
				::String _g4 = ::Std_obj::string(con->outer_zni->zpp_inner_zn->options1->outer);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(294)
				::String _g5 = (((((HX_CSTRING("InteractionListener{") + event) + HX_CSTRING("#")) + itype) + HX_CSTRING("::")) + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(294)
				::String _g6 = (_g5 + HX_CSTRING(":"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(294)
				::String _g7 = ::Std_obj::string(con->outer_zni->zpp_inner_zn->options2->outer);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(294)
				::String _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(294)
				_g14 = (_g8 + HX_CSTRING("}"));
			}
			else{
				HX_STACK_LINE(294)
				::String _g9 = ::Std_obj::string(con->outer_znp->zpp_inner_zn->options1->outer);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(294)
				::String _g10 = (((HX_CSTRING("PreListener{") + itype) + HX_CSTRING("::")) + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(294)
				::String _g11 = (_g10 + HX_CSTRING(":"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(294)
				::String _g12 = ::Std_obj::string(con->outer_znp->zpp_inner_zn->options2->outer);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(294)
				::String _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(294)
				_g14 = (_g13 + HX_CSTRING("}"));
			}
			HX_STACK_LINE(294)
			::String _g15 = (_g14 + HX_CSTRING(" precedence="));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(294)
			return (_g15 + this->zpp_inner->precedence);
		}
	}
	HX_STACK_LINE(278)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,toString,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return get_event(); }
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		if (HX_FIELD_EQ(inName,"set_event") ) { return set_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { return get_precedence(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_precedence") ) { return get_precedence_dyn(); }
		if (HX_FIELD_EQ(inName,"set_precedence") ) { return set_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return set_event(inValue); }
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { return set_precedence(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("precedence"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Listener*/ ,(int)offsetof(Listener_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_type"),
	HX_CSTRING("get_event"),
	HX_CSTRING("set_event"),
	HX_CSTRING("get_precedence"),
	HX_CSTRING("set_precedence"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_space"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.Listener"), hx::TCanCast< Listener_obj> ,sStaticFields,sMemberFields,
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

void Listener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
