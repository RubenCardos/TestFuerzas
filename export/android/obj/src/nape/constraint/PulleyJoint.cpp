#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
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

Void PulleyJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{
HX_STACK_FRAME("nape.constraint.PulleyJoint","new",0x06ee1c18,"nape.constraint.PulleyJoint.new","nape/constraint/PulleyJoint.hx",187,0x2d6ef3f8)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(body3,"body3")
HX_STACK_ARG(body4,"body4")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(anchor3,"anchor3")
HX_STACK_ARG(anchor4,"anchor4")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
HX_STACK_ARG(__o_ratio,"ratio")
Float ratio = __o_ratio.Default(1.0);
{
	HX_STACK_LINE(191)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(563)
	::zpp_nape::constraint::ZPP_PulleyJoint _g = ::zpp_nape::constraint::ZPP_PulleyJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(563)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(564)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(565)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(566)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(574)
	super::__construct();
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(576)
			if (((body1 == null()))){
				HX_STACK_LINE(576)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(576)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(576)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(576)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(576)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(576)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(576)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(576)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(576)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(576)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(576)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1)))) && bool((this->zpp_inner_zn->b3 != inbody1)))) && bool((this->zpp_inner_zn->b4 != inbody1))))){
					HX_STACK_LINE(576)
					if (((inbody1 != null()))){
						HX_STACK_LINE(576)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(576)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(576)
					this->zpp_inner->wake();
					HX_STACK_LINE(576)
					if (((inbody1 != null()))){
						HX_STACK_LINE(576)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(576)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(576)
			Dynamic();
		}
		else{
			HX_STACK_LINE(576)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(577)
			if (((body2 == null()))){
				HX_STACK_LINE(577)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(577)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(577)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(577)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(577)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(577)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(577)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(577)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(577)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(577)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(577)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2)))) && bool((this->zpp_inner_zn->b3 != inbody2)))) && bool((this->zpp_inner_zn->b4 != inbody2))))){
					HX_STACK_LINE(577)
					if (((inbody2 != null()))){
						HX_STACK_LINE(577)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(577)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(577)
					this->zpp_inner->wake();
					HX_STACK_LINE(577)
					if (((inbody2 != null()))){
						HX_STACK_LINE(577)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(577)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(577)
			Dynamic();
		}
		else{
			HX_STACK_LINE(577)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(578)
	{
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body3"));
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body inbody3;		HX_STACK_VAR(inbody3,"inbody3");
			HX_STACK_LINE(578)
			if (((body3 == null()))){
				HX_STACK_LINE(578)
				inbody3 = null();
			}
			else{
				HX_STACK_LINE(578)
				inbody3 = body3->zpp_inner;
			}
			HX_STACK_LINE(578)
			if (((inbody3 != this->zpp_inner_zn->b3))){
				HX_STACK_LINE(578)
				if (((this->zpp_inner_zn->b3 != null()))){
					HX_STACK_LINE(578)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b3))))){
						HX_STACK_LINE(578)
						if (((this->zpp_inner_zn->b3 != null()))){
							HX_STACK_LINE(578)
							this->zpp_inner_zn->b3->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(578)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(578)
						this->zpp_inner_zn->b3->wake();
					}
				}
				HX_STACK_LINE(578)
				this->zpp_inner_zn->b3 = inbody3;
				HX_STACK_LINE(578)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody3 != null())))) && bool((this->zpp_inner_zn->b1 != inbody3)))) && bool((this->zpp_inner_zn->b2 != inbody3)))) && bool((this->zpp_inner_zn->b4 != inbody3))))){
					HX_STACK_LINE(578)
					if (((inbody3 != null()))){
						HX_STACK_LINE(578)
						inbody3->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(578)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(578)
					this->zpp_inner->wake();
					HX_STACK_LINE(578)
					if (((inbody3 != null()))){
						HX_STACK_LINE(578)
						inbody3->wake();
					}
				}
			}
		}
		HX_STACK_LINE(578)
		if (((this->zpp_inner_zn->b3 == null()))){
			HX_STACK_LINE(578)
			Dynamic();
		}
		else{
			HX_STACK_LINE(578)
			this->zpp_inner_zn->b3->outer;
		}
	}
	HX_STACK_LINE(579)
	{
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body4"));
			HX_STACK_LINE(579)
			::zpp_nape::phys::ZPP_Body inbody4;		HX_STACK_VAR(inbody4,"inbody4");
			HX_STACK_LINE(579)
			if (((body4 == null()))){
				HX_STACK_LINE(579)
				inbody4 = null();
			}
			else{
				HX_STACK_LINE(579)
				inbody4 = body4->zpp_inner;
			}
			HX_STACK_LINE(579)
			if (((inbody4 != this->zpp_inner_zn->b4))){
				HX_STACK_LINE(579)
				if (((this->zpp_inner_zn->b4 != null()))){
					HX_STACK_LINE(579)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b4))))){
						HX_STACK_LINE(579)
						if (((this->zpp_inner_zn->b4 != null()))){
							HX_STACK_LINE(579)
							this->zpp_inner_zn->b4->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(579)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(579)
						this->zpp_inner_zn->b4->wake();
					}
				}
				HX_STACK_LINE(579)
				this->zpp_inner_zn->b4 = inbody4;
				HX_STACK_LINE(579)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody4 != null())))) && bool((this->zpp_inner_zn->b1 != inbody4)))) && bool((this->zpp_inner_zn->b2 != inbody4)))) && bool((this->zpp_inner_zn->b3 != inbody4))))){
					HX_STACK_LINE(579)
					if (((inbody4 != null()))){
						HX_STACK_LINE(579)
						inbody4->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(579)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(579)
					this->zpp_inner->wake();
					HX_STACK_LINE(579)
					if (((inbody4 != null()))){
						HX_STACK_LINE(579)
						inbody4->wake();
					}
				}
			}
		}
		HX_STACK_LINE(579)
		if (((this->zpp_inner_zn->b4 == null()))){
			HX_STACK_LINE(579)
			Dynamic();
		}
		else{
			HX_STACK_LINE(579)
			this->zpp_inner_zn->b4->outer;
		}
	}
	HX_STACK_LINE(580)
	{
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				if (((this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(580)
					this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(580)
				_this = this->zpp_inner_zn->wrap_a1;
			}
			HX_STACK_LINE(580)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(580)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(580)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(580)
					x = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(580)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(580)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(580)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(580)
					y = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(580)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(580)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(580)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(580)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",580,0x2d6ef3f8)
						{
							HX_STACK_LINE(580)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								{
									HX_STACK_LINE(580)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(580)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(580)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(580)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(580)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(580)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(580)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(580)
						{
						}
					}
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(580)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(580)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(580)
				ret = _this;
			}
			HX_STACK_LINE(580)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(580)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(580)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(580)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(580)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							if (((o->outer != null()))){
								HX_STACK_LINE(580)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(580)
								o->outer = null();
							}
							HX_STACK_LINE(580)
							o->_isimmutable = null();
							HX_STACK_LINE(580)
							o->_validate = null();
							HX_STACK_LINE(580)
							o->_invalidate = null();
						}
						HX_STACK_LINE(580)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(580)
				true;
			}
			else{
				HX_STACK_LINE(580)
				false;
			}
			HX_STACK_LINE(580)
			ret;
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(580)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(580)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(581)
	{
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				if (((this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(581)
					this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(581)
				_this = this->zpp_inner_zn->wrap_a2;
			}
			HX_STACK_LINE(581)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(581)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(581)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(581)
					x = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(581)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(581)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(581)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(581)
					y = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(581)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(581)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(581)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(581)
					_g3 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",581,0x2d6ef3f8)
						{
							HX_STACK_LINE(581)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								{
									HX_STACK_LINE(581)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(581)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(581)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(581)
								_g4 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(581)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(581)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(581)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(581)
						{
						}
					}
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(581)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(581)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(581)
				ret = _this;
			}
			HX_STACK_LINE(581)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(581)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(581)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(581)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(581)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							if (((o->outer != null()))){
								HX_STACK_LINE(581)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(581)
								o->outer = null();
							}
							HX_STACK_LINE(581)
							o->_isimmutable = null();
							HX_STACK_LINE(581)
							o->_validate = null();
							HX_STACK_LINE(581)
							o->_invalidate = null();
						}
						HX_STACK_LINE(581)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(581)
				true;
			}
			else{
				HX_STACK_LINE(581)
				false;
			}
			HX_STACK_LINE(581)
			ret;
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(581)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(581)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(582)
	{
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				if (((this->zpp_inner_zn->wrap_a3 == null()))){
					HX_STACK_LINE(582)
					this->zpp_inner_zn->setup_a3();
				}
				HX_STACK_LINE(582)
				_this = this->zpp_inner_zn->wrap_a3;
			}
			HX_STACK_LINE(582)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(582)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(582)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(582)
					x = anchor3->zpp_inner->x;
				}
				HX_STACK_LINE(582)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(582)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(582)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(582)
					y = anchor3->zpp_inner->y;
				}
				HX_STACK_LINE(582)
				Float _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(582)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(582)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(582)
					_g5 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",582,0x2d6ef3f8)
						{
							HX_STACK_LINE(582)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								{
									HX_STACK_LINE(582)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(582)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(582)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(582)
								_g6 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(582)
							return (_g6 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(582)
				if ((!(((  (((_g5 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(582)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(582)
						{
						}
					}
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(582)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(582)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(582)
				ret = _this;
			}
			HX_STACK_LINE(582)
			if ((anchor3->zpp_inner->weak)){
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(582)
					anchor3->zpp_inner->outer = null();
					HX_STACK_LINE(582)
					anchor3->zpp_inner = null();
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(582)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(582)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							if (((o->outer != null()))){
								HX_STACK_LINE(582)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(582)
								o->outer = null();
							}
							HX_STACK_LINE(582)
							o->_isimmutable = null();
							HX_STACK_LINE(582)
							o->_validate = null();
							HX_STACK_LINE(582)
							o->_invalidate = null();
						}
						HX_STACK_LINE(582)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(582)
				true;
			}
			else{
				HX_STACK_LINE(582)
				false;
			}
			HX_STACK_LINE(582)
			ret;
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			if (((this->zpp_inner_zn->wrap_a3 == null()))){
				HX_STACK_LINE(582)
				this->zpp_inner_zn->setup_a3();
			}
			HX_STACK_LINE(582)
			this->zpp_inner_zn->wrap_a3;
		}
	}
	HX_STACK_LINE(583)
	{
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				if (((this->zpp_inner_zn->wrap_a4 == null()))){
					HX_STACK_LINE(583)
					this->zpp_inner_zn->setup_a4();
				}
				HX_STACK_LINE(583)
				_this = this->zpp_inner_zn->wrap_a4;
			}
			HX_STACK_LINE(583)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(583)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(583)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(583)
					x = anchor4->zpp_inner->x;
				}
				HX_STACK_LINE(583)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(583)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(583)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(583)
					y = anchor4->zpp_inner->y;
				}
				HX_STACK_LINE(583)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(583)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(583)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(583)
					_g7 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",583,0x2d6ef3f8)
						{
							HX_STACK_LINE(583)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(583)
							{
								HX_STACK_LINE(583)
								{
									HX_STACK_LINE(583)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(583)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(583)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(583)
								_g8 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(583)
							return (_g8 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(583)
				if ((!(((  (((_g7 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(583)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(583)
						{
						}
					}
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(583)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(583)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(583)
				ret = _this;
			}
			HX_STACK_LINE(583)
			if ((anchor4->zpp_inner->weak)){
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(583)
					anchor4->zpp_inner->outer = null();
					HX_STACK_LINE(583)
					anchor4->zpp_inner = null();
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(583)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(583)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							if (((o->outer != null()))){
								HX_STACK_LINE(583)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(583)
								o->outer = null();
							}
							HX_STACK_LINE(583)
							o->_isimmutable = null();
							HX_STACK_LINE(583)
							o->_validate = null();
							HX_STACK_LINE(583)
							o->_invalidate = null();
						}
						HX_STACK_LINE(583)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(583)
				true;
			}
			else{
				HX_STACK_LINE(583)
				false;
			}
			HX_STACK_LINE(583)
			ret;
		}
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			if (((this->zpp_inner_zn->wrap_a4 == null()))){
				HX_STACK_LINE(583)
				this->zpp_inner_zn->setup_a4();
			}
			HX_STACK_LINE(583)
			this->zpp_inner_zn->wrap_a4;
		}
	}
	HX_STACK_LINE(584)
	{
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::ratio"));
			HX_STACK_LINE(584)
			if (((this->zpp_inner_zn->ratio != ratio))){
				HX_STACK_LINE(584)
				this->zpp_inner_zn->ratio = ratio;
				HX_STACK_LINE(584)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(584)
		this->zpp_inner_zn->ratio;
	}
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMin"));
			HX_STACK_LINE(585)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(585)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(585)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(585)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMax"));
			HX_STACK_LINE(586)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(586)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(586)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(586)
		this->zpp_inner_zn->jointMax;
	}
}
;
	return null();
}

//PulleyJoint_obj::~PulleyJoint_obj() { }

Dynamic PulleyJoint_obj::__CreateEmpty() { return  new PulleyJoint_obj; }
hx::ObjectPtr< PulleyJoint_obj > PulleyJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< PulleyJoint_obj > result = new PulleyJoint_obj();
	result->__construct(body1,body2,body3,body4,anchor1,anchor2,anchor3,anchor4,jointMin,jointMax,__o_ratio);
	return result;}

Dynamic PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PulleyJoint_obj > result = new PulleyJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

::nape::phys::Body PulleyJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body1",0x9deb155e,"nape.constraint.PulleyJoint.get_body1","nape/constraint/PulleyJoint.hx",201,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(201)
		return null();
	}
	else{
		HX_STACK_LINE(201)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(201)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body1,return )

::nape::phys::Body PulleyJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body1",0x813c016a,"nape.constraint.PulleyJoint.set_body1","nape/constraint/PulleyJoint.hx",203,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(205)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(206)
		if (((body1 == null()))){
			HX_STACK_LINE(206)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(206)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(207)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(208)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(209)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(211)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(211)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(214)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(214)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(216)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(217)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1)))) && bool((this->zpp_inner_zn->b3 != inbody1)))) && bool((this->zpp_inner_zn->b4 != inbody1))))){
				HX_STACK_LINE(219)
				if (((inbody1 != null()))){
					HX_STACK_LINE(219)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(222)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(223)
				this->zpp_inner->wake();
				HX_STACK_LINE(224)
				if (((inbody1 != null()))){
					HX_STACK_LINE(224)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(228)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(228)
		return null();
	}
	else{
		HX_STACK_LINE(228)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(228)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body1,return )

::nape::phys::Body PulleyJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body2",0x9deb155f,"nape.constraint.PulleyJoint.get_body2","nape/constraint/PulleyJoint.hx",239,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(239)
		return null();
	}
	else{
		HX_STACK_LINE(239)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(239)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body2,return )

::nape::phys::Body PulleyJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body2",0x813c016b,"nape.constraint.PulleyJoint.set_body2","nape/constraint/PulleyJoint.hx",241,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(243)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(244)
		if (((body2 == null()))){
			HX_STACK_LINE(244)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(244)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(245)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(246)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(247)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(249)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(249)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(252)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(252)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(254)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(255)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2)))) && bool((this->zpp_inner_zn->b3 != inbody2)))) && bool((this->zpp_inner_zn->b4 != inbody2))))){
				HX_STACK_LINE(257)
				if (((inbody2 != null()))){
					HX_STACK_LINE(257)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(260)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(261)
				this->zpp_inner->wake();
				HX_STACK_LINE(262)
				if (((inbody2 != null()))){
					HX_STACK_LINE(262)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(266)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(266)
		return null();
	}
	else{
		HX_STACK_LINE(266)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(266)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body2,return )

::nape::phys::Body PulleyJoint_obj::get_body3( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body3",0x9deb1560,"nape.constraint.PulleyJoint.get_body3","nape/constraint/PulleyJoint.hx",277,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	if (((this->zpp_inner_zn->b3 == null()))){
		HX_STACK_LINE(277)
		return null();
	}
	else{
		HX_STACK_LINE(277)
		return this->zpp_inner_zn->b3->outer;
	}
	HX_STACK_LINE(277)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body3,return )

::nape::phys::Body PulleyJoint_obj::set_body3( ::nape::phys::Body body3){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body3",0x813c016c,"nape.constraint.PulleyJoint.set_body3","nape/constraint/PulleyJoint.hx",279,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body3,"body3")
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(281)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body3"));
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body inbody3;		HX_STACK_VAR(inbody3,"inbody3");
		HX_STACK_LINE(282)
		if (((body3 == null()))){
			HX_STACK_LINE(282)
			inbody3 = null();
		}
		else{
			HX_STACK_LINE(282)
			inbody3 = body3->zpp_inner;
		}
		HX_STACK_LINE(283)
		if (((inbody3 != this->zpp_inner_zn->b3))){
			HX_STACK_LINE(284)
			if (((this->zpp_inner_zn->b3 != null()))){
				HX_STACK_LINE(285)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b3))))){
					HX_STACK_LINE(287)
					if (((this->zpp_inner_zn->b3 != null()))){
						HX_STACK_LINE(287)
						this->zpp_inner_zn->b3->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(290)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(290)
					this->zpp_inner_zn->b3->wake();
				}
			}
			HX_STACK_LINE(292)
			this->zpp_inner_zn->b3 = inbody3;
			HX_STACK_LINE(293)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody3 != null())))) && bool((this->zpp_inner_zn->b1 != inbody3)))) && bool((this->zpp_inner_zn->b2 != inbody3)))) && bool((this->zpp_inner_zn->b4 != inbody3))))){
				HX_STACK_LINE(295)
				if (((inbody3 != null()))){
					HX_STACK_LINE(295)
					inbody3->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(298)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(299)
				this->zpp_inner->wake();
				HX_STACK_LINE(300)
				if (((inbody3 != null()))){
					HX_STACK_LINE(300)
					inbody3->wake();
				}
			}
		}
	}
	HX_STACK_LINE(304)
	if (((this->zpp_inner_zn->b3 == null()))){
		HX_STACK_LINE(304)
		return null();
	}
	else{
		HX_STACK_LINE(304)
		return this->zpp_inner_zn->b3->outer;
	}
	HX_STACK_LINE(304)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body3,return )

::nape::phys::Body PulleyJoint_obj::get_body4( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body4",0x9deb1561,"nape.constraint.PulleyJoint.get_body4","nape/constraint/PulleyJoint.hx",315,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	if (((this->zpp_inner_zn->b4 == null()))){
		HX_STACK_LINE(315)
		return null();
	}
	else{
		HX_STACK_LINE(315)
		return this->zpp_inner_zn->b4->outer;
	}
	HX_STACK_LINE(315)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body4,return )

::nape::phys::Body PulleyJoint_obj::set_body4( ::nape::phys::Body body4){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body4",0x813c016d,"nape.constraint.PulleyJoint.set_body4","nape/constraint/PulleyJoint.hx",317,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body4,"body4")
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(319)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body4"));
		HX_STACK_LINE(320)
		::zpp_nape::phys::ZPP_Body inbody4;		HX_STACK_VAR(inbody4,"inbody4");
		HX_STACK_LINE(320)
		if (((body4 == null()))){
			HX_STACK_LINE(320)
			inbody4 = null();
		}
		else{
			HX_STACK_LINE(320)
			inbody4 = body4->zpp_inner;
		}
		HX_STACK_LINE(321)
		if (((inbody4 != this->zpp_inner_zn->b4))){
			HX_STACK_LINE(322)
			if (((this->zpp_inner_zn->b4 != null()))){
				HX_STACK_LINE(323)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b4))))){
					HX_STACK_LINE(325)
					if (((this->zpp_inner_zn->b4 != null()))){
						HX_STACK_LINE(325)
						this->zpp_inner_zn->b4->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(328)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(328)
					this->zpp_inner_zn->b4->wake();
				}
			}
			HX_STACK_LINE(330)
			this->zpp_inner_zn->b4 = inbody4;
			HX_STACK_LINE(331)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody4 != null())))) && bool((this->zpp_inner_zn->b1 != inbody4)))) && bool((this->zpp_inner_zn->b2 != inbody4)))) && bool((this->zpp_inner_zn->b3 != inbody4))))){
				HX_STACK_LINE(333)
				if (((inbody4 != null()))){
					HX_STACK_LINE(333)
					inbody4->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(336)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(337)
				this->zpp_inner->wake();
				HX_STACK_LINE(338)
				if (((inbody4 != null()))){
					HX_STACK_LINE(338)
					inbody4->wake();
				}
			}
		}
	}
	HX_STACK_LINE(342)
	if (((this->zpp_inner_zn->b4 == null()))){
		HX_STACK_LINE(342)
		return null();
	}
	else{
		HX_STACK_LINE(342)
		return this->zpp_inner_zn->b4->outer;
	}
	HX_STACK_LINE(342)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body4,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor1",0x107d0feb,"nape.constraint.PulleyJoint.get_anchor1","nape/constraint/PulleyJoint.hx",351,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(352)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(352)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(353)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor1,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor1",0x1aea16f7,"nape.constraint.PulleyJoint.set_anchor1","nape/constraint/PulleyJoint.hx",355,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(365)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(365)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(365)
			_this = this->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(365)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(365)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(365)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(365)
				x = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(365)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(365)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(365)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(365)
				y = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(365)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(365)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(365)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(365)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",365,0x2d6ef3f8)
					{
						HX_STACK_LINE(365)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(365)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(365)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(365)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(365)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(365)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(365)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(365)
					{
					}
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(365)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(365)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(365)
			ret = _this;
		}
		HX_STACK_LINE(365)
		if ((anchor1->zpp_inner->weak)){
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(365)
				anchor1->zpp_inner->outer = null();
				HX_STACK_LINE(365)
				anchor1->zpp_inner = null();
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(365)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						if (((o->outer != null()))){
							HX_STACK_LINE(365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(365)
							o->outer = null();
						}
						HX_STACK_LINE(365)
						o->_isimmutable = null();
						HX_STACK_LINE(365)
						o->_validate = null();
						HX_STACK_LINE(365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(365)
			true;
		}
		else{
			HX_STACK_LINE(365)
			false;
		}
		HX_STACK_LINE(365)
		ret;
	}
	HX_STACK_LINE(367)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(367)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(367)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor2",0x107d0fec,"nape.constraint.PulleyJoint.get_anchor2","nape/constraint/PulleyJoint.hx",376,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(377)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(378)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor2",0x1aea16f8,"nape.constraint.PulleyJoint.set_anchor2","nape/constraint/PulleyJoint.hx",380,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(390)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(390)
			_this = this->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(390)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(390)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(390)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(390)
				x = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(390)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(390)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(390)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(390)
				y = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(390)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(390)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(390)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(390)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",390,0x2d6ef3f8)
					{
						HX_STACK_LINE(390)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(390)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(390)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(390)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(390)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(390)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(390)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(390)
					{
					}
				}
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(390)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(390)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(390)
			ret = _this;
		}
		HX_STACK_LINE(390)
		if ((anchor2->zpp_inner->weak)){
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(390)
				anchor2->zpp_inner->outer = null();
				HX_STACK_LINE(390)
				anchor2->zpp_inner = null();
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(390)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(390)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						if (((o->outer != null()))){
							HX_STACK_LINE(390)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(390)
							o->outer = null();
						}
						HX_STACK_LINE(390)
						o->_isimmutable = null();
						HX_STACK_LINE(390)
						o->_validate = null();
						HX_STACK_LINE(390)
						o->_invalidate = null();
					}
					HX_STACK_LINE(390)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(390)
			true;
		}
		else{
			HX_STACK_LINE(390)
			false;
		}
		HX_STACK_LINE(390)
		ret;
	}
	HX_STACK_LINE(392)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(392)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(392)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor3( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor3",0x107d0fed,"nape.constraint.PulleyJoint.get_anchor3","nape/constraint/PulleyJoint.hx",401,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	if (((this->zpp_inner_zn->wrap_a3 == null()))){
		HX_STACK_LINE(402)
		this->zpp_inner_zn->setup_a3();
	}
	HX_STACK_LINE(403)
	return this->zpp_inner_zn->wrap_a3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor3( ::nape::geom::Vec2 anchor3){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor3",0x1aea16f9,"nape.constraint.PulleyJoint.set_anchor3","nape/constraint/PulleyJoint.hx",405,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor3,"anchor3")
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			if (((this->zpp_inner_zn->wrap_a3 == null()))){
				HX_STACK_LINE(415)
				this->zpp_inner_zn->setup_a3();
			}
			HX_STACK_LINE(415)
			_this = this->zpp_inner_zn->wrap_a3;
		}
		HX_STACK_LINE(415)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(415)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(415)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(415)
				x = anchor3->zpp_inner->x;
			}
			HX_STACK_LINE(415)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(415)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(415)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(415)
				y = anchor3->zpp_inner->y;
			}
			HX_STACK_LINE(415)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(415)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(415)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(415)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",415,0x2d6ef3f8)
					{
						HX_STACK_LINE(415)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							{
								HX_STACK_LINE(415)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(415)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(415)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(415)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(415)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(415)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(415)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(415)
					{
					}
				}
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(415)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(415)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(415)
			ret = _this;
		}
		HX_STACK_LINE(415)
		if ((anchor3->zpp_inner->weak)){
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(415)
				anchor3->zpp_inner->outer = null();
				HX_STACK_LINE(415)
				anchor3->zpp_inner = null();
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(415)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(415)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						if (((o->outer != null()))){
							HX_STACK_LINE(415)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(415)
							o->outer = null();
						}
						HX_STACK_LINE(415)
						o->_isimmutable = null();
						HX_STACK_LINE(415)
						o->_validate = null();
						HX_STACK_LINE(415)
						o->_invalidate = null();
					}
					HX_STACK_LINE(415)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(415)
			true;
		}
		else{
			HX_STACK_LINE(415)
			false;
		}
		HX_STACK_LINE(415)
		ret;
	}
	HX_STACK_LINE(417)
	if (((this->zpp_inner_zn->wrap_a3 == null()))){
		HX_STACK_LINE(417)
		this->zpp_inner_zn->setup_a3();
	}
	HX_STACK_LINE(417)
	return this->zpp_inner_zn->wrap_a3;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor4( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor4",0x107d0fee,"nape.constraint.PulleyJoint.get_anchor4","nape/constraint/PulleyJoint.hx",426,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(427)
	if (((this->zpp_inner_zn->wrap_a4 == null()))){
		HX_STACK_LINE(427)
		this->zpp_inner_zn->setup_a4();
	}
	HX_STACK_LINE(428)
	return this->zpp_inner_zn->wrap_a4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor4,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor4( ::nape::geom::Vec2 anchor4){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor4",0x1aea16fa,"nape.constraint.PulleyJoint.set_anchor4","nape/constraint/PulleyJoint.hx",430,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor4,"anchor4")
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(440)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			if (((this->zpp_inner_zn->wrap_a4 == null()))){
				HX_STACK_LINE(440)
				this->zpp_inner_zn->setup_a4();
			}
			HX_STACK_LINE(440)
			_this = this->zpp_inner_zn->wrap_a4;
		}
		HX_STACK_LINE(440)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(440)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(440)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(440)
				x = anchor4->zpp_inner->x;
			}
			HX_STACK_LINE(440)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(440)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(440)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(440)
				y = anchor4->zpp_inner->y;
			}
			HX_STACK_LINE(440)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(440)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(440)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(440)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PulleyJoint.hx",440,0x2d6ef3f8)
					{
						HX_STACK_LINE(440)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							{
								HX_STACK_LINE(440)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(440)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(440)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(440)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(440)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(440)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(440)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(440)
					{
					}
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(440)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(440)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(440)
			ret = _this;
		}
		HX_STACK_LINE(440)
		if ((anchor4->zpp_inner->weak)){
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(440)
				anchor4->zpp_inner->outer = null();
				HX_STACK_LINE(440)
				anchor4->zpp_inner = null();
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(440)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(440)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						if (((o->outer != null()))){
							HX_STACK_LINE(440)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(440)
							o->outer = null();
						}
						HX_STACK_LINE(440)
						o->_isimmutable = null();
						HX_STACK_LINE(440)
						o->_validate = null();
						HX_STACK_LINE(440)
						o->_invalidate = null();
					}
					HX_STACK_LINE(440)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(440)
			true;
		}
		else{
			HX_STACK_LINE(440)
			false;
		}
		HX_STACK_LINE(440)
		ret;
	}
	HX_STACK_LINE(442)
	if (((this->zpp_inner_zn->wrap_a4 == null()))){
		HX_STACK_LINE(442)
		this->zpp_inner_zn->setup_a4();
	}
	HX_STACK_LINE(442)
	return this->zpp_inner_zn->wrap_a4;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor4,return )

Float PulleyJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_jointMin",0x670a2bb9,"nape.constraint.PulleyJoint.get_jointMin","nape/constraint/PulleyJoint.hx",452,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMin,return )

Float PulleyJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_jointMin",0x7c034f2d,"nape.constraint.PulleyJoint.set_jointMin","nape/constraint/PulleyJoint.hx",454,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(456)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMin"));
		HX_STACK_LINE(465)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(466)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(467)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(470)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMin,return )

Float PulleyJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_jointMax",0x670a24cb,"nape.constraint.PulleyJoint.get_jointMax","nape/constraint/PulleyJoint.hx",480,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMax,return )

Float PulleyJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_jointMax",0x7c03483f,"nape.constraint.PulleyJoint.set_jointMax","nape/constraint/PulleyJoint.hx",482,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(484)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMax"));
		HX_STACK_LINE(493)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(494)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(495)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(498)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMax,return )

Float PulleyJoint_obj::get_ratio( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_ratio",0xcb1f771a,"nape.constraint.PulleyJoint.get_ratio","nape/constraint/PulleyJoint.hx",508,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_ratio,return )

Float PulleyJoint_obj::set_ratio( Float ratio){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_ratio",0xae706326,"nape.constraint.PulleyJoint.set_ratio","nape/constraint/PulleyJoint.hx",510,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ratio,"ratio")
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(512)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::ratio"));
		HX_STACK_LINE(518)
		if (((this->zpp_inner_zn->ratio != ratio))){
			HX_STACK_LINE(519)
			this->zpp_inner_zn->ratio = ratio;
			HX_STACK_LINE(520)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(523)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_ratio,return )

bool PulleyJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","isSlack",0x761dddbe,"nape.constraint.PulleyJoint.isSlack","nape/constraint/PulleyJoint.hx",542,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	return this->zpp_inner_zn->slack;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,isSlack,return )

::nape::geom::MatMN PulleyJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","impulse",0xc893d86d,"nape.constraint.PulleyJoint.impulse","nape/constraint/PulleyJoint.hx",593,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(595)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc;
	HX_STACK_LINE(596)
	return ret;
}


::nape::geom::Vec3 PulleyJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","bodyImpulse",0xe78339eb,"nape.constraint.PulleyJoint.bodyImpulse","nape/constraint/PulleyJoint.hx",610,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(610)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(611)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(614)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(610)
	return null();
}


Void PulleyJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.PulleyJoint","visitBodies",0x6c3fb763,"nape.constraint.PulleyJoint.visitBodies","nape/constraint/PulleyJoint.hx",620,0x2d6ef3f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(621)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(622)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(624)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(625)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(627)
		if (((bool((bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))))) && bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
			HX_STACK_LINE(628)
			lambda((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(630)
		if (((bool((bool((bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))))) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )))))) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) ))))))){
			HX_STACK_LINE(631)
			lambda((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )).Cast< Void >();
		}
	}
return null();
}



PulleyJoint_obj::PulleyJoint_obj()
{
}

void PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulleyJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PulleyJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"body3") ) { return get_body3(); }
		if (HX_FIELD_EQ(inName,"body4") ) { return get_body4(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return get_ratio(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"anchor3") ) { return get_anchor3(); }
		if (HX_FIELD_EQ(inName,"anchor4") ) { return get_anchor4(); }
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
		if (HX_FIELD_EQ(inName,"get_body3") ) { return get_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body3") ) { return set_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body4") ) { return get_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body4") ) { return set_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor3") ) { return get_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor3") ) { return set_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor4") ) { return get_anchor4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor4") ) { return set_anchor4_dyn(); }
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

Dynamic PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"body3") ) { return set_body3(inValue); }
		if (HX_FIELD_EQ(inName,"body4") ) { return set_body4(inValue); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return set_ratio(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return set_anchor2(inValue); }
		if (HX_FIELD_EQ(inName,"anchor3") ) { return set_anchor3(inValue); }
		if (HX_FIELD_EQ(inName,"anchor4") ) { return set_anchor4(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return set_jointMax(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PulleyJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("body3"));
	outFields->push(HX_CSTRING("body4"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("anchor3"));
	outFields->push(HX_CSTRING("anchor4"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("ratio"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_PulleyJoint*/ ,(int)offsetof(PulleyJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_body3"),
	HX_CSTRING("set_body3"),
	HX_CSTRING("get_body4"),
	HX_CSTRING("set_body4"),
	HX_CSTRING("get_anchor1"),
	HX_CSTRING("set_anchor1"),
	HX_CSTRING("get_anchor2"),
	HX_CSTRING("set_anchor2"),
	HX_CSTRING("get_anchor3"),
	HX_CSTRING("set_anchor3"),
	HX_CSTRING("get_anchor4"),
	HX_CSTRING("set_anchor4"),
	HX_CSTRING("get_jointMin"),
	HX_CSTRING("set_jointMin"),
	HX_CSTRING("get_jointMax"),
	HX_CSTRING("set_jointMax"),
	HX_CSTRING("get_ratio"),
	HX_CSTRING("set_ratio"),
	HX_CSTRING("isSlack"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

#endif

Class PulleyJoint_obj::__mClass;

void PulleyJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.PulleyJoint"), hx::TCanCast< PulleyJoint_obj> ,sStaticFields,sMemberFields,
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

void PulleyJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
