#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void FluidProperties_obj::__construct(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{
HX_STACK_FRAME("nape.phys.FluidProperties","new",0x937b9199,"nape.phys.FluidProperties.new","nape/phys/FluidProperties.hx",177,0xe22a5857)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_density,"density")
HX_STACK_ARG(__o_viscosity,"viscosity")
Float density = __o_density.Default(1);
Float viscosity = __o_viscosity.Default(1);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(224)
		if (((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool == null()))){
			HX_STACK_LINE(225)
			::zpp_nape::phys::ZPP_FluidProperties _g = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			this->zpp_inner = _g;
		}
		else{
			HX_STACK_LINE(231)
			this->zpp_inner = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = this->zpp_inner->next;
			HX_STACK_LINE(233)
			this->zpp_inner->next = null();
		}
		HX_STACK_LINE(238)
		Dynamic();
	}
	HX_STACK_LINE(240)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		if (((density != (this->zpp_inner->density * (int)1000)))){
			HX_STACK_LINE(241)
			this->zpp_inner->density = (Float(density) / Float((int)1000));
			HX_STACK_LINE(241)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(241)
		(this->zpp_inner->density * (int)1000);
	}
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		if (((viscosity != this->zpp_inner->viscosity))){
			HX_STACK_LINE(242)
			this->zpp_inner->viscosity = (Float(viscosity) / Float((int)1));
			HX_STACK_LINE(242)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(242)
		this->zpp_inner->viscosity;
	}
}
;
	return null();
}

//FluidProperties_obj::~FluidProperties_obj() { }

Dynamic FluidProperties_obj::__CreateEmpty() { return  new FluidProperties_obj; }
hx::ObjectPtr< FluidProperties_obj > FluidProperties_obj::__new(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{  hx::ObjectPtr< FluidProperties_obj > result = new FluidProperties_obj();
	result->__construct(__o_density,__o_viscosity);
	return result;}

Dynamic FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidProperties_obj > result = new FluidProperties_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic FluidProperties_obj::get_userData( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_userData",0xff2f19c5,"nape.phys.FluidProperties.get_userData","nape/phys/FluidProperties.hx",195,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/FluidProperties.hx",197,0xe22a5857)
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


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_userData,return )

::nape::shape::ShapeList FluidProperties_obj::get_shapes( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_shapes",0x01af11e2,"nape.phys.FluidProperties.get_shapes","nape/phys/FluidProperties.hx",210,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	if (((this->zpp_inner->wrap_shapes == null()))){
		HX_STACK_LINE(211)
		::nape::shape::ShapeList _g = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->zpp_inner->shapes,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		this->zpp_inner->wrap_shapes = _g;
	}
	HX_STACK_LINE(212)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_shapes,return )

::nape::phys::FluidProperties FluidProperties_obj::copy( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","copy",0x71660c5c,"nape.phys.FluidProperties.copy","nape/phys/FluidProperties.hx",254,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::nape::phys::FluidProperties ret = ::nape::phys::FluidProperties_obj::__new((this->zpp_inner->density * (int)1000),this->zpp_inner->viscosity);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	if (((this->zpp_inner->userData != null()))){
		HX_STACK_LINE(256)
		Dynamic _g = ::Reflect_obj::copy(this->zpp_inner->userData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		ret->zpp_inner->userData = _g;
	}
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::nape::geom::Vec2 gravity = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(257)
		if (((gravity == null()))){
			HX_STACK_LINE(257)
			if (((ret->zpp_inner->wrap_gravity != null()))){
				HX_STACK_LINE(257)
				ret->zpp_inner->wrap_gravity->zpp_inner->_inuse = false;
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::nape::geom::Vec2 _this = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(257)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(257)
					_this->zpp_inner = null();
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(257)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(257)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							if (((o->outer != null()))){
								HX_STACK_LINE(257)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(257)
								o->outer = null();
							}
							HX_STACK_LINE(257)
							o->_isimmutable = null();
							HX_STACK_LINE(257)
							o->_validate = null();
							HX_STACK_LINE(257)
							o->_invalidate = null();
						}
						HX_STACK_LINE(257)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(257)
				ret->zpp_inner->wrap_gravity = null();
			}
		}
		else{
			HX_STACK_LINE(257)
			if (((ret->zpp_inner->wrap_gravity == null()))){
				HX_STACK_LINE(257)
				ret->zpp_inner->getgravity();
			}
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::nape::geom::Vec2 _this = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(257)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(257)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(257)
						x = gravity->zpp_inner->x;
					}
					HX_STACK_LINE(257)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(257)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(257)
						y = gravity->zpp_inner->y;
					}
					HX_STACK_LINE(257)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(257)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(257)
						_g1 = _this->zpp_inner->x;
					}
					struct _Function_5_1{
						inline static bool Block( Float &y,::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/FluidProperties.hx",257,0xe22a5857)
							{
								HX_STACK_LINE(257)
								Float _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(257)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(257)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(257)
									_g2 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(257)
								return (_g2 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(257)
					if ((!(((  (((_g1 == x))) ? bool(_Function_5_1::Block(y,_this)) : bool(false) ))))){
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(257)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(257)
							{
							}
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(257)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(257)
					ret1 = _this;
				}
				HX_STACK_LINE(257)
				if ((gravity->zpp_inner->weak)){
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(257)
						gravity->zpp_inner->outer = null();
						HX_STACK_LINE(257)
						gravity->zpp_inner = null();
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								if (((o->outer != null()))){
									HX_STACK_LINE(257)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(257)
									o->outer = null();
								}
								HX_STACK_LINE(257)
								o->_isimmutable = null();
								HX_STACK_LINE(257)
								o->_validate = null();
								HX_STACK_LINE(257)
								o->_invalidate = null();
							}
							HX_STACK_LINE(257)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(257)
					true;
				}
				else{
					HX_STACK_LINE(257)
					false;
				}
				HX_STACK_LINE(257)
				ret1;
			}
		}
		HX_STACK_LINE(257)
		ret->zpp_inner->wrap_gravity;
	}
	HX_STACK_LINE(258)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,copy,return )

Float FluidProperties_obj::get_density( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_density",0x52e0c238,"nape.phys.FluidProperties.get_density","nape/phys/FluidProperties.hx",269,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_density,return )

Float FluidProperties_obj::set_density( Float density){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_density",0x5d4dc944,"nape.phys.FluidProperties.set_density","nape/phys/FluidProperties.hx",271,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(density,"density")
	HX_STACK_LINE(273)
	if (((density != (this->zpp_inner->density * (int)1000)))){
		HX_STACK_LINE(278)
		this->zpp_inner->density = (Float(density) / Float((int)1000));
		HX_STACK_LINE(279)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(282)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_density,return )

Float FluidProperties_obj::get_viscosity( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_viscosity",0xf5eafc77,"nape.phys.FluidProperties.get_viscosity","nape/phys/FluidProperties.hx",294,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	return this->zpp_inner->viscosity;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_viscosity,return )

Float FluidProperties_obj::set_viscosity( Float viscosity){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_viscosity",0x3af0de83,"nape.phys.FluidProperties.set_viscosity","nape/phys/FluidProperties.hx",296,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(viscosity,"viscosity")
	HX_STACK_LINE(298)
	if (((viscosity != this->zpp_inner->viscosity))){
		HX_STACK_LINE(303)
		this->zpp_inner->viscosity = (Float(viscosity) / Float((int)1));
		HX_STACK_LINE(304)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(307)
	return this->zpp_inner->viscosity;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_viscosity,return )

::nape::geom::Vec2 FluidProperties_obj::get_gravity( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_gravity",0x880af09e,"nape.phys.FluidProperties.get_gravity","nape/phys/FluidProperties.hx",318,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_gravity,return )

::nape::geom::Vec2 FluidProperties_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_gravity",0x9277f7aa,"nape.phys.FluidProperties.set_gravity","nape/phys/FluidProperties.hx",320,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_LINE(322)
	if (((gravity == null()))){
		HX_STACK_LINE(323)
		if (((this->zpp_inner->wrap_gravity != null()))){
			HX_STACK_LINE(324)
			this->zpp_inner->wrap_gravity->zpp_inner->_inuse = false;
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::nape::geom::Vec2 _this = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(325)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(325)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(325)
				_this->zpp_inner = null();
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(325)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						if (((o->outer != null()))){
							HX_STACK_LINE(325)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(325)
							o->outer = null();
						}
						HX_STACK_LINE(325)
						o->_isimmutable = null();
						HX_STACK_LINE(325)
						o->_validate = null();
						HX_STACK_LINE(325)
						o->_invalidate = null();
					}
					HX_STACK_LINE(325)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(326)
			this->zpp_inner->wrap_gravity = null();
		}
	}
	else{
		HX_STACK_LINE(335)
		if (((this->zpp_inner->wrap_gravity == null()))){
			HX_STACK_LINE(335)
			this->zpp_inner->getgravity();
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::nape::geom::Vec2 _this = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(336)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(336)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(336)
					x = gravity->zpp_inner->x;
				}
				HX_STACK_LINE(336)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(336)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(336)
					y = gravity->zpp_inner->y;
				}
				HX_STACK_LINE(336)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(336)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(336)
					_g = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/FluidProperties.hx",336,0xe22a5857)
						{
							HX_STACK_LINE(336)
							Float _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								{
									HX_STACK_LINE(336)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(336)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(336)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(336)
								_g1 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(336)
							return (_g1 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(336)
				if ((!(((  (((_g == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(336)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(336)
						{
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(336)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(336)
				ret = _this;
			}
			HX_STACK_LINE(336)
			if ((gravity->zpp_inner->weak)){
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(336)
					gravity->zpp_inner->outer = null();
					HX_STACK_LINE(336)
					gravity->zpp_inner = null();
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(336)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							if (((o->outer != null()))){
								HX_STACK_LINE(336)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(336)
								o->outer = null();
							}
							HX_STACK_LINE(336)
							o->_isimmutable = null();
							HX_STACK_LINE(336)
							o->_validate = null();
							HX_STACK_LINE(336)
							o->_invalidate = null();
						}
						HX_STACK_LINE(336)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(336)
				true;
			}
			else{
				HX_STACK_LINE(336)
				false;
			}
			HX_STACK_LINE(336)
			ret;
		}
	}
	HX_STACK_LINE(339)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_gravity,return )

::String FluidProperties_obj::toString( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","toString",0x82e300d3,"nape.phys.FluidProperties.toString","nape/phys/FluidProperties.hx",344,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	::String _g = ::Std_obj::string(this->zpp_inner->wrap_gravity);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(345)
	::String _g1 = (((((HX_CSTRING("{ density: ") + (this->zpp_inner->density * (int)1000)) + HX_CSTRING(" viscosity: ")) + this->zpp_inner->viscosity) + HX_CSTRING(" gravity: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(345)
	return (_g1 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,toString,return )


FluidProperties_obj::FluidProperties_obj()
{
}

void FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FluidProperties);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic FluidProperties_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return get_shapes(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return get_density(); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return get_gravity(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"viscosity") ) { return get_viscosity(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_density") ) { return get_density_dyn(); }
		if (HX_FIELD_EQ(inName,"set_density") ) { return set_density_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_viscosity") ) { return get_viscosity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viscosity") ) { return set_viscosity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return set_density(inValue); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return set_gravity(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viscosity") ) { return set_viscosity(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("viscosity"));
	outFields->push(HX_CSTRING("gravity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(FluidProperties_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_density"),
	HX_CSTRING("set_density"),
	HX_CSTRING("get_viscosity"),
	HX_CSTRING("set_viscosity"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

#endif

Class FluidProperties_obj::__mClass;

void FluidProperties_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.FluidProperties"), hx::TCanCast< FluidProperties_obj> ,sStaticFields,sMemberFields,
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

void FluidProperties_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
