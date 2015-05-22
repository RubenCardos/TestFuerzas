#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
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

Void PivotJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{
HX_STACK_FRAME("nape.constraint.PivotJoint","new",0xa526f225,"nape.constraint.PivotJoint.new","nape/constraint/PivotJoint.hx",186,0x587fe74b)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
{
	HX_STACK_LINE(190)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(329)
	::zpp_nape::constraint::ZPP_PivotJoint _g = ::zpp_nape::constraint::ZPP_PivotJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(329)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(330)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(331)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(332)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(340)
	super::__construct();
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(342)
			if (((body1 == null()))){
				HX_STACK_LINE(342)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(342)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(342)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(342)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(342)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(342)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(342)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(342)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(342)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(342)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(342)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(342)
					if (((inbody1 != null()))){
						HX_STACK_LINE(342)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(342)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(342)
					this->zpp_inner->wake();
					HX_STACK_LINE(342)
					if (((inbody1 != null()))){
						HX_STACK_LINE(342)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(342)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(342)
			Dynamic();
		}
		else{
			HX_STACK_LINE(342)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(343)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(343)
			if (((body2 == null()))){
				HX_STACK_LINE(343)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(343)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(343)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(343)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(343)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(343)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(343)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(343)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(343)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(343)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(343)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(343)
					if (((inbody2 != null()))){
						HX_STACK_LINE(343)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(343)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(343)
					this->zpp_inner->wake();
					HX_STACK_LINE(343)
					if (((inbody2 != null()))){
						HX_STACK_LINE(343)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(343)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(343)
			Dynamic();
		}
		else{
			HX_STACK_LINE(343)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				if (((this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(344)
					this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(344)
				_this = this->zpp_inner_zn->wrap_a1;
			}
			HX_STACK_LINE(344)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(344)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(344)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(344)
					x = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(344)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(344)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(344)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(344)
					y = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(344)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(344)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(344)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(344)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PivotJoint.hx",344,0x587fe74b)
						{
							HX_STACK_LINE(344)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(344)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(344)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(344)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(344)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(344)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(344)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(344)
						{
						}
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(344)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(344)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(344)
				ret = _this;
			}
			HX_STACK_LINE(344)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(344)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(344)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(344)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(344)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							if (((o->outer != null()))){
								HX_STACK_LINE(344)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(344)
								o->outer = null();
							}
							HX_STACK_LINE(344)
							o->_isimmutable = null();
							HX_STACK_LINE(344)
							o->_validate = null();
							HX_STACK_LINE(344)
							o->_invalidate = null();
						}
						HX_STACK_LINE(344)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(344)
				true;
			}
			else{
				HX_STACK_LINE(344)
				false;
			}
			HX_STACK_LINE(344)
			ret;
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(344)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(344)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				if (((this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(345)
					this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(345)
				_this = this->zpp_inner_zn->wrap_a2;
			}
			HX_STACK_LINE(345)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(345)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(345)
					x = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(345)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(345)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(345)
					y = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(345)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(345)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(345)
					_g3 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PivotJoint.hx",345,0x587fe74b)
						{
							HX_STACK_LINE(345)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								{
									HX_STACK_LINE(345)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(345)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(345)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(345)
								_g4 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(345)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(345)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(345)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(345)
						{
						}
					}
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(345)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(345)
				ret = _this;
			}
			HX_STACK_LINE(345)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(345)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(345)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(345)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(345)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							if (((o->outer != null()))){
								HX_STACK_LINE(345)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(345)
								o->outer = null();
							}
							HX_STACK_LINE(345)
							o->_isimmutable = null();
							HX_STACK_LINE(345)
							o->_validate = null();
							HX_STACK_LINE(345)
							o->_invalidate = null();
						}
						HX_STACK_LINE(345)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(345)
				true;
			}
			else{
				HX_STACK_LINE(345)
				false;
			}
			HX_STACK_LINE(345)
			ret;
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(345)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(345)
			this->zpp_inner_zn->wrap_a2;
		}
	}
}
;
	return null();
}

//PivotJoint_obj::~PivotJoint_obj() { }

Dynamic PivotJoint_obj::__CreateEmpty() { return  new PivotJoint_obj; }
hx::ObjectPtr< PivotJoint_obj > PivotJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{  hx::ObjectPtr< PivotJoint_obj > result = new PivotJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2);
	return result;}

Dynamic PivotJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PivotJoint_obj > result = new PivotJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::nape::phys::Body PivotJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_body1",0xc3ff732b,"nape.constraint.PivotJoint.get_body1","nape/constraint/PivotJoint.hx",200,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(200)
		return null();
	}
	else{
		HX_STACK_LINE(200)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(200)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body1,return )

::nape::phys::Body PivotJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_body1",0xa7505f37,"nape.constraint.PivotJoint.set_body1","nape/constraint/PivotJoint.hx",202,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(204)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(205)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(205)
		if (((body1 == null()))){
			HX_STACK_LINE(205)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(205)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(206)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(207)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(208)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(210)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(210)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(213)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(213)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(215)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(216)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(218)
				if (((inbody1 != null()))){
					HX_STACK_LINE(218)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(221)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(222)
				this->zpp_inner->wake();
				HX_STACK_LINE(223)
				if (((inbody1 != null()))){
					HX_STACK_LINE(223)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(227)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(227)
		return null();
	}
	else{
		HX_STACK_LINE(227)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(227)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body1,return )

::nape::phys::Body PivotJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_body2",0xc3ff732c,"nape.constraint.PivotJoint.get_body2","nape/constraint/PivotJoint.hx",238,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(238)
		return null();
	}
	else{
		HX_STACK_LINE(238)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(238)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body2,return )

::nape::phys::Body PivotJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_body2",0xa7505f38,"nape.constraint.PivotJoint.set_body2","nape/constraint/PivotJoint.hx",240,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(242)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(243)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(243)
		if (((body2 == null()))){
			HX_STACK_LINE(243)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(243)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(244)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(245)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(246)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(248)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(248)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(251)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(251)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(253)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(254)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(256)
				if (((inbody2 != null()))){
					HX_STACK_LINE(256)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(259)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(260)
				this->zpp_inner->wake();
				HX_STACK_LINE(261)
				if (((inbody2 != null()))){
					HX_STACK_LINE(261)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(265)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(265)
		return null();
	}
	else{
		HX_STACK_LINE(265)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(265)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body2,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_anchor1",0x2abe3af8,"nape.constraint.PivotJoint.get_anchor1","nape/constraint/PivotJoint.hx",274,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(275)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(276)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor1,return )

::nape::geom::Vec2 PivotJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_anchor1",0x352b4204,"nape.constraint.PivotJoint.set_anchor1","nape/constraint/PivotJoint.hx",278,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(288)
	{
		HX_STACK_LINE(288)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(288)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(288)
			_this = this->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(288)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(288)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(288)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(288)
				x = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(288)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(288)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(288)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(288)
				y = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(288)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(288)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(288)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(288)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PivotJoint.hx",288,0x587fe74b)
					{
						HX_STACK_LINE(288)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(288)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(288)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(288)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(288)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(288)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(288)
					{
					}
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(288)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(288)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(288)
			ret = _this;
		}
		HX_STACK_LINE(288)
		if ((anchor1->zpp_inner->weak)){
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(288)
				anchor1->zpp_inner->outer = null();
				HX_STACK_LINE(288)
				anchor1->zpp_inner = null();
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(288)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(288)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						if (((o->outer != null()))){
							HX_STACK_LINE(288)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(288)
							o->outer = null();
						}
						HX_STACK_LINE(288)
						o->_isimmutable = null();
						HX_STACK_LINE(288)
						o->_validate = null();
						HX_STACK_LINE(288)
						o->_invalidate = null();
					}
					HX_STACK_LINE(288)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(288)
			true;
		}
		else{
			HX_STACK_LINE(288)
			false;
		}
		HX_STACK_LINE(288)
		ret;
	}
	HX_STACK_LINE(290)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(290)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(290)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_anchor2",0x2abe3af9,"nape.constraint.PivotJoint.get_anchor2","nape/constraint/PivotJoint.hx",299,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(300)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(301)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PivotJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_anchor2",0x352b4205,"nape.constraint.PivotJoint.set_anchor2","nape/constraint/PivotJoint.hx",303,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(313)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(313)
			_this = this->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(313)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(313)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(313)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(313)
				x = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(313)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(313)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(313)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(313)
				y = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(313)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(313)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(313)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(313)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/PivotJoint.hx",313,0x587fe74b)
					{
						HX_STACK_LINE(313)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(313)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(313)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(313)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(313)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(313)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(313)
					{
					}
				}
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(313)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(313)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(313)
			ret = _this;
		}
		HX_STACK_LINE(313)
		if ((anchor2->zpp_inner->weak)){
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(313)
				anchor2->zpp_inner->outer = null();
				HX_STACK_LINE(313)
				anchor2->zpp_inner = null();
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(313)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(313)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						if (((o->outer != null()))){
							HX_STACK_LINE(313)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(313)
							o->outer = null();
						}
						HX_STACK_LINE(313)
						o->_isimmutable = null();
						HX_STACK_LINE(313)
						o->_validate = null();
						HX_STACK_LINE(313)
						o->_invalidate = null();
					}
					HX_STACK_LINE(313)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(313)
			true;
		}
		else{
			HX_STACK_LINE(313)
			false;
		}
		HX_STACK_LINE(313)
		ret;
	}
	HX_STACK_LINE(315)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(315)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(315)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor2,return )

::nape::geom::MatMN PivotJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","impulse",0x1f2538fa,"nape.constraint.PivotJoint.impulse","nape/constraint/PivotJoint.hx",352,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(354)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	HX_STACK_LINE(355)
	ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	HX_STACK_LINE(356)
	return ret;
}


::nape::geom::Vec3 PivotJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.PivotJoint","bodyImpulse",0x01c464f8,"nape.constraint.PivotJoint.bodyImpulse","nape/constraint/PivotJoint.hx",370,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(370)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(371)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(374)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(370)
	return null();
}


Void PivotJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.PivotJoint","visitBodies",0x8680e270,"nape.constraint.PivotJoint.visitBodies","nape/constraint/PivotJoint.hx",380,0x587fe74b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(381)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(382)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(384)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(385)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}



PivotJoint_obj::PivotJoint_obj()
{
}

void PivotJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PivotJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PivotJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PivotJoint_obj::__Field(const ::String &inName,bool inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PivotJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PivotJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PivotJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("anchor2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_PivotJoint*/ ,(int)offsetof(PivotJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
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
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

#endif

Class PivotJoint_obj::__mClass;

void PivotJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.PivotJoint"), hx::TCanCast< PivotJoint_obj> ,sStaticFields,sMemberFields,
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

void PivotJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
