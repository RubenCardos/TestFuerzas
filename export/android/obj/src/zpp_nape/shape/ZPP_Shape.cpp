#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Shape_obj::__construct(int type)
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","new",0xc06ffa20,"zpp_nape.shape.ZPP_Shape.new","zpp_nape/shape/Shape.hx",174,0xb83747cd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(231)
	this->zip_aabb = false;
	HX_STACK_LINE(230)
	this->aabb = null();
	HX_STACK_LINE(225)
	this->pairs = null();
	HX_STACK_LINE(224)
	this->node = null();
	HX_STACK_LINE(223)
	this->sweep = null();
	HX_STACK_LINE(222)
	this->sensorEnabled = false;
	HX_STACK_LINE(221)
	this->fluidEnabled = false;
	HX_STACK_LINE(220)
	this->fluidProperties = null();
	HX_STACK_LINE(219)
	this->filter = null();
	HX_STACK_LINE(218)
	this->material = null();
	HX_STACK_LINE(217)
	this->refmaterial = null();
	HX_STACK_LINE(216)
	this->polygon = null();
	HX_STACK_LINE(215)
	this->circle = null();
	HX_STACK_LINE(202)
	this->sweepCoef = 0.0;
	HX_STACK_LINE(201)
	this->zip_sweepRadius = false;
	HX_STACK_LINE(200)
	this->sweepRadius = 0.0;
	HX_STACK_LINE(199)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(198)
	this->wrap_localCOM = null();
	HX_STACK_LINE(197)
	this->zip_worldCOM = false;
	HX_STACK_LINE(196)
	this->worldCOMy = 0.0;
	HX_STACK_LINE(195)
	this->worldCOMx = 0.0;
	HX_STACK_LINE(194)
	this->zip_localCOM = false;
	HX_STACK_LINE(193)
	this->localCOMy = 0.0;
	HX_STACK_LINE(192)
	this->localCOMx = 0.0;
	HX_STACK_LINE(191)
	this->zip_angDrag = false;
	HX_STACK_LINE(190)
	this->angDrag = 0.0;
	HX_STACK_LINE(189)
	this->inertia = 0.0;
	HX_STACK_LINE(188)
	this->zip_area_inertia = false;
	HX_STACK_LINE(187)
	this->area = 0.0;
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->body = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(392)
	super::__construct();
	HX_STACK_LINE(393)
	::zpp_nape::util::ZNPList_ZPP_AABBPair _g = ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(393)
	this->pairs = _g;
	HX_STACK_LINE(394)
	this->ishape = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(395)
	this->type = type;
	HX_STACK_LINE(396)
	::zpp_nape::geom::ZPP_AABB _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(396)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_AABB _g1 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(396)
				ret = _g1;
			}
			else{
				HX_STACK_LINE(396)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(396)
				ret->next = null();
			}
			HX_STACK_LINE(396)
			Dynamic();
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			ret->minx = (int)0;
			HX_STACK_LINE(396)
			ret->miny = (int)0;
			HX_STACK_LINE(396)
			{
			}
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			ret->maxx = (int)0;
			HX_STACK_LINE(396)
			ret->maxy = (int)0;
			HX_STACK_LINE(396)
			{
			}
		}
		HX_STACK_LINE(396)
		_g2 = ret;
	}
	HX_STACK_LINE(396)
	this->aabb = _g2;
	HX_STACK_LINE(397)
	this->aabb->_immutable = true;
	HX_STACK_LINE(398)
	::zpp_nape::shape::ZPP_Shape me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(399)
	this->aabb->_validate = this->aabb_validate_dyn();
	HX_STACK_LINE(400)
	bool _g3 = this->zip_sweepRadius = true;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(400)
	bool _g4 = this->zip_localCOM = _g3;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(400)
	bool _g5 = this->zip_angDrag = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(400)
	this->zip_area_inertia = _g5;
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		this->localCOMx = (int)0;
		HX_STACK_LINE(403)
		this->localCOMy = (int)0;
		HX_STACK_LINE(412)
		{
		}
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(422)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(423)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(432)
		{
		}
	}
	HX_STACK_LINE(441)
	this->fluidEnabled = false;
	HX_STACK_LINE(442)
	this->sensorEnabled = false;
	HX_STACK_LINE(443)
	this->fluidProperties = null();
	HX_STACK_LINE(444)
	this->body = null();
	HX_STACK_LINE(445)
	::zpp_nape::phys::ZPP_Material _g6 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(445)
	this->refmaterial = _g6;
	HX_STACK_LINE(446)
	Float _g7 = this->sweepCoef = (int)0;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(446)
	this->sweepRadius = _g7;
}
;
	return null();
}

//ZPP_Shape_obj::~ZPP_Shape_obj() { }

Dynamic ZPP_Shape_obj::__CreateEmpty() { return  new ZPP_Shape_obj; }
hx::ObjectPtr< ZPP_Shape_obj > ZPP_Shape_obj::__new(int type)
{  hx::ObjectPtr< ZPP_Shape_obj > result = new ZPP_Shape_obj();
	result->__construct(type);
	return result;}

Dynamic ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Shape_obj > result = new ZPP_Shape_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ZPP_Shape_obj::isCircle( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","isCircle",0x6f2b8bda,"zpp_nape.shape.ZPP_Shape.isCircle","zpp_nape/shape/Shape.hx",181,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isCircle,return )

bool ZPP_Shape_obj::isPolygon( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","isPolygon",0xf3c97970,"zpp_nape.shape.ZPP_Shape.isPolygon","zpp_nape/shape/Shape.hx",185,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isPolygon,return )

Void ZPP_Shape_obj::invalidate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_sweepRadius",0xa6cb159a,"zpp_nape.shape.ZPP_Shape.invalidate_sweepRadius","zpp_nape/shape/Shape.hx",206,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->zip_sweepRadius = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_sweepRadius,(void))

Void ZPP_Shape_obj::validate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_sweepRadius",0x4c647935,"zpp_nape.shape.ZPP_Shape.validate_sweepRadius","zpp_nape/shape/Shape.hx",209,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		if ((this->zip_sweepRadius)){
			HX_STACK_LINE(210)
			this->zip_sweepRadius = false;
			HX_STACK_LINE(211)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(211)
				this->circle->__validate_sweepRadius();
			}
			else{
				HX_STACK_LINE(212)
				this->polygon->__validate_sweepRadius();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_sweepRadius,(void))

Void ZPP_Shape_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","clear",0x67258b4d,"zpp_nape.shape.ZPP_Shape.clear","zpp_nape/shape/Shape.hx",227,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(227)
			this->circle->__clear();
		}
		else{
			HX_STACK_LINE(228)
			this->polygon->__clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,clear,(void))

Void ZPP_Shape_obj::validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_aabb",0x4d64e7e9,"zpp_nape.shape.ZPP_Shape.validate_aabb","zpp_nape/shape/Shape.hx",235,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		if ((this->zip_aabb)){
			HX_STACK_LINE(236)
			if (((this->body != null()))){
				HX_STACK_LINE(237)
				this->zip_aabb = false;
				HX_STACK_LINE(238)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(238)
					::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(238)
						if (((_this->body != null()))){
							HX_STACK_LINE(238)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(238)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(238)
								_this->zip_localCOM = false;
								HX_STACK_LINE(238)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(238)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(238)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(238)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(238)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(238)
										Dynamic();
									}
									else{
										HX_STACK_LINE(238)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(238)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(238)
												{
												}
											}
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(238)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(238)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(238)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(238)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(238)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(238)
												{
												}
											}
											HX_STACK_LINE(238)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(238)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(238)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(238)
												while((true)){
													HX_STACK_LINE(238)
													if ((!(((cx_ite != null()))))){
														HX_STACK_LINE(238)
														break;
													}
													HX_STACK_LINE(238)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(238)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(238)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(238)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(238)
													u = v;
													HX_STACK_LINE(238)
													v = w;
													HX_STACK_LINE(238)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(238)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(238)
												{
													HX_STACK_LINE(238)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(238)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(238)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(238)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(238)
												u = v;
												HX_STACK_LINE(238)
												v = w;
												HX_STACK_LINE(238)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(238)
												{
													HX_STACK_LINE(238)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(238)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(238)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(238)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(238)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(238)
											{
												HX_STACK_LINE(238)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(238)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(238)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(238)
								if (((_this->wrap_localCOM != null()))){
									HX_STACK_LINE(238)
									_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
									HX_STACK_LINE(238)
									_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
									HX_STACK_LINE(238)
									{
									}
								}
							}
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(238)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(238)
									_this1->zip_axis = false;
									HX_STACK_LINE(238)
									{
										HX_STACK_LINE(238)
										Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(238)
										_this1->axisx = _g;
										HX_STACK_LINE(238)
										Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(238)
										_this1->axisy = _g1;
										HX_STACK_LINE(238)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(238)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(238)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(238)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(238)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(238)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(239)
					::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(239)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(239)
						if (((_this->body != null()))){
							HX_STACK_LINE(239)
							_this->zip_gverts = false;
							HX_STACK_LINE(239)
							_this->validate_lverts();
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(239)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(239)
									_this1->zip_axis = false;
									HX_STACK_LINE(239)
									{
										HX_STACK_LINE(239)
										Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(239)
										_this1->axisx = _g2;
										HX_STACK_LINE(239)
										Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(239)
										_this1->axisy = _g3;
										HX_STACK_LINE(239)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(239)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(239)
								while((true)){
									HX_STACK_LINE(239)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(239)
										break;
									}
									HX_STACK_LINE(239)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(239)
									{
										HX_STACK_LINE(239)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(239)
										li = li->next;
										HX_STACK_LINE(239)
										{
											HX_STACK_LINE(239)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(239)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(239)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(239)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(239)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(239)
						{
						}
					}
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(239)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(239)
						{
						}
					}
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(239)
						while((true)){
							HX_STACK_LINE(239)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(239)
								break;
							}
							HX_STACK_LINE(239)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(239)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(239)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(239)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(239)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(239)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(239)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(239)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(239)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_aabb,(void))

Void ZPP_Shape_obj::force_validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","force_validate_aabb",0xe23cbf55,"zpp_nape.shape.ZPP_Shape.force_validate_aabb","zpp_nape/shape/Shape.hx",246,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(246)
			::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
				HX_STACK_LINE(246)
				_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
			}
			HX_STACK_LINE(246)
			_this->aabb->minx = (_this->worldCOMx - _this->radius);
			HX_STACK_LINE(246)
			_this->aabb->miny = (_this->worldCOMy - _this->radius);
			HX_STACK_LINE(246)
			_this->aabb->maxx = (_this->worldCOMx + _this->radius);
			HX_STACK_LINE(246)
			_this->aabb->maxy = (_this->worldCOMy + _this->radius);
		}
		else{
			HX_STACK_LINE(247)
			::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(247)
			li = li->next;
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				p0->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
				HX_STACK_LINE(247)
				p0->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				_this->aabb->minx = p0->x;
				HX_STACK_LINE(247)
				_this->aabb->miny = p0->y;
				HX_STACK_LINE(247)
				{
				}
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				_this->aabb->maxx = p0->x;
				HX_STACK_LINE(247)
				_this->aabb->maxy = p0->y;
				HX_STACK_LINE(247)
				{
				}
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(247)
				while((true)){
					HX_STACK_LINE(247)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(247)
						break;
					}
					HX_STACK_LINE(247)
					::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::geom::ZPP_Vec2 l1 = li;		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(247)
						li = li->next;
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							p->x = (_this->body->posx + (((_this->body->axisy * l1->x) - (_this->body->axisx * l1->y))));
							HX_STACK_LINE(247)
							p->y = (_this->body->posy + (((l1->x * _this->body->axisx) + (l1->y * _this->body->axisy))));
						}
						HX_STACK_LINE(247)
						if (((p->x < _this->aabb->minx))){
							HX_STACK_LINE(247)
							_this->aabb->minx = p->x;
						}
						HX_STACK_LINE(247)
						if (((p->x > _this->aabb->maxx))){
							HX_STACK_LINE(247)
							_this->aabb->maxx = p->x;
						}
						HX_STACK_LINE(247)
						if (((p->y < _this->aabb->miny))){
							HX_STACK_LINE(247)
							_this->aabb->miny = p->y;
						}
						HX_STACK_LINE(247)
						if (((p->y > _this->aabb->maxy))){
							HX_STACK_LINE(247)
							_this->aabb->maxy = p->y;
						}
					}
					HX_STACK_LINE(247)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,force_validate_aabb,(void))

Void ZPP_Shape_obj::invalidate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_aabb",0xec8d30e4,"zpp_nape.shape.ZPP_Shape.invalidate_aabb","zpp_nape/shape/Shape.hx",251,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		this->zip_aabb = true;
		HX_STACK_LINE(253)
		if (((this->body != null()))){
			HX_STACK_LINE(253)
			this->body->zip_aabb = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_aabb,(void))

Void ZPP_Shape_obj::validate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_area_inertia",0xd802a151,"zpp_nape.shape.ZPP_Shape.validate_area_inertia","zpp_nape/shape/Shape.hx",256,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		if ((this->zip_area_inertia)){
			HX_STACK_LINE(257)
			this->zip_area_inertia = false;
			HX_STACK_LINE(258)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(258)
				this->circle->__validate_area_inertia();
			}
			else{
				HX_STACK_LINE(259)
				this->polygon->__validate_area_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_area_inertia,(void))

Void ZPP_Shape_obj::validate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_angDrag",0x738f3645,"zpp_nape.shape.ZPP_Shape.validate_angDrag","zpp_nape/shape/Shape.hx",263,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		if (((bool(this->zip_angDrag) || bool((this->refmaterial->dynamicFriction != this->material->dynamicFriction))))){
			HX_STACK_LINE(264)
			this->zip_angDrag = false;
			HX_STACK_LINE(265)
			this->refmaterial->dynamicFriction = this->material->dynamicFriction;
			HX_STACK_LINE(266)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(266)
				this->circle->__validate_angDrag();
			}
			else{
				HX_STACK_LINE(267)
				this->polygon->__validate_angDrag();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_angDrag,(void))

Void ZPP_Shape_obj::validate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_localCOM",0x5da3e55f,"zpp_nape.shape.ZPP_Shape.validate_localCOM","zpp_nape/shape/Shape.hx",273,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(274)
			this->zip_localCOM = false;
			HX_STACK_LINE(275)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
				HX_STACK_LINE(275)
				::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(275)
				if (((_this->lverts->next->next == null()))){
					HX_STACK_LINE(275)
					_this->localCOMx = _this->lverts->next->x;
					HX_STACK_LINE(275)
					_this->localCOMy = _this->lverts->next->y;
					HX_STACK_LINE(275)
					Dynamic();
				}
				else{
					HX_STACK_LINE(275)
					if (((_this->lverts->next->next->next == null()))){
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(275)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(275)
							{
							}
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = 1.0;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
							HX_STACK_LINE(275)
							hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMy,t);
						}
					}
					else{
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							_this->localCOMx = (int)0;
							HX_STACK_LINE(275)
							_this->localCOMy = (int)0;
							HX_STACK_LINE(275)
							{
							}
						}
						HX_STACK_LINE(275)
						Float area = 0.0;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							while((true)){
								HX_STACK_LINE(275)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(275)
									break;
								}
								HX_STACK_LINE(275)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(275)
								{
									HX_STACK_LINE(275)
									hx::AddEq(area,(v->x * ((w->y - u->y))));
									HX_STACK_LINE(275)
									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(275)
									hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
									HX_STACK_LINE(275)
									hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
								}
								HX_STACK_LINE(275)
								u = v;
								HX_STACK_LINE(275)
								v = w;
								HX_STACK_LINE(275)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(275)
							cx_ite = _this->lverts->next;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								hx::AddEq(area,(v->x * ((w->y - u->y))));
								HX_STACK_LINE(275)
								Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
							}
							HX_STACK_LINE(275)
							u = v;
							HX_STACK_LINE(275)
							v = w;
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								hx::AddEq(area,(v->x * ((w1->y - u->y))));
								HX_STACK_LINE(275)
								Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
							}
						}
						HX_STACK_LINE(275)
						area = (Float((int)1) / Float((((int)3 * area))));
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = area;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMy,t);
						}
					}
				}
			}
			HX_STACK_LINE(276)
			if (((this->wrap_localCOM != null()))){
				HX_STACK_LINE(277)
				this->wrap_localCOM->zpp_inner->x = this->localCOMx;
				HX_STACK_LINE(278)
				this->wrap_localCOM->zpp_inner->y = this->localCOMy;
				HX_STACK_LINE(287)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_localCOM,(void))

Void ZPP_Shape_obj::validate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_worldCOM",0x2247e2d8,"zpp_nape.shape.ZPP_Shape.validate_worldCOM","zpp_nape/shape/Shape.hx",301,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(302)
			if (((this->body != null()))){
				HX_STACK_LINE(303)
				this->zip_worldCOM = false;
				HX_STACK_LINE(304)
				if ((this->zip_localCOM)){
					HX_STACK_LINE(304)
					this->zip_localCOM = false;
					HX_STACK_LINE(304)
					if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(304)
						::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(304)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(304)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(304)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(304)
							Dynamic();
						}
						else{
							HX_STACK_LINE(304)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(304)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(304)
									{
									}
								}
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(304)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(304)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(304)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(304)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(304)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(304)
									{
									}
								}
								HX_STACK_LINE(304)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(304)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(304)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(304)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(304)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(304)
									while((true)){
										HX_STACK_LINE(304)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(304)
											break;
										}
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(304)
										{
											HX_STACK_LINE(304)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(304)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(304)
										u = v;
										HX_STACK_LINE(304)
										v = w;
										HX_STACK_LINE(304)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(304)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(304)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(304)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(304)
									u = v;
									HX_STACK_LINE(304)
									v = w;
									HX_STACK_LINE(304)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(304)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(304)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(304)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(304)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(304)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(304)
					if (((this->wrap_localCOM != null()))){
						HX_STACK_LINE(304)
						this->wrap_localCOM->zpp_inner->x = this->localCOMx;
						HX_STACK_LINE(304)
						this->wrap_localCOM->zpp_inner->y = this->localCOMy;
						HX_STACK_LINE(304)
						{
						}
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if ((_this->zip_axis)){
						HX_STACK_LINE(305)
						_this->zip_axis = false;
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(305)
							_this->axisx = _g;
							HX_STACK_LINE(305)
							Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(305)
							_this->axisy = _g1;
							HX_STACK_LINE(305)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(307)
					this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
					HX_STACK_LINE(308)
					this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_worldCOM,(void))

Void ZPP_Shape_obj::getworldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","getworldCOM",0x0bc1b565,"zpp_nape.shape.ZPP_Shape.getworldCOM","zpp_nape/shape/Shape.hx",313,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(317)
			if (((this->body != null()))){
				HX_STACK_LINE(317)
				this->zip_worldCOM = false;
				HX_STACK_LINE(317)
				if ((this->zip_localCOM)){
					HX_STACK_LINE(317)
					this->zip_localCOM = false;
					HX_STACK_LINE(317)
					if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(317)
						::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(317)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(317)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(317)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(317)
							Dynamic();
						}
						else{
							HX_STACK_LINE(317)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(317)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(317)
									{
									}
								}
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(317)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(317)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(317)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(317)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(317)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(317)
									{
									}
								}
								HX_STACK_LINE(317)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(317)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(317)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(317)
									while((true)){
										HX_STACK_LINE(317)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(317)
											break;
										}
										HX_STACK_LINE(317)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(317)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(317)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(317)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(317)
										u = v;
										HX_STACK_LINE(317)
										v = w;
										HX_STACK_LINE(317)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(317)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(317)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(317)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(317)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(317)
									u = v;
									HX_STACK_LINE(317)
									v = w;
									HX_STACK_LINE(317)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(317)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(317)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(317)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(317)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(317)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(317)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(317)
					if (((this->wrap_localCOM != null()))){
						HX_STACK_LINE(317)
						this->wrap_localCOM->zpp_inner->x = this->localCOMx;
						HX_STACK_LINE(317)
						this->wrap_localCOM->zpp_inner->y = this->localCOMy;
						HX_STACK_LINE(317)
						{
						}
					}
				}
				HX_STACK_LINE(317)
				{
					HX_STACK_LINE(317)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(317)
					if ((_this->zip_axis)){
						HX_STACK_LINE(317)
						_this->zip_axis = false;
						HX_STACK_LINE(317)
						{
							HX_STACK_LINE(317)
							Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(317)
							_this->axisx = _g;
							HX_STACK_LINE(317)
							Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(317)
							_this->axisy = _g1;
							HX_STACK_LINE(317)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(317)
				{
					HX_STACK_LINE(317)
					this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
					HX_STACK_LINE(317)
					this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
				}
			}
		}
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			this->wrap_worldCOM->zpp_inner->x = this->worldCOMx;
			HX_STACK_LINE(320)
			this->wrap_worldCOM->zpp_inner->y = this->worldCOMy;
			HX_STACK_LINE(329)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,getworldCOM,(void))

Void ZPP_Shape_obj::invalidate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_area_inertia",0x9764dd4c,"zpp_nape.shape.ZPP_Shape.invalidate_area_inertia","zpp_nape/shape/Shape.hx",339,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		this->zip_area_inertia = true;
		HX_STACK_LINE(341)
		if (((this->body != null()))){
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(342)
				_this->zip_localCOM = true;
				HX_STACK_LINE(342)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(343)
			this->body->invalidate_mass();
			HX_STACK_LINE(344)
			this->body->invalidate_inertia();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_area_inertia,(void))

Void ZPP_Shape_obj::invalidate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_angDrag",0xfaac7c2a,"zpp_nape.shape.ZPP_Shape.invalidate_angDrag","zpp_nape/shape/Shape.hx",348,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		this->zip_angDrag = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_angDrag,(void))

Void ZPP_Shape_obj::invalidate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_localCOM",0x1023c7da,"zpp_nape.shape.ZPP_Shape.invalidate_localCOM","zpp_nape/shape/Shape.hx",350,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		this->zip_localCOM = true;
		HX_STACK_LINE(352)
		this->invalidate_area_inertia();
		HX_STACK_LINE(353)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(353)
			this->zip_sweepRadius = true;
		}
		HX_STACK_LINE(354)
		this->invalidate_angDrag();
		HX_STACK_LINE(355)
		this->invalidate_worldCOM();
		HX_STACK_LINE(356)
		if (((this->body != null()))){
			HX_STACK_LINE(356)
			::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(356)
			_this->zip_localCOM = true;
			HX_STACK_LINE(356)
			_this->zip_worldCOM = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_localCOM,(void))

Void ZPP_Shape_obj::invalidate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_worldCOM",0xd4c7c553,"zpp_nape.shape.ZPP_Shape.invalidate_worldCOM","zpp_nape/shape/Shape.hx",358,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		this->zip_worldCOM = true;
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			this->zip_aabb = true;
			HX_STACK_LINE(360)
			if (((this->body != null()))){
				HX_STACK_LINE(360)
				this->body->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_worldCOM,(void))

Void ZPP_Shape_obj::invalidate_material( int flags){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_material",0x20e95ceb,"zpp_nape.shape.ZPP_Shape.invalidate_material","zpp_nape/shape/Shape.hx",362,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(363)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::WAKE))) != (int)0))){
			HX_STACK_LINE(363)
			this->wake();
		}
		HX_STACK_LINE(364)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS))) != (int)0))){
			HX_STACK_LINE(365)
			if (((this->body != null()))){
				HX_STACK_LINE(365)
				this->body->refreshArbiters();
			}
		}
		HX_STACK_LINE(367)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::PROPS))) != (int)0))){
			HX_STACK_LINE(368)
			if (((this->body != null()))){
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(369)
					_this->zip_localCOM = true;
					HX_STACK_LINE(369)
					_this->zip_worldCOM = true;
				}
				HX_STACK_LINE(370)
				this->body->invalidate_mass();
				HX_STACK_LINE(371)
				this->body->invalidate_inertia();
			}
		}
		HX_STACK_LINE(374)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::ANGDRAG))) != (int)0))){
			HX_STACK_LINE(375)
			this->invalidate_angDrag();
		}
		HX_STACK_LINE(377)
		this->refmaterial->set(this->material);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,invalidate_material,(void))

Void ZPP_Shape_obj::invalidate_filter( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_filter",0xb08dc6fc,"zpp_nape.shape.ZPP_Shape.invalidate_filter","zpp_nape/shape/Shape.hx",380,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_filter,(void))

Void ZPP_Shape_obj::invalidate_fluidprops( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_fluidprops",0x5b97826a,"zpp_nape.shape.ZPP_Shape.invalidate_fluidprops","zpp_nape/shape/Shape.hx",383,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		if ((this->fluidEnabled)){
			HX_STACK_LINE(383)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_fluidprops,(void))

Void ZPP_Shape_obj::aabb_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","aabb_validate",0x56b2ab15,"zpp_nape.shape.ZPP_Shape.aabb_validate","zpp_nape/shape/Shape.hx",389,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		if ((this->zip_aabb)){
			HX_STACK_LINE(389)
			if (((this->body != null()))){
				HX_STACK_LINE(389)
				this->zip_aabb = false;
				HX_STACK_LINE(389)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(389)
					::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(389)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(389)
						if (((_this->body != null()))){
							HX_STACK_LINE(389)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(389)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(389)
								_this->zip_localCOM = false;
								HX_STACK_LINE(389)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(389)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(389)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(389)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(389)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(389)
										Dynamic();
									}
									else{
										HX_STACK_LINE(389)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(389)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(389)
												{
												}
											}
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(389)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(389)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(389)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(389)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(389)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(389)
												{
												}
											}
											HX_STACK_LINE(389)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(389)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(389)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(389)
												while((true)){
													HX_STACK_LINE(389)
													if ((!(((cx_ite != null()))))){
														HX_STACK_LINE(389)
														break;
													}
													HX_STACK_LINE(389)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(389)
													{
														HX_STACK_LINE(389)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(389)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(389)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(389)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(389)
													u = v;
													HX_STACK_LINE(389)
													v = w;
													HX_STACK_LINE(389)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(389)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(389)
												{
													HX_STACK_LINE(389)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(389)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(389)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(389)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(389)
												u = v;
												HX_STACK_LINE(389)
												v = w;
												HX_STACK_LINE(389)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(389)
												{
													HX_STACK_LINE(389)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(389)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(389)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(389)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(389)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(389)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(389)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(389)
								if (((_this->wrap_localCOM != null()))){
									HX_STACK_LINE(389)
									_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
									HX_STACK_LINE(389)
									_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
									HX_STACK_LINE(389)
									{
									}
								}
							}
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(389)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(389)
									_this1->zip_axis = false;
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(389)
										_this1->axisx = _g;
										HX_STACK_LINE(389)
										Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(389)
										_this1->axisy = _g1;
										HX_STACK_LINE(389)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(389)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(389)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(389)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(389)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(389)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(389)
					::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(389)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(389)
						if (((_this->body != null()))){
							HX_STACK_LINE(389)
							_this->zip_gverts = false;
							HX_STACK_LINE(389)
							_this->validate_lverts();
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(389)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(389)
									_this1->zip_axis = false;
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(389)
										_this1->axisx = _g2;
										HX_STACK_LINE(389)
										Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(389)
										_this1->axisy = _g3;
										HX_STACK_LINE(389)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(389)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(389)
								while((true)){
									HX_STACK_LINE(389)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(389)
										break;
									}
									HX_STACK_LINE(389)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(389)
										li = li->next;
										HX_STACK_LINE(389)
										{
											HX_STACK_LINE(389)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(389)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(389)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(389)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(389)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(389)
						{
						}
					}
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(389)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(389)
						{
						}
					}
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(389)
						while((true)){
							HX_STACK_LINE(389)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(389)
								break;
							}
							HX_STACK_LINE(389)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(389)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(389)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(389)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(389)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(389)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(389)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(389)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(389)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,aabb_validate,(void))

Void ZPP_Shape_obj::setMaterial( ::zpp_nape::phys::ZPP_Material material){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setMaterial",0x3c021029,"zpp_nape.shape.ZPP_Shape.setMaterial","zpp_nape/shape/Shape.hx",449,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(material,"material")
		HX_STACK_LINE(449)
		if (((this->material != material))){
			HX_STACK_LINE(450)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(451)
				if (((this->material != null()))){
					HX_STACK_LINE(451)
					this->material->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(453)
			this->material = material;
			HX_STACK_LINE(454)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(454)
				material->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(455)
			this->wake();
			HX_STACK_LINE(456)
			if (((this->body != null()))){
				HX_STACK_LINE(456)
				this->body->refreshArbiters();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setMaterial,(void))

Void ZPP_Shape_obj::setFilter( ::zpp_nape::dynamics::ZPP_InteractionFilter filter){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setFilter",0xc2168eba,"zpp_nape.shape.ZPP_Shape.setFilter","zpp_nape/shape/Shape.hx",460,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(460)
		if (((this->filter != filter))){
			HX_STACK_LINE(461)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(462)
				if (((this->filter != null()))){
					HX_STACK_LINE(462)
					this->filter->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(464)
			this->filter = filter;
			HX_STACK_LINE(465)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(465)
				filter->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(466)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFilter,(void))

Void ZPP_Shape_obj::setFluid( ::zpp_nape::phys::ZPP_FluidProperties fluid){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setFluid",0xd1844148,"zpp_nape.shape.ZPP_Shape.setFluid","zpp_nape/shape/Shape.hx",470,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fluid,"fluid")
		HX_STACK_LINE(470)
		if (((this->fluidProperties != fluid))){
			HX_STACK_LINE(471)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(472)
				if (((this->fluidProperties != null()))){
					HX_STACK_LINE(472)
					this->fluidProperties->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(474)
			this->fluidProperties = fluid;
			HX_STACK_LINE(475)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(475)
				fluid->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(476)
			if ((this->fluidEnabled)){
				HX_STACK_LINE(476)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFluid,(void))

Void ZPP_Shape_obj::__immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","__immutable_midstep",0x993ac337,"zpp_nape.shape.ZPP_Shape.__immutable_midstep","zpp_nape/shape/Shape.hx",479,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,__immutable_midstep,(void))

Void ZPP_Shape_obj::addedToBody( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","addedToBody",0xed59285d,"zpp_nape.shape.ZPP_Shape.addedToBody","zpp_nape/shape/Shape.hx",484,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(485)
		this->invalidate_worldCOM();
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			this->zip_aabb = true;
			HX_STACK_LINE(486)
			if (((this->body != null()))){
				HX_STACK_LINE(486)
				this->body->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToBody,(void))

Void ZPP_Shape_obj::removedFromBody( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","removedFromBody",0x1cc58eac,"zpp_nape.shape.ZPP_Shape.removedFromBody","zpp_nape/shape/Shape.hx",488,0xb83747cd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromBody,(void))

Void ZPP_Shape_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","addedToSpace",0x8b20e2ab,"zpp_nape.shape.ZPP_Shape.addedToSpace","zpp_nape/shape/Shape.hx",489,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(490)
		this->__iaddedToSpace();
		HX_STACK_LINE(491)
		this->material->shapes->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(492)
		this->filter->shapes->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(493)
		if (((this->fluidProperties != null()))){
			HX_STACK_LINE(493)
			this->fluidProperties->shapes->add(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToSpace,(void))

Void ZPP_Shape_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","removedFromSpace",0xda8e017c,"zpp_nape.shape.ZPP_Shape.removedFromSpace","zpp_nape/shape/Shape.hx",495,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(496)
		this->__iremovedFromSpace();
		HX_STACK_LINE(497)
		this->material->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(498)
		this->filter->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(499)
		if (((this->fluidProperties != null()))){
			HX_STACK_LINE(499)
			this->fluidProperties->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromSpace,(void))

::nape::shape::Shape ZPP_Shape_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","copy",0x9a4d19f5,"zpp_nape.shape.ZPP_Shape.copy","zpp_nape/shape/Shape.hx",501,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	::zpp_nape::shape::ZPP_Shape ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(503)
	if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
		HX_STACK_LINE(503)
		::zpp_nape::shape::ZPP_Circle _g = this->circle->__copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		ret = _g;
	}
	else{
		HX_STACK_LINE(504)
		::zpp_nape::shape::ZPP_Polygon _g1 = this->polygon->__copy();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(504)
		ret = _g1;
	}
	HX_STACK_LINE(505)
	if ((!(this->zip_area_inertia))){
		HX_STACK_LINE(506)
		ret->area = this->area;
		HX_STACK_LINE(507)
		ret->inertia = this->inertia;
	}
	else{
		HX_STACK_LINE(509)
		ret->invalidate_area_inertia();
	}
	HX_STACK_LINE(510)
	if ((!(this->zip_sweepRadius))){
		HX_STACK_LINE(511)
		ret->sweepRadius = this->sweepRadius;
		HX_STACK_LINE(512)
		ret->sweepCoef = this->sweepCoef;
	}
	else{
		HX_STACK_LINE(514)
		ret->zip_sweepRadius = true;
	}
	HX_STACK_LINE(515)
	if ((!(this->zip_angDrag))){
		HX_STACK_LINE(515)
		ret->angDrag = this->angDrag;
	}
	else{
		HX_STACK_LINE(516)
		ret->invalidate_angDrag();
	}
	HX_STACK_LINE(517)
	if ((!(this->zip_aabb))){
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(519)
			ret->aabb->minx = this->aabb->minx;
			HX_STACK_LINE(520)
			ret->aabb->miny = this->aabb->miny;
			HX_STACK_LINE(529)
			{
			}
		}
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(539)
			ret->aabb->maxx = this->aabb->maxx;
			HX_STACK_LINE(540)
			ret->aabb->maxy = this->aabb->maxy;
			HX_STACK_LINE(549)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(559)
		ret->zip_aabb = true;
		HX_STACK_LINE(559)
		if (((ret->body != null()))){
			HX_STACK_LINE(559)
			ret->body->zip_aabb = true;
		}
	}
	HX_STACK_LINE(560)
	{
		HX_STACK_LINE(561)
		::zpp_nape::phys::ZPP_Material o = ret->material;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(570)
		o->outer = null();
		HX_STACK_LINE(571)
		o->next = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
		HX_STACK_LINE(572)
		::zpp_nape::phys::ZPP_Material_obj::zpp_pool = o;
	}
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(578)
		::zpp_nape::dynamics::ZPP_InteractionFilter o = ret->filter;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(587)
		o->outer = null();
		HX_STACK_LINE(588)
		o->next = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
		HX_STACK_LINE(589)
		::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(594)
	ret->material = this->material;
	HX_STACK_LINE(595)
	ret->filter = this->filter;
	HX_STACK_LINE(596)
	if (((this->fluidProperties != null()))){
		HX_STACK_LINE(596)
		ret->fluidProperties = this->fluidProperties;
	}
	HX_STACK_LINE(597)
	ret->fluidEnabled = this->fluidEnabled;
	HX_STACK_LINE(598)
	ret->sensorEnabled = this->sensorEnabled;
	HX_STACK_LINE(599)
	if (((this->userData != null()))){
		HX_STACK_LINE(599)
		Dynamic _g2 = ::Reflect_obj::copy(this->userData);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(599)
		ret->userData = _g2;
	}
	HX_STACK_LINE(600)
	this->copyto(ret->outer);
	HX_STACK_LINE(601)
	return ret->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,copy,return )

Array< ::Dynamic > ZPP_Shape_obj::types;


ZPP_Shape_obj::ZPP_Shape_obj()
{
}

void ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Shape);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(area,"area");
	HX_MARK_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(angDrag,"angDrag");
	HX_MARK_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_MARK_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_MARK_MEMBER_NAME(circle,"circle");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(refmaterial,"refmaterial");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_MARK_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_MARK_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_MARK_MEMBER_NAME(sweep,"sweep");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(area,"area");
	HX_VISIT_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(angDrag,"angDrag");
	HX_VISIT_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_VISIT_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_VISIT_MEMBER_NAME(circle,"circle");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(refmaterial,"refmaterial");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_VISIT_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_VISIT_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_VISIT_MEMBER_NAME(sweep,"sweep");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Shape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"area") ) { return area; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { return angDrag; }
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		if (HX_FIELD_EQ(inName,"setFluid") ) { return setFluid_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPolygon") ) { return isPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { return sweepCoef; }
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { return zip_angDrag; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"refmaterial") ) { return refmaterial; }
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaterial") ) { return setMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToBody") ) { return addedToBody_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { return fluidEnabled; }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { return sensorEnabled; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { return zip_sweepRadius; }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { return fluidProperties; }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromBody") ) { return removedFromBody_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { return zip_area_inertia; }
		if (HX_FIELD_EQ(inName,"validate_angDrag") ) { return validate_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_filter") ) { return invalidate_filter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_angDrag") ) { return invalidate_angDrag_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"force_validate_aabb") ) { return force_validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_material") ) { return invalidate_material_dyn(); }
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"validate_sweepRadius") ) { return validate_sweepRadius_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validate_area_inertia") ) { return validate_area_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_fluidprops") ) { return invalidate_fluidprops_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"invalidate_sweepRadius") ) { return invalidate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidate_area_inertia") ) { return invalidate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"area") ) { area=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { circle=inValue.Cast< ::zpp_nape::shape::ZPP_Circle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { angDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { sweepCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { zip_angDrag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refmaterial") ) { refmaterial=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { fluidEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { sensorEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { zip_sweepRadius=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { fluidProperties=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { zip_area_inertia=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("area"));
	outFields->push(HX_CSTRING("zip_area_inertia"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("angDrag"));
	outFields->push(HX_CSTRING("zip_angDrag"));
	outFields->push(HX_CSTRING("localCOMx"));
	outFields->push(HX_CSTRING("localCOMy"));
	outFields->push(HX_CSTRING("zip_localCOM"));
	outFields->push(HX_CSTRING("worldCOMx"));
	outFields->push(HX_CSTRING("worldCOMy"));
	outFields->push(HX_CSTRING("zip_worldCOM"));
	outFields->push(HX_CSTRING("wrap_localCOM"));
	outFields->push(HX_CSTRING("wrap_worldCOM"));
	outFields->push(HX_CSTRING("sweepRadius"));
	outFields->push(HX_CSTRING("zip_sweepRadius"));
	outFields->push(HX_CSTRING("sweepCoef"));
	outFields->push(HX_CSTRING("circle"));
	outFields->push(HX_CSTRING("polygon"));
	outFields->push(HX_CSTRING("refmaterial"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("fluidProperties"));
	outFields->push(HX_CSTRING("fluidEnabled"));
	outFields->push(HX_CSTRING("sensorEnabled"));
	outFields->push(HX_CSTRING("sweep"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("pairs"));
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("zip_aabb"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("types"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Shape_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Shape_obj,body),HX_CSTRING("body")},
	{hx::fsInt,(int)offsetof(ZPP_Shape_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,area),HX_CSTRING("area")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_area_inertia),HX_CSTRING("zip_area_inertia")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,inertia),HX_CSTRING("inertia")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,angDrag),HX_CSTRING("angDrag")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_angDrag),HX_CSTRING("zip_angDrag")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,localCOMx),HX_CSTRING("localCOMx")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,localCOMy),HX_CSTRING("localCOMy")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_localCOM),HX_CSTRING("zip_localCOM")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,worldCOMx),HX_CSTRING("worldCOMx")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,worldCOMy),HX_CSTRING("worldCOMy")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_worldCOM),HX_CSTRING("zip_worldCOM")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Shape_obj,wrap_localCOM),HX_CSTRING("wrap_localCOM")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Shape_obj,wrap_worldCOM),HX_CSTRING("wrap_worldCOM")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,sweepRadius),HX_CSTRING("sweepRadius")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_sweepRadius),HX_CSTRING("zip_sweepRadius")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,sweepCoef),HX_CSTRING("sweepCoef")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Circle*/ ,(int)offsetof(ZPP_Shape_obj,circle),HX_CSTRING("circle")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(ZPP_Shape_obj,polygon),HX_CSTRING("polygon")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Shape_obj,refmaterial),HX_CSTRING("refmaterial")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Shape_obj,material),HX_CSTRING("material")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(ZPP_Shape_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(ZPP_Shape_obj,fluidProperties),HX_CSTRING("fluidProperties")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,fluidEnabled),HX_CSTRING("fluidEnabled")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,sensorEnabled),HX_CSTRING("sensorEnabled")},
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(int)offsetof(ZPP_Shape_obj,sweep),HX_CSTRING("sweep")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_Shape_obj,node),HX_CSTRING("node")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_AABBPair*/ ,(int)offsetof(ZPP_Shape_obj,pairs),HX_CSTRING("pairs")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Shape_obj,aabb),HX_CSTRING("aabb")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_aabb),HX_CSTRING("zip_aabb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("body"),
	HX_CSTRING("type"),
	HX_CSTRING("isCircle"),
	HX_CSTRING("isPolygon"),
	HX_CSTRING("area"),
	HX_CSTRING("zip_area_inertia"),
	HX_CSTRING("inertia"),
	HX_CSTRING("angDrag"),
	HX_CSTRING("zip_angDrag"),
	HX_CSTRING("localCOMx"),
	HX_CSTRING("localCOMy"),
	HX_CSTRING("zip_localCOM"),
	HX_CSTRING("worldCOMx"),
	HX_CSTRING("worldCOMy"),
	HX_CSTRING("zip_worldCOM"),
	HX_CSTRING("wrap_localCOM"),
	HX_CSTRING("wrap_worldCOM"),
	HX_CSTRING("sweepRadius"),
	HX_CSTRING("zip_sweepRadius"),
	HX_CSTRING("sweepCoef"),
	HX_CSTRING("invalidate_sweepRadius"),
	HX_CSTRING("validate_sweepRadius"),
	HX_CSTRING("circle"),
	HX_CSTRING("polygon"),
	HX_CSTRING("refmaterial"),
	HX_CSTRING("material"),
	HX_CSTRING("filter"),
	HX_CSTRING("fluidProperties"),
	HX_CSTRING("fluidEnabled"),
	HX_CSTRING("sensorEnabled"),
	HX_CSTRING("sweep"),
	HX_CSTRING("node"),
	HX_CSTRING("pairs"),
	HX_CSTRING("clear"),
	HX_CSTRING("aabb"),
	HX_CSTRING("zip_aabb"),
	HX_CSTRING("validate_aabb"),
	HX_CSTRING("force_validate_aabb"),
	HX_CSTRING("invalidate_aabb"),
	HX_CSTRING("validate_area_inertia"),
	HX_CSTRING("validate_angDrag"),
	HX_CSTRING("validate_localCOM"),
	HX_CSTRING("validate_worldCOM"),
	HX_CSTRING("getworldCOM"),
	HX_CSTRING("invalidate_area_inertia"),
	HX_CSTRING("invalidate_angDrag"),
	HX_CSTRING("invalidate_localCOM"),
	HX_CSTRING("invalidate_worldCOM"),
	HX_CSTRING("invalidate_material"),
	HX_CSTRING("invalidate_filter"),
	HX_CSTRING("invalidate_fluidprops"),
	HX_CSTRING("aabb_validate"),
	HX_CSTRING("setMaterial"),
	HX_CSTRING("setFilter"),
	HX_CSTRING("setFluid"),
	HX_CSTRING("__immutable_midstep"),
	HX_CSTRING("addedToBody"),
	HX_CSTRING("removedFromBody"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Shape_obj::types,"types");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Shape_obj::types,"types");
};

#endif

Class ZPP_Shape_obj::__mClass;

void ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.shape.ZPP_Shape"), hx::TCanCast< ZPP_Shape_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Shape_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/shape/Shape.hx",178,0xb83747cd)
		{
			HX_STACK_LINE(178)
			::nape::shape::ShapeType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(178)
					::nape::shape::ShapeType _g = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = _g;
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(178)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
			}
			HX_STACK_LINE(178)
			::nape::shape::ShapeType _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(178)
					::nape::shape::ShapeType _g2 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = _g2;
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(178)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
			}
			HX_STACK_LINE(178)
			return Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
}

} // end namespace zpp_nape
} // end namespace shape
