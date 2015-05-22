#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_InteractionListener_obj::__construct(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","new",0xf921f592,"zpp_nape.callbacks.ZPP_InteractionListener.new","zpp_nape/callbacks/Listener.hx",338,0x87b155a7)
HX_STACK_THIS(this)
HX_STACK_ARG(options1,"options1")
HX_STACK_ARG(options2,"options2")
HX_STACK_ARG(event,"event")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(347)
	this->handlerp = null();
	HX_STACK_LINE(346)
	this->pure = false;
	HX_STACK_LINE(345)
	this->allowSleepingCallbacks = false;
	HX_STACK_LINE(344)
	this->handleri = null();
	HX_STACK_LINE(343)
	this->options2 = null();
	HX_STACK_LINE(342)
	this->options1 = null();
	HX_STACK_LINE(341)
	this->itype = (int)0;
	HX_STACK_LINE(340)
	this->outer_znp = null();
	HX_STACK_LINE(339)
	this->outer_zni = null();
	HX_STACK_LINE(354)
	super::__construct();
	HX_STACK_LINE(355)
	this->type = type;
	HX_STACK_LINE(356)
	this->interaction = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(357)
	this->event = event;
	HX_STACK_LINE(358)
	this->options1 = options1->zpp_inner;
	HX_STACK_LINE(359)
	this->options2 = options2->zpp_inner;
	HX_STACK_LINE(360)
	this->allowSleepingCallbacks = false;
}
;
	return null();
}

//ZPP_InteractionListener_obj::~ZPP_InteractionListener_obj() { }

Dynamic ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZPP_InteractionListener_obj > ZPP_InteractionListener_obj::__new(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > result = new ZPP_InteractionListener_obj();
	result->__construct(options1,options2,event,type);
	return result;}

Dynamic ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > result = new ZPP_InteractionListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void ZPP_InteractionListener_obj::setInteractionType( int itype){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","setInteractionType",0x9488fd38,"zpp_nape.callbacks.ZPP_InteractionListener.setInteractionType","zpp_nape/callbacks/Listener.hx",351,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(itype,"itype")
		HX_STACK_LINE(351)
		this->itype = itype;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,setInteractionType,(void))

Void ZPP_InteractionListener_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","wake",0x0a84c2b2,"zpp_nape.callbacks.ZPP_InteractionListener.wake","zpp_nape/callbacks/Listener.hx",371,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			if ((!(((bool((ite1 != null())) && bool((ite2 != null()))))))){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(371)
			if (((cb1 == cb2))){
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(373)
					::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(374)
					while((true)){
						HX_STACK_LINE(374)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(374)
							break;
						}
						HX_STACK_LINE(375)
						::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(377)
						i->wake();
						HX_STACK_LINE(379)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(371)
				ite1 = ite1->next;
				HX_STACK_LINE(371)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(371)
				if (((cb1->id < cb2->id))){
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(374)
						while((true)){
							HX_STACK_LINE(374)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(374)
								break;
							}
							HX_STACK_LINE(375)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(377)
							i->wake();
							HX_STACK_LINE(379)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(371)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(374)
						while((true)){
							HX_STACK_LINE(374)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(374)
								break;
							}
							HX_STACK_LINE(375)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(377)
							i->wake();
							HX_STACK_LINE(379)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(371)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			if ((!(((ite1 != null()))))){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = ite1->elt->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(374)
				while((true)){
					HX_STACK_LINE(374)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(374)
						break;
					}
					HX_STACK_LINE(375)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(377)
					i->wake();
					HX_STACK_LINE(379)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(371)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			if ((!(((ite2 != null()))))){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = ite2->elt->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(374)
				while((true)){
					HX_STACK_LINE(374)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(374)
						break;
					}
					HX_STACK_LINE(375)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(377)
					i->wake();
					HX_STACK_LINE(379)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(371)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionListener_obj,wake,(void))

Void ZPP_InteractionListener_obj::CbSetset( ::zpp_nape::util::ZNPList_ZPP_CbSet A,::zpp_nape::util::ZNPList_ZPP_CbSet B,Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","CbSetset",0x162afeed,"zpp_nape.callbacks.ZPP_InteractionListener.CbSetset","zpp_nape/callbacks/Listener.hx",390,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(A,"A")
		HX_STACK_ARG(B,"B")
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(391)
		::zpp_nape::util::ZNPList_ZPP_CbSet U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(392)
		::zpp_nape::util::ZNPList_ZPP_CbSet V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(393)
		::zpp_nape::util::ZNPList_ZPP_CbSet W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(394)
		::zpp_nape::util::ZNPNode_ZPP_CbSet aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(395)
		::zpp_nape::util::ZNPNode_ZPP_CbSet bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(396)
		while((true)){
			HX_STACK_LINE(396)
			if ((!(((bool((aite != null())) && bool((bite != null()))))))){
				HX_STACK_LINE(396)
				break;
			}
			HX_STACK_LINE(397)
			::zpp_nape::callbacks::ZPP_CbSet a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(398)
			::zpp_nape::callbacks::ZPP_CbSet b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(399)
			if (((a == b))){
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(400)
						::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(400)
						{
							HX_STACK_LINE(400)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
								HX_STACK_LINE(400)
								::zpp_nape::util::ZNPNode_ZPP_CbSet _g = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(400)
								ret = _g;
							}
							else{
								HX_STACK_LINE(400)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(400)
								::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
								HX_STACK_LINE(400)
								ret->next = null();
							}
							HX_STACK_LINE(400)
							Dynamic();
						}
						HX_STACK_LINE(400)
						ret->elt = a;
						HX_STACK_LINE(400)
						temp = ret;
					}
					HX_STACK_LINE(400)
					temp->next = W->head;
					HX_STACK_LINE(400)
					W->head = temp;
					HX_STACK_LINE(400)
					W->modified = true;
					HX_STACK_LINE(400)
					(W->length)++;
					HX_STACK_LINE(400)
					a;
				}
				HX_STACK_LINE(401)
				aite = aite->next;
				HX_STACK_LINE(402)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(404)
				if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(405)
							{
								HX_STACK_LINE(405)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(405)
									::zpp_nape::util::ZNPNode_ZPP_CbSet _g1 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(405)
									ret = _g1;
								}
								else{
									HX_STACK_LINE(405)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(405)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(405)
									ret->next = null();
								}
								HX_STACK_LINE(405)
								Dynamic();
							}
							HX_STACK_LINE(405)
							ret->elt = a;
							HX_STACK_LINE(405)
							temp = ret;
						}
						HX_STACK_LINE(405)
						temp->next = U->head;
						HX_STACK_LINE(405)
						U->head = temp;
						HX_STACK_LINE(405)
						U->modified = true;
						HX_STACK_LINE(405)
						(U->length)++;
						HX_STACK_LINE(405)
						a;
					}
					HX_STACK_LINE(406)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(409)
									::zpp_nape::util::ZNPNode_ZPP_CbSet _g2 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(409)
									ret = _g2;
								}
								else{
									HX_STACK_LINE(409)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(409)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(409)
									ret->next = null();
								}
								HX_STACK_LINE(409)
								Dynamic();
							}
							HX_STACK_LINE(409)
							ret->elt = b;
							HX_STACK_LINE(409)
							temp = ret;
						}
						HX_STACK_LINE(409)
						temp->next = V->head;
						HX_STACK_LINE(409)
						V->head = temp;
						HX_STACK_LINE(409)
						V->modified = true;
						HX_STACK_LINE(409)
						(V->length)++;
						HX_STACK_LINE(409)
						b;
					}
					HX_STACK_LINE(410)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(413)
		while((true)){
			HX_STACK_LINE(413)
			if ((!(((aite != null()))))){
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::zpp_nape::callbacks::ZPP_CbSet o = aite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(414)
							::zpp_nape::util::ZNPNode_ZPP_CbSet _g3 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(414)
							ret = _g3;
						}
						else{
							HX_STACK_LINE(414)
							ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(414)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
							HX_STACK_LINE(414)
							ret->next = null();
						}
						HX_STACK_LINE(414)
						Dynamic();
					}
					HX_STACK_LINE(414)
					ret->elt = o;
					HX_STACK_LINE(414)
					temp = ret;
				}
				HX_STACK_LINE(414)
				temp->next = U->head;
				HX_STACK_LINE(414)
				U->head = temp;
				HX_STACK_LINE(414)
				U->modified = true;
				HX_STACK_LINE(414)
				(U->length)++;
				HX_STACK_LINE(414)
				o;
			}
			HX_STACK_LINE(415)
			aite = aite->next;
		}
		HX_STACK_LINE(417)
		while((true)){
			HX_STACK_LINE(417)
			if ((!(((bite != null()))))){
				HX_STACK_LINE(417)
				break;
			}
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				::zpp_nape::callbacks::ZPP_CbSet o = bite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(418)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(418)
							::zpp_nape::util::ZNPNode_ZPP_CbSet _g4 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(418)
							ret = _g4;
						}
						else{
							HX_STACK_LINE(418)
							ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(418)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
							HX_STACK_LINE(418)
							ret->next = null();
						}
						HX_STACK_LINE(418)
						Dynamic();
					}
					HX_STACK_LINE(418)
					ret->elt = o;
					HX_STACK_LINE(418)
					temp = ret;
				}
				HX_STACK_LINE(418)
				temp->next = V->head;
				HX_STACK_LINE(418)
				V->head = temp;
				HX_STACK_LINE(418)
				V->modified = true;
				HX_STACK_LINE(418)
				(V->length)++;
				HX_STACK_LINE(418)
				o;
			}
			HX_STACK_LINE(419)
			bite = bite->next;
		}
		HX_STACK_LINE(422)
		while((true)){
			HX_STACK_LINE(422)
			if ((!((!(((U->head == null()))))))){
				HX_STACK_LINE(422)
				break;
			}
			HX_STACK_LINE(423)
			::zpp_nape::callbacks::ZPP_CbSet x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(425)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(426)
				while((true)){
					HX_STACK_LINE(426)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(426)
						break;
					}
					HX_STACK_LINE(427)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(428)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(429)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			if ((!((!(((V->head == null()))))))){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(436)
			::zpp_nape::callbacks::ZPP_CbSet x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(438)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(439)
				while((true)){
					HX_STACK_LINE(439)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(439)
						break;
					}
					HX_STACK_LINE(440)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(441)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(442)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(448)
		while((true)){
			HX_STACK_LINE(448)
			if ((!((!(((W->head == null()))))))){
				HX_STACK_LINE(448)
				break;
			}
			HX_STACK_LINE(449)
			::zpp_nape::callbacks::ZPP_CbSet x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(451)
				lambda(x,x).Cast< Void >();
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(453)
					::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(454)
					while((true)){
						HX_STACK_LINE(454)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(454)
							break;
						}
						HX_STACK_LINE(455)
						::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(456)
						lambda(x,y).Cast< Void >();
						HX_STACK_LINE(457)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbSetset,(void))

Void ZPP_InteractionListener_obj::CbTypeset( ::zpp_nape::util::ZNPList_ZPP_CbType A,::zpp_nape::util::ZNPList_ZPP_CbType B,Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","CbTypeset",0x215c02db,"zpp_nape.callbacks.ZPP_InteractionListener.CbTypeset","zpp_nape/callbacks/Listener.hx",469,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(A,"A")
		HX_STACK_ARG(B,"B")
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPList_ZPP_CbType U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(471)
		::zpp_nape::util::ZNPList_ZPP_CbType V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(472)
		::zpp_nape::util::ZNPList_ZPP_CbType W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(473)
		::zpp_nape::util::ZNPNode_ZPP_CbType aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(474)
		::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(475)
		while((true)){
			HX_STACK_LINE(475)
			if ((!(((bool((aite != null())) && bool((bite != null()))))))){
				HX_STACK_LINE(475)
				break;
			}
			HX_STACK_LINE(476)
			::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(477)
			::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(478)
			if (((a == b))){
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(479)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(479)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(479)
								ret = _g;
							}
							else{
								HX_STACK_LINE(479)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(479)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(479)
								ret->next = null();
							}
							HX_STACK_LINE(479)
							Dynamic();
						}
						HX_STACK_LINE(479)
						ret->elt = a;
						HX_STACK_LINE(479)
						temp = ret;
					}
					HX_STACK_LINE(479)
					temp->next = W->head;
					HX_STACK_LINE(479)
					W->head = temp;
					HX_STACK_LINE(479)
					W->modified = true;
					HX_STACK_LINE(479)
					(W->length)++;
					HX_STACK_LINE(479)
					a;
				}
				HX_STACK_LINE(480)
				aite = aite->next;
				HX_STACK_LINE(481)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(483)
				if (((a->id < b->id))){
					HX_STACK_LINE(484)
					{
						HX_STACK_LINE(484)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(484)
							{
								HX_STACK_LINE(484)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(484)
									::zpp_nape::util::ZNPNode_ZPP_CbType _g1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(484)
									ret = _g1;
								}
								else{
									HX_STACK_LINE(484)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(484)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(484)
									ret->next = null();
								}
								HX_STACK_LINE(484)
								Dynamic();
							}
							HX_STACK_LINE(484)
							ret->elt = a;
							HX_STACK_LINE(484)
							temp = ret;
						}
						HX_STACK_LINE(484)
						temp->next = U->head;
						HX_STACK_LINE(484)
						U->head = temp;
						HX_STACK_LINE(484)
						U->modified = true;
						HX_STACK_LINE(484)
						(U->length)++;
						HX_STACK_LINE(484)
						a;
					}
					HX_STACK_LINE(485)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(488)
					{
						HX_STACK_LINE(488)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(488)
							{
								HX_STACK_LINE(488)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(488)
									::zpp_nape::util::ZNPNode_ZPP_CbType _g2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(488)
									ret = _g2;
								}
								else{
									HX_STACK_LINE(488)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(488)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(488)
									ret->next = null();
								}
								HX_STACK_LINE(488)
								Dynamic();
							}
							HX_STACK_LINE(488)
							ret->elt = b;
							HX_STACK_LINE(488)
							temp = ret;
						}
						HX_STACK_LINE(488)
						temp->next = V->head;
						HX_STACK_LINE(488)
						V->head = temp;
						HX_STACK_LINE(488)
						V->modified = true;
						HX_STACK_LINE(488)
						(V->length)++;
						HX_STACK_LINE(488)
						b;
					}
					HX_STACK_LINE(489)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(492)
		while((true)){
			HX_STACK_LINE(492)
			if ((!(((aite != null()))))){
				HX_STACK_LINE(492)
				break;
			}
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(493)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
							HX_STACK_LINE(493)
							::zpp_nape::util::ZNPNode_ZPP_CbType _g3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(493)
							ret = _g3;
						}
						else{
							HX_STACK_LINE(493)
							ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
							HX_STACK_LINE(493)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
							HX_STACK_LINE(493)
							ret->next = null();
						}
						HX_STACK_LINE(493)
						Dynamic();
					}
					HX_STACK_LINE(493)
					ret->elt = o;
					HX_STACK_LINE(493)
					temp = ret;
				}
				HX_STACK_LINE(493)
				temp->next = U->head;
				HX_STACK_LINE(493)
				U->head = temp;
				HX_STACK_LINE(493)
				U->modified = true;
				HX_STACK_LINE(493)
				(U->length)++;
				HX_STACK_LINE(493)
				o;
			}
			HX_STACK_LINE(494)
			aite = aite->next;
		}
		HX_STACK_LINE(496)
		while((true)){
			HX_STACK_LINE(496)
			if ((!(((bite != null()))))){
				HX_STACK_LINE(496)
				break;
			}
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(497)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(497)
				{
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(497)
					{
						HX_STACK_LINE(497)
						if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
							HX_STACK_LINE(497)
							::zpp_nape::util::ZNPNode_ZPP_CbType _g4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(497)
							ret = _g4;
						}
						else{
							HX_STACK_LINE(497)
							ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
							HX_STACK_LINE(497)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
							HX_STACK_LINE(497)
							ret->next = null();
						}
						HX_STACK_LINE(497)
						Dynamic();
					}
					HX_STACK_LINE(497)
					ret->elt = o;
					HX_STACK_LINE(497)
					temp = ret;
				}
				HX_STACK_LINE(497)
				temp->next = V->head;
				HX_STACK_LINE(497)
				V->head = temp;
				HX_STACK_LINE(497)
				V->modified = true;
				HX_STACK_LINE(497)
				(V->length)++;
				HX_STACK_LINE(497)
				o;
			}
			HX_STACK_LINE(498)
			bite = bite->next;
		}
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			if ((!((!(((U->head == null()))))))){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(502)
			::zpp_nape::callbacks::ZPP_CbType x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(504)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(505)
				while((true)){
					HX_STACK_LINE(505)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(505)
						break;
					}
					HX_STACK_LINE(506)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(507)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(508)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			if ((!((!(((V->head == null()))))))){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			::zpp_nape::callbacks::ZPP_CbType x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(517)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(518)
				while((true)){
					HX_STACK_LINE(518)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(518)
						break;
					}
					HX_STACK_LINE(519)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(520)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(521)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			if ((!((!(((W->head == null()))))))){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(528)
			::zpp_nape::callbacks::ZPP_CbType x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(530)
				lambda(x,x).Cast< Void >();
				HX_STACK_LINE(531)
				{
					HX_STACK_LINE(532)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(534)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(535)
						lambda(x,y).Cast< Void >();
						HX_STACK_LINE(536)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbTypeset,(void))

Void ZPP_InteractionListener_obj::with_uniquesets( bool fresh){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","with_uniquesets",0x3718532d,"zpp_nape.callbacks.ZPP_InteractionListener.with_uniquesets","zpp_nape/callbacks/Listener.hx",543,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fresh,"fresh")
		HX_STACK_LINE(543)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(546)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(547)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair _g1 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(547)
				set = _g1;
			}
			else{
				HX_STACK_LINE(553)
				set = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(554)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = set->next;
				HX_STACK_LINE(555)
				set->next = null();
			}
			HX_STACK_LINE(560)
			Dynamic();
		}
		HX_STACK_LINE(562)
		set->lt = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::setlt_dyn();
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType B = this->options2->includes;		HX_STACK_VAR(B,"B");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(U,"U");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(V,"V");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(W,"W");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPNode_ZPP_CbType aite = this->options1->includes->head;		HX_STACK_VAR(aite,"aite");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!(((bool((aite != null())) && bool((bite != null()))))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(563)
				if (((a == b))){
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType _g1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(563)
									ret = _g1;
								}
								else{
									HX_STACK_LINE(563)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(563)
									ret->next = null();
								}
								HX_STACK_LINE(563)
								Dynamic();
							}
							HX_STACK_LINE(563)
							ret->elt = a;
							HX_STACK_LINE(563)
							temp = ret;
						}
						HX_STACK_LINE(563)
						temp->next = W->head;
						HX_STACK_LINE(563)
						W->head = temp;
						HX_STACK_LINE(563)
						W->modified = true;
						HX_STACK_LINE(563)
						(W->length)++;
						HX_STACK_LINE(563)
						a;
					}
					HX_STACK_LINE(563)
					aite = aite->next;
					HX_STACK_LINE(563)
					bite = bite->next;
				}
				else{
					HX_STACK_LINE(563)
					if (((a->id < b->id))){
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(563)
								{
									HX_STACK_LINE(563)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType _g2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(563)
										ret = _g2;
									}
									else{
										HX_STACK_LINE(563)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(563)
										ret->next = null();
									}
									HX_STACK_LINE(563)
									Dynamic();
								}
								HX_STACK_LINE(563)
								ret->elt = a;
								HX_STACK_LINE(563)
								temp = ret;
							}
							HX_STACK_LINE(563)
							temp->next = U->head;
							HX_STACK_LINE(563)
							U->head = temp;
							HX_STACK_LINE(563)
							U->modified = true;
							HX_STACK_LINE(563)
							(U->length)++;
							HX_STACK_LINE(563)
							a;
						}
						HX_STACK_LINE(563)
						aite = aite->next;
					}
					else{
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(563)
								{
									HX_STACK_LINE(563)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType _g3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(563)
										ret = _g3;
									}
									else{
										HX_STACK_LINE(563)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(563)
										ret->next = null();
									}
									HX_STACK_LINE(563)
									Dynamic();
								}
								HX_STACK_LINE(563)
								ret->elt = b;
								HX_STACK_LINE(563)
								temp = ret;
							}
							HX_STACK_LINE(563)
							temp->next = V->head;
							HX_STACK_LINE(563)
							V->head = temp;
							HX_STACK_LINE(563)
							V->modified = true;
							HX_STACK_LINE(563)
							(V->length)++;
							HX_STACK_LINE(563)
							b;
						}
						HX_STACK_LINE(563)
						bite = bite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!(((aite != null()))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(563)
								ret = _g4;
							}
							else{
								HX_STACK_LINE(563)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(563)
								ret->next = null();
							}
							HX_STACK_LINE(563)
							Dynamic();
						}
						HX_STACK_LINE(563)
						ret->elt = o;
						HX_STACK_LINE(563)
						temp = ret;
					}
					HX_STACK_LINE(563)
					temp->next = U->head;
					HX_STACK_LINE(563)
					U->head = temp;
					HX_STACK_LINE(563)
					U->modified = true;
					HX_STACK_LINE(563)
					(U->length)++;
					HX_STACK_LINE(563)
					o;
				}
				HX_STACK_LINE(563)
				aite = aite->next;
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!(((bite != null()))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(563)
								ret = _g5;
							}
							else{
								HX_STACK_LINE(563)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(563)
								ret->next = null();
							}
							HX_STACK_LINE(563)
							Dynamic();
						}
						HX_STACK_LINE(563)
						ret->elt = o;
						HX_STACK_LINE(563)
						temp = ret;
					}
					HX_STACK_LINE(563)
					temp->next = V->head;
					HX_STACK_LINE(563)
					V->head = temp;
					HX_STACK_LINE(563)
					V->modified = true;
					HX_STACK_LINE(563)
					(V->length)++;
					HX_STACK_LINE(563)
					o;
				}
				HX_STACK_LINE(563)
				bite = bite->next;
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!((!(((U->head == null()))))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(564)
						{
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((bool((aite1 != null())) && bool((bite1 != null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(564)
								if (((a == b))){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g6 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(564)
													ret = _g6;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = W1->head;
										HX_STACK_LINE(564)
										W1->head = temp;
										HX_STACK_LINE(564)
										W1->modified = true;
										HX_STACK_LINE(564)
										(W1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(564)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet _g7 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g7,"_g7");
														HX_STACK_LINE(564)
														ret = _g7;
													}
													else{
														HX_STACK_LINE(564)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												temp = ret;
											}
											HX_STACK_LINE(564)
											temp->next = U1->head;
											HX_STACK_LINE(564)
											U1->head = temp;
											HX_STACK_LINE(564)
											U1->modified = true;
											HX_STACK_LINE(564)
											(U1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet _g8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g8,"_g8");
														HX_STACK_LINE(564)
														ret = _g8;
													}
													else{
														HX_STACK_LINE(564)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = b;
												HX_STACK_LINE(564)
												temp = ret;
											}
											HX_STACK_LINE(564)
											temp->next = V1->head;
											HX_STACK_LINE(564)
											V1->head = temp;
											HX_STACK_LINE(564)
											V1->modified = true;
											HX_STACK_LINE(564)
											(V1->length)++;
											HX_STACK_LINE(564)
											b;
										}
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((aite1 != null()))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet _g9 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g9,"_g9");
												HX_STACK_LINE(564)
												ret = _g9;
											}
											else{
												HX_STACK_LINE(564)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										temp = ret;
									}
									HX_STACK_LINE(564)
									temp->next = U1->head;
									HX_STACK_LINE(564)
									U1->head = temp;
									HX_STACK_LINE(564)
									U1->modified = true;
									HX_STACK_LINE(564)
									(U1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((bite1 != null()))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet _g10 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g10,"_g10");
												HX_STACK_LINE(564)
												ret = _g10;
											}
											else{
												HX_STACK_LINE(564)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										temp = ret;
									}
									HX_STACK_LINE(564)
									temp->next = V1->head;
									HX_STACK_LINE(564)
									V1->head = temp;
									HX_STACK_LINE(564)
									V1->modified = true;
									HX_STACK_LINE(564)
									(V1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((U1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										if ((!(((cx_ite1 != null()))))){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g12;		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g11 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(568)
															ret = _g11;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g12 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g12);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((V1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										if ((!(((cx_ite1 != null()))))){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g13 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g13,"_g13");
															HX_STACK_LINE(568)
															ret = _g13;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g14 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g14);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((W1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										x1->validate();
										HX_STACK_LINE(567)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair _g16;		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair _g15 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g15,"_g15");
														HX_STACK_LINE(568)
														ret = _g15;
													}
													else{
														HX_STACK_LINE(568)
														ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(568)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												_g16 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(_g16);
										}
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(567)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair _g18;		HX_STACK_VAR(_g18,"_g18");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair _g17 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g17,"_g17");
																HX_STACK_LINE(568)
																ret = _g17;
															}
															else{
																HX_STACK_LINE(568)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(568)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														_g18 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(_g18);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(563)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!((!(((V->head == null()))))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(564)
						{
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((bool((aite1 != null())) && bool((bite1 != null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(564)
								if (((a == b))){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g19 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g19,"_g19");
													HX_STACK_LINE(564)
													ret = _g19;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = W1->head;
										HX_STACK_LINE(564)
										W1->head = temp;
										HX_STACK_LINE(564)
										W1->modified = true;
										HX_STACK_LINE(564)
										(W1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(564)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet _g20 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g20,"_g20");
														HX_STACK_LINE(564)
														ret = _g20;
													}
													else{
														HX_STACK_LINE(564)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												temp = ret;
											}
											HX_STACK_LINE(564)
											temp->next = U1->head;
											HX_STACK_LINE(564)
											U1->head = temp;
											HX_STACK_LINE(564)
											U1->modified = true;
											HX_STACK_LINE(564)
											(U1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet _g21 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g21,"_g21");
														HX_STACK_LINE(564)
														ret = _g21;
													}
													else{
														HX_STACK_LINE(564)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = b;
												HX_STACK_LINE(564)
												temp = ret;
											}
											HX_STACK_LINE(564)
											temp->next = V1->head;
											HX_STACK_LINE(564)
											V1->head = temp;
											HX_STACK_LINE(564)
											V1->modified = true;
											HX_STACK_LINE(564)
											(V1->length)++;
											HX_STACK_LINE(564)
											b;
										}
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((aite1 != null()))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet _g22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g22,"_g22");
												HX_STACK_LINE(564)
												ret = _g22;
											}
											else{
												HX_STACK_LINE(564)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										temp = ret;
									}
									HX_STACK_LINE(564)
									temp->next = U1->head;
									HX_STACK_LINE(564)
									U1->head = temp;
									HX_STACK_LINE(564)
									U1->modified = true;
									HX_STACK_LINE(564)
									(U1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!(((bite1 != null()))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet _g23 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g23,"_g23");
												HX_STACK_LINE(564)
												ret = _g23;
											}
											else{
												HX_STACK_LINE(564)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										temp = ret;
									}
									HX_STACK_LINE(564)
									temp->next = V1->head;
									HX_STACK_LINE(564)
									V1->head = temp;
									HX_STACK_LINE(564)
									V1->modified = true;
									HX_STACK_LINE(564)
									(V1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((U1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										if ((!(((cx_ite1 != null()))))){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g25;		HX_STACK_VAR(_g25,"_g25");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g24 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g24,"_g24");
															HX_STACK_LINE(568)
															ret = _g24;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g25 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g25);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((V1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										if ((!(((cx_ite1 != null()))))){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g27;		HX_STACK_VAR(_g27,"_g27");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g26 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g26,"_g26");
															HX_STACK_LINE(568)
															ret = _g26;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g27 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g27);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								if ((!((!(((W1->head == null()))))))){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										x1->validate();
										HX_STACK_LINE(567)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair _g29;		HX_STACK_VAR(_g29,"_g29");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair _g28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g28,"_g28");
														HX_STACK_LINE(568)
														ret = _g28;
													}
													else{
														HX_STACK_LINE(568)
														ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(568)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												_g29 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(_g29);
										}
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(567)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair _g31;		HX_STACK_VAR(_g31,"_g31");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair _g30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g30,"_g30");
																HX_STACK_LINE(568)
																ret = _g30;
															}
															else{
																HX_STACK_LINE(568)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(568)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														_g31 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(_g31);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(563)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				if ((!((!(((W->head == null()))))))){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(564)
					{
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet B1 = x->cbsets;		HX_STACK_VAR(B1,"B1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!(((bool((aite1 != null())) && bool((bite1 != null()))))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(564)
							if (((a == b))){
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet _g32 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g32,"_g32");
												HX_STACK_LINE(564)
												ret = _g32;
											}
											else{
												HX_STACK_LINE(564)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = a;
										HX_STACK_LINE(564)
										temp = ret;
									}
									HX_STACK_LINE(564)
									temp->next = W1->head;
									HX_STACK_LINE(564)
									W1->head = temp;
									HX_STACK_LINE(564)
									W1->modified = true;
									HX_STACK_LINE(564)
									(W1->length)++;
									HX_STACK_LINE(564)
									a;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							else{
								HX_STACK_LINE(564)
								if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g33 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g33,"_g33");
													HX_STACK_LINE(564)
													ret = _g33;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = U1->head;
										HX_STACK_LINE(564)
										U1->head = temp;
										HX_STACK_LINE(564)
										U1->modified = true;
										HX_STACK_LINE(564)
										(U1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
								}
								else{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g34 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g34,"_g34");
													HX_STACK_LINE(564)
													ret = _g34;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = b;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = V1->head;
										HX_STACK_LINE(564)
										V1->head = temp;
										HX_STACK_LINE(564)
										V1->modified = true;
										HX_STACK_LINE(564)
										(V1->length)++;
										HX_STACK_LINE(564)
										b;
									}
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!(((aite1 != null()))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet _g35 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g35,"_g35");
											HX_STACK_LINE(564)
											ret = _g35;
										}
										else{
											HX_STACK_LINE(564)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(564)
											ret->next = null();
										}
										HX_STACK_LINE(564)
										Dynamic();
									}
									HX_STACK_LINE(564)
									ret->elt = o;
									HX_STACK_LINE(564)
									temp = ret;
								}
								HX_STACK_LINE(564)
								temp->next = U1->head;
								HX_STACK_LINE(564)
								U1->head = temp;
								HX_STACK_LINE(564)
								U1->modified = true;
								HX_STACK_LINE(564)
								(U1->length)++;
								HX_STACK_LINE(564)
								o;
							}
							HX_STACK_LINE(564)
							aite1 = aite1->next;
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!(((bite1 != null()))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet _g36 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g36,"_g36");
											HX_STACK_LINE(564)
											ret = _g36;
										}
										else{
											HX_STACK_LINE(564)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(564)
											ret->next = null();
										}
										HX_STACK_LINE(564)
										Dynamic();
									}
									HX_STACK_LINE(564)
									ret->elt = o;
									HX_STACK_LINE(564)
									temp = ret;
								}
								HX_STACK_LINE(564)
								temp->next = V1->head;
								HX_STACK_LINE(564)
								V1->head = temp;
								HX_STACK_LINE(564)
								V1->modified = true;
								HX_STACK_LINE(564)
								(V1->length)++;
								HX_STACK_LINE(564)
								o;
							}
							HX_STACK_LINE(564)
							bite1 = bite1->next;
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!((!(((U1->head == null()))))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										y->validate();
										HX_STACK_LINE(567)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair _g38;		HX_STACK_VAR(_g38,"_g38");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair _g37 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g37,"_g37");
														HX_STACK_LINE(568)
														ret = _g37;
													}
													else{
														HX_STACK_LINE(568)
														ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(568)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = y;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = y;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												_g38 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(_g38);
										}
									}
									HX_STACK_LINE(564)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!((!(((V1->head == null()))))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										y->validate();
										HX_STACK_LINE(567)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair _g40;		HX_STACK_VAR(_g40,"_g40");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair _g39 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g39,"_g39");
														HX_STACK_LINE(568)
														ret = _g39;
													}
													else{
														HX_STACK_LINE(568)
														ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(568)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = y;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = y;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												_g40 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(_g40);
										}
									}
									HX_STACK_LINE(564)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							if ((!((!(((W1->head == null()))))))){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(565)
									x1->validate();
									HX_STACK_LINE(566)
									x1->validate();
									HX_STACK_LINE(567)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
										HX_STACK_LINE(568)
										::zpp_nape::callbacks::ZPP_CbSetPair _g42;		HX_STACK_VAR(_g42,"_g42");
										HX_STACK_LINE(568)
										{
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair _g41 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g41,"_g41");
													HX_STACK_LINE(568)
													ret = _g41;
												}
												else{
													HX_STACK_LINE(568)
													ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
													HX_STACK_LINE(568)
													ret->next = null();
												}
												HX_STACK_LINE(568)
												ret->zip_listeners = true;
											}
											HX_STACK_LINE(568)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
												HX_STACK_LINE(568)
												ret->a = x1;
												HX_STACK_LINE(568)
												ret->b = x1;
											}
											else{
												HX_STACK_LINE(568)
												ret->a = x1;
												HX_STACK_LINE(568)
												ret->b = x1;
											}
											HX_STACK_LINE(568)
											_g42 = ret;
										}
										HX_STACK_LINE(568)
										set->try_insert(_g42);
									}
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g44;		HX_STACK_VAR(_g44,"_g44");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g43 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g43,"_g43");
															HX_STACK_LINE(568)
															ret = _g43;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g44 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g44);
											}
										}
										HX_STACK_LINE(564)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(563)
						while((true)){
							HX_STACK_LINE(563)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(563)
								break;
							}
							HX_STACK_LINE(563)
							::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!(((bool((aite1 != null())) && bool((bite1 != null()))))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(564)
									if (((a == b))){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet _g45 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g45,"_g45");
														HX_STACK_LINE(564)
														ret = _g45;
													}
													else{
														HX_STACK_LINE(564)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												temp = ret;
											}
											HX_STACK_LINE(564)
											temp->next = W1->head;
											HX_STACK_LINE(564)
											W1->head = temp;
											HX_STACK_LINE(564)
											W1->modified = true;
											HX_STACK_LINE(564)
											(W1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
									else{
										HX_STACK_LINE(564)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(564)
													{
														HX_STACK_LINE(564)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet _g46 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g46,"_g46");
															HX_STACK_LINE(564)
															ret = _g46;
														}
														else{
															HX_STACK_LINE(564)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(564)
															ret->next = null();
														}
														HX_STACK_LINE(564)
														Dynamic();
													}
													HX_STACK_LINE(564)
													ret->elt = a;
													HX_STACK_LINE(564)
													temp = ret;
												}
												HX_STACK_LINE(564)
												temp->next = U1->head;
												HX_STACK_LINE(564)
												U1->head = temp;
												HX_STACK_LINE(564)
												U1->modified = true;
												HX_STACK_LINE(564)
												(U1->length)++;
												HX_STACK_LINE(564)
												a;
											}
											HX_STACK_LINE(564)
											aite1 = aite1->next;
										}
										else{
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(564)
													{
														HX_STACK_LINE(564)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet _g47 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g47,"_g47");
															HX_STACK_LINE(564)
															ret = _g47;
														}
														else{
															HX_STACK_LINE(564)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(564)
															ret->next = null();
														}
														HX_STACK_LINE(564)
														Dynamic();
													}
													HX_STACK_LINE(564)
													ret->elt = b;
													HX_STACK_LINE(564)
													temp = ret;
												}
												HX_STACK_LINE(564)
												temp->next = V1->head;
												HX_STACK_LINE(564)
												V1->head = temp;
												HX_STACK_LINE(564)
												V1->modified = true;
												HX_STACK_LINE(564)
												(V1->length)++;
												HX_STACK_LINE(564)
												b;
											}
											HX_STACK_LINE(564)
											bite1 = bite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!(((aite1 != null()))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g48 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g48,"_g48");
													HX_STACK_LINE(564)
													ret = _g48;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = o;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = U1->head;
										HX_STACK_LINE(564)
										U1->head = temp;
										HX_STACK_LINE(564)
										U1->modified = true;
										HX_STACK_LINE(564)
										(U1->length)++;
										HX_STACK_LINE(564)
										o;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!(((bite1 != null()))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet _g49 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g49,"_g49");
													HX_STACK_LINE(564)
													ret = _g49;
												}
												else{
													HX_STACK_LINE(564)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = o;
											HX_STACK_LINE(564)
											temp = ret;
										}
										HX_STACK_LINE(564)
										temp->next = V1->head;
										HX_STACK_LINE(564)
										V1->head = temp;
										HX_STACK_LINE(564)
										V1->modified = true;
										HX_STACK_LINE(564)
										(V1->length)++;
										HX_STACK_LINE(564)
										o;
									}
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!((!(((U1->head == null()))))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(567)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair _g51;		HX_STACK_VAR(_g51,"_g51");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair _g50 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g50,"_g50");
																HX_STACK_LINE(568)
																ret = _g50;
															}
															else{
																HX_STACK_LINE(568)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(568)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														_g51 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(_g51);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!((!(((V1->head == null()))))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(567)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair _g53;		HX_STACK_VAR(_g53,"_g53");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair _g52 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g52,"_g52");
																HX_STACK_LINE(568)
																ret = _g52;
															}
															else{
																HX_STACK_LINE(568)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(568)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														_g53 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(_g53);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									if ((!((!(((W1->head == null()))))))){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											x1->validate();
											HX_STACK_LINE(567)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair _g55;		HX_STACK_VAR(_g55,"_g55");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair _g54 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g54,"_g54");
															HX_STACK_LINE(568)
															ret = _g54;
														}
														else{
															HX_STACK_LINE(568)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(568)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													_g55 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(_g55);
											}
										}
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(564)
											while((true)){
												HX_STACK_LINE(564)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(564)
													break;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(565)
													x1->validate();
													HX_STACK_LINE(566)
													y1->validate();
													HX_STACK_LINE(567)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair _g57;		HX_STACK_VAR(_g57,"_g57");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(568)
															{
																HX_STACK_LINE(568)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(568)
																	::zpp_nape::callbacks::ZPP_CbSetPair _g56 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g56,"_g56");
																	HX_STACK_LINE(568)
																	ret = _g56;
																}
																else{
																	HX_STACK_LINE(568)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(568)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(568)
																	ret->next = null();
																}
																HX_STACK_LINE(568)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(568)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																HX_STACK_LINE(568)
																ret->a = x1;
																HX_STACK_LINE(568)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(568)
																ret->a = y1;
																HX_STACK_LINE(568)
																ret->b = x1;
															}
															HX_STACK_LINE(568)
															_g57 = ret;
														}
														HX_STACK_LINE(568)
														set->try_insert(_g57);
													}
												}
												HX_STACK_LINE(564)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(563)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(572)
		if (((set->parent == null()))){
			HX_STACK_LINE(572)
			Dynamic();
		}
		else{
			HX_STACK_LINE(572)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = set->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(572)
			while((true)){
				HX_STACK_LINE(572)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(572)
					break;
				}
				HX_STACK_LINE(572)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair _g59;		HX_STACK_VAR(_g59,"_g59");
				HX_STACK_LINE(572)
				if (((cur->prev != null()))){
					HX_STACK_LINE(572)
					_g59 = cur->prev;
				}
				else{
					HX_STACK_LINE(572)
					if (((cur->next != null()))){
						HX_STACK_LINE(572)
						_g59 = cur->next;
					}
					else{
						HX_STACK_LINE(572)
						{
							HX_STACK_LINE(572)
							::zpp_nape::callbacks::ZPP_CbSetPair pair = cur->data;		HX_STACK_VAR(pair,"pair");
							HX_STACK_LINE(573)
							if ((fresh)){
								HX_STACK_LINE(573)
								_g->space->freshListenerType(pair->a,pair->b);
							}
							else{
								HX_STACK_LINE(574)
								_g->space->nullListenerType(pair->a,pair->b);
							}
							HX_STACK_LINE(575)
							{
								HX_STACK_LINE(576)
								::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(585)
								{
									HX_STACK_LINE(585)
									::zpp_nape::callbacks::ZPP_CbSet _g58 = o->b = null();		HX_STACK_VAR(_g58,"_g58");
									HX_STACK_LINE(585)
									o->a = _g58;
									HX_STACK_LINE(585)
									o->listeners->clear();
								}
								HX_STACK_LINE(586)
								o->next = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(587)
								::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(572)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(572)
						if (((ret != null()))){
							HX_STACK_LINE(572)
							if (((cur == ret->prev))){
								HX_STACK_LINE(572)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(572)
								ret->next = null();
							}
							HX_STACK_LINE(572)
							cur->parent = null();
						}
						HX_STACK_LINE(572)
						{
							HX_STACK_LINE(572)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(572)
							{
								HX_STACK_LINE(572)
								o->data = null();
								HX_STACK_LINE(572)
								o->lt = null();
								HX_STACK_LINE(572)
								o->swapped = null();
							}
							HX_STACK_LINE(572)
							o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(572)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(572)
						_g59 = ret;
					}
				}
				HX_STACK_LINE(572)
				cur = _g59;
			}
			HX_STACK_LINE(572)
			set->parent = null();
		}
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(594)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = set;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				o->data = null();
				HX_STACK_LINE(603)
				o->lt = null();
				HX_STACK_LINE(603)
				o->swapped = null();
			}
			HX_STACK_LINE(604)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_uniquesets,(void))

Void ZPP_InteractionListener_obj::with_union( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","with_union",0xad4f2fe4,"zpp_nape.callbacks.ZPP_InteractionListener.with_union","zpp_nape/callbacks/Listener.hx",613,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(614)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(615)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(616)
		while((true)){
			HX_STACK_LINE(616)
			if ((!(((bool((ite1 != null())) && bool((ite2 != null()))))))){
				HX_STACK_LINE(616)
				break;
			}
			HX_STACK_LINE(617)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(618)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(619)
			if (((cb1 == cb2))){
				HX_STACK_LINE(620)
				lambda(cb1).Cast< Void >();
				HX_STACK_LINE(621)
				ite1 = ite1->next;
				HX_STACK_LINE(622)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(624)
				if (((cb1->id < cb2->id))){
					HX_STACK_LINE(625)
					lambda(cb1).Cast< Void >();
					HX_STACK_LINE(626)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(629)
					lambda(cb2).Cast< Void >();
					HX_STACK_LINE(630)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(633)
		while((true)){
			HX_STACK_LINE(633)
			if ((!(((ite1 != null()))))){
				HX_STACK_LINE(633)
				break;
			}
			HX_STACK_LINE(634)
			lambda(ite1->elt).Cast< Void >();
			HX_STACK_LINE(635)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(637)
		while((true)){
			HX_STACK_LINE(637)
			if ((!(((ite2 != null()))))){
				HX_STACK_LINE(637)
				break;
			}
			HX_STACK_LINE(638)
			lambda(ite2->elt).Cast< Void >();
			HX_STACK_LINE(639)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_union,(void))

Void ZPP_InteractionListener_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","addedToSpace",0xd900e8f9,"zpp_nape.callbacks.ZPP_InteractionListener.addedToSpace","zpp_nape/callbacks/Listener.hx",642,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(642)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				if ((!(((bool((ite1 != null())) && bool((ite2 != null()))))))){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(644)
				if (((cb1 == cb2))){
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(645)
												ret = _g1;
											}
											else{
												HX_STACK_LINE(645)
												ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(645)
												ret->next = null();
											}
											HX_STACK_LINE(645)
											Dynamic();
										}
										HX_STACK_LINE(645)
										ret->elt = _g;
										HX_STACK_LINE(645)
										temp = ret;
									}
									HX_STACK_LINE(645)
									if (((pre1 == null()))){
										HX_STACK_LINE(645)
										temp->next = _this->head;
										HX_STACK_LINE(645)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(645)
										temp->next = pre1->next;
										HX_STACK_LINE(645)
										pre1->next = temp;
									}
									HX_STACK_LINE(645)
									bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(645)
									_this->pushmod = _g1;
									HX_STACK_LINE(645)
									(_this->length)++;
									HX_STACK_LINE(645)
									temp;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										cb->zip_listeners = true;
										HX_STACK_LINE(645)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(646)
						if ((pre)){
							HX_STACK_LINE(648)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(649)
							while((true)){
								HX_STACK_LINE(649)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(649)
									break;
								}
								HX_STACK_LINE(650)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(651)
								i->wake();
								HX_STACK_LINE(652)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(644)
					ite1 = ite1->next;
					HX_STACK_LINE(644)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(644)
					if (((cb1->id < cb2->id))){
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(645)
										while((true)){
											HX_STACK_LINE(645)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(645)
													break;
												}
												HX_STACK_LINE(645)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(645)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(645)
													ret = _g2;
												}
												else{
													HX_STACK_LINE(645)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(645)
													ret->next = null();
												}
												HX_STACK_LINE(645)
												Dynamic();
											}
											HX_STACK_LINE(645)
											ret->elt = _g;
											HX_STACK_LINE(645)
											temp = ret;
										}
										HX_STACK_LINE(645)
										if (((pre1 == null()))){
											HX_STACK_LINE(645)
											temp->next = _this->head;
											HX_STACK_LINE(645)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(645)
											temp->next = pre1->next;
											HX_STACK_LINE(645)
											pre1->next = temp;
										}
										HX_STACK_LINE(645)
										bool _g3 = _this->modified = true;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(645)
										_this->pushmod = _g3;
										HX_STACK_LINE(645)
										(_this->length)++;
										HX_STACK_LINE(645)
										temp;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											cb->zip_listeners = true;
											HX_STACK_LINE(645)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(646)
							if ((pre)){
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(649)
								while((true)){
									HX_STACK_LINE(649)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(649)
										break;
									}
									HX_STACK_LINE(650)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(651)
									i->wake();
									HX_STACK_LINE(652)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(644)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb2->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(645)
										while((true)){
											HX_STACK_LINE(645)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(645)
													break;
												}
												HX_STACK_LINE(645)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(645)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb2->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(645)
													ret = _g4;
												}
												else{
													HX_STACK_LINE(645)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(645)
													ret->next = null();
												}
												HX_STACK_LINE(645)
												Dynamic();
											}
											HX_STACK_LINE(645)
											ret->elt = _g;
											HX_STACK_LINE(645)
											temp = ret;
										}
										HX_STACK_LINE(645)
										if (((pre1 == null()))){
											HX_STACK_LINE(645)
											temp->next = _this->head;
											HX_STACK_LINE(645)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(645)
											temp->next = pre1->next;
											HX_STACK_LINE(645)
											pre1->next = temp;
										}
										HX_STACK_LINE(645)
										bool _g5 = _this->modified = true;		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(645)
										_this->pushmod = _g5;
										HX_STACK_LINE(645)
										(_this->length)++;
										HX_STACK_LINE(645)
										temp;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											cb->zip_listeners = true;
											HX_STACK_LINE(645)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(646)
							if ((pre)){
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(649)
								while((true)){
									HX_STACK_LINE(649)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(649)
										break;
									}
									HX_STACK_LINE(650)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(651)
									i->wake();
									HX_STACK_LINE(652)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(644)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				if ((!(((ite1 != null()))))){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(644)
					::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g6 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(645)
											ret = _g6;
										}
										else{
											HX_STACK_LINE(645)
											ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
											HX_STACK_LINE(645)
											ret->next = null();
										}
										HX_STACK_LINE(645)
										Dynamic();
									}
									HX_STACK_LINE(645)
									ret->elt = _g;
									HX_STACK_LINE(645)
									temp = ret;
								}
								HX_STACK_LINE(645)
								if (((pre1 == null()))){
									HX_STACK_LINE(645)
									temp->next = _this->head;
									HX_STACK_LINE(645)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(645)
									temp->next = pre1->next;
									HX_STACK_LINE(645)
									pre1->next = temp;
								}
								HX_STACK_LINE(645)
								bool _g7 = _this->modified = true;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(645)
								_this->pushmod = _g7;
								HX_STACK_LINE(645)
								(_this->length)++;
								HX_STACK_LINE(645)
								temp;
							}
						}
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(645)
							while((true)){
								HX_STACK_LINE(645)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(645)
									break;
								}
								HX_STACK_LINE(645)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									cb1->zip_listeners = true;
									HX_STACK_LINE(645)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(645)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(646)
					if ((pre)){
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(649)
						while((true)){
							HX_STACK_LINE(649)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(649)
								break;
							}
							HX_STACK_LINE(650)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(651)
							i->wake();
							HX_STACK_LINE(652)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(644)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				if ((!(((ite2 != null()))))){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(644)
					::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g8 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(645)
											ret = _g8;
										}
										else{
											HX_STACK_LINE(645)
											ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
											HX_STACK_LINE(645)
											ret->next = null();
										}
										HX_STACK_LINE(645)
										Dynamic();
									}
									HX_STACK_LINE(645)
									ret->elt = _g;
									HX_STACK_LINE(645)
									temp = ret;
								}
								HX_STACK_LINE(645)
								if (((pre1 == null()))){
									HX_STACK_LINE(645)
									temp->next = _this->head;
									HX_STACK_LINE(645)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(645)
									temp->next = pre1->next;
									HX_STACK_LINE(645)
									pre1->next = temp;
								}
								HX_STACK_LINE(645)
								bool _g9 = _this->modified = true;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(645)
								_this->pushmod = _g9;
								HX_STACK_LINE(645)
								(_this->length)++;
								HX_STACK_LINE(645)
								temp;
							}
						}
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(645)
							while((true)){
								HX_STACK_LINE(645)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(645)
									break;
								}
								HX_STACK_LINE(645)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									cb1->zip_listeners = true;
									HX_STACK_LINE(645)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(645)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(646)
					if ((pre)){
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(649)
						while((true)){
							HX_STACK_LINE(649)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(649)
								break;
							}
							HX_STACK_LINE(650)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(651)
							i->wake();
							HX_STACK_LINE(652)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(644)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(657)
		this->options1->handler = this->cbtype_change1_dyn();
		HX_STACK_LINE(658)
		this->options2->handler = this->cbtype_change2_dyn();
		HX_STACK_LINE(659)
		this->with_uniquesets(true);
	}
return null();
}


Void ZPP_InteractionListener_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","removedFromSpace",0xe92a46ca,"zpp_nape.callbacks.ZPP_InteractionListener.removedFromSpace","zpp_nape/callbacks/Listener.hx",661,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(662)
		this->with_uniquesets(false);
		HX_STACK_LINE(663)
		bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				if ((!(((bool((ite1 != null())) && bool((ite2 != null()))))))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(664)
				if (((cb1 == cb2))){
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							cb1->listeners->remove(_g);
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(665)
								while((true)){
									HX_STACK_LINE(665)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(665)
										break;
									}
									HX_STACK_LINE(665)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(665)
									{
										HX_STACK_LINE(665)
										cb->zip_listeners = true;
										HX_STACK_LINE(665)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(665)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(666)
						if ((pre)){
							HX_STACK_LINE(668)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(669)
							while((true)){
								HX_STACK_LINE(669)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(669)
									break;
								}
								HX_STACK_LINE(670)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(671)
								i->wake();
								HX_STACK_LINE(672)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(664)
					ite1 = ite1->next;
					HX_STACK_LINE(664)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(664)
					if (((cb1->id < cb2->id))){
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								cb1->listeners->remove(_g);
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(665)
									while((true)){
										HX_STACK_LINE(665)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(665)
											break;
										}
										HX_STACK_LINE(665)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											cb->zip_listeners = true;
											HX_STACK_LINE(665)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(665)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(666)
							if ((pre)){
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(669)
								while((true)){
									HX_STACK_LINE(669)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(669)
										break;
									}
									HX_STACK_LINE(670)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(671)
									i->wake();
									HX_STACK_LINE(672)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(664)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								cb2->listeners->remove(_g);
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(665)
									while((true)){
										HX_STACK_LINE(665)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(665)
											break;
										}
										HX_STACK_LINE(665)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											cb->zip_listeners = true;
											HX_STACK_LINE(665)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(665)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(666)
							if ((pre)){
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(669)
								while((true)){
									HX_STACK_LINE(669)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(669)
										break;
									}
									HX_STACK_LINE(670)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(671)
									i->wake();
									HX_STACK_LINE(672)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(664)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				if ((!(((ite1 != null()))))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						cb->listeners->remove(_g);
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(665)
							while((true)){
								HX_STACK_LINE(665)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(665)
									break;
								}
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									cb1->zip_listeners = true;
									HX_STACK_LINE(665)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(665)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(666)
					if ((pre)){
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(669)
						while((true)){
							HX_STACK_LINE(669)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(669)
								break;
							}
							HX_STACK_LINE(670)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(671)
							i->wake();
							HX_STACK_LINE(672)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(664)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				if ((!(((ite2 != null()))))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						cb->listeners->remove(_g);
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(665)
							while((true)){
								HX_STACK_LINE(665)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(665)
									break;
								}
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									cb1->zip_listeners = true;
									HX_STACK_LINE(665)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(665)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(666)
					if ((pre)){
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(669)
						while((true)){
							HX_STACK_LINE(669)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(669)
								break;
							}
							HX_STACK_LINE(670)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(671)
							i->wake();
							HX_STACK_LINE(672)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(664)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(677)
		this->options1->handler = null();
		HX_STACK_LINE(678)
		this->options2->handler = null();
	}
return null();
}


Void ZPP_InteractionListener_obj::invalidate_precedence( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","invalidate_precedence",0x04144f40,"zpp_nape.callbacks.ZPP_InteractionListener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",680,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(680)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(681)
		if (((this->space != null()))){
			HX_STACK_LINE(682)
			bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					if ((!(((bool((ite1 != null())) && bool((ite2 != null()))))))){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
					HX_STACK_LINE(683)
					if (((cb1 == cb2))){
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								cb1->listeners->remove(_g);
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(684)
									while((true)){
										HX_STACK_LINE(684)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(684)
											break;
										}
										HX_STACK_LINE(684)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(684)
										{
											HX_STACK_LINE(684)
											cb->zip_listeners = true;
											HX_STACK_LINE(684)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(684)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(685)
													ret = _g1;
												}
												else{
													HX_STACK_LINE(685)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(685)
													ret->next = null();
												}
												HX_STACK_LINE(685)
												Dynamic();
											}
											HX_STACK_LINE(685)
											ret->elt = _g;
											HX_STACK_LINE(685)
											temp = ret;
										}
										HX_STACK_LINE(685)
										if (((pre1 == null()))){
											HX_STACK_LINE(685)
											temp->next = _this->head;
											HX_STACK_LINE(685)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(685)
											temp->next = pre1->next;
											HX_STACK_LINE(685)
											pre1->next = temp;
										}
										HX_STACK_LINE(685)
										bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(685)
										_this->pushmod = _g1;
										HX_STACK_LINE(685)
										(_this->length)++;
										HX_STACK_LINE(685)
										temp;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											cb->zip_listeners = true;
											HX_STACK_LINE(685)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(686)
							if ((pre)){
								HX_STACK_LINE(688)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(689)
								while((true)){
									HX_STACK_LINE(689)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(689)
										break;
									}
									HX_STACK_LINE(690)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(691)
									i->wake();
									HX_STACK_LINE(692)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(683)
						ite1 = ite1->next;
						HX_STACK_LINE(683)
						ite2 = ite2->next;
					}
					else{
						HX_STACK_LINE(683)
						if (((cb1->id < cb2->id))){
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									cb1->listeners->remove(_g);
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(684)
										while((true)){
											HX_STACK_LINE(684)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(684)
												break;
											}
											HX_STACK_LINE(684)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(684)
											{
												HX_STACK_LINE(684)
												cb->zip_listeners = true;
												HX_STACK_LINE(684)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(684)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(685)
											while((true)){
												HX_STACK_LINE(685)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
														HX_STACK_LINE(685)
														break;
													}
													HX_STACK_LINE(685)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(685)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(685)
														ret = _g2;
													}
													else{
														HX_STACK_LINE(685)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(685)
														ret->next = null();
													}
													HX_STACK_LINE(685)
													Dynamic();
												}
												HX_STACK_LINE(685)
												ret->elt = _g;
												HX_STACK_LINE(685)
												temp = ret;
											}
											HX_STACK_LINE(685)
											if (((pre1 == null()))){
												HX_STACK_LINE(685)
												temp->next = _this->head;
												HX_STACK_LINE(685)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(685)
												temp->next = pre1->next;
												HX_STACK_LINE(685)
												pre1->next = temp;
											}
											HX_STACK_LINE(685)
											bool _g3 = _this->modified = true;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(685)
											_this->pushmod = _g3;
											HX_STACK_LINE(685)
											(_this->length)++;
											HX_STACK_LINE(685)
											temp;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												cb->zip_listeners = true;
												HX_STACK_LINE(685)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(686)
								if ((pre)){
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(689)
									while((true)){
										HX_STACK_LINE(689)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(689)
											break;
										}
										HX_STACK_LINE(690)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(691)
										i->wake();
										HX_STACK_LINE(692)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(683)
							ite1 = ite1->next;
						}
						else{
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									cb2->listeners->remove(_g);
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(684)
										while((true)){
											HX_STACK_LINE(684)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(684)
												break;
											}
											HX_STACK_LINE(684)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(684)
											{
												HX_STACK_LINE(684)
												cb->zip_listeners = true;
												HX_STACK_LINE(684)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(684)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb2->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(685)
											while((true)){
												HX_STACK_LINE(685)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
														HX_STACK_LINE(685)
														break;
													}
													HX_STACK_LINE(685)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(685)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb2->listeners;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(685)
														ret = _g4;
													}
													else{
														HX_STACK_LINE(685)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(685)
														ret->next = null();
													}
													HX_STACK_LINE(685)
													Dynamic();
												}
												HX_STACK_LINE(685)
												ret->elt = _g;
												HX_STACK_LINE(685)
												temp = ret;
											}
											HX_STACK_LINE(685)
											if (((pre1 == null()))){
												HX_STACK_LINE(685)
												temp->next = _this->head;
												HX_STACK_LINE(685)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(685)
												temp->next = pre1->next;
												HX_STACK_LINE(685)
												pre1->next = temp;
											}
											HX_STACK_LINE(685)
											bool _g5 = _this->modified = true;		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(685)
											_this->pushmod = _g5;
											HX_STACK_LINE(685)
											(_this->length)++;
											HX_STACK_LINE(685)
											temp;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												cb->zip_listeners = true;
												HX_STACK_LINE(685)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(686)
								if ((pre)){
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(689)
									while((true)){
										HX_STACK_LINE(689)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(689)
											break;
										}
										HX_STACK_LINE(690)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(691)
										i->wake();
										HX_STACK_LINE(692)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(683)
							ite2 = ite2->next;
						}
					}
				}
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					if ((!(((ite1 != null()))))){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
						HX_STACK_LINE(684)
						{
							HX_STACK_LINE(684)
							cb->listeners->remove(_g);
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(684)
								while((true)){
									HX_STACK_LINE(684)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(684)
										break;
									}
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										cb1->zip_listeners = true;
										HX_STACK_LINE(684)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(684)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g6 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g6,"_g6");
												HX_STACK_LINE(685)
												ret = _g6;
											}
											else{
												HX_STACK_LINE(685)
												ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(685)
												ret->next = null();
											}
											HX_STACK_LINE(685)
											Dynamic();
										}
										HX_STACK_LINE(685)
										ret->elt = _g;
										HX_STACK_LINE(685)
										temp = ret;
									}
									HX_STACK_LINE(685)
									if (((pre1 == null()))){
										HX_STACK_LINE(685)
										temp->next = _this->head;
										HX_STACK_LINE(685)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(685)
										temp->next = pre1->next;
										HX_STACK_LINE(685)
										pre1->next = temp;
									}
									HX_STACK_LINE(685)
									bool _g7 = _this->modified = true;		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(685)
									_this->pushmod = _g7;
									HX_STACK_LINE(685)
									(_this->length)++;
									HX_STACK_LINE(685)
									temp;
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(685)
								while((true)){
									HX_STACK_LINE(685)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(685)
										break;
									}
									HX_STACK_LINE(685)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										cb1->zip_listeners = true;
										HX_STACK_LINE(685)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(685)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(686)
						if ((pre)){
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(689)
							while((true)){
								HX_STACK_LINE(689)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(689)
									break;
								}
								HX_STACK_LINE(690)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(691)
								i->wake();
								HX_STACK_LINE(692)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(683)
					ite1 = ite1->next;
				}
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					if ((!(((ite2 != null()))))){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
						HX_STACK_LINE(684)
						{
							HX_STACK_LINE(684)
							cb->listeners->remove(_g);
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(684)
								while((true)){
									HX_STACK_LINE(684)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(684)
										break;
									}
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										cb1->zip_listeners = true;
										HX_STACK_LINE(684)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(684)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener _g8 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(_g8,"_g8");
												HX_STACK_LINE(685)
												ret = _g8;
											}
											else{
												HX_STACK_LINE(685)
												ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(685)
												ret->next = null();
											}
											HX_STACK_LINE(685)
											Dynamic();
										}
										HX_STACK_LINE(685)
										ret->elt = _g;
										HX_STACK_LINE(685)
										temp = ret;
									}
									HX_STACK_LINE(685)
									if (((pre1 == null()))){
										HX_STACK_LINE(685)
										temp->next = _this->head;
										HX_STACK_LINE(685)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(685)
										temp->next = pre1->next;
										HX_STACK_LINE(685)
										pre1->next = temp;
									}
									HX_STACK_LINE(685)
									bool _g9 = _this->modified = true;		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(685)
									_this->pushmod = _g9;
									HX_STACK_LINE(685)
									(_this->length)++;
									HX_STACK_LINE(685)
									temp;
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(685)
								while((true)){
									HX_STACK_LINE(685)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(685)
										break;
									}
									HX_STACK_LINE(685)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										cb1->zip_listeners = true;
										HX_STACK_LINE(685)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(685)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(686)
						if ((pre)){
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(689)
							while((true)){
								HX_STACK_LINE(689)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(689)
									break;
								}
								HX_STACK_LINE(690)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(691)
								i->wake();
								HX_STACK_LINE(692)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(683)
					ite2 = ite2->next;
				}
			}
		}
	}
return null();
}


Void ZPP_InteractionListener_obj::cbtype_change1( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change1",0xd11af429,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change1","zpp_nape/callbacks/Listener.hx",700,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(700)
		this->cbtype_change(this->options1,cb,included,added);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change1,(void))

Void ZPP_InteractionListener_obj::cbtype_change2( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change2",0xd11af42a,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change2","zpp_nape/callbacks/Listener.hx",703,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(703)
		this->cbtype_change(this->options2,cb,included,added);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change2,(void))

Void ZPP_InteractionListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_OptionType options,::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change",0x0461b308,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change","zpp_nape/callbacks/Listener.hx",705,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(707)
		this->removedFromSpace();
		HX_STACK_LINE(708)
		if ((included)){
			HX_STACK_LINE(708)
			if ((added)){
				HX_STACK_LINE(708)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(708)
					while((true)){
						HX_STACK_LINE(708)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(708)
							break;
						}
						HX_STACK_LINE(708)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							if (((cb->id < j->id))){
								HX_STACK_LINE(708)
								break;
							}
							HX_STACK_LINE(708)
							pre = cx_ite;
						}
						HX_STACK_LINE(708)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = options->includes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(708)
								ret = _g;
							}
							else{
								HX_STACK_LINE(708)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(708)
								ret->next = null();
							}
							HX_STACK_LINE(708)
							Dynamic();
						}
						HX_STACK_LINE(708)
						ret->elt = cb;
						HX_STACK_LINE(708)
						temp = ret;
					}
					HX_STACK_LINE(708)
					if (((pre == null()))){
						HX_STACK_LINE(708)
						temp->next = _this->head;
						HX_STACK_LINE(708)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(708)
						temp->next = pre->next;
						HX_STACK_LINE(708)
						pre->next = temp;
					}
					HX_STACK_LINE(708)
					bool _g1 = _this->modified = true;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(708)
					_this->pushmod = _g1;
					HX_STACK_LINE(708)
					(_this->length)++;
					HX_STACK_LINE(708)
					temp;
				}
			}
			else{
				HX_STACK_LINE(708)
				options->includes->remove(cb);
			}
		}
		else{
			HX_STACK_LINE(708)
			if ((added)){
				HX_STACK_LINE(708)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(708)
					while((true)){
						HX_STACK_LINE(708)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(708)
							break;
						}
						HX_STACK_LINE(708)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							if (((cb->id < j->id))){
								HX_STACK_LINE(708)
								break;
							}
							HX_STACK_LINE(708)
							pre = cx_ite;
						}
						HX_STACK_LINE(708)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = options->excludes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType _g2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(708)
								ret = _g2;
							}
							else{
								HX_STACK_LINE(708)
								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(708)
								ret->next = null();
							}
							HX_STACK_LINE(708)
							Dynamic();
						}
						HX_STACK_LINE(708)
						ret->elt = cb;
						HX_STACK_LINE(708)
						temp = ret;
					}
					HX_STACK_LINE(708)
					if (((pre == null()))){
						HX_STACK_LINE(708)
						temp->next = _this->head;
						HX_STACK_LINE(708)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(708)
						temp->next = pre->next;
						HX_STACK_LINE(708)
						pre->next = temp;
					}
					HX_STACK_LINE(708)
					bool _g3 = _this->modified = true;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(708)
					_this->pushmod = _g3;
					HX_STACK_LINE(708)
					(_this->length)++;
					HX_STACK_LINE(708)
					temp;
				}
			}
			else{
				HX_STACK_LINE(708)
				options->excludes->remove(cb);
			}
		}
		HX_STACK_LINE(709)
		this->addedToSpace();
		HX_STACK_LINE(710)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_InteractionListener_obj,cbtype_change,(void))

Void ZPP_InteractionListener_obj::swapEvent( int newev){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","swapEvent",0x2c1aef39,"zpp_nape.callbacks.ZPP_InteractionListener.swapEvent","zpp_nape/callbacks/Listener.hx",712,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newev,"newev")
		HX_STACK_LINE(721)
		this->removedFromSpace();
		HX_STACK_LINE(722)
		this->event = newev;
		HX_STACK_LINE(723)
		this->addedToSpace();
	}
return null();
}


::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::UCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::VCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::WCbSet;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::UCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::VCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::WCbType;


ZPP_InteractionListener_obj::ZPP_InteractionListener_obj()
{
}

void ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(outer_zni,"outer_zni");
	HX_MARK_MEMBER_NAME(outer_znp,"outer_znp");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(options1,"options1");
	HX_MARK_MEMBER_NAME(options2,"options2");
	HX_MARK_MEMBER_NAME(handleri,"handleri");
	HX_MARK_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_MARK_MEMBER_NAME(pure,"pure");
	HX_MARK_MEMBER_NAME(handlerp,"handlerp");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zni,"outer_zni");
	HX_VISIT_MEMBER_NAME(outer_znp,"outer_znp");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(options1,"options1");
	HX_VISIT_MEMBER_NAME(options2,"options2");
	HX_VISIT_MEMBER_NAME(handleri,"handleri");
	HX_VISIT_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_VISIT_MEMBER_NAME(pure,"pure");
	HX_VISIT_MEMBER_NAME(handlerp,"handlerp");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { return pure; }
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { return UCbSet; }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { return VCbSet; }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { return WCbSet; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { return UCbType; }
		if (HX_FIELD_EQ(inName,"VCbType") ) { return VCbType; }
		if (HX_FIELD_EQ(inName,"WCbType") ) { return WCbType; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return options1; }
		if (HX_FIELD_EQ(inName,"options2") ) { return options2; }
		if (HX_FIELD_EQ(inName,"handleri") ) { return handleri; }
		if (HX_FIELD_EQ(inName,"handlerp") ) { return handlerp; }
		if (HX_FIELD_EQ(inName,"CbSetset") ) { return CbSetset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_zni") ) { return outer_zni; }
		if (HX_FIELD_EQ(inName,"outer_znp") ) { return outer_znp; }
		if (HX_FIELD_EQ(inName,"CbTypeset") ) { return CbTypeset_dyn(); }
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"with_union") ) { return with_union_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return cbtype_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cbtype_change1") ) { return cbtype_change1_dyn(); }
		if (HX_FIELD_EQ(inName,"cbtype_change2") ) { return cbtype_change2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"with_uniquesets") ) { return with_uniquesets_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setInteractionType") ) { return setInteractionType_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return allowSleepingCallbacks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { pure=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { UCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { VCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { WCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { UCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VCbType") ) { VCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WCbType") ) { WCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { options1=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options2") ) { options2=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handleri") ) { handleri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handlerp") ) { handlerp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_zni") ) { outer_zni=inValue.Cast< ::nape::callbacks::InteractionListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_znp") ) { outer_znp=inValue.Cast< ::nape::callbacks::PreListener >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { allowSleepingCallbacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zni"));
	outFields->push(HX_CSTRING("outer_znp"));
	outFields->push(HX_CSTRING("itype"));
	outFields->push(HX_CSTRING("options1"));
	outFields->push(HX_CSTRING("options2"));
	outFields->push(HX_CSTRING("allowSleepingCallbacks"));
	outFields->push(HX_CSTRING("pure"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UCbSet"),
	HX_CSTRING("VCbSet"),
	HX_CSTRING("WCbSet"),
	HX_CSTRING("UCbType"),
	HX_CSTRING("VCbType"),
	HX_CSTRING("WCbType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::InteractionListener*/ ,(int)offsetof(ZPP_InteractionListener_obj,outer_zni),HX_CSTRING("outer_zni")},
	{hx::fsObject /*::nape::callbacks::PreListener*/ ,(int)offsetof(ZPP_InteractionListener_obj,outer_znp),HX_CSTRING("outer_znp")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionListener_obj,itype),HX_CSTRING("itype")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(ZPP_InteractionListener_obj,options1),HX_CSTRING("options1")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(ZPP_InteractionListener_obj,options2),HX_CSTRING("options2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionListener_obj,handleri),HX_CSTRING("handleri")},
	{hx::fsBool,(int)offsetof(ZPP_InteractionListener_obj,allowSleepingCallbacks),HX_CSTRING("allowSleepingCallbacks")},
	{hx::fsBool,(int)offsetof(ZPP_InteractionListener_obj,pure),HX_CSTRING("pure")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionListener_obj,handlerp),HX_CSTRING("handlerp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zni"),
	HX_CSTRING("outer_znp"),
	HX_CSTRING("itype"),
	HX_CSTRING("options1"),
	HX_CSTRING("options2"),
	HX_CSTRING("handleri"),
	HX_CSTRING("allowSleepingCallbacks"),
	HX_CSTRING("pure"),
	HX_CSTRING("handlerp"),
	HX_CSTRING("setInteractionType"),
	HX_CSTRING("wake"),
	HX_CSTRING("CbSetset"),
	HX_CSTRING("CbTypeset"),
	HX_CSTRING("with_uniquesets"),
	HX_CSTRING("with_union"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("invalidate_precedence"),
	HX_CSTRING("cbtype_change1"),
	HX_CSTRING("cbtype_change2"),
	HX_CSTRING("cbtype_change"),
	HX_CSTRING("swapEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

#endif

Class ZPP_InteractionListener_obj::__mClass;

void ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_InteractionListener"), hx::TCanCast< ZPP_InteractionListener_obj> ,sStaticFields,sMemberFields,
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

void ZPP_InteractionListener_obj::__boot()
{
	UCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	VCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	WCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	UCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	VCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	WCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
}

} // end namespace zpp_nape
} // end namespace callbacks
