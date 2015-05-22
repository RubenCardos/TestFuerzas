#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
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
namespace zpp_nape{
namespace callbacks{

Void ZPP_Callback_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","new",0xa4f50fbd,"zpp_nape.callbacks.ZPP_Callback.new","zpp_nape/callbacks/Callback.hx",174,0x948ca4f6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(435)
	this->constraint = null();
	HX_STACK_LINE(434)
	this->body = null();
	HX_STACK_LINE(413)
	this->pre_swapped = false;
	HX_STACK_LINE(412)
	this->pre_arbiter = null();
	HX_STACK_LINE(411)
	this->wrap_arbiters = null();
	HX_STACK_LINE(410)
	this->set = null();
	HX_STACK_LINE(409)
	this->int2 = null();
	HX_STACK_LINE(408)
	this->int1 = null();
	HX_STACK_LINE(227)
	this->length = (int)0;
	HX_STACK_LINE(226)
	this->prev = null();
	HX_STACK_LINE(225)
	this->next = null();
	HX_STACK_LINE(224)
	this->index = (int)0;
	HX_STACK_LINE(223)
	this->space = null();
	HX_STACK_LINE(222)
	this->listener = null();
	HX_STACK_LINE(221)
	this->event = (int)0;
	HX_STACK_LINE(177)
	this->outer_int = null();
	HX_STACK_LINE(176)
	this->outer_con = null();
	HX_STACK_LINE(175)
	this->outer_body = null();
	HX_STACK_LINE(437)
	this->length = (int)0;
}
;
	return null();
}

//ZPP_Callback_obj::~ZPP_Callback_obj() { }

Dynamic ZPP_Callback_obj::__CreateEmpty() { return  new ZPP_Callback_obj; }
hx::ObjectPtr< ZPP_Callback_obj > ZPP_Callback_obj::__new()
{  hx::ObjectPtr< ZPP_Callback_obj > result = new ZPP_Callback_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Callback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Callback_obj > result = new ZPP_Callback_obj();
	result->__construct();
	return result;}

::nape::callbacks::BodyCallback ZPP_Callback_obj::wrapper_body( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_body",0x7d8f0151,"zpp_nape.callbacks.ZPP_Callback.wrapper_body","zpp_nape/callbacks/Callback.hx",181,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	if (((this->outer_body == null()))){
		HX_STACK_LINE(186)
		::nape::callbacks::BodyCallback _g = ::nape::callbacks::BodyCallback_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		this->outer_body = _g;
		HX_STACK_LINE(190)
		this->outer_body->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(192)
	return this->outer_body;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_body,return )

::nape::callbacks::ConstraintCallback ZPP_Callback_obj::wrapper_con( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_con",0xaa77a473,"zpp_nape.callbacks.ZPP_Callback.wrapper_con","zpp_nape/callbacks/Callback.hx",194,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	if (((this->outer_con == null()))){
		HX_STACK_LINE(199)
		::nape::callbacks::ConstraintCallback _g = ::nape::callbacks::ConstraintCallback_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		this->outer_con = _g;
		HX_STACK_LINE(203)
		this->outer_con->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(205)
	return this->outer_con;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_con,return )

::nape::callbacks::InteractionCallback ZPP_Callback_obj::wrapper_int( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_int",0xaa7c3120,"zpp_nape.callbacks.ZPP_Callback.wrapper_int","zpp_nape/callbacks/Callback.hx",207,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	if (((this->outer_int == null()))){
		HX_STACK_LINE(212)
		::nape::callbacks::InteractionCallback _g = ::nape::callbacks::InteractionCallback_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		this->outer_int = _g;
		HX_STACK_LINE(216)
		this->outer_int->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		if (((this->wrap_arbiters == null()))){
			HX_STACK_LINE(218)
			::nape::dynamics::ArbiterList _g1 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(this->set->arbiters,true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			this->wrap_arbiters = _g1;
		}
		else{
			HX_STACK_LINE(218)
			this->wrap_arbiters->zpp_inner->inner = this->set->arbiters;
		}
		HX_STACK_LINE(218)
		this->wrap_arbiters->zpp_inner->zip_length = true;
		HX_STACK_LINE(218)
		this->wrap_arbiters->zpp_inner->at_ite = null();
	}
	HX_STACK_LINE(219)
	return this->outer_int;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_int,return )

Void ZPP_Callback_obj::push( ::zpp_nape::callbacks::ZPP_Callback obj){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","push",0xb2d743dd,"zpp_nape.callbacks.ZPP_Callback.push","zpp_nape/callbacks/Callback.hx",228,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(237)
		if (((this->prev != null()))){
			HX_STACK_LINE(237)
			this->prev->next = obj;
		}
		else{
			HX_STACK_LINE(238)
			this->next = obj;
		}
		HX_STACK_LINE(239)
		obj->prev = this->prev;
		HX_STACK_LINE(240)
		obj->next = null();
		HX_STACK_LINE(241)
		this->prev = obj;
		HX_STACK_LINE(242)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,push,(void))

Void ZPP_Callback_obj::push_rev( ::zpp_nape::callbacks::ZPP_Callback obj){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","push_rev",0xc1e514c1,"zpp_nape.callbacks.ZPP_Callback.push_rev","zpp_nape/callbacks/Callback.hx",244,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(253)
		if (((this->next != null()))){
			HX_STACK_LINE(253)
			this->next->prev = obj;
		}
		else{
			HX_STACK_LINE(254)
			this->prev = obj;
		}
		HX_STACK_LINE(255)
		obj->next = this->next;
		HX_STACK_LINE(256)
		obj->prev = null();
		HX_STACK_LINE(257)
		this->next = obj;
		HX_STACK_LINE(258)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,push_rev,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","pop",0xa4f69cee,"zpp_nape.callbacks.ZPP_Callback.pop","zpp_nape/callbacks/Callback.hx",260,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::zpp_nape::callbacks::ZPP_Callback ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(270)
	this->next = ret->next;
	HX_STACK_LINE(271)
	if (((this->next == null()))){
		HX_STACK_LINE(271)
		this->prev = null();
	}
	else{
		HX_STACK_LINE(272)
		this->next->prev = null();
	}
	HX_STACK_LINE(273)
	(this->length)--;
	HX_STACK_LINE(274)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,pop,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::pop_rev( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","pop_rev",0x22f4ca52,"zpp_nape.callbacks.ZPP_Callback.pop_rev","zpp_nape/callbacks/Callback.hx",276,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	::zpp_nape::callbacks::ZPP_Callback ret = this->prev;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(286)
	this->prev = ret->prev;
	HX_STACK_LINE(287)
	if (((this->prev == null()))){
		HX_STACK_LINE(287)
		this->next = null();
	}
	else{
		HX_STACK_LINE(288)
		this->prev->next = null();
	}
	HX_STACK_LINE(289)
	(this->length)--;
	HX_STACK_LINE(290)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,pop_rev,return )

bool ZPP_Callback_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","empty",0x6ecfcb2a,"zpp_nape.callbacks.ZPP_Callback.empty","zpp_nape/callbacks/Callback.hx",293,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,empty,return )

Void ZPP_Callback_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","clear",0x4751022a,"zpp_nape.callbacks.ZPP_Callback.clear","zpp_nape/callbacks/Callback.hx",296,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		while((true)){
			HX_STACK_LINE(296)
			if ((!((!(this->empty()))))){
				HX_STACK_LINE(296)
				break;
			}
			HX_STACK_LINE(296)
			this->pop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,clear,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::splice( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","splice",0xd7877e3f,"zpp_nape.callbacks.ZPP_Callback.splice","zpp_nape/callbacks/Callback.hx",298,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(299)
	::zpp_nape::callbacks::ZPP_Callback ret = o->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(300)
	if (((o->prev == null()))){
		HX_STACK_LINE(301)
		this->next = o->next;
		HX_STACK_LINE(302)
		if (((this->next != null()))){
			HX_STACK_LINE(302)
			this->next->prev = null();
		}
		else{
			HX_STACK_LINE(303)
			this->prev = null();
		}
	}
	else{
		HX_STACK_LINE(306)
		o->prev->next = o->next;
		HX_STACK_LINE(307)
		if (((o->next != null()))){
			HX_STACK_LINE(307)
			o->next->prev = o->prev;
		}
		else{
			HX_STACK_LINE(308)
			this->prev = o->prev;
		}
	}
	HX_STACK_LINE(310)
	(this->length)--;
	HX_STACK_LINE(311)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,splice,return )

Void ZPP_Callback_obj::rotateL( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rotateL",0xc50dfb6e,"zpp_nape.callbacks.ZPP_Callback.rotateL","zpp_nape/callbacks/Callback.hx",313,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		::zpp_nape::callbacks::ZPP_Callback _g = this->pop();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		this->push(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,rotateL,(void))

Void ZPP_Callback_obj::rotateR( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rotateR",0xc50dfb74,"zpp_nape.callbacks.ZPP_Callback.rotateR","zpp_nape/callbacks/Callback.hx",316,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		::zpp_nape::callbacks::ZPP_Callback _g = this->pop_rev();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		this->push_rev(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,rotateR,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::cycleNext( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","cycleNext",0x71c65bd6,"zpp_nape.callbacks.ZPP_Callback.cycleNext","zpp_nape/callbacks/Callback.hx",328,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(328)
	if (((o->next == null()))){
		HX_STACK_LINE(328)
		return this->next;
	}
	else{
		HX_STACK_LINE(329)
		return o->next;
	}
	HX_STACK_LINE(328)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,cycleNext,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::cyclePrev( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","cyclePrev",0x732295d6,"zpp_nape.callbacks.ZPP_Callback.cyclePrev","zpp_nape/callbacks/Callback.hx",340,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(340)
	if (((o->prev == null()))){
		HX_STACK_LINE(340)
		return this->prev;
	}
	else{
		HX_STACK_LINE(341)
		return o->prev;
	}
	HX_STACK_LINE(340)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,cyclePrev,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::at( int i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","at",0xdd26f036,"zpp_nape.callbacks.ZPP_Callback.at","zpp_nape/callbacks/Callback.hx",343,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(352)
	::zpp_nape::callbacks::ZPP_Callback ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(353)
	while((true)){
		HX_STACK_LINE(353)
		int _g = (i)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(353)
		if ((!(((_g != (int)0))))){
			HX_STACK_LINE(353)
			break;
		}
		HX_STACK_LINE(353)
		ret = ret->next;
	}
	HX_STACK_LINE(354)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,at,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::rev_at( int i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rev_at",0x22584a52,"zpp_nape.callbacks.ZPP_Callback.rev_at","zpp_nape/callbacks/Callback.hx",356,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(365)
	::zpp_nape::callbacks::ZPP_Callback ret = this->prev;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(366)
	while((true)){
		HX_STACK_LINE(366)
		int _g = (i)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(366)
		if ((!(((_g != (int)0))))){
			HX_STACK_LINE(366)
			break;
		}
		HX_STACK_LINE(366)
		ret = ret->prev;
	}
	HX_STACK_LINE(367)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,rev_at,return )

Void ZPP_Callback_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","free",0xac38ceaf,"zpp_nape.callbacks.ZPP_Callback.free","zpp_nape/callbacks/Callback.hx",395,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		::zpp_nape::phys::ZPP_Interactor _g = this->int2 = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(396)
		this->int1 = _g;
		HX_STACK_LINE(397)
		this->body = null();
		HX_STACK_LINE(398)
		this->constraint = null();
		HX_STACK_LINE(399)
		this->listener = null();
		HX_STACK_LINE(400)
		if (((this->wrap_arbiters != null()))){
			HX_STACK_LINE(401)
			this->wrap_arbiters->zpp_inner->inner = null();
		}
		HX_STACK_LINE(403)
		this->set = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,free,(void))

Void ZPP_Callback_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","alloc",0x20893512,"zpp_nape.callbacks.ZPP_Callback.alloc","zpp_nape/callbacks/Callback.hx",407,0x948ca4f6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,alloc,(void))

Void ZPP_Callback_obj::genarbs( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","genarbs",0x87a7436f,"zpp_nape.callbacks.ZPP_Callback.genarbs","zpp_nape/callbacks/Callback.hx",416,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		if (((this->wrap_arbiters == null()))){
			HX_STACK_LINE(426)
			::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(this->set->arbiters,true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(426)
			this->wrap_arbiters = _g;
		}
		else{
			HX_STACK_LINE(429)
			this->wrap_arbiters->zpp_inner->inner = this->set->arbiters;
		}
		HX_STACK_LINE(431)
		this->wrap_arbiters->zpp_inner->zip_length = true;
		HX_STACK_LINE(432)
		this->wrap_arbiters->zpp_inner->at_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,genarbs,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::zpp_pool;


ZPP_Callback_obj::ZPP_Callback_obj()
{
}

void ZPP_Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Callback);
	HX_MARK_MEMBER_NAME(outer_body,"outer_body");
	HX_MARK_MEMBER_NAME(outer_con,"outer_con");
	HX_MARK_MEMBER_NAME(outer_int,"outer_int");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(set,"set");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(pre_arbiter,"pre_arbiter");
	HX_MARK_MEMBER_NAME(pre_swapped,"pre_swapped");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_END_CLASS();
}

void ZPP_Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_body,"outer_body");
	HX_VISIT_MEMBER_NAME(outer_con,"outer_con");
	HX_VISIT_MEMBER_NAME(outer_int,"outer_int");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(set,"set");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(pre_arbiter,"pre_arbiter");
	HX_VISIT_MEMBER_NAME(pre_swapped,"pre_swapped");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
}

Dynamic ZPP_Callback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"rev_at") ) { return rev_at_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pop_rev") ) { return pop_rev_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateL") ) { return rotateL_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateR") ) { return rotateR_dyn(); }
		if (HX_FIELD_EQ(inName,"genarbs") ) { return genarbs_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		if (HX_FIELD_EQ(inName,"push_rev") ) { return push_rev_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_con") ) { return outer_con; }
		if (HX_FIELD_EQ(inName,"outer_int") ) { return outer_int; }
		if (HX_FIELD_EQ(inName,"cycleNext") ) { return cycleNext_dyn(); }
		if (HX_FIELD_EQ(inName,"cyclePrev") ) { return cyclePrev_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"outer_body") ) { return outer_body; }
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrapper_con") ) { return wrapper_con_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapper_int") ) { return wrapper_int_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_arbiter") ) { return pre_arbiter; }
		if (HX_FIELD_EQ(inName,"pre_swapped") ) { return pre_swapped; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrapper_body") ) { return wrapper_body_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Callback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_con") ) { outer_con=inValue.Cast< ::nape::callbacks::ConstraintCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_int") ) { outer_int=inValue.Cast< ::nape::callbacks::InteractionCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"outer_body") ) { outer_body=inValue.Cast< ::nape::callbacks::BodyCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pre_arbiter") ) { pre_arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_swapped") ) { pre_swapped=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_body"));
	outFields->push(HX_CSTRING("outer_con"));
	outFields->push(HX_CSTRING("outer_int"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("listener"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("set"));
	outFields->push(HX_CSTRING("wrap_arbiters"));
	outFields->push(HX_CSTRING("pre_arbiter"));
	outFields->push(HX_CSTRING("pre_swapped"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("constraint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::BodyCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_body),HX_CSTRING("outer_body")},
	{hx::fsObject /*::nape::callbacks::ConstraintCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_con),HX_CSTRING("outer_con")},
	{hx::fsObject /*::nape::callbacks::InteractionCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_int),HX_CSTRING("outer_int")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,event),HX_CSTRING("event")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Listener*/ ,(int)offsetof(ZPP_Callback_obj,listener),HX_CSTRING("listener")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Callback_obj,space),HX_CSTRING("space")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,index),HX_CSTRING("index")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(ZPP_Callback_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(ZPP_Callback_obj,prev),HX_CSTRING("prev")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_Callback_obj,int1),HX_CSTRING("int1")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_Callback_obj,int2),HX_CSTRING("int2")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CallbackSet*/ ,(int)offsetof(ZPP_Callback_obj,set),HX_CSTRING("set")},
	{hx::fsObject /*::nape::dynamics::ArbiterList*/ ,(int)offsetof(ZPP_Callback_obj,wrap_arbiters),HX_CSTRING("wrap_arbiters")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_Callback_obj,pre_arbiter),HX_CSTRING("pre_arbiter")},
	{hx::fsBool,(int)offsetof(ZPP_Callback_obj,pre_swapped),HX_CSTRING("pre_swapped")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Callback_obj,body),HX_CSTRING("body")},
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(ZPP_Callback_obj,constraint),HX_CSTRING("constraint")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_body"),
	HX_CSTRING("outer_con"),
	HX_CSTRING("outer_int"),
	HX_CSTRING("wrapper_body"),
	HX_CSTRING("wrapper_con"),
	HX_CSTRING("wrapper_int"),
	HX_CSTRING("event"),
	HX_CSTRING("listener"),
	HX_CSTRING("space"),
	HX_CSTRING("index"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("length"),
	HX_CSTRING("push"),
	HX_CSTRING("push_rev"),
	HX_CSTRING("pop"),
	HX_CSTRING("pop_rev"),
	HX_CSTRING("empty"),
	HX_CSTRING("clear"),
	HX_CSTRING("splice"),
	HX_CSTRING("rotateL"),
	HX_CSTRING("rotateR"),
	HX_CSTRING("cycleNext"),
	HX_CSTRING("cyclePrev"),
	HX_CSTRING("at"),
	HX_CSTRING("rev_at"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("int1"),
	HX_CSTRING("int2"),
	HX_CSTRING("set"),
	HX_CSTRING("wrap_arbiters"),
	HX_CSTRING("pre_arbiter"),
	HX_CSTRING("pre_swapped"),
	HX_CSTRING("genarbs"),
	HX_CSTRING("body"),
	HX_CSTRING("constraint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Callback_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Callback_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Callback_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Callback_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_Callback_obj::__mClass;

void ZPP_Callback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_Callback"), hx::TCanCast< ZPP_Callback_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Callback_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
