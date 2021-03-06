#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","new",0xbe716a6f,"zpp_nape.callbacks.ZPP_CbSet.new","zpp_nape/callbacks/CbSet.hx",174,0x58b6155e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(419)
	this->wrap_constraints = null();
	HX_STACK_LINE(418)
	this->constraints = null();
	HX_STACK_LINE(417)
	this->wrap_interactors = null();
	HX_STACK_LINE(416)
	this->interactors = null();
	HX_STACK_LINE(352)
	this->zip_conlisteners = false;
	HX_STACK_LINE(351)
	this->conlisteners = null();
	HX_STACK_LINE(293)
	this->zip_bodylisteners = false;
	HX_STACK_LINE(292)
	this->bodylisteners = null();
	HX_STACK_LINE(234)
	this->zip_listeners = false;
	HX_STACK_LINE(233)
	this->listeners = null();
	HX_STACK_LINE(204)
	this->cbpairs = null();
	HX_STACK_LINE(203)
	this->manager = null();
	HX_STACK_LINE(202)
	this->id = (int)0;
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->count = (int)0;
	HX_STACK_LINE(175)
	this->cbTypes = null();
	HX_STACK_LINE(456)
	::zpp_nape::util::ZNPList_ZPP_CbType _g = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(456)
	this->cbTypes = _g;
	HX_STACK_LINE(458)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener _g1 = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(458)
	this->listeners = _g1;
	HX_STACK_LINE(459)
	this->zip_listeners = true;
	HX_STACK_LINE(460)
	::zpp_nape::util::ZNPList_ZPP_BodyListener _g2 = ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(460)
	this->bodylisteners = _g2;
	HX_STACK_LINE(461)
	this->zip_bodylisteners = true;
	HX_STACK_LINE(462)
	::zpp_nape::util::ZNPList_ZPP_ConstraintListener _g3 = ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(462)
	this->conlisteners = _g3;
	HX_STACK_LINE(463)
	this->zip_conlisteners = true;
	HX_STACK_LINE(464)
	::zpp_nape::util::ZNPList_ZPP_Constraint _g4 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(464)
	this->constraints = _g4;
	HX_STACK_LINE(465)
	::zpp_nape::util::ZNPList_ZPP_Interactor _g5 = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(465)
	this->interactors = _g5;
	HX_STACK_LINE(466)
	int _g6 = ::zpp_nape::ZPP_ID_obj::CbSet();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(466)
	this->id = _g6;
	HX_STACK_LINE(467)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair _g7 = ::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(467)
	this->cbpairs = _g7;
}
;
	return null();
}

//ZPP_CbSet_obj::~ZPP_CbSet_obj() { }

Dynamic ZPP_CbSet_obj::__CreateEmpty() { return  new ZPP_CbSet_obj; }
hx::ObjectPtr< ZPP_CbSet_obj > ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZPP_CbSet_obj > result = new ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSet_obj > result = new ZPP_CbSet_obj();
	result->__construct();
	return result;}

Void ZPP_CbSet_obj::increment( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","increment",0x3d0e157e,"zpp_nape.callbacks.ZPP_CbSet.increment","zpp_nape/callbacks/CbSet.hx",208,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		(this->count)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,increment,(void))

bool ZPP_CbSet_obj::decrement( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","decrement",0x1b910562,"zpp_nape.callbacks.ZPP_CbSet.decrement","zpp_nape/callbacks/CbSet.hx",212,0x58b6155e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	int _g = --(this->count);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(221)
	return (_g == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,decrement,return )

Void ZPP_CbSet_obj::invalidate_pairs( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_pairs",0x2f5af2a6,"zpp_nape.callbacks.ZPP_CbSet.invalidate_pairs","zpp_nape/callbacks/CbSet.hx",224,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = this->cbpairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			::zpp_nape::callbacks::ZPP_CbSetPair cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(228)
			cb->zip_listeners = true;
			HX_STACK_LINE(229)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_pairs,(void))

Void ZPP_CbSet_obj::invalidate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_listeners",0x9501e78c,"zpp_nape.callbacks.ZPP_CbSet.invalidate_listeners","zpp_nape/callbacks/CbSet.hx",237,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->zip_listeners = true;
		HX_STACK_LINE(239)
		this->invalidate_pairs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_listeners,(void))

Void ZPP_CbSet_obj::validate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_listeners",0xf65d9827,"zpp_nape.callbacks.ZPP_CbSet.validate_listeners","zpp_nape/callbacks/CbSet.hx",245,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		if ((this->zip_listeners)){
			HX_STACK_LINE(246)
			this->zip_listeners = false;
			HX_STACK_LINE(247)
			this->realvalidate_listeners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_listeners,(void))

Void ZPP_CbSet_obj::realvalidate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_listeners",0xcb5f4f85,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_listeners","zpp_nape/callbacks/CbSet.hx",250,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		this->listeners->clear();
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(253)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(255)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(257)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener nite = this->listeners->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(259)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener cite = cb->listeners->head;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(260)
					while((true)){
						HX_STACK_LINE(260)
						if ((!(((cite != null()))))){
							HX_STACK_LINE(260)
							break;
						}
						HX_STACK_LINE(261)
						::zpp_nape::callbacks::ZPP_InteractionListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(262)
						if (((bool((nite != null())) && bool((nite->elt == cx))))){
							HX_STACK_LINE(263)
							cite = cite->next;
							HX_STACK_LINE(264)
							npre = nite;
							HX_STACK_LINE(265)
							nite = nite->next;
						}
						else{
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener &nite,::zpp_nape::callbacks::ZPP_InteractionListener &cx){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",267,0x58b6155e)
									{
										HX_STACK_LINE(267)
										::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(267)
										return (bool((cx->precedence > b->precedence)) || bool((bool((cx->precedence == b->precedence)) && bool((cx->id > b->id)))));
									}
									return null();
								}
							};
							HX_STACK_LINE(267)
							if (((bool((nite == null())) || bool(_Function_6_1::Block(nite,cx))))){
								HX_STACK_LINE(276)
								if (((cx->space == this->manager->space))){
									HX_STACK_LINE(278)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(278)
									{
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = this->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(278)
										{
											HX_STACK_LINE(278)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(278)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(278)
													ret = _g;
												}
												else{
													HX_STACK_LINE(278)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(278)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(278)
													ret->next = null();
												}
												HX_STACK_LINE(278)
												Dynamic();
											}
											HX_STACK_LINE(278)
											ret->elt = cx;
											HX_STACK_LINE(278)
											temp = ret;
										}
										HX_STACK_LINE(278)
										if (((npre == null()))){
											HX_STACK_LINE(278)
											temp->next = _this->head;
											HX_STACK_LINE(278)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(278)
											temp->next = npre->next;
											HX_STACK_LINE(278)
											npre->next = temp;
										}
										HX_STACK_LINE(278)
										bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(278)
										_this->pushmod = _g1;
										HX_STACK_LINE(278)
										(_this->length)++;
										HX_STACK_LINE(278)
										_g2 = temp;
									}
									HX_STACK_LINE(278)
									npre = _g2;
								}
								HX_STACK_LINE(280)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(283)
								npre = nite;
								HX_STACK_LINE(284)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(288)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_listeners,(void))

Void ZPP_CbSet_obj::invalidate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_bodylisteners",0xcde5932a,"zpp_nape.callbacks.ZPP_CbSet.invalidate_bodylisteners","zpp_nape/callbacks/CbSet.hx",297,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		this->zip_bodylisteners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_bodylisteners,(void))

Void ZPP_CbSet_obj::validate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_bodylisteners",0x3df52d45,"zpp_nape.callbacks.ZPP_CbSet.validate_bodylisteners","zpp_nape/callbacks/CbSet.hx",304,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		if ((this->zip_bodylisteners)){
			HX_STACK_LINE(305)
			this->zip_bodylisteners = false;
			HX_STACK_LINE(306)
			this->realvalidate_bodylisteners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_bodylisteners,(void))

Void ZPP_CbSet_obj::realvalidate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_bodylisteners",0x9b48eba3,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_bodylisteners","zpp_nape/callbacks/CbSet.hx",309,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		this->bodylisteners->clear();
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(312)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(313)
			while((true)){
				HX_STACK_LINE(313)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(313)
					break;
				}
				HX_STACK_LINE(314)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(316)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(317)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener nite = this->bodylisteners->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(318)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener cite = cb->bodylisteners->head;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(319)
					while((true)){
						HX_STACK_LINE(319)
						if ((!(((cite != null()))))){
							HX_STACK_LINE(319)
							break;
						}
						HX_STACK_LINE(320)
						::zpp_nape::callbacks::ZPP_BodyListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(321)
						if (((bool((nite != null())) && bool((nite->elt == cx))))){
							HX_STACK_LINE(322)
							cite = cite->next;
							HX_STACK_LINE(323)
							npre = nite;
							HX_STACK_LINE(324)
							nite = nite->next;
						}
						else{
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::util::ZNPNode_ZPP_BodyListener &nite,::zpp_nape::callbacks::ZPP_BodyListener &cx){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",326,0x58b6155e)
									{
										HX_STACK_LINE(326)
										::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(326)
										return (bool((cx->precedence > b->precedence)) || bool((bool((cx->precedence == b->precedence)) && bool((cx->id > b->id)))));
									}
									return null();
								}
							};
							HX_STACK_LINE(326)
							if (((bool((nite == null())) || bool(_Function_6_1::Block(nite,cx))))){
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::zpp_nape::callbacks::ZPP_CbSet_obj > __this,::zpp_nape::callbacks::ZPP_BodyListener &cx){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",335,0x58b6155e)
										{
											HX_STACK_LINE(335)
											::zpp_nape::callbacks::ZPP_OptionType _this = cx->options;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(335)
											return _this->nonemptyintersection(__this->cbTypes,_this->excludes);
										}
										return null();
									}
								};
								HX_STACK_LINE(335)
								if (((  ((!(_Function_7_1::Block(this,cx)))) ? bool((cx->space == this->manager->space)) : bool(false) ))){
									HX_STACK_LINE(337)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPList_ZPP_BodyListener _this = this->bodylisteners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(337)
													::zpp_nape::util::ZNPNode_ZPP_BodyListener _g = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(337)
													ret = _g;
												}
												else{
													HX_STACK_LINE(337)
													ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
													HX_STACK_LINE(337)
													::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(337)
													ret->next = null();
												}
												HX_STACK_LINE(337)
												Dynamic();
											}
											HX_STACK_LINE(337)
											ret->elt = cx;
											HX_STACK_LINE(337)
											temp = ret;
										}
										HX_STACK_LINE(337)
										if (((npre == null()))){
											HX_STACK_LINE(337)
											temp->next = _this->head;
											HX_STACK_LINE(337)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(337)
											temp->next = npre->next;
											HX_STACK_LINE(337)
											npre->next = temp;
										}
										HX_STACK_LINE(337)
										bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(337)
										_this->pushmod = _g1;
										HX_STACK_LINE(337)
										(_this->length)++;
										HX_STACK_LINE(337)
										_g2 = temp;
									}
									HX_STACK_LINE(337)
									npre = _g2;
								}
								HX_STACK_LINE(339)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(342)
								npre = nite;
								HX_STACK_LINE(343)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(347)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_bodylisteners,(void))

Void ZPP_CbSet_obj::invalidate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_conlisteners",0x5fc75110,"zpp_nape.callbacks.ZPP_CbSet.invalidate_conlisteners","zpp_nape/callbacks/CbSet.hx",356,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		this->zip_conlisteners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_conlisteners,(void))

Void ZPP_CbSet_obj::validate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_conlisteners",0xc54db355,"zpp_nape.callbacks.ZPP_CbSet.validate_conlisteners","zpp_nape/callbacks/CbSet.hx",363,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		if ((this->zip_conlisteners)){
			HX_STACK_LINE(364)
			this->zip_conlisteners = false;
			HX_STACK_LINE(365)
			this->realvalidate_conlisteners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_conlisteners,(void))

Void ZPP_CbSet_obj::realvalidate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_conlisteners",0x7b1a6ab7,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_conlisteners","zpp_nape/callbacks/CbSet.hx",368,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		this->conlisteners->clear();
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(372)
			while((true)){
				HX_STACK_LINE(372)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(372)
					break;
				}
				HX_STACK_LINE(373)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(375)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(376)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nite = this->conlisteners->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(377)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cite = cb->conlisteners->head;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(378)
					while((true)){
						HX_STACK_LINE(378)
						if ((!(((cite != null()))))){
							HX_STACK_LINE(378)
							break;
						}
						HX_STACK_LINE(379)
						::zpp_nape::callbacks::ZPP_ConstraintListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(380)
						if (((bool((nite != null())) && bool((nite->elt == cx))))){
							HX_STACK_LINE(381)
							cite = cite->next;
							HX_STACK_LINE(382)
							npre = nite;
							HX_STACK_LINE(383)
							nite = nite->next;
						}
						else{
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener &nite,::zpp_nape::callbacks::ZPP_ConstraintListener &cx){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",385,0x58b6155e)
									{
										HX_STACK_LINE(385)
										::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(385)
										return (bool((cx->precedence > b->precedence)) || bool((bool((cx->precedence == b->precedence)) && bool((cx->id > b->id)))));
									}
									return null();
								}
							};
							HX_STACK_LINE(385)
							if (((bool((nite == null())) || bool(_Function_6_1::Block(nite,cx))))){
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::zpp_nape::callbacks::ZPP_CbSet_obj > __this,::zpp_nape::callbacks::ZPP_ConstraintListener &cx){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",394,0x58b6155e)
										{
											HX_STACK_LINE(394)
											::zpp_nape::callbacks::ZPP_OptionType _this = cx->options;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(394)
											return _this->nonemptyintersection(__this->cbTypes,_this->excludes);
										}
										return null();
									}
								};
								HX_STACK_LINE(394)
								if (((  ((!(_Function_7_1::Block(this,cx)))) ? bool((cx->space == this->manager->space)) : bool(false) ))){
									HX_STACK_LINE(396)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(396)
									{
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPList_ZPP_ConstraintListener _this = this->conlisteners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(396)
										{
											HX_STACK_LINE(396)
											::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(396)
											{
												HX_STACK_LINE(396)
												if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(396)
													::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(396)
													ret = _g;
												}
												else{
													HX_STACK_LINE(396)
													ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
													HX_STACK_LINE(396)
													::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(396)
													ret->next = null();
												}
												HX_STACK_LINE(396)
												Dynamic();
											}
											HX_STACK_LINE(396)
											ret->elt = cx;
											HX_STACK_LINE(396)
											temp = ret;
										}
										HX_STACK_LINE(396)
										if (((npre == null()))){
											HX_STACK_LINE(396)
											temp->next = _this->head;
											HX_STACK_LINE(396)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(396)
											temp->next = npre->next;
											HX_STACK_LINE(396)
											npre->next = temp;
										}
										HX_STACK_LINE(396)
										bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(396)
										_this->pushmod = _g1;
										HX_STACK_LINE(396)
										(_this->length)++;
										HX_STACK_LINE(396)
										_g2 = temp;
									}
									HX_STACK_LINE(396)
									npre = _g2;
								}
								HX_STACK_LINE(398)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(401)
								npre = nite;
								HX_STACK_LINE(402)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(406)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_conlisteners,(void))

Void ZPP_CbSet_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate",0xf2926027,"zpp_nape.callbacks.ZPP_CbSet.validate","zpp_nape/callbacks/CbSet.hx",410,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		if ((this->zip_listeners)){
			HX_STACK_LINE(412)
			this->zip_listeners = false;
			HX_STACK_LINE(412)
			this->realvalidate_listeners();
		}
		HX_STACK_LINE(413)
		if ((this->zip_bodylisteners)){
			HX_STACK_LINE(413)
			this->zip_bodylisteners = false;
			HX_STACK_LINE(413)
			this->realvalidate_bodylisteners();
		}
		HX_STACK_LINE(414)
		if ((this->zip_conlisteners)){
			HX_STACK_LINE(414)
			this->zip_conlisteners = false;
			HX_STACK_LINE(414)
			this->realvalidate_conlisteners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate,(void))

Void ZPP_CbSet_obj::addConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","addConstraint",0x82ffacad,"zpp_nape.callbacks.ZPP_CbSet.addConstraint","zpp_nape/callbacks/CbSet.hx",423,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(423)
		this->constraints->add(con);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,addConstraint,(void))

Void ZPP_CbSet_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","addInteractor",0xada372a9,"zpp_nape.callbacks.ZPP_CbSet.addInteractor","zpp_nape/callbacks/CbSet.hx",428,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(428)
		this->interactors->add(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,addInteractor,(void))

Void ZPP_CbSet_obj::remConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","remConstraint",0xee593526,"zpp_nape.callbacks.ZPP_CbSet.remConstraint","zpp_nape/callbacks/CbSet.hx",433,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(433)
		this->constraints->remove(con);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,remConstraint,(void))

Void ZPP_CbSet_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","remInteractor",0x18fcfb22,"zpp_nape.callbacks.ZPP_CbSet.remInteractor","zpp_nape/callbacks/CbSet.hx",438,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(438)
		this->interactors->remove(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,remInteractor,(void))

Void ZPP_CbSet_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","free",0xdf8bcfbd,"zpp_nape.callbacks.ZPP_CbSet.free","zpp_nape/callbacks/CbSet.hx",471,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(497)
		this->listeners->clear();
		HX_STACK_LINE(498)
		this->zip_listeners = true;
		HX_STACK_LINE(499)
		this->bodylisteners->clear();
		HX_STACK_LINE(500)
		this->zip_bodylisteners = true;
		HX_STACK_LINE(501)
		this->conlisteners->clear();
		HX_STACK_LINE(502)
		this->zip_conlisteners = true;
		HX_STACK_LINE(504)
		while((true)){
			HX_STACK_LINE(504)
			if ((!((!(((this->cbTypes->head == null()))))))){
				HX_STACK_LINE(504)
				break;
			}
			HX_STACK_LINE(505)
			::zpp_nape::callbacks::ZPP_CbType cb = this->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(506)
			cb->cbsets->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(509)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,free,(void))

Void ZPP_CbSet_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","alloc",0xd5d72044,"zpp_nape.callbacks.ZPP_CbSet.alloc","zpp_nape/callbacks/CbSet.hx",520,0x58b6155e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,alloc,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSet_obj::zpp_pool;

bool ZPP_CbSet_obj::setlt( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","setlt",0x2e732279,"zpp_nape.callbacks.ZPP_CbSet.setlt","zpp_nape/callbacks/CbSet.hx",440,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(441)
	::zpp_nape::util::ZNPNode_ZPP_CbType i = a->cbTypes->head;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(442)
	::zpp_nape::util::ZNPNode_ZPP_CbType j = b->cbTypes->head;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(443)
	while((true)){
		HX_STACK_LINE(443)
		if ((!(((bool((i != null())) && bool((j != null()))))))){
			HX_STACK_LINE(443)
			break;
		}
		HX_STACK_LINE(444)
		::zpp_nape::callbacks::ZPP_CbType ca = i->elt;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(445)
		::zpp_nape::callbacks::ZPP_CbType cb = j->elt;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(446)
		if (((ca->id < cb->id))){
			HX_STACK_LINE(446)
			return true;
		}
		HX_STACK_LINE(447)
		if (((cb->id < ca->id))){
			HX_STACK_LINE(447)
			return false;
		}
		else{
			HX_STACK_LINE(449)
			i = i->next;
			HX_STACK_LINE(450)
			j = j->next;
		}
	}
	HX_STACK_LINE(453)
	return (bool((j != null())) && bool((i == null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSet_obj,setlt,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSet_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","get",0xbe6c1aa5,"zpp_nape.callbacks.ZPP_CbSet.get","zpp_nape/callbacks/CbSet.hx",545,0x58b6155e)
	HX_STACK_ARG(cbTypes,"cbTypes")
	HX_STACK_LINE(546)
	::zpp_nape::callbacks::ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(547)
	{
		HX_STACK_LINE(548)
		if (((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(549)
			::zpp_nape::callbacks::ZPP_CbSet _g = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(549)
			ret = _g;
		}
		else{
			HX_STACK_LINE(555)
			ret = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(556)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(557)
			ret->next = null();
		}
		HX_STACK_LINE(562)
		Dynamic();
	}
	HX_STACK_LINE(564)
	::zpp_nape::util::ZNPNode_ZPP_CbType ite = null();		HX_STACK_VAR(ite,"ite");
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(568)
		::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(569)
		while((true)){
			HX_STACK_LINE(569)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(569)
				break;
			}
			HX_STACK_LINE(570)
			::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(572)
				::zpp_nape::util::ZNPNode_ZPP_CbType _g1 = ret->cbTypes->insert(ite,cb);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(572)
				ite = _g1;
				HX_STACK_LINE(573)
				cb->cbsets->add(ret);
			}
			HX_STACK_LINE(575)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(578)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,get,return )

bool ZPP_CbSet_obj::compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i,::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","compatible",0xda413125,"zpp_nape.callbacks.ZPP_CbSet.compatible","zpp_nape/callbacks/CbSet.hx",582,0x58b6155e)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSet &a){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",582,0x58b6155e)
			{
				HX_STACK_LINE(582)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType xs = a->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(582)
				return (  ((_this->nonemptyintersection(xs,_this->includes))) ? bool(!(_this->nonemptyintersection(xs,_this->excludes))) : bool(false) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSet &b){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",582,0x58b6155e)
			{
				HX_STACK_LINE(582)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType xs = b->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(582)
				return (  ((_this->nonemptyintersection(xs,_this->includes))) ? bool(!(_this->nonemptyintersection(xs,_this->excludes))) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(582)
	if ((!(((  ((_Function_1_1::Block(i,a))) ? bool(_Function_1_2::Block(i,b)) : bool(false) ))))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSet &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/CbSet.hx",582,0x58b6155e)
				{
					HX_STACK_LINE(582)
					::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(582)
					::zpp_nape::util::ZNPList_ZPP_CbType xs = a->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(582)
					return (  ((_this->nonemptyintersection(xs,_this->includes))) ? bool(!(_this->nonemptyintersection(xs,_this->excludes))) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(582)
		if ((_Function_2_1::Block(i,a))){
			HX_STACK_LINE(582)
			::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = b->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(582)
			if ((_this->nonemptyintersection(xs,_this->includes))){
				HX_STACK_LINE(582)
				return !(_this->nonemptyintersection(xs,_this->excludes));
			}
			else{
				HX_STACK_LINE(582)
				return false;
			}
		}
		else{
			HX_STACK_LINE(582)
			return false;
		}
	}
	else{
		HX_STACK_LINE(582)
		return true;
	}
	HX_STACK_LINE(582)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_CbSet_obj,compatible,return )

bool ZPP_CbSet_obj::empty_intersection( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","empty_intersection",0x6822b54c,"zpp_nape.callbacks.ZPP_CbSet.empty_intersection","zpp_nape/callbacks/CbSet.hx",586,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(586)
	::zpp_nape::callbacks::ZPP_CbSetPair _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(586)
		::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs;		HX_STACK_VAR(pairs,"pairs");
		HX_STACK_LINE(586)
		if (((a->cbpairs->length < b->cbpairs->length))){
			HX_STACK_LINE(586)
			pairs = a->cbpairs;
		}
		else{
			HX_STACK_LINE(586)
			pairs = b->cbpairs;
		}
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(586)
			while((true)){
				HX_STACK_LINE(586)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(586)
					break;
				}
				HX_STACK_LINE(586)
				::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(586)
				if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
					HX_STACK_LINE(586)
					ret = p;
					HX_STACK_LINE(586)
					break;
				}
				HX_STACK_LINE(586)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(586)
		if (((ret == null()))){
			HX_STACK_LINE(586)
			::zpp_nape::callbacks::ZPP_CbSetPair _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(586)
				{
					HX_STACK_LINE(586)
					if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(586)
						::zpp_nape::callbacks::ZPP_CbSetPair _g = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(586)
						ret1 = _g;
					}
					else{
						HX_STACK_LINE(586)
						ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(586)
						::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(586)
						ret1->next = null();
					}
					HX_STACK_LINE(586)
					ret1->zip_listeners = true;
				}
				HX_STACK_LINE(586)
				if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
					HX_STACK_LINE(586)
					ret1->a = a;
					HX_STACK_LINE(586)
					ret1->b = b;
				}
				else{
					HX_STACK_LINE(586)
					ret1->a = b;
					HX_STACK_LINE(586)
					ret1->b = a;
				}
				HX_STACK_LINE(586)
				_g1 = ret1;
			}
			HX_STACK_LINE(586)
			ret = _g1;
			HX_STACK_LINE(586)
			a->cbpairs->add(ret);
			HX_STACK_LINE(586)
			if (((b != a))){
				HX_STACK_LINE(586)
				b->cbpairs->add(ret);
			}
		}
		HX_STACK_LINE(586)
		if ((ret->zip_listeners)){
			HX_STACK_LINE(586)
			ret->zip_listeners = false;
			HX_STACK_LINE(586)
			ret->__validate();
		}
		HX_STACK_LINE(586)
		_this = ret;
	}
	HX_STACK_LINE(586)
	return (_this->listeners->head == null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSet_obj,empty_intersection,return )

bool ZPP_CbSet_obj::single_intersection( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b,::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","single_intersection",0x2d1641af,"zpp_nape.callbacks.ZPP_CbSet.single_intersection","zpp_nape/callbacks/CbSet.hx",589,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(589)
	::zpp_nape::callbacks::ZPP_CbSetPair _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(589)
		::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs;		HX_STACK_VAR(pairs,"pairs");
		HX_STACK_LINE(589)
		if (((a->cbpairs->length < b->cbpairs->length))){
			HX_STACK_LINE(589)
			pairs = a->cbpairs;
		}
		else{
			HX_STACK_LINE(589)
			pairs = b->cbpairs;
		}
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(589)
				::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(589)
				if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
					HX_STACK_LINE(589)
					ret = p;
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(589)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(589)
		if (((ret == null()))){
			HX_STACK_LINE(589)
			::zpp_nape::callbacks::ZPP_CbSetPair _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(589)
				{
					HX_STACK_LINE(589)
					if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(589)
						::zpp_nape::callbacks::ZPP_CbSetPair _g = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(589)
						ret1 = _g;
					}
					else{
						HX_STACK_LINE(589)
						ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(589)
						::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(589)
						ret1->next = null();
					}
					HX_STACK_LINE(589)
					ret1->zip_listeners = true;
				}
				HX_STACK_LINE(589)
				if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
					HX_STACK_LINE(589)
					ret1->a = a;
					HX_STACK_LINE(589)
					ret1->b = b;
				}
				else{
					HX_STACK_LINE(589)
					ret1->a = b;
					HX_STACK_LINE(589)
					ret1->b = a;
				}
				HX_STACK_LINE(589)
				_g1 = ret1;
			}
			HX_STACK_LINE(589)
			ret = _g1;
			HX_STACK_LINE(589)
			a->cbpairs->add(ret);
			HX_STACK_LINE(589)
			if (((b != a))){
				HX_STACK_LINE(589)
				b->cbpairs->add(ret);
			}
		}
		HX_STACK_LINE(589)
		if ((ret->zip_listeners)){
			HX_STACK_LINE(589)
			ret->zip_listeners = false;
			HX_STACK_LINE(589)
			ret->__validate();
		}
		HX_STACK_LINE(589)
		_this = ret;
	}
	HX_STACK_LINE(589)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ite = _this->listeners->head;		HX_STACK_VAR(ite,"ite");
	HX_STACK_LINE(589)
	return (bool((bool((ite != null())) && bool((ite->elt == i)))) && bool((ite->next == null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_CbSet_obj,single_intersection,return )

Void ZPP_CbSet_obj::find_all( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b,int event,Dynamic cb){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","find_all",0x947eae6c,"zpp_nape.callbacks.ZPP_CbSet.find_all","zpp_nape/callbacks/CbSet.hx",593,0x58b6155e)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(593)
		::zpp_nape::callbacks::ZPP_CbSetPair _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs;		HX_STACK_VAR(pairs,"pairs");
			HX_STACK_LINE(593)
			if (((a->cbpairs->length < b->cbpairs->length))){
				HX_STACK_LINE(593)
				pairs = a->cbpairs;
			}
			else{
				HX_STACK_LINE(593)
				pairs = b->cbpairs;
			}
			HX_STACK_LINE(593)
			{
				HX_STACK_LINE(593)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(593)
				while((true)){
					HX_STACK_LINE(593)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(593)
						break;
					}
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(593)
					if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
						HX_STACK_LINE(593)
						ret = p;
						HX_STACK_LINE(593)
						break;
					}
					HX_STACK_LINE(593)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(593)
			if (((ret == null()))){
				HX_STACK_LINE(593)
				::zpp_nape::callbacks::ZPP_CbSetPair _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(593)
					{
						HX_STACK_LINE(593)
						if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(593)
							::zpp_nape::callbacks::ZPP_CbSetPair _g = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(593)
							ret1 = _g;
						}
						else{
							HX_STACK_LINE(593)
							ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(593)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(593)
							ret1->next = null();
						}
						HX_STACK_LINE(593)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(593)
					if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
						HX_STACK_LINE(593)
						ret1->a = a;
						HX_STACK_LINE(593)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(593)
						ret1->a = b;
						HX_STACK_LINE(593)
						ret1->b = a;
					}
					HX_STACK_LINE(593)
					_g1 = ret1;
				}
				HX_STACK_LINE(593)
				ret = _g1;
				HX_STACK_LINE(593)
				a->cbpairs->add(ret);
				HX_STACK_LINE(593)
				if (((b != a))){
					HX_STACK_LINE(593)
					b->cbpairs->add(ret);
				}
			}
			HX_STACK_LINE(593)
			if ((ret->zip_listeners)){
				HX_STACK_LINE(593)
				ret->zip_listeners = false;
				HX_STACK_LINE(593)
				ret->__validate();
			}
			HX_STACK_LINE(593)
			_this = ret;
		}
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = _this->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(593)
			while((true)){
				HX_STACK_LINE(593)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(593)
					break;
				}
				HX_STACK_LINE(593)
				::zpp_nape::callbacks::ZPP_InteractionListener x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(593)
				if (((x->event == event))){
					HX_STACK_LINE(593)
					cb(x).Cast< Void >();
				}
				HX_STACK_LINE(593)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_CbSet_obj,find_all,(void))


ZPP_CbSet_obj::ZPP_CbSet_obj()
{
}

void ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSet);
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(cbpairs,"cbpairs");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_MARK_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_MARK_MEMBER_NAME(zip_bodylisteners,"zip_bodylisteners");
	HX_MARK_MEMBER_NAME(conlisteners,"conlisteners");
	HX_MARK_MEMBER_NAME(zip_conlisteners,"zip_conlisteners");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_END_CLASS();
}

void ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(cbpairs,"cbpairs");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_VISIT_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_VISIT_MEMBER_NAME(zip_bodylisteners,"zip_bodylisteners");
	HX_VISIT_MEMBER_NAME(conlisteners,"conlisteners");
	HX_VISIT_MEMBER_NAME(zip_conlisteners,"zip_conlisteners");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
}

Dynamic ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { return setlt_dyn(); }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"cbpairs") ) { return cbpairs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"find_all") ) { return find_all_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"decrement") ) { return decrement_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { return compatible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conlisteners") ) { return conlisteners; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { return zip_listeners; }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { return bodylisteners; }
		if (HX_FIELD_EQ(inName,"addConstraint") ) { return addConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"remConstraint") ) { return remConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidate_pairs") ) { return invalidate_pairs_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_conlisteners") ) { return zip_conlisteners; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_bodylisteners") ) { return zip_bodylisteners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"empty_intersection") ) { return empty_intersection_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_listeners") ) { return validate_listeners_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"single_intersection") ) { return single_intersection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"invalidate_listeners") ) { return invalidate_listeners_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validate_conlisteners") ) { return validate_conlisteners_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"realvalidate_listeners") ) { return realvalidate_listeners_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_bodylisteners") ) { return validate_bodylisteners_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidate_conlisteners") ) { return invalidate_conlisteners_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_bodylisteners") ) { return invalidate_bodylisteners_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"realvalidate_conlisteners") ) { return realvalidate_conlisteners_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"realvalidate_bodylisteners") ) { return realvalidate_bodylisteners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::zpp_nape::space::ZPP_CbSetManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbpairs") ) { cbpairs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSetPair >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conlisteners") ) { conlisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_ConstraintListener >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { zip_listeners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { bodylisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_BodyListener >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_conlisteners") ) { zip_conlisteners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_bodylisteners") ) { zip_bodylisteners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("cbpairs"));
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("zip_listeners"));
	outFields->push(HX_CSTRING("bodylisteners"));
	outFields->push(HX_CSTRING("zip_bodylisteners"));
	outFields->push(HX_CSTRING("conlisteners"));
	outFields->push(HX_CSTRING("zip_conlisteners"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("wrap_interactors"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("setlt"),
	HX_CSTRING("get"),
	HX_CSTRING("compatible"),
	HX_CSTRING("empty_intersection"),
	HX_CSTRING("single_intersection"),
	HX_CSTRING("find_all"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_CbSet_obj,cbTypes),HX_CSTRING("cbTypes")},
	{hx::fsInt,(int)offsetof(ZPP_CbSet_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSet_obj,next),HX_CSTRING("next")},
	{hx::fsInt,(int)offsetof(ZPP_CbSet_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CbSetManager*/ ,(int)offsetof(ZPP_CbSet_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSetPair*/ ,(int)offsetof(ZPP_CbSet_obj,cbpairs),HX_CSTRING("cbpairs")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_InteractionListener*/ ,(int)offsetof(ZPP_CbSet_obj,listeners),HX_CSTRING("listeners")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_listeners),HX_CSTRING("zip_listeners")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_BodyListener*/ ,(int)offsetof(ZPP_CbSet_obj,bodylisteners),HX_CSTRING("bodylisteners")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_bodylisteners),HX_CSTRING("zip_bodylisteners")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_ConstraintListener*/ ,(int)offsetof(ZPP_CbSet_obj,conlisteners),HX_CSTRING("conlisteners")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_conlisteners),HX_CSTRING("zip_conlisteners")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Interactor*/ ,(int)offsetof(ZPP_CbSet_obj,interactors),HX_CSTRING("interactors")},
	{hx::fsObject /*::nape::phys::InteractorList*/ ,(int)offsetof(ZPP_CbSet_obj,wrap_interactors),HX_CSTRING("wrap_interactors")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_CbSet_obj,constraints),HX_CSTRING("constraints")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_CbSet_obj,wrap_constraints),HX_CSTRING("wrap_constraints")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cbTypes"),
	HX_CSTRING("count"),
	HX_CSTRING("next"),
	HX_CSTRING("id"),
	HX_CSTRING("manager"),
	HX_CSTRING("cbpairs"),
	HX_CSTRING("increment"),
	HX_CSTRING("decrement"),
	HX_CSTRING("invalidate_pairs"),
	HX_CSTRING("listeners"),
	HX_CSTRING("zip_listeners"),
	HX_CSTRING("invalidate_listeners"),
	HX_CSTRING("validate_listeners"),
	HX_CSTRING("realvalidate_listeners"),
	HX_CSTRING("bodylisteners"),
	HX_CSTRING("zip_bodylisteners"),
	HX_CSTRING("invalidate_bodylisteners"),
	HX_CSTRING("validate_bodylisteners"),
	HX_CSTRING("realvalidate_bodylisteners"),
	HX_CSTRING("conlisteners"),
	HX_CSTRING("zip_conlisteners"),
	HX_CSTRING("invalidate_conlisteners"),
	HX_CSTRING("validate_conlisteners"),
	HX_CSTRING("realvalidate_conlisteners"),
	HX_CSTRING("validate"),
	HX_CSTRING("interactors"),
	HX_CSTRING("wrap_interactors"),
	HX_CSTRING("constraints"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("addConstraint"),
	HX_CSTRING("addInteractor"),
	HX_CSTRING("remConstraint"),
	HX_CSTRING("remInteractor"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_CbSet_obj::__mClass;

void ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_CbSet"), hx::TCanCast< ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
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

void ZPP_CbSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
