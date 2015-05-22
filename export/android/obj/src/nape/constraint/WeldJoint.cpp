#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
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

Void WeldJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{
HX_STACK_FRAME("nape.constraint.WeldJoint","new",0x17781cab,"nape.constraint.WeldJoint.new","nape/constraint/WeldJoint.hx",192,0x63bebec5)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(__o_phase,"phase")
Float phase = __o_phase.Default(0.0);
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(361)
	::zpp_nape::constraint::ZPP_WeldJoint _g = ::zpp_nape::constraint::ZPP_WeldJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(361)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(362)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(363)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(364)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(372)
	super::__construct();
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(374)
			if (((body1 == null()))){
				HX_STACK_LINE(374)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(374)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(374)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(374)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(374)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(374)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(374)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(374)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(374)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(374)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(374)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(374)
					if (((inbody1 != null()))){
						HX_STACK_LINE(374)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(374)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(374)
					this->zpp_inner->wake();
					HX_STACK_LINE(374)
					if (((inbody1 != null()))){
						HX_STACK_LINE(374)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(374)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(374)
			Dynamic();
		}
		else{
			HX_STACK_LINE(374)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(375)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(375)
			if (((body2 == null()))){
				HX_STACK_LINE(375)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(375)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(375)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(375)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(375)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(375)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(375)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(375)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(375)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(375)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(375)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(375)
					if (((inbody2 != null()))){
						HX_STACK_LINE(375)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(375)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(375)
					this->zpp_inner->wake();
					HX_STACK_LINE(375)
					if (((inbody2 != null()))){
						HX_STACK_LINE(375)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(375)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(375)
			Dynamic();
		}
		else{
			HX_STACK_LINE(375)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				if (((this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(376)
					this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(376)
				_this = this->zpp_inner_zn->wrap_a1;
			}
			HX_STACK_LINE(376)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					x = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(376)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					y = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(376)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/WeldJoint.hx",376,0x63bebec5)
						{
							HX_STACK_LINE(376)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(376)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(376)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(376)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(376)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(376)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(376)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(376)
						{
						}
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(376)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(376)
				ret = _this;
			}
			HX_STACK_LINE(376)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(376)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(376)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(376)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(376)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							if (((o->outer != null()))){
								HX_STACK_LINE(376)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(376)
								o->outer = null();
							}
							HX_STACK_LINE(376)
							o->_isimmutable = null();
							HX_STACK_LINE(376)
							o->_validate = null();
							HX_STACK_LINE(376)
							o->_invalidate = null();
						}
						HX_STACK_LINE(376)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(376)
				true;
			}
			else{
				HX_STACK_LINE(376)
				false;
			}
			HX_STACK_LINE(376)
			ret;
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(376)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(376)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				if (((this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(377)
					this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(377)
				_this = this->zpp_inner_zn->wrap_a2;
			}
			HX_STACK_LINE(377)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(377)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(377)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(377)
					x = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(377)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(377)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(377)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(377)
					y = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(377)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(377)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(377)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(377)
					_g3 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/WeldJoint.hx",377,0x63bebec5)
						{
							HX_STACK_LINE(377)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(377)
							{
								HX_STACK_LINE(377)
								{
									HX_STACK_LINE(377)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(377)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(377)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(377)
								_g4 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(377)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(377)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(377)
						{
						}
					}
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(377)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(377)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(377)
				ret = _this;
			}
			HX_STACK_LINE(377)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(377)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(377)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(377)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(377)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							if (((o->outer != null()))){
								HX_STACK_LINE(377)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(377)
								o->outer = null();
							}
							HX_STACK_LINE(377)
							o->_isimmutable = null();
							HX_STACK_LINE(377)
							o->_validate = null();
							HX_STACK_LINE(377)
							o->_invalidate = null();
						}
						HX_STACK_LINE(377)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(377)
				true;
			}
			else{
				HX_STACK_LINE(377)
				false;
			}
			HX_STACK_LINE(377)
			ret;
		}
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(377)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(377)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			this->zpp_inner->immutable_midstep(HX_CSTRING("WeldJoint::phase"));
			HX_STACK_LINE(378)
			if (((this->zpp_inner_zn->phase != phase))){
				HX_STACK_LINE(378)
				this->zpp_inner_zn->phase = phase;
				HX_STACK_LINE(378)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(378)
		this->zpp_inner_zn->phase;
	}
}
;
	return null();
}

//WeldJoint_obj::~WeldJoint_obj() { }

Dynamic WeldJoint_obj::__CreateEmpty() { return  new WeldJoint_obj; }
hx::ObjectPtr< WeldJoint_obj > WeldJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{  hx::ObjectPtr< WeldJoint_obj > result = new WeldJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2,__o_phase);
	return result;}

Dynamic WeldJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeldJoint_obj > result = new WeldJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::nape::phys::Body WeldJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_body1",0x92c84631,"nape.constraint.WeldJoint.get_body1","nape/constraint/WeldJoint.hx",206,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(206)
		return null();
	}
	else{
		HX_STACK_LINE(206)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(206)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body1,return )

::nape::phys::Body WeldJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_body1",0x7619323d,"nape.constraint.WeldJoint.set_body1","nape/constraint/WeldJoint.hx",208,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(210)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(211)
		if (((body1 == null()))){
			HX_STACK_LINE(211)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(211)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(212)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(213)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(214)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(216)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(216)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(219)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(219)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(221)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(222)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(224)
				if (((inbody1 != null()))){
					HX_STACK_LINE(224)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(227)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(228)
				this->zpp_inner->wake();
				HX_STACK_LINE(229)
				if (((inbody1 != null()))){
					HX_STACK_LINE(229)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(233)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(233)
		return null();
	}
	else{
		HX_STACK_LINE(233)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body1,return )

::nape::phys::Body WeldJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_body2",0x92c84632,"nape.constraint.WeldJoint.get_body2","nape/constraint/WeldJoint.hx",244,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(244)
		return null();
	}
	else{
		HX_STACK_LINE(244)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(244)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body2,return )

::nape::phys::Body WeldJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_body2",0x7619323e,"nape.constraint.WeldJoint.set_body2","nape/constraint/WeldJoint.hx",246,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(248)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(249)
		if (((body2 == null()))){
			HX_STACK_LINE(249)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(249)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(250)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(251)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(252)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(254)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(254)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(257)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(257)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(259)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(260)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(262)
				if (((inbody2 != null()))){
					HX_STACK_LINE(262)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(265)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(266)
				this->zpp_inner->wake();
				HX_STACK_LINE(267)
				if (((inbody2 != null()))){
					HX_STACK_LINE(267)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(271)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(271)
		return null();
	}
	else{
		HX_STACK_LINE(271)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(271)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body2,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_anchor1",0xdba65b7e,"nape.constraint.WeldJoint.get_anchor1","nape/constraint/WeldJoint.hx",280,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(281)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(282)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor1,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_anchor1",0xe613628a,"nape.constraint.WeldJoint.set_anchor1","nape/constraint/WeldJoint.hx",284,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(294)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(294)
			_this = this->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(294)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				x = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(294)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				y = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(294)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/WeldJoint.hx",294,0x63bebec5)
					{
						HX_STACK_LINE(294)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(294)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(294)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(294)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(294)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(294)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(294)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(294)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(294)
					{
					}
				}
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(294)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(294)
			ret = _this;
		}
		HX_STACK_LINE(294)
		if ((anchor1->zpp_inner->weak)){
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(294)
				anchor1->zpp_inner->outer = null();
				HX_STACK_LINE(294)
				anchor1->zpp_inner = null();
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(294)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(294)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						if (((o->outer != null()))){
							HX_STACK_LINE(294)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(294)
							o->outer = null();
						}
						HX_STACK_LINE(294)
						o->_isimmutable = null();
						HX_STACK_LINE(294)
						o->_validate = null();
						HX_STACK_LINE(294)
						o->_invalidate = null();
					}
					HX_STACK_LINE(294)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(294)
			true;
		}
		else{
			HX_STACK_LINE(294)
			false;
		}
		HX_STACK_LINE(294)
		ret;
	}
	HX_STACK_LINE(296)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(296)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(296)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor1,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_anchor2",0xdba65b7f,"nape.constraint.WeldJoint.get_anchor2","nape/constraint/WeldJoint.hx",305,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(306)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(306)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(307)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor2,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_anchor2",0xe613628b,"nape.constraint.WeldJoint.set_anchor2","nape/constraint/WeldJoint.hx",309,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(319)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(319)
			_this = this->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(319)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				x = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(319)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				y = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(319)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/WeldJoint.hx",319,0x63bebec5)
					{
						HX_STACK_LINE(319)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(319)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(319)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(319)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(319)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(319)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(319)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(319)
					{
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(319)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(319)
			ret = _this;
		}
		HX_STACK_LINE(319)
		if ((anchor2->zpp_inner->weak)){
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(319)
				anchor2->zpp_inner->outer = null();
				HX_STACK_LINE(319)
				anchor2->zpp_inner = null();
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(319)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(319)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						if (((o->outer != null()))){
							HX_STACK_LINE(319)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(319)
							o->outer = null();
						}
						HX_STACK_LINE(319)
						o->_isimmutable = null();
						HX_STACK_LINE(319)
						o->_validate = null();
						HX_STACK_LINE(319)
						o->_invalidate = null();
					}
					HX_STACK_LINE(319)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(319)
			true;
		}
		else{
			HX_STACK_LINE(319)
			false;
		}
		HX_STACK_LINE(319)
		ret;
	}
	HX_STACK_LINE(321)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(321)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(321)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor2,return )

Float WeldJoint_obj::get_phase( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_phase",0x9dc19b1d,"nape.constraint.WeldJoint.get_phase","nape/constraint/WeldJoint.hx",331,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	return this->zpp_inner_zn->phase;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_phase,return )

Float WeldJoint_obj::set_phase( Float phase){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_phase",0x81128729,"nape.constraint.WeldJoint.set_phase","nape/constraint/WeldJoint.hx",333,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(phase,"phase")
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(335)
		this->zpp_inner->immutable_midstep(HX_CSTRING("WeldJoint::phase"));
		HX_STACK_LINE(341)
		if (((this->zpp_inner_zn->phase != phase))){
			HX_STACK_LINE(342)
			this->zpp_inner_zn->phase = phase;
			HX_STACK_LINE(343)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(346)
	return this->zpp_inner_zn->phase;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_phase,return )

::nape::geom::MatMN WeldJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","impulse",0x8a051e80,"nape.constraint.WeldJoint.impulse","nape/constraint/WeldJoint.hx",385,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)3,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(387)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	HX_STACK_LINE(388)
	ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	HX_STACK_LINE(389)
	ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccz;
	HX_STACK_LINE(390)
	return ret;
}


::nape::geom::Vec3 WeldJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.WeldJoint","bodyImpulse",0xb2ac857e,"nape.constraint.WeldJoint.bodyImpulse","nape/constraint/WeldJoint.hx",404,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(404)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(405)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(408)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(404)
	return null();
}


Void WeldJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.WeldJoint","visitBodies",0x376902f6,"nape.constraint.WeldJoint.visitBodies","nape/constraint/WeldJoint.hx",414,0x63bebec5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(415)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(416)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(418)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(419)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}



WeldJoint_obj::WeldJoint_obj()
{
}

void WeldJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeldJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeldJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WeldJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"phase") ) { return get_phase(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_phase") ) { return get_phase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_phase") ) { return set_phase_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeldJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"phase") ) { return set_phase(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return set_anchor2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_WeldJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeldJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("phase"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_WeldJoint*/ ,(int)offsetof(WeldJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
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
	HX_CSTRING("get_phase"),
	HX_CSTRING("set_phase"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

#endif

Class WeldJoint_obj::__mClass;

void WeldJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.WeldJoint"), hx::TCanCast< WeldJoint_obj> ,sStaticFields,sMemberFields,
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

void WeldJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
