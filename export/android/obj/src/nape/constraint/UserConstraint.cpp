#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
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
namespace nape{
namespace constraint{

Void UserConstraint_obj::__construct(int dimensions,hx::Null< bool >  __o_velocityOnly)
{
HX_STACK_FRAME("nape.constraint.UserConstraint","new",0x7be6e705,"nape.constraint.UserConstraint.new","nape/constraint/UserConstraint.hx",192,0x5f14de6b)
HX_STACK_THIS(this)
HX_STACK_ARG(dimensions,"dimensions")
HX_STACK_ARG(__o_velocityOnly,"velocityOnly")
bool velocityOnly = __o_velocityOnly.Default(false);
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(382)
	::zpp_nape::constraint::ZPP_UserConstraint _g = ::zpp_nape::constraint::ZPP_UserConstraint_obj::__new(dimensions,velocityOnly);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(382)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(383)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(384)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(385)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(393)
	super::__construct();
}
;
	return null();
}

//UserConstraint_obj::~UserConstraint_obj() { }

Dynamic UserConstraint_obj::__CreateEmpty() { return  new UserConstraint_obj; }
hx::ObjectPtr< UserConstraint_obj > UserConstraint_obj::__new(int dimensions,hx::Null< bool >  __o_velocityOnly)
{  hx::ObjectPtr< UserConstraint_obj > result = new UserConstraint_obj();
	result->__construct(dimensions,__o_velocityOnly);
	return result;}

Dynamic UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UserConstraint_obj > result = new UserConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::geom::Vec2 UserConstraint_obj::__bindVec2( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__bindVec2",0xff6e16d6,"nape.constraint.UserConstraint.__bindVec2","nape/constraint/UserConstraint.hx",223,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	::nape::geom::Vec2 ret = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	ret->zpp_inner->_inuse = true;
	HX_STACK_LINE(226)
	ret->zpp_inner->_invalidate = this->zpp_inner_zn->bindVec2_invalidate_dyn();
	HX_STACK_LINE(227)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__bindVec2,return )

::nape::constraint::UserConstraint UserConstraint_obj::__copy( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__copy",0xaacbfd50,"nape.constraint.UserConstraint.__copy","nape/constraint/UserConstraint.hx",245,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__copy,return )

Void UserConstraint_obj::__broken( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__broken",0x46e6d4b0,"nape.constraint.UserConstraint.__broken","nape/constraint/UserConstraint.hx",256,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__broken,(void))

Void UserConstraint_obj::__validate( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__validate",0x483b7bb1,"nape.constraint.UserConstraint.__validate","nape/constraint/UserConstraint.hx",271,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__validate,(void))

Void UserConstraint_obj::__draw( ::nape::util::Debug debug){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__draw",0xab776d9f,"nape.constraint.UserConstraint.__draw","nape/constraint/UserConstraint.hx",282,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(debug,"debug")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__draw,(void))

Void UserConstraint_obj::__prepare( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__prepare",0x4a8902cc,"nape.constraint.UserConstraint.__prepare","nape/constraint/UserConstraint.hx",291,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__prepare,(void))

Void UserConstraint_obj::__position( Array< Float > err){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__position",0x0e524bc4,"nape.constraint.UserConstraint.__position","nape/constraint/UserConstraint.hx",300,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__position,(void))

Void UserConstraint_obj::__velocity( Array< Float > err){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__velocity",0x6255ad38,"nape.constraint.UserConstraint.__velocity","nape/constraint/UserConstraint.hx",313,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__velocity,(void))

Void UserConstraint_obj::__eff_mass( Array< Float > eff){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__eff_mass",0x299a2ce9,"nape.constraint.UserConstraint.__eff_mass","nape/constraint/UserConstraint.hx",335,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eff,"eff")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__eff_mass,(void))

Void UserConstraint_obj::__clamp( Array< Float > jAcc){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__clamp",0xc5aa9900,"nape.constraint.UserConstraint.__clamp","nape/constraint/UserConstraint.hx",347,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(jAcc,"jAcc")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__clamp,(void))

Void UserConstraint_obj::__impulse( Array< Float > imp,::nape::phys::Body body,::nape::geom::Vec3 out){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__impulse",0x8068c1fa,"nape.constraint.UserConstraint.__impulse","nape/constraint/UserConstraint.hx",358,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(imp,"imp")
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(out,"out")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UserConstraint_obj,__impulse,(void))

::nape::geom::MatMN UserConstraint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","impulse",0x80b11dda,"nape.constraint.UserConstraint.impulse","nape/constraint/UserConstraint.hx",401,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner_zn->dim,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		int _g = this->zpp_inner_zn->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		while((true)){
			HX_STACK_LINE(403)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(403)
				break;
			}
			HX_STACK_LINE(403)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(404)
			ret->zpp_inner->x[(i * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc->__get(i);
		}
	}
	HX_STACK_LINE(406)
	return ret;
}


::nape::geom::Vec3 UserConstraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.UserConstraint","bodyImpulse",0xdad439d8,"nape.constraint.UserConstraint.bodyImpulse","nape/constraint/UserConstraint.hx",427,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(427)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(428)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(431)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(427)
	return null();
}


Void UserConstraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","visitBodies",0x5f90b750,"nape.constraint.UserConstraint.visitBodies","nape/constraint/UserConstraint.hx",437,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(438)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(439)
		int nbodies = this->zpp_inner_zn->bodies->length;		HX_STACK_VAR(nbodies,"nbodies");
		HX_STACK_LINE(440)
		while((true)){
			HX_STACK_LINE(440)
			if ((!(((i < nbodies))))){
				HX_STACK_LINE(440)
				break;
			}
			HX_STACK_LINE(441)
			::zpp_nape::constraint::ZPP_UserBody b = this->zpp_inner_zn->bodies->__get(i).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(442)
			if (((b->body != null()))){
				HX_STACK_LINE(443)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					int _g = (i + (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(444)
					while((true)){
						HX_STACK_LINE(444)
						if ((!(((_g < nbodies))))){
							HX_STACK_LINE(444)
							break;
						}
						HX_STACK_LINE(444)
						int j = (_g)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(445)
						::zpp_nape::constraint::ZPP_UserBody c = this->zpp_inner_zn->bodies->__get(j).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(446)
						if (((c->body == b->body))){
							HX_STACK_LINE(447)
							found = true;
							HX_STACK_LINE(448)
							break;
						}
					}
				}
				HX_STACK_LINE(451)
				if ((!(found))){
					HX_STACK_LINE(452)
					lambda(b->body->outer).Cast< Void >();
				}
			}
			HX_STACK_LINE(455)
			(i)++;
		}
	}
return null();
}


Void UserConstraint_obj::__invalidate( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__invalidate",0x10170156,"nape.constraint.UserConstraint.__invalidate","nape/constraint/UserConstraint.hx",469,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(470)
		this->zpp_inner->immutable_midstep(HX_CSTRING("UserConstraint::invalidate()"));
		HX_STACK_LINE(471)
		if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
			HX_STACK_LINE(472)
			this->zpp_inner->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__invalidate,(void))

::nape::phys::Body UserConstraint_obj::__registerBody( ::nape::phys::Body oldBody,::nape::phys::Body newBody){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__registerBody",0x08e58f40,"nape.constraint.UserConstraint.__registerBody","nape/constraint/UserConstraint.hx",504,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(oldBody,"oldBody")
	HX_STACK_ARG(newBody,"newBody")
	HX_STACK_LINE(505)
	this->zpp_inner->immutable_midstep(HX_CSTRING("UserConstraint::registerBody(..)"));
	HX_STACK_LINE(506)
	if (((oldBody != newBody))){
		HX_STACK_LINE(507)
		if (((oldBody != null()))){
			HX_STACK_LINE(508)
			if ((!(this->zpp_inner_zn->remBody(oldBody->zpp_inner)))){
			}
			HX_STACK_LINE(513)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(514)
				oldBody->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(517)
		if (((newBody != null()))){
			HX_STACK_LINE(518)
			this->zpp_inner_zn->addBody(newBody->zpp_inner);
		}
		HX_STACK_LINE(520)
		this->zpp_inner->wake();
		HX_STACK_LINE(521)
		if (((newBody != null()))){
			HX_STACK_LINE(522)
			newBody->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(525)
	return newBody;
}


HX_DEFINE_DYNAMIC_FUNC2(UserConstraint_obj,__registerBody,return )


UserConstraint_obj::UserConstraint_obj()
{
}

void UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserConstraint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UserConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		if (HX_FIELD_EQ(inName,"__draw") ) { return __draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { return __clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__broken") ) { return __broken_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
		if (HX_FIELD_EQ(inName,"__impulse") ) { return __impulse_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__bindVec2") ) { return __bindVec2_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate") ) { return __validate_dyn(); }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"__velocity") ) { return __velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"__eff_mass") ) { return __eff_mass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"__invalidate") ) { return __invalidate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__registerBody") ) { return __registerBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_UserConstraint*/ ,(int)offsetof(UserConstraint_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("__bindVec2"),
	HX_CSTRING("__copy"),
	HX_CSTRING("__broken"),
	HX_CSTRING("__validate"),
	HX_CSTRING("__draw"),
	HX_CSTRING("__prepare"),
	HX_CSTRING("__position"),
	HX_CSTRING("__velocity"),
	HX_CSTRING("__eff_mass"),
	HX_CSTRING("__clamp"),
	HX_CSTRING("__impulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("__invalidate"),
	HX_CSTRING("__registerBody"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

#endif

Class UserConstraint_obj::__mClass;

void UserConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.UserConstraint"), hx::TCanCast< UserConstraint_obj> ,sStaticFields,sMemberFields,
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

void UserConstraint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
