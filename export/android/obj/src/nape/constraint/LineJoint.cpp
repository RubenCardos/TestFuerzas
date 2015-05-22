#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
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

Void LineJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{
HX_STACK_FRAME("nape.constraint.LineJoint","new",0xe137bcfd,"nape.constraint.LineJoint.new","nape/constraint/LineJoint.hx",208,0xe7850eb3)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
{
	HX_STACK_LINE(212)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(430)
	::zpp_nape::constraint::ZPP_LineJoint _g = ::zpp_nape::constraint::ZPP_LineJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(430)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(431)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(432)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(433)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(441)
	super::__construct();
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(443)
			if (((body1 == null()))){
				HX_STACK_LINE(443)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(443)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(443)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(443)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(443)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(443)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(443)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(443)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(443)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(443)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(443)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(443)
					if (((inbody1 != null()))){
						HX_STACK_LINE(443)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(443)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(443)
					this->zpp_inner->wake();
					HX_STACK_LINE(443)
					if (((inbody1 != null()))){
						HX_STACK_LINE(443)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(443)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(443)
			Dynamic();
		}
		else{
			HX_STACK_LINE(443)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(444)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(444)
			if (((body2 == null()))){
				HX_STACK_LINE(444)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(444)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(444)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(444)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(444)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(444)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(444)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(444)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(444)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(444)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(444)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(444)
					if (((inbody2 != null()))){
						HX_STACK_LINE(444)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(444)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(444)
					this->zpp_inner->wake();
					HX_STACK_LINE(444)
					if (((inbody2 != null()))){
						HX_STACK_LINE(444)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(444)
			Dynamic();
		}
		else{
			HX_STACK_LINE(444)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				if (((this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(445)
					this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(445)
				_this = this->zpp_inner_zn->wrap_a1;
			}
			HX_STACK_LINE(445)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(445)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(445)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(445)
					x = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(445)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(445)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(445)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(445)
					y = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(445)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(445)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(445)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(445)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",445,0xe7850eb3)
						{
							HX_STACK_LINE(445)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(445)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(445)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(445)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(445)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(445)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(445)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(445)
						{
						}
					}
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(445)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(445)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(445)
				ret = _this;
			}
			HX_STACK_LINE(445)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(445)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(445)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(445)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(445)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							if (((o->outer != null()))){
								HX_STACK_LINE(445)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(445)
								o->outer = null();
							}
							HX_STACK_LINE(445)
							o->_isimmutable = null();
							HX_STACK_LINE(445)
							o->_validate = null();
							HX_STACK_LINE(445)
							o->_invalidate = null();
						}
						HX_STACK_LINE(445)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(445)
				true;
			}
			else{
				HX_STACK_LINE(445)
				false;
			}
			HX_STACK_LINE(445)
			ret;
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(445)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(445)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				if (((this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(446)
					this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(446)
				_this = this->zpp_inner_zn->wrap_a2;
			}
			HX_STACK_LINE(446)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(446)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(446)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(446)
					x = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(446)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(446)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(446)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(446)
					y = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(446)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(446)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(446)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(446)
					_g3 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",446,0xe7850eb3)
						{
							HX_STACK_LINE(446)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(446)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(446)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(446)
								_g4 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(446)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(446)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(446)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(446)
						{
						}
					}
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(446)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(446)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(446)
				ret = _this;
			}
			HX_STACK_LINE(446)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(446)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(446)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(446)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(446)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							if (((o->outer != null()))){
								HX_STACK_LINE(446)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(446)
								o->outer = null();
							}
							HX_STACK_LINE(446)
							o->_isimmutable = null();
							HX_STACK_LINE(446)
							o->_validate = null();
							HX_STACK_LINE(446)
							o->_invalidate = null();
						}
						HX_STACK_LINE(446)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(446)
				true;
			}
			else{
				HX_STACK_LINE(446)
				false;
			}
			HX_STACK_LINE(446)
			ret;
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(446)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(446)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(447)
	{
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				if (((this->zpp_inner_zn->wrap_n == null()))){
					HX_STACK_LINE(447)
					this->zpp_inner_zn->setup_n();
				}
				HX_STACK_LINE(447)
				_this = this->zpp_inner_zn->wrap_n;
			}
			HX_STACK_LINE(447)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(447)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(447)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(447)
					x = direction->zpp_inner->x;
				}
				HX_STACK_LINE(447)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(447)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(447)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(447)
					y = direction->zpp_inner->y;
				}
				HX_STACK_LINE(447)
				Float _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(447)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(447)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(447)
					_g5 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",447,0xe7850eb3)
						{
							HX_STACK_LINE(447)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								{
									HX_STACK_LINE(447)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(447)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(447)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(447)
								_g6 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(447)
							return (_g6 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(447)
				if ((!(((  (((_g5 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(447)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(447)
						{
						}
					}
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(447)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(447)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(447)
				ret = _this;
			}
			HX_STACK_LINE(447)
			if ((direction->zpp_inner->weak)){
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(447)
					direction->zpp_inner->outer = null();
					HX_STACK_LINE(447)
					direction->zpp_inner = null();
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(447)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(447)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							if (((o->outer != null()))){
								HX_STACK_LINE(447)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(447)
								o->outer = null();
							}
							HX_STACK_LINE(447)
							o->_isimmutable = null();
							HX_STACK_LINE(447)
							o->_validate = null();
							HX_STACK_LINE(447)
							o->_invalidate = null();
						}
						HX_STACK_LINE(447)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(447)
				true;
			}
			else{
				HX_STACK_LINE(447)
				false;
			}
			HX_STACK_LINE(447)
			ret;
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			if (((this->zpp_inner_zn->wrap_n == null()))){
				HX_STACK_LINE(447)
				this->zpp_inner_zn->setup_n();
			}
			HX_STACK_LINE(447)
			this->zpp_inner_zn->wrap_n;
		}
	}
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMin"));
			HX_STACK_LINE(448)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(448)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(448)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(448)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(449)
	{
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMax"));
			HX_STACK_LINE(449)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(449)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(449)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(449)
		this->zpp_inner_zn->jointMax;
	}
}
;
	return null();
}

//LineJoint_obj::~LineJoint_obj() { }

Dynamic LineJoint_obj::__CreateEmpty() { return  new LineJoint_obj; }
hx::ObjectPtr< LineJoint_obj > LineJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{  hx::ObjectPtr< LineJoint_obj > result = new LineJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2,direction,jointMin,jointMax);
	return result;}

Dynamic LineJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineJoint_obj > result = new LineJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::nape::phys::Body LineJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_body1",0x71dff003,"nape.constraint.LineJoint.get_body1","nape/constraint/LineJoint.hx",222,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(222)
		return null();
	}
	else{
		HX_STACK_LINE(222)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(222)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body1,return )

::nape::phys::Body LineJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_body1",0x5530dc0f,"nape.constraint.LineJoint.set_body1","nape/constraint/LineJoint.hx",224,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(226)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(227)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(227)
		if (((body1 == null()))){
			HX_STACK_LINE(227)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(227)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(228)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(229)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(230)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(232)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(232)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(235)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(235)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(237)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(238)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(240)
				if (((inbody1 != null()))){
					HX_STACK_LINE(240)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(243)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(244)
				this->zpp_inner->wake();
				HX_STACK_LINE(245)
				if (((inbody1 != null()))){
					HX_STACK_LINE(245)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(249)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(249)
		return null();
	}
	else{
		HX_STACK_LINE(249)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(249)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body1,return )

::nape::phys::Body LineJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_body2",0x71dff004,"nape.constraint.LineJoint.get_body2","nape/constraint/LineJoint.hx",260,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(260)
		return null();
	}
	else{
		HX_STACK_LINE(260)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(260)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body2,return )

::nape::phys::Body LineJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_body2",0x5530dc10,"nape.constraint.LineJoint.set_body2","nape/constraint/LineJoint.hx",262,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(264)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(265)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(265)
		if (((body2 == null()))){
			HX_STACK_LINE(265)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(265)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(266)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(267)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(268)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(270)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(270)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(273)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(273)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(275)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(276)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(278)
				if (((inbody2 != null()))){
					HX_STACK_LINE(278)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(281)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(282)
				this->zpp_inner->wake();
				HX_STACK_LINE(283)
				if (((inbody2 != null()))){
					HX_STACK_LINE(283)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(287)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(287)
		return null();
	}
	else{
		HX_STACK_LINE(287)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(287)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body2,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_anchor1",0x6f599dd0,"nape.constraint.LineJoint.get_anchor1","nape/constraint/LineJoint.hx",296,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(297)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(298)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor1,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_anchor1",0x79c6a4dc,"nape.constraint.LineJoint.set_anchor1","nape/constraint/LineJoint.hx",300,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(310)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(310)
			_this = this->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(310)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(310)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(310)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(310)
				x = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(310)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(310)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(310)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(310)
				y = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(310)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(310)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(310)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(310)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",310,0xe7850eb3)
					{
						HX_STACK_LINE(310)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(310)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(310)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(310)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(310)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(310)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(310)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(310)
					{
					}
				}
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(310)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(310)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(310)
			ret = _this;
		}
		HX_STACK_LINE(310)
		if ((anchor1->zpp_inner->weak)){
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(310)
				anchor1->zpp_inner->outer = null();
				HX_STACK_LINE(310)
				anchor1->zpp_inner = null();
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(310)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(310)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						if (((o->outer != null()))){
							HX_STACK_LINE(310)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(310)
							o->outer = null();
						}
						HX_STACK_LINE(310)
						o->_isimmutable = null();
						HX_STACK_LINE(310)
						o->_validate = null();
						HX_STACK_LINE(310)
						o->_invalidate = null();
					}
					HX_STACK_LINE(310)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(310)
			true;
		}
		else{
			HX_STACK_LINE(310)
			false;
		}
		HX_STACK_LINE(310)
		ret;
	}
	HX_STACK_LINE(312)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(312)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(312)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor1,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_anchor2",0x6f599dd1,"nape.constraint.LineJoint.get_anchor2","nape/constraint/LineJoint.hx",321,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(322)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(323)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_anchor2",0x79c6a4dd,"nape.constraint.LineJoint.set_anchor2","nape/constraint/LineJoint.hx",325,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(335)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(335)
			_this = this->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(335)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(335)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(335)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(335)
				x = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(335)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(335)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(335)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(335)
				y = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(335)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(335)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(335)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(335)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",335,0xe7850eb3)
					{
						HX_STACK_LINE(335)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(335)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(335)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(335)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(335)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(335)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(335)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(335)
					{
					}
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(335)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(335)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(335)
			ret = _this;
		}
		HX_STACK_LINE(335)
		if ((anchor2->zpp_inner->weak)){
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(335)
				anchor2->zpp_inner->outer = null();
				HX_STACK_LINE(335)
				anchor2->zpp_inner = null();
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(335)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(335)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						if (((o->outer != null()))){
							HX_STACK_LINE(335)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(335)
							o->outer = null();
						}
						HX_STACK_LINE(335)
						o->_isimmutable = null();
						HX_STACK_LINE(335)
						o->_validate = null();
						HX_STACK_LINE(335)
						o->_invalidate = null();
					}
					HX_STACK_LINE(335)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(335)
			true;
		}
		else{
			HX_STACK_LINE(335)
			false;
		}
		HX_STACK_LINE(335)
		ret;
	}
	HX_STACK_LINE(337)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(337)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(337)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::get_direction( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_direction",0xdf8ee8f3,"nape.constraint.LineJoint.get_direction","nape/constraint/LineJoint.hx",347,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	if (((this->zpp_inner_zn->wrap_n == null()))){
		HX_STACK_LINE(348)
		this->zpp_inner_zn->setup_n();
	}
	HX_STACK_LINE(349)
	return this->zpp_inner_zn->wrap_n;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_direction,return )

::nape::geom::Vec2 LineJoint_obj::set_direction( ::nape::geom::Vec2 direction){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_direction",0x2494caff,"nape.constraint.LineJoint.set_direction","nape/constraint/LineJoint.hx",351,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(361)
	{
		HX_STACK_LINE(361)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			if (((this->zpp_inner_zn->wrap_n == null()))){
				HX_STACK_LINE(361)
				this->zpp_inner_zn->setup_n();
			}
			HX_STACK_LINE(361)
			_this = this->zpp_inner_zn->wrap_n;
		}
		HX_STACK_LINE(361)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(361)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(361)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(361)
				x = direction->zpp_inner->x;
			}
			HX_STACK_LINE(361)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(361)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(361)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(361)
				y = direction->zpp_inner->y;
			}
			HX_STACK_LINE(361)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(361)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(361)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(361)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/LineJoint.hx",361,0xe7850eb3)
					{
						HX_STACK_LINE(361)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(361)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(361)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(361)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(361)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(361)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(361)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(361)
					{
					}
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(361)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(361)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(361)
			ret = _this;
		}
		HX_STACK_LINE(361)
		if ((direction->zpp_inner->weak)){
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(361)
				direction->zpp_inner->outer = null();
				HX_STACK_LINE(361)
				direction->zpp_inner = null();
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(361)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(361)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						if (((o->outer != null()))){
							HX_STACK_LINE(361)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(361)
							o->outer = null();
						}
						HX_STACK_LINE(361)
						o->_isimmutable = null();
						HX_STACK_LINE(361)
						o->_validate = null();
						HX_STACK_LINE(361)
						o->_invalidate = null();
					}
					HX_STACK_LINE(361)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(361)
			true;
		}
		else{
			HX_STACK_LINE(361)
			false;
		}
		HX_STACK_LINE(361)
		ret;
	}
	HX_STACK_LINE(363)
	if (((this->zpp_inner_zn->wrap_n == null()))){
		HX_STACK_LINE(363)
		this->zpp_inner_zn->setup_n();
	}
	HX_STACK_LINE(363)
	return this->zpp_inner_zn->wrap_n;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_direction,return )

Float LineJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_jointMin",0x0929c634,"nape.constraint.LineJoint.get_jointMin","nape/constraint/LineJoint.hx",373,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMin,return )

Float LineJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_jointMin",0x1e22e9a8,"nape.constraint.LineJoint.set_jointMin","nape/constraint/LineJoint.hx",375,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(377)
		this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMin"));
		HX_STACK_LINE(383)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(384)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(385)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(388)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMin,return )

Float LineJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_jointMax",0x0929bf46,"nape.constraint.LineJoint.get_jointMax","nape/constraint/LineJoint.hx",398,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMax,return )

Float LineJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_jointMax",0x1e22e2ba,"nape.constraint.LineJoint.set_jointMax","nape/constraint/LineJoint.hx",400,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMax"));
		HX_STACK_LINE(408)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(409)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(410)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(413)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMax,return )

::nape::geom::MatMN LineJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","impulse",0xf2f04fd2,"nape.constraint.LineJoint.impulse","nape/constraint/LineJoint.hx",456,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(457)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(458)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	HX_STACK_LINE(459)
	ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	HX_STACK_LINE(460)
	return ret;
}


::nape::geom::Vec3 LineJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.LineJoint","bodyImpulse",0x465fc7d0,"nape.constraint.LineJoint.bodyImpulse","nape/constraint/LineJoint.hx",474,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(474)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(475)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(478)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(474)
	return null();
}


Void LineJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.LineJoint","visitBodies",0xcb1c4548,"nape.constraint.LineJoint.visitBodies","nape/constraint/LineJoint.hx",484,0xe7850eb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(485)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(486)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(488)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(489)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}



LineJoint_obj::LineJoint_obj()
{
}

void LineJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LineJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return get_anchor2(); }
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
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
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
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_LineJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_LineJoint*/ ,(int)offsetof(LineJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
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
	HX_CSTRING("get_direction"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("get_jointMin"),
	HX_CSTRING("set_jointMin"),
	HX_CSTRING("get_jointMax"),
	HX_CSTRING("set_jointMax"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

#endif

Class LineJoint_obj::__mClass;

void LineJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.LineJoint"), hx::TCanCast< LineJoint_obj> ,sStaticFields,sMemberFields,
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

void LineJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
