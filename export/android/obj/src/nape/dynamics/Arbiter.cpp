#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void Arbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.Arbiter","new",0xe76def27,"nape.dynamics.Arbiter.new","nape/dynamics/Arbiter.hx",180,0x42fd8209)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(363)
	if ((!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal))){
	}
}
;
	return null();
}

//Arbiter_obj::~Arbiter_obj() { }

Dynamic Arbiter_obj::__CreateEmpty() { return  new Arbiter_obj; }
hx::ObjectPtr< Arbiter_obj > Arbiter_obj::__new()
{  hx::ObjectPtr< Arbiter_obj > result = new Arbiter_obj();
	result->__construct();
	return result;}

Dynamic Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Arbiter_obj > result = new Arbiter_obj();
	result->__construct();
	return result;}

bool Arbiter_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_isSleeping",0x2704cb17,"nape.dynamics.Arbiter.get_isSleeping","nape/dynamics/Arbiter.hx",196,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->zpp_inner->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_isSleeping,return )

::nape::dynamics::ArbiterType Arbiter_obj::get_type( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_type",0x2d419e1c,"nape.dynamics.Arbiter.get_type","nape/dynamics/Arbiter.hx",204,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return ::zpp_nape::dynamics::ZPP_Arbiter_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::dynamics::ArbiterType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_type,return )

bool Arbiter_obj::isCollisionArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isCollisionArbiter",0xe3eed6ba,"nape.dynamics.Arbiter.isCollisionArbiter","nape/dynamics/Arbiter.hx",215,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isCollisionArbiter,return )

bool Arbiter_obj::isFluidArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isFluidArbiter",0x41f1faa2,"nape.dynamics.Arbiter.isFluidArbiter","nape/dynamics/Arbiter.hx",226,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isFluidArbiter,return )

bool Arbiter_obj::isSensorArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isSensorArbiter",0x9140c7cc,"nape.dynamics.Arbiter.isSensorArbiter","nape/dynamics/Arbiter.hx",237,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isSensorArbiter,return )

::nape::dynamics::CollisionArbiter Arbiter_obj::get_collisionArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_collisionArbiter",0x65c547f9,"nape.dynamics.Arbiter.get_collisionArbiter","nape/dynamics/Arbiter.hx",247,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
		HX_STACK_LINE(247)
		return this->zpp_inner->colarb->outer_zn;
	}
	else{
		HX_STACK_LINE(247)
		return null();
	}
	HX_STACK_LINE(247)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_collisionArbiter,return )

::nape::dynamics::FluidArbiter Arbiter_obj::get_fluidArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_fluidArbiter",0xff492061,"nape.dynamics.Arbiter.get_fluidArbiter","nape/dynamics/Arbiter.hx",257,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
		HX_STACK_LINE(257)
		return this->zpp_inner->fluidarb->outer_zn;
	}
	else{
		HX_STACK_LINE(257)
		return null();
	}
	HX_STACK_LINE(257)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_fluidArbiter,return )

::nape::shape::Shape Arbiter_obj::get_shape1( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_shape1",0xfd6da1d2,"nape.dynamics.Arbiter.get_shape1","nape/dynamics/Arbiter.hx",270,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(270)
		return this->zpp_inner->ws2->outer;
	}
	else{
		HX_STACK_LINE(270)
		return this->zpp_inner->ws1->outer;
	}
	HX_STACK_LINE(270)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape1,return )

::nape::shape::Shape Arbiter_obj::get_shape2( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_shape2",0xfd6da1d3,"nape.dynamics.Arbiter.get_shape2","nape/dynamics/Arbiter.hx",283,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(283)
		return this->zpp_inner->ws1->outer;
	}
	else{
		HX_STACK_LINE(283)
		return this->zpp_inner->ws2->outer;
	}
	HX_STACK_LINE(283)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape2,return )

::nape::phys::Body Arbiter_obj::get_body1( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_body1",0x084d1dad,"nape.dynamics.Arbiter.get_body1","nape/dynamics/Arbiter.hx",296,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(296)
		return this->zpp_inner->b2->outer;
	}
	else{
		HX_STACK_LINE(296)
		return this->zpp_inner->b1->outer;
	}
	HX_STACK_LINE(296)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body1,return )

::nape::phys::Body Arbiter_obj::get_body2( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_body2",0x084d1dae,"nape.dynamics.Arbiter.get_body2","nape/dynamics/Arbiter.hx",309,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(309)
		return this->zpp_inner->b1->outer;
	}
	else{
		HX_STACK_LINE(309)
		return this->zpp_inner->b2->outer;
	}
	HX_STACK_LINE(309)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body2,return )

::nape::callbacks::PreFlag Arbiter_obj::get_state( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_state",0xd568c06f,"nape.dynamics.Arbiter.get_state","nape/dynamics/Arbiter.hx",327,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	int _g = this->zpp_inner->immState;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(327)
	int x = _g;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(328)
	if (((x == ((int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT) | int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)))))){
		HX_STACK_LINE(328)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(328)
			::nape::callbacks::PreFlag _g1 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = _g1;
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(328)
		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
	}
	else{
		HX_STACK_LINE(327)
		int x1 = _g;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(327)
		int _switch_1 = (_g);
		if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT)){
			HX_STACK_LINE(329)
			if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
				HX_STACK_LINE(329)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(329)
				::nape::callbacks::PreFlag _g1 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(329)
				::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = _g1;
				HX_STACK_LINE(329)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(329)
			return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
		}
		else  {
			HX_STACK_LINE(330)
			if (((x1 == ((int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE) | int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)))))){
				HX_STACK_LINE(330)
				if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
					HX_STACK_LINE(330)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(330)
					::nape::callbacks::PreFlag _g2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(330)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = _g2;
					HX_STACK_LINE(330)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(330)
				return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
			}
			else{
				HX_STACK_LINE(331)
				if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
					HX_STACK_LINE(331)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(331)
					::nape::callbacks::PreFlag _g3 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(331)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = _g3;
					HX_STACK_LINE(331)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(331)
				return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
			}
		}
;
;
	}
	HX_STACK_LINE(328)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_state,return )

::nape::geom::Vec3 Arbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.Arbiter","totalImpulse",0xb05135aa,"nape.dynamics.Arbiter.totalImpulse","nape/dynamics/Arbiter.hx",357,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(357)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Arbiter_obj,totalImpulse,return )

::String Arbiter_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","toString",0x98ecc085,"nape.dynamics.Arbiter.toString","nape/dynamics/Arbiter.hx",372,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::String ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(373)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
		HX_STACK_LINE(373)
		ret = HX_CSTRING("CollisionArbiter");
	}
	else{
		HX_STACK_LINE(374)
		if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
			HX_STACK_LINE(374)
			ret = HX_CSTRING("FluidArbiter");
		}
		else{
			HX_STACK_LINE(375)
			ret = HX_CSTRING("SensorArbiter");
		}
	}
	HX_STACK_LINE(378)
	if ((this->zpp_inner->cleared)){
		HX_STACK_LINE(378)
		return (ret + HX_CSTRING("(object-pooled)"));
	}
	else{
		HX_STACK_LINE(379)
		::String _g = ((  (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(this->zpp_inner->ws2->outer) : ::nape::shape::Shape(this->zpp_inner->ws1->outer) ))->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(379)
		::String _g1 = ((ret + HX_CSTRING("(")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(379)
		::String _g2 = (_g1 + HX_CSTRING("|"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(379)
		::String _g3 = ((  (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(this->zpp_inner->ws1->outer) : ::nape::shape::Shape(this->zpp_inner->ws2->outer) ))->toString();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(379)
		::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(379)
		::String _g5 = (_g4 + HX_CSTRING(")"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(379)
		::String _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(379)
		_g6 = (_g5 + ((  (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::String(((HX_CSTRING("[") + Array_obj< ::String >::__new().Add(HX_CSTRING("SD")).Add(HX_CSTRING("DD"))->__get((  ((this->zpp_inner->colarb->stat)) ? int((int)0) : int((int)1) ))) + HX_CSTRING("]"))) : ::String(HX_CSTRING("")) )));
		HX_STACK_LINE(379)
		::String _g7 = (_g6 + HX_CSTRING("<-"));		HX_STACK_VAR(_g7,"_g7");
		struct _Function_2_1{
			inline static ::nape::callbacks::PreFlag Block( hx::ObjectPtr< ::nape::dynamics::Arbiter_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
				{
					HX_STACK_LINE(379)
					int _g8 = __this->zpp_inner->immState;		HX_STACK_VAR(_g8,"_g8");
					struct _Function_3_1{
						inline static ::nape::callbacks::PreFlag Block( int &_g8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
							{
								HX_STACK_LINE(379)
								int x = _g8;		HX_STACK_VAR(x,"x");
								struct _Function_4_1{
									inline static ::nape::callbacks::PreFlag Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
										{
											HX_STACK_LINE(379)
											if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
												HX_STACK_LINE(379)
												::zpp_nape::util::ZPP_Flags_obj::internal = true;
												HX_STACK_LINE(379)
												::nape::callbacks::PreFlag _g81 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g81,"_g81");
												HX_STACK_LINE(379)
												::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = _g81;
												HX_STACK_LINE(379)
												::zpp_nape::util::ZPP_Flags_obj::internal = false;
											}
											HX_STACK_LINE(379)
											return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static ::nape::callbacks::PreFlag Block( int &_g8){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
										{
											HX_STACK_LINE(379)
											int x1 = _g8;		HX_STACK_VAR(x1,"x1");
											struct _Function_5_1{
												inline static ::nape::callbacks::PreFlag Block( int &_g8,int &x1){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
													{
														HX_STACK_LINE(379)
														int _switch_2 = (_g8);
														if (  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT)){
															HX_STACK_LINE(379)
															if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
																HX_STACK_LINE(379)
																::zpp_nape::util::ZPP_Flags_obj::internal = true;
																HX_STACK_LINE(379)
																::nape::callbacks::PreFlag _g9 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g9,"_g9");
																HX_STACK_LINE(379)
																::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = _g9;
																HX_STACK_LINE(379)
																::zpp_nape::util::ZPP_Flags_obj::internal = false;
															}
															HX_STACK_LINE(379)
															return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
														}
														else  {
															struct _Function_7_1{
																inline static ::nape::callbacks::PreFlag Block( ){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
																	{
																		HX_STACK_LINE(379)
																		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::internal = true;
																			HX_STACK_LINE(379)
																			::nape::callbacks::PreFlag _g10 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g10,"_g10");
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = _g10;
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::internal = false;
																		}
																		HX_STACK_LINE(379)
																		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
																	}
																	return null();
																}
															};
															struct _Function_7_2{
																inline static ::nape::callbacks::PreFlag Block( ){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/Arbiter.hx",379,0x42fd8209)
																	{
																		HX_STACK_LINE(379)
																		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::internal = true;
																			HX_STACK_LINE(379)
																			::nape::callbacks::PreFlag _g11 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(_g11,"_g11");
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = _g11;
																			HX_STACK_LINE(379)
																			::zpp_nape::util::ZPP_Flags_obj::internal = false;
																		}
																		HX_STACK_LINE(379)
																		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(379)
															return (  (((x1 == ((int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE) | int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)))))) ? ::nape::callbacks::PreFlag(_Function_7_1::Block()) : ::nape::callbacks::PreFlag(_Function_7_2::Block()) );
														}
;
;
													}
													return null();
												}
											};
											HX_STACK_LINE(379)
											return _Function_5_1::Block(_g8,x1);
										}
										return null();
									}
								};
								HX_STACK_LINE(379)
								return (  (((x == ((int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT) | int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)))))) ? ::nape::callbacks::PreFlag(_Function_4_1::Block()) : ::nape::callbacks::PreFlag(_Function_4_2::Block(_g8)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(379)
					return _Function_3_1::Block(_g8);
				}
				return null();
			}
		};
		HX_STACK_LINE(379)
		::String _g12 = (_Function_2_1::Block(this))->toString();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(379)
		return (_g7 + _g12);
	}
	HX_STACK_LINE(378)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,toString,return )


Arbiter_obj::Arbiter_obj()
{
}

void Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Arbiter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { return get_shape1(); }
		if (HX_FIELD_EQ(inName,"shape2") ) { return get_shape2(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"get_shape1") ) { return get_shape1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape2") ) { return get_shape2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidArbiter") ) { return get_fluidArbiter(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"isFluidArbiter") ) { return isFluidArbiter_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isSensorArbiter") ) { return isSensorArbiter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collisionArbiter") ) { return get_collisionArbiter(); }
		if (HX_FIELD_EQ(inName,"get_fluidArbiter") ) { return get_fluidArbiter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isCollisionArbiter") ) { return isCollisionArbiter_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_collisionArbiter") ) { return get_collisionArbiter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("collisionArbiter"));
	outFields->push(HX_CSTRING("fluidArbiter"));
	outFields->push(HX_CSTRING("shape1"));
	outFields->push(HX_CSTRING("shape2"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(Arbiter_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("get_type"),
	HX_CSTRING("isCollisionArbiter"),
	HX_CSTRING("isFluidArbiter"),
	HX_CSTRING("isSensorArbiter"),
	HX_CSTRING("get_collisionArbiter"),
	HX_CSTRING("get_fluidArbiter"),
	HX_CSTRING("get_shape1"),
	HX_CSTRING("get_shape2"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("get_state"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#endif

Class Arbiter_obj::__mClass;

void Arbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.Arbiter"), hx::TCanCast< Arbiter_obj> ,sStaticFields,sMemberFields,
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

void Arbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
