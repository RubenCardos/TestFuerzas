#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionListener_obj::__construct(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{
HX_STACK_FRAME("nape.callbacks.InteractionListener","new",0x015a0bd2,"nape.callbacks.InteractionListener.new","nape/callbacks/InteractionListener.hx",207,0xa06240a0)
HX_STACK_THIS(this)
HX_STACK_ARG(event,"event")
HX_STACK_ARG(interactionType,"interactionType")
HX_STACK_ARG(options1,"options1")
HX_STACK_ARG(options2,"options2")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(__o_precedence,"precedence")
int precedence = __o_precedence.Default(0);
{
	HX_STACK_LINE(211)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(342)
	super::__construct();
	HX_STACK_LINE(354)
	int xevent = (int)-1;		HX_STACK_VAR(xevent,"xevent");
	HX_STACK_LINE(355)
	::nape::callbacks::CbEvent _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(355)
			::nape::callbacks::CbEvent _g = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g;
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(355)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
	}
	HX_STACK_LINE(355)
	if (((event == _g1))){
		HX_STACK_LINE(355)
		xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN;
	}
	else{
		HX_STACK_LINE(356)
		::nape::callbacks::CbEvent _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(356)
				::nape::callbacks::CbEvent _g2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = _g2;
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(356)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
		}
		HX_STACK_LINE(356)
		if (((event == _g3))){
			HX_STACK_LINE(356)
			xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END;
		}
		else{
			HX_STACK_LINE(357)
			::nape::callbacks::CbEvent _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(357)
					::nape::callbacks::CbEvent _g4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = _g4;
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(357)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(357)
			if (((event == _g5))){
				HX_STACK_LINE(357)
				xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING;
			}
			else{
			}
		}
	}
	HX_STACK_LINE(363)
	::nape::callbacks::OptionType _g6 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options1);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(363)
	::nape::callbacks::OptionType _g7 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options2);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(363)
	::zpp_nape::callbacks::ZPP_InteractionListener _g8 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__new(_g6,_g7,xevent,::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_INTERACTION);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(363)
	this->zpp_inner_zn = _g8;
	HX_STACK_LINE(364)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(365)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(366)
	this->zpp_inner_zn->outer_zni = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(367)
	this->zpp_inner->precedence = precedence;
	HX_STACK_LINE(368)
	this->zpp_inner_zn->handleri = handler;
	HX_STACK_LINE(369)
	{
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			::nape::callbacks::InteractionType _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(369)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
					HX_STACK_LINE(369)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType _g9 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g9;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					_g13 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(369)
					if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
						HX_STACK_LINE(369)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType _g10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g10;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						_g13 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(369)
						if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType _g11 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g11;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							_g13 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(369)
							if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
								HX_STACK_LINE(369)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(369)
									::nape::callbacks::InteractionType _g12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g12;
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(369)
								_g13 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
							}
							else{
								HX_STACK_LINE(369)
								_g13 = null();
							}
						}
					}
				}
			}
			HX_STACK_LINE(369)
			if (((_g13 != interactionType))){
				HX_STACK_LINE(369)
				::nape::callbacks::InteractionType _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType _g14 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g14;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					_g15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				HX_STACK_LINE(369)
				int xtype;		HX_STACK_VAR(xtype,"xtype");
				HX_STACK_LINE(369)
				if (((interactionType == _g15))){
					HX_STACK_LINE(369)
					xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType _g16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g16;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						_g17 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					HX_STACK_LINE(369)
					if (((interactionType == _g17))){
						HX_STACK_LINE(369)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType _g19;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType _g18 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g18;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							_g19 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						HX_STACK_LINE(369)
						if (((interactionType == _g19))){
							HX_STACK_LINE(369)
							xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(369)
							xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
						}
					}
				}
				HX_STACK_LINE(369)
				this->zpp_inner_zn->itype = xtype;
			}
		}
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(369)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
				HX_STACK_LINE(369)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType _g20 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g20;
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(369)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(369)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
					HX_STACK_LINE(369)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType _g21 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g21;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(369)
					if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
						HX_STACK_LINE(369)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType _g22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g22;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(369)
						if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType _g23 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g23,"_g23");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g23;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(369)
							Dynamic();
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//InteractionListener_obj::~InteractionListener_obj() { }

Dynamic InteractionListener_obj::__CreateEmpty() { return  new InteractionListener_obj; }
hx::ObjectPtr< InteractionListener_obj > InteractionListener_obj::__new(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{  hx::ObjectPtr< InteractionListener_obj > result = new InteractionListener_obj();
	result->__construct(event,interactionType,options1,options2,handler,__o_precedence);
	return result;}

Dynamic InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionListener_obj > result = new InteractionListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::nape::callbacks::OptionType InteractionListener_obj::get_options1( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_options1",0x4c8c396a,"nape.callbacks.InteractionListener.get_options1","nape/callbacks/InteractionListener.hx",218,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options1,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options1( ::nape::callbacks::OptionType options1){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_options1",0x61855cde,"nape.callbacks.InteractionListener.set_options1","nape/callbacks/InteractionListener.hx",220,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options1,"options1")
	HX_STACK_LINE(222)
	this->zpp_inner_zn->options1->set(options1->zpp_inner);
	HX_STACK_LINE(224)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options1,return )

::nape::callbacks::OptionType InteractionListener_obj::get_options2( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_options2",0x4c8c396b,"nape.callbacks.InteractionListener.get_options2","nape/callbacks/InteractionListener.hx",232,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options2,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options2( ::nape::callbacks::OptionType options2){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_options2",0x61855cdf,"nape.callbacks.InteractionListener.set_options2","nape/callbacks/InteractionListener.hx",234,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options2,"options2")
	HX_STACK_LINE(236)
	this->zpp_inner_zn->options2->set(options2->zpp_inner);
	HX_STACK_LINE(238)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options2,return )

::nape::callbacks::InteractionType InteractionListener_obj::get_interactionType( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_interactionType",0x02d33635,"nape.callbacks.InteractionListener.get_interactionType","nape/callbacks/InteractionListener.hx",249,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(251)
	if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
		HX_STACK_LINE(251)
		if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(251)
			::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g;
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(251)
		return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(252)
		if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
			HX_STACK_LINE(252)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(252)
				::nape::callbacks::InteractionType _g1 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g1;
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(252)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(253)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
				HX_STACK_LINE(253)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(253)
					::nape::callbacks::InteractionType _g2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g2;
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(253)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(254)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
					HX_STACK_LINE(254)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(254)
						::nape::callbacks::InteractionType _g3 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g3;
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(254)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(255)
					return null();
				}
			}
		}
	}
	HX_STACK_LINE(251)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_interactionType,return )

::nape::callbacks::InteractionType InteractionListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_interactionType",0x3f702941,"nape.callbacks.InteractionListener.set_interactionType","nape/callbacks/InteractionListener.hx",257,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(interactionType,"interactionType")
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(264)
		::nape::callbacks::InteractionType _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(264)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
				HX_STACK_LINE(264)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(264)
					::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g;
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(264)
				_g4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(264)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
					HX_STACK_LINE(264)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(264)
						::nape::callbacks::InteractionType _g1 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g1;
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(264)
					_g4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(264)
					if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
						HX_STACK_LINE(264)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(264)
							::nape::callbacks::InteractionType _g2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g2;
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(264)
						_g4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(264)
						if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
							HX_STACK_LINE(264)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(264)
								::nape::callbacks::InteractionType _g3 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g3;
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(264)
							_g4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(264)
							_g4 = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(264)
		if (((_g4 != interactionType))){
			HX_STACK_LINE(265)
			::nape::callbacks::InteractionType _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType _g5 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g5;
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(265)
				_g6 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(265)
			int xtype;		HX_STACK_VAR(xtype,"xtype");
			HX_STACK_LINE(265)
			if (((interactionType == _g6))){
				HX_STACK_LINE(265)
				xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(265)
				::nape::callbacks::InteractionType _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(265)
						::nape::callbacks::InteractionType _g7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g7;
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(265)
					_g8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				HX_STACK_LINE(265)
				if (((interactionType == _g8))){
					HX_STACK_LINE(265)
					xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(265)
							::nape::callbacks::InteractionType _g9 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g9;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(265)
						_g10 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					HX_STACK_LINE(265)
					if (((interactionType == _g10))){
						HX_STACK_LINE(265)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(265)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
					}
				}
			}
			HX_STACK_LINE(266)
			this->zpp_inner_zn->itype = xtype;
		}
	}
	HX_STACK_LINE(269)
	int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(269)
	if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
		HX_STACK_LINE(269)
		if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
			HX_STACK_LINE(269)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(269)
			::nape::callbacks::InteractionType _g11 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(269)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g11;
			HX_STACK_LINE(269)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(269)
		return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(269)
		if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
			HX_STACK_LINE(269)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(269)
				::nape::callbacks::InteractionType _g12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g12;
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(269)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(269)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
				HX_STACK_LINE(269)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(269)
					::nape::callbacks::InteractionType _g13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g13;
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(269)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(269)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
					HX_STACK_LINE(269)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(269)
						::nape::callbacks::InteractionType _g14 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g14;
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(269)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(269)
					return null();
				}
			}
		}
	}
	HX_STACK_LINE(269)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_interactionType,return )

Dynamic InteractionListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_handler",0xd58a0d53,"nape.callbacks.InteractionListener.get_handler","nape/callbacks/InteractionListener.hx",277,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	return this->zpp_inner_zn->handleri;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_handler,return )

Dynamic InteractionListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_handler",0xdff7145f,"nape.callbacks.InteractionListener.set_handler","nape/callbacks/InteractionListener.hx",279,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(286)
	this->zpp_inner_zn->handleri = handler;
	HX_STACK_LINE(288)
	return this->zpp_inner_zn->handleri;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_handler,return )

bool InteractionListener_obj::get_allowSleepingCallbacks( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_allowSleepingCallbacks",0xaced5331,"nape.callbacks.InteractionListener.get_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",301,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	return this->zpp_inner_zn->allowSleepingCallbacks;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_allowSleepingCallbacks,return )

bool InteractionListener_obj::set_allowSleepingCallbacks( bool allowSleepingCallbacks){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_allowSleepingCallbacks",0x0c8219a5,"nape.callbacks.InteractionListener.set_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",303,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowSleepingCallbacks,"allowSleepingCallbacks")
	HX_STACK_LINE(305)
	this->zpp_inner_zn->allowSleepingCallbacks = allowSleepingCallbacks;
	HX_STACK_LINE(307)
	return this->zpp_inner_zn->allowSleepingCallbacks;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_allowSleepingCallbacks,return )


InteractionListener_obj::InteractionListener_obj()
{
}

void InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return get_handler(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return get_options1(); }
		if (HX_FIELD_EQ(inName,"options2") ) { return get_options2(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return get_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return set_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return get_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options2") ) { return set_options2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return get_interactionType(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return get_interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return set_interactionType_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return get_allowSleepingCallbacks(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_allowSleepingCallbacks") ) { return get_allowSleepingCallbacks_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSleepingCallbacks") ) { return set_allowSleepingCallbacks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return set_handler(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return set_options1(inValue); }
		if (HX_FIELD_EQ(inName,"options2") ) { return set_options2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return set_interactionType(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return set_allowSleepingCallbacks(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("options1"));
	outFields->push(HX_CSTRING("options2"));
	outFields->push(HX_CSTRING("interactionType"));
	outFields->push(HX_CSTRING("allowSleepingCallbacks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(InteractionListener_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_options1"),
	HX_CSTRING("set_options1"),
	HX_CSTRING("get_options2"),
	HX_CSTRING("set_options2"),
	HX_CSTRING("get_interactionType"),
	HX_CSTRING("set_interactionType"),
	HX_CSTRING("get_handler"),
	HX_CSTRING("set_handler"),
	HX_CSTRING("get_allowSleepingCallbacks"),
	HX_CSTRING("set_allowSleepingCallbacks"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

#endif

Class InteractionListener_obj::__mClass;

void InteractionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionListener"), hx::TCanCast< InteractionListener_obj> ,sStaticFields,sMemberFields,
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

void InteractionListener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
