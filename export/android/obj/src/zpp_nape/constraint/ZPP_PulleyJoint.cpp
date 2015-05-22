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
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
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

Void ZPP_PulleyJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","new",0xe3d84cee,"zpp_nape.constraint.ZPP_PulleyJoint.new","zpp_nape/constraint/PulleyJoint.hx",174,0xdaffcadd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(645)
	this->stepped = false;
	HX_STACK_LINE(644)
	this->bias = 0.0;
	HX_STACK_LINE(643)
	this->gamma = 0.0;
	HX_STACK_LINE(642)
	this->jMax = 0.0;
	HX_STACK_LINE(641)
	this->jAcc = 0.0;
	HX_STACK_LINE(640)
	this->kMass = 0.0;
	HX_STACK_LINE(639)
	this->wrap_a4 = null();
	HX_STACK_LINE(586)
	this->a4rely = 0.0;
	HX_STACK_LINE(585)
	this->a4relx = 0.0;
	HX_STACK_LINE(584)
	this->a4localy = 0.0;
	HX_STACK_LINE(583)
	this->a4localx = 0.0;
	HX_STACK_LINE(582)
	this->b4 = null();
	HX_STACK_LINE(581)
	this->wrap_a3 = null();
	HX_STACK_LINE(528)
	this->a3rely = 0.0;
	HX_STACK_LINE(527)
	this->a3relx = 0.0;
	HX_STACK_LINE(526)
	this->a3localy = 0.0;
	HX_STACK_LINE(525)
	this->a3localx = 0.0;
	HX_STACK_LINE(524)
	this->b3 = null();
	HX_STACK_LINE(523)
	this->wrap_a2 = null();
	HX_STACK_LINE(470)
	this->a2rely = 0.0;
	HX_STACK_LINE(469)
	this->a2relx = 0.0;
	HX_STACK_LINE(468)
	this->a2localy = 0.0;
	HX_STACK_LINE(467)
	this->a2localx = 0.0;
	HX_STACK_LINE(466)
	this->b2 = null();
	HX_STACK_LINE(465)
	this->wrap_a1 = null();
	HX_STACK_LINE(412)
	this->a1rely = 0.0;
	HX_STACK_LINE(411)
	this->a1relx = 0.0;
	HX_STACK_LINE(410)
	this->a1localy = 0.0;
	HX_STACK_LINE(409)
	this->a1localx = 0.0;
	HX_STACK_LINE(408)
	this->b1 = null();
	HX_STACK_LINE(352)
	this->cx4 = 0.0;
	HX_STACK_LINE(351)
	this->cx3 = 0.0;
	HX_STACK_LINE(350)
	this->cx2 = 0.0;
	HX_STACK_LINE(349)
	this->cx1 = 0.0;
	HX_STACK_LINE(348)
	this->n34y = 0.0;
	HX_STACK_LINE(347)
	this->n34x = 0.0;
	HX_STACK_LINE(346)
	this->n12y = 0.0;
	HX_STACK_LINE(345)
	this->n12x = 0.0;
	HX_STACK_LINE(180)
	this->equal = false;
	HX_STACK_LINE(179)
	this->slack = false;
	HX_STACK_LINE(178)
	this->jointMax = 0.0;
	HX_STACK_LINE(177)
	this->jointMin = 0.0;
	HX_STACK_LINE(176)
	this->ratio = 1.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(736)
	super::__construct();
	HX_STACK_LINE(737)
	{
		HX_STACK_LINE(738)
		{
			HX_STACK_LINE(739)
			this->a1localx = (int)0;
			HX_STACK_LINE(740)
			this->a1localy = (int)0;
			HX_STACK_LINE(749)
			{
			}
		}
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(759)
			this->a1relx = (int)0;
			HX_STACK_LINE(760)
			this->a1rely = (int)0;
			HX_STACK_LINE(769)
			{
			}
		}
	}
	HX_STACK_LINE(779)
	{
		HX_STACK_LINE(780)
		{
			HX_STACK_LINE(781)
			this->a2localx = (int)0;
			HX_STACK_LINE(782)
			this->a2localy = (int)0;
			HX_STACK_LINE(791)
			{
			}
		}
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(801)
			this->a2relx = (int)0;
			HX_STACK_LINE(802)
			this->a2rely = (int)0;
			HX_STACK_LINE(811)
			{
			}
		}
	}
	HX_STACK_LINE(821)
	{
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(823)
			this->a3localx = (int)0;
			HX_STACK_LINE(824)
			this->a3localy = (int)0;
			HX_STACK_LINE(833)
			{
			}
		}
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(843)
			this->a3relx = (int)0;
			HX_STACK_LINE(844)
			this->a3rely = (int)0;
			HX_STACK_LINE(853)
			{
			}
		}
	}
	HX_STACK_LINE(863)
	{
		HX_STACK_LINE(864)
		{
			HX_STACK_LINE(865)
			this->a4localx = (int)0;
			HX_STACK_LINE(866)
			this->a4localy = (int)0;
			HX_STACK_LINE(875)
			{
			}
		}
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(885)
			this->a4relx = (int)0;
			HX_STACK_LINE(886)
			this->a4rely = (int)0;
			HX_STACK_LINE(895)
			{
			}
		}
	}
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(906)
		this->n12x = (int)1;
		HX_STACK_LINE(907)
		this->n12y = (int)0;
		HX_STACK_LINE(916)
		{
		}
	}
	HX_STACK_LINE(925)
	{
		HX_STACK_LINE(926)
		this->n34x = (int)1;
		HX_STACK_LINE(927)
		this->n34y = (int)0;
		HX_STACK_LINE(936)
		{
		}
	}
	HX_STACK_LINE(945)
	this->jAcc = (int)0;
	HX_STACK_LINE(946)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(947)
	this->stepped = false;
	HX_STACK_LINE(948)
	Float _g = this->cx4 = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(948)
	Float _g1 = this->cx3 = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(948)
	Float _g2 = this->cx2 = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(948)
	this->cx1 = _g2;
}
;
	return null();
}

//ZPP_PulleyJoint_obj::~ZPP_PulleyJoint_obj() { }

Dynamic ZPP_PulleyJoint_obj::__CreateEmpty() { return  new ZPP_PulleyJoint_obj; }
hx::ObjectPtr< ZPP_PulleyJoint_obj > ZPP_PulleyJoint_obj::__new()
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > result = new ZPP_PulleyJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > result = new ZPP_PulleyJoint_obj();
	result->__construct();
	return result;}

bool ZPP_PulleyJoint_obj::is_slack( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","is_slack",0x83e561ad,"zpp_nape.constraint.ZPP_PulleyJoint.is_slack","zpp_nape/constraint/PulleyJoint.hx",183,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(186)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(187)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(190)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(191)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(194)
		this->a3relx = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(195)
		this->a3rely = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(198)
		this->a4relx = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(199)
		this->a4rely = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	HX_STACK_LINE(201)
	Float n12x = 0.0;		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(202)
	Float n12y = 0.0;		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(203)
	Float n34x = 0.0;		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(204)
	Float n34y = 0.0;		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(206)
		Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(207)
		Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(208)
		Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(209)
		Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(210)
		t12x = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(211)
		t12y = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(212)
		t34x = ((this->b4->posx + this->a4relx) - ((this->b3->posx + this->a3relx)));
		HX_STACK_LINE(213)
		t34y = ((this->b4->posy + this->a4rely) - ((this->b3->posy + this->a3rely)));
		HX_STACK_LINE(214)
		Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(215)
		Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(216)
		if (((C12 != (int)0))){
			HX_STACK_LINE(218)
			Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(227)
			n12x = (t12x * t);
			HX_STACK_LINE(228)
			n12y = (t12y * t);
		}
		HX_STACK_LINE(231)
		if (((C34 != (int)0))){
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(233)
				Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(242)
				n34x = (t34x * t);
				HX_STACK_LINE(243)
				n34y = (t34y * t);
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(246)
				Float t = this->ratio;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(255)
				hx::MultEq(n34x,t);
				HX_STACK_LINE(256)
				hx::MultEq(n34y,t);
			}
		}
		else{
			HX_STACK_LINE(261)
			Float _g = ::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			Float t = (Float(this->ratio) / Float(_g));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(270)
			hx::MultEq(n34x,t);
			HX_STACK_LINE(271)
			hx::MultEq(n34y,t);
		}
		HX_STACK_LINE(274)
		Float C = (C12 + (this->ratio * C34));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(275)
		if ((this->equal)){
			HX_STACK_LINE(276)
			hx::SubEq(C,this->jointMax);
			HX_STACK_LINE(277)
			slack = false;
		}
		else{
			HX_STACK_LINE(280)
			if (((C < this->jointMin))){
				HX_STACK_LINE(281)
				C = (this->jointMin - C);
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(283)
					n12x = -(n12x);
					HX_STACK_LINE(284)
					n12y = -(n12y);
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(287)
					n34x = -(n34x);
					HX_STACK_LINE(288)
					n34y = -(n34y);
				}
				HX_STACK_LINE(290)
				slack = false;
			}
			else{
				HX_STACK_LINE(292)
				if (((C > this->jointMax))){
					HX_STACK_LINE(293)
					hx::SubEq(C,this->jointMax);
					HX_STACK_LINE(294)
					slack = false;
				}
				else{
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(298)
						n12x = (int)0;
						HX_STACK_LINE(299)
						n12y = (int)0;
						HX_STACK_LINE(308)
						{
						}
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(318)
						n34x = (int)0;
						HX_STACK_LINE(319)
						n34y = (int)0;
						HX_STACK_LINE(328)
						{
						}
					}
					HX_STACK_LINE(337)
					C = (int)0;
					HX_STACK_LINE(338)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(341)
		C;
	}
	HX_STACK_LINE(343)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,is_slack,return )

::nape::geom::Vec3 ZPP_PulleyJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","bodyImpulse",0x57eb30c1,"zpp_nape.constraint.ZPP_PulleyJoint.bodyImpulse","zpp_nape/constraint/PulleyJoint.hx",354,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(354)
	if ((this->stepped)){
		HX_STACK_LINE(355)
		::nape::geom::Vec3 ret = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		if (((b == this->b1))){
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(357)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(357)
						_g1 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(357)
					Float x = (_g1 - (this->jAcc * this->n12x));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(357)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(357)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(357)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(358)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(358)
						_g1 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(358)
					Float y = (_g1 - (this->jAcc * this->n12y));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(358)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(358)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(358)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(359)
			{
				HX_STACK_LINE(359)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					Float _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						_g2 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(359)
					Float z = (_g2 - (this->cx1 * this->jAcc));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(359)
					_g->zpp_inner->z = z;
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(361)
		if (((b == this->b2))){
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						_g3 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(362)
					Float x = (_g3 + (this->jAcc * this->n12x));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(362)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					Float _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						_g4 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(363)
					Float y = (_g4 + (this->jAcc * this->n12y));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(363)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					Float _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(364)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(364)
								_this->_validate();
							}
						}
						HX_STACK_LINE(364)
						_g5 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(364)
					Float z = (_g5 + (this->cx2 * this->jAcc));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(364)
					_g->zpp_inner->z = z;
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(364)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(364)
								_this->_validate();
							}
						}
						HX_STACK_LINE(364)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(366)
		if (((b == this->b3))){
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					Float _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(367)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(367)
								_this->_validate();
							}
						}
						HX_STACK_LINE(367)
						_g6 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(367)
					Float x = (_g6 - (this->jAcc * this->n34x));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(367)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(367)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(367)
								_this->_validate();
							}
						}
						HX_STACK_LINE(367)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					Float _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						_g7 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(368)
					Float y = (_g7 - (this->jAcc * this->n34y));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(368)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(369)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(369)
								_this->_validate();
							}
						}
						HX_STACK_LINE(369)
						_g8 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(369)
					Float z = (_g8 - (this->cx3 * this->jAcc));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(369)
					_g->zpp_inner->z = z;
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(369)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(369)
								_this->_validate();
							}
						}
						HX_STACK_LINE(369)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(371)
		if (((b == this->b4))){
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					Float _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(372)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(372)
								_this->_validate();
							}
						}
						HX_STACK_LINE(372)
						_g9 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(372)
					Float x = (_g9 + (this->jAcc * this->n34x));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(372)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(372)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(372)
								_this->_validate();
							}
						}
						HX_STACK_LINE(372)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(373)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(373)
						_g10 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(373)
					Float y = (_g10 + (this->jAcc * this->n34y));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(373)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(373)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(373)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(374)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(374)
								_this->_validate();
							}
						}
						HX_STACK_LINE(374)
						_g11 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(374)
					Float z = (_g11 + (this->cx4 * this->jAcc));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(374)
					_g->zpp_inner->z = z;
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(374)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(374)
								_this->_validate();
							}
						}
						HX_STACK_LINE(374)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(376)
		return ret;
	}
	else{
		HX_STACK_LINE(378)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(354)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,bodyImpulse,return )

Void ZPP_PulleyJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","activeBodies",0x0252eb98,"zpp_nape.constraint.ZPP_PulleyJoint.activeBodies","zpp_nape/constraint/PulleyJoint.hx",380,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		if (((this->b1 != null()))){
			HX_STACK_LINE(382)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(384)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(385)
			if (((this->b2 != null()))){
				HX_STACK_LINE(385)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(387)
		if (((bool((this->b3 != this->b1)) && bool((this->b3 != this->b2))))){
			HX_STACK_LINE(388)
			if (((this->b3 != null()))){
				HX_STACK_LINE(388)
				this->b3->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(390)
		if (((bool((bool((this->b4 != this->b1)) && bool((this->b4 != this->b2)))) && bool((this->b4 != this->b3))))){
			HX_STACK_LINE(391)
			if (((this->b4 != null()))){
				HX_STACK_LINE(391)
				this->b4->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","inactiveBodies",0x41095b7d,"zpp_nape.constraint.ZPP_PulleyJoint.inactiveBodies","zpp_nape/constraint/PulleyJoint.hx",394,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		if (((this->b1 != null()))){
			HX_STACK_LINE(396)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(398)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(399)
			if (((this->b2 != null()))){
				HX_STACK_LINE(399)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(401)
		if (((bool((this->b3 != this->b1)) && bool((this->b3 != this->b2))))){
			HX_STACK_LINE(402)
			if (((this->b3 != null()))){
				HX_STACK_LINE(402)
				this->b3->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(404)
		if (((bool((bool((this->b4 != this->b1)) && bool((this->b4 != this->b2)))) && bool((this->b4 != this->b3))))){
			HX_STACK_LINE(405)
			if (((this->b4 != null()))){
				HX_STACK_LINE(405)
				this->b4->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a1",0xc3155687,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a1","zpp_nape/constraint/PulleyJoint.hx",414,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(415)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(416)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(425)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a1,(void))

Void ZPP_PulleyJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a1",0xced82a42,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a1","zpp_nape/constraint/PulleyJoint.hx",435,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(436)
		this->immutable_midstep(HX_CSTRING("Constraint::a1"));
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			this->a1localx = x->x;
			HX_STACK_LINE(439)
			this->a1localy = x->y;
			HX_STACK_LINE(448)
			{
			}
		}
		HX_STACK_LINE(457)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a1,(void))

Void ZPP_PulleyJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a1",0x08a06924,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a1","zpp_nape/constraint/PulleyJoint.hx",459,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			Float x = this->a1localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(460)
			Float y = this->a1localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(460)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(460)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(460)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(460)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(460)
				ret = _g;
			}
			else{
				HX_STACK_LINE(460)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(460)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(460)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(460)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(460)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(460)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(460)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(460)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(460)
							ret1->next = null();
						}
						HX_STACK_LINE(460)
						ret1->weak = false;
					}
					HX_STACK_LINE(460)
					ret1->_immutable = immutable;
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						ret1->x = x;
						HX_STACK_LINE(460)
						ret1->y = y;
						HX_STACK_LINE(460)
						{
						}
					}
					HX_STACK_LINE(460)
					_g2 = ret1;
				}
				HX_STACK_LINE(460)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(460)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(460)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(460)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(460)
							_this->_validate();
						}
					}
					HX_STACK_LINE(460)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/PulleyJoint.hx",460,0xdaffcadd)
						{
							HX_STACK_LINE(460)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								{
									HX_STACK_LINE(460)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(460)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(460)
										_this->_validate();
									}
								}
								HX_STACK_LINE(460)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(460)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(460)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(460)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(460)
						{
						}
					}
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(460)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(460)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(460)
				ret;
			}
			HX_STACK_LINE(460)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(460)
			_g5 = ret;
		}
		HX_STACK_LINE(460)
		this->wrap_a1 = _g5;
		HX_STACK_LINE(461)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(462)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(463)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a1,(void))

Void ZPP_PulleyJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a2",0xc3155688,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a2","zpp_nape/constraint/PulleyJoint.hx",472,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(473)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(474)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(483)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a2,(void))

Void ZPP_PulleyJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a2",0xced82a43,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a2","zpp_nape/constraint/PulleyJoint.hx",493,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(494)
		this->immutable_midstep(HX_CSTRING("Constraint::a2"));
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(496)
			this->a2localx = x->x;
			HX_STACK_LINE(497)
			this->a2localy = x->y;
			HX_STACK_LINE(506)
			{
			}
		}
		HX_STACK_LINE(515)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a2,(void))

Void ZPP_PulleyJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a2",0x08a06925,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a2","zpp_nape/constraint/PulleyJoint.hx",517,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(518)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			Float x = this->a2localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(518)
			Float y = this->a2localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(518)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(518)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(518)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(518)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(518)
				ret = _g;
			}
			else{
				HX_STACK_LINE(518)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(518)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(518)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(518)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(518)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(518)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(518)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(518)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(518)
							ret1->next = null();
						}
						HX_STACK_LINE(518)
						ret1->weak = false;
					}
					HX_STACK_LINE(518)
					ret1->_immutable = immutable;
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						ret1->x = x;
						HX_STACK_LINE(518)
						ret1->y = y;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					_g2 = ret1;
				}
				HX_STACK_LINE(518)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(518)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(518)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(518)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(518)
							_this->_validate();
						}
					}
					HX_STACK_LINE(518)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/PulleyJoint.hx",518,0xdaffcadd)
						{
							HX_STACK_LINE(518)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(518)
							{
								HX_STACK_LINE(518)
								{
									HX_STACK_LINE(518)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(518)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(518)
										_this->_validate();
									}
								}
								HX_STACK_LINE(518)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(518)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(518)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(518)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(518)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(518)
				ret;
			}
			HX_STACK_LINE(518)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(518)
			_g5 = ret;
		}
		HX_STACK_LINE(518)
		this->wrap_a2 = _g5;
		HX_STACK_LINE(519)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(520)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(521)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a2,(void))

Void ZPP_PulleyJoint_obj::validate_a3( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a3",0xc3155689,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a3","zpp_nape/constraint/PulleyJoint.hx",530,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(531)
		this->wrap_a3->zpp_inner->x = this->a3localx;
		HX_STACK_LINE(532)
		this->wrap_a3->zpp_inner->y = this->a3localy;
		HX_STACK_LINE(541)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a3,(void))

Void ZPP_PulleyJoint_obj::invalidate_a3( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a3",0xced82a44,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a3","zpp_nape/constraint/PulleyJoint.hx",551,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(552)
		this->immutable_midstep(HX_CSTRING("Constraint::a3"));
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(554)
			this->a3localx = x->x;
			HX_STACK_LINE(555)
			this->a3localy = x->y;
			HX_STACK_LINE(564)
			{
			}
		}
		HX_STACK_LINE(573)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a3,(void))

Void ZPP_PulleyJoint_obj::setup_a3( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a3",0x08a06926,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a3","zpp_nape/constraint/PulleyJoint.hx",575,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(576)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			Float x = this->a3localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(576)
			Float y = this->a3localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(576)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(576)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(576)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(576)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(576)
				ret = _g;
			}
			else{
				HX_STACK_LINE(576)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(576)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(576)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(576)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(576)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(576)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(576)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(576)
							ret1->next = null();
						}
						HX_STACK_LINE(576)
						ret1->weak = false;
					}
					HX_STACK_LINE(576)
					ret1->_immutable = immutable;
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						ret1->x = x;
						HX_STACK_LINE(576)
						ret1->y = y;
						HX_STACK_LINE(576)
						{
						}
					}
					HX_STACK_LINE(576)
					_g2 = ret1;
				}
				HX_STACK_LINE(576)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(576)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(576)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(576)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(576)
							_this->_validate();
						}
					}
					HX_STACK_LINE(576)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/PulleyJoint.hx",576,0xdaffcadd)
						{
							HX_STACK_LINE(576)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(576)
							{
								HX_STACK_LINE(576)
								{
									HX_STACK_LINE(576)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(576)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(576)
										_this->_validate();
									}
								}
								HX_STACK_LINE(576)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(576)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(576)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(576)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(576)
						{
						}
					}
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(576)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(576)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(576)
				ret;
			}
			HX_STACK_LINE(576)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(576)
			_g5 = ret;
		}
		HX_STACK_LINE(576)
		this->wrap_a3 = _g5;
		HX_STACK_LINE(577)
		this->wrap_a3->zpp_inner->_inuse = true;
		HX_STACK_LINE(578)
		this->wrap_a3->zpp_inner->_validate = this->validate_a3_dyn();
		HX_STACK_LINE(579)
		this->wrap_a3->zpp_inner->_invalidate = this->invalidate_a3_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a3,(void))

Void ZPP_PulleyJoint_obj::validate_a4( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a4",0xc315568a,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a4","zpp_nape/constraint/PulleyJoint.hx",588,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		this->wrap_a4->zpp_inner->x = this->a4localx;
		HX_STACK_LINE(590)
		this->wrap_a4->zpp_inner->y = this->a4localy;
		HX_STACK_LINE(599)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a4,(void))

Void ZPP_PulleyJoint_obj::invalidate_a4( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a4",0xced82a45,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a4","zpp_nape/constraint/PulleyJoint.hx",609,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(610)
		this->immutable_midstep(HX_CSTRING("Constraint::a4"));
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(612)
			this->a4localx = x->x;
			HX_STACK_LINE(613)
			this->a4localy = x->y;
			HX_STACK_LINE(622)
			{
			}
		}
		HX_STACK_LINE(631)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a4,(void))

Void ZPP_PulleyJoint_obj::setup_a4( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a4",0x08a06927,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a4","zpp_nape/constraint/PulleyJoint.hx",633,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(634)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			Float x = this->a4localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(634)
			Float y = this->a4localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(634)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(634)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(634)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(634)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(634)
				ret = _g;
			}
			else{
				HX_STACK_LINE(634)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(634)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(634)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(634)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(634)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(634)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(634)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(634)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(634)
							ret1->next = null();
						}
						HX_STACK_LINE(634)
						ret1->weak = false;
					}
					HX_STACK_LINE(634)
					ret1->_immutable = immutable;
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						ret1->x = x;
						HX_STACK_LINE(634)
						ret1->y = y;
						HX_STACK_LINE(634)
						{
						}
					}
					HX_STACK_LINE(634)
					_g2 = ret1;
				}
				HX_STACK_LINE(634)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(634)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(634)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(634)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(634)
							_this->_validate();
						}
					}
					HX_STACK_LINE(634)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/PulleyJoint.hx",634,0xdaffcadd)
						{
							HX_STACK_LINE(634)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								{
									HX_STACK_LINE(634)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(634)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(634)
										_this->_validate();
									}
								}
								HX_STACK_LINE(634)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(634)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(634)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(634)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(634)
						{
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(634)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(634)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(634)
				ret;
			}
			HX_STACK_LINE(634)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(634)
			_g5 = ret;
		}
		HX_STACK_LINE(634)
		this->wrap_a4 = _g5;
		HX_STACK_LINE(635)
		this->wrap_a4->zpp_inner->_inuse = true;
		HX_STACK_LINE(636)
		this->wrap_a4->zpp_inner->_validate = this->validate_a4_dyn();
		HX_STACK_LINE(637)
		this->wrap_a4->zpp_inner->_invalidate = this->invalidate_a4_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a4,(void))

::nape::constraint::Constraint ZPP_PulleyJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","copy",0x722d3b67,"zpp_nape.constraint.ZPP_PulleyJoint.copy","zpp_nape/constraint/PulleyJoint.hx",646,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(647)
	::nape::geom::Vec2 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		if (((_this->zpp_inner_zn->wrap_a1 == null()))){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(647)
		_g = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		if (((_this->zpp_inner_zn->wrap_a2 == null()))){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(647)
		_g1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		if (((_this->zpp_inner_zn->wrap_a3 == null()))){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a3();
		}
		HX_STACK_LINE(647)
		_g2 = _this->zpp_inner_zn->wrap_a3;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = this->outer_zn;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		if (((_this->zpp_inner_zn->wrap_a4 == null()))){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a4();
		}
		HX_STACK_LINE(647)
		_g3 = _this->zpp_inner_zn->wrap_a4;
	}
	HX_STACK_LINE(647)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::PulleyJoint_obj::__new(null(),null(),null(),null(),_g,_g1,_g2,_g3,this->jointMin,this->jointMax,this->ratio));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(648)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >());
	HX_STACK_LINE(650)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(659)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(660)
			while((true)){
				HX_STACK_LINE(660)
				if ((!(((_g4 < dict->length))))){
					HX_STACK_LINE(660)
					break;
				}
				HX_STACK_LINE(660)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g4).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(660)
				++(_g4);
				HX_STACK_LINE(661)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(662)
					b = idc->bc;
					HX_STACK_LINE(663)
					break;
				}
			}
		}
		HX_STACK_LINE(666)
		if (((b != null()))){
			HX_STACK_LINE(666)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/PulleyJoint.hx",667,0xdaffcadd)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(667)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(667)
			::zpp_nape::constraint::ZPP_CopyHelper _g4 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(667)
			todo->push(_g4);
		}
	}
	HX_STACK_LINE(671)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(680)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(681)
			while((true)){
				HX_STACK_LINE(681)
				if ((!(((_g4 < dict->length))))){
					HX_STACK_LINE(681)
					break;
				}
				HX_STACK_LINE(681)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g4).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(681)
				++(_g4);
				HX_STACK_LINE(682)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(683)
					b = idc->bc;
					HX_STACK_LINE(684)
					break;
				}
			}
		}
		HX_STACK_LINE(687)
		if (((b != null()))){
			HX_STACK_LINE(687)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/PulleyJoint.hx",688,0xdaffcadd)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(688)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(688)
			::zpp_nape::constraint::ZPP_CopyHelper _g5 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(688)
			todo->push(_g5);
		}
	}
	HX_STACK_LINE(692)
	if (((bool((dict != null())) && bool((this->b3 != null()))))){
		HX_STACK_LINE(701)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(702)
		{
			HX_STACK_LINE(702)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				if ((!(((_g4 < dict->length))))){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g4).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(702)
				++(_g4);
				HX_STACK_LINE(703)
				if (((idc->id == this->b3->id))){
					HX_STACK_LINE(704)
					b = idc->bc;
					HX_STACK_LINE(705)
					break;
				}
			}
		}
		HX_STACK_LINE(708)
		if (((b != null()))){
			HX_STACK_LINE(708)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b3 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/PulleyJoint.hx",709,0xdaffcadd)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(709)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b3 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(709)
			::zpp_nape::constraint::ZPP_CopyHelper _g6 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b3->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(709)
			todo->push(_g6);
		}
	}
	HX_STACK_LINE(713)
	if (((bool((dict != null())) && bool((this->b4 != null()))))){
		HX_STACK_LINE(722)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(723)
			while((true)){
				HX_STACK_LINE(723)
				if ((!(((_g4 < dict->length))))){
					HX_STACK_LINE(723)
					break;
				}
				HX_STACK_LINE(723)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g4).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(723)
				++(_g4);
				HX_STACK_LINE(724)
				if (((idc->id == this->b4->id))){
					HX_STACK_LINE(725)
					b = idc->bc;
					HX_STACK_LINE(726)
					break;
				}
			}
		}
		HX_STACK_LINE(729)
		if (((b != null()))){
			HX_STACK_LINE(729)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b4 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","zpp_nape/constraint/PulleyJoint.hx",730,0xdaffcadd)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(730)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b4 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(730)
			::zpp_nape::constraint::ZPP_CopyHelper _g7 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b4->id, Dynamic(new _Function_3_1(ret)));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(730)
			todo->push(_g7);
		}
	}
	HX_STACK_LINE(733)
	return ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >();
}


Void ZPP_PulleyJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate",0xea4b1148,"zpp_nape.constraint.ZPP_PulleyJoint.validate","zpp_nape/constraint/PulleyJoint.hx",950,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(951)
		if (((bool((bool((bool((this->b1 == null())) || bool((this->b2 == null())))) || bool((this->b3 == null())))) || bool((this->b4 == null()))))){
			HX_STACK_LINE(951)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PulleyJoint cannot be simulated with null bodies"));
		}
		HX_STACK_LINE(952)
		if (((bool((this->b1 == this->b2)) || bool((this->b3 == this->b4))))){
			HX_STACK_LINE(952)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PulleyJoint cannot have body1==body2 or body3==body4"));
		}
		HX_STACK_LINE(953)
		if (((bool((bool((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space)))) || bool((this->b3->space != this->space)))) || bool((this->b4->space != this->space))))){
			HX_STACK_LINE(953)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(954)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(954)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PulleyJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(955)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(955)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic"));
		}
		HX_STACK_LINE(956)
		if (((bool(!(((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(956)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic"));
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","wake_connected",0xf221a1e0,"zpp_nape.constraint.ZPP_PulleyJoint.wake_connected","zpp_nape/constraint/PulleyJoint.hx",958,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(959)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(959)
			this->b1->wake();
		}
		HX_STACK_LINE(960)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(960)
			this->b2->wake();
		}
		HX_STACK_LINE(961)
		if (((bool((this->b3 != null())) && bool((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(961)
			this->b3->wake();
		}
		HX_STACK_LINE(962)
		if (((bool((this->b4 != null())) && bool((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(962)
			this->b4->wake();
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","forest",0x78d5dd0f,"zpp_nape.constraint.ZPP_PulleyJoint.forest","zpp_nape/constraint/PulleyJoint.hx",964,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(965)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(966)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(966)
			if (((this->b1->component == this->b1->component->parent))){
				HX_STACK_LINE(967)
				xr = this->b1->component;
			}
			else{
				HX_STACK_LINE(969)
				::zpp_nape::space::ZPP_Component obj = this->b1->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(970)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(971)
				while((true)){
					HX_STACK_LINE(971)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(971)
						break;
					}
					HX_STACK_LINE(972)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(973)
					obj->parent = stack;
					HX_STACK_LINE(974)
					stack = obj;
					HX_STACK_LINE(975)
					obj = nxt;
				}
				HX_STACK_LINE(977)
				while((true)){
					HX_STACK_LINE(977)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(977)
						break;
					}
					HX_STACK_LINE(978)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(979)
					stack->parent = obj;
					HX_STACK_LINE(980)
					stack = nxt;
				}
				HX_STACK_LINE(982)
				xr = obj;
			}
			HX_STACK_LINE(985)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(985)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(986)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(988)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(989)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(990)
				while((true)){
					HX_STACK_LINE(990)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(990)
						break;
					}
					HX_STACK_LINE(991)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(992)
					obj->parent = stack;
					HX_STACK_LINE(993)
					stack = obj;
					HX_STACK_LINE(994)
					obj = nxt;
				}
				HX_STACK_LINE(996)
				while((true)){
					HX_STACK_LINE(996)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(996)
						break;
					}
					HX_STACK_LINE(997)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(998)
					stack->parent = obj;
					HX_STACK_LINE(999)
					stack = nxt;
				}
				HX_STACK_LINE(1001)
				yr = obj;
			}
			HX_STACK_LINE(1004)
			if (((xr != yr))){
				HX_STACK_LINE(1005)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1005)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1006)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1006)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1008)
						yr->parent = xr;
						HX_STACK_LINE(1009)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1013)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(1014)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1014)
			if (((this->b2->component == this->b2->component->parent))){
				HX_STACK_LINE(1015)
				xr = this->b2->component;
			}
			else{
				HX_STACK_LINE(1017)
				::zpp_nape::space::ZPP_Component obj = this->b2->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1018)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1019)
				while((true)){
					HX_STACK_LINE(1019)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1019)
						break;
					}
					HX_STACK_LINE(1020)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1021)
					obj->parent = stack;
					HX_STACK_LINE(1022)
					stack = obj;
					HX_STACK_LINE(1023)
					obj = nxt;
				}
				HX_STACK_LINE(1025)
				while((true)){
					HX_STACK_LINE(1025)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1025)
						break;
					}
					HX_STACK_LINE(1026)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1027)
					stack->parent = obj;
					HX_STACK_LINE(1028)
					stack = nxt;
				}
				HX_STACK_LINE(1030)
				xr = obj;
			}
			HX_STACK_LINE(1033)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1033)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(1034)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(1036)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1037)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1038)
				while((true)){
					HX_STACK_LINE(1038)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1038)
						break;
					}
					HX_STACK_LINE(1039)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1040)
					obj->parent = stack;
					HX_STACK_LINE(1041)
					stack = obj;
					HX_STACK_LINE(1042)
					obj = nxt;
				}
				HX_STACK_LINE(1044)
				while((true)){
					HX_STACK_LINE(1044)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1044)
						break;
					}
					HX_STACK_LINE(1045)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1046)
					stack->parent = obj;
					HX_STACK_LINE(1047)
					stack = nxt;
				}
				HX_STACK_LINE(1049)
				yr = obj;
			}
			HX_STACK_LINE(1052)
			if (((xr != yr))){
				HX_STACK_LINE(1053)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1053)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1054)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1054)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1056)
						yr->parent = xr;
						HX_STACK_LINE(1057)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1061)
		if (((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(1062)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1062)
			if (((this->b3->component == this->b3->component->parent))){
				HX_STACK_LINE(1063)
				xr = this->b3->component;
			}
			else{
				HX_STACK_LINE(1065)
				::zpp_nape::space::ZPP_Component obj = this->b3->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1066)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1067)
				while((true)){
					HX_STACK_LINE(1067)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1067)
						break;
					}
					HX_STACK_LINE(1068)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1069)
					obj->parent = stack;
					HX_STACK_LINE(1070)
					stack = obj;
					HX_STACK_LINE(1071)
					obj = nxt;
				}
				HX_STACK_LINE(1073)
				while((true)){
					HX_STACK_LINE(1073)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1073)
						break;
					}
					HX_STACK_LINE(1074)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1075)
					stack->parent = obj;
					HX_STACK_LINE(1076)
					stack = nxt;
				}
				HX_STACK_LINE(1078)
				xr = obj;
			}
			HX_STACK_LINE(1081)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1081)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(1082)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(1084)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1085)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1086)
				while((true)){
					HX_STACK_LINE(1086)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1086)
						break;
					}
					HX_STACK_LINE(1087)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1088)
					obj->parent = stack;
					HX_STACK_LINE(1089)
					stack = obj;
					HX_STACK_LINE(1090)
					obj = nxt;
				}
				HX_STACK_LINE(1092)
				while((true)){
					HX_STACK_LINE(1092)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1092)
						break;
					}
					HX_STACK_LINE(1093)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1094)
					stack->parent = obj;
					HX_STACK_LINE(1095)
					stack = nxt;
				}
				HX_STACK_LINE(1097)
				yr = obj;
			}
			HX_STACK_LINE(1100)
			if (((xr != yr))){
				HX_STACK_LINE(1101)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1101)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1102)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1102)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1104)
						yr->parent = xr;
						HX_STACK_LINE(1105)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1109)
		if (((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(1110)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1110)
			if (((this->b4->component == this->b4->component->parent))){
				HX_STACK_LINE(1111)
				xr = this->b4->component;
			}
			else{
				HX_STACK_LINE(1113)
				::zpp_nape::space::ZPP_Component obj = this->b4->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1114)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1115)
				while((true)){
					HX_STACK_LINE(1115)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1115)
						break;
					}
					HX_STACK_LINE(1116)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1117)
					obj->parent = stack;
					HX_STACK_LINE(1118)
					stack = obj;
					HX_STACK_LINE(1119)
					obj = nxt;
				}
				HX_STACK_LINE(1121)
				while((true)){
					HX_STACK_LINE(1121)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1121)
						break;
					}
					HX_STACK_LINE(1122)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1123)
					stack->parent = obj;
					HX_STACK_LINE(1124)
					stack = nxt;
				}
				HX_STACK_LINE(1126)
				xr = obj;
			}
			HX_STACK_LINE(1129)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1129)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(1130)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(1132)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1133)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(1134)
				while((true)){
					HX_STACK_LINE(1134)
					if ((!(((obj != obj->parent))))){
						HX_STACK_LINE(1134)
						break;
					}
					HX_STACK_LINE(1135)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1136)
					obj->parent = stack;
					HX_STACK_LINE(1137)
					stack = obj;
					HX_STACK_LINE(1138)
					obj = nxt;
				}
				HX_STACK_LINE(1140)
				while((true)){
					HX_STACK_LINE(1140)
					if ((!(((stack != null()))))){
						HX_STACK_LINE(1140)
						break;
					}
					HX_STACK_LINE(1141)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1142)
					stack->parent = obj;
					HX_STACK_LINE(1143)
					stack = nxt;
				}
				HX_STACK_LINE(1145)
				yr = obj;
			}
			HX_STACK_LINE(1148)
			if (((xr != yr))){
				HX_STACK_LINE(1149)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1149)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1150)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1150)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1152)
						yr->parent = xr;
						HX_STACK_LINE(1153)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_PulleyJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","pair_exists",0x61a1252f,"zpp_nape.constraint.ZPP_PulleyJoint.pair_exists","zpp_nape/constraint/PulleyJoint.hx",1159,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(1159)
	return (bool((bool((bool((bool((this->b1->id == id)) && bool(((bool((bool((this->b2->id == di)) || bool((this->b3->id == di)))) || bool((this->b4->id == di))))))) || bool((bool((this->b2->id == id)) && bool(((bool((bool((this->b3->id == di)) || bool((this->b4->id == di)))) || bool((this->b1->id == di))))))))) || bool((bool((this->b3->id == id)) && bool(((bool((bool((this->b4->id == di)) || bool((this->b1->id == di)))) || bool((this->b2->id == di))))))))) || bool((bool((this->b4->id == id)) && bool(((bool((bool((this->b1->id == di)) || bool((this->b2->id == di)))) || bool((this->b3->id == di))))))));
}


Void ZPP_PulleyJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","clearcache",0x012fbac7,"zpp_nape.constraint.ZPP_PulleyJoint.clearcache","zpp_nape/constraint/PulleyJoint.hx",1161,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1162)
		this->jAcc = (int)0;
		HX_STACK_LINE(1163)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_PulleyJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","preStep",0x8d199c9d,"zpp_nape.constraint.ZPP_PulleyJoint.preStep","zpp_nape/constraint/PulleyJoint.hx",1165,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(1166)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(1166)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1167)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1168)
	this->pre_dt = dt;
	HX_STACK_LINE(1169)
	this->stepped = true;
	HX_STACK_LINE(1170)
	this->equal = (this->jointMin == this->jointMax);
	HX_STACK_LINE(1171)
	{
		HX_STACK_LINE(1172)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1173)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1175)
	{
		HX_STACK_LINE(1176)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1177)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1179)
	{
		HX_STACK_LINE(1180)
		this->a3relx = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(1181)
		this->a3rely = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(1183)
	{
		HX_STACK_LINE(1184)
		this->a4relx = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(1185)
		this->a4rely = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	HX_STACK_LINE(1187)
	Float C;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(1187)
	{
		HX_STACK_LINE(1188)
		Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(1189)
		Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(1190)
		Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(1191)
		Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(1192)
		t12x = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(1193)
		t12y = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(1194)
		t34x = ((this->b4->posx + this->a4relx) - ((this->b3->posx + this->a3relx)));
		HX_STACK_LINE(1195)
		t34y = ((this->b4->posy + this->a4rely) - ((this->b3->posy + this->a3rely)));
		HX_STACK_LINE(1196)
		Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(1197)
		Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(1198)
		if (((C12 != (int)0))){
			HX_STACK_LINE(1200)
			Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1209)
			this->n12x = (t12x * t);
			HX_STACK_LINE(1210)
			this->n12y = (t12y * t);
		}
		HX_STACK_LINE(1213)
		if (((C34 != (int)0))){
			HX_STACK_LINE(1214)
			{
				HX_STACK_LINE(1215)
				Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1224)
				this->n34x = (t34x * t);
				HX_STACK_LINE(1225)
				this->n34y = (t34y * t);
			}
			HX_STACK_LINE(1227)
			{
				HX_STACK_LINE(1228)
				Float t = this->ratio;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1237)
				hx::MultEq(this->n34x,t);
				HX_STACK_LINE(1238)
				hx::MultEq(this->n34y,t);
			}
		}
		else{
			HX_STACK_LINE(1243)
			Float _g = ::Math_obj::sqrt(((this->n34x * this->n34x) + (this->n34y * this->n34y)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1243)
			Float t = (Float(this->ratio) / Float(_g));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1252)
			hx::MultEq(this->n34x,t);
			HX_STACK_LINE(1253)
			hx::MultEq(this->n34y,t);
		}
		HX_STACK_LINE(1256)
		Float C1 = (C12 + (this->ratio * C34));		HX_STACK_VAR(C1,"C1");
		HX_STACK_LINE(1257)
		if ((this->equal)){
			HX_STACK_LINE(1258)
			hx::SubEq(C1,this->jointMax);
			HX_STACK_LINE(1259)
			this->slack = false;
		}
		else{
			HX_STACK_LINE(1262)
			if (((C1 < this->jointMin))){
				HX_STACK_LINE(1263)
				C1 = (this->jointMin - C1);
				HX_STACK_LINE(1264)
				{
					HX_STACK_LINE(1265)
					this->n12x = -(this->n12x);
					HX_STACK_LINE(1266)
					this->n12y = -(this->n12y);
				}
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1269)
					this->n34x = -(this->n34x);
					HX_STACK_LINE(1270)
					this->n34y = -(this->n34y);
				}
				HX_STACK_LINE(1272)
				this->slack = false;
			}
			else{
				HX_STACK_LINE(1274)
				if (((C1 > this->jointMax))){
					HX_STACK_LINE(1275)
					hx::SubEq(C1,this->jointMax);
					HX_STACK_LINE(1276)
					this->slack = false;
				}
				else{
					HX_STACK_LINE(1279)
					{
						HX_STACK_LINE(1280)
						this->n12x = (int)0;
						HX_STACK_LINE(1281)
						this->n12y = (int)0;
						HX_STACK_LINE(1290)
						{
						}
					}
					HX_STACK_LINE(1299)
					{
						HX_STACK_LINE(1300)
						this->n34x = (int)0;
						HX_STACK_LINE(1301)
						this->n34y = (int)0;
						HX_STACK_LINE(1310)
						{
						}
					}
					HX_STACK_LINE(1319)
					C1 = (int)0;
					HX_STACK_LINE(1320)
					this->slack = true;
				}
			}
		}
		HX_STACK_LINE(1323)
		C = C1;
	}
	HX_STACK_LINE(1325)
	if ((!(this->slack))){
		HX_STACK_LINE(1326)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1326)
		{
			HX_STACK_LINE(1327)
			this->cx1 = ((this->n12y * this->a1relx) - (this->n12x * this->a1rely));
			HX_STACK_LINE(1328)
			this->cx2 = ((this->n12y * this->a2relx) - (this->n12x * this->a2rely));
			HX_STACK_LINE(1329)
			this->cx3 = ((this->n34y * this->a3relx) - (this->n34x * this->a3rely));
			HX_STACK_LINE(1330)
			this->cx4 = ((this->n34y * this->a4relx) - (this->n34x * this->a4rely));
			HX_STACK_LINE(1331)
			Float ratioSq = (this->ratio * this->ratio);		HX_STACK_VAR(ratioSq,"ratioSq");
			HX_STACK_LINE(1332)
			Float K = ((((((this->b1->smass + this->b2->smass) + (ratioSq * ((this->b3->smass + this->b4->smass)))) + ((this->b1->sinertia * this->cx1) * this->cx1)) + ((this->b2->sinertia * this->cx2) * this->cx2)) + ((this->b3->sinertia * this->cx3) * this->cx3)) + ((this->b4->sinertia * this->cx4) * this->cx4));		HX_STACK_VAR(K,"K");
			HX_STACK_LINE(1333)
			if (((this->b1 == this->b4))){
				HX_STACK_LINE(1333)
				hx::SubEq(K,((int)2 * ((((((this->n12x * this->n34x) + (this->n12y * this->n34y))) * this->b1->smass) + ((this->cx1 * this->cx4) * this->b1->sinertia)))));
			}
			HX_STACK_LINE(1334)
			if (((this->b1 == this->b3))){
				HX_STACK_LINE(1334)
				hx::AddEq(K,((int)2 * ((((((this->n12x * this->n34x) + (this->n12y * this->n34y))) * this->b1->smass) + ((this->cx1 * this->cx3) * this->b1->sinertia)))));
			}
			HX_STACK_LINE(1335)
			if (((this->b2 == this->b3))){
				HX_STACK_LINE(1335)
				hx::SubEq(K,((int)2 * ((((((this->n12x * this->n34x) + (this->n12y * this->n34y))) * this->b2->smass) + ((this->cx2 * this->cx3) * this->b2->sinertia)))));
			}
			HX_STACK_LINE(1336)
			if (((this->b2 == this->b4))){
				HX_STACK_LINE(1336)
				hx::AddEq(K,((int)2 * ((((((this->n12x * this->n34x) + (this->n12y * this->n34y))) * this->b2->smass) + ((this->cx2 * this->cx4) * this->b2->sinertia)))));
			}
			HX_STACK_LINE(1337)
			_g1 = K;
		}
		HX_STACK_LINE(1326)
		this->kMass = _g1;
		HX_STACK_LINE(1339)
		if (((this->kMass != (int)0))){
			HX_STACK_LINE(1339)
			this->kMass = (Float((int)1) / Float(this->kMass));
		}
		else{
			HX_STACK_LINE(1340)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(1341)
		if ((!(this->stiff))){
			HX_STACK_LINE(1342)
			if (((bool(this->breakUnderError) && bool(((C * C) > (this->maxError * this->maxError)))))){
				HX_STACK_LINE(1342)
				return true;
			}
			HX_STACK_LINE(1343)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			HX_STACK_LINE(1344)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1344)
			{
				HX_STACK_LINE(1345)
				Float omega = (((int)2 * ::Math_obj::PI) * this->frequency);		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(1346)
				this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * this->damping) + (omega * dt)))))));
				HX_STACK_LINE(1347)
				Float ig = (Float((int)1) / Float((((int)1 + this->gamma))));		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(1348)
				biasCoef = (((dt * omega) * omega) * this->gamma);
				HX_STACK_LINE(1349)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(1350)
				_g2 = ig;
			}
			HX_STACK_LINE(1344)
			hx::MultEq(this->kMass,_g2);
			HX_STACK_LINE(1352)
			this->bias = (-(C) * biasCoef);
			HX_STACK_LINE(1354)
			if (((this->bias < -(this->maxError)))){
				HX_STACK_LINE(1354)
				this->bias = -(this->maxError);
			}
			else{
				HX_STACK_LINE(1355)
				if (((this->bias > this->maxError))){
					HX_STACK_LINE(1355)
					this->bias = this->maxError;
				}
			}
		}
		else{
			HX_STACK_LINE(1359)
			this->bias = (int)0;
			HX_STACK_LINE(1360)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(1362)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(1363)
		this->jMax = (this->maxForce * dt);
	}
	HX_STACK_LINE(1365)
	return false;
}


Void ZPP_PulleyJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","warmStart",0xbff482eb,"zpp_nape.constraint.ZPP_PulleyJoint.warmStart","zpp_nape/constraint/PulleyJoint.hx",1368,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1368)
		if ((!(this->slack))){
			HX_STACK_LINE(1428)
			{
				HX_STACK_LINE(1429)
				Float t = (this->b1->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1438)
				hx::SubEq(this->b1->velx,(this->n12x * t));
				HX_STACK_LINE(1439)
				hx::SubEq(this->b1->vely,(this->n12y * t));
			}
			HX_STACK_LINE(1441)
			{
				HX_STACK_LINE(1442)
				Float t = (this->b2->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1451)
				hx::AddEq(this->b2->velx,(this->n12x * t));
				HX_STACK_LINE(1452)
				hx::AddEq(this->b2->vely,(this->n12y * t));
			}
			HX_STACK_LINE(1454)
			{
				HX_STACK_LINE(1455)
				Float t = (this->b3->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1464)
				hx::SubEq(this->b3->velx,(this->n34x * t));
				HX_STACK_LINE(1465)
				hx::SubEq(this->b3->vely,(this->n34y * t));
			}
			HX_STACK_LINE(1467)
			{
				HX_STACK_LINE(1468)
				Float t = (this->b4->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1477)
				hx::AddEq(this->b4->velx,(this->n34x * t));
				HX_STACK_LINE(1478)
				hx::AddEq(this->b4->vely,(this->n34y * t));
			}
			HX_STACK_LINE(1480)
			hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * this->jAcc));
			HX_STACK_LINE(1481)
			hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * this->jAcc));
			HX_STACK_LINE(1482)
			hx::SubEq(this->b3->angvel,((this->cx3 * this->b3->iinertia) * this->jAcc));
			HX_STACK_LINE(1483)
			hx::AddEq(this->b4->angvel,((this->cx4 * this->b4->iinertia) * this->jAcc));
		}
	}
return null();
}


bool ZPP_PulleyJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","applyImpulseVel",0x2664e144,"zpp_nape.constraint.ZPP_PulleyJoint.applyImpulseVel","zpp_nape/constraint/PulleyJoint.hx",1487,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1488)
	if ((this->slack)){
		HX_STACK_LINE(1488)
		return false;
	}
	HX_STACK_LINE(1490)
	Float E = ((((((((this->n12x * ((((this->b2->velx + this->b2->kinvelx) - this->b1->velx) - this->b1->kinvelx))) + (this->n12y * ((((this->b2->vely + this->b2->kinvely) - this->b1->vely) - this->b1->kinvely)))) + (this->n34x * ((((this->b4->velx + this->b4->kinvelx) - this->b3->velx) - this->b3->kinvelx)))) + (this->n34y * ((((this->b4->vely + this->b4->kinvely) - this->b3->vely) - this->b3->kinvely)))) + (((this->b2->angvel + this->b2->kinangvel)) * this->cx2)) - (((this->b1->angvel + this->b1->kinangvel)) * this->cx1)) + (((this->b4->angvel + this->b4->kinangvel)) * this->cx4)) - (((this->b3->angvel + this->b3->kinangvel)) * this->cx3));		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1492)
	Float j = ((this->kMass * ((this->bias - E))) - (this->jAcc * this->gamma));		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1493)
	{
		HX_STACK_LINE(1502)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(1503)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(1504)
		{
			HX_STACK_LINE(1505)
			if (((bool(!(this->equal)) && bool((this->jAcc > (int)0))))){
				HX_STACK_LINE(1505)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(1506)
			if (((bool(this->breakUnderForce) && bool((this->jAcc < -(this->jMax)))))){
				HX_STACK_LINE(1506)
				return true;
			}
			HX_STACK_LINE(1507)
			if ((!(this->stiff))){
				HX_STACK_LINE(1508)
				if (((this->jAcc < -(this->jMax)))){
					HX_STACK_LINE(1508)
					this->jAcc = -(this->jMax);
				}
			}
		}
		HX_STACK_LINE(1511)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(1572)
	{
		HX_STACK_LINE(1573)
		{
			HX_STACK_LINE(1574)
			Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1583)
			hx::SubEq(this->b1->velx,(this->n12x * t));
			HX_STACK_LINE(1584)
			hx::SubEq(this->b1->vely,(this->n12y * t));
		}
		HX_STACK_LINE(1586)
		{
			HX_STACK_LINE(1587)
			Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1596)
			hx::AddEq(this->b2->velx,(this->n12x * t));
			HX_STACK_LINE(1597)
			hx::AddEq(this->b2->vely,(this->n12y * t));
		}
		HX_STACK_LINE(1599)
		{
			HX_STACK_LINE(1600)
			Float t = (this->b3->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1609)
			hx::SubEq(this->b3->velx,(this->n34x * t));
			HX_STACK_LINE(1610)
			hx::SubEq(this->b3->vely,(this->n34y * t));
		}
		HX_STACK_LINE(1612)
		{
			HX_STACK_LINE(1613)
			Float t = (this->b4->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1622)
			hx::AddEq(this->b4->velx,(this->n34x * t));
			HX_STACK_LINE(1623)
			hx::AddEq(this->b4->vely,(this->n34y * t));
		}
		HX_STACK_LINE(1625)
		hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * j));
		HX_STACK_LINE(1626)
		hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * j));
		HX_STACK_LINE(1627)
		hx::SubEq(this->b3->angvel,((this->cx3 * this->b3->iinertia) * j));
		HX_STACK_LINE(1628)
		hx::AddEq(this->b4->angvel,((this->cx4 * this->b4->iinertia) * j));
	}
	HX_STACK_LINE(1631)
	return false;
}


bool ZPP_PulleyJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","applyImpulsePos",0x26605c7b,"zpp_nape.constraint.ZPP_PulleyJoint.applyImpulsePos","zpp_nape/constraint/PulleyJoint.hx",1633,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1634)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1635)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1636)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1637)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1639)
	{
		HX_STACK_LINE(1640)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1641)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1644)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1645)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1647)
	{
		HX_STACK_LINE(1648)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1649)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1652)
	Float r3x = 0.0;		HX_STACK_VAR(r3x,"r3x");
	HX_STACK_LINE(1653)
	Float r3y = 0.0;		HX_STACK_VAR(r3y,"r3y");
	HX_STACK_LINE(1655)
	{
		HX_STACK_LINE(1656)
		r3x = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(1657)
		r3y = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(1660)
	Float r4x = 0.0;		HX_STACK_VAR(r4x,"r4x");
	HX_STACK_LINE(1661)
	Float r4y = 0.0;		HX_STACK_VAR(r4y,"r4y");
	HX_STACK_LINE(1663)
	{
		HX_STACK_LINE(1664)
		r4x = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(1665)
		r4y = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	HX_STACK_LINE(1668)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(1669)
	Float n12x = 0.0;		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(1670)
	Float n12y = 0.0;		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(1671)
	Float n34x = 0.0;		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(1672)
	Float n34y = 0.0;		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(1673)
	{
		HX_STACK_LINE(1674)
		n12x = this->n12x;
		HX_STACK_LINE(1675)
		n12y = this->n12y;
		HX_STACK_LINE(1684)
		{
		}
	}
	HX_STACK_LINE(1693)
	{
		HX_STACK_LINE(1694)
		n34x = this->n34x;
		HX_STACK_LINE(1695)
		n34y = this->n34y;
		HX_STACK_LINE(1704)
		{
		}
	}
	HX_STACK_LINE(1713)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1713)
	{
		HX_STACK_LINE(1714)
		Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(1715)
		Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(1716)
		Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(1717)
		Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(1718)
		t12x = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
		HX_STACK_LINE(1719)
		t12y = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
		HX_STACK_LINE(1720)
		t34x = ((this->b4->posx + r4x) - ((this->b3->posx + r3x)));
		HX_STACK_LINE(1721)
		t34y = ((this->b4->posy + r4y) - ((this->b3->posy + r3y)));
		HX_STACK_LINE(1722)
		Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(1723)
		Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(1724)
		if (((C12 != (int)0))){
			HX_STACK_LINE(1726)
			Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1735)
			n12x = (t12x * t);
			HX_STACK_LINE(1736)
			n12y = (t12y * t);
		}
		HX_STACK_LINE(1739)
		if (((C34 != (int)0))){
			HX_STACK_LINE(1740)
			{
				HX_STACK_LINE(1741)
				Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1750)
				n34x = (t34x * t);
				HX_STACK_LINE(1751)
				n34y = (t34y * t);
			}
			HX_STACK_LINE(1753)
			{
				HX_STACK_LINE(1754)
				Float t = this->ratio;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1763)
				hx::MultEq(n34x,t);
				HX_STACK_LINE(1764)
				hx::MultEq(n34y,t);
			}
		}
		else{
			HX_STACK_LINE(1769)
			Float _g = ::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1769)
			Float t = (Float(this->ratio) / Float(_g));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1778)
			hx::MultEq(n34x,t);
			HX_STACK_LINE(1779)
			hx::MultEq(n34y,t);
		}
		HX_STACK_LINE(1782)
		Float C = (C12 + (this->ratio * C34));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(1783)
		if ((this->equal)){
			HX_STACK_LINE(1784)
			hx::SubEq(C,this->jointMax);
			HX_STACK_LINE(1785)
			slack = false;
		}
		else{
			HX_STACK_LINE(1788)
			if (((C < this->jointMin))){
				HX_STACK_LINE(1789)
				C = (this->jointMin - C);
				HX_STACK_LINE(1790)
				{
					HX_STACK_LINE(1791)
					n12x = -(n12x);
					HX_STACK_LINE(1792)
					n12y = -(n12y);
				}
				HX_STACK_LINE(1794)
				{
					HX_STACK_LINE(1795)
					n34x = -(n34x);
					HX_STACK_LINE(1796)
					n34y = -(n34y);
				}
				HX_STACK_LINE(1798)
				slack = false;
			}
			else{
				HX_STACK_LINE(1800)
				if (((C > this->jointMax))){
					HX_STACK_LINE(1801)
					hx::SubEq(C,this->jointMax);
					HX_STACK_LINE(1802)
					slack = false;
				}
				else{
					HX_STACK_LINE(1805)
					{
						HX_STACK_LINE(1806)
						n12x = (int)0;
						HX_STACK_LINE(1807)
						n12y = (int)0;
						HX_STACK_LINE(1816)
						{
						}
					}
					HX_STACK_LINE(1825)
					{
						HX_STACK_LINE(1826)
						n34x = (int)0;
						HX_STACK_LINE(1827)
						n34y = (int)0;
						HX_STACK_LINE(1836)
						{
						}
					}
					HX_STACK_LINE(1845)
					C = (int)0;
					HX_STACK_LINE(1846)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(1849)
		_g1 = C;
	}
	HX_STACK_LINE(1713)
	E = _g1;
	HX_STACK_LINE(1851)
	if ((!(slack))){
		HX_STACK_LINE(1852)
		if (((bool(this->breakUnderError) && bool(((E * E) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(1852)
			return true;
		}
		HX_STACK_LINE(1853)
		if ((((E * E) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
			HX_STACK_LINE(1853)
			return false;
		}
		HX_STACK_LINE(1854)
		hx::MultEq(E,0.5);
		HX_STACK_LINE(1855)
		if ((((E * E) > (int)6))){
			HX_STACK_LINE(1856)
			Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1857)
			if (((k > ::nape::Config_obj::epsilon))){
				HX_STACK_LINE(1858)
				k = (Float(0.75) / Float(k));
				HX_STACK_LINE(1859)
				j = (-(E) * k);
				HX_STACK_LINE(1860)
				if (((bool(this->equal) || bool((j < (int)0))))){
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1862)
						Float t = (j * this->b1->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1871)
						hx::SubEq(this->b1->posx,(n12x * t));
						HX_STACK_LINE(1872)
						hx::SubEq(this->b1->posy,(n12y * t));
					}
					HX_STACK_LINE(1874)
					{
						HX_STACK_LINE(1875)
						Float t = (j * this->b2->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1884)
						hx::AddEq(this->b2->posx,(n12x * t));
						HX_STACK_LINE(1885)
						hx::AddEq(this->b2->posy,(n12y * t));
					}
					HX_STACK_LINE(1887)
					{
						HX_STACK_LINE(1888)
						Float t = (j * this->b3->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1897)
						hx::SubEq(this->b3->posx,(n34x * t));
						HX_STACK_LINE(1898)
						hx::SubEq(this->b3->posy,(n34y * t));
					}
					HX_STACK_LINE(1900)
					{
						HX_STACK_LINE(1901)
						Float t = (j * this->b4->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1910)
						hx::AddEq(this->b4->posx,(n34x * t));
						HX_STACK_LINE(1911)
						hx::AddEq(this->b4->posy,(n34y * t));
					}
					HX_STACK_LINE(1913)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1914)
						Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
						HX_STACK_LINE(1915)
						Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
						HX_STACK_LINE(1916)
						Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
						HX_STACK_LINE(1917)
						Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
						HX_STACK_LINE(1918)
						t12x = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
						HX_STACK_LINE(1919)
						t12y = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
						HX_STACK_LINE(1920)
						t34x = ((this->b4->posx + r4x) - ((this->b3->posx + r3x)));
						HX_STACK_LINE(1921)
						t34y = ((this->b4->posy + r4y) - ((this->b3->posy + r3y)));
						HX_STACK_LINE(1922)
						Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
						HX_STACK_LINE(1923)
						Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
						HX_STACK_LINE(1924)
						if (((C12 != (int)0))){
							HX_STACK_LINE(1926)
							Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1935)
							n12x = (t12x * t);
							HX_STACK_LINE(1936)
							n12y = (t12y * t);
						}
						HX_STACK_LINE(1939)
						if (((C34 != (int)0))){
							HX_STACK_LINE(1940)
							{
								HX_STACK_LINE(1941)
								Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1950)
								n34x = (t34x * t);
								HX_STACK_LINE(1951)
								n34y = (t34y * t);
							}
							HX_STACK_LINE(1953)
							{
								HX_STACK_LINE(1954)
								Float t = this->ratio;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1963)
								hx::MultEq(n34x,t);
								HX_STACK_LINE(1964)
								hx::MultEq(n34y,t);
							}
						}
						else{
							HX_STACK_LINE(1969)
							Float _g2 = ::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1969)
							Float t = (Float(this->ratio) / Float(_g2));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1978)
							hx::MultEq(n34x,t);
							HX_STACK_LINE(1979)
							hx::MultEq(n34y,t);
						}
						HX_STACK_LINE(1982)
						Float C = (C12 + (this->ratio * C34));		HX_STACK_VAR(C,"C");
						HX_STACK_LINE(1983)
						if ((this->equal)){
							HX_STACK_LINE(1984)
							hx::SubEq(C,this->jointMax);
							HX_STACK_LINE(1985)
							slack = false;
						}
						else{
							HX_STACK_LINE(1988)
							if (((C < this->jointMin))){
								HX_STACK_LINE(1989)
								C = (this->jointMin - C);
								HX_STACK_LINE(1990)
								{
									HX_STACK_LINE(1991)
									n12x = -(n12x);
									HX_STACK_LINE(1992)
									n12y = -(n12y);
								}
								HX_STACK_LINE(1994)
								{
									HX_STACK_LINE(1995)
									n34x = -(n34x);
									HX_STACK_LINE(1996)
									n34y = -(n34y);
								}
								HX_STACK_LINE(1998)
								slack = false;
							}
							else{
								HX_STACK_LINE(2000)
								if (((C > this->jointMax))){
									HX_STACK_LINE(2001)
									hx::SubEq(C,this->jointMax);
									HX_STACK_LINE(2002)
									slack = false;
								}
								else{
									HX_STACK_LINE(2005)
									{
										HX_STACK_LINE(2006)
										n12x = (int)0;
										HX_STACK_LINE(2007)
										n12y = (int)0;
										HX_STACK_LINE(2016)
										{
										}
									}
									HX_STACK_LINE(2025)
									{
										HX_STACK_LINE(2026)
										n34x = (int)0;
										HX_STACK_LINE(2027)
										n34y = (int)0;
										HX_STACK_LINE(2036)
										{
										}
									}
									HX_STACK_LINE(2045)
									C = (int)0;
									HX_STACK_LINE(2046)
									slack = true;
								}
							}
						}
						HX_STACK_LINE(2049)
						_g3 = C;
					}
					HX_STACK_LINE(1913)
					E = _g3;
					HX_STACK_LINE(2051)
					hx::MultEq(E,0.5);
				}
			}
		}
		HX_STACK_LINE(2055)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(2055)
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(2055)
		Float cx3;		HX_STACK_VAR(cx3,"cx3");
		HX_STACK_LINE(2055)
		Float cx4;		HX_STACK_VAR(cx4,"cx4");
		HX_STACK_LINE(2056)
		Float k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(2056)
		{
			HX_STACK_LINE(2057)
			cx1 = ((n12y * r1x) - (n12x * r1y));
			HX_STACK_LINE(2058)
			cx2 = ((n12y * r2x) - (n12x * r2y));
			HX_STACK_LINE(2059)
			cx3 = ((n34y * r3x) - (n34x * r3y));
			HX_STACK_LINE(2060)
			cx4 = ((n34y * r4x) - (n34x * r4y));
			HX_STACK_LINE(2061)
			Float ratioSq = (this->ratio * this->ratio);		HX_STACK_VAR(ratioSq,"ratioSq");
			HX_STACK_LINE(2062)
			Float K = ((((((this->b1->smass + this->b2->smass) + (ratioSq * ((this->b3->smass + this->b4->smass)))) + ((this->b1->sinertia * cx1) * cx1)) + ((this->b2->sinertia * cx2) * cx2)) + ((this->b3->sinertia * cx3) * cx3)) + ((this->b4->sinertia * cx4) * cx4));		HX_STACK_VAR(K,"K");
			HX_STACK_LINE(2063)
			if (((this->b1 == this->b4))){
				HX_STACK_LINE(2063)
				hx::SubEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * this->b1->smass) + ((cx1 * cx4) * this->b1->sinertia)))));
			}
			HX_STACK_LINE(2064)
			if (((this->b1 == this->b3))){
				HX_STACK_LINE(2064)
				hx::AddEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * this->b1->smass) + ((cx1 * cx3) * this->b1->sinertia)))));
			}
			HX_STACK_LINE(2065)
			if (((this->b2 == this->b3))){
				HX_STACK_LINE(2065)
				hx::SubEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * this->b2->smass) + ((cx2 * cx3) * this->b2->sinertia)))));
			}
			HX_STACK_LINE(2066)
			if (((this->b2 == this->b4))){
				HX_STACK_LINE(2066)
				hx::AddEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * this->b2->smass) + ((cx2 * cx4) * this->b2->sinertia)))));
			}
			HX_STACK_LINE(2067)
			k = K;
		}
		HX_STACK_LINE(2069)
		if (((k != (int)0))){
			HX_STACK_LINE(2069)
			k = (Float((int)1) / Float(k));
		}
		HX_STACK_LINE(2070)
		j = (-(E) * k);
		HX_STACK_LINE(2071)
		if (((bool(this->equal) || bool((j < (int)0))))){
			HX_STACK_LINE(2073)
			{
				HX_STACK_LINE(2074)
				Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2083)
				hx::SubEq(this->b1->posx,(n12x * t));
				HX_STACK_LINE(2084)
				hx::SubEq(this->b1->posy,(n12y * t));
			}
			HX_STACK_LINE(2086)
			{
				HX_STACK_LINE(2087)
				Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2096)
				hx::AddEq(this->b2->posx,(n12x * t));
				HX_STACK_LINE(2097)
				hx::AddEq(this->b2->posy,(n12y * t));
			}
			HX_STACK_LINE(2099)
			{
				HX_STACK_LINE(2100)
				Float t = (this->b3->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2109)
				hx::SubEq(this->b3->posx,(n34x * t));
				HX_STACK_LINE(2110)
				hx::SubEq(this->b3->posy,(n34y * t));
			}
			HX_STACK_LINE(2112)
			{
				HX_STACK_LINE(2113)
				Float t = (this->b4->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2122)
				hx::AddEq(this->b4->posx,(n34x * t));
				HX_STACK_LINE(2123)
				hx::AddEq(this->b4->posy,(n34y * t));
			}
			HX_STACK_LINE(2125)
			{
				HX_STACK_LINE(2125)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2125)
				Float dr = ((-(cx1) * this->b1->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2125)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2125)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2125)
					Float _g4 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2125)
					_this->axisx = _g4;
					HX_STACK_LINE(2125)
					Float _g5 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2125)
					_this->axisy = _g5;
					HX_STACK_LINE(2125)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2125)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2125)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2125)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2125)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2125)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2125)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2126)
			{
				HX_STACK_LINE(2126)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2126)
				Float dr = ((cx2 * this->b2->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2126)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2126)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2126)
					Float _g6 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(2126)
					_this->axisx = _g6;
					HX_STACK_LINE(2126)
					Float _g7 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2126)
					_this->axisy = _g7;
					HX_STACK_LINE(2126)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2126)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2126)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2126)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2126)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2126)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2126)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2127)
			{
				HX_STACK_LINE(2127)
				::zpp_nape::phys::ZPP_Body _this = this->b3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2127)
				Float dr = ((-(cx3) * this->b3->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2127)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2127)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2127)
					Float _g8 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2127)
					_this->axisx = _g8;
					HX_STACK_LINE(2127)
					Float _g9 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(2127)
					_this->axisy = _g9;
					HX_STACK_LINE(2127)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2127)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2127)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2127)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2127)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2127)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2127)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2128)
			{
				HX_STACK_LINE(2128)
				::zpp_nape::phys::ZPP_Body _this = this->b4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2128)
				Float dr = ((cx4 * this->b4->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2128)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2128)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2128)
					Float _g10 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(2128)
					_this->axisx = _g10;
					HX_STACK_LINE(2128)
					Float _g11 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(2128)
					_this->axisy = _g11;
					HX_STACK_LINE(2128)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2128)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2128)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2128)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2128)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2128)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2128)
					_this->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(2190)
	return false;
}


Void ZPP_PulleyJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","draw",0x72d8abb6,"zpp_nape.constraint.ZPP_PulleyJoint.draw","zpp_nape/constraint/PulleyJoint.hx",2192,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(2193)
		::nape::constraint::PulleyJoint me = this->outer_zn;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(2194)
		::nape::geom::Vec2 _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2194)
		{
			HX_STACK_LINE(2194)
			if (((me->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(2194)
				me->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(2194)
			_g = me->zpp_inner_zn->wrap_a1;
		}
		HX_STACK_LINE(2194)
		::nape::geom::Vec2 a1 = ((  (((me->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b1->outer) ))->localPointToWorld(_g,null());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(2195)
		::nape::geom::Vec2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2195)
		{
			HX_STACK_LINE(2195)
			if (((me->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(2195)
				me->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(2195)
			_g1 = me->zpp_inner_zn->wrap_a2;
		}
		HX_STACK_LINE(2195)
		::nape::geom::Vec2 a2 = ((  (((me->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b2->outer) ))->localPointToWorld(_g1,null());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(2196)
		::nape::geom::Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2196)
		{
			HX_STACK_LINE(2196)
			if (((me->zpp_inner_zn->wrap_a3 == null()))){
				HX_STACK_LINE(2196)
				me->zpp_inner_zn->setup_a3();
			}
			HX_STACK_LINE(2196)
			_g2 = me->zpp_inner_zn->wrap_a3;
		}
		HX_STACK_LINE(2196)
		::nape::geom::Vec2 a3 = ((  (((me->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b3->outer) ))->localPointToWorld(_g2,null());		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(2197)
		::nape::geom::Vec2 _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2197)
		{
			HX_STACK_LINE(2197)
			if (((me->zpp_inner_zn->wrap_a4 == null()))){
				HX_STACK_LINE(2197)
				me->zpp_inner_zn->setup_a4();
			}
			HX_STACK_LINE(2197)
			_g3 = me->zpp_inner_zn->wrap_a4;
		}
		HX_STACK_LINE(2197)
		::nape::geom::Vec2 a4 = ((  (((me->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b4->outer) ))->localPointToWorld(_g3,null());		HX_STACK_VAR(a4,"a4");
		HX_STACK_LINE(2198)
		::nape::geom::Vec2 n12 = a2->sub(a1,null());		HX_STACK_VAR(n12,"n12");
		HX_STACK_LINE(2199)
		::nape::geom::Vec2 n34 = a4->sub(a3,null());		HX_STACK_VAR(n34,"n34");
		HX_STACK_LINE(2200)
		Float nl12;		HX_STACK_VAR(nl12,"nl12");
		HX_STACK_LINE(2200)
		{
			HX_STACK_LINE(2200)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2200)
			{
				HX_STACK_LINE(2200)
				{
					HX_STACK_LINE(2200)
					::zpp_nape::geom::ZPP_Vec2 _this = n12->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2200)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2200)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2200)
				_g4 = n12->zpp_inner->x;
			}
			HX_STACK_LINE(2200)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2200)
			{
				HX_STACK_LINE(2200)
				{
					HX_STACK_LINE(2200)
					::zpp_nape::geom::ZPP_Vec2 _this = n12->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2200)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2200)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2200)
				_g5 = n12->zpp_inner->x;
			}
			HX_STACK_LINE(2200)
			Float _g6 = (_g4 * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2200)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(2200)
			{
				HX_STACK_LINE(2200)
				{
					HX_STACK_LINE(2200)
					::zpp_nape::geom::ZPP_Vec2 _this = n12->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2200)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2200)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2200)
				_g7 = n12->zpp_inner->y;
			}
			HX_STACK_LINE(2200)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(2200)
			{
				HX_STACK_LINE(2200)
				{
					HX_STACK_LINE(2200)
					::zpp_nape::geom::ZPP_Vec2 _this = n12->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2200)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2200)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2200)
				_g8 = n12->zpp_inner->y;
			}
			HX_STACK_LINE(2200)
			Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(2200)
			Float _g10 = (_g6 + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(2200)
			nl12 = ::Math_obj::sqrt(_g10);
		}
		HX_STACK_LINE(2201)
		Float nl34;		HX_STACK_VAR(nl34,"nl34");
		HX_STACK_LINE(2201)
		{
			HX_STACK_LINE(2201)
			Float _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(2201)
			{
				HX_STACK_LINE(2201)
				{
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_Vec2 _this = n34->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2201)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2201)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2201)
				_g11 = n34->zpp_inner->x;
			}
			HX_STACK_LINE(2201)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(2201)
			{
				HX_STACK_LINE(2201)
				{
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_Vec2 _this = n34->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2201)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2201)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2201)
				_g12 = n34->zpp_inner->x;
			}
			HX_STACK_LINE(2201)
			Float _g13 = (_g11 * _g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(2201)
			Float _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(2201)
			{
				HX_STACK_LINE(2201)
				{
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_Vec2 _this = n34->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2201)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2201)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2201)
				_g14 = n34->zpp_inner->y;
			}
			HX_STACK_LINE(2201)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(2201)
			{
				HX_STACK_LINE(2201)
				{
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_Vec2 _this = n34->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2201)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(2201)
						_this->_validate();
					}
				}
				HX_STACK_LINE(2201)
				_g15 = n34->zpp_inner->y;
			}
			HX_STACK_LINE(2201)
			Float _g16 = (_g14 * _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(2201)
			Float _g17 = (_g13 + _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(2201)
			nl34 = ::Math_obj::sqrt(_g17);
		}
		HX_STACK_LINE(2202)
		this->drawLink(g,a1,a2,n12,nl12,(nl34 * this->ratio),1.0,(int)16776960,(int)65535);
		HX_STACK_LINE(2203)
		this->drawLink(g,a3,a4,n34,nl34,nl12,(Float((int)1) / Float(this->ratio)),(int)65535,(int)16711935);
		HX_STACK_LINE(2204)
		g->drawFilledCircle(a1,(int)2,(int)255);
		HX_STACK_LINE(2205)
		g->drawFilledCircle(a2,(int)2,(int)16711680);
		HX_STACK_LINE(2206)
		g->drawFilledCircle(a3,(int)2,(int)65280);
		HX_STACK_LINE(2207)
		g->drawFilledCircle(a4,(int)2,(int)16711935);
		HX_STACK_LINE(2208)
		{
			HX_STACK_LINE(2208)
			::zpp_nape::geom::ZPP_Vec2 inner = a1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2208)
			a1->zpp_inner->outer = null();
			HX_STACK_LINE(2208)
			a1->zpp_inner = null();
			HX_STACK_LINE(2208)
			{
				HX_STACK_LINE(2208)
				::nape::geom::Vec2 o = a1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2208)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2208)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2208)
			{
				HX_STACK_LINE(2208)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2208)
				{
					HX_STACK_LINE(2208)
					if (((o->outer != null()))){
						HX_STACK_LINE(2208)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2208)
						o->outer = null();
					}
					HX_STACK_LINE(2208)
					o->_isimmutable = null();
					HX_STACK_LINE(2208)
					o->_validate = null();
					HX_STACK_LINE(2208)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2208)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2208)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2209)
		{
			HX_STACK_LINE(2209)
			::zpp_nape::geom::ZPP_Vec2 inner = a2->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2209)
			a2->zpp_inner->outer = null();
			HX_STACK_LINE(2209)
			a2->zpp_inner = null();
			HX_STACK_LINE(2209)
			{
				HX_STACK_LINE(2209)
				::nape::geom::Vec2 o = a2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2209)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2209)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2209)
			{
				HX_STACK_LINE(2209)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2209)
				{
					HX_STACK_LINE(2209)
					if (((o->outer != null()))){
						HX_STACK_LINE(2209)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2209)
						o->outer = null();
					}
					HX_STACK_LINE(2209)
					o->_isimmutable = null();
					HX_STACK_LINE(2209)
					o->_validate = null();
					HX_STACK_LINE(2209)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2209)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2209)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2210)
		{
			HX_STACK_LINE(2210)
			::zpp_nape::geom::ZPP_Vec2 inner = a3->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2210)
			a3->zpp_inner->outer = null();
			HX_STACK_LINE(2210)
			a3->zpp_inner = null();
			HX_STACK_LINE(2210)
			{
				HX_STACK_LINE(2210)
				::nape::geom::Vec2 o = a3;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2210)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2210)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2210)
			{
				HX_STACK_LINE(2210)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2210)
				{
					HX_STACK_LINE(2210)
					if (((o->outer != null()))){
						HX_STACK_LINE(2210)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2210)
						o->outer = null();
					}
					HX_STACK_LINE(2210)
					o->_isimmutable = null();
					HX_STACK_LINE(2210)
					o->_validate = null();
					HX_STACK_LINE(2210)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2210)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2210)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2211)
		{
			HX_STACK_LINE(2211)
			::zpp_nape::geom::ZPP_Vec2 inner = a4->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2211)
			a4->zpp_inner->outer = null();
			HX_STACK_LINE(2211)
			a4->zpp_inner = null();
			HX_STACK_LINE(2211)
			{
				HX_STACK_LINE(2211)
				::nape::geom::Vec2 o = a4;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2211)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2211)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2211)
			{
				HX_STACK_LINE(2211)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2211)
				{
					HX_STACK_LINE(2211)
					if (((o->outer != null()))){
						HX_STACK_LINE(2211)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2211)
						o->outer = null();
					}
					HX_STACK_LINE(2211)
					o->_isimmutable = null();
					HX_STACK_LINE(2211)
					o->_validate = null();
					HX_STACK_LINE(2211)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2211)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2211)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2212)
		{
			HX_STACK_LINE(2212)
			::zpp_nape::geom::ZPP_Vec2 inner = n12->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2212)
			n12->zpp_inner->outer = null();
			HX_STACK_LINE(2212)
			n12->zpp_inner = null();
			HX_STACK_LINE(2212)
			{
				HX_STACK_LINE(2212)
				::nape::geom::Vec2 o = n12;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2212)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2212)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2212)
			{
				HX_STACK_LINE(2212)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2212)
				{
					HX_STACK_LINE(2212)
					if (((o->outer != null()))){
						HX_STACK_LINE(2212)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2212)
						o->outer = null();
					}
					HX_STACK_LINE(2212)
					o->_isimmutable = null();
					HX_STACK_LINE(2212)
					o->_validate = null();
					HX_STACK_LINE(2212)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2212)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2212)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2213)
		{
			HX_STACK_LINE(2213)
			::zpp_nape::geom::ZPP_Vec2 inner = n34->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2213)
			n34->zpp_inner->outer = null();
			HX_STACK_LINE(2213)
			n34->zpp_inner = null();
			HX_STACK_LINE(2213)
			{
				HX_STACK_LINE(2213)
				::nape::geom::Vec2 o = n34;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2213)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2213)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2213)
			{
				HX_STACK_LINE(2213)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2213)
				{
					HX_STACK_LINE(2213)
					if (((o->outer != null()))){
						HX_STACK_LINE(2213)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2213)
						o->outer = null();
					}
					HX_STACK_LINE(2213)
					o->_isimmutable = null();
					HX_STACK_LINE(2213)
					o->_validate = null();
					HX_STACK_LINE(2213)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2213)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2213)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::drawLink( ::nape::util::Debug g,::nape::geom::Vec2 a1,::nape::geom::Vec2 a2,::nape::geom::Vec2 n,Float nl,Float bias,Float scale,int ca,int cb){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","drawLink",0x418402d0,"zpp_nape.constraint.ZPP_PulleyJoint.drawLink","zpp_nape/constraint/PulleyJoint.hx",2217,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(a1,"a1")
		HX_STACK_ARG(a2,"a2")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(nl,"nl")
		HX_STACK_ARG(bias,"bias")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(ca,"ca")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(2217)
		if (((nl != (int)0))){
			HX_STACK_LINE(2218)
			n->muleq((Float((int)1) / Float(nl)));
			HX_STACK_LINE(2219)
			::nape::geom::Vec2 mid = a1->add(a2,null())->muleq(0.5);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(2220)
			Float cmin = (((this->jointMin - bias)) * scale);		HX_STACK_VAR(cmin,"cmin");
			HX_STACK_LINE(2221)
			if (((cmin < (int)0))){
				HX_STACK_LINE(2221)
				cmin = (int)0;
			}
			HX_STACK_LINE(2222)
			Float cmax = (((this->jointMax - bias)) * scale);		HX_STACK_VAR(cmax,"cmax");
			HX_STACK_LINE(2223)
			if (((cmax < (int)0))){
				HX_STACK_LINE(2223)
				cmax = (int)0;
			}
			HX_STACK_LINE(2224)
			::nape::geom::Vec2 _g = n->mul((cmin * 0.5),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2224)
			::nape::geom::Vec2 min1 = mid->sub(_g,null());		HX_STACK_VAR(min1,"min1");
			HX_STACK_LINE(2225)
			::nape::geom::Vec2 _g1 = n->mul((cmin * 0.5),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2225)
			::nape::geom::Vec2 min2 = mid->add(_g1,null());		HX_STACK_VAR(min2,"min2");
			HX_STACK_LINE(2226)
			::nape::geom::Vec2 _g2 = n->mul((cmax * 0.5),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2226)
			::nape::geom::Vec2 max1 = mid->sub(_g2,null());		HX_STACK_VAR(max1,"max1");
			HX_STACK_LINE(2227)
			::nape::geom::Vec2 _g3 = n->mul((cmax * 0.5),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2227)
			::nape::geom::Vec2 max2 = mid->add(_g3,null());		HX_STACK_VAR(max2,"max2");
			HX_STACK_LINE(2228)
			g->drawLine(min1,min2,ca);
			HX_STACK_LINE(2229)
			g->drawLine(max1,min1,cb);
			HX_STACK_LINE(2230)
			g->drawLine(max2,min2,cb);
			HX_STACK_LINE(2231)
			if ((!(this->stiff))){
				HX_STACK_LINE(2232)
				if (((nl > cmax))){
					HX_STACK_LINE(2233)
					g->drawSpring(max1,a1,cb,null(),null());
					HX_STACK_LINE(2234)
					g->drawSpring(max2,a2,cb,null(),null());
				}
				else{
					HX_STACK_LINE(2236)
					if (((nl < cmin))){
						HX_STACK_LINE(2237)
						g->drawSpring(min1,a1,ca,null(),null());
						HX_STACK_LINE(2238)
						g->drawSpring(min2,a2,ca,null(),null());
					}
				}
			}
			HX_STACK_LINE(2241)
			{
				HX_STACK_LINE(2241)
				::zpp_nape::geom::ZPP_Vec2 inner = mid->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2241)
				mid->zpp_inner->outer = null();
				HX_STACK_LINE(2241)
				mid->zpp_inner = null();
				HX_STACK_LINE(2241)
				{
					HX_STACK_LINE(2241)
					::nape::geom::Vec2 o = mid;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2241)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2241)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2241)
				{
					HX_STACK_LINE(2241)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2241)
					{
						HX_STACK_LINE(2241)
						if (((o->outer != null()))){
							HX_STACK_LINE(2241)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2241)
							o->outer = null();
						}
						HX_STACK_LINE(2241)
						o->_isimmutable = null();
						HX_STACK_LINE(2241)
						o->_validate = null();
						HX_STACK_LINE(2241)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2241)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2241)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2242)
			{
				HX_STACK_LINE(2242)
				::zpp_nape::geom::ZPP_Vec2 inner = min1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2242)
				min1->zpp_inner->outer = null();
				HX_STACK_LINE(2242)
				min1->zpp_inner = null();
				HX_STACK_LINE(2242)
				{
					HX_STACK_LINE(2242)
					::nape::geom::Vec2 o = min1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2242)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2242)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2242)
				{
					HX_STACK_LINE(2242)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2242)
					{
						HX_STACK_LINE(2242)
						if (((o->outer != null()))){
							HX_STACK_LINE(2242)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2242)
							o->outer = null();
						}
						HX_STACK_LINE(2242)
						o->_isimmutable = null();
						HX_STACK_LINE(2242)
						o->_validate = null();
						HX_STACK_LINE(2242)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2242)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2242)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2243)
			{
				HX_STACK_LINE(2243)
				::zpp_nape::geom::ZPP_Vec2 inner = min2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2243)
				min2->zpp_inner->outer = null();
				HX_STACK_LINE(2243)
				min2->zpp_inner = null();
				HX_STACK_LINE(2243)
				{
					HX_STACK_LINE(2243)
					::nape::geom::Vec2 o = min2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2243)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2243)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2243)
				{
					HX_STACK_LINE(2243)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2243)
					{
						HX_STACK_LINE(2243)
						if (((o->outer != null()))){
							HX_STACK_LINE(2243)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2243)
							o->outer = null();
						}
						HX_STACK_LINE(2243)
						o->_isimmutable = null();
						HX_STACK_LINE(2243)
						o->_validate = null();
						HX_STACK_LINE(2243)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2243)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2243)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2244)
			{
				HX_STACK_LINE(2244)
				::zpp_nape::geom::ZPP_Vec2 inner = max1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2244)
				max1->zpp_inner->outer = null();
				HX_STACK_LINE(2244)
				max1->zpp_inner = null();
				HX_STACK_LINE(2244)
				{
					HX_STACK_LINE(2244)
					::nape::geom::Vec2 o = max1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2244)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2244)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2244)
				{
					HX_STACK_LINE(2244)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2244)
					{
						HX_STACK_LINE(2244)
						if (((o->outer != null()))){
							HX_STACK_LINE(2244)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2244)
							o->outer = null();
						}
						HX_STACK_LINE(2244)
						o->_isimmutable = null();
						HX_STACK_LINE(2244)
						o->_validate = null();
						HX_STACK_LINE(2244)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2244)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2244)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2245)
			{
				HX_STACK_LINE(2245)
				::zpp_nape::geom::ZPP_Vec2 inner = max2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2245)
				max2->zpp_inner->outer = null();
				HX_STACK_LINE(2245)
				max2->zpp_inner = null();
				HX_STACK_LINE(2245)
				{
					HX_STACK_LINE(2245)
					::nape::geom::Vec2 o = max2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2245)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2245)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2245)
				{
					HX_STACK_LINE(2245)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2245)
					{
						HX_STACK_LINE(2245)
						if (((o->outer != null()))){
							HX_STACK_LINE(2245)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2245)
							o->outer = null();
						}
						HX_STACK_LINE(2245)
						o->_isimmutable = null();
						HX_STACK_LINE(2245)
						o->_validate = null();
						HX_STACK_LINE(2245)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2245)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2245)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(ZPP_PulleyJoint_obj,drawLink,(void))


ZPP_PulleyJoint_obj::ZPP_PulleyJoint_obj()
{
}

void ZPP_PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PulleyJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(n12x,"n12x");
	HX_MARK_MEMBER_NAME(n12y,"n12y");
	HX_MARK_MEMBER_NAME(n34x,"n34x");
	HX_MARK_MEMBER_NAME(n34y,"n34y");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(cx3,"cx3");
	HX_MARK_MEMBER_NAME(cx4,"cx4");
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
	HX_MARK_MEMBER_NAME(b3,"b3");
	HX_MARK_MEMBER_NAME(a3localx,"a3localx");
	HX_MARK_MEMBER_NAME(a3localy,"a3localy");
	HX_MARK_MEMBER_NAME(a3relx,"a3relx");
	HX_MARK_MEMBER_NAME(a3rely,"a3rely");
	HX_MARK_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_MARK_MEMBER_NAME(b4,"b4");
	HX_MARK_MEMBER_NAME(a4localx,"a4localx");
	HX_MARK_MEMBER_NAME(a4localy,"a4localy");
	HX_MARK_MEMBER_NAME(a4relx,"a4relx");
	HX_MARK_MEMBER_NAME(a4rely,"a4rely");
	HX_MARK_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(n12x,"n12x");
	HX_VISIT_MEMBER_NAME(n12y,"n12y");
	HX_VISIT_MEMBER_NAME(n34x,"n34x");
	HX_VISIT_MEMBER_NAME(n34y,"n34y");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(cx3,"cx3");
	HX_VISIT_MEMBER_NAME(cx4,"cx4");
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
	HX_VISIT_MEMBER_NAME(b3,"b3");
	HX_VISIT_MEMBER_NAME(a3localx,"a3localx");
	HX_VISIT_MEMBER_NAME(a3localy,"a3localy");
	HX_VISIT_MEMBER_NAME(a3relx,"a3relx");
	HX_VISIT_MEMBER_NAME(a3rely,"a3rely");
	HX_VISIT_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_VISIT_MEMBER_NAME(b4,"b4");
	HX_VISIT_MEMBER_NAME(a4localx,"a4localx");
	HX_VISIT_MEMBER_NAME(a4localy,"a4localy");
	HX_VISIT_MEMBER_NAME(a4relx,"a4relx");
	HX_VISIT_MEMBER_NAME(a4rely,"a4rely");
	HX_VISIT_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_PulleyJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b3") ) { return b3; }
		if (HX_FIELD_EQ(inName,"b4") ) { return b4; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		if (HX_FIELD_EQ(inName,"cx3") ) { return cx3; }
		if (HX_FIELD_EQ(inName,"cx4") ) { return cx4; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"n12x") ) { return n12x; }
		if (HX_FIELD_EQ(inName,"n12y") ) { return n12y; }
		if (HX_FIELD_EQ(inName,"n34x") ) { return n34x; }
		if (HX_FIELD_EQ(inName,"n34y") ) { return n34y; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
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
		if (HX_FIELD_EQ(inName,"a3relx") ) { return a3relx; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { return a3rely; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { return a4relx; }
		if (HX_FIELD_EQ(inName,"a4rely") ) { return a4rely; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { return wrap_a3; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { return wrap_a4; }
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
		if (HX_FIELD_EQ(inName,"a3localx") ) { return a3localx; }
		if (HX_FIELD_EQ(inName,"a3localy") ) { return a3localy; }
		if (HX_FIELD_EQ(inName,"setup_a3") ) { return setup_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"a4localx") ) { return a4localx; }
		if (HX_FIELD_EQ(inName,"a4localy") ) { return a4localy; }
		if (HX_FIELD_EQ(inName,"setup_a4") ) { return setup_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLink") ) { return drawLink_dyn(); }
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
		if (HX_FIELD_EQ(inName,"validate_a3") ) { return validate_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a4") ) { return validate_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a3") ) { return invalidate_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a4") ) { return invalidate_a4_dyn(); }
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

Dynamic ZPP_PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b3") ) { b3=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b4") ) { b4=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx3") ) { cx3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx4") ) { cx4=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"n12x") ) { n12x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n12y") ) { n12y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34x") ) { n34x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34y") ) { n34y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"a3relx") ) { a3relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { a3rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { a4relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4rely") ) { a4rely=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { wrap_a3=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { wrap_a4=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::PulleyJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localx") ) { a3localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localy") ) { a3localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4localx") ) { a4localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4localy") ) { a4localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zn"));
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("slack"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("n12x"));
	outFields->push(HX_CSTRING("n12y"));
	outFields->push(HX_CSTRING("n34x"));
	outFields->push(HX_CSTRING("n34y"));
	outFields->push(HX_CSTRING("cx1"));
	outFields->push(HX_CSTRING("cx2"));
	outFields->push(HX_CSTRING("cx3"));
	outFields->push(HX_CSTRING("cx4"));
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
	outFields->push(HX_CSTRING("b3"));
	outFields->push(HX_CSTRING("a3localx"));
	outFields->push(HX_CSTRING("a3localy"));
	outFields->push(HX_CSTRING("a3relx"));
	outFields->push(HX_CSTRING("a3rely"));
	outFields->push(HX_CSTRING("wrap_a3"));
	outFields->push(HX_CSTRING("b4"));
	outFields->push(HX_CSTRING("a4localx"));
	outFields->push(HX_CSTRING("a4localy"));
	outFields->push(HX_CSTRING("a4relx"));
	outFields->push(HX_CSTRING("a4rely"));
	outFields->push(HX_CSTRING("wrap_a4"));
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
	{hx::fsObject /*::nape::constraint::PulleyJoint*/ ,(int)offsetof(ZPP_PulleyJoint_obj,outer_zn),HX_CSTRING("outer_zn")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,ratio),HX_CSTRING("ratio")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jointMin),HX_CSTRING("jointMin")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jointMax),HX_CSTRING("jointMax")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,slack),HX_CSTRING("slack")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,equal),HX_CSTRING("equal")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n12x),HX_CSTRING("n12x")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n12y),HX_CSTRING("n12y")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n34x),HX_CSTRING("n34x")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n34y),HX_CSTRING("n34y")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx1),HX_CSTRING("cx1")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx2),HX_CSTRING("cx2")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx3),HX_CSTRING("cx3")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx4),HX_CSTRING("cx4")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b1),HX_CSTRING("b1")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1localx),HX_CSTRING("a1localx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1localy),HX_CSTRING("a1localy")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1relx),HX_CSTRING("a1relx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1rely),HX_CSTRING("a1rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a1),HX_CSTRING("wrap_a1")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b2),HX_CSTRING("b2")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2localx),HX_CSTRING("a2localx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2localy),HX_CSTRING("a2localy")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2relx),HX_CSTRING("a2relx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2rely),HX_CSTRING("a2rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a2),HX_CSTRING("wrap_a2")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b3),HX_CSTRING("b3")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3localx),HX_CSTRING("a3localx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3localy),HX_CSTRING("a3localy")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3relx),HX_CSTRING("a3relx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3rely),HX_CSTRING("a3rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a3),HX_CSTRING("wrap_a3")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b4),HX_CSTRING("b4")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4localx),HX_CSTRING("a4localx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4localy),HX_CSTRING("a4localy")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4relx),HX_CSTRING("a4relx")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4rely),HX_CSTRING("a4rely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a4),HX_CSTRING("wrap_a4")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,kMass),HX_CSTRING("kMass")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jAcc),HX_CSTRING("jAcc")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jMax),HX_CSTRING("jMax")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,gamma),HX_CSTRING("gamma")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,bias),HX_CSTRING("bias")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,stepped),HX_CSTRING("stepped")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zn"),
	HX_CSTRING("ratio"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("slack"),
	HX_CSTRING("equal"),
	HX_CSTRING("is_slack"),
	HX_CSTRING("n12x"),
	HX_CSTRING("n12y"),
	HX_CSTRING("n34x"),
	HX_CSTRING("n34y"),
	HX_CSTRING("cx1"),
	HX_CSTRING("cx2"),
	HX_CSTRING("cx3"),
	HX_CSTRING("cx4"),
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
	HX_CSTRING("b3"),
	HX_CSTRING("a3localx"),
	HX_CSTRING("a3localy"),
	HX_CSTRING("a3relx"),
	HX_CSTRING("a3rely"),
	HX_CSTRING("validate_a3"),
	HX_CSTRING("invalidate_a3"),
	HX_CSTRING("setup_a3"),
	HX_CSTRING("wrap_a3"),
	HX_CSTRING("b4"),
	HX_CSTRING("a4localx"),
	HX_CSTRING("a4localy"),
	HX_CSTRING("a4relx"),
	HX_CSTRING("a4rely"),
	HX_CSTRING("validate_a4"),
	HX_CSTRING("invalidate_a4"),
	HX_CSTRING("setup_a4"),
	HX_CSTRING("wrap_a4"),
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
	HX_CSTRING("drawLink"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

#endif

Class ZPP_PulleyJoint_obj::__mClass;

void ZPP_PulleyJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_PulleyJoint"), hx::TCanCast< ZPP_PulleyJoint_obj> ,sStaticFields,sMemberFields,
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

void ZPP_PulleyJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
