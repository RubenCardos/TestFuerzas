#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace dynamics{

Void Contact_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.Contact","new",0x44c5d15e,"nape.dynamics.Contact.new","nape/dynamics/Contact.hx",179,0x044513b2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
}
;
	return null();
}

//Contact_obj::~Contact_obj() { }

Dynamic Contact_obj::__CreateEmpty() { return  new Contact_obj; }
hx::ObjectPtr< Contact_obj > Contact_obj::__new()
{  hx::ObjectPtr< Contact_obj > result = new Contact_obj();
	result->__construct();
	return result;}

Dynamic Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Contact_obj > result = new Contact_obj();
	result->__construct();
	return result;}

::nape::dynamics::CollisionArbiter Contact_obj::get_arbiter( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_arbiter",0xe1484efe,"nape.dynamics.Contact.get_arbiter","nape/dynamics/Contact.hx",190,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	if (((this->zpp_inner->arbiter == null()))){
		HX_STACK_LINE(190)
		return null();
	}
	else{
		HX_STACK_LINE(190)
		::nape::dynamics::Arbiter _this = this->zpp_inner->arbiter->outer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		if (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
			HX_STACK_LINE(190)
			return _this->zpp_inner->colarb->outer_zn;
		}
		else{
			HX_STACK_LINE(190)
			return null();
		}
	}
	HX_STACK_LINE(190)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_arbiter,return )

Float Contact_obj::get_penetration( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_penetration",0x23e69e20,"nape.dynamics.Contact.get_penetration","nape/dynamics/Contact.hx",205,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return -(this->zpp_inner->dist);
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_penetration,return )

::nape::geom::Vec2 Contact_obj::get_position( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_position",0xe74543f4,"nape.dynamics.Contact.get_position","nape/dynamics/Contact.hx",216,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	if (((this->zpp_inner->wrap_position == null()))){
		HX_STACK_LINE(220)
		this->zpp_inner->getposition();
	}
	HX_STACK_LINE(221)
	return this->zpp_inner->wrap_position;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_position,return )

bool Contact_obj::get_fresh( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_fresh",0xb26db643,"nape.dynamics.Contact.get_fresh","nape/dynamics/Contact.hx",232,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return this->zpp_inner->fresh;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_fresh,return )

::nape::geom::Vec3 Contact_obj::normalImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","normalImpulse",0xeae713cc,"nape.dynamics.Contact.normalImpulse","nape/dynamics/Contact.hx",248,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(252)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(254)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(255)
	if (((body == null()))){
		HX_STACK_LINE(255)
		return ::nape::geom::Vec3_obj::get((colarb->nx * jnAcc),(colarb->ny * jnAcc),null());
	}
	else{
		HX_STACK_LINE(260)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(260)
			return ::nape::geom::Vec3_obj::get((colarb->nx * -(jnAcc)),(colarb->ny * -(jnAcc)),(-((((colarb->ny * cin->r1x) - (colarb->nx * cin->r1y)))) * jnAcc));
		}
		else{
			HX_STACK_LINE(261)
			return ::nape::geom::Vec3_obj::get((colarb->nx * jnAcc),(colarb->ny * jnAcc),((((colarb->ny * cin->r2x) - (colarb->nx * cin->r2y))) * jnAcc));
		}
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,normalImpulse,return )

::nape::geom::Vec3 Contact_obj::tangentImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","tangentImpulse",0xadfaf232,"nape.dynamics.Contact.tangentImpulse","nape/dynamics/Contact.hx",281,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(285)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(286)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(287)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(288)
	if (((body == null()))){
		HX_STACK_LINE(288)
		return ::nape::geom::Vec3_obj::get((-(colarb->ny) * jtAcc),(colarb->nx * jtAcc),null());
	}
	else{
		HX_STACK_LINE(293)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(293)
			return ::nape::geom::Vec3_obj::get((colarb->ny * jtAcc),(-(colarb->nx) * jtAcc),(-((((cin->r1x * colarb->nx) + (cin->r1y * colarb->ny)))) * jtAcc));
		}
		else{
			HX_STACK_LINE(294)
			return ::nape::geom::Vec3_obj::get((-(colarb->ny) * jtAcc),(colarb->nx * jtAcc),((((cin->r2x * colarb->nx) + (cin->r2y * colarb->ny))) * jtAcc));
		}
	}
	HX_STACK_LINE(288)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,tangentImpulse,return )

Float Contact_obj::rollingImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","rollingImpulse",0x139a7972,"nape.dynamics.Contact.rollingImpulse","nape/dynamics/Contact.hx",308,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(313)
	Float jrAcc = this->zpp_inner->arbiter->colarb->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(314)
	if (((body == null()))){
		HX_STACK_LINE(314)
		return jrAcc;
	}
	else{
		HX_STACK_LINE(319)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(319)
			return -(jrAcc);
		}
		else{
			HX_STACK_LINE(320)
			return jrAcc;
		}
	}
	HX_STACK_LINE(314)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,rollingImpulse,return )

::nape::geom::Vec3 Contact_obj::totalImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","totalImpulse",0x7decd493,"nape.dynamics.Contact.totalImpulse","nape/dynamics/Contact.hx",337,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(341)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(342)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(343)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(344)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(345)
	Float jrAcc = colarb->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(346)
	if (((body == null()))){
		HX_STACK_LINE(347)
		return ::nape::geom::Vec3_obj::get(((colarb->nx * jnAcc) - (colarb->ny * jtAcc)),((colarb->ny * jnAcc) + (colarb->nx * jtAcc)),jrAcc);
	}
	else{
		HX_STACK_LINE(353)
		Float jx = ((colarb->nx * jnAcc) - (colarb->ny * jtAcc));		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(354)
		Float jy = ((colarb->ny * jnAcc) + (colarb->nx * jtAcc));		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(371)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(371)
			return ::nape::geom::Vec3_obj::get(-(jx),-(jy),(-((((jy * cin->r1x) - (jx * cin->r1y)))) - jrAcc));
		}
		else{
			HX_STACK_LINE(372)
			return ::nape::geom::Vec3_obj::get(jx,jy,(((jy * cin->r2x) - (jx * cin->r2y)) + jrAcc));
		}
	}
	HX_STACK_LINE(346)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,totalImpulse,return )

Float Contact_obj::get_friction( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_friction",0xb4141c45,"nape.dynamics.Contact.get_friction","nape/dynamics/Contact.hx",390,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	return this->zpp_inner->inner->friction;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_friction,return )

::String Contact_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.Contact","toString",0x256276ee,"nape.dynamics.Contact.toString","nape/dynamics/Contact.hx",404,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	if (((bool((this->zpp_inner->arbiter == null())) || bool(this->zpp_inner->arbiter->cleared)))){
		HX_STACK_LINE(404)
		return HX_CSTRING("{object-pooled}");
	}
	else{
		HX_STACK_LINE(405)
		return HX_CSTRING("{Contact}");
	}
	HX_STACK_LINE(404)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,toString,return )


Contact_obj::Contact_obj()
{
}

void Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Contact);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Contact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fresh") ) { return get_fresh(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { return get_arbiter(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"friction") ) { return get_friction(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_fresh") ) { return get_fresh_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"penetration") ) { return get_penetration(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_friction") ) { return get_friction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_penetration") ) { return get_penetration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("penetration"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("fresh"));
	outFields->push(HX_CSTRING("friction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(Contact_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_arbiter"),
	HX_CSTRING("get_penetration"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_fresh"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("get_friction"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

#endif

Class Contact_obj::__mClass;

void Contact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.Contact"), hx::TCanCast< Contact_obj> ,sStaticFields,sMemberFields,
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

void Contact_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
