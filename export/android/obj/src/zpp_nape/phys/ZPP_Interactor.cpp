#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Interactor_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","new",0xc4ed842b,"zpp_nape.phys.ZPP_Interactor.new","zpp_nape/phys/Interactor.hx",174,0x9650902a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(287)
	this->wrap_cbTypes = null();
	HX_STACK_LINE(286)
	this->cbSet = null();
	HX_STACK_LINE(285)
	this->cbTypes = null();
	HX_STACK_LINE(284)
	this->group = null();
	HX_STACK_LINE(234)
	this->cbsets = null();
	HX_STACK_LINE(180)
	this->icompound = null();
	HX_STACK_LINE(179)
	this->ibody = null();
	HX_STACK_LINE(178)
	this->ishape = null();
	HX_STACK_LINE(177)
	this->userData = null();
	HX_STACK_LINE(176)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer_i = null();
	HX_STACK_LINE(421)
	int _g = ::zpp_nape::ZPP_ID_obj::Interactor();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(421)
	this->id = _g;
	HX_STACK_LINE(422)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet _g1 = ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(422)
	this->cbsets = _g1;
	HX_STACK_LINE(423)
	::zpp_nape::util::ZNPList_ZPP_CbType _g2 = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(423)
	this->cbTypes = _g2;
}
;
	return null();
}

//ZPP_Interactor_obj::~ZPP_Interactor_obj() { }

Dynamic ZPP_Interactor_obj::__CreateEmpty() { return  new ZPP_Interactor_obj; }
hx::ObjectPtr< ZPP_Interactor_obj > ZPP_Interactor_obj::__new()
{  hx::ObjectPtr< ZPP_Interactor_obj > result = new ZPP_Interactor_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Interactor_obj > result = new ZPP_Interactor_obj();
	result->__construct();
	return result;}

bool ZPP_Interactor_obj::isShape( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isShape",0x39e97c22,"zpp_nape.phys.ZPP_Interactor.isShape","zpp_nape/phys/Interactor.hx",184,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	return (this->ishape != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isShape,return )

bool ZPP_Interactor_obj::isBody( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isBody",0x96e8bcc1,"zpp_nape.phys.ZPP_Interactor.isBody","zpp_nape/phys/Interactor.hx",189,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	return (this->ibody != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isBody,return )

bool ZPP_Interactor_obj::isCompound( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isCompound",0x8dd2010a,"zpp_nape.phys.ZPP_Interactor.isCompound","zpp_nape/phys/Interactor.hx",194,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	return (this->icompound != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isCompound,return )

Void ZPP_Interactor_obj::__iaddedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","__iaddedToSpace",0xdad3af7f,"zpp_nape.phys.ZPP_Interactor.__iaddedToSpace","zpp_nape/phys/Interactor.hx",196,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		if (((this->group != null()))){
			HX_STACK_LINE(197)
			this->group->interactors->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(199)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(201)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(202)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(203)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(206)
		this->alloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iaddedToSpace,(void))

Void ZPP_Interactor_obj::__iremovedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","__iremovedFromSpace",0xba89c850,"zpp_nape.phys.ZPP_Interactor.__iremovedFromSpace","zpp_nape/phys/Interactor.hx",208,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		if (((this->group != null()))){
			HX_STACK_LINE(209)
			int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
			HX_STACK_LINE(209)
			this->group->interactors->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(212)
			while((true)){
				HX_STACK_LINE(212)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(212)
					break;
				}
				HX_STACK_LINE(213)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(214)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(215)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(218)
		this->dealloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iremovedFromSpace,(void))

Void ZPP_Interactor_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wake",0x90d5f9f9,"zpp_nape.phys.ZPP_Interactor.wake","zpp_nape/phys/Interactor.hx",221,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		if (((this->ishape != null()))){
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body body = this->ishape->body;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(223)
			if (((bool((body != null())) && bool((body->space != null()))))){
				HX_STACK_LINE(223)
				body->space->non_inlined_wake(body,null());
			}
			HX_STACK_LINE(224)
			true;
		}
		else{
			HX_STACK_LINE(226)
			if (((this->ibody != null()))){
				HX_STACK_LINE(227)
				if (((this->ibody->space != null()))){
					HX_STACK_LINE(227)
					this->ibody->space->non_inlined_wake(this->ibody,null());
				}
				else{
					HX_STACK_LINE(227)
					false;
				}
			}
			else{
				HX_STACK_LINE(230)
				if (((this->icompound->space != null()))){
					HX_STACK_LINE(230)
					this->icompound->space->wakeCompound(this->icompound);
				}
				HX_STACK_LINE(231)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,wake,(void))

::zpp_nape::space::ZPP_Space ZPP_Interactor_obj::getSpace( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","getSpace",0xde0d48a5,"zpp_nape.phys.ZPP_Interactor.getSpace","zpp_nape/phys/Interactor.hx",282,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	if (((this->ishape != null()))){
		HX_STACK_LINE(282)
		if (((this->ishape->body == null()))){
			HX_STACK_LINE(282)
			return null();
		}
		else{
			HX_STACK_LINE(282)
			return this->ishape->body->space;
		}
	}
	else{
		HX_STACK_LINE(282)
		if (((this->ibody != null()))){
			HX_STACK_LINE(282)
			return this->ibody->space;
		}
		else{
			HX_STACK_LINE(282)
			return this->icompound->space;
		}
	}
	HX_STACK_LINE(282)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,getSpace,return )

Void ZPP_Interactor_obj::setupcbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","setupcbTypes",0xcfc7ef52,"zpp_nape.phys.ZPP_Interactor.setupcbTypes","zpp_nape/phys/Interactor.hx",288,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::nape::callbacks::CbTypeList _g = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->cbTypes,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		this->wrap_cbTypes = _g;
		HX_STACK_LINE(290)
		this->wrap_cbTypes->zpp_inner->adder = this->wrap_cbTypes_adder_dyn();
		HX_STACK_LINE(291)
		this->wrap_cbTypes->zpp_inner->subber = this->wrap_cbTypes_subber_dyn();
		HX_STACK_LINE(292)
		this->wrap_cbTypes->zpp_inner->dontremove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,setupcbTypes,(void))

Void ZPP_Interactor_obj::wrap_cbTypes_subber( ::nape::callbacks::CbType pcb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wrap_cbTypes_subber",0xbcc9ff34,"zpp_nape.phys.ZPP_Interactor.wrap_cbTypes_subber","zpp_nape/phys/Interactor.hx",302,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pcb,"pcb")
		HX_STACK_LINE(303)
		::zpp_nape::callbacks::ZPP_CbType cb = pcb->zpp_inner;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(304)
		if ((this->cbTypes->has(cb))){
			HX_STACK_LINE(305)
			::zpp_nape::space::ZPP_Space space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(305)
			if (((this->ishape != null()))){
				HX_STACK_LINE(305)
				if (((this->ishape->body == null()))){
					HX_STACK_LINE(305)
					space = null();
				}
				else{
					HX_STACK_LINE(305)
					space = this->ishape->body->space;
				}
			}
			else{
				HX_STACK_LINE(305)
				if (((this->ibody != null()))){
					HX_STACK_LINE(305)
					space = this->ibody->space;
				}
				else{
					HX_STACK_LINE(305)
					space = this->icompound->space;
				}
			}
			HX_STACK_LINE(306)
			if (((space != null()))){
				HX_STACK_LINE(307)
				this->dealloc_cbSet();
				HX_STACK_LINE(308)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(310)
			this->cbTypes->remove(cb);
			HX_STACK_LINE(311)
			if (((space != null()))){
				HX_STACK_LINE(312)
				this->alloc_cbSet();
				HX_STACK_LINE(313)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_subber,(void))

bool ZPP_Interactor_obj::wrap_cbTypes_adder( ::nape::callbacks::CbType cb){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wrap_cbTypes_adder",0xa3e20509,"zpp_nape.phys.ZPP_Interactor.wrap_cbTypes_adder","zpp_nape/phys/Interactor.hx",317,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cb,"cb")
	HX_STACK_LINE(318)
	this->insert_cbtype(cb->zpp_inner);
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_adder,return )

Void ZPP_Interactor_obj::insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","insert_cbtype",0xc92c9bea,"zpp_nape.phys.ZPP_Interactor.insert_cbtype","zpp_nape/phys/Interactor.hx",322,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(322)
		if ((!(this->cbTypes->has(cb)))){
			HX_STACK_LINE(323)
			::zpp_nape::space::ZPP_Space space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(323)
			if (((this->ishape != null()))){
				HX_STACK_LINE(323)
				if (((this->ishape->body == null()))){
					HX_STACK_LINE(323)
					space = null();
				}
				else{
					HX_STACK_LINE(323)
					space = this->ishape->body->space;
				}
			}
			else{
				HX_STACK_LINE(323)
				if (((this->ibody != null()))){
					HX_STACK_LINE(323)
					space = this->ibody->space;
				}
				else{
					HX_STACK_LINE(323)
					space = this->icompound->space;
				}
			}
			HX_STACK_LINE(324)
			if (((space != null()))){
				HX_STACK_LINE(325)
				this->dealloc_cbSet();
				HX_STACK_LINE(326)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(329)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(332)
					while((true)){
						HX_STACK_LINE(332)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(332)
							break;
						}
						HX_STACK_LINE(333)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(334)
						{
							HX_STACK_LINE(335)
							if (((cb->id < j->id))){
								HX_STACK_LINE(335)
								break;
							}
							HX_STACK_LINE(336)
							pre = cx_ite;
						}
						HX_STACK_LINE(338)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(341)
				{
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = this->cbTypes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(341)
					{
						HX_STACK_LINE(341)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(341)
						{
							HX_STACK_LINE(341)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(341)
								ret = _g;
							}
							else{
								HX_STACK_LINE(341)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(341)
								ret->next = null();
							}
							HX_STACK_LINE(341)
							Dynamic();
						}
						HX_STACK_LINE(341)
						ret->elt = cb;
						HX_STACK_LINE(341)
						temp = ret;
					}
					HX_STACK_LINE(341)
					if (((pre == null()))){
						HX_STACK_LINE(341)
						temp->next = _this->head;
						HX_STACK_LINE(341)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(341)
						temp->next = pre->next;
						HX_STACK_LINE(341)
						pre->next = temp;
					}
					HX_STACK_LINE(341)
					bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(341)
					_this->pushmod = _g1;
					HX_STACK_LINE(341)
					(_this->length)++;
					HX_STACK_LINE(341)
					temp;
				}
			}
			HX_STACK_LINE(343)
			if (((space != null()))){
				HX_STACK_LINE(344)
				this->alloc_cbSet();
				HX_STACK_LINE(345)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,insert_cbtype,(void))

Void ZPP_Interactor_obj::alloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","alloc_cbSet",0xa841d284,"zpp_nape.phys.ZPP_Interactor.alloc_cbSet","zpp_nape/phys/Interactor.hx",349,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		::zpp_nape::space::ZPP_Space space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(350)
		if (((this->ishape != null()))){
			HX_STACK_LINE(350)
			if (((this->ishape->body == null()))){
				HX_STACK_LINE(350)
				space = null();
			}
			else{
				HX_STACK_LINE(350)
				space = this->ishape->body->space;
			}
		}
		else{
			HX_STACK_LINE(350)
			if (((this->ibody != null()))){
				HX_STACK_LINE(350)
				space = this->ibody->space;
			}
			else{
				HX_STACK_LINE(350)
				space = this->icompound->space;
			}
		}
		HX_STACK_LINE(359)
		::zpp_nape::callbacks::ZPP_CbSet _g = space->cbsets->get(this->cbTypes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		::zpp_nape::callbacks::ZPP_CbSet _g1 = this->cbSet = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		if (((_g1 != null()))){
			HX_STACK_LINE(360)
			(this->cbSet->count)++;
			HX_STACK_LINE(361)
			this->cbSet->interactors->add(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(362)
			this->cbSet->validate();
			HX_STACK_LINE(363)
			space->freshInteractorType(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,alloc_cbSet,(void))

Void ZPP_Interactor_obj::dealloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","dealloc_cbSet",0xd3bca163,"zpp_nape.phys.ZPP_Interactor.dealloc_cbSet","zpp_nape/phys/Interactor.hx",366,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(367)
		::zpp_nape::space::ZPP_Space space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(367)
		if (((this->ishape != null()))){
			HX_STACK_LINE(367)
			if (((this->ishape->body == null()))){
				HX_STACK_LINE(367)
				space = null();
			}
			else{
				HX_STACK_LINE(367)
				space = this->ishape->body->space;
			}
		}
		else{
			HX_STACK_LINE(367)
			if (((this->ibody != null()))){
				HX_STACK_LINE(367)
				space = this->ibody->space;
			}
			else{
				HX_STACK_LINE(367)
				space = this->icompound->space;
			}
		}
		HX_STACK_LINE(376)
		if (((this->cbSet != null()))){
			HX_STACK_LINE(377)
			this->cbSet->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(378)
			space->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::zpp_nape::phys::ZPP_Interactor_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",379,0x9650902a)
					{
						HX_STACK_LINE(379)
						int _g = --(__this->cbSet->count);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(379)
						return (_g == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(379)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(380)
				space->cbsets->remove(this->cbSet);
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(382)
					::zpp_nape::callbacks::ZPP_CbSet o = this->cbSet;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						o->listeners->clear();
						HX_STACK_LINE(391)
						o->zip_listeners = true;
						HX_STACK_LINE(391)
						o->bodylisteners->clear();
						HX_STACK_LINE(391)
						o->zip_bodylisteners = true;
						HX_STACK_LINE(391)
						o->conlisteners->clear();
						HX_STACK_LINE(391)
						o->zip_conlisteners = true;
						HX_STACK_LINE(391)
						while((true)){
							HX_STACK_LINE(391)
							if ((!((!(((o->cbTypes->head == null()))))))){
								HX_STACK_LINE(391)
								break;
							}
							HX_STACK_LINE(391)
							::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(391)
							cb->cbsets->remove(o);
						}
						HX_STACK_LINE(391)
						Dynamic();
					}
					HX_STACK_LINE(392)
					o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(393)
					::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(399)
			this->cbSet = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,dealloc_cbSet,(void))

Void ZPP_Interactor_obj::setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","setGroup",0xa4f8c892,"zpp_nape.phys.ZPP_Interactor.setGroup","zpp_nape/phys/Interactor.hx",403,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(403)
		if (((this->group != group))){
			HX_STACK_LINE(404)
			bool inspace;		HX_STACK_VAR(inspace,"inspace");
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Space Block( hx::ObjectPtr< ::zpp_nape::phys::ZPP_Interactor_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",404,0x9650902a)
					{
						HX_STACK_LINE(404)
						return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
					}
					return null();
				}
			};
			HX_STACK_LINE(404)
			inspace = (((  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_2_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) )) != null());
			HX_STACK_LINE(405)
			if (((bool(inspace) && bool((this->group != null()))))){
				HX_STACK_LINE(405)
				int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(405)
				this->group->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(406)
			this->group = group;
			HX_STACK_LINE(407)
			if (((bool(inspace) && bool((group != null()))))){
				HX_STACK_LINE(407)
				group->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(408)
			if ((inspace)){
				HX_STACK_LINE(409)
				if (((this->ishape != null()))){
					HX_STACK_LINE(409)
					this->ishape->body->wake();
				}
				else{
					HX_STACK_LINE(410)
					if (((this->ibody != null()))){
						HX_STACK_LINE(410)
						this->ibody->wake();
					}
					else{
						HX_STACK_LINE(411)
						this->icompound->wake();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,setGroup,(void))

Void ZPP_Interactor_obj::immutable_midstep( ::String n){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","immutable_midstep",0x3d4391a2,"zpp_nape.phys.ZPP_Interactor.immutable_midstep","zpp_nape/phys/Interactor.hx",416,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(416)
		if (((this->ibody != null()))){
			HX_STACK_LINE(416)
			Dynamic();
		}
		else{
			HX_STACK_LINE(417)
			if (((this->ishape != null()))){
				HX_STACK_LINE(417)
				this->ishape->__immutable_midstep(n);
			}
			else{
				HX_STACK_LINE(418)
				this->icompound->__imutable_midstep(n);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,immutable_midstep,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZPP_Interactor_obj::lookup_group( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","lookup_group",0x00d6af4f,"zpp_nape.phys.ZPP_Interactor.lookup_group","zpp_nape/phys/Interactor.hx",440,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	::zpp_nape::phys::ZPP_Interactor cur = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(442)
	while((true)){
		HX_STACK_LINE(442)
		if ((!(((bool((cur != null())) && bool((cur->group == null()))))))){
			HX_STACK_LINE(442)
			break;
		}
		HX_STACK_LINE(443)
		if (((cur->ishape != null()))){
			HX_STACK_LINE(443)
			cur = cur->ishape->body;
		}
		else{
			HX_STACK_LINE(444)
			if (((cur->icompound != null()))){
				HX_STACK_LINE(444)
				cur = cur->icompound->compound;
			}
			else{
				HX_STACK_LINE(445)
				cur = cur->ibody->compound;
			}
		}
	}
	HX_STACK_LINE(447)
	if (((cur == null()))){
		HX_STACK_LINE(447)
		return null();
	}
	else{
		HX_STACK_LINE(447)
		return cur->group;
	}
	HX_STACK_LINE(447)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,lookup_group,return )

Void ZPP_Interactor_obj::copyto( ::nape::phys::Interactor ret){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","copyto",0x0199b585,"zpp_nape.phys.ZPP_Interactor.copyto","zpp_nape/phys/Interactor.hx",449,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(450)
		ret->zpp_inner_i->group = this->group;
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			::nape::callbacks::CbTypeIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					::nape::phys::Interactor _this1 = this->outer_i;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(451)
					if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
						HX_STACK_LINE(451)
						_this1->zpp_inner_i->setupcbTypes();
					}
					HX_STACK_LINE(451)
					_this = _this1->zpp_inner_i->wrap_cbTypes;
				}
				HX_STACK_LINE(451)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(451)
				_g = ::nape::callbacks::CbTypeIterator_obj::get(_this);
			}
			HX_STACK_LINE(451)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::callbacks::CbTypeIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",451,0x9650902a)
						{
							HX_STACK_LINE(451)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(451)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(451)
								::nape::callbacks::CbTypeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(451)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(451)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(451)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(451)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(451)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(451)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::callbacks::CbTypeIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",451,0x9650902a)
									{
										HX_STACK_LINE(451)
										{
											HX_STACK_LINE(451)
											_g->zpp_next = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;
											HX_STACK_LINE(451)
											::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(451)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(451)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(451)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(451)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(451)
					break;
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbType cb;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					_g->zpp_critical = false;
					HX_STACK_LINE(451)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(451)
					cb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					if (((ret->zpp_inner_i->wrap_cbTypes == null()))){
						HX_STACK_LINE(451)
						ret->zpp_inner_i->setupcbTypes();
					}
					HX_STACK_LINE(451)
					_this = ret->zpp_inner_i->wrap_cbTypes;
				}
				HX_STACK_LINE(451)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(451)
					_this->push(cb);
				}
				else{
					HX_STACK_LINE(451)
					_this->unshift(cb);
				}
			}
		}
		HX_STACK_LINE(452)
		if (((this->userData != null()))){
			HX_STACK_LINE(452)
			Dynamic _g1 = ::Reflect_obj::copy(this->userData);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(452)
			ret->zpp_inner_i->userData = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,copyto,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_Interactor_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","get",0xc4e83461,"zpp_nape.phys.ZPP_Interactor.get","zpp_nape/phys/Interactor.hx",235,0x9650902a)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(244)
	int id;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(244)
	if (((i1->id < i2->id))){
		HX_STACK_LINE(244)
		id = i1->id;
	}
	else{
		HX_STACK_LINE(244)
		id = i2->id;
	}
	HX_STACK_LINE(245)
	int di;		HX_STACK_VAR(di,"di");
	HX_STACK_LINE(245)
	if (((i1->id < i2->id))){
		HX_STACK_LINE(245)
		di = i2->id;
	}
	else{
		HX_STACK_LINE(245)
		di = i1->id;
	}
	HX_STACK_LINE(254)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet xs;		HX_STACK_VAR(xs,"xs");
	HX_STACK_LINE(254)
	if (((i1->cbsets->length < i2->cbsets->length))){
		HX_STACK_LINE(254)
		xs = i1->cbsets;
	}
	else{
		HX_STACK_LINE(254)
		xs = i2->cbsets;
	}
	HX_STACK_LINE(255)
	::zpp_nape::space::ZPP_CallbackSet ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = xs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(259)
			::zpp_nape::space::ZPP_CallbackSet x = cx_ite->elt;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(269)
			if (((bool((x->id == id)) && bool((x->di == di))))){
				HX_STACK_LINE(270)
				ret = x;
				HX_STACK_LINE(271)
				break;
			}
			HX_STACK_LINE(274)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(277)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Interactor_obj,get,return )

Void ZPP_Interactor_obj::int_callback( ::zpp_nape::space::ZPP_CallbackSet set,::zpp_nape::callbacks::ZPP_InteractionListener x,::zpp_nape::callbacks::ZPP_Callback cb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","int_callback",0x2c95e92a,"zpp_nape.phys.ZPP_Interactor.int_callback","zpp_nape/phys/Interactor.hx",426,0x9650902a)
		HX_STACK_ARG(set,"set")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(427)
		::zpp_nape::phys::ZPP_Interactor o1 = set->int1;		HX_STACK_VAR(o1,"o1");
		HX_STACK_LINE(428)
		::zpp_nape::phys::ZPP_Interactor o2 = set->int2;		HX_STACK_VAR(o2,"o2");
		struct _Function_1_1{
			inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &x,::zpp_nape::phys::ZPP_Interactor &o1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",429,0x9650902a)
				{
					HX_STACK_LINE(429)
					::zpp_nape::callbacks::ZPP_OptionType _this = x->options1;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					::zpp_nape::util::ZNPList_ZPP_CbType xs = o1->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(429)
					return (  ((_this->nonemptyintersection(xs,_this->includes))) ? bool(!(_this->nonemptyintersection(xs,_this->excludes))) : bool(false) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &x,::zpp_nape::phys::ZPP_Interactor &o2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Interactor.hx",429,0x9650902a)
				{
					HX_STACK_LINE(429)
					::zpp_nape::callbacks::ZPP_OptionType _this = x->options2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					::zpp_nape::util::ZNPList_ZPP_CbType xs = o2->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(429)
					return (  ((_this->nonemptyintersection(xs,_this->includes))) ? bool(!(_this->nonemptyintersection(xs,_this->excludes))) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(429)
		if (((  ((_Function_1_1::Block(x,o1))) ? bool(_Function_1_2::Block(x,o2)) : bool(false) ))){
			HX_STACK_LINE(430)
			cb->int1 = o1;
			HX_STACK_LINE(431)
			cb->int2 = o2;
		}
		else{
			HX_STACK_LINE(434)
			cb->int1 = o2;
			HX_STACK_LINE(435)
			cb->int2 = o1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Interactor_obj,int_callback,(void))


ZPP_Interactor_obj::ZPP_Interactor_obj()
{
}

void ZPP_Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Interactor);
	HX_MARK_MEMBER_NAME(outer_i,"outer_i");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(ishape,"ishape");
	HX_MARK_MEMBER_NAME(ibody,"ibody");
	HX_MARK_MEMBER_NAME(icompound,"icompound");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(cbSet,"cbSet");
	HX_MARK_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_MARK_END_CLASS();
}

void ZPP_Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_i,"outer_i");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(ishape,"ishape");
	HX_VISIT_MEMBER_NAME(ibody,"ibody");
	HX_VISIT_MEMBER_NAME(icompound,"icompound");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(cbSet,"cbSet");
	HX_VISIT_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
}

Dynamic ZPP_Interactor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibody") ) { return ibody; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { return cbSet; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ishape") ) { return ishape; }
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"copyto") ) { return copyto_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outer_i") ) { return outer_i; }
		if (HX_FIELD_EQ(inName,"isShape") ) { return isShape_dyn(); }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"getSpace") ) { return getSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroup") ) { return setGroup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { return icompound; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCompound") ) { return isCompound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alloc_cbSet") ) { return alloc_cbSet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"int_callback") ) { return int_callback_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { return wrap_cbTypes; }
		if (HX_FIELD_EQ(inName,"setupcbTypes") ) { return setupcbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"lookup_group") ) { return lookup_group_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"insert_cbtype") ) { return insert_cbtype_dyn(); }
		if (HX_FIELD_EQ(inName,"dealloc_cbSet") ) { return dealloc_cbSet_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__iaddedToSpace") ) { return __iaddedToSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_midstep") ) { return immutable_midstep_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_adder") ) { return wrap_cbTypes_adder_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__iremovedFromSpace") ) { return __iremovedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_subber") ) { return wrap_cbTypes_subber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibody") ) { ibody=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { cbSet=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ishape") ) { ishape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CallbackSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outer_i") ) { outer_i=inValue.Cast< ::nape::phys::Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { icompound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { wrap_cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Interactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_i"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("ishape"));
	outFields->push(HX_CSTRING("ibody"));
	outFields->push(HX_CSTRING("icompound"));
	outFields->push(HX_CSTRING("cbsets"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("cbSet"));
	outFields->push(HX_CSTRING("wrap_cbTypes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("int_callback"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Interactor*/ ,(int)offsetof(ZPP_Interactor_obj,outer_i),HX_CSTRING("outer_i")},
	{hx::fsInt,(int)offsetof(ZPP_Interactor_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Interactor_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_Interactor_obj,ishape),HX_CSTRING("ishape")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Interactor_obj,ibody),HX_CSTRING("ibody")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Interactor_obj,icompound),HX_CSTRING("icompound")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CallbackSet*/ ,(int)offsetof(ZPP_Interactor_obj,cbsets),HX_CSTRING("cbsets")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionGroup*/ ,(int)offsetof(ZPP_Interactor_obj,group),HX_CSTRING("group")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_Interactor_obj,cbTypes),HX_CSTRING("cbTypes")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_Interactor_obj,cbSet),HX_CSTRING("cbSet")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_Interactor_obj,wrap_cbTypes),HX_CSTRING("wrap_cbTypes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_i"),
	HX_CSTRING("id"),
	HX_CSTRING("userData"),
	HX_CSTRING("ishape"),
	HX_CSTRING("ibody"),
	HX_CSTRING("icompound"),
	HX_CSTRING("isShape"),
	HX_CSTRING("isBody"),
	HX_CSTRING("isCompound"),
	HX_CSTRING("__iaddedToSpace"),
	HX_CSTRING("__iremovedFromSpace"),
	HX_CSTRING("wake"),
	HX_CSTRING("cbsets"),
	HX_CSTRING("getSpace"),
	HX_CSTRING("group"),
	HX_CSTRING("cbTypes"),
	HX_CSTRING("cbSet"),
	HX_CSTRING("wrap_cbTypes"),
	HX_CSTRING("setupcbTypes"),
	HX_CSTRING("wrap_cbTypes_subber"),
	HX_CSTRING("wrap_cbTypes_adder"),
	HX_CSTRING("insert_cbtype"),
	HX_CSTRING("alloc_cbSet"),
	HX_CSTRING("dealloc_cbSet"),
	HX_CSTRING("setGroup"),
	HX_CSTRING("immutable_midstep"),
	HX_CSTRING("lookup_group"),
	HX_CSTRING("copyto"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Interactor_obj::__mClass;

void ZPP_Interactor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Interactor"), hx::TCanCast< ZPP_Interactor_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Interactor_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace phys
