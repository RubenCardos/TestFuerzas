#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
namespace nape{
namespace dynamics{

Void ArbiterList_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ArbiterList","new",0xbcb70d25,"nape.dynamics.ArbiterList.new","nape/dynamics/ArbiterList.hx",234,0xfd301dcb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(696)
	this->zpp_inner = _g;
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ArbiterList_obj::~ArbiterList_obj() { }

Dynamic ArbiterList_obj::__CreateEmpty() { return  new ArbiterList_obj; }
hx::ObjectPtr< ArbiterList_obj > ArbiterList_obj::__new()
{  hx::ObjectPtr< ArbiterList_obj > result = new ArbiterList_obj();
	result->__construct();
	return result;}

Dynamic ArbiterList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArbiterList_obj > result = new ArbiterList_obj();
	result->__construct();
	return result;}

int ArbiterList_obj::get_length( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","get_length",0x4c1d1a8a,"nape.dynamics.ArbiterList.get_length","nape/dynamics/ArbiterList.hx",264,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	return this->zpp_gl();
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,get_length,return )

int ArbiterList_obj::zpp_gl( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","zpp_gl",0x9d3c9fe5,"nape.dynamics.ArbiterList.zpp_gl","nape/dynamics/ArbiterList.hx",269,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	this->zpp_inner->valmod();
	HX_STACK_LINE(271)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(272)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(274)
			this->zpp_inner->user_length = (int)0;
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(276)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(277)
				while((true)){
					HX_STACK_LINE(277)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(278)
					::zpp_nape::dynamics::ZPP_Arbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(279)
					if ((i->active)){
						HX_STACK_LINE(279)
						(this->zpp_inner->user_length)++;
					}
					HX_STACK_LINE(280)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(286)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,zpp_gl,return )

Void ArbiterList_obj::zpp_vm( ){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","zpp_vm",0x9d3cacf7,"nape.dynamics.ArbiterList.zpp_vm","nape/dynamics/ArbiterList.hx",292,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		this->zpp_inner->valmod();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,zpp_vm,(void))

bool ArbiterList_obj::has( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","has",0xbcb27c1f,"nape.dynamics.ArbiterList.has","nape/dynamics/ArbiterList.hx",346,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(348)
	this->zpp_vm();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,has,return )

::nape::dynamics::Arbiter ArbiterList_obj::at( int index){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","at",0xbbf797ce,"nape.dynamics.ArbiterList.at","nape/dynamics/ArbiterList.hx",363,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(365)
	this->zpp_vm();
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(370)
		int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		int _g2 = (_g1 - index);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(370)
		index = _g2;
	}
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(384)
		if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
			HX_STACK_LINE(385)
			this->zpp_inner->at_index = (int)0;
			HX_STACK_LINE(386)
			this->zpp_inner->at_ite = this->zpp_inner->inner->head;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Arbiter x = this->zpp_inner->at_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				if ((x->active)){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			if ((!(((this->zpp_inner->at_index != index))))){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(395)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Arbiter x = this->zpp_inner->at_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				if ((x->active)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->elt->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,at,return )

bool ArbiterList_obj::push( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","push",0x64d30175,"nape.dynamics.ArbiterList.push","nape/dynamics/ArbiterList.hx",416,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(422)
	this->zpp_vm();
	HX_STACK_LINE(424)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(424)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(424)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(424)
		cont = true;
	}
	HX_STACK_LINE(425)
	if ((cont)){
		HX_STACK_LINE(426)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(426)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(428)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(428)
				if ((this->empty())){
					HX_STACK_LINE(428)
					_g2 = null();
				}
				else{
					HX_STACK_LINE(428)
					int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(428)
					int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(428)
					_g2 = this->zpp_inner->inner->iterator_at(_g1);
				}
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = _g2;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter _g3 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = _g3;
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,push,return )

bool ArbiterList_obj::unshift( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","unshift",0x1b5566ce,"nape.dynamics.ArbiterList.unshift","nape/dynamics/ArbiterList.hx",447,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(453)
	this->zpp_vm();
	HX_STACK_LINE(455)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(455)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(455)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(455)
		cont = true;
	}
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(458)
				if ((this->empty())){
					HX_STACK_LINE(458)
					_g2 = null();
				}
				else{
					HX_STACK_LINE(458)
					int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(458)
					int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(458)
					_g2 = this->zpp_inner->inner->iterator_at(_g1);
				}
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = _g2;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter _g3 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(459)
			this->zpp_inner->push_ite = _g3;
		}
		else{
			HX_STACK_LINE(461)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(462)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(463)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,unshift,return )

::nape::dynamics::Arbiter ArbiterList_obj::pop( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","pop",0xbcb89a56,"nape.dynamics.ArbiterList.pop","nape/dynamics/ArbiterList.hx",478,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(487)
	this->zpp_vm();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(492)
		::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(493)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(494)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(494)
			this->zpp_inner->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(497)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(498)
		int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(498)
		if (((_g == (int)1))){
			HX_STACK_LINE(498)
			ite = null();
		}
		else{
			HX_STACK_LINE(498)
			int _g1 = this->zpp_gl();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			int _g2 = (_g1 - (int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(498)
			ite = this->zpp_inner->inner->iterator_at(_g2);
		}
		HX_STACK_LINE(499)
		if (((ite == null()))){
			HX_STACK_LINE(499)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(499)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(500)
		::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(501)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(502)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(502)
			this->zpp_inner->inner->erase(ite);
		}
	}
	HX_STACK_LINE(504)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(505)
	::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,pop,return )

::nape::dynamics::Arbiter ArbiterList_obj::shift( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","shift",0x8562a487,"nape.dynamics.ArbiterList.shift","nape/dynamics/ArbiterList.hx",519,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(528)
	this->zpp_vm();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(533)
		int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(533)
		if (((_g == (int)1))){
			HX_STACK_LINE(533)
			ite = null();
		}
		else{
			HX_STACK_LINE(533)
			int _g1 = this->zpp_gl();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(533)
			int _g2 = (_g1 - (int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(533)
			ite = this->zpp_inner->inner->iterator_at(_g2);
		}
		HX_STACK_LINE(534)
		if (((ite == null()))){
			HX_STACK_LINE(534)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(534)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(535)
		::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(536)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(537)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(537)
			this->zpp_inner->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(540)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(541)
		::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(542)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(543)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(543)
			this->zpp_inner->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(546)
	::nape::dynamics::Arbiter retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,shift,return )

bool ArbiterList_obj::add( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","add",0xbcad2ee6,"nape.dynamics.ArbiterList.add","nape/dynamics/ArbiterList.hx",564,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(564)
		return this->push(obj);
	}
	else{
		HX_STACK_LINE(564)
		return this->unshift(obj);
	}
	HX_STACK_LINE(564)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,add,return )

bool ArbiterList_obj::remove( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","remove",0x1309e89f,"nape.dynamics.ArbiterList.remove","nape/dynamics/ArbiterList.hx",576,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(582)
	this->zpp_vm();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(592)
				if (((x == obj->zpp_inner))){
					HX_STACK_LINE(593)
					ret = true;
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	if ((ret)){
		HX_STACK_LINE(602)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(602)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(603)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(603)
			this->zpp_inner->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(604)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,remove,return )

Void ArbiterList_obj::clear( ){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","clear",0x519b2992,"nape.dynamics.ArbiterList.clear","nape/dynamics/ArbiterList.hx",618,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				if ((!((!(this->empty()))))){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				if ((!((!(this->empty()))))){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,clear,(void))

bool ArbiterList_obj::empty( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","empty",0x7919f292,"nape.dynamics.ArbiterList.empty","nape/dynamics/ArbiterList.hx",631,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(634)
	int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(634)
	return (_g == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,empty,return )

::nape::dynamics::ArbiterIterator ArbiterList_obj::iterator( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","iterator",0x3e4ba309,"nape.dynamics.ArbiterList.iterator","nape/dynamics/ArbiterList.hx",647,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(649)
	this->zpp_vm();
	HX_STACK_LINE(651)
	return ::nape::dynamics::ArbiterIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,iterator,return )

::nape::dynamics::ArbiterList ArbiterList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.dynamics.ArbiterList","copy",0x5c36ab50,"nape.dynamics.ArbiterList.copy","nape/dynamics/ArbiterList.hx",662,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::dynamics::ArbiterList ret = ::nape::dynamics::ArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::dynamics::ArbiterIterator _g = this->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",664,0xfd301dcb)
						{
							HX_STACK_LINE(664)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(664)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(664)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",664,0xfd301dcb)
									{
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(664)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(664)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(664)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(664)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(664)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Arbiter i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(664)
					i = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(664)
				ret->push((  ((deep)) ? ::nape::dynamics::Arbiter(null()) : ::nape::dynamics::Arbiter(i) ));
			}
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,copy,return )

Void ArbiterList_obj::merge( ::nape::dynamics::ArbiterList xs){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","merge",0x0f065abd,"nape.dynamics.ArbiterList.merge","nape/dynamics/ArbiterList.hx",688,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(688)
		::nape::dynamics::ArbiterIterator _g = xs->iterator();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",688,0xfd301dcb)
					{
						HX_STACK_LINE(688)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(688)
						int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(688)
						_g->zpp_critical = true;
						struct _Function_3_1{
							inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",688,0xfd301dcb)
								{
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
										HX_STACK_LINE(688)
										::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(688)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(688)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(688)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(688)
			if ((!(_Function_2_1::Block(_g)))){
				HX_STACK_LINE(688)
				break;
			}
			HX_STACK_LINE(688)
			::nape::dynamics::Arbiter x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				_g->zpp_critical = false;
				HX_STACK_LINE(688)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(688)
				x = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(689)
			if ((!(this->has(x)))){
				HX_STACK_LINE(689)
				this->add(x);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,merge,(void))

::String ArbiterList_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","toString",0xe32029c7,"nape.dynamics.ArbiterList.toString","nape/dynamics/ArbiterList.hx",702,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::dynamics::ArbiterIterator _g = this->iterator();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",705,0xfd301dcb)
					{
						HX_STACK_LINE(705)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(705)
						int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(705)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",705,0xfd301dcb)
								{
									HX_STACK_LINE(705)
									{
										HX_STACK_LINE(705)
										_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
										HX_STACK_LINE(705)
										::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(705)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(705)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(705)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(705)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Arbiter i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(705)
				i = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(706)
			if ((!(fst))){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(707)
			::String _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			if (((i == null()))){
				HX_STACK_LINE(707)
				_g1 = HX_CSTRING("NULL");
			}
			else{
				HX_STACK_LINE(707)
				_g1 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,_g1);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,toString,return )

::nape::dynamics::ArbiterList ArbiterList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","foreach",0x7c8680cf,"nape.dynamics.ArbiterList.foreach","nape/dynamics/ArbiterList.hx",732,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(736)
	::nape::dynamics::ArbiterIterator it = this->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		struct _Function_2_1{
			inline static bool Block( ::nape::dynamics::ArbiterIterator &it){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",737,0xfd301dcb)
				{
					HX_STACK_LINE(737)
					it->zpp_inner->zpp_inner->valmod();
					HX_STACK_LINE(737)
					int length = it->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(737)
					it->zpp_critical = true;
					struct _Function_3_1{
						inline static bool Block( ::nape::dynamics::ArbiterIterator &it){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ArbiterList.hx",737,0xfd301dcb)
							{
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									it->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
									HX_STACK_LINE(737)
									::nape::dynamics::ArbiterIterator_obj::zpp_pool = it;
									HX_STACK_LINE(737)
									it->zpp_inner = null();
								}
								HX_STACK_LINE(737)
								return false;
							}
							return null();
						}
					};
					HX_STACK_LINE(737)
					return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(it)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(737)
		if ((!(_Function_2_1::Block(it)))){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::dynamics::Arbiter _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int _g = (it->zpp_i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(739)
				_g1 = it->zpp_inner->at(_g);
			}
			HX_STACK_LINE(739)
			lambda(_g1).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::dynamics::ArbiterIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,foreach,return )

::nape::dynamics::ArbiterList ArbiterList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","filter",0x93b66c13,"nape.dynamics.ArbiterList.filter","nape/dynamics/ArbiterList.hx",779,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(784)
		if ((!(((i < _g))))){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		::nape::dynamics::Arbiter x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				this->remove(x);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,filter,return )

::nape::dynamics::ArbiterList ArbiterList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","fromArray",0x8a94f654,"nape.dynamics.ArbiterList.fromArray","nape/dynamics/ArbiterList.hx",304,0xfd301dcb)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(310)
	::nape::dynamics::ArbiterList ret = ::nape::dynamics::ArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			if ((!(((_g < array->length))))){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::dynamics::Arbiter i = array->__get(_g).StaticCast< ::nape::dynamics::Arbiter >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,fromArray,return )


ArbiterList_obj::ArbiterList_obj()
{
}

void ArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArbiterList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ArbiterList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArbiterList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ArbiterList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ArbiterList*/ ,(int)offsetof(ArbiterList_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_length"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("has"),
	HX_CSTRING("at"),
	HX_CSTRING("push"),
	HX_CSTRING("unshift"),
	HX_CSTRING("pop"),
	HX_CSTRING("shift"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("empty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("copy"),
	HX_CSTRING("merge"),
	HX_CSTRING("toString"),
	HX_CSTRING("foreach"),
	HX_CSTRING("filter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterList_obj::__mClass,"__mClass");
};

#endif

Class ArbiterList_obj::__mClass;

void ArbiterList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.ArbiterList"), hx::TCanCast< ArbiterList_obj> ,sStaticFields,sMemberFields,
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

void ArbiterList_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
