#include <hxcpp.h>

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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_FluidProperties_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","new",0x991565af,"zpp_nape.phys.ZPP_FluidProperties.new","zpp_nape/phys/FluidProperties.hx",174,0x45ff3bfc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(303)
	this->wrap_gravity = null();
	HX_STACK_LINE(302)
	this->gravityy = 0.0;
	HX_STACK_LINE(301)
	this->gravityx = 0.0;
	HX_STACK_LINE(300)
	this->density = 0.0;
	HX_STACK_LINE(299)
	this->viscosity = 0.0;
	HX_STACK_LINE(235)
	this->wrap_shapes = null();
	HX_STACK_LINE(234)
	this->shapes = null();
	HX_STACK_LINE(201)
	this->outer = null();
	HX_STACK_LINE(200)
	this->userData = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		this->shapes = _g;
	}
	HX_STACK_LINE(276)
	Float _g1 = this->viscosity = (int)1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(276)
	this->density = _g1;
	HX_STACK_LINE(277)
	this->wrap_gravity = null();
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(279)
		this->gravityx = (int)0;
		HX_STACK_LINE(280)
		this->gravityy = (int)0;
		HX_STACK_LINE(289)
		{
		}
	}
}
;
	return null();
}

//ZPP_FluidProperties_obj::~ZPP_FluidProperties_obj() { }

Dynamic ZPP_FluidProperties_obj::__CreateEmpty() { return  new ZPP_FluidProperties_obj; }
hx::ObjectPtr< ZPP_FluidProperties_obj > ZPP_FluidProperties_obj::__new()
{  hx::ObjectPtr< ZPP_FluidProperties_obj > result = new ZPP_FluidProperties_obj();
	result->__construct();
	return result;}

Dynamic ZPP_FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_FluidProperties_obj > result = new ZPP_FluidProperties_obj();
	result->__construct();
	return result;}

::nape::phys::FluidProperties ZPP_FluidProperties_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","wrapper",0xcbbcbe22,"zpp_nape.phys.ZPP_FluidProperties.wrapper","zpp_nape/phys/FluidProperties.hx",202,0x45ff3bfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	if (((this->outer == null()))){
		HX_STACK_LINE(204)
		::nape::phys::FluidProperties _g = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		this->outer = _g;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::zpp_nape::phys::ZPP_FluidProperties o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			o->next = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(217)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,wrapper,return )

Void ZPP_FluidProperties_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","free",0x5463ac7d,"zpp_nape.phys.ZPP_FluidProperties.free","zpp_nape/phys/FluidProperties.hx",229,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,free,(void))

Void ZPP_FluidProperties_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","alloc",0x9de06b84,"zpp_nape.phys.ZPP_FluidProperties.alloc","zpp_nape/phys/FluidProperties.hx",233,0x45ff3bfc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,alloc,(void))

Void ZPP_FluidProperties_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","feature_cons",0xf0fe182b,"zpp_nape.phys.ZPP_FluidProperties.feature_cons","zpp_nape/phys/FluidProperties.hx",238,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->shapes = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,feature_cons,(void))

Void ZPP_FluidProperties_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","addShape",0xc40dd591,"zpp_nape.phys.ZPP_FluidProperties.addShape","zpp_nape/phys/FluidProperties.hx",244,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(244)
		this->shapes->add(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,addShape,(void))

Void ZPP_FluidProperties_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","remShape",0x53331fb8,"zpp_nape.phys.ZPP_FluidProperties.remShape","zpp_nape/phys/FluidProperties.hx",249,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(249)
		this->shapes->remove(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,remShape,(void))

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","copy",0x5265cb86,"zpp_nape.phys.ZPP_FluidProperties.copy","zpp_nape/phys/FluidProperties.hx",251,0x45ff3bfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_FluidProperties ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		if (((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool == null()))){
			HX_STACK_LINE(255)
			::zpp_nape::phys::ZPP_FluidProperties _g = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			ret = _g;
		}
		else{
			HX_STACK_LINE(261)
			ret = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = ret->next;
			HX_STACK_LINE(263)
			ret->next = null();
		}
		HX_STACK_LINE(268)
		Dynamic();
	}
	HX_STACK_LINE(270)
	ret->viscosity = this->viscosity;
	HX_STACK_LINE(271)
	ret->density = this->density;
	HX_STACK_LINE(272)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,copy,return )

Void ZPP_FluidProperties_obj::gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","gravity_invalidate",0xa5ad5a9d,"zpp_nape.phys.ZPP_FluidProperties.gravity_invalidate","zpp_nape/phys/FluidProperties.hx",304,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(306)
			this->gravityx = x->x;
			HX_STACK_LINE(307)
			this->gravityy = x->y;
			HX_STACK_LINE(316)
			{
			}
		}
		HX_STACK_LINE(325)
		this->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,gravity_invalidate,(void))

Void ZPP_FluidProperties_obj::gravity_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","gravity_validate",0x2a6f2538,"zpp_nape.phys.ZPP_FluidProperties.gravity_validate","zpp_nape/phys/FluidProperties.hx",328,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		this->wrap_gravity->zpp_inner->x = this->gravityx;
		HX_STACK_LINE(330)
		this->wrap_gravity->zpp_inner->y = this->gravityy;
		HX_STACK_LINE(339)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,gravity_validate,(void))

Void ZPP_FluidProperties_obj::getgravity( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","getgravity",0x6e6c0f09,"zpp_nape.phys.ZPP_FluidProperties.getgravity","zpp_nape/phys/FluidProperties.hx",349,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			Float x = this->gravityx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(350)
			Float y = this->gravityy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(350)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(350)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(350)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(350)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(350)
				ret = _g;
			}
			else{
				HX_STACK_LINE(350)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(350)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(350)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(350)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(350)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(350)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(350)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(350)
							ret1->next = null();
						}
						HX_STACK_LINE(350)
						ret1->weak = false;
					}
					HX_STACK_LINE(350)
					ret1->_immutable = immutable;
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						ret1->x = x;
						HX_STACK_LINE(350)
						ret1->y = y;
						HX_STACK_LINE(350)
						{
						}
					}
					HX_STACK_LINE(350)
					_g2 = ret1;
				}
				HX_STACK_LINE(350)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(350)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(350)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(350)
							_this->_validate();
						}
					}
					HX_STACK_LINE(350)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/FluidProperties.hx",350,0x45ff3bfc)
						{
							HX_STACK_LINE(350)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(350)
							{
								HX_STACK_LINE(350)
								{
									HX_STACK_LINE(350)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(350)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(350)
										_this->_validate();
									}
								}
								HX_STACK_LINE(350)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(350)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(350)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(350)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(350)
						{
						}
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(350)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(350)
				ret;
			}
			HX_STACK_LINE(350)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(350)
			_g5 = ret;
		}
		HX_STACK_LINE(350)
		this->wrap_gravity = _g5;
		HX_STACK_LINE(351)
		this->wrap_gravity->zpp_inner->_inuse = true;
		HX_STACK_LINE(352)
		this->wrap_gravity->zpp_inner->_invalidate = this->gravity_invalidate_dyn();
		HX_STACK_LINE(353)
		this->wrap_gravity->zpp_inner->_validate = this->gravity_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,getgravity,(void))

Void ZPP_FluidProperties_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","invalidate",0xfb865c0c,"zpp_nape.phys.ZPP_FluidProperties.invalidate","zpp_nape/phys/FluidProperties.hx",356,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(358)
		while((true)){
			HX_STACK_LINE(358)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(358)
				break;
			}
			HX_STACK_LINE(359)
			::zpp_nape::shape::ZPP_Shape shape = cx_ite->elt;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(360)
			shape->invalidate_fluidprops();
			HX_STACK_LINE(361)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,invalidate,(void))

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::zpp_pool;


ZPP_FluidProperties_obj::ZPP_FluidProperties_obj()
{
}

void ZPP_FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_FluidProperties);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(viscosity,"viscosity");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(gravityx,"gravityx");
	HX_MARK_MEMBER_NAME(gravityy,"gravityy");
	HX_MARK_MEMBER_NAME(wrap_gravity,"wrap_gravity");
	HX_MARK_END_CLASS();
}

void ZPP_FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(viscosity,"viscosity");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(gravityx,"gravityx");
	HX_VISIT_MEMBER_NAME(gravityy,"gravityy");
	HX_VISIT_MEMBER_NAME(wrap_gravity,"wrap_gravity");
}

Dynamic ZPP_FluidProperties_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		if (HX_FIELD_EQ(inName,"gravityx") ) { return gravityx; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { return gravityy; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { return viscosity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getgravity") ) { return getgravity_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { return wrap_gravity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gravity_validate") ) { return gravity_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gravity_invalidate") ) { return gravity_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::FluidProperties >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityx") ) { gravityx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { gravityy=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { viscosity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { wrap_gravity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("viscosity"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("gravityx"));
	outFields->push(HX_CSTRING("gravityy"));
	outFields->push(HX_CSTRING("wrap_gravity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(ZPP_FluidProperties_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_FluidProperties_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::nape::phys::FluidProperties*/ ,(int)offsetof(ZPP_FluidProperties_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_FluidProperties_obj,shapes),HX_CSTRING("shapes")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_FluidProperties_obj,wrap_shapes),HX_CSTRING("wrap_shapes")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,viscosity),HX_CSTRING("viscosity")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,density),HX_CSTRING("density")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,gravityx),HX_CSTRING("gravityx")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,gravityy),HX_CSTRING("gravityy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_FluidProperties_obj,wrap_gravity),HX_CSTRING("wrap_gravity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("userData"),
	HX_CSTRING("outer"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("shapes"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("feature_cons"),
	HX_CSTRING("addShape"),
	HX_CSTRING("remShape"),
	HX_CSTRING("copy"),
	HX_CSTRING("viscosity"),
	HX_CSTRING("density"),
	HX_CSTRING("gravityx"),
	HX_CSTRING("gravityy"),
	HX_CSTRING("wrap_gravity"),
	HX_CSTRING("gravity_invalidate"),
	HX_CSTRING("gravity_validate"),
	HX_CSTRING("getgravity"),
	HX_CSTRING("invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_FluidProperties_obj::__mClass;

void ZPP_FluidProperties_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_FluidProperties"), hx::TCanCast< ZPP_FluidProperties_obj> ,sStaticFields,sMemberFields,
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

void ZPP_FluidProperties_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace phys
