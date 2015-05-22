#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_DistanceJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","new",0x66d03272,"zpp_nape.constraint.ZPP_DistanceJoint.new","zpp_nape/constraint/DistanceJoint.hx",174,0x52959e99)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(432)
	this->stepped = false;
	HX_STACK_LINE(431)
	this->bias = 0.0;
	HX_STACK_LINE(430)
	this->gamma = 0.0;
	HX_STACK_LINE(429)
	this->jMax = 0.0;
	HX_STACK_LINE(428)
	this->jAcc = 0.0;
	HX_STACK_LINE(427)
	this->kMass = 0.0;
	HX_STACK_LINE(426)
	this->wrap_a2 = null();
	HX_STACK_LINE(373)
	this->a2rely = 0.0;
	HX_STACK_LINE(372)
	this->a2relx = 0.0;
	HX_STACK_LINE(371)
	this->a2localy = 0.0;
	HX_STACK_LINE(370)
	this->a2localx = 0.0;
	HX_STACK_LINE(369)
	this->b2 = null();
	HX_STACK_LINE(368)
	this->wrap_a1 = null();
	HX_STACK_LINE(315)
	this->a1rely = 0.0;
	HX_STACK_LINE(314)
	this->a1relx = 0.0;
	HX_STACK_LINE(313)
	this->a1localy = 0.0;
	HX_STACK_LINE(312)
	this->a1localx = 0.0;
	HX_STACK_LINE(311)
	this->b1 = null();
	HX_STACK_LINE(287)
	this->cx2 = 0.0;
	HX_STACK_LINE(286)
	this->cx1 = 0.0;
	HX_STACK_LINE(285)
	this->ny = 0.0;
	HX_STACK_LINE(284)
	this->nx = 0.0;
	HX_STACK_LINE(179)
	this->equal = false;
	HX_STACK_LINE(178)
	this->slack = false;
	HX_STACK_LINE(177)
	this->jointMax = 0.0;
	HX_STACK_LINE(176)
	this->jointMin = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(481)
	super::__construct();
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(484)
			this->a1localx = (int)0;
			HX_STACK_LINE(485)
			this->a1localy = (int)0;
			HX_STACK_LINE(494)
			{
			}
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(504)
			this->a1relx = (int)0;
			HX_STACK_LINE(505)
			this->a1rely = (int)0;
			HX_STACK_LINE(514)
			{
			}
		}
	}
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(526)
			this->a2localx = (int)0;
			HX_STACK_LINE(527)
			this->a2localy = (int)0;
			HX_STACK_LINE(536)
			{
			}
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(546)
			this->a2relx = (int)0;
			HX_STACK_LINE(547)
			this->a2rely = (int)0;
			HX_STACK_LINE(556)
			{
			}
		}
	}
	HX_STACK_LINE(566)
	this->jAcc = (int)0;
	HX_STACK_LINE(567)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(568)
	this->stepped = false;
	HX_STACK_LINE(569)
	Float _g = this->cx2 = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(569)
	this->cx1 = _g;
}
;
	return null();
}

//ZPP_DistanceJoint_obj::~ZPP_DistanceJoint_obj() { }

Dynamic ZPP_DistanceJoint_obj::__CreateEmpty() { return  new ZPP_DistanceJoint_obj; }
hx::ObjectPtr< ZPP_DistanceJoint_obj > ZPP_DistanceJoint_obj::__new()
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > result = new ZPP_DistanceJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > result = new ZPP_DistanceJoint_obj();
	result->__construct();
	return result;}

bool ZPP_DistanceJoint_obj::is_slack( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","is_slack",0x624afda9,"zpp_nape.constraint.ZPP_DistanceJoint.is_slack","zpp_nape/constraint/DistanceJoint.hx",182,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(185)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(186)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(189)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(190)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(192)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(193)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(195)
		nx = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(196)
		ny = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(197)
		Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(198)
		if (((C < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(200)
				nx = (int)0;
				HX_STACK_LINE(201)
				ny = (int)0;
				HX_STACK_LINE(210)
				{
				}
			}
			HX_STACK_LINE(219)
			C = (int)0;
			HX_STACK_LINE(220)
			slack = true;
		}
		else{
			HX_STACK_LINE(223)
			Float _g = ::Math_obj::sqrt(C);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			C = _g;
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(225)
				Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(234)
				hx::MultEq(nx,t);
				HX_STACK_LINE(235)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(237)
			if ((this->equal)){
				HX_STACK_LINE(238)
				hx::SubEq(C,this->jointMax);
				HX_STACK_LINE(239)
				slack = false;
			}
			else{
				HX_STACK_LINE(242)
				if (((C < this->jointMin))){
					HX_STACK_LINE(243)
					C = (this->jointMin - C);
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(245)
						nx = -(nx);
						HX_STACK_LINE(246)
						ny = -(ny);
					}
					HX_STACK_LINE(248)
					slack = false;
				}
				else{
					HX_STACK_LINE(250)
					if (((C > this->jointMax))){
						HX_STACK_LINE(251)
						hx::SubEq(C,this->jointMax);
						HX_STACK_LINE(252)
						slack = false;
					}
					else{
						HX_STACK_LINE(255)
						{
							HX_STACK_LINE(256)
							nx = (int)0;
							HX_STACK_LINE(257)
							ny = (int)0;
							HX_STACK_LINE(266)
							{
							}
						}
						HX_STACK_LINE(275)
						C = (int)0;
						HX_STACK_LINE(276)
						slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(280)
		C;
	}
	HX_STACK_LINE(282)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,is_slack,return )

::nape::geom::Vec3 ZPP_DistanceJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","bodyImpulse",0xe14a3a45,"zpp_nape.constraint.ZPP_DistanceJoint.bodyImpulse","zpp_nape/constraint/DistanceJoint.hx",289,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(289)
	if ((this->stepped)){
		HX_STACK_LINE(290)
		if (((b == this->b1))){
			HX_STACK_LINE(290)
			return ::nape::geom::Vec3_obj::get((-(this->jAcc) * this->nx),(-(this->jAcc) * this->ny),(-(this->cx1) * this->jAcc));
		}
		else{
			HX_STACK_LINE(291)
			return ::nape::geom::Vec3_obj::get((this->jAcc * this->nx),(this->jAcc * this->ny),(this->cx2 * this->jAcc));
		}
	}
	else{
		HX_STACK_LINE(293)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(289)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,bodyImpulse,return )

Void ZPP_DistanceJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","activeBodies",0xac1c3594,"zpp_nape.constraint.ZPP_DistanceJoint.activeBodies","zpp_nape/constraint/DistanceJoint.hx",295,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		if (((this->b1 != null()))){
			HX_STACK_LINE(297)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(299)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(300)
			if (((this->b2 != null()))){
				HX_STACK_LINE(300)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","inactiveBodies",0xe7361c79,"zpp_nape.constraint.ZPP_DistanceJoint.inactiveBodies","zpp_nape/constraint/DistanceJoint.hx",303,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(305)
		if (((this->b1 != null()))){
			HX_STACK_LINE(305)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(307)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(308)
			if (((this->b2 != null()))){
				HX_STACK_LINE(308)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate_a1",0x4c74600b,"zpp_nape.constraint.ZPP_DistanceJoint.validate_a1","zpp_nape/constraint/DistanceJoint.hx",317,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(318)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(319)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(328)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a1,(void))

Void ZPP_DistanceJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","invalidate_a1",0xb52f9cc6,"zpp_nape.constraint.ZPP_DistanceJoint.invalidate_a1","zpp_nape/constraint/DistanceJoint.hx",338,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(339)
		this->immutable_midstep(HX_CSTRING("Constraint::a1"));
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(341)
			this->a1localx = x->x;
			HX_STACK_LINE(342)
			this->a1localy = x->y;
			HX_STACK_LINE(351)
			{
			}
		}
		HX_STACK_LINE(360)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a1,(void))

Void ZPP_DistanceJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","setup_a1",0xe7060520,"zpp_nape.constraint.ZPP_DistanceJoint.setup_a1","zpp_nape/constraint/DistanceJoint.hx",362,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			Float x = this->a1localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(363)
			Float y = this->a1localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(363)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(363)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(363)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(363)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				ret = _g;
			}
			else{
				HX_STACK_LINE(363)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(363)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(363)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(363)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(363)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(363)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(363)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(363)
							ret1->next = null();
						}
						HX_STACK_LINE(363)
						ret1->weak = false;
					}
					HX_STACK_LINE(363)
					ret1->_immutable = immutable;
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						ret1->x = x;
						HX_STACK_LINE(363)
						ret1->y = y;
						HX_STACK_LINE(363)
						{
						}
					}
					HX_STACK_LINE(363)
					_g2 = ret1;
				}
				HX_STACK_LINE(363)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(363)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(363)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(363)
							_this->_validate();
						}
					}
					HX_STACK_LINE(363)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/DistanceJoint.hx",363,0x52959e99)
						{
							HX_STACK_LINE(363)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								{
									HX_STACK_LINE(363)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(363)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(363)
										_this->_validate();
									}
								}
								HX_STACK_LINE(363)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(363)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(363)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(363)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(363)
						{
						}
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(363)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(363)
				ret;
			}
			HX_STACK_LINE(363)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(363)
			_g5 = ret;
		}
		HX_STACK_LINE(363)
		this->wrap_a1 = _g5;
		HX_STACK_LINE(364)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(365)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(366)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a1,(void))

Void ZPP_DistanceJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate_a2",0x4c74600c,"zpp_nape.constraint.ZPP_DistanceJoint.validate_a2","zpp_nape/constraint/DistanceJoint.hx",375,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(377)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(386)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a2,(void))

Void ZPP_DistanceJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","invalidate_a2",0xb52f9cc7,"zpp_nape.constraint.ZPP_DistanceJoint.invalidate_a2","zpp_nape/constraint/DistanceJoint.hx",396,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(397)
		this->immutable_midstep(HX_CSTRING("Constraint::a2"));
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(399)
			this->a2localx = x->x;
			HX_STACK_LINE(400)
			this->a2localy = x->y;
			HX_STACK_LINE(409)
			{
			}
		}
		HX_STACK_LINE(418)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a2,(void))

Void ZPP_DistanceJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","setup_a2",0xe7060521,"zpp_nape.constraint.ZPP_DistanceJoint.setup_a2","zpp_nape/constraint/DistanceJoint.hx",420,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			Float x = this->a2localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(421)
			Float y = this->a2localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(421)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(421)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(421)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(421)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(421)
				ret = _g;
			}
			else{
				HX_STACK_LINE(421)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(421)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(421)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(421)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(421)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(421)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(421)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(421)
							ret1->next = null();
						}
						HX_STACK_LINE(421)
						ret1->weak = false;
					}
					HX_STACK_LINE(421)
					ret1->_immutable = immutable;
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						ret1->x = x;
						HX_STACK_LINE(421)
						ret1->y = y;
						HX_STACK_LINE(421)
						{
						}
					}
					HX_STACK_LINE(421)
					_g2 = ret1;
				}
				HX_STACK_LINE(421)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(421)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(421)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(421)
							_this->_validate();
						}
					}
					HX_STACK_LINE(421)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/DistanceJoint.hx",421,0x52959e99)
						{
							HX_STACK_LINE(421)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(421)
										_this->_validate();
									}
								}
								HX_STACK_LINE(421)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(421)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(421)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(421)
						{
						}
					}
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(421)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(421)
				ret;
			}
			HX_STACK_LINE(421)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(421)
			_g5 = ret;
		}
		HX_STACK_LINE(421)
		this->wrap_a2 = _g5;
		HX_STACK_LINE(422)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(423)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(424)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a2,(void))

::nape::constraint::Constraint ZPP_DistanceJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","copy",0x881e2963,"zpp_nape.constraint.ZPP_DistanceJoint.copy","zpp_nape/constraint/DistanceJoint.hx",433,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(434)
	::nape::geom::Vec2 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(434)
		if (((_this->zpp_inner_zn->wrap_a1 == null()))){
			HX_STACK_LINE(434)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(434)
		_g = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(434)
	::nape::geom::Vec2 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(434)
		if (((_this->zpp_inner_zn->wrap_a2 == null()))){
			HX_STACK_LINE(434)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(434)
		_g1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(434)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::DistanceJoint_obj::__new(null(),null(),_g,_g1,this->jointMin,this->jointMax));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(435)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >());
	HX_STACK_LINE(437)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(446)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(447)
			while((true)){
				HX_STACK_LINE(447)
				if ((!(((_g2 < dict->length))))){
					HX_STACK_LINE(447)
					break;
				}
				HX_STACK_LINE(447)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g2).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(447)
				++(_g2);
				HX_STACK_LINE(448)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(449)
					b = idc->bc;
					HX_STACK_LINE(450)
					break;
				}
			}
		}
		HX_STACK_LINE(453)
		if (((b != null()))){
			HX_STACK_LINE(453)
			ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/DistanceJoint.hx",454,0x52959e99)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(454)
					ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(454)
			::zpp_nape::constraint::ZPP_CopyHelper _g2 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(454)
			todo->push(_g2);
		}
	}
	HX_STACK_LINE(458)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(467)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				if ((!(((_g2 < dict->length))))){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(468)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g2).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(468)
				++(_g2);
				HX_STACK_LINE(469)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(470)
					b = idc->bc;
					HX_STACK_LINE(471)
					break;
				}
			}
		}
		HX_STACK_LINE(474)
		if (((b != null()))){
			HX_STACK_LINE(474)
			ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/DistanceJoint.hx",475,0x52959e99)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(475)
					ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(475)
			::zpp_nape::constraint::ZPP_CopyHelper _g3 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(475)
			todo->push(_g3);
		}
	}
	HX_STACK_LINE(478)
	return ret->__get((int)0).StaticCast< ::nape::constraint::DistanceJoint >();
}


Void ZPP_DistanceJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate",0xc8b0ad44,"zpp_nape.constraint.ZPP_DistanceJoint.validate","zpp_nape/constraint/DistanceJoint.hx",571,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(572)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(572)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(573)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(573)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(574)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(574)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(575)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(575)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(576)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(576)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","wake_connected",0x984e62dc,"zpp_nape.constraint.ZPP_DistanceJoint.wake_connected","zpp_nape/constraint/DistanceJoint.hx",578,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(579)
			this->b1->wake();
		}
		HX_STACK_LINE(580)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(580)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","forest",0x9f5b420b,"zpp_nape.constraint.ZPP_DistanceJoint.forest","zpp_nape/constraint/DistanceJoint.hx",582,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(583)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(584)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(584)
			if (((this->b1->component == this->b1->component->parent))){
				HX_STACK_LINE(585)
				xr = this->b1->component;
			}
			else{
				HX_STACK_LINE(587)
				::zpp_nape::space::ZPP_Component obj = this->b1->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(588)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(589)
				while((true)){
					HX_STACK_LINE(589)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(589)
						break;
					}
					HX_STACK_LINE(590)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(591)
					obj->parent = stack;
					HX_STACK_LINE(592)
					stack = obj;
					HX_STACK_LINE(593)
					obj = nxt;
				}
				HX_STACK_LINE(595)
				while((true)){
					HX_STACK_LINE(595)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(595)
						break;
					}
					HX_STACK_LINE(596)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(597)
					stack->parent = obj;
					HX_STACK_LINE(598)
					stack = nxt;
				}
				HX_STACK_LINE(600)
				xr = obj;
			}
			HX_STACK_LINE(603)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(603)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(604)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(606)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(607)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(608)
				while((true)){
					HX_STACK_LINE(608)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(608)
						break;
					}
					HX_STACK_LINE(609)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(610)
					obj->parent = stack;
					HX_STACK_LINE(611)
					stack = obj;
					HX_STACK_LINE(612)
					obj = nxt;
				}
				HX_STACK_LINE(614)
				while((true)){
					HX_STACK_LINE(614)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(614)
						break;
					}
					HX_STACK_LINE(615)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(616)
					stack->parent = obj;
					HX_STACK_LINE(617)
					stack = nxt;
				}
				HX_STACK_LINE(619)
				yr = obj;
			}
			HX_STACK_LINE(622)
			if (((xr != yr))){
				HX_STACK_LINE(623)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(623)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(624)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(624)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(626)
						yr->parent = xr;
						HX_STACK_LINE(627)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(631)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(632)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(632)
			if (((this->b2->component == this->b2->component->parent))){
				HX_STACK_LINE(633)
				xr = this->b2->component;
			}
			else{
				HX_STACK_LINE(635)
				::zpp_nape::space::ZPP_Component obj = this->b2->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(636)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(637)
				while((true)){
					HX_STACK_LINE(637)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(637)
						break;
					}
					HX_STACK_LINE(638)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(639)
					obj->parent = stack;
					HX_STACK_LINE(640)
					stack = obj;
					HX_STACK_LINE(641)
					obj = nxt;
				}
				HX_STACK_LINE(643)
				while((true)){
					HX_STACK_LINE(643)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(643)
						break;
					}
					HX_STACK_LINE(644)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(645)
					stack->parent = obj;
					HX_STACK_LINE(646)
					stack = nxt;
				}
				HX_STACK_LINE(648)
				xr = obj;
			}
			HX_STACK_LINE(651)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(651)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(652)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(654)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(655)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(656)
				while((true)){
					HX_STACK_LINE(656)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(656)
						break;
					}
					HX_STACK_LINE(657)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(658)
					obj->parent = stack;
					HX_STACK_LINE(659)
					stack = obj;
					HX_STACK_LINE(660)
					obj = nxt;
				}
				HX_STACK_LINE(662)
				while((true)){
					HX_STACK_LINE(662)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(662)
						break;
					}
					HX_STACK_LINE(663)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(664)
					stack->parent = obj;
					HX_STACK_LINE(665)
					stack = nxt;
				}
				HX_STACK_LINE(667)
				yr = obj;
			}
			HX_STACK_LINE(670)
			if (((xr != yr))){
				HX_STACK_LINE(671)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(671)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(672)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(672)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(674)
						yr->parent = xr;
						HX_STACK_LINE(675)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","pair_exists",0xeb002eb3,"zpp_nape.constraint.ZPP_DistanceJoint.pair_exists","zpp_nape/constraint/DistanceJoint.hx",681,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(681)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_DistanceJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","clearcache",0x79314dc3,"zpp_nape.constraint.ZPP_DistanceJoint.clearcache","zpp_nape/constraint/DistanceJoint.hx",683,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(684)
		this->jAcc = (int)0;
		HX_STACK_LINE(685)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_DistanceJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","preStep",0x1b4c9421,"zpp_nape.constraint.ZPP_DistanceJoint.preStep","zpp_nape/constraint/DistanceJoint.hx",687,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(688)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(688)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(689)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(690)
	this->pre_dt = dt;
	HX_STACK_LINE(691)
	this->stepped = true;
	HX_STACK_LINE(692)
	this->equal = (this->jointMin == this->jointMax);
	HX_STACK_LINE(693)
	{
		HX_STACK_LINE(694)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(695)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(698)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(699)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(701)
	Float C;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(701)
	{
		HX_STACK_LINE(702)
		this->nx = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(703)
		this->ny = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(704)
		Float C1 = ((this->nx * this->nx) + (this->ny * this->ny));		HX_STACK_VAR(C1,"C1");
		HX_STACK_LINE(705)
		if (((C1 < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(707)
				this->nx = (int)0;
				HX_STACK_LINE(708)
				this->ny = (int)0;
				HX_STACK_LINE(717)
				{
				}
			}
			HX_STACK_LINE(726)
			C1 = (int)0;
			HX_STACK_LINE(727)
			this->slack = true;
		}
		else{
			HX_STACK_LINE(730)
			Float _g = ::Math_obj::sqrt(C1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(730)
			C1 = _g;
			HX_STACK_LINE(731)
			{
				HX_STACK_LINE(732)
				Float t = (Float(1.0) / Float(C1));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(741)
				hx::MultEq(this->nx,t);
				HX_STACK_LINE(742)
				hx::MultEq(this->ny,t);
			}
			HX_STACK_LINE(744)
			if ((this->equal)){
				HX_STACK_LINE(745)
				hx::SubEq(C1,this->jointMax);
				HX_STACK_LINE(746)
				this->slack = false;
			}
			else{
				HX_STACK_LINE(749)
				if (((C1 < this->jointMin))){
					HX_STACK_LINE(750)
					C1 = (this->jointMin - C1);
					HX_STACK_LINE(751)
					{
						HX_STACK_LINE(752)
						this->nx = -(this->nx);
						HX_STACK_LINE(753)
						this->ny = -(this->ny);
					}
					HX_STACK_LINE(755)
					this->slack = false;
				}
				else{
					HX_STACK_LINE(757)
					if (((C1 > this->jointMax))){
						HX_STACK_LINE(758)
						hx::SubEq(C1,this->jointMax);
						HX_STACK_LINE(759)
						this->slack = false;
					}
					else{
						HX_STACK_LINE(762)
						{
							HX_STACK_LINE(763)
							this->nx = (int)0;
							HX_STACK_LINE(764)
							this->ny = (int)0;
							HX_STACK_LINE(773)
							{
							}
						}
						HX_STACK_LINE(782)
						C1 = (int)0;
						HX_STACK_LINE(783)
						this->slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(787)
		C = C1;
	}
	HX_STACK_LINE(789)
	if ((!(this->slack))){
		HX_STACK_LINE(790)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(791)
			this->cx1 = ((this->ny * this->a1relx) - (this->nx * this->a1rely));
			HX_STACK_LINE(792)
			this->cx2 = ((this->ny * this->a2relx) - (this->nx * this->a2rely));
			HX_STACK_LINE(793)
			_g1 = (((this->b1->smass + this->b2->smass) + ((this->cx1 * this->cx1) * this->b1->sinertia)) + ((this->cx2 * this->cx2) * this->b2->sinertia));
		}
		HX_STACK_LINE(790)
		this->kMass = _g1;
		HX_STACK_LINE(795)
		if (((this->kMass != (int)0))){
			HX_STACK_LINE(795)
			this->kMass = (Float((int)1) / Float(this->kMass));
		}
		else{
			HX_STACK_LINE(796)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(797)
		if ((!(this->stiff))){
			HX_STACK_LINE(798)
			if (((bool(this->breakUnderError) && bool(((C * C) > (this->maxError * this->maxError)))))){
				HX_STACK_LINE(798)
				return true;
			}
			HX_STACK_LINE(799)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			HX_STACK_LINE(800)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(800)
			{
				HX_STACK_LINE(801)
				Float omega = (((int)2 * ::Math_obj::PI) * this->frequency);		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(802)
				this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * this->damping) + (omega * dt)))))));
				HX_STACK_LINE(803)
				Float ig = (Float((int)1) / Float((((int)1 + this->gamma))));		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(804)
				biasCoef = (((dt * omega) * omega) * this->gamma);
				HX_STACK_LINE(805)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(806)
				_g2 = ig;
			}
			HX_STACK_LINE(800)
			hx::MultEq(this->kMass,_g2);
			HX_STACK_LINE(808)
			this->bias = (-(C) * biasCoef);
			HX_STACK_LINE(810)
			if (((this->bias < -(this->maxError)))){
				HX_STACK_LINE(810)
				this->bias = -(this->maxError);
			}
			else{
				HX_STACK_LINE(811)
				if (((this->bias > this->maxError))){
					HX_STACK_LINE(811)
					this->bias = this->maxError;
				}
			}
		}
		else{
			HX_STACK_LINE(815)
			this->bias = (int)0;
			HX_STACK_LINE(816)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(818)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(819)
		this->jMax = (this->maxForce * dt);
	}
	HX_STACK_LINE(821)
	return false;
}


Void ZPP_DistanceJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","warmStart",0x7a77636f,"zpp_nape.constraint.ZPP_DistanceJoint.warmStart","zpp_nape/constraint/DistanceJoint.hx",824,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		if ((!(this->slack))){
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(857)
				Float t = (this->b1->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(866)
				hx::SubEq(this->b1->velx,(this->nx * t));
				HX_STACK_LINE(867)
				hx::SubEq(this->b1->vely,(this->ny * t));
			}
			HX_STACK_LINE(869)
			{
				HX_STACK_LINE(870)
				Float t = (this->b2->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(879)
				hx::AddEq(this->b2->velx,(this->nx * t));
				HX_STACK_LINE(880)
				hx::AddEq(this->b2->vely,(this->ny * t));
			}
			HX_STACK_LINE(882)
			hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * this->jAcc));
			HX_STACK_LINE(883)
			hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * this->jAcc));
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","applyImpulseVel",0xe760fcc8,"zpp_nape.constraint.ZPP_DistanceJoint.applyImpulseVel","zpp_nape/constraint/DistanceJoint.hx",887,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(888)
	if ((this->slack)){
		HX_STACK_LINE(888)
		return false;
	}
	HX_STACK_LINE(890)
	Float E = ((((this->nx * ((((this->b2->velx + this->b2->kinvelx) - this->b1->velx) - this->b1->kinvelx))) + (this->ny * ((((this->b2->vely + this->b2->kinvely) - this->b1->vely) - this->b1->kinvely)))) + (((this->b2->angvel + this->b2->kinangvel)) * this->cx2)) - (((this->b1->angvel + this->b1->kinangvel)) * this->cx1));		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(892)
	Float j = ((this->kMass * ((this->bias - E))) - (this->jAcc * this->gamma));		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(893)
	{
		HX_STACK_LINE(902)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(903)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(905)
			if (((bool(!(this->equal)) && bool((this->jAcc > (int)0))))){
				HX_STACK_LINE(905)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(906)
			if (((bool(this->breakUnderForce) && bool((this->jAcc < -(this->jMax)))))){
				HX_STACK_LINE(906)
				return true;
			}
			HX_STACK_LINE(907)
			if ((!(this->stiff))){
				HX_STACK_LINE(908)
				if (((this->jAcc < -(this->jMax)))){
					HX_STACK_LINE(908)
					this->jAcc = -(this->jMax);
				}
			}
		}
		HX_STACK_LINE(911)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(944)
	{
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(955)
			hx::SubEq(this->b1->velx,(this->nx * t));
			HX_STACK_LINE(956)
			hx::SubEq(this->b1->vely,(this->ny * t));
		}
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(959)
			Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(968)
			hx::AddEq(this->b2->velx,(this->nx * t));
			HX_STACK_LINE(969)
			hx::AddEq(this->b2->vely,(this->ny * t));
		}
		HX_STACK_LINE(971)
		hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * j));
		HX_STACK_LINE(972)
		hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * j));
	}
	HX_STACK_LINE(975)
	return false;
}


bool ZPP_DistanceJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","applyImpulsePos",0xe75c77ff,"zpp_nape.constraint.ZPP_DistanceJoint.applyImpulsePos","zpp_nape/constraint/DistanceJoint.hx",977,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(978)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(979)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(980)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(981)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(983)
	{
		HX_STACK_LINE(984)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(985)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(988)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(989)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(991)
	{
		HX_STACK_LINE(992)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(993)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(996)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(997)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(998)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(999)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(999)
	{
		HX_STACK_LINE(1000)
		nx = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
		HX_STACK_LINE(1001)
		ny = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
		HX_STACK_LINE(1002)
		Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(1003)
		if (((C < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1005)
				nx = (int)0;
				HX_STACK_LINE(1006)
				ny = (int)0;
				HX_STACK_LINE(1015)
				{
				}
			}
			HX_STACK_LINE(1024)
			C = (int)0;
			HX_STACK_LINE(1025)
			slack = true;
		}
		else{
			HX_STACK_LINE(1028)
			Float _g = ::Math_obj::sqrt(C);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1028)
			C = _g;
			HX_STACK_LINE(1029)
			{
				HX_STACK_LINE(1030)
				Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1039)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1040)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(1042)
			if ((this->equal)){
				HX_STACK_LINE(1043)
				hx::SubEq(C,this->jointMax);
				HX_STACK_LINE(1044)
				slack = false;
			}
			else{
				HX_STACK_LINE(1047)
				if (((C < this->jointMin))){
					HX_STACK_LINE(1048)
					C = (this->jointMin - C);
					HX_STACK_LINE(1049)
					{
						HX_STACK_LINE(1050)
						nx = -(nx);
						HX_STACK_LINE(1051)
						ny = -(ny);
					}
					HX_STACK_LINE(1053)
					slack = false;
				}
				else{
					HX_STACK_LINE(1055)
					if (((C > this->jointMax))){
						HX_STACK_LINE(1056)
						hx::SubEq(C,this->jointMax);
						HX_STACK_LINE(1057)
						slack = false;
					}
					else{
						HX_STACK_LINE(1060)
						{
							HX_STACK_LINE(1061)
							nx = (int)0;
							HX_STACK_LINE(1062)
							ny = (int)0;
							HX_STACK_LINE(1071)
							{
							}
						}
						HX_STACK_LINE(1080)
						C = (int)0;
						HX_STACK_LINE(1081)
						slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(1085)
		_g1 = C;
	}
	HX_STACK_LINE(999)
	E = _g1;
	HX_STACK_LINE(1087)
	if ((!(slack))){
		HX_STACK_LINE(1088)
		if (((bool(this->breakUnderError) && bool(((E * E) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(1088)
			return true;
		}
		HX_STACK_LINE(1089)
		if ((((E * E) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
			HX_STACK_LINE(1089)
			return false;
		}
		HX_STACK_LINE(1090)
		hx::MultEq(E,0.5);
		HX_STACK_LINE(1091)
		if ((((E * E) > (int)6))){
			HX_STACK_LINE(1092)
			Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1093)
			if (((k > ::nape::Config_obj::epsilon))){
				HX_STACK_LINE(1094)
				k = (Float(0.75) / Float(k));
				HX_STACK_LINE(1095)
				j = (-(E) * k);
				HX_STACK_LINE(1096)
				if (((bool(this->equal) || bool((j < (int)0))))){
					HX_STACK_LINE(1097)
					{
						HX_STACK_LINE(1098)
						Float t = (j * this->b1->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1107)
						hx::SubEq(this->b1->posx,(nx * t));
						HX_STACK_LINE(1108)
						hx::SubEq(this->b1->posy,(ny * t));
					}
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1111)
						Float t = (j * this->b2->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1120)
						hx::AddEq(this->b2->posx,(nx * t));
						HX_STACK_LINE(1121)
						hx::AddEq(this->b2->posy,(ny * t));
					}
					HX_STACK_LINE(1123)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1123)
					{
						HX_STACK_LINE(1124)
						nx = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
						HX_STACK_LINE(1125)
						ny = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
						HX_STACK_LINE(1126)
						Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
						HX_STACK_LINE(1127)
						if (((C < ::nape::Config_obj::epsilon))){
							HX_STACK_LINE(1128)
							{
								HX_STACK_LINE(1129)
								nx = (int)0;
								HX_STACK_LINE(1130)
								ny = (int)0;
								HX_STACK_LINE(1139)
								{
								}
							}
							HX_STACK_LINE(1148)
							C = (int)0;
							HX_STACK_LINE(1149)
							slack = true;
						}
						else{
							HX_STACK_LINE(1152)
							Float _g2 = ::Math_obj::sqrt(C);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1152)
							C = _g2;
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1154)
								Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1163)
								hx::MultEq(nx,t);
								HX_STACK_LINE(1164)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(1166)
							if ((this->equal)){
								HX_STACK_LINE(1167)
								hx::SubEq(C,this->jointMax);
								HX_STACK_LINE(1168)
								slack = false;
							}
							else{
								HX_STACK_LINE(1171)
								if (((C < this->jointMin))){
									HX_STACK_LINE(1172)
									C = (this->jointMin - C);
									HX_STACK_LINE(1173)
									{
										HX_STACK_LINE(1174)
										nx = -(nx);
										HX_STACK_LINE(1175)
										ny = -(ny);
									}
									HX_STACK_LINE(1177)
									slack = false;
								}
								else{
									HX_STACK_LINE(1179)
									if (((C > this->jointMax))){
										HX_STACK_LINE(1180)
										hx::SubEq(C,this->jointMax);
										HX_STACK_LINE(1181)
										slack = false;
									}
									else{
										HX_STACK_LINE(1184)
										{
											HX_STACK_LINE(1185)
											nx = (int)0;
											HX_STACK_LINE(1186)
											ny = (int)0;
											HX_STACK_LINE(1195)
											{
											}
										}
										HX_STACK_LINE(1204)
										C = (int)0;
										HX_STACK_LINE(1205)
										slack = true;
									}
								}
							}
						}
						HX_STACK_LINE(1209)
						_g3 = C;
					}
					HX_STACK_LINE(1123)
					E = _g3;
					HX_STACK_LINE(1211)
					hx::MultEq(E,0.5);
				}
			}
		}
		HX_STACK_LINE(1215)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(1215)
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(1216)
		Float k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1216)
		{
			HX_STACK_LINE(1217)
			cx1 = ((ny * r1x) - (nx * r1y));
			HX_STACK_LINE(1218)
			cx2 = ((ny * r2x) - (nx * r2y));
			HX_STACK_LINE(1219)
			k = (((this->b1->smass + this->b2->smass) + ((cx1 * cx1) * this->b1->sinertia)) + ((cx2 * cx2) * this->b2->sinertia));
		}
		HX_STACK_LINE(1221)
		if (((k != (int)0))){
			HX_STACK_LINE(1221)
			k = (Float((int)1) / Float(k));
		}
		HX_STACK_LINE(1222)
		j = (-(E) * k);
		HX_STACK_LINE(1223)
		if (((bool(this->equal) || bool((j < (int)0))))){
			HX_STACK_LINE(1225)
			{
				HX_STACK_LINE(1226)
				Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1235)
				hx::SubEq(this->b1->posx,(nx * t));
				HX_STACK_LINE(1236)
				hx::SubEq(this->b1->posy,(ny * t));
			}
			HX_STACK_LINE(1238)
			{
				HX_STACK_LINE(1239)
				Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1248)
				hx::AddEq(this->b2->posx,(nx * t));
				HX_STACK_LINE(1249)
				hx::AddEq(this->b2->posy,(ny * t));
			}
			HX_STACK_LINE(1251)
			{
				HX_STACK_LINE(1251)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1251)
				Float dr = ((-(cx1) * this->b1->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1251)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1251)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1251)
					Float _g4 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1251)
					_this->axisx = _g4;
					HX_STACK_LINE(1251)
					Float _g5 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1251)
					_this->axisy = _g5;
					HX_STACK_LINE(1251)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1251)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1251)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1251)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1251)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1251)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1251)
					_this->axisx = nx1;
				}
			}
			HX_STACK_LINE(1252)
			{
				HX_STACK_LINE(1252)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1252)
				Float dr = ((cx2 * this->b2->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1252)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1252)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1252)
					Float _g6 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1252)
					_this->axisx = _g6;
					HX_STACK_LINE(1252)
					Float _g7 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1252)
					_this->axisy = _g7;
					HX_STACK_LINE(1252)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1252)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1252)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1252)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1252)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1252)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1252)
					_this->axisx = nx1;
				}
			}
		}
	}
	HX_STACK_LINE(1286)
	return false;
}


Void ZPP_DistanceJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","draw",0x88c999b2,"zpp_nape.constraint.ZPP_DistanceJoint.draw","zpp_nape/constraint/DistanceJoint.hx",1288,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(1289)
		::nape::constraint::DistanceJoint me = this->outer_zn;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(1290)
		::nape::geom::Vec2 _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1290)
		{
			HX_STACK_LINE(1290)
			if (((me->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(1290)
				me->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(1290)
			_g = me->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(1290)
		::nape::geom::Vec2 a1 = ((  (((me->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b1->outer) ))->localPointToWorld(_g,null());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(1291)
		::nape::geom::Vec2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1291)
		{
			HX_STACK_LINE(1291)
			if (((me->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(1291)
				me->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(1291)
			_g1 = me->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(1291)
		::nape::geom::Vec2 a2 = ((  (((me->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b2->outer) ))->localPointToWorld(_g1,null());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(1292)
		::nape::geom::Vec2 n = a2->sub(a1,null());		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1293)
		Float nl;		HX_STACK_VAR(nl,"nl");
		HX_STACK_LINE(1293)
		{
			HX_STACK_LINE(1293)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1293)
			{
				HX_STACK_LINE(1293)
				{
					HX_STACK_LINE(1293)
					::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1293)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1293)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1293)
				_g2 = n->zpp_inner->x;
			}
			HX_STACK_LINE(1293)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1293)
			{
				HX_STACK_LINE(1293)
				{
					HX_STACK_LINE(1293)
					::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1293)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1293)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1293)
				_g3 = n->zpp_inner->x;
			}
			HX_STACK_LINE(1293)
			Float _g4 = (_g2 * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1293)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1293)
			{
				HX_STACK_LINE(1293)
				{
					HX_STACK_LINE(1293)
					::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1293)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1293)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1293)
				_g5 = n->zpp_inner->y;
			}
			HX_STACK_LINE(1293)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1293)
			{
				HX_STACK_LINE(1293)
				{
					HX_STACK_LINE(1293)
					::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1293)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1293)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1293)
				_g6 = n->zpp_inner->y;
			}
			HX_STACK_LINE(1293)
			Float _g7 = (_g5 * _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1293)
			Float _g8 = (_g4 + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1293)
			nl = ::Math_obj::sqrt(_g8);
		}
		HX_STACK_LINE(1294)
		if (((nl != (int)0))){
			HX_STACK_LINE(1295)
			n->muleq((Float((int)1) / Float(nl)));
			HX_STACK_LINE(1296)
			::nape::geom::Vec2 mid = a1->add(a2,null())->muleq(0.5);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1297)
			::nape::geom::Vec2 _g9 = n->mul((this->jointMin * 0.5),true);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1297)
			::nape::geom::Vec2 min1 = mid->sub(_g9,null());		HX_STACK_VAR(min1,"min1");
			HX_STACK_LINE(1298)
			::nape::geom::Vec2 _g10 = n->mul((this->jointMin * 0.5),true);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1298)
			::nape::geom::Vec2 min2 = mid->add(_g10,null());		HX_STACK_VAR(min2,"min2");
			HX_STACK_LINE(1299)
			::nape::geom::Vec2 _g11 = n->mul((this->jointMax * 0.5),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1299)
			::nape::geom::Vec2 max1 = mid->sub(_g11,null());		HX_STACK_VAR(max1,"max1");
			HX_STACK_LINE(1300)
			::nape::geom::Vec2 _g12 = n->mul((this->jointMax * 0.5),true);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1300)
			::nape::geom::Vec2 max2 = mid->add(_g12,null());		HX_STACK_VAR(max2,"max2");
			HX_STACK_LINE(1301)
			g->drawLine(min1,min2,(int)16776960);
			HX_STACK_LINE(1302)
			g->drawLine(max1,min1,(int)65535);
			HX_STACK_LINE(1303)
			g->drawLine(max2,min2,(int)65535);
			HX_STACK_LINE(1304)
			if ((!(this->stiff))){
				HX_STACK_LINE(1305)
				if (((nl > this->jointMax))){
					HX_STACK_LINE(1306)
					g->drawSpring(max1,a1,(int)65535,null(),null());
					HX_STACK_LINE(1307)
					g->drawSpring(max2,a2,(int)65535,null(),null());
				}
				else{
					HX_STACK_LINE(1309)
					if (((nl < this->jointMin))){
						HX_STACK_LINE(1310)
						g->drawSpring(min1,a1,(int)16776960,null(),null());
						HX_STACK_LINE(1311)
						g->drawSpring(min2,a2,(int)16776960,null(),null());
					}
				}
			}
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				::zpp_nape::geom::ZPP_Vec2 inner = mid->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1314)
				mid->zpp_inner->outer = null();
				HX_STACK_LINE(1314)
				mid->zpp_inner = null();
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::nape::geom::Vec2 o = mid;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1314)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1314)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1314)
					{
						HX_STACK_LINE(1314)
						if (((o->outer != null()))){
							HX_STACK_LINE(1314)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1314)
							o->outer = null();
						}
						HX_STACK_LINE(1314)
						o->_isimmutable = null();
						HX_STACK_LINE(1314)
						o->_validate = null();
						HX_STACK_LINE(1314)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1314)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1315)
			{
				HX_STACK_LINE(1315)
				::zpp_nape::geom::ZPP_Vec2 inner = min1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1315)
				min1->zpp_inner->outer = null();
				HX_STACK_LINE(1315)
				min1->zpp_inner = null();
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::nape::geom::Vec2 o = min1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1315)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1315)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1315)
					{
						HX_STACK_LINE(1315)
						if (((o->outer != null()))){
							HX_STACK_LINE(1315)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1315)
							o->outer = null();
						}
						HX_STACK_LINE(1315)
						o->_isimmutable = null();
						HX_STACK_LINE(1315)
						o->_validate = null();
						HX_STACK_LINE(1315)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1315)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1316)
			{
				HX_STACK_LINE(1316)
				::zpp_nape::geom::ZPP_Vec2 inner = min2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1316)
				min2->zpp_inner->outer = null();
				HX_STACK_LINE(1316)
				min2->zpp_inner = null();
				HX_STACK_LINE(1316)
				{
					HX_STACK_LINE(1316)
					::nape::geom::Vec2 o = min2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1316)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1316)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1316)
				{
					HX_STACK_LINE(1316)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1316)
					{
						HX_STACK_LINE(1316)
						if (((o->outer != null()))){
							HX_STACK_LINE(1316)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1316)
							o->outer = null();
						}
						HX_STACK_LINE(1316)
						o->_isimmutable = null();
						HX_STACK_LINE(1316)
						o->_validate = null();
						HX_STACK_LINE(1316)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1316)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1316)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1317)
			{
				HX_STACK_LINE(1317)
				::zpp_nape::geom::ZPP_Vec2 inner = max1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1317)
				max1->zpp_inner->outer = null();
				HX_STACK_LINE(1317)
				max1->zpp_inner = null();
				HX_STACK_LINE(1317)
				{
					HX_STACK_LINE(1317)
					::nape::geom::Vec2 o = max1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1317)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1317)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1317)
				{
					HX_STACK_LINE(1317)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1317)
					{
						HX_STACK_LINE(1317)
						if (((o->outer != null()))){
							HX_STACK_LINE(1317)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1317)
							o->outer = null();
						}
						HX_STACK_LINE(1317)
						o->_isimmutable = null();
						HX_STACK_LINE(1317)
						o->_validate = null();
						HX_STACK_LINE(1317)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1317)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1317)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1318)
			{
				HX_STACK_LINE(1318)
				::zpp_nape::geom::ZPP_Vec2 inner = max2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1318)
				max2->zpp_inner->outer = null();
				HX_STACK_LINE(1318)
				max2->zpp_inner = null();
				HX_STACK_LINE(1318)
				{
					HX_STACK_LINE(1318)
					::nape::geom::Vec2 o = max2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1318)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1318)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1318)
				{
					HX_STACK_LINE(1318)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1318)
					{
						HX_STACK_LINE(1318)
						if (((o->outer != null()))){
							HX_STACK_LINE(1318)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1318)
							o->outer = null();
						}
						HX_STACK_LINE(1318)
						o->_isimmutable = null();
						HX_STACK_LINE(1318)
						o->_validate = null();
						HX_STACK_LINE(1318)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1318)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1318)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1320)
		g->drawFilledCircle(a1,(int)2,(int)255);
		HX_STACK_LINE(1321)
		g->drawFilledCircle(a2,(int)2,(int)16711680);
		HX_STACK_LINE(1322)
		{
			HX_STACK_LINE(1322)
			::zpp_nape::geom::ZPP_Vec2 inner = a1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1322)
			a1->zpp_inner->outer = null();
			HX_STACK_LINE(1322)
			a1->zpp_inner = null();
			HX_STACK_LINE(1322)
			{
				HX_STACK_LINE(1322)
				::nape::geom::Vec2 o = a1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1322)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1322)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1322)
			{
				HX_STACK_LINE(1322)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1322)
				{
					HX_STACK_LINE(1322)
					if (((o->outer != null()))){
						HX_STACK_LINE(1322)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1322)
						o->outer = null();
					}
					HX_STACK_LINE(1322)
					o->_isimmutable = null();
					HX_STACK_LINE(1322)
					o->_validate = null();
					HX_STACK_LINE(1322)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1322)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1322)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1323)
		{
			HX_STACK_LINE(1323)
			::zpp_nape::geom::ZPP_Vec2 inner = a2->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1323)
			a2->zpp_inner->outer = null();
			HX_STACK_LINE(1323)
			a2->zpp_inner = null();
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::nape::geom::Vec2 o = a2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1323)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1323)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					if (((o->outer != null()))){
						HX_STACK_LINE(1323)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1323)
						o->outer = null();
					}
					HX_STACK_LINE(1323)
					o->_isimmutable = null();
					HX_STACK_LINE(1323)
					o->_validate = null();
					HX_STACK_LINE(1323)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1323)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1324)
		{
			HX_STACK_LINE(1324)
			::zpp_nape::geom::ZPP_Vec2 inner = n->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1324)
			n->zpp_inner->outer = null();
			HX_STACK_LINE(1324)
			n->zpp_inner = null();
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1324)
				::nape::geom::Vec2 o = n;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1324)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1324)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1324)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1324)
				{
					HX_STACK_LINE(1324)
					if (((o->outer != null()))){
						HX_STACK_LINE(1324)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1324)
						o->outer = null();
					}
					HX_STACK_LINE(1324)
					o->_isimmutable = null();
					HX_STACK_LINE(1324)
					o->_validate = null();
					HX_STACK_LINE(1324)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1324)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1324)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}



ZPP_DistanceJoint_obj::ZPP_DistanceJoint_obj()
{
}

void ZPP_DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DistanceJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(a1localx,"a1localx");
	HX_MARK_MEMBER_NAME(a1localy,"a1localy");
	HX_MARK_MEMBER_NAME(a1relx,"a1relx");
	HX_MARK_MEMBER_NAME(a1rely,"a1rely");
	HX_MARK_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(a2localx,"a2localx");
	HX_MARK_MEMBER_NAME(a2localy,"a2localy");
	HX_MARK_MEMBER_NAME(a2relx,"a2relx");
	HX_MARK_MEMBER_NAME(a2rely,"a2rely");
	HX_MARK_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(a1localx,"a1localx");
	HX_VISIT_MEMBER_NAME(a1localy,"a1localy");
	HX_VISIT_MEMBER_NAME(a1relx,"a1relx");
	HX_VISIT_MEMBER_NAME(a1rely,"a1rely");
	HX_VISIT_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(a2localx,"a2localx");
	HX_VISIT_MEMBER_NAME(a2localy,"a2localy");
	HX_VISIT_MEMBER_NAME(a2relx,"a2relx");
	HX_VISIT_MEMBER_NAME(a2rely,"a2rely");
	HX_VISIT_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DistanceJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"is_slack") ) { return is_slack_dyn(); }
		if (HX_FIELD_EQ(inName,"a1localx") ) { return a1localx; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { return a1localy; }
		if (HX_FIELD_EQ(inName,"setup_a1") ) { return setup_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"a2localx") ) { return a2localx; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { return a2localy; }
		if (HX_FIELD_EQ(inName,"setup_a2") ) { return setup_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a1") ) { return validate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a2") ) { return validate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::DistanceJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zn"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("slack"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("nx"));
	outFields->push(HX_CSTRING("ny"));
	outFields->push(HX_CSTRING("cx1"));
	outFields->push(HX_CSTRING("cx2"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("a1localx"));
	outFields->push(HX_CSTRING("a1localy"));
	outFields->push(HX_CSTRING("a1relx"));
	outFields->push(HX_CSTRING("a1rely"));
	outFields->push(HX_CSTRING("wrap_a1"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("a2localx"));
	outFields->push(HX_CSTRING("a2localy"));
	outFields->push(HX_CSTRING("a2relx"));
	outFields->push(HX_CSTRING("a2rely"));
	outFields->push(HX_CSTRING("wrap_a2"));
	outFields->push(HX_CSTRING("kMass"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("bias"));
	outFields->push(HX_CSTRING("stepped"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::DistanceJoint*/ ,(int)offsetof(ZPP_DistanceJoint_obj,outer_zn),HX_CSTRING("outer_zn")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jointMin),HX_CSTRING("jointMin")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jointMax),HX_CSTRING("jointMax")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,slack),HX_CSTRING("slack")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,equal),HX_CSTRING("equal")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,nx),HX_CSTRING("nx")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,ny),HX_CSTRING("ny")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,cx1),HX_CSTRING("cx1")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,cx2),HX_CSTRING("cx2")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_DistanceJoint_obj,b1),HX_CSTRING("b1")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1localx),HX_CSTRING("a1localx")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1localy),HX_CSTRING("a1localy")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1relx),HX_CSTRING("a1relx")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1rely),HX_CSTRING("a1rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_DistanceJoint_obj,wrap_a1),HX_CSTRING("wrap_a1")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_DistanceJoint_obj,b2),HX_CSTRING("b2")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2localx),HX_CSTRING("a2localx")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2localy),HX_CSTRING("a2localy")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2relx),HX_CSTRING("a2relx")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2rely),HX_CSTRING("a2rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_DistanceJoint_obj,wrap_a2),HX_CSTRING("wrap_a2")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,kMass),HX_CSTRING("kMass")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jAcc),HX_CSTRING("jAcc")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jMax),HX_CSTRING("jMax")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,gamma),HX_CSTRING("gamma")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,bias),HX_CSTRING("bias")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,stepped),HX_CSTRING("stepped")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zn"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("slack"),
	HX_CSTRING("equal"),
	HX_CSTRING("is_slack"),
	HX_CSTRING("nx"),
	HX_CSTRING("ny"),
	HX_CSTRING("cx1"),
	HX_CSTRING("cx2"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("b1"),
	HX_CSTRING("a1localx"),
	HX_CSTRING("a1localy"),
	HX_CSTRING("a1relx"),
	HX_CSTRING("a1rely"),
	HX_CSTRING("validate_a1"),
	HX_CSTRING("invalidate_a1"),
	HX_CSTRING("setup_a1"),
	HX_CSTRING("wrap_a1"),
	HX_CSTRING("b2"),
	HX_CSTRING("a2localx"),
	HX_CSTRING("a2localy"),
	HX_CSTRING("a2relx"),
	HX_CSTRING("a2rely"),
	HX_CSTRING("validate_a2"),
	HX_CSTRING("invalidate_a2"),
	HX_CSTRING("setup_a2"),
	HX_CSTRING("wrap_a2"),
	HX_CSTRING("kMass"),
	HX_CSTRING("jAcc"),
	HX_CSTRING("jMax"),
	HX_CSTRING("gamma"),
	HX_CSTRING("bias"),
	HX_CSTRING("stepped"),
	HX_CSTRING("copy"),
	HX_CSTRING("validate"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("forest"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("preStep"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

#endif

Class ZPP_DistanceJoint_obj::__mClass;

void ZPP_DistanceJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_DistanceJoint"), hx::TCanCast< ZPP_DistanceJoint_obj> ,sStaticFields,sMemberFields,
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

void ZPP_DistanceJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
