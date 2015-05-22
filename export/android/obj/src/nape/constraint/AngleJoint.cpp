#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_AngleJoint
#include <nape/constraint/AngleJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
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
namespace nape{
namespace constraint{

Void AngleJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{
HX_STACK_FRAME("nape.constraint.AngleJoint","new",0xf891cef4,"nape.constraint.AngleJoint.new","nape/constraint/AngleJoint.hx",182,0x60e8d95c)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
HX_STACK_ARG(__o_ratio,"ratio")
Float ratio = __o_ratio.Default(1.0);
{
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(374)
	::zpp_nape::constraint::ZPP_AngleJoint _g = ::zpp_nape::constraint::ZPP_AngleJoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(374)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(375)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(376)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(377)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(385)
	super::__construct();
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(387)
			if (((body1 == null()))){
				HX_STACK_LINE(387)
				inbody1 = null();
			}
			else{
				HX_STACK_LINE(387)
				inbody1 = body1->zpp_inner;
			}
			HX_STACK_LINE(387)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(387)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(387)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(387)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(387)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(387)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(387)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(387)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(387)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(387)
					if (((inbody1 != null()))){
						HX_STACK_LINE(387)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(387)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(387)
					this->zpp_inner->wake();
					HX_STACK_LINE(387)
					if (((inbody1 != null()))){
						HX_STACK_LINE(387)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(387)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(387)
			Dynamic();
		}
		else{
			HX_STACK_LINE(387)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
			HX_STACK_LINE(388)
			::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(388)
			if (((body2 == null()))){
				HX_STACK_LINE(388)
				inbody2 = null();
			}
			else{
				HX_STACK_LINE(388)
				inbody2 = body2->zpp_inner;
			}
			HX_STACK_LINE(388)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(388)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(388)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(388)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(388)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(388)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(388)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(388)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(388)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(388)
					if (((inbody2 != null()))){
						HX_STACK_LINE(388)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(388)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(388)
					this->zpp_inner->wake();
					HX_STACK_LINE(388)
					if (((inbody2 != null()))){
						HX_STACK_LINE(388)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(388)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(388)
			Dynamic();
		}
		else{
			HX_STACK_LINE(388)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::jointMin"));
			HX_STACK_LINE(389)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(389)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(389)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(389)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::jointMax"));
			HX_STACK_LINE(390)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(390)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(390)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(390)
		this->zpp_inner_zn->jointMax;
	}
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::ratio"));
			HX_STACK_LINE(391)
			if (((this->zpp_inner_zn->ratio != ratio))){
				HX_STACK_LINE(391)
				this->zpp_inner_zn->ratio = ratio;
				HX_STACK_LINE(391)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(391)
		this->zpp_inner_zn->ratio;
	}
}
;
	return null();
}

//AngleJoint_obj::~AngleJoint_obj() { }

Dynamic AngleJoint_obj::__CreateEmpty() { return  new AngleJoint_obj; }
hx::ObjectPtr< AngleJoint_obj > AngleJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< AngleJoint_obj > result = new AngleJoint_obj();
	result->__construct(body1,body2,jointMin,jointMax,__o_ratio);
	return result;}

Dynamic AngleJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AngleJoint_obj > result = new AngleJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::nape::phys::Body AngleJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_body1",0x94d2553a,"nape.constraint.AngleJoint.get_body1","nape/constraint/AngleJoint.hx",196,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(196)
		return null();
	}
	else{
		HX_STACK_LINE(196)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_body1,return )

::nape::phys::Body AngleJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_body1",0x78234146,"nape.constraint.AngleJoint.set_body1","nape/constraint/AngleJoint.hx",198,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(200)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body1"));
		HX_STACK_LINE(201)
		::zpp_nape::phys::ZPP_Body inbody1;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(201)
		if (((body1 == null()))){
			HX_STACK_LINE(201)
			inbody1 = null();
		}
		else{
			HX_STACK_LINE(201)
			inbody1 = body1->zpp_inner;
		}
		HX_STACK_LINE(202)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(203)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(204)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(206)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(206)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(209)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(209)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(211)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(212)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(214)
				if (((inbody1 != null()))){
					HX_STACK_LINE(214)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(217)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(218)
				this->zpp_inner->wake();
				HX_STACK_LINE(219)
				if (((inbody1 != null()))){
					HX_STACK_LINE(219)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(223)
	if (((this->zpp_inner_zn->b1 == null()))){
		HX_STACK_LINE(223)
		return null();
	}
	else{
		HX_STACK_LINE(223)
		return this->zpp_inner_zn->b1->outer;
	}
	HX_STACK_LINE(223)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_body1,return )

::nape::phys::Body AngleJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_body2",0x94d2553b,"nape.constraint.AngleJoint.get_body2","nape/constraint/AngleJoint.hx",234,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(234)
		return null();
	}
	else{
		HX_STACK_LINE(234)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_body2,return )

::nape::phys::Body AngleJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_body2",0x78234147,"nape.constraint.AngleJoint.set_body2","nape/constraint/AngleJoint.hx",236,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(238)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Constraint::body2"));
		HX_STACK_LINE(239)
		::zpp_nape::phys::ZPP_Body inbody2;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(239)
		if (((body2 == null()))){
			HX_STACK_LINE(239)
			inbody2 = null();
		}
		else{
			HX_STACK_LINE(239)
			inbody2 = body2->zpp_inner;
		}
		HX_STACK_LINE(240)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(241)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(242)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(244)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(244)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(247)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(247)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(249)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(250)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(252)
				if (((inbody2 != null()))){
					HX_STACK_LINE(252)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(255)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(256)
				this->zpp_inner->wake();
				HX_STACK_LINE(257)
				if (((inbody2 != null()))){
					HX_STACK_LINE(257)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(261)
	if (((this->zpp_inner_zn->b2 == null()))){
		HX_STACK_LINE(261)
		return null();
	}
	else{
		HX_STACK_LINE(261)
		return this->zpp_inner_zn->b2->outer;
	}
	HX_STACK_LINE(261)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_body2,return )

Float AngleJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_jointMin",0xb05f3d5d,"nape.constraint.AngleJoint.get_jointMin","nape/constraint/AngleJoint.hx",273,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_jointMin,return )

Float AngleJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_jointMin",0xc55860d1,"nape.constraint.AngleJoint.set_jointMin","nape/constraint/AngleJoint.hx",275,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(277)
		this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::jointMin"));
		HX_STACK_LINE(283)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(284)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(285)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(288)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_jointMin,return )

Float AngleJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_jointMax",0xb05f366f,"nape.constraint.AngleJoint.get_jointMax","nape/constraint/AngleJoint.hx",300,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_jointMax,return )

Float AngleJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_jointMax",0xc55859e3,"nape.constraint.AngleJoint.set_jointMax","nape/constraint/AngleJoint.hx",302,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(304)
		this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::jointMax"));
		HX_STACK_LINE(310)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(311)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(312)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(315)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_jointMax,return )

Float AngleJoint_obj::get_ratio( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_ratio",0xc206b6f6,"nape.constraint.AngleJoint.get_ratio","nape/constraint/AngleJoint.hx",325,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_ratio,return )

Float AngleJoint_obj::set_ratio( Float ratio){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_ratio",0xa557a302,"nape.constraint.AngleJoint.set_ratio","nape/constraint/AngleJoint.hx",327,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ratio,"ratio")
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(329)
		this->zpp_inner->immutable_midstep(HX_CSTRING("AngleJoint::ratio"));
		HX_STACK_LINE(335)
		if (((this->zpp_inner_zn->ratio != ratio))){
			HX_STACK_LINE(336)
			this->zpp_inner_zn->ratio = ratio;
			HX_STACK_LINE(337)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(340)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_ratio,return )

bool AngleJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","isSlack",0x74aa2e9a,"nape.constraint.AngleJoint.isSlack","nape/constraint/AngleJoint.hx",359,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(359)
	::zpp_nape::constraint::ZPP_AngleJoint _this = this->zpp_inner_zn;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(359)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		Float C = ((_this->ratio * _this->b2->rot) - _this->b1->rot);		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(359)
		if ((_this->equal)){
			HX_STACK_LINE(359)
			hx::SubEq(C,_this->jointMax);
			HX_STACK_LINE(359)
			slack = false;
			HX_STACK_LINE(359)
			_this->scale = 1.0;
		}
		else{
			HX_STACK_LINE(359)
			if (((C < _this->jointMin))){
				HX_STACK_LINE(359)
				C = (_this->jointMin - C);
				HX_STACK_LINE(359)
				_this->scale = -1.0;
				HX_STACK_LINE(359)
				slack = false;
			}
			else{
				HX_STACK_LINE(359)
				if (((C > _this->jointMax))){
					HX_STACK_LINE(359)
					hx::SubEq(C,_this->jointMax);
					HX_STACK_LINE(359)
					_this->scale = 1.0;
					HX_STACK_LINE(359)
					slack = false;
				}
				else{
					HX_STACK_LINE(359)
					_this->scale = 0.0;
					HX_STACK_LINE(359)
					C = (int)0;
					HX_STACK_LINE(359)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(359)
		C;
	}
	HX_STACK_LINE(359)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,isSlack,return )

::nape::geom::MatMN AngleJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","impulse",0xc7202949,"nape.constraint.AngleJoint.impulse","nape/constraint/AngleJoint.hx",398,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(400)
	ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc;
	HX_STACK_LINE(401)
	return ret;
}


::nape::geom::Vec3 AngleJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.AngleJoint","bodyImpulse",0xd69f28c7,"nape.constraint.AngleJoint.bodyImpulse","nape/constraint/AngleJoint.hx",417,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(417)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(418)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	else{
		HX_STACK_LINE(421)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(417)
	return null();
}


Void AngleJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.AngleJoint","visitBodies",0x5b5ba63f,"nape.constraint.AngleJoint.visitBodies","nape/constraint/AngleJoint.hx",427,0x60e8d95c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(433)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(434)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(436)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(437)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}



AngleJoint_obj::AngleJoint_obj()
{
}

void AngleJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AngleJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AngleJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return get_ratio(); }
		break;
	case 7:
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
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		break;
	case 11:
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

Dynamic AngleJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return set_ratio(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return set_jointMax(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_AngleJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AngleJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("ratio"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_AngleJoint*/ ,(int)offsetof(AngleJoint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("set_body2"),
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
	HX_MARK_MEMBER_NAME(AngleJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleJoint_obj::__mClass,"__mClass");
};

#endif

Class AngleJoint_obj::__mClass;

void AngleJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.AngleJoint"), hx::TCanCast< AngleJoint_obj> ,sStaticFields,sMemberFields,
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

void AngleJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
