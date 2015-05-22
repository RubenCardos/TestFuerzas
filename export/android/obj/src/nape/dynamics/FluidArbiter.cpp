#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace dynamics{

Void FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.FluidArbiter","new",0x49116625,"nape.dynamics.FluidArbiter.new","nape/dynamics/FluidArbiter.hx",320,0xd522c90b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(320)
	super::__construct();
}
;
	return null();
}

//FluidArbiter_obj::~FluidArbiter_obj() { }

Dynamic FluidArbiter_obj::__CreateEmpty() { return  new FluidArbiter_obj; }
hx::ObjectPtr< FluidArbiter_obj > FluidArbiter_obj::__new()
{  hx::ObjectPtr< FluidArbiter_obj > result = new FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidArbiter_obj > result = new FluidArbiter_obj();
	result->__construct();
	return result;}

::nape::geom::Vec2 FluidArbiter_obj::get_position( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_position",0x08ca5e4d,"nape.dynamics.FluidArbiter.get_position","nape/dynamics/FluidArbiter.hx",185,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	if (((this->zpp_inner->fluidarb->wrap_position == null()))){
		HX_STACK_LINE(189)
		this->zpp_inner->fluidarb->getposition();
	}
	HX_STACK_LINE(190)
	return this->zpp_inner->fluidarb->wrap_position;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_position,return )

::nape::geom::Vec2 FluidArbiter_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_position",0x1dc381c1,"nape.dynamics.FluidArbiter.set_position","nape/dynamics/FluidArbiter.hx",192,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			if (((this->zpp_inner->fluidarb->wrap_position == null()))){
				HX_STACK_LINE(200)
				this->zpp_inner->fluidarb->getposition();
			}
			HX_STACK_LINE(200)
			_this = this->zpp_inner->fluidarb->wrap_position;
		}
		HX_STACK_LINE(200)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				x = position->zpp_inner->x;
			}
			HX_STACK_LINE(200)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				y = position->zpp_inner->y;
			}
			HX_STACK_LINE(200)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/FluidArbiter.hx",200,0xd522c90b)
					{
						HX_STACK_LINE(200)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							{
								HX_STACK_LINE(200)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(200)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(200)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(200)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(200)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(200)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(200)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(200)
					{
					}
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(200)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(200)
			ret = _this;
		}
		HX_STACK_LINE(200)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(200)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(200)
				position->zpp_inner = null();
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(200)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(200)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						if (((o->outer != null()))){
							HX_STACK_LINE(200)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(200)
							o->outer = null();
						}
						HX_STACK_LINE(200)
						o->_isimmutable = null();
						HX_STACK_LINE(200)
						o->_validate = null();
						HX_STACK_LINE(200)
						o->_invalidate = null();
					}
					HX_STACK_LINE(200)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(200)
			true;
		}
		else{
			HX_STACK_LINE(200)
			false;
		}
		HX_STACK_LINE(200)
		ret;
	}
	HX_STACK_LINE(202)
	if (((this->zpp_inner->fluidarb->wrap_position == null()))){
		HX_STACK_LINE(202)
		this->zpp_inner->fluidarb->getposition();
	}
	HX_STACK_LINE(202)
	return this->zpp_inner->fluidarb->wrap_position;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_position,return )

Float FluidArbiter_obj::get_overlap( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_overlap",0xd2ab0663,"nape.dynamics.FluidArbiter.get_overlap","nape/dynamics/FluidArbiter.hx",218,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->zpp_inner->fluidarb->overlap;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_overlap,return )

Float FluidArbiter_obj::set_overlap( Float overlap){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_overlap",0xdd180d6f,"nape.dynamics.FluidArbiter.set_overlap","nape/dynamics/FluidArbiter.hx",220,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(overlap,"overlap")
	HX_STACK_LINE(231)
	this->zpp_inner->fluidarb->overlap = overlap;
	HX_STACK_LINE(233)
	return this->zpp_inner->fluidarb->overlap;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_overlap,return )

::nape::geom::Vec3 FluidArbiter_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","buoyancyImpulse",0x456d50ba,"nape.dynamics.FluidArbiter.buoyancyImpulse","nape/dynamics/FluidArbiter.hx",246,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = this->zpp_inner->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(254)
	if (((body == null()))){
		HX_STACK_LINE(255)
		return ::nape::geom::Vec3_obj::get(farb->buoyx,farb->buoyy,(int)0);
	}
	else{
		HX_STACK_LINE(257)
		if (((body->zpp_inner == this->zpp_inner->b2))){
			HX_STACK_LINE(258)
			return ::nape::geom::Vec3_obj::get(farb->buoyx,farb->buoyy,((farb->buoyy * farb->r2x) - (farb->buoyx * farb->r2y)));
		}
		else{
			HX_STACK_LINE(261)
			return ::nape::geom::Vec3_obj::get(-(farb->buoyx),-(farb->buoyy),-((((farb->buoyy * farb->r1x) - (farb->buoyx * farb->r1y)))));
		}
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,buoyancyImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","dragImpulse",0xc77ed5e6,"nape.dynamics.FluidArbiter.dragImpulse","nape/dynamics/FluidArbiter.hx",275,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = this->zpp_inner->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(283)
	int scale;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(283)
	if (((bool((body == null())) || bool((body->zpp_inner == this->zpp_inner->b2))))){
		HX_STACK_LINE(283)
		scale = (int)1;
	}
	else{
		HX_STACK_LINE(283)
		scale = (int)-1;
	}
	HX_STACK_LINE(284)
	return ::nape::geom::Vec3_obj::get((farb->dampx * scale),(farb->dampy * scale),(farb->adamp * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,dragImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","totalImpulse",0x9f71eeec,"nape.dynamics.FluidArbiter.totalImpulse","nape/dynamics/FluidArbiter.hx",298,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp = this->buoyancyImpulse(body);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 ret = this->dragImpulse(body);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g1 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g11 = tmp->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float x = (_g1 + _g11);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(307)
				_g->zpp_inner->x = x;
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				Float _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g2 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g3 = tmp->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float y = (_g2 + _g3);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(308)
				_g->zpp_inner->y = y;
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g4 = _g->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g5 = tmp->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float z = (_g4 + _g5);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(309)
				_g->zpp_inner->z = z;
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g->zpp_inner->z;
				}
			}
		}
		HX_STACK_LINE(310)
		tmp->dispose();
		HX_STACK_LINE(311)
		return ret;
	}
}



FluidArbiter_obj::FluidArbiter_obj()
{
}

Dynamic FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return get_overlap(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_overlap") ) { return get_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overlap") ) { return set_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return set_overlap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("overlap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_overlap"),
	HX_CSTRING("set_overlap"),
	HX_CSTRING("buoyancyImpulse"),
	HX_CSTRING("dragImpulse"),
	HX_CSTRING("totalImpulse"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#endif

Class FluidArbiter_obj::__mClass;

void FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.FluidArbiter"), hx::TCanCast< FluidArbiter_obj> ,sStaticFields,sMemberFields,
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

void FluidArbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
