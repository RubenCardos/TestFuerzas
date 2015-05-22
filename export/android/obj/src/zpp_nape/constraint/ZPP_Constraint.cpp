#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_Constraint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","new",0xdb5b4dc4,"zpp_nape.constraint.ZPP_Constraint.new","zpp_nape/constraint/Constraint.hx",174,0xf29441f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(495)
	this->pre_dt = 0.0;
	HX_STACK_LINE(215)
	this->wrap_cbTypes = null();
	HX_STACK_LINE(214)
	this->cbSet = null();
	HX_STACK_LINE(213)
	this->cbTypes = null();
	HX_STACK_LINE(192)
	this->__velocity = false;
	HX_STACK_LINE(191)
	this->ignore = false;
	HX_STACK_LINE(190)
	this->component = null();
	HX_STACK_LINE(189)
	this->removeOnBreak = false;
	HX_STACK_LINE(188)
	this->breakUnderError = false;
	HX_STACK_LINE(187)
	this->breakUnderForce = false;
	HX_STACK_LINE(186)
	this->maxError = 0.0;
	HX_STACK_LINE(185)
	this->maxForce = 0.0;
	HX_STACK_LINE(184)
	this->damping = 0.0;
	HX_STACK_LINE(183)
	this->frequency = 0.0;
	HX_STACK_LINE(182)
	this->stiff = false;
	HX_STACK_LINE(181)
	this->active = false;
	HX_STACK_LINE(180)
	this->space = null();
	HX_STACK_LINE(179)
	this->compound = null();
	HX_STACK_LINE(178)
	this->userData = null();
	HX_STACK_LINE(177)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(194)
	this->__velocity = false;
	HX_STACK_LINE(195)
	int _g = ::zpp_nape::ZPP_ID_obj::Constraint();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(195)
	this->id = _g;
	HX_STACK_LINE(196)
	this->stiff = true;
	HX_STACK_LINE(197)
	this->active = true;
	HX_STACK_LINE(198)
	this->ignore = false;
	HX_STACK_LINE(199)
	this->frequency = (int)10;
	HX_STACK_LINE(200)
	this->damping = (int)1;
	HX_STACK_LINE(201)
	this->maxForce = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(202)
	this->maxError = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(203)
	this->breakUnderForce = false;
	HX_STACK_LINE(204)
	this->removeOnBreak = true;
	HX_STACK_LINE(205)
	this->pre_dt = -1.0;
	HX_STACK_LINE(206)
	::zpp_nape::util::ZNPList_ZPP_CbType _g1 = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(206)
	this->cbTypes = _g1;
}
;
	return null();
}

//ZPP_Constraint_obj::~ZPP_Constraint_obj() { }

Dynamic ZPP_Constraint_obj::__CreateEmpty() { return  new ZPP_Constraint_obj; }
hx::ObjectPtr< ZPP_Constraint_obj > ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZPP_Constraint_obj > result = new ZPP_Constraint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Constraint_obj > result = new ZPP_Constraint_obj();
	result->__construct();
	return result;}

Void ZPP_Constraint_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","clear",0x92480ff1,"zpp_nape.constraint.ZPP_Constraint.clear","zpp_nape/constraint/Constraint.hx",176,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,clear,(void))

Void ZPP_Constraint_obj::immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","immutable_midstep",0x734194fb,"zpp_nape.constraint.ZPP_Constraint.immutable_midstep","zpp_nape/constraint/Constraint.hx",208,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,immutable_midstep,(void))

Void ZPP_Constraint_obj::setupcbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","setupcbTypes",0x685aaa99,"zpp_nape.constraint.ZPP_Constraint.setupcbTypes","zpp_nape/constraint/Constraint.hx",216,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::nape::callbacks::CbTypeList _g = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->cbTypes,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		this->wrap_cbTypes = _g;
		HX_STACK_LINE(218)
		this->wrap_cbTypes->zpp_inner->adder = this->wrap_cbTypes_adder_dyn();
		HX_STACK_LINE(219)
		this->wrap_cbTypes->zpp_inner->subber = this->wrap_cbTypes_subber_dyn();
		HX_STACK_LINE(220)
		this->wrap_cbTypes->zpp_inner->dontremove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,setupcbTypes,(void))

Void ZPP_Constraint_obj::wrap_cbTypes_subber( ::nape::callbacks::CbType pcb){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wrap_cbTypes_subber",0xf0d24acd,"zpp_nape.constraint.ZPP_Constraint.wrap_cbTypes_subber","zpp_nape/constraint/Constraint.hx",230,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pcb,"pcb")
		HX_STACK_LINE(231)
		::zpp_nape::callbacks::ZPP_CbType cb = pcb->zpp_inner;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(232)
		if ((this->cbTypes->has(cb))){
			HX_STACK_LINE(233)
			if (((this->space != null()))){
				HX_STACK_LINE(234)
				this->dealloc_cbSet();
				HX_STACK_LINE(235)
				cb->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(237)
			this->cbTypes->remove(cb);
			HX_STACK_LINE(238)
			if (((this->space != null()))){
				HX_STACK_LINE(239)
				this->alloc_cbSet();
				HX_STACK_LINE(240)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,wrap_cbTypes_subber,(void))

bool ZPP_Constraint_obj::wrap_cbTypes_adder( ::nape::callbacks::CbType cb){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wrap_cbTypes_adder",0xac26ef90,"zpp_nape.constraint.ZPP_Constraint.wrap_cbTypes_adder","zpp_nape/constraint/Constraint.hx",244,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cb,"cb")
	HX_STACK_LINE(245)
	this->insert_cbtype(cb->zpp_inner);
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,wrap_cbTypes_adder,return )

Void ZPP_Constraint_obj::insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","insert_cbtype",0xb0fdbec3,"zpp_nape.constraint.ZPP_Constraint.insert_cbtype","zpp_nape/constraint/Constraint.hx",249,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(249)
		if ((!(this->cbTypes->has(cb)))){
			HX_STACK_LINE(250)
			if (((this->space != null()))){
				HX_STACK_LINE(251)
				this->dealloc_cbSet();
				HX_STACK_LINE(252)
				cb->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(255)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(257)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(259)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(261)
							if (((cb->id < j->id))){
								HX_STACK_LINE(261)
								break;
							}
							HX_STACK_LINE(262)
							pre = cx_ite;
						}
						HX_STACK_LINE(264)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = this->cbTypes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(267)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(267)
								ret = _g;
							}
							else{
								HX_STACK_LINE(267)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(267)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(267)
								ret->next = null();
							}
							HX_STACK_LINE(267)
							Dynamic();
						}
						HX_STACK_LINE(267)
						ret->elt = cb;
						HX_STACK_LINE(267)
						temp = ret;
					}
					HX_STACK_LINE(267)
					if (((pre == null()))){
						HX_STACK_LINE(267)
						temp->next = _this->head;
						HX_STACK_LINE(267)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(267)
						temp->next = pre->next;
						HX_STACK_LINE(267)
						pre->next = temp;
					}
					HX_STACK_LINE(267)
					bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(267)
					_this->pushmod = _g1;
					HX_STACK_LINE(267)
					(_this->length)++;
					HX_STACK_LINE(267)
					temp;
				}
			}
			HX_STACK_LINE(269)
			if (((this->space != null()))){
				HX_STACK_LINE(270)
				this->alloc_cbSet();
				HX_STACK_LINE(271)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,insert_cbtype,(void))

Void ZPP_Constraint_obj::alloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","alloc_cbSet",0x11685d1d,"zpp_nape.constraint.ZPP_Constraint.alloc_cbSet","zpp_nape/constraint/Constraint.hx",275,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(284)
		::zpp_nape::callbacks::ZPP_CbSet _g = this->space->cbsets->get(this->cbTypes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		::zpp_nape::callbacks::ZPP_CbSet _g1 = this->cbSet = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(284)
		if (((_g1 != null()))){
			HX_STACK_LINE(285)
			(this->cbSet->count)++;
			HX_STACK_LINE(286)
			this->cbSet->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,alloc_cbSet,(void))

Void ZPP_Constraint_obj::dealloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","dealloc_cbSet",0xbb8dc43c,"zpp_nape.constraint.ZPP_Constraint.dealloc_cbSet","zpp_nape/constraint/Constraint.hx",298,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		if (((this->cbSet != null()))){
			HX_STACK_LINE(299)
			this->cbSet->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::zpp_nape::constraint::ZPP_Constraint_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/Constraint.hx",300,0xf29441f1)
					{
						HX_STACK_LINE(300)
						int _g = --(__this->cbSet->count);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(300)
						return (_g == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(300)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(301)
				this->space->cbsets->remove(this->cbSet);
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(303)
					::zpp_nape::callbacks::ZPP_CbSet o = this->cbSet;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						o->listeners->clear();
						HX_STACK_LINE(312)
						o->zip_listeners = true;
						HX_STACK_LINE(312)
						o->bodylisteners->clear();
						HX_STACK_LINE(312)
						o->zip_bodylisteners = true;
						HX_STACK_LINE(312)
						o->conlisteners->clear();
						HX_STACK_LINE(312)
						o->zip_conlisteners = true;
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							if ((!((!(((o->cbTypes->head == null()))))))){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(312)
							::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(312)
							cb->cbsets->remove(o);
						}
						HX_STACK_LINE(312)
						Dynamic();
					}
					HX_STACK_LINE(313)
					o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(314)
					::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(320)
			this->cbSet = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,dealloc_cbSet,(void))

Void ZPP_Constraint_obj::activate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activate",0x490f93cf,"zpp_nape.constraint.ZPP_Constraint.activate","zpp_nape/constraint/Constraint.hx",324,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		if (((this->space != null()))){
			HX_STACK_LINE(324)
			this->activeInSpace();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activate,(void))

Void ZPP_Constraint_obj::deactivate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","deactivate",0xd9481350,"zpp_nape.constraint.ZPP_Constraint.deactivate","zpp_nape/constraint/Constraint.hx",327,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		if (((this->space != null()))){
			HX_STACK_LINE(327)
			this->inactiveOrOutSpace();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,deactivate,(void))

Void ZPP_Constraint_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","addedToSpace",0x8f67fa87,"zpp_nape.constraint.ZPP_Constraint.addedToSpace","zpp_nape/constraint/Constraint.hx",329,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		if ((this->active)){
			HX_STACK_LINE(330)
			this->activeInSpace();
		}
		HX_STACK_LINE(331)
		this->activeBodies();
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(333)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(335)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(336)
				cb->constraints->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(337)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,addedToSpace,(void))

Void ZPP_Constraint_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","removedFromSpace",0xf1d43758,"zpp_nape.constraint.ZPP_Constraint.removedFromSpace","zpp_nape/constraint/Constraint.hx",341,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		if ((this->active)){
			HX_STACK_LINE(342)
			this->inactiveOrOutSpace();
		}
		HX_STACK_LINE(343)
		this->inactiveBodies();
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(346)
			while((true)){
				HX_STACK_LINE(346)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(346)
					break;
				}
				HX_STACK_LINE(347)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(348)
				cb->constraints->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(349)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,removedFromSpace,(void))

Void ZPP_Constraint_obj::activeInSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activeInSpace",0x50f44fdf,"zpp_nape.constraint.ZPP_Constraint.activeInSpace","zpp_nape/constraint/Constraint.hx",353,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		this->alloc_cbSet();
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(364)
			if (((::zpp_nape::space::ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(365)
				::zpp_nape::space::ZPP_Component _g = ::zpp_nape::space::ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(365)
				this->component = _g;
			}
			else{
				HX_STACK_LINE(371)
				this->component = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(372)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = this->component->next;
				HX_STACK_LINE(373)
				this->component->next = null();
			}
			HX_STACK_LINE(378)
			Dynamic();
		}
		HX_STACK_LINE(380)
		this->component->isBody = false;
		HX_STACK_LINE(381)
		this->component->constraint = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activeInSpace,(void))

Void ZPP_Constraint_obj::inactiveOrOutSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","inactiveOrOutSpace",0x3adcf402,"zpp_nape.constraint.ZPP_Constraint.inactiveOrOutSpace","zpp_nape/constraint/Constraint.hx",383,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->dealloc_cbSet();
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(386)
			::zpp_nape::space::ZPP_Component o = this->component;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				o->body = null();
				HX_STACK_LINE(395)
				o->constraint = null();
				HX_STACK_LINE(395)
				Dynamic();
			}
			HX_STACK_LINE(396)
			o->next = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(397)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(402)
		this->component = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,inactiveOrOutSpace,(void))

Void ZPP_Constraint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activeBodies",0x40b02002,"zpp_nape.constraint.ZPP_Constraint.activeBodies","zpp_nape/constraint/Constraint.hx",406,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activeBodies,(void))

Void ZPP_Constraint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","inactiveBodies",0xb86bfe67,"zpp_nape.constraint.ZPP_Constraint.inactiveBodies","zpp_nape/constraint/Constraint.hx",417,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,inactiveBodies,(void))

Void ZPP_Constraint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","clearcache",0x203820b1,"zpp_nape.constraint.ZPP_Constraint.clearcache","zpp_nape/constraint/Constraint.hx",428,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,clearcache,(void))

Void ZPP_Constraint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","validate",0x684748b2,"zpp_nape.constraint.ZPP_Constraint.validate","zpp_nape/constraint/Constraint.hx",439,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,validate,(void))

Void ZPP_Constraint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wake_connected",0x698444ca,"zpp_nape.constraint.ZPP_Constraint.wake_connected","zpp_nape/constraint/Constraint.hx",450,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,wake_connected,(void))

Void ZPP_Constraint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","forest",0x62a685f9,"zpp_nape.constraint.ZPP_Constraint.forest","zpp_nape/constraint/Constraint.hx",461,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,forest,(void))

bool ZPP_Constraint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","pair_exists",0x69f1ec05,"zpp_nape.constraint.ZPP_Constraint.pair_exists","zpp_nape/constraint/Constraint.hx",480,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(480)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Constraint_obj,pair_exists,return )

Void ZPP_Constraint_obj::broken( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","broken",0x8175af71,"zpp_nape.constraint.ZPP_Constraint.broken","zpp_nape/constraint/Constraint.hx",483,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,broken,(void))

Void ZPP_Constraint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","warmStart",0x7ea8c841,"zpp_nape.constraint.ZPP_Constraint.warmStart","zpp_nape/constraint/Constraint.hx",486,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,warmStart,(void))

bool ZPP_Constraint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","preStep",0x39dcc073,"zpp_nape.constraint.ZPP_Constraint.preStep","zpp_nape/constraint/Constraint.hx",506,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(506)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,preStep,return )

bool ZPP_Constraint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","applyImpulseVel",0x2550cb1a,"zpp_nape.constraint.ZPP_Constraint.applyImpulseVel","zpp_nape/constraint/Constraint.hx",518,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,applyImpulseVel,return )

bool ZPP_Constraint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","applyImpulsePos",0x254c4651,"zpp_nape.constraint.ZPP_Constraint.applyImpulsePos","zpp_nape/constraint/Constraint.hx",530,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,applyImpulsePos,return )

Void ZPP_Constraint_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wake",0x1a789640,"zpp_nape.constraint.ZPP_Constraint.wake","zpp_nape/constraint/Constraint.hx",533,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(533)
		if (((this->space != null()))){
			HX_STACK_LINE(533)
			this->space->wake_constraint(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,wake,(void))

Void ZPP_Constraint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","draw",0x0df66620,"zpp_nape.constraint.ZPP_Constraint.draw","zpp_nape/constraint/Constraint.hx",535,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,draw,(void))

::nape::constraint::Constraint ZPP_Constraint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","copy",0x0d4af5d1,"zpp_nape.constraint.ZPP_Constraint.copy","zpp_nape/constraint/Constraint.hx",537,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(537)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Constraint_obj,copy,return )

Void ZPP_Constraint_obj::copyto( ::nape::constraint::Constraint ret){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","copyto",0x2e51318c,"zpp_nape.constraint.ZPP_Constraint.copyto","zpp_nape/constraint/Constraint.hx",539,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(540)
		::nape::constraint::Constraint me = this->outer;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			::nape::callbacks::CbTypeIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					if (((me->zpp_inner->wrap_cbTypes == null()))){
						HX_STACK_LINE(541)
						me->zpp_inner->setupcbTypes();
					}
					HX_STACK_LINE(541)
					_this = me->zpp_inner->wrap_cbTypes;
				}
				HX_STACK_LINE(541)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(541)
				_g = ::nape::callbacks::CbTypeIterator_obj::get(_this);
			}
			HX_STACK_LINE(541)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::callbacks::CbTypeIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/Constraint.hx",541,0xf29441f1)
						{
							HX_STACK_LINE(541)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(541)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(541)
							{
								HX_STACK_LINE(541)
								::nape::callbacks::CbTypeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(541)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(541)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(541)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(541)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(541)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(541)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::callbacks::CbTypeIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/Constraint.hx",541,0xf29441f1)
									{
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											_g->zpp_next = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;
											HX_STACK_LINE(541)
											::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(541)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(541)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(541)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(541)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(541)
					break;
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbType cb;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					_g->zpp_critical = false;
					HX_STACK_LINE(541)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(541)
					cb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					if (((ret->zpp_inner->wrap_cbTypes == null()))){
						HX_STACK_LINE(541)
						ret->zpp_inner->setupcbTypes();
					}
					HX_STACK_LINE(541)
					_this = ret->zpp_inner->wrap_cbTypes;
				}
				HX_STACK_LINE(541)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(541)
					_this->push(cb);
				}
				else{
					HX_STACK_LINE(541)
					_this->unshift(cb);
				}
			}
		}
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			ret->zpp_inner->removeOnBreak = me->zpp_inner->removeOnBreak;
			HX_STACK_LINE(542)
			ret->zpp_inner->removeOnBreak;
		}
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			bool breakUnderError = me->zpp_inner->breakUnderError;		HX_STACK_VAR(breakUnderError,"breakUnderError");
			HX_STACK_LINE(543)
			if (((ret->zpp_inner->breakUnderError != breakUnderError))){
				HX_STACK_LINE(543)
				ret->zpp_inner->breakUnderError = breakUnderError;
				HX_STACK_LINE(543)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(543)
			ret->zpp_inner->breakUnderError;
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			bool breakUnderForce = me->zpp_inner->breakUnderForce;		HX_STACK_VAR(breakUnderForce,"breakUnderForce");
			HX_STACK_LINE(544)
			if (((ret->zpp_inner->breakUnderForce != breakUnderForce))){
				HX_STACK_LINE(544)
				ret->zpp_inner->breakUnderForce = breakUnderForce;
				HX_STACK_LINE(544)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(544)
			ret->zpp_inner->breakUnderForce;
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			Float maxError = me->zpp_inner->maxError;		HX_STACK_VAR(maxError,"maxError");
			HX_STACK_LINE(545)
			if (((ret->zpp_inner->maxError != maxError))){
				HX_STACK_LINE(545)
				ret->zpp_inner->maxError = maxError;
				HX_STACK_LINE(545)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(545)
			ret->zpp_inner->maxError;
		}
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			Float maxForce = me->zpp_inner->maxForce;		HX_STACK_VAR(maxForce,"maxForce");
			HX_STACK_LINE(546)
			if (((ret->zpp_inner->maxForce != maxForce))){
				HX_STACK_LINE(546)
				ret->zpp_inner->maxForce = maxForce;
				HX_STACK_LINE(546)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(546)
			ret->zpp_inner->maxForce;
		}
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float damping = me->zpp_inner->damping;		HX_STACK_VAR(damping,"damping");
			HX_STACK_LINE(547)
			if (((ret->zpp_inner->damping != damping))){
				HX_STACK_LINE(547)
				ret->zpp_inner->damping = damping;
				HX_STACK_LINE(547)
				if ((!(ret->zpp_inner->stiff))){
					HX_STACK_LINE(547)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(547)
			ret->zpp_inner->damping;
		}
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			Float frequency = me->zpp_inner->frequency;		HX_STACK_VAR(frequency,"frequency");
			HX_STACK_LINE(548)
			if (((ret->zpp_inner->frequency != frequency))){
				HX_STACK_LINE(548)
				ret->zpp_inner->frequency = frequency;
				HX_STACK_LINE(548)
				if ((!(ret->zpp_inner->stiff))){
					HX_STACK_LINE(548)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(548)
			ret->zpp_inner->frequency;
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			bool stiff = me->zpp_inner->stiff;		HX_STACK_VAR(stiff,"stiff");
			HX_STACK_LINE(549)
			if (((ret->zpp_inner->stiff != stiff))){
				HX_STACK_LINE(549)
				ret->zpp_inner->stiff = stiff;
				HX_STACK_LINE(549)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(549)
			ret->zpp_inner->stiff;
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			bool ignore = me->zpp_inner->ignore;		HX_STACK_VAR(ignore,"ignore");
			HX_STACK_LINE(550)
			if (((ret->zpp_inner->ignore != ignore))){
				HX_STACK_LINE(550)
				ret->zpp_inner->ignore = ignore;
				HX_STACK_LINE(550)
				ret->zpp_inner->wake();
			}
			HX_STACK_LINE(550)
			ret->zpp_inner->ignore;
		}
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			bool active = me->zpp_inner->active;		HX_STACK_VAR(active,"active");
			HX_STACK_LINE(551)
			if (((ret->zpp_inner->active != active))){
				HX_STACK_LINE(551)
				if (((ret->zpp_inner->component != null()))){
					HX_STACK_LINE(551)
					ret->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(551)
				ret->zpp_inner->clearcache();
				HX_STACK_LINE(551)
				if ((active)){
					HX_STACK_LINE(551)
					ret->zpp_inner->active = active;
					HX_STACK_LINE(551)
					ret->zpp_inner->activate();
					HX_STACK_LINE(551)
					if (((ret->zpp_inner->space != null()))){
						HX_STACK_LINE(551)
						if (((ret->zpp_inner->component != null()))){
							HX_STACK_LINE(551)
							ret->zpp_inner->component->sleeping = true;
						}
						HX_STACK_LINE(551)
						ret->zpp_inner->space->wake_constraint(ret->zpp_inner,true);
					}
				}
				else{
					HX_STACK_LINE(551)
					if (((ret->zpp_inner->space != null()))){
						HX_STACK_LINE(551)
						ret->zpp_inner->wake();
						HX_STACK_LINE(551)
						ret->zpp_inner->space->live_constraints->remove(ret->zpp_inner);
					}
					HX_STACK_LINE(551)
					ret->zpp_inner->active = active;
					HX_STACK_LINE(551)
					ret->zpp_inner->deactivate();
				}
			}
			HX_STACK_LINE(551)
			ret->zpp_inner->active;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,copyto,(void))


ZPP_Constraint_obj::ZPP_Constraint_obj()
{
}

void ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Constraint);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(stiff,"stiff");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(damping,"damping");
	HX_MARK_MEMBER_NAME(maxForce,"maxForce");
	HX_MARK_MEMBER_NAME(maxError,"maxError");
	HX_MARK_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_MARK_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_MARK_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(__velocity,"__velocity");
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(cbSet,"cbSet");
	HX_MARK_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	HX_MARK_END_CLASS();
}

void ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(stiff,"stiff");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(damping,"damping");
	HX_VISIT_MEMBER_NAME(maxForce,"maxForce");
	HX_VISIT_MEMBER_NAME(maxError,"maxError");
	HX_VISIT_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_VISIT_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_VISIT_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(__velocity,"__velocity");
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(cbSet,"cbSet");
	HX_VISIT_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
}

Dynamic ZPP_Constraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"stiff") ) { return stiff; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { return cbSet; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		if (HX_FIELD_EQ(inName,"copyto") ) { return copyto_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { return damping; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return maxForce; }
		if (HX_FIELD_EQ(inName,"maxError") ) { return maxError; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__velocity") ) { return __velocity; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alloc_cbSet") ) { return alloc_cbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { return wrap_cbTypes; }
		if (HX_FIELD_EQ(inName,"setupcbTypes") ) { return setupcbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return removeOnBreak; }
		if (HX_FIELD_EQ(inName,"insert_cbtype") ) { return insert_cbtype_dyn(); }
		if (HX_FIELD_EQ(inName,"dealloc_cbSet") ) { return dealloc_cbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"activeInSpace") ) { return activeInSpace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return breakUnderForce; }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return breakUnderError; }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_midstep") ) { return immutable_midstep_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_adder") ) { return wrap_cbTypes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveOrOutSpace") ) { return inactiveOrOutSpace_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_subber") ) { return wrap_cbTypes_subber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::constraint::Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stiff") ) { stiff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { cbSet=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { damping=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { maxForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxError") ) { maxError=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__velocity") ) { __velocity=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { wrap_cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { removeOnBreak=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { breakUnderForce=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { breakUnderError=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("stiff"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("damping"));
	outFields->push(HX_CSTRING("maxForce"));
	outFields->push(HX_CSTRING("maxError"));
	outFields->push(HX_CSTRING("breakUnderForce"));
	outFields->push(HX_CSTRING("breakUnderError"));
	outFields->push(HX_CSTRING("removeOnBreak"));
	outFields->push(HX_CSTRING("component"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("__velocity"));
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("cbSet"));
	outFields->push(HX_CSTRING("wrap_cbTypes"));
	outFields->push(HX_CSTRING("pre_dt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::Constraint*/ ,(int)offsetof(ZPP_Constraint_obj,outer),HX_CSTRING("outer")},
	{hx::fsInt,(int)offsetof(ZPP_Constraint_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Constraint_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Constraint_obj,compound),HX_CSTRING("compound")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Constraint_obj,space),HX_CSTRING("space")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,stiff),HX_CSTRING("stiff")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,frequency),HX_CSTRING("frequency")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,damping),HX_CSTRING("damping")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,maxForce),HX_CSTRING("maxForce")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,maxError),HX_CSTRING("maxError")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,breakUnderForce),HX_CSTRING("breakUnderForce")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,breakUnderError),HX_CSTRING("breakUnderError")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,removeOnBreak),HX_CSTRING("removeOnBreak")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Constraint_obj,component),HX_CSTRING("component")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,ignore),HX_CSTRING("ignore")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,__velocity),HX_CSTRING("__velocity")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_Constraint_obj,cbTypes),HX_CSTRING("cbTypes")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_Constraint_obj,cbSet),HX_CSTRING("cbSet")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_Constraint_obj,wrap_cbTypes),HX_CSTRING("wrap_cbTypes")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,pre_dt),HX_CSTRING("pre_dt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("clear"),
	HX_CSTRING("id"),
	HX_CSTRING("userData"),
	HX_CSTRING("compound"),
	HX_CSTRING("space"),
	HX_CSTRING("active"),
	HX_CSTRING("stiff"),
	HX_CSTRING("frequency"),
	HX_CSTRING("damping"),
	HX_CSTRING("maxForce"),
	HX_CSTRING("maxError"),
	HX_CSTRING("breakUnderForce"),
	HX_CSTRING("breakUnderError"),
	HX_CSTRING("removeOnBreak"),
	HX_CSTRING("component"),
	HX_CSTRING("ignore"),
	HX_CSTRING("__velocity"),
	HX_CSTRING("immutable_midstep"),
	HX_CSTRING("cbTypes"),
	HX_CSTRING("cbSet"),
	HX_CSTRING("wrap_cbTypes"),
	HX_CSTRING("setupcbTypes"),
	HX_CSTRING("wrap_cbTypes_subber"),
	HX_CSTRING("wrap_cbTypes_adder"),
	HX_CSTRING("insert_cbtype"),
	HX_CSTRING("alloc_cbSet"),
	HX_CSTRING("dealloc_cbSet"),
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("activeInSpace"),
	HX_CSTRING("inactiveOrOutSpace"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("validate"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("forest"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("broken"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("pre_dt"),
	HX_CSTRING("preStep"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("wake"),
	HX_CSTRING("draw"),
	HX_CSTRING("copy"),
	HX_CSTRING("copyto"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Constraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Constraint_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Constraint_obj::__mClass;

void ZPP_Constraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_Constraint"), hx::TCanCast< ZPP_Constraint_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Constraint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
