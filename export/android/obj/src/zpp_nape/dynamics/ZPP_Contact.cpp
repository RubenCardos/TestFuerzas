#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_Contact_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","new",0xb5c4a1f4,"zpp_nape.dynamics.ZPP_Contact.new","zpp_nape/dynamics/Contact.hx",174,0xe7cc00d7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(282)
	this->length = (int)0;
	HX_STACK_LINE(281)
	this->pushmod = false;
	HX_STACK_LINE(280)
	this->modified = false;
	HX_STACK_LINE(279)
	this->_inuse = false;
	HX_STACK_LINE(268)
	this->next = null();
	HX_STACK_LINE(232)
	this->elasticity = 0.0;
	HX_STACK_LINE(231)
	this->dist = 0.0;
	HX_STACK_LINE(230)
	this->fresh = false;
	HX_STACK_LINE(229)
	this->hash = (int)0;
	HX_STACK_LINE(228)
	this->stamp = (int)0;
	HX_STACK_LINE(227)
	this->posOnly = false;
	HX_STACK_LINE(226)
	this->active = false;
	HX_STACK_LINE(225)
	this->inner = null();
	HX_STACK_LINE(224)
	this->arbiter = null();
	HX_STACK_LINE(213)
	this->wrap_position = null();
	HX_STACK_LINE(187)
	this->py = 0.0;
	HX_STACK_LINE(186)
	this->px = 0.0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(234)
	::zpp_nape::dynamics::ZPP_IContact _g = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(234)
	this->inner = _g;
}
;
	return null();
}

//ZPP_Contact_obj::~ZPP_Contact_obj() { }

Dynamic ZPP_Contact_obj::__CreateEmpty() { return  new ZPP_Contact_obj; }
hx::ObjectPtr< ZPP_Contact_obj > ZPP_Contact_obj::__new()
{  hx::ObjectPtr< ZPP_Contact_obj > result = new ZPP_Contact_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Contact_obj > result = new ZPP_Contact_obj();
	result->__construct();
	return result;}

::nape::dynamics::Contact ZPP_Contact_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","wrapper",0x316000e7,"zpp_nape.dynamics.ZPP_Contact.wrapper","zpp_nape/dynamics/Contact.hx",177,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	if (((this->outer == null()))){
		HX_STACK_LINE(179)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = true;
		HX_STACK_LINE(180)
		::nape::dynamics::Contact _g = ::nape::dynamics::Contact_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		this->outer = _g;
		HX_STACK_LINE(181)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = false;
		HX_STACK_LINE(182)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(184)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,wrapper,return )

Void ZPP_Contact_obj::position_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","position_validate",0xb6a936c0,"zpp_nape.dynamics.ZPP_Contact.position_validate","zpp_nape/dynamics/Contact.hx",192,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		this->wrap_position->zpp_inner->x = this->px;
		HX_STACK_LINE(194)
		this->wrap_position->zpp_inner->y = this->py;
		HX_STACK_LINE(203)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,position_validate,(void))

Void ZPP_Contact_obj::getposition( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","getposition",0xc6f72cd3,"zpp_nape.dynamics.ZPP_Contact.getposition","zpp_nape/dynamics/Contact.hx",214,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		::zpp_nape::dynamics::ZPP_Contact me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(216)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(216)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(216)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(216)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(216)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(216)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				ret = _g;
			}
			else{
				HX_STACK_LINE(216)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(216)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(216)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(216)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(216)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(216)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(216)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(216)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(216)
							ret1->next = null();
						}
						HX_STACK_LINE(216)
						ret1->weak = false;
					}
					HX_STACK_LINE(216)
					ret1->_immutable = immutable;
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						ret1->x = x;
						HX_STACK_LINE(216)
						ret1->y = y;
						HX_STACK_LINE(216)
						{
						}
					}
					HX_STACK_LINE(216)
					_g2 = ret1;
				}
				HX_STACK_LINE(216)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(216)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(216)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(216)
							_this->_validate();
						}
					}
					HX_STACK_LINE(216)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Contact.hx",216,0xe7cc00d7)
						{
							HX_STACK_LINE(216)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								{
									HX_STACK_LINE(216)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(216)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(216)
										_this->_validate();
									}
								}
								HX_STACK_LINE(216)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(216)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(216)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(216)
						{
						}
					}
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(216)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(216)
				ret;
			}
			HX_STACK_LINE(216)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(216)
			_g5 = ret;
		}
		HX_STACK_LINE(216)
		this->wrap_position = _g5;
		HX_STACK_LINE(217)
		this->wrap_position->zpp_inner->_inuse = true;
		HX_STACK_LINE(218)
		this->wrap_position->zpp_inner->_immutable = true;
		HX_STACK_LINE(219)
		this->wrap_position->zpp_inner->_validate = this->position_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,getposition,(void))

bool ZPP_Contact_obj::inactiveme( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inactiveme",0x80dab06f,"zpp_nape.dynamics.ZPP_Contact.inactiveme","zpp_nape/dynamics/Contact.hx",222,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	return !(((bool((bool(this->active) && bool((this->arbiter != null())))) && bool(!((!(this->arbiter->active)))))));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inactiveme,return )

Void ZPP_Contact_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","free",0x51092c98,"zpp_nape.dynamics.ZPP_Contact.free","zpp_nape/dynamics/Contact.hx",239,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->arbiter = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,free,(void))

Void ZPP_Contact_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","alloc",0xb20b0309,"zpp_nape.dynamics.ZPP_Contact.alloc","zpp_nape/dynamics/Contact.hx",243,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,alloc,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","elem",0x505b687b,"zpp_nape.dynamics.ZPP_Contact.elem","zpp_nape/dynamics/Contact.hx",272,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,elem,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","begin",0x40cd48bd,"zpp_nape.dynamics.ZPP_Contact.begin","zpp_nape/dynamics/Contact.hx",277,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,begin,return )

Void ZPP_Contact_obj::setbegin( ::zpp_nape::dynamics::ZPP_Contact i){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","setbegin",0x8327d933,"zpp_nape.dynamics.ZPP_Contact.setbegin","zpp_nape/dynamics/Contact.hx",285,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(286)
		this->next = i;
		HX_STACK_LINE(287)
		this->modified = true;
		HX_STACK_LINE(288)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","add",0xb5bac3b5,"zpp_nape.dynamics.ZPP_Contact.add","zpp_nape/dynamics/Contact.hx",291,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(291)
	::zpp_nape::dynamics::ZPP_Contact temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		o->_inuse = true;
		HX_STACK_LINE(291)
		temp = o;
	}
	HX_STACK_LINE(291)
	temp->next = this->next;
	HX_STACK_LINE(291)
	this->next = temp;
	HX_STACK_LINE(291)
	this->modified = true;
	HX_STACK_LINE(291)
	(this->length)++;
	HX_STACK_LINE(291)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,add,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_add",0xb1e8d221,"zpp_nape.dynamics.ZPP_Contact.inlined_add","zpp_nape/dynamics/Contact.hx",295,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(304)
	::zpp_nape::dynamics::ZPP_Contact temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(305)
		o->_inuse = true;
		HX_STACK_LINE(306)
		temp = o;
	}
	HX_STACK_LINE(308)
	temp->next = this->next;
	HX_STACK_LINE(309)
	this->next = temp;
	HX_STACK_LINE(310)
	this->modified = true;
	HX_STACK_LINE(311)
	(this->length)++;
	HX_STACK_LINE(312)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_add,return )

Void ZPP_Contact_obj::addAll( ::zpp_nape::dynamics::ZPP_Contact x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","addAll",0x76f66c6c,"zpp_nape.dynamics.ZPP_Contact.addAll","zpp_nape/dynamics/Contact.hx",323,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(324)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(326)
			::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(327)
			this->add(i);
			HX_STACK_LINE(328)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","insert",0x75d8a625,"zpp_nape.dynamics.ZPP_Contact.insert","zpp_nape/dynamics/Contact.hx",333,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(333)
	::zpp_nape::dynamics::ZPP_Contact temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(333)
		o->_inuse = true;
		HX_STACK_LINE(333)
		temp = o;
	}
	HX_STACK_LINE(333)
	if (((cur == null()))){
		HX_STACK_LINE(333)
		temp->next = this->next;
		HX_STACK_LINE(333)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(333)
		temp->next = cur->next;
		HX_STACK_LINE(333)
		cur->next = temp;
	}
	HX_STACK_LINE(333)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(333)
	this->pushmod = _g;
	HX_STACK_LINE(333)
	(this->length)++;
	HX_STACK_LINE(333)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,insert,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_insert",0x52ca6339,"zpp_nape.dynamics.ZPP_Contact.inlined_insert","zpp_nape/dynamics/Contact.hx",337,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(346)
	::zpp_nape::dynamics::ZPP_Contact temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(347)
		o->_inuse = true;
		HX_STACK_LINE(348)
		temp = o;
	}
	HX_STACK_LINE(350)
	if (((cur == null()))){
		HX_STACK_LINE(351)
		temp->next = this->next;
		HX_STACK_LINE(352)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(355)
		temp->next = cur->next;
		HX_STACK_LINE(356)
		cur->next = temp;
	}
	HX_STACK_LINE(358)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(358)
	this->pushmod = _g;
	HX_STACK_LINE(359)
	(this->length)++;
	HX_STACK_LINE(360)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,inlined_insert,return )

Void ZPP_Contact_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","pop",0xb5c62f25,"zpp_nape.dynamics.ZPP_Contact.pop","zpp_nape/dynamics/Contact.hx",363,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(363)
		this->next = ret->next;
		HX_STACK_LINE(363)
		ret->_inuse = false;
		HX_STACK_LINE(363)
		if (((this->next == null()))){
			HX_STACK_LINE(363)
			this->pushmod = true;
		}
		HX_STACK_LINE(363)
		this->modified = true;
		HX_STACK_LINE(363)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop,(void))

Void ZPP_Contact_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_pop",0xb1f43d91,"zpp_nape.dynamics.ZPP_Contact.inlined_pop","zpp_nape/dynamics/Contact.hx",367,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(377)
		this->next = ret->next;
		HX_STACK_LINE(379)
		ret->_inuse = false;
		HX_STACK_LINE(382)
		if (((this->next == null()))){
			HX_STACK_LINE(382)
			this->pushmod = true;
		}
		HX_STACK_LINE(383)
		this->modified = true;
		HX_STACK_LINE(384)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","pop_unsafe",0x8ed1c540,"zpp_nape.dynamics.ZPP_Contact.pop_unsafe","zpp_nape/dynamics/Contact.hx",387,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(387)
	this->pop();
	HX_STACK_LINE(387)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_pop_unsafe",0x77e99c54,"zpp_nape.dynamics.ZPP_Contact.inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",391,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(401)
	this->pop();
	HX_STACK_LINE(402)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop_unsafe,return )

Void ZPP_Contact_obj::remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","remove",0xdc83ff30,"zpp_nape.dynamics.ZPP_Contact.remove","zpp_nape/dynamics/Contact.hx",413,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(413)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(413)
		::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(413)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(413)
		while((true)){
			HX_STACK_LINE(413)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(413)
			if (((cur == obj))){
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(413)
					::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(413)
					if (((pre == null()))){
						HX_STACK_LINE(413)
						old = this->next;
						HX_STACK_LINE(413)
						ret1 = old->next;
						HX_STACK_LINE(413)
						this->next = ret1;
						HX_STACK_LINE(413)
						if (((this->next == null()))){
							HX_STACK_LINE(413)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(413)
						old = pre->next;
						HX_STACK_LINE(413)
						ret1 = old->next;
						HX_STACK_LINE(413)
						pre->next = ret1;
						HX_STACK_LINE(413)
						if (((ret1 == null()))){
							HX_STACK_LINE(413)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(413)
					old->_inuse = false;
					HX_STACK_LINE(413)
					this->modified = true;
					HX_STACK_LINE(413)
					(this->length)--;
					HX_STACK_LINE(413)
					this->pushmod = true;
					HX_STACK_LINE(413)
					ret1;
				}
				HX_STACK_LINE(413)
				ret = true;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(413)
			pre = cur;
			HX_STACK_LINE(413)
			cur = cur->next;
		}
		HX_STACK_LINE(413)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,remove,(void))

bool ZPP_Contact_obj::try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","try_remove",0xa5fbfaf4,"zpp_nape.dynamics.ZPP_Contact.try_remove","zpp_nape/dynamics/Contact.hx",415,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(424)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(425)
	::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(426)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(427)
	while((true)){
		HX_STACK_LINE(427)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(427)
			break;
		}
		HX_STACK_LINE(428)
		if (((cur == obj))){
			HX_STACK_LINE(429)
			this->erase(pre);
			HX_STACK_LINE(430)
			ret = true;
			HX_STACK_LINE(431)
			break;
		}
		HX_STACK_LINE(433)
		pre = cur;
		HX_STACK_LINE(434)
		cur = cur->next;
	}
	HX_STACK_LINE(436)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,try_remove,return )

Void ZPP_Contact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_remove",0xb975bc44,"zpp_nape.dynamics.ZPP_Contact.inlined_remove","zpp_nape/dynamics/Contact.hx",449,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(449)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(449)
		::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(449)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(449)
		while((true)){
			HX_STACK_LINE(449)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			if (((cur == obj))){
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(449)
					::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(449)
					if (((pre == null()))){
						HX_STACK_LINE(449)
						old = this->next;
						HX_STACK_LINE(449)
						ret1 = old->next;
						HX_STACK_LINE(449)
						this->next = ret1;
						HX_STACK_LINE(449)
						if (((this->next == null()))){
							HX_STACK_LINE(449)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(449)
						old = pre->next;
						HX_STACK_LINE(449)
						ret1 = old->next;
						HX_STACK_LINE(449)
						pre->next = ret1;
						HX_STACK_LINE(449)
						if (((ret1 == null()))){
							HX_STACK_LINE(449)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(449)
					old->_inuse = false;
					HX_STACK_LINE(449)
					this->modified = true;
					HX_STACK_LINE(449)
					(this->length)--;
					HX_STACK_LINE(449)
					this->pushmod = true;
					HX_STACK_LINE(449)
					ret1;
				}
				HX_STACK_LINE(449)
				ret = true;
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			pre = cur;
			HX_STACK_LINE(449)
			cur = cur->next;
		}
		HX_STACK_LINE(449)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_remove,(void))

bool ZPP_Contact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_try_remove",0x8f13d208,"zpp_nape.dynamics.ZPP_Contact.inlined_try_remove","zpp_nape/dynamics/Contact.hx",453,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(462)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(463)
	::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(464)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(465)
	while((true)){
		HX_STACK_LINE(465)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(465)
			break;
		}
		HX_STACK_LINE(466)
		if (((cur == obj))){
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(467)
				if (((pre == null()))){
					HX_STACK_LINE(467)
					old = this->next;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					this->next = ret1;
					HX_STACK_LINE(467)
					if (((this->next == null()))){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(467)
					old = pre->next;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					pre->next = ret1;
					HX_STACK_LINE(467)
					if (((ret1 == null()))){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(467)
				old->_inuse = false;
				HX_STACK_LINE(467)
				this->modified = true;
				HX_STACK_LINE(467)
				(this->length)--;
				HX_STACK_LINE(467)
				this->pushmod = true;
				HX_STACK_LINE(467)
				ret1;
			}
			HX_STACK_LINE(468)
			ret = true;
			HX_STACK_LINE(469)
			break;
		}
		HX_STACK_LINE(471)
		pre = cur;
		HX_STACK_LINE(472)
		cur = cur->next;
	}
	HX_STACK_LINE(474)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_try_remove,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","erase",0x0394477a,"zpp_nape.dynamics.ZPP_Contact.erase","zpp_nape/dynamics/Contact.hx",477,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(477)
	::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(477)
	::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(477)
	if (((pre == null()))){
		HX_STACK_LINE(477)
		old = this->next;
		HX_STACK_LINE(477)
		ret = old->next;
		HX_STACK_LINE(477)
		this->next = ret;
		HX_STACK_LINE(477)
		if (((this->next == null()))){
			HX_STACK_LINE(477)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(477)
		old = pre->next;
		HX_STACK_LINE(477)
		ret = old->next;
		HX_STACK_LINE(477)
		pre->next = ret;
		HX_STACK_LINE(477)
		if (((ret == null()))){
			HX_STACK_LINE(477)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(477)
	old->_inuse = false;
	HX_STACK_LINE(477)
	this->modified = true;
	HX_STACK_LINE(477)
	(this->length)--;
	HX_STACK_LINE(477)
	this->pushmod = true;
	HX_STACK_LINE(477)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,erase,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_erase",0xf233c8e6,"zpp_nape.dynamics.ZPP_Contact.inlined_erase","zpp_nape/dynamics/Contact.hx",481,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(490)
	::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(491)
	::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(492)
	if (((pre == null()))){
		HX_STACK_LINE(493)
		old = this->next;
		HX_STACK_LINE(494)
		ret = old->next;
		HX_STACK_LINE(495)
		this->next = ret;
		HX_STACK_LINE(496)
		if (((this->next == null()))){
			HX_STACK_LINE(496)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(499)
		old = pre->next;
		HX_STACK_LINE(500)
		ret = old->next;
		HX_STACK_LINE(501)
		pre->next = ret;
		HX_STACK_LINE(502)
		if (((ret == null()))){
			HX_STACK_LINE(502)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(505)
	old->_inuse = false;
	HX_STACK_LINE(508)
	this->modified = true;
	HX_STACK_LINE(509)
	(this->length)--;
	HX_STACK_LINE(510)
	this->pushmod = true;
	HX_STACK_LINE(511)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::splice( ::zpp_nape::dynamics::ZPP_Contact pre,int n){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","splice",0x9799e868,"zpp_nape.dynamics.ZPP_Contact.splice","zpp_nape/dynamics/Contact.hx",513,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(514)
	while((true)){
		HX_STACK_LINE(514)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(514)
			break;
		}
		HX_STACK_LINE(514)
		this->erase(pre);
	}
	HX_STACK_LINE(515)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,splice,return )

Void ZPP_Contact_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","clear",0xd8d2d021,"zpp_nape.dynamics.ZPP_Contact.clear","zpp_nape/dynamics/Contact.hx",518,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,clear,(void))

Void ZPP_Contact_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_clear",0xc772518d,"zpp_nape.dynamics.ZPP_Contact.inlined_clear","zpp_nape/dynamics/Contact.hx",523,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_clear,(void))

Void ZPP_Contact_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","reverse",0x3ef764b6,"zpp_nape.dynamics.ZPP_Contact.reverse","zpp_nape/dynamics/Contact.hx",528,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(529)
		::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(530)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(531)
		while((true)){
			HX_STACK_LINE(531)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(531)
				break;
			}
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(533)
			cur->next = pre;
			HX_STACK_LINE(534)
			this->next = cur;
			HX_STACK_LINE(535)
			pre = cur;
			HX_STACK_LINE(536)
			cur = nx;
		}
		HX_STACK_LINE(538)
		this->modified = true;
		HX_STACK_LINE(539)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,reverse,(void))

bool ZPP_Contact_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","empty",0x00519921,"zpp_nape.dynamics.ZPP_Contact.empty","zpp_nape/dynamics/Contact.hx",544,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,empty,return )

int ZPP_Contact_obj::size( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","size",0x599a30ad,"zpp_nape.dynamics.ZPP_Contact.size","zpp_nape/dynamics/Contact.hx",549,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(549)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,size,return )

bool ZPP_Contact_obj::has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","has",0xb5c010ee,"zpp_nape.dynamics.ZPP_Contact.has","zpp_nape/dynamics/Contact.hx",552,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(552)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(552)
	{
		HX_STACK_LINE(552)
		ret = false;
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(552)
				::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(552)
				if (((npite == obj))){
					HX_STACK_LINE(552)
					ret = true;
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(552)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(552)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,has,return )

bool ZPP_Contact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_has",0xb1ee1f5a,"zpp_nape.dynamics.ZPP_Contact.inlined_has","zpp_nape/dynamics/Contact.hx",556,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(565)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(566)
	{
		HX_STACK_LINE(567)
		ret = false;
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(569)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(570)
			while((true)){
				HX_STACK_LINE(570)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(570)
					break;
				}
				HX_STACK_LINE(571)
				::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(573)
				if (((npite == obj))){
					HX_STACK_LINE(574)
					ret = true;
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(578)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(582)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::front( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","front",0x9705773d,"zpp_nape.dynamics.ZPP_Contact.front","zpp_nape/dynamics/Contact.hx",587,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,front,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::back( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","back",0x4e576a13,"zpp_nape.dynamics.ZPP_Contact.back","zpp_nape/dynamics/Contact.hx",589,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(591)
	::zpp_nape::dynamics::ZPP_Contact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(592)
	while((true)){
		HX_STACK_LINE(592)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(592)
			break;
		}
		HX_STACK_LINE(593)
		ret = cur;
		HX_STACK_LINE(594)
		cur = cur->next;
	}
	HX_STACK_LINE(596)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,back,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","iterator_at",0xb68d0f78,"zpp_nape.dynamics.ZPP_Contact.iterator_at","zpp_nape/dynamics/Contact.hx",598,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(607)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(608)
	while((true)){
		HX_STACK_LINE(608)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(608)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(608)
			break;
		}
		HX_STACK_LINE(608)
		ret = ret->next;
	}
	HX_STACK_LINE(609)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","at",0xd77cd1df,"zpp_nape.dynamics.ZPP_Contact.at","zpp_nape/dynamics/Contact.hx",611,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(620)
	::zpp_nape::dynamics::ZPP_Contact it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(621)
	if (((it != null()))){
		HX_STACK_LINE(621)
		return it;
	}
	else{
		HX_STACK_LINE(621)
		return null();
	}
	HX_STACK_LINE(621)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,at,return )

bool ZPP_Contact_obj::internal;

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::zpp_pool;


ZPP_Contact_obj::ZPP_Contact_obj()
{
}

void ZPP_Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Contact);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(px,"px");
	HX_MARK_MEMBER_NAME(py,"py");
	HX_MARK_MEMBER_NAME(wrap_position,"wrap_position");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(posOnly,"posOnly");
	HX_MARK_MEMBER_NAME(stamp,"stamp");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZPP_Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(px,"px");
	HX_VISIT_MEMBER_NAME(py,"py");
	HX_VISIT_MEMBER_NAME(wrap_position,"wrap_position");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(posOnly,"posOnly");
	HX_VISIT_MEMBER_NAME(stamp,"stamp");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZPP_Contact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { return px; }
		if (HX_FIELD_EQ(inName,"py") ) { return py; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp; }
		if (HX_FIELD_EQ(inName,"fresh") ) { return fresh; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"arbiter") ) { return arbiter; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { return posOnly; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inactiveme") ) { return inactiveme_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getposition") ) { return getposition_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { return wrap_position; }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"position_validate") ) { return position_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { px=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"py") ) { py=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stamp") ) { stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { posOnly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { wrap_position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("px"));
	outFields->push(HX_CSTRING("py"));
	outFields->push(HX_CSTRING("wrap_position"));
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("posOnly"));
	outFields->push(HX_CSTRING("stamp"));
	outFields->push(HX_CSTRING("hash"));
	outFields->push(HX_CSTRING("fresh"));
	outFields->push(HX_CSTRING("dist"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::Contact*/ ,(int)offsetof(ZPP_Contact_obj,outer),HX_CSTRING("outer")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,px),HX_CSTRING("px")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,py),HX_CSTRING("py")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Contact_obj,wrap_position),HX_CSTRING("wrap_position")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_Contact_obj,arbiter),HX_CSTRING("arbiter")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_Contact_obj,inner),HX_CSTRING("inner")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,posOnly),HX_CSTRING("posOnly")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,stamp),HX_CSTRING("stamp")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,hash),HX_CSTRING("hash")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,fresh),HX_CSTRING("fresh")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,dist),HX_CSTRING("dist")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,elasticity),HX_CSTRING("elasticity")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_Contact_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,_inuse),HX_CSTRING("_inuse")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("px"),
	HX_CSTRING("py"),
	HX_CSTRING("position_validate"),
	HX_CSTRING("wrap_position"),
	HX_CSTRING("getposition"),
	HX_CSTRING("inactiveme"),
	HX_CSTRING("arbiter"),
	HX_CSTRING("inner"),
	HX_CSTRING("active"),
	HX_CSTRING("posOnly"),
	HX_CSTRING("stamp"),
	HX_CSTRING("hash"),
	HX_CSTRING("fresh"),
	HX_CSTRING("dist"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	HX_CSTRING("elem"),
	HX_CSTRING("begin"),
	HX_CSTRING("_inuse"),
	HX_CSTRING("modified"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("length"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("add"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("insert"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("splice"),
	HX_CSTRING("clear"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("reverse"),
	HX_CSTRING("empty"),
	HX_CSTRING("size"),
	HX_CSTRING("has"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("front"),
	HX_CSTRING("back"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("at"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_Contact_obj::__mClass;

void ZPP_Contact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_Contact"), hx::TCanCast< ZPP_Contact_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Contact_obj::__boot()
{
	internal= false;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
