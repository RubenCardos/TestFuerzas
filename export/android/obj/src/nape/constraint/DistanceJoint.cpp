#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace constraint{

Void DistanceJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax)
{
HX_STACK_FRAME("nape.constraint.DistanceJoint","new",0xd657a01c,"nape.constraint.DistanceJoint.new","nape/constraint/DistanceJoint.hx",184,0x7df58474)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
{
	HX_STACK_LINE(188)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(404)
	::zpp_nape::constraint::ZPP_DistanceJoint _g = ::zpp_nape::constraint::ZPP_DistanceJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(404)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(405)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(406)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(407)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(415)
	super::__construct();
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(417)
			if (((body1 == null()))){
				HX_STACK_LINE(417)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(417)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(417)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(417)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(417)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(417)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(417)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(417)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(417)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(417)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(417)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(417)
					if (((inbody1 != null()))){
						HX_STACK_LINE(417)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(417)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(417)
					this->zpp_inner->wake();
					HX_STACK_LINE(417)
					if (((inbody1 != null()))){
						HX_STACK_LINE(417)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(417)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(417)
			Dynamic();
		}
		else{
			HX_STACK_LINE(417)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(418)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(418)
			if (((body2 == null()))){
				HX_STACK_LINE(418)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(418)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(418)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(418)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(418)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(418)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(418)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(418)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(418)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(418)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(418)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(418)
					if (((inbody2 != null()))){
						HX_STACK_LINE(418)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(418)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(418)
					this->zpp_inner->wake();
					HX_STACK_LINE(418)
					if (((inbody2 != null()))){
						HX_STACK_LINE(418)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(418)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(418)
			Dynamic();
		}
		else{
			HX_STACK_LINE(418)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				if (((this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(419)
					this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(419)
				_this = this->zpp_inner_zn->wrap_a1;
			}
			HX_STACK_LINE(419)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(419)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(419)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(419)
					x = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(419)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(419)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(419)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(419)
					y = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(419)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(419)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(419)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(419)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/DistanceJoint.hx",419,0x7df58474)
						{
							HX_STACK_LINE(419)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(419)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(419)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(419)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(419)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(419)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(419)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(419)
						{
						}
					}
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(419)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(419)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(419)
				ret = _this;
			}
			HX_STACK_LINE(419)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(419)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(419)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(419)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(419)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							if (((o->outer != null()))){
								HX_STACK_LINE(419)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(419)
								o->outer = null();
							}
							HX_STACK_LINE(419)
							o->_isimmutable = null();
							HX_STACK_LINE(419)
							o->_validate = null();
							HX_STACK_LINE(419)
							o->_invalidate = null();
						}
						HX_STACK_LINE(419)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(419)
				true;
			}
			else{
				HX_STACK_LINE(419)
				false;
			}
			HX_STACK_LINE(419)
			ret;
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(419)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(419)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				if (((this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(420)
					this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(420)
				_this = this->zpp_inner_zn->wrap_a2;
			}
			HX_STACK_LINE(420)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(420)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(420)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(420)
					x = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(420)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(420)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(420)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(420)
					y = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(420)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(420)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(420)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(420)
					_g3 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/DistanceJoint.hx",420,0x7df58474)
						{
							HX_STACK_LINE(420)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(420)
							{
								HX_STACK_LINE(420)
								{
									HX_STACK_LINE(420)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(420)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(420)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(420)
								_g4 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(420)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(420)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(420)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(420)
						{
						}
					}
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(420)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(420)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(420)
				ret = _this;
			}
			HX_STACK_LINE(420)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(420)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(420)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(420)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(420)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(420)
						{
							HX_STACK_LINE(420)
							if (((o->outer != null()))){
								HX_STACK_LINE(420)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(420)
								o->outer = null();
							}
							HX_STACK_LINE(420)
							o->_isimmutable = null();
							HX_STACK_LINE(420)
							o->_validate = null();
							HX_STACK_LINE(420)
							o->_invalidate = null();
						}
						HX_STACK_LINE(420)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(420)
				true;
			}
			else{
				HX_STACK_LINE(420)
				false;
			}
			HX_STACK_LINE(420)
			ret;
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(420)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(420)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			this->zpp_inner->immutable_midstep(HX_CSTRING("DistanceJoint::jointMin"));
			HX_STACK_LINE(421)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(421)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(421)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(421)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			this->zpp_inner->immutable_midstep(HX_CSTRING("DistanceJoint::jointMax"));
			HX_STACK_LINE(422)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(422)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(422)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(422)
		this->zpp_inner_zn->jointMax;
	}
}
;
	return null();
}

//DistanceJoint_obj::~DistanceJoint_obj() { }

Dynamic DistanceJoint_obj::__CreateEmpty() { return  new DistanceJoint_obj; }
hx::ObjectPtr< DistanceJoint_obj > DistanceJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax)
{  hx::ObjectPtr< DistanceJoint_obj > result = new DistanceJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2,jointMin,jointMax);
	return result;}

Dynamic DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DistanceJoint_obj > result = new DistanceJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::nape::phys::Body DistanceJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_body1",0x19a57462,"nape.constraint.DistanceJoint.get_body1","nape/constraint/DistanceJoint.hx",198,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(198)
		return null();
	}
	else{
		HX_STACK_LINE(198)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(198)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_body1,return )

::nape::phys::Body DistanceJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_body1",0xfcf6606e,"nape.constraint.DistanceJoint.set_body1","nape/constraint/DistanceJoint.hx",200,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(203)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(203)
		if (((body1 == null()))){
			HX_STACK_LINE(203)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(203)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(204)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(205)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(206)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(208)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(208)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(211)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(211)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(213)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(214)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(216)
				if (((inbody1 != null()))){
					HX_STACK_LINE(216)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(219)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(220)
				this->zpp_inner->wake();
				HX_STACK_LINE(221)
				if (((inbody1 != null()))){
					HX_STACK_LINE(221)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(225)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(225)
		return null();
	}
	else{
		HX_STACK_LINE(225)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(225)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_body1,return )

::nape::phys::Body DistanceJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_body2",0x19a57463,"nape.constraint.DistanceJoint.get_body2","nape/constraint/DistanceJoint.hx",236,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(236)
		return null();
	}
	else{
		HX_STACK_LINE(236)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(236)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_body2,return )

::nape::phys::Body DistanceJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_body2",0xfcf6606f,"nape.constraint.DistanceJoint.set_body2","nape/constraint/DistanceJoint.hx",238,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(240)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(241)
		if (((body2 == null()))){
			HX_STACK_LINE(241)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(241)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(242)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(243)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(244)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(246)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(246)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(249)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(249)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(251)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(252)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(254)
				if (((inbody2 != null()))){
					HX_STACK_LINE(254)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(257)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(258)
				this->zpp_inner->wake();
				HX_STACK_LINE(259)
				if (((inbody2 != null()))){
					HX_STACK_LINE(259)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(263)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(263)
		return null();
	}
	else{
		HX_STACK_LINE(263)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(263)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_body2,return )

::nape::geom::Vec2 DistanceJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_anchor1",0xb6d037ef,"nape.constraint.DistanceJoint.get_anchor1","nape/constraint/DistanceJoint.hx",272,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(273)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(274)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_anchor1,return )

::nape::geom::Vec2 DistanceJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_anchor1",0xc13d3efb,"nape.constraint.DistanceJoint.set_anchor1","nape/constraint/DistanceJoint.hx",276,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(286)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(286)
			_this = this->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(286)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(286)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(286)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(286)
				x = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(286)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(286)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(286)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(286)
				y = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(286)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(286)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(286)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(286)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/DistanceJoint.hx",286,0x7df58474)
					{
						HX_STACK_LINE(286)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							{
								HX_STACK_LINE(286)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(286)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(286)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(286)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(286)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(286)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(286)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(286)
					{
					}
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(286)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(286)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(286)
			ret = _this;
		}
		HX_STACK_LINE(286)
		if ((anchor1->zpp_inner->weak)){
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				anchor1->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				anchor1->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						if (((o->outer != null()))){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(286)
			true;
		}
		else{
			HX_STACK_LINE(286)
			false;
		}
		HX_STACK_LINE(286)
		ret;
	}
	HX_STACK_LINE(288)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(288)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(288)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_anchor1,return )

::nape::geom::Vec2 DistanceJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_anchor2",0xb6d037f0,"nape.constraint.DistanceJoint.get_anchor2","nape/constraint/DistanceJoint.hx",297,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(298)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(299)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_anchor2,return )

::nape::geom::Vec2 DistanceJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_anchor2",0xc13d3efc,"nape.constraint.DistanceJoint.set_anchor2","nape/constraint/DistanceJoint.hx",301,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(311)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(311)
			_this = this->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(311)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(311)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(311)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(311)
				x = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(311)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(311)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(311)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(311)
				y = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(311)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(311)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(311)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(311)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/DistanceJoint.hx",311,0x7df58474)
					{
						HX_STACK_LINE(311)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							{
								HX_STACK_LINE(311)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(311)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(311)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(311)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(311)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(311)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(311)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(311)
					{
					}
				}
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(311)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(311)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(311)
			ret = _this;
		}
		HX_STACK_LINE(311)
		if ((anchor2->zpp_inner->weak)){
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(311)
				anchor2->zpp_inner->outer = null();
				HX_STACK_LINE(311)
				anchor2->zpp_inner = null();
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(311)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(311)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						if (((o->outer != null()))){
							HX_STACK_LINE(311)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(311)
							o->outer = null();
						}
						HX_STACK_LINE(311)
						o->_isimmutable = null();
						HX_STACK_LINE(311)
						o->_validate = null();
						HX_STACK_LINE(311)
						o->_invalidate = null();
					}
					HX_STACK_LINE(311)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(311)
			true;
		}
		else{
			HX_STACK_LINE(311)
			false;
		}
		HX_STACK_LINE(311)
		ret;
	}
	HX_STACK_LINE(313)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(313)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(313)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_anchor2,return )

Float DistanceJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_jointMin",0x497a0735,"nape.constraint.DistanceJoint.get_jointMin","nape/constraint/DistanceJoint.hx",323,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_jointMin,return )

Float DistanceJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_jointMin",0x5e732aa9,"nape.constraint.DistanceJoint.set_jointMin","nape/constraint/DistanceJoint.hx",325,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(327)
		this->zpp_inner->immutable_midstep(HX_CSTRING("DistanceJoint::jointMin"));
		HX_STACK_LINE(336)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(337)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(338)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(341)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_jointMin,return )

Float DistanceJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_jointMax",0x497a0047,"nape.constraint.DistanceJoint.get_jointMax","nape/constraint/DistanceJoint.hx",351,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_jointMax,return )

Float DistanceJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_jointMax",0x5e7323bb,"nape.constraint.DistanceJoint.set_jointMax","nape/constraint/DistanceJoint.hx",353,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(355)
		this->zpp_inner->immutable_midstep(HX_CSTRING("DistanceJoint::jointMax"));
		HX_STACK_LINE(364)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(365)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(366)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(369)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_jointMax,return )

bool DistanceJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","isSlack",0xe033b3c2,"nape.constraint.DistanceJoint.isSlack","nape/constraint/DistanceJoint.hx",388,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	return this->zpp_inner_zn->slack;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,isSlack,return )

::nape::geom::MatMN DistanceJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","impulse",0x32a9ae71,"nape.constraint.DistanceJoint.impulse","nape/constraint/DistanceJoint.hx",429,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(430)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(431)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc;
	HX_STACK_LINE(432)
	return ret;
}


::nape::geom::Vec3 DistanceJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","bodyImpulse",0x8dd661ef,"nape.constraint.DistanceJoint.bodyImpulse","nape/constraint/DistanceJoint.hx",446,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(446)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(447)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(450)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(446)
	return null();
}


Void DistanceJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.DistanceJoint","visitBodies",0x1292df67,"nape.constraint.DistanceJoint.visitBodies","nape/constraint/DistanceJoint.hx",456,0x7df58474)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(457)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(458)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(460)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(461)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}



DistanceJoint_obj::DistanceJoint_obj()
{
}

void DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistanceJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DistanceJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"isSlack") ) { return isSlack_dyn(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { return get_jointMin(); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return get_jointMax(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"get_jointMin") ) { return get_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMin") ) { return set_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMax") ) { return get_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMax") ) { return set_jointMax_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return set_anchor2(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return set_jointMax(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_DistanceJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_DistanceJoint*/ ,(int)offsetof(DistanceJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_anchor1"),
	HX_CSTRING("set_anchor1"),
	HX_CSTRING("get_anchor2"),
	HX_CSTRING("set_anchor2"),
	HX_CSTRING("get_jointMin"),
	HX_CSTRING("set_jointMin"),
	HX_CSTRING("get_jointMax"),
	HX_CSTRING("set_jointMax"),
	HX_CSTRING("isSlack"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DistanceJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DistanceJoint_obj::__mClass,"__mClass");
};

#endif

Class DistanceJoint_obj::__mClass;

void DistanceJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.DistanceJoint"), hx::TCanCast< DistanceJoint_obj> ,sStaticFields,sMemberFields,
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

void DistanceJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
