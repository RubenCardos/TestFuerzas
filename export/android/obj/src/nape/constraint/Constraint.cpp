#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
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
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace nape{
namespace constraint{

Void Constraint_obj::__construct()
{
HX_STACK_FRAME("nape.constraint.Constraint","new",0x2f5111da,"nape.constraint.Constraint.new","nape/constraint/Constraint.hx",177,0xfc21f536)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(208)
	this->debugDraw = true;
	HX_STACK_LINE(642)
	this->zpp_inner->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT->zpp_inner);
}
;
	return null();
}

//Constraint_obj::~Constraint_obj() { }

Dynamic Constraint_obj::__CreateEmpty() { return  new Constraint_obj; }
hx::ObjectPtr< Constraint_obj > Constraint_obj::__new()
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

Dynamic Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

Dynamic Constraint_obj::get_userData( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_userData",0xcf920964,"nape.constraint.Constraint.get_userData","nape/constraint/Constraint.hx",195,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/Constraint.hx",197,0xfc21f536)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_userData,return )

::nape::phys::Compound Constraint_obj::get_compound( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_compound",0x4c3936ba,"nape.constraint.Constraint.get_compound","nape/constraint/Constraint.hx",220,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(220)
		return null();
	}
	else{
		HX_STACK_LINE(220)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(220)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_compound,return )

::nape::phys::Compound Constraint_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.constraint.Constraint","set_compound",0x61325a2e,"nape.constraint.Constraint.set_compound","nape/constraint/Constraint.hx",222,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(224)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(225)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(226)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(228)
		if (((compound != null()))){
			HX_STACK_LINE(229)
			::nape::constraint::ConstraintList _this = compound->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(229)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(229)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(233)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(233)
		return null();
	}
	else{
		HX_STACK_LINE(233)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_compound,return )

::nape::space::Space Constraint_obj::get_space( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_space",0x942e8217,"nape.constraint.Constraint.get_space","nape/constraint/Constraint.hx",249,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(249)
		return null();
	}
	else{
		HX_STACK_LINE(249)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(249)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_space,return )

::nape::space::Space Constraint_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.constraint.Constraint","set_space",0x777f6e23,"nape.constraint.Constraint.set_space","nape/constraint/Constraint.hx",251,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(258)
	if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
		HX_STACK_LINE(259)
		if (((this->zpp_inner->component != null()))){
			HX_STACK_LINE(259)
			this->zpp_inner->component->woken = false;
		}
		HX_STACK_LINE(260)
		this->zpp_inner->clearcache();
		HX_STACK_LINE(261)
		if (((this->zpp_inner->space != null()))){
			HX_STACK_LINE(262)
			this->zpp_inner->space->outer->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(264)
		if (((space != null()))){
			HX_STACK_LINE(265)
			::nape::constraint::ConstraintList _this = space->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(265)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(265)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(265)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else{
			HX_STACK_LINE(268)
			this->zpp_inner->space = null();
		}
	}
	HX_STACK_LINE(272)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(272)
		return null();
	}
	else{
		HX_STACK_LINE(272)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_space,return )

bool Constraint_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_isSleeping",0xd96a8f44,"nape.constraint.Constraint.get_isSleeping","nape/constraint/Constraint.hx",296,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_isSleeping,return )

bool Constraint_obj::get_active( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_active",0x7274f355,"nape.constraint.Constraint.get_active","nape/constraint/Constraint.hx",310,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_active,return )

bool Constraint_obj::set_active( bool active){
	HX_STACK_FRAME("nape.constraint.Constraint","set_active",0x75f291c9,"nape.constraint.Constraint.set_active","nape/constraint/Constraint.hx",312,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(active,"active")
	HX_STACK_LINE(314)
	if (((this->zpp_inner->active != active))){
		HX_STACK_LINE(315)
		if (((this->zpp_inner->component != null()))){
			HX_STACK_LINE(315)
			this->zpp_inner->component->woken = false;
		}
		HX_STACK_LINE(316)
		this->zpp_inner->clearcache();
		HX_STACK_LINE(317)
		if ((active)){
			HX_STACK_LINE(318)
			this->zpp_inner->active = active;
			HX_STACK_LINE(319)
			this->zpp_inner->activate();
			HX_STACK_LINE(320)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(321)
				if (((this->zpp_inner->component != null()))){
					HX_STACK_LINE(321)
					this->zpp_inner->component->sleeping = true;
				}
				HX_STACK_LINE(322)
				this->zpp_inner->space->wake_constraint(this->zpp_inner,true);
			}
		}
		else{
			HX_STACK_LINE(326)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(327)
				this->zpp_inner->wake();
				HX_STACK_LINE(328)
				this->zpp_inner->space->live_constraints->remove(this->zpp_inner);
			}
			HX_STACK_LINE(330)
			this->zpp_inner->active = active;
			HX_STACK_LINE(331)
			this->zpp_inner->deactivate();
		}
	}
	HX_STACK_LINE(335)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_active,return )

bool Constraint_obj::get_ignore( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_ignore",0xeef76aa1,"nape.constraint.Constraint.get_ignore","nape/constraint/Constraint.hx",348,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_ignore,return )

bool Constraint_obj::set_ignore( bool ignore){
	HX_STACK_FRAME("nape.constraint.Constraint","set_ignore",0xf2750915,"nape.constraint.Constraint.set_ignore","nape/constraint/Constraint.hx",350,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignore,"ignore")
	HX_STACK_LINE(352)
	if (((this->zpp_inner->ignore != ignore))){
		HX_STACK_LINE(353)
		this->zpp_inner->ignore = ignore;
		HX_STACK_LINE(354)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(357)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_ignore,return )

bool Constraint_obj::get_stiff( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_stiff",0x96d97139,"nape.constraint.Constraint.get_stiff","nape/constraint/Constraint.hx",377,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_stiff,return )

bool Constraint_obj::set_stiff( bool stiff){
	HX_STACK_FRAME("nape.constraint.Constraint","set_stiff",0x7a2a5d45,"nape.constraint.Constraint.set_stiff","nape/constraint/Constraint.hx",379,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stiff,"stiff")
	HX_STACK_LINE(381)
	if (((this->zpp_inner->stiff != stiff))){
		HX_STACK_LINE(382)
		this->zpp_inner->stiff = stiff;
		HX_STACK_LINE(383)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(386)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_stiff,return )

Float Constraint_obj::get_frequency( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_frequency",0x0dc5f46d,"nape.constraint.Constraint.get_frequency","nape/constraint/Constraint.hx",403,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_frequency,return )

Float Constraint_obj::set_frequency( Float frequency){
	HX_STACK_FRAME("nape.constraint.Constraint","set_frequency",0x52cbd679,"nape.constraint.Constraint.set_frequency","nape/constraint/Constraint.hx",405,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frequency,"frequency")
	HX_STACK_LINE(415)
	if (((this->zpp_inner->frequency != frequency))){
		HX_STACK_LINE(416)
		this->zpp_inner->frequency = frequency;
		HX_STACK_LINE(417)
		if ((!(this->zpp_inner->stiff))){
			HX_STACK_LINE(418)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(422)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_frequency,return )

Float Constraint_obj::get_damping( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_damping",0x60b23c53,"nape.constraint.Constraint.get_damping","nape/constraint/Constraint.hx",440,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_damping,return )

Float Constraint_obj::set_damping( Float damping){
	HX_STACK_FRAME("nape.constraint.Constraint","set_damping",0x6b1f435f,"nape.constraint.Constraint.set_damping","nape/constraint/Constraint.hx",442,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(damping,"damping")
	HX_STACK_LINE(452)
	if (((this->zpp_inner->damping != damping))){
		HX_STACK_LINE(453)
		this->zpp_inner->damping = damping;
		HX_STACK_LINE(454)
		if ((!(this->zpp_inner->stiff))){
			HX_STACK_LINE(455)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(459)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_damping,return )

Float Constraint_obj::get_maxForce( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_maxForce",0x791b77f6,"nape.constraint.Constraint.get_maxForce","nape/constraint/Constraint.hx",476,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxForce,return )

Float Constraint_obj::set_maxForce( Float maxForce){
	HX_STACK_FRAME("nape.constraint.Constraint","set_maxForce",0x8e149b6a,"nape.constraint.Constraint.set_maxForce","nape/constraint/Constraint.hx",478,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxForce,"maxForce")
	HX_STACK_LINE(488)
	if (((this->zpp_inner->maxForce != maxForce))){
		HX_STACK_LINE(489)
		this->zpp_inner->maxForce = maxForce;
		HX_STACK_LINE(490)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(493)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxForce,return )

Float Constraint_obj::get_maxError( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_maxError",0xe7b091d3,"nape.constraint.Constraint.get_maxError","nape/constraint/Constraint.hx",510,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxError,return )

Float Constraint_obj::set_maxError( Float maxError){
	HX_STACK_FRAME("nape.constraint.Constraint","set_maxError",0xfca9b547,"nape.constraint.Constraint.set_maxError","nape/constraint/Constraint.hx",512,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxError,"maxError")
	HX_STACK_LINE(522)
	if (((this->zpp_inner->maxError != maxError))){
		HX_STACK_LINE(523)
		this->zpp_inner->maxError = maxError;
		HX_STACK_LINE(524)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(527)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxError,return )

bool Constraint_obj::get_breakUnderForce( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_breakUnderForce",0x0211ebe3,"nape.constraint.Constraint.get_breakUnderForce","nape/constraint/Constraint.hx",541,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderForce,return )

bool Constraint_obj::set_breakUnderForce( bool breakUnderForce){
	HX_STACK_FRAME("nape.constraint.Constraint","set_breakUnderForce",0x3eaedeef,"nape.constraint.Constraint.set_breakUnderForce","nape/constraint/Constraint.hx",543,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderForce,"breakUnderForce")
	HX_STACK_LINE(545)
	if (((this->zpp_inner->breakUnderForce != breakUnderForce))){
		HX_STACK_LINE(546)
		this->zpp_inner->breakUnderForce = breakUnderForce;
		HX_STACK_LINE(547)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(550)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderForce,return )

bool Constraint_obj::get_breakUnderError( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_breakUnderError",0x70a705c0,"nape.constraint.Constraint.get_breakUnderError","nape/constraint/Constraint.hx",562,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderError,return )

bool Constraint_obj::set_breakUnderError( bool breakUnderError){
	HX_STACK_FRAME("nape.constraint.Constraint","set_breakUnderError",0xad43f8cc,"nape.constraint.Constraint.set_breakUnderError","nape/constraint/Constraint.hx",564,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderError,"breakUnderError")
	HX_STACK_LINE(566)
	if (((this->zpp_inner->breakUnderError != breakUnderError))){
		HX_STACK_LINE(567)
		this->zpp_inner->breakUnderError = breakUnderError;
		HX_STACK_LINE(568)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(571)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderError,return )

bool Constraint_obj::get_removeOnBreak( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_removeOnBreak",0xa18b4d8d,"nape.constraint.Constraint.get_removeOnBreak","nape/constraint/Constraint.hx",584,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_removeOnBreak,return )

bool Constraint_obj::set_removeOnBreak( bool removeOnBreak){
	HX_STACK_FRAME("nape.constraint.Constraint","set_removeOnBreak",0xc4f92599,"nape.constraint.Constraint.set_removeOnBreak","nape/constraint/Constraint.hx",586,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(removeOnBreak,"removeOnBreak")
	HX_STACK_LINE(588)
	this->zpp_inner->removeOnBreak = removeOnBreak;
	HX_STACK_LINE(590)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_removeOnBreak,return )

::nape::geom::MatMN Constraint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.Constraint","impulse",0xa9d1d72f,"nape.constraint.Constraint.impulse","nape/constraint/Constraint.hx",598,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,impulse,return )

::nape::geom::Vec3 Constraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.Constraint","bodyImpulse",0x2654c1ad,"nape.constraint.Constraint.bodyImpulse","nape/constraint/Constraint.hx",611,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(611)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,bodyImpulse,return )

Void Constraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.Constraint","visitBodies",0xab113f25,"nape.constraint.Constraint.visitBodies","nape/constraint/Constraint.hx",622,0xfc21f536)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,visitBodies,(void))

::nape::callbacks::CbTypeList Constraint_obj::get_cbTypes( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_cbTypes",0x3e6bd4eb,"nape.constraint.Constraint.get_cbTypes","nape/constraint/Constraint.hx",632,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	if (((this->zpp_inner->wrap_cbTypes == null()))){
		HX_STACK_LINE(634)
		this->zpp_inner->setupcbTypes();
	}
	HX_STACK_LINE(636)
	return this->zpp_inner->wrap_cbTypes;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_cbTypes,return )

::String Constraint_obj::toString( ){
	HX_STACK_FRAME("nape.constraint.Constraint","toString",0x8e4ff4f2,"nape.constraint.Constraint.toString","nape/constraint/Constraint.hx",651,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	return HX_CSTRING("{Constraint}");
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,toString,return )

::nape::constraint::Constraint Constraint_obj::copy( ){
	HX_STACK_FRAME("nape.constraint.Constraint","copy",0x3060c4fb,"nape.constraint.Constraint.copy","nape/constraint/Constraint.hx",662,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(662)
	return this->zpp_inner->copy(null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,copy,return )


Constraint_obj::Constraint_obj()
{
}

void Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Constraint);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_END_CLASS();
}

void Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
}

Dynamic Constraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		if (HX_FIELD_EQ(inName,"stiff") ) { return get_stiff(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return get_active(); }
		if (HX_FIELD_EQ(inName,"ignore") ) { return get_ignore(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { return get_damping(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return get_cbTypes(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return get_compound(); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return get_maxForce(); }
		if (HX_FIELD_EQ(inName,"maxError") ) { return get_maxError(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stiff") ) { return get_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stiff") ) { return set_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"frequency") ) { return get_frequency(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_damping") ) { return get_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_damping") ) { return set_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxForce") ) { return get_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxForce") ) { return set_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxError") ) { return get_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxError") ) { return set_maxError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_frequency") ) { return get_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frequency") ) { return set_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return get_removeOnBreak(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return get_breakUnderForce(); }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return get_breakUnderError(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_removeOnBreak") ) { return get_removeOnBreak_dyn(); }
		if (HX_FIELD_EQ(inName,"set_removeOnBreak") ) { return set_removeOnBreak_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_breakUnderForce") ) { return get_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderForce") ) { return set_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderError") ) { return get_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderError") ) { return set_breakUnderError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		if (HX_FIELD_EQ(inName,"stiff") ) { return set_stiff(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return set_active(inValue); }
		if (HX_FIELD_EQ(inName,"ignore") ) { return set_ignore(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { return set_damping(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return set_compound(inValue); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return set_maxForce(inValue); }
		if (HX_FIELD_EQ(inName,"maxError") ) { return set_maxError(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { return set_frequency(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return set_removeOnBreak(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return set_breakUnderForce(inValue); }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return set_breakUnderError(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("stiff"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("damping"));
	outFields->push(HX_CSTRING("maxForce"));
	outFields->push(HX_CSTRING("maxError"));
	outFields->push(HX_CSTRING("breakUnderForce"));
	outFields->push(HX_CSTRING("breakUnderError"));
	outFields->push(HX_CSTRING("removeOnBreak"));
	outFields->push(HX_CSTRING("cbTypes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(Constraint_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsBool,(int)offsetof(Constraint_obj,debugDraw),HX_CSTRING("debugDraw")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("get_active"),
	HX_CSTRING("set_active"),
	HX_CSTRING("get_ignore"),
	HX_CSTRING("set_ignore"),
	HX_CSTRING("get_stiff"),
	HX_CSTRING("set_stiff"),
	HX_CSTRING("get_frequency"),
	HX_CSTRING("set_frequency"),
	HX_CSTRING("get_damping"),
	HX_CSTRING("set_damping"),
	HX_CSTRING("get_maxForce"),
	HX_CSTRING("set_maxForce"),
	HX_CSTRING("get_maxError"),
	HX_CSTRING("set_maxError"),
	HX_CSTRING("get_breakUnderForce"),
	HX_CSTRING("set_breakUnderForce"),
	HX_CSTRING("get_breakUnderError"),
	HX_CSTRING("set_breakUnderError"),
	HX_CSTRING("get_removeOnBreak"),
	HX_CSTRING("set_removeOnBreak"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("get_cbTypes"),
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

#endif

Class Constraint_obj::__mClass;

void Constraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.Constraint"), hx::TCanCast< Constraint_obj> ,sStaticFields,sMemberFields,
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

void Constraint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
