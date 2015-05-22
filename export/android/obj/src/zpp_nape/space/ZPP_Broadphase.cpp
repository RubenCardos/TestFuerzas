#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepPhase
#include <zpp_nape/space/ZPP_SweepPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Broadphase_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","new",0xf55a4ff9,"zpp_nape.space.ZPP_Broadphase.new","zpp_nape/space/Broadphase.hx",174,0xcf31b77a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(236)
	this->circShape = null();
	HX_STACK_LINE(209)
	this->matrix = null();
	HX_STACK_LINE(208)
	this->aabbShape = null();
	HX_STACK_LINE(178)
	this->dynab = null();
	HX_STACK_LINE(177)
	this->sweep = null();
	HX_STACK_LINE(176)
	this->is_sweep = false;
	HX_STACK_LINE(175)
	this->space = null();
}
;
	return null();
}

//ZPP_Broadphase_obj::~ZPP_Broadphase_obj() { }

Dynamic ZPP_Broadphase_obj::__CreateEmpty() { return  new ZPP_Broadphase_obj; }
hx::ObjectPtr< ZPP_Broadphase_obj > ZPP_Broadphase_obj::__new()
{  hx::ObjectPtr< ZPP_Broadphase_obj > result = new ZPP_Broadphase_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Broadphase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Broadphase_obj > result = new ZPP_Broadphase_obj();
	result->__construct();
	return result;}

Void ZPP_Broadphase_obj::insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","insert",0x67d1c940,"zpp_nape.space.ZPP_Broadphase.insert","zpp_nape/space/Broadphase.hx",180,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(180)
		if ((this->is_sweep)){
			HX_STACK_LINE(180)
			this->sweep->__insert(shape);
		}
		else{
			HX_STACK_LINE(181)
			this->dynab->__insert(shape);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,insert,(void))

Void ZPP_Broadphase_obj::remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","remove",0xce7d224b,"zpp_nape.space.ZPP_Broadphase.remove","zpp_nape/space/Broadphase.hx",184,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(184)
		if ((this->is_sweep)){
			HX_STACK_LINE(184)
			this->sweep->__remove(shape);
		}
		else{
			HX_STACK_LINE(185)
			this->dynab->__remove(shape);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,remove,(void))

Void ZPP_Broadphase_obj::sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","sync",0xbd08e0a2,"zpp_nape.space.ZPP_Broadphase.sync","zpp_nape/space/Broadphase.hx",188,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(188)
		if ((this->is_sweep)){
			HX_STACK_LINE(188)
			if ((!(this->sweep->space->continuous))){
				HX_STACK_LINE(188)
				if ((shape->zip_aabb)){
					HX_STACK_LINE(188)
					if (((shape->body != null()))){
						HX_STACK_LINE(188)
						shape->zip_aabb = false;
						HX_STACK_LINE(188)
						if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(188)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							if ((_this->zip_worldCOM)){
								HX_STACK_LINE(188)
								if (((_this->body != null()))){
									HX_STACK_LINE(188)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(188)
									if ((_this->zip_localCOM)){
										HX_STACK_LINE(188)
										_this->zip_localCOM = false;
										HX_STACK_LINE(188)
										if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
											HX_STACK_LINE(188)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(188)
											if (((_this1->lverts->next->next == null()))){
												HX_STACK_LINE(188)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(188)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(188)
												Dynamic();
											}
											else{
												HX_STACK_LINE(188)
												if (((_this1->lverts->next->next->next == null()))){
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(188)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(188)
														{
														}
													}
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														Float t = 1.0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(188)
														hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
														HX_STACK_LINE(188)
														hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
													}
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														Float t = 0.5;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(188)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(188)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(188)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(188)
														{
														}
													}
													HX_STACK_LINE(188)
													Float area = 0.0;		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(188)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(188)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(188)
														while((true)){
															HX_STACK_LINE(188)
															if ((!(((cx_ite != null()))))){
																HX_STACK_LINE(188)
																break;
															}
															HX_STACK_LINE(188)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(188)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(188)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(188)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(188)
															u = v;
															HX_STACK_LINE(188)
															v = w;
															HX_STACK_LINE(188)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(188)
														cx_ite = _this1->lverts->next;
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(188)
														{
															HX_STACK_LINE(188)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(188)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(188)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(188)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(188)
														u = v;
														HX_STACK_LINE(188)
														v = w;
														HX_STACK_LINE(188)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(188)
														{
															HX_STACK_LINE(188)
															hx::AddEq(area,(v->x * ((w1->y - u->y))));
															HX_STACK_LINE(188)
															Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(188)
															hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
															HX_STACK_LINE(188)
															hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
														}
													}
													HX_STACK_LINE(188)
													area = (Float((int)1) / Float((((int)3 * area))));
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(188)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(188)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
										HX_STACK_LINE(188)
										if (((_this->wrap_localCOM != null()))){
											HX_STACK_LINE(188)
											_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
											HX_STACK_LINE(188)
											_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
											HX_STACK_LINE(188)
											{
											}
										}
									}
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(188)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(188)
											_this1->zip_axis = false;
											HX_STACK_LINE(188)
											{
												HX_STACK_LINE(188)
												Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(188)
												_this1->axisx = _g;
												HX_STACK_LINE(188)
												Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(188)
												_this1->axisy = _g1;
												HX_STACK_LINE(188)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
										HX_STACK_LINE(188)
										_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
									}
								}
							}
							HX_STACK_LINE(188)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(188)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->minx = (_this->worldCOMx - rx);
								HX_STACK_LINE(188)
								_this->aabb->miny = (_this->worldCOMy - ry);
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->maxx = (_this->worldCOMx + rx);
								HX_STACK_LINE(188)
								_this->aabb->maxy = (_this->worldCOMy + ry);
							}
						}
						else{
							HX_STACK_LINE(188)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							if ((_this->zip_gverts)){
								HX_STACK_LINE(188)
								if (((_this->body != null()))){
									HX_STACK_LINE(188)
									_this->zip_gverts = false;
									HX_STACK_LINE(188)
									_this->validate_lverts();
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(188)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(188)
											_this1->zip_axis = false;
											HX_STACK_LINE(188)
											{
												HX_STACK_LINE(188)
												Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(188)
												_this1->axisx = _g2;
												HX_STACK_LINE(188)
												Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(188)
												_this1->axisy = _g3;
												HX_STACK_LINE(188)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(188)
									::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(188)
										while((true)){
											HX_STACK_LINE(188)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(188)
												break;
											}
											HX_STACK_LINE(188)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(188)
											{
												HX_STACK_LINE(188)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(188)
												li = li->next;
												HX_STACK_LINE(188)
												{
													HX_STACK_LINE(188)
													g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
													HX_STACK_LINE(188)
													g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
												}
											}
											HX_STACK_LINE(188)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(188)
							::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(188)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(188)
								{
								}
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(188)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(188)
								{
								}
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(188)
								while((true)){
									HX_STACK_LINE(188)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(188)
										break;
									}
									HX_STACK_LINE(188)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										if (((p->x < _this->aabb->minx))){
											HX_STACK_LINE(188)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(188)
										if (((p->x > _this->aabb->maxx))){
											HX_STACK_LINE(188)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(188)
										if (((p->y < _this->aabb->miny))){
											HX_STACK_LINE(188)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(188)
										if (((p->y > _this->aabb->maxy))){
											HX_STACK_LINE(188)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(188)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(189)
			::zpp_nape::space::ZPP_DynAABBPhase _this = this->dynab;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(189)
			::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(189)
			if ((!(node->synced))){
				HX_STACK_LINE(189)
				if ((!(_this->space->continuous))){
					HX_STACK_LINE(189)
					if ((shape->zip_aabb)){
						HX_STACK_LINE(189)
						if (((shape->body != null()))){
							HX_STACK_LINE(189)
							shape->zip_aabb = false;
							HX_STACK_LINE(189)
							if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(189)
								::zpp_nape::shape::ZPP_Circle _this1 = shape->circle;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(189)
								if ((_this1->zip_worldCOM)){
									HX_STACK_LINE(189)
									if (((_this1->body != null()))){
										HX_STACK_LINE(189)
										_this1->zip_worldCOM = false;
										HX_STACK_LINE(189)
										if ((_this1->zip_localCOM)){
											HX_STACK_LINE(189)
											_this1->zip_localCOM = false;
											HX_STACK_LINE(189)
											if (((_this1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
												HX_STACK_LINE(189)
												::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(189)
												if (((_this2->lverts->next->next == null()))){
													HX_STACK_LINE(189)
													_this2->localCOMx = _this2->lverts->next->x;
													HX_STACK_LINE(189)
													_this2->localCOMy = _this2->lverts->next->y;
													HX_STACK_LINE(189)
													Dynamic();
												}
												else{
													HX_STACK_LINE(189)
													if (((_this2->lverts->next->next->next == null()))){
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															_this2->localCOMx = _this2->lverts->next->x;
															HX_STACK_LINE(189)
															_this2->localCOMy = _this2->lverts->next->y;
															HX_STACK_LINE(189)
															{
															}
														}
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															Float t = 1.0;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(189)
															hx::AddEq(_this2->localCOMx,(_this2->lverts->next->next->x * t));
															HX_STACK_LINE(189)
															hx::AddEq(_this2->localCOMy,(_this2->lverts->next->next->y * t));
														}
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															Float t = 0.5;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(189)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(189)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															_this2->localCOMx = (int)0;
															HX_STACK_LINE(189)
															_this2->localCOMy = (int)0;
															HX_STACK_LINE(189)
															{
															}
														}
														HX_STACK_LINE(189)
														Float area = 0.0;		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = _this2->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(189)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(189)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(189)
															while((true)){
																HX_STACK_LINE(189)
																if ((!(((cx_ite != null()))))){
																	HX_STACK_LINE(189)
																	break;
																}
																HX_STACK_LINE(189)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(189)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(189)
																	hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(189)
																	hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(189)
																u = v;
																HX_STACK_LINE(189)
																v = w;
																HX_STACK_LINE(189)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(189)
															cx_ite = _this2->lverts->next;
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(189)
															{
																HX_STACK_LINE(189)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(189)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(189)
																hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(189)
																hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(189)
															u = v;
															HX_STACK_LINE(189)
															v = w;
															HX_STACK_LINE(189)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(189)
															{
																HX_STACK_LINE(189)
																hx::AddEq(area,(v->x * ((w1->y - u->y))));
																HX_STACK_LINE(189)
																Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(189)
																hx::AddEq(_this2->localCOMx,(((v->x + w1->x)) * cf));
																HX_STACK_LINE(189)
																hx::AddEq(_this2->localCOMy,(((v->y + w1->y)) * cf));
															}
														}
														HX_STACK_LINE(189)
														area = (Float((int)1) / Float((((int)3 * area))));
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(189)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(189)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(189)
											if (((_this1->wrap_localCOM != null()))){
												HX_STACK_LINE(189)
												_this1->wrap_localCOM->zpp_inner->x = _this1->localCOMx;
												HX_STACK_LINE(189)
												_this1->wrap_localCOM->zpp_inner->y = _this1->localCOMy;
												HX_STACK_LINE(189)
												{
												}
											}
										}
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(189)
											if ((_this2->zip_axis)){
												HX_STACK_LINE(189)
												_this2->zip_axis = false;
												HX_STACK_LINE(189)
												{
													HX_STACK_LINE(189)
													Float _g4 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(189)
													_this2->axisx = _g4;
													HX_STACK_LINE(189)
													Float _g5 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(189)
													_this2->axisy = _g5;
													HX_STACK_LINE(189)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											_this1->worldCOMx = (_this1->body->posx + (((_this1->body->axisy * _this1->localCOMx) - (_this1->body->axisx * _this1->localCOMy))));
											HX_STACK_LINE(189)
											_this1->worldCOMy = (_this1->body->posy + (((_this1->localCOMx * _this1->body->axisx) + (_this1->localCOMy * _this1->body->axisy))));
										}
									}
								}
								HX_STACK_LINE(189)
								Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(189)
								Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->minx = (_this1->worldCOMx - rx);
									HX_STACK_LINE(189)
									_this1->aabb->miny = (_this1->worldCOMy - ry);
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->maxx = (_this1->worldCOMx + rx);
									HX_STACK_LINE(189)
									_this1->aabb->maxy = (_this1->worldCOMy + ry);
								}
							}
							else{
								HX_STACK_LINE(189)
								::zpp_nape::shape::ZPP_Polygon _this1 = shape->polygon;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(189)
								if ((_this1->zip_gverts)){
									HX_STACK_LINE(189)
									if (((_this1->body != null()))){
										HX_STACK_LINE(189)
										_this1->zip_gverts = false;
										HX_STACK_LINE(189)
										_this1->validate_lverts();
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(189)
											if ((_this2->zip_axis)){
												HX_STACK_LINE(189)
												_this2->zip_axis = false;
												HX_STACK_LINE(189)
												{
													HX_STACK_LINE(189)
													Float _g6 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(189)
													_this2->axisx = _g6;
													HX_STACK_LINE(189)
													Float _g7 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g7,"_g7");
													HX_STACK_LINE(189)
													_this2->axisy = _g7;
													HX_STACK_LINE(189)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(189)
										::zpp_nape::geom::ZPP_Vec2 li = _this1->lverts->next;		HX_STACK_VAR(li,"li");
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(189)
											while((true)){
												HX_STACK_LINE(189)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(189)
													break;
												}
												HX_STACK_LINE(189)
												::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(189)
												{
													HX_STACK_LINE(189)
													::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
													HX_STACK_LINE(189)
													li = li->next;
													HX_STACK_LINE(189)
													{
														HX_STACK_LINE(189)
														g->x = (_this1->body->posx + (((_this1->body->axisy * l->x) - (_this1->body->axisx * l->y))));
														HX_STACK_LINE(189)
														g->y = (_this1->body->posy + (((l->x * _this1->body->axisx) + (l->y * _this1->body->axisy))));
													}
												}
												HX_STACK_LINE(189)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(189)
								::zpp_nape::geom::ZPP_Vec2 p0 = _this1->gverts->next;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->minx = p0->x;
									HX_STACK_LINE(189)
									_this1->aabb->miny = p0->y;
									HX_STACK_LINE(189)
									{
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->maxx = p0->x;
									HX_STACK_LINE(189)
									_this1->aabb->maxy = p0->y;
									HX_STACK_LINE(189)
									{
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(189)
									while((true)){
										HX_STACK_LINE(189)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(189)
											break;
										}
										HX_STACK_LINE(189)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											if (((p->x < _this1->aabb->minx))){
												HX_STACK_LINE(189)
												_this1->aabb->minx = p->x;
											}
											HX_STACK_LINE(189)
											if (((p->x > _this1->aabb->maxx))){
												HX_STACK_LINE(189)
												_this1->aabb->maxx = p->x;
											}
											HX_STACK_LINE(189)
											if (((p->y < _this1->aabb->miny))){
												HX_STACK_LINE(189)
												_this1->aabb->miny = p->y;
											}
											HX_STACK_LINE(189)
											if (((p->y > _this1->aabb->maxy))){
												HX_STACK_LINE(189)
												_this1->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(189)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(189)
				bool sync;		HX_STACK_VAR(sync,"sync");
				struct _Function_3_1{
					inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/space/Broadphase.hx",189,0xcf31b77a)
						{
							HX_STACK_LINE(189)
							::zpp_nape::geom::ZPP_AABB _this1 = node->aabb;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(189)
							::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(189)
							return (bool((bool((bool((x->minx >= _this1->minx)) && bool((x->miny >= _this1->miny)))) && bool((x->maxx <= _this1->maxx)))) && bool((x->maxy <= _this1->maxy)));
						}
						return null();
					}
				};
				HX_STACK_LINE(189)
				sync = (bool((node->dyn != ((  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) )))) || bool(!(_Function_3_1::Block(shape,node))));
				HX_STACK_LINE(189)
				if ((sync)){
					HX_STACK_LINE(189)
					node->synced = true;
					HX_STACK_LINE(189)
					{
						HX_STACK_LINE(189)
						node->snext = _this->syncs;
						HX_STACK_LINE(189)
						_this->syncs = node;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,sync,(void))

Void ZPP_Broadphase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","broadphase",0x659af340,"zpp_nape.space.ZPP_Broadphase.broadphase","zpp_nape/space/Broadphase.hx",192,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(discrete,"discrete")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Broadphase_obj,broadphase,(void))

Void ZPP_Broadphase_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","clear",0x6bb3c966,"zpp_nape.space.ZPP_Broadphase.clear","zpp_nape/space/Broadphase.hx",201,0xcf31b77a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Broadphase_obj,clear,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesUnderPoint",0x7ce9e1b1,"zpp_nape.space.ZPP_Broadphase.shapesUnderPoint","zpp_nape/space/Broadphase.hx",203,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(203)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,shapesUnderPoint,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesUnderPoint",0xb55d107f,"zpp_nape.space.ZPP_Broadphase.bodiesUnderPoint","zpp_nape/space/Broadphase.hx",206,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(206)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,bodiesUnderPoint,return )

Void ZPP_Broadphase_obj::updateAABBShape( ::zpp_nape::geom::ZPP_AABB aabb){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","updateAABBShape",0x82875651,"zpp_nape.space.ZPP_Broadphase.updateAABBShape","zpp_nape/space/Broadphase.hx",210,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_LINE(211)
		if (((this->aabbShape == null()))){
			HX_STACK_LINE(212)
			::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(212)
					::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(212)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(212)
			::nape::phys::Body body = ::nape::phys::Body_obj::__new(_g1,null());		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(213)
				Array< ::Dynamic > _g2 = ::nape::shape::Polygon_obj::rect(aabb->minx,aabb->miny,(aabb->maxx - aabb->minx),(aabb->maxy - aabb->miny),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(213)
				::nape::shape::Polygon _g3 = ::nape::shape::Polygon_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(213)
				::nape::shape::Shape obj = this->aabbShape = _g3;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(213)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(213)
					_this->push(obj);
				}
				else{
					HX_STACK_LINE(213)
					_this->unshift(obj);
				}
			}
		}
		else{
			HX_STACK_LINE(216)
			::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(217)
			Float sx = (Float(((aabb->maxx - aabb->minx))) / Float(((ab->maxx - ab->minx))));		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(218)
			Float sy = (Float(((aabb->maxy - aabb->miny))) / Float(((ab->maxy - ab->miny))));		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(219)
			if (((this->matrix == null()))){
				HX_STACK_LINE(219)
				::nape::geom::Mat23 _g4 = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(219)
				this->matrix = _g4;
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					_this->zpp_inner->a = sx;
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(220)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(220)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(220)
				_this->zpp_inner->a;
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(221)
				Float b;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					::nape::geom::Mat23 _this1 = this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						_this1->zpp_inner->c = (int)0;
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(221)
							if (((_this2->_invalidate != null()))){
								HX_STACK_LINE(221)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(221)
					b = _this1->zpp_inner->c;
				}
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					_this->zpp_inner->b = b;
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(221)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(221)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(221)
				_this->zpp_inner->b;
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					_this->zpp_inner->d = sy;
					HX_STACK_LINE(222)
					{
						HX_STACK_LINE(222)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(222)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(222)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(222)
				_this->zpp_inner->d;
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					_this->zpp_inner->tx = (aabb->minx - (sx * ab->minx));
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(223)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(223)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(223)
				_this->zpp_inner->tx;
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					_this->zpp_inner->ty = (aabb->miny - (sy * ab->miny));
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(224)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(224)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(224)
				_this->zpp_inner->ty;
			}
			HX_STACK_LINE(225)
			this->aabbShape->transform(this->matrix);
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::zpp_nape::shape::ZPP_Shape _this = this->aabbShape->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(227)
			if ((_this->zip_aabb)){
				HX_STACK_LINE(227)
				if (((_this->body != null()))){
					HX_STACK_LINE(227)
					_this->zip_aabb = false;
					HX_STACK_LINE(227)
					if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(227)
						::zpp_nape::shape::ZPP_Circle _this1 = _this->circle;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(227)
						if ((_this1->zip_worldCOM)){
							HX_STACK_LINE(227)
							if (((_this1->body != null()))){
								HX_STACK_LINE(227)
								_this1->zip_worldCOM = false;
								HX_STACK_LINE(227)
								if ((_this1->zip_localCOM)){
									HX_STACK_LINE(227)
									_this1->zip_localCOM = false;
									HX_STACK_LINE(227)
									if (((_this1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(227)
										::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(227)
										if (((_this2->lverts->next->next == null()))){
											HX_STACK_LINE(227)
											_this2->localCOMx = _this2->lverts->next->x;
											HX_STACK_LINE(227)
											_this2->localCOMy = _this2->lverts->next->y;
											HX_STACK_LINE(227)
											Dynamic();
										}
										else{
											HX_STACK_LINE(227)
											if (((_this2->lverts->next->next->next == null()))){
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													_this2->localCOMx = _this2->lverts->next->x;
													HX_STACK_LINE(227)
													_this2->localCOMy = _this2->lverts->next->y;
													HX_STACK_LINE(227)
													{
													}
												}
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													Float t = 1.0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(227)
													hx::AddEq(_this2->localCOMx,(_this2->lverts->next->next->x * t));
													HX_STACK_LINE(227)
													hx::AddEq(_this2->localCOMy,(_this2->lverts->next->next->y * t));
												}
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													Float t = 0.5;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(227)
													hx::MultEq(_this2->localCOMx,t);
													HX_STACK_LINE(227)
													hx::MultEq(_this2->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													_this2->localCOMx = (int)0;
													HX_STACK_LINE(227)
													_this2->localCOMy = (int)0;
													HX_STACK_LINE(227)
													{
													}
												}
												HX_STACK_LINE(227)
												Float area = 0.0;		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this2->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(227)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(227)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(227)
													while((true)){
														HX_STACK_LINE(227)
														if ((!(((cx_ite != null()))))){
															HX_STACK_LINE(227)
															break;
														}
														HX_STACK_LINE(227)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(227)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(227)
															hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(227)
															hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(227)
														u = v;
														HX_STACK_LINE(227)
														v = w;
														HX_STACK_LINE(227)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(227)
													cx_ite = _this2->lverts->next;
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(227)
													{
														HX_STACK_LINE(227)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(227)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(227)
														hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(227)
														hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(227)
													u = v;
													HX_STACK_LINE(227)
													v = w;
													HX_STACK_LINE(227)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(227)
													{
														HX_STACK_LINE(227)
														hx::AddEq(area,(v->x * ((w1->y - u->y))));
														HX_STACK_LINE(227)
														Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(227)
														hx::AddEq(_this2->localCOMx,(((v->x + w1->x)) * cf));
														HX_STACK_LINE(227)
														hx::AddEq(_this2->localCOMy,(((v->y + w1->y)) * cf));
													}
												}
												HX_STACK_LINE(227)
												area = (Float((int)1) / Float((((int)3 * area))));
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(227)
													hx::MultEq(_this2->localCOMx,t);
													HX_STACK_LINE(227)
													hx::MultEq(_this2->localCOMy,t);
												}
											}
										}
									}
									HX_STACK_LINE(227)
									if (((_this1->wrap_localCOM != null()))){
										HX_STACK_LINE(227)
										_this1->wrap_localCOM->zpp_inner->x = _this1->localCOMx;
										HX_STACK_LINE(227)
										_this1->wrap_localCOM->zpp_inner->y = _this1->localCOMy;
										HX_STACK_LINE(227)
										{
										}
									}
								}
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(227)
									if ((_this2->zip_axis)){
										HX_STACK_LINE(227)
										_this2->zip_axis = false;
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											Float _g5 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(227)
											_this2->axisx = _g5;
											HX_STACK_LINE(227)
											Float _g6 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(227)
											_this2->axisy = _g6;
											HX_STACK_LINE(227)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									_this1->worldCOMx = (_this1->body->posx + (((_this1->body->axisy * _this1->localCOMx) - (_this1->body->axisx * _this1->localCOMy))));
									HX_STACK_LINE(227)
									_this1->worldCOMy = (_this1->body->posy + (((_this1->localCOMx * _this1->body->axisx) + (_this1->localCOMy * _this1->body->axisy))));
								}
							}
						}
						HX_STACK_LINE(227)
						Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(227)
						Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->minx = (_this1->worldCOMx - rx);
							HX_STACK_LINE(227)
							_this1->aabb->miny = (_this1->worldCOMy - ry);
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->maxx = (_this1->worldCOMx + rx);
							HX_STACK_LINE(227)
							_this1->aabb->maxy = (_this1->worldCOMy + ry);
						}
					}
					else{
						HX_STACK_LINE(227)
						::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(227)
						if ((_this1->zip_gverts)){
							HX_STACK_LINE(227)
							if (((_this1->body != null()))){
								HX_STACK_LINE(227)
								_this1->zip_gverts = false;
								HX_STACK_LINE(227)
								_this1->validate_lverts();
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(227)
									if ((_this2->zip_axis)){
										HX_STACK_LINE(227)
										_this2->zip_axis = false;
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											Float _g7 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(227)
											_this2->axisx = _g7;
											HX_STACK_LINE(227)
											Float _g8 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(227)
											_this2->axisy = _g8;
											HX_STACK_LINE(227)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(227)
								::zpp_nape::geom::ZPP_Vec2 li = _this1->lverts->next;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(227)
									while((true)){
										HX_STACK_LINE(227)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(227)
											break;
										}
										HX_STACK_LINE(227)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(227)
											li = li->next;
											HX_STACK_LINE(227)
											{
												HX_STACK_LINE(227)
												g->x = (_this1->body->posx + (((_this1->body->axisy * l->x) - (_this1->body->axisx * l->y))));
												HX_STACK_LINE(227)
												g->y = (_this1->body->posy + (((l->x * _this1->body->axisx) + (l->y * _this1->body->axisy))));
											}
										}
										HX_STACK_LINE(227)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(227)
						::zpp_nape::geom::ZPP_Vec2 p0 = _this1->gverts->next;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->minx = p0->x;
							HX_STACK_LINE(227)
							_this1->aabb->miny = p0->y;
							HX_STACK_LINE(227)
							{
							}
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->maxx = p0->x;
							HX_STACK_LINE(227)
							_this1->aabb->maxy = p0->y;
							HX_STACK_LINE(227)
							{
							}
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(227)
							while((true)){
								HX_STACK_LINE(227)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(227)
									break;
								}
								HX_STACK_LINE(227)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									if (((p->x < _this1->aabb->minx))){
										HX_STACK_LINE(227)
										_this1->aabb->minx = p->x;
									}
									HX_STACK_LINE(227)
									if (((p->x > _this1->aabb->maxx))){
										HX_STACK_LINE(227)
										_this1->aabb->maxx = p->x;
									}
									HX_STACK_LINE(227)
									if (((p->y < _this1->aabb->miny))){
										HX_STACK_LINE(227)
										_this1->aabb->miny = p->y;
									}
									HX_STACK_LINE(227)
									if (((p->y > _this1->aabb->maxy))){
										HX_STACK_LINE(227)
										_this1->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(227)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::zpp_nape::shape::ZPP_Polygon _this = this->aabbShape->zpp_inner->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			if ((_this->zip_gaxi)){
				HX_STACK_LINE(228)
				if (((_this->body != null()))){
					HX_STACK_LINE(228)
					_this->zip_gaxi = false;
					HX_STACK_LINE(228)
					_this->validate_laxi();
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(228)
						if ((_this1->zip_axis)){
							HX_STACK_LINE(228)
							_this1->zip_axis = false;
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								Float _g9 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(228)
								_this1->axisx = _g9;
								HX_STACK_LINE(228)
								Float _g10 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(228)
								_this1->axisy = _g10;
								HX_STACK_LINE(228)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(228)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(228)
						if (((_this->body != null()))){
							HX_STACK_LINE(228)
							_this->zip_gverts = false;
							HX_STACK_LINE(228)
							_this->validate_lverts();
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(228)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(228)
									_this1->zip_axis = false;
									HX_STACK_LINE(228)
									{
										HX_STACK_LINE(228)
										Float _g11 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(228)
										_this1->axisx = _g11;
										HX_STACK_LINE(228)
										Float _g12 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(228)
										_this1->axisy = _g12;
										HX_STACK_LINE(228)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(228)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(228)
								while((true)){
									HX_STACK_LINE(228)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(228)
										break;
									}
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(228)
									{
										HX_STACK_LINE(228)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(228)
										li = li->next;
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(228)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(228)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(228)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(228)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(228)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(228)
								ite = ite->next;
								HX_STACK_LINE(228)
								e->gp0 = u;
								HX_STACK_LINE(228)
								e->gp1 = v;
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
									HX_STACK_LINE(228)
									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
								}
								HX_STACK_LINE(228)
								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(228)
								if (((e->wrap_gnorm != null()))){
									HX_STACK_LINE(228)
									e->wrap_gnorm->zpp_inner->x = e->gnormx;
									HX_STACK_LINE(228)
									e->wrap_gnorm->zpp_inner->y = e->gnormy;
									HX_STACK_LINE(228)
									{
									}
								}
								HX_STACK_LINE(228)
								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
								HX_STACK_LINE(228)
								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
							}
							HX_STACK_LINE(228)
							u = v;
							HX_STACK_LINE(228)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(228)
							ite = ite->next;
							HX_STACK_LINE(228)
							e->gp0 = u;
							HX_STACK_LINE(228)
							e->gp1 = v;
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(228)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(228)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(228)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(228)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(228)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(228)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,updateAABBShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInAABB",0x11b7621e,"zpp_nape.space.ZPP_Broadphase.shapesInAABB","zpp_nape/space/Broadphase.hx",231,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(231)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ZPP_Broadphase_obj,shapesInAABB,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInAABB",0xb65b91ec,"zpp_nape.space.ZPP_Broadphase.bodiesInAABB","zpp_nape/space/Broadphase.hx",234,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ZPP_Broadphase_obj,bodiesInAABB,return )

Void ZPP_Broadphase_obj::updateCircShape( Float x,Float y,Float r){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","updateCircShape",0x1619299a,"zpp_nape.space.ZPP_Broadphase.updateCircShape","zpp_nape/space/Broadphase.hx",237,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(238)
		if (((this->circShape == null()))){
			HX_STACK_LINE(239)
			::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(239)
			::nape::phys::Body body = ::nape::phys::Body_obj::__new(_g1,null());		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(240)
				::nape::geom::Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(240)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(240)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(240)
						::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(240)
						ret = _g2;
					}
					else{
						HX_STACK_LINE(240)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(240)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(240)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(240)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(240)
									ret1 = _g3;
								}
								else{
									HX_STACK_LINE(240)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(240)
									ret1->next = null();
								}
								HX_STACK_LINE(240)
								ret1->weak = false;
							}
							HX_STACK_LINE(240)
							ret1->_immutable = immutable;
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								ret1->x = x;
								HX_STACK_LINE(240)
								ret1->y = y;
								HX_STACK_LINE(240)
								{
								}
							}
							HX_STACK_LINE(240)
							_g4 = ret1;
						}
						HX_STACK_LINE(240)
						ret->zpp_inner = _g4;
						HX_STACK_LINE(240)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(240)
						Float _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(240)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(240)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(240)
							_g5 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/space/Broadphase.hx",240,0xcf31b77a)
								{
									HX_STACK_LINE(240)
									Float _g6;		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(240)
									{
										HX_STACK_LINE(240)
										{
											HX_STACK_LINE(240)
											::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(240)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(240)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(240)
										_g6 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(240)
									return (_g6 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(240)
						if ((!(((  (((_g5 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(240)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(240)
								{
								}
							}
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(240)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(240)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(240)
						ret;
					}
					HX_STACK_LINE(240)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(240)
					_g7 = ret;
				}
				HX_STACK_LINE(240)
				::nape::shape::Circle _g8 = ::nape::shape::Circle_obj::__new(r,_g7,null(),null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(240)
				::nape::shape::Shape obj = this->circShape = _g8;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(240)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(240)
					_this->push(obj);
				}
				else{
					HX_STACK_LINE(240)
					_this->unshift(obj);
				}
			}
		}
		else{
			HX_STACK_LINE(243)
			::zpp_nape::shape::ZPP_Circle ci = this->circShape->zpp_inner->circle;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(244)
			Float ss = (Float(r) / Float(ci->radius));		HX_STACK_VAR(ss,"ss");
			HX_STACK_LINE(245)
			if (((this->matrix == null()))){
				HX_STACK_LINE(245)
				::nape::geom::Mat23 _g9 = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(245)
				this->matrix = _g9;
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				Float a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					::nape::geom::Mat23 _this1 = this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						_this1->zpp_inner->d = ss;
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(246)
							if (((_this2->_invalidate != null()))){
								HX_STACK_LINE(246)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(246)
					a = _this1->zpp_inner->d;
				}
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					_this->zpp_inner->a = a;
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(246)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(246)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(246)
				_this->zpp_inner->a;
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				Float b;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::nape::geom::Mat23 _this1 = this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						_this1->zpp_inner->c = (int)0;
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(247)
							if (((_this2->_invalidate != null()))){
								HX_STACK_LINE(247)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(247)
					b = _this1->zpp_inner->c;
				}
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					_this->zpp_inner->b = b;
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(247)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(247)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(247)
				_this->zpp_inner->b;
			}
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					_this->zpp_inner->tx = (x - (ss * ci->localCOMx));
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(248)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(248)
				_this->zpp_inner->tx;
			}
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				::nape::geom::Mat23 _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					_this->zpp_inner->ty = (y - (ss * ci->localCOMy));
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(249)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(249)
				_this->zpp_inner->ty;
			}
			HX_STACK_LINE(250)
			this->circShape->transform(this->matrix);
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::zpp_nape::shape::ZPP_Shape _this = this->circShape->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(252)
			if ((_this->zip_aabb)){
				HX_STACK_LINE(252)
				if (((_this->body != null()))){
					HX_STACK_LINE(252)
					_this->zip_aabb = false;
					HX_STACK_LINE(252)
					if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(252)
						::zpp_nape::shape::ZPP_Circle _this1 = _this->circle;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(252)
						if ((_this1->zip_worldCOM)){
							HX_STACK_LINE(252)
							if (((_this1->body != null()))){
								HX_STACK_LINE(252)
								_this1->zip_worldCOM = false;
								HX_STACK_LINE(252)
								if ((_this1->zip_localCOM)){
									HX_STACK_LINE(252)
									_this1->zip_localCOM = false;
									HX_STACK_LINE(252)
									if (((_this1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(252)
										::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(252)
										if (((_this2->lverts->next->next == null()))){
											HX_STACK_LINE(252)
											_this2->localCOMx = _this2->lverts->next->x;
											HX_STACK_LINE(252)
											_this2->localCOMy = _this2->lverts->next->y;
											HX_STACK_LINE(252)
											Dynamic();
										}
										else{
											HX_STACK_LINE(252)
											if (((_this2->lverts->next->next->next == null()))){
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													_this2->localCOMx = _this2->lverts->next->x;
													HX_STACK_LINE(252)
													_this2->localCOMy = _this2->lverts->next->y;
													HX_STACK_LINE(252)
													{
													}
												}
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													Float t = 1.0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(252)
													hx::AddEq(_this2->localCOMx,(_this2->lverts->next->next->x * t));
													HX_STACK_LINE(252)
													hx::AddEq(_this2->localCOMy,(_this2->lverts->next->next->y * t));
												}
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													Float t = 0.5;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(252)
													hx::MultEq(_this2->localCOMx,t);
													HX_STACK_LINE(252)
													hx::MultEq(_this2->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													_this2->localCOMx = (int)0;
													HX_STACK_LINE(252)
													_this2->localCOMy = (int)0;
													HX_STACK_LINE(252)
													{
													}
												}
												HX_STACK_LINE(252)
												Float area = 0.0;		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this2->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(252)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(252)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(252)
													while((true)){
														HX_STACK_LINE(252)
														if ((!(((cx_ite != null()))))){
															HX_STACK_LINE(252)
															break;
														}
														HX_STACK_LINE(252)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(252)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(252)
															hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(252)
															hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(252)
														u = v;
														HX_STACK_LINE(252)
														v = w;
														HX_STACK_LINE(252)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(252)
													cx_ite = _this2->lverts->next;
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(252)
													{
														HX_STACK_LINE(252)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(252)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(252)
														hx::AddEq(_this2->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(252)
														hx::AddEq(_this2->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(252)
													u = v;
													HX_STACK_LINE(252)
													v = w;
													HX_STACK_LINE(252)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(252)
													{
														HX_STACK_LINE(252)
														hx::AddEq(area,(v->x * ((w1->y - u->y))));
														HX_STACK_LINE(252)
														Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(252)
														hx::AddEq(_this2->localCOMx,(((v->x + w1->x)) * cf));
														HX_STACK_LINE(252)
														hx::AddEq(_this2->localCOMy,(((v->y + w1->y)) * cf));
													}
												}
												HX_STACK_LINE(252)
												area = (Float((int)1) / Float((((int)3 * area))));
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(252)
													hx::MultEq(_this2->localCOMx,t);
													HX_STACK_LINE(252)
													hx::MultEq(_this2->localCOMy,t);
												}
											}
										}
									}
									HX_STACK_LINE(252)
									if (((_this1->wrap_localCOM != null()))){
										HX_STACK_LINE(252)
										_this1->wrap_localCOM->zpp_inner->x = _this1->localCOMx;
										HX_STACK_LINE(252)
										_this1->wrap_localCOM->zpp_inner->y = _this1->localCOMy;
										HX_STACK_LINE(252)
										{
										}
									}
								}
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(252)
									if ((_this2->zip_axis)){
										HX_STACK_LINE(252)
										_this2->zip_axis = false;
										HX_STACK_LINE(252)
										{
											HX_STACK_LINE(252)
											Float _g10 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(252)
											_this2->axisx = _g10;
											HX_STACK_LINE(252)
											Float _g11 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(252)
											_this2->axisy = _g11;
											HX_STACK_LINE(252)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									_this1->worldCOMx = (_this1->body->posx + (((_this1->body->axisy * _this1->localCOMx) - (_this1->body->axisx * _this1->localCOMy))));
									HX_STACK_LINE(252)
									_this1->worldCOMy = (_this1->body->posy + (((_this1->localCOMx * _this1->body->axisx) + (_this1->localCOMy * _this1->body->axisy))));
								}
							}
						}
						HX_STACK_LINE(252)
						Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(252)
						Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->minx = (_this1->worldCOMx - rx);
							HX_STACK_LINE(252)
							_this1->aabb->miny = (_this1->worldCOMy - ry);
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->maxx = (_this1->worldCOMx + rx);
							HX_STACK_LINE(252)
							_this1->aabb->maxy = (_this1->worldCOMy + ry);
						}
					}
					else{
						HX_STACK_LINE(252)
						::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(252)
						if ((_this1->zip_gverts)){
							HX_STACK_LINE(252)
							if (((_this1->body != null()))){
								HX_STACK_LINE(252)
								_this1->zip_gverts = false;
								HX_STACK_LINE(252)
								_this1->validate_lverts();
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(252)
									if ((_this2->zip_axis)){
										HX_STACK_LINE(252)
										_this2->zip_axis = false;
										HX_STACK_LINE(252)
										{
											HX_STACK_LINE(252)
											Float _g12 = ::Math_obj::sin(_this2->rot);		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(252)
											_this2->axisx = _g12;
											HX_STACK_LINE(252)
											Float _g13 = ::Math_obj::cos(_this2->rot);		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(252)
											_this2->axisy = _g13;
											HX_STACK_LINE(252)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(252)
								::zpp_nape::geom::ZPP_Vec2 li = _this1->lverts->next;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(252)
									while((true)){
										HX_STACK_LINE(252)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(252)
											break;
										}
										HX_STACK_LINE(252)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(252)
										{
											HX_STACK_LINE(252)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(252)
											li = li->next;
											HX_STACK_LINE(252)
											{
												HX_STACK_LINE(252)
												g->x = (_this1->body->posx + (((_this1->body->axisy * l->x) - (_this1->body->axisx * l->y))));
												HX_STACK_LINE(252)
												g->y = (_this1->body->posy + (((l->x * _this1->body->axisx) + (l->y * _this1->body->axisy))));
											}
										}
										HX_STACK_LINE(252)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(252)
						::zpp_nape::geom::ZPP_Vec2 p0 = _this1->gverts->next;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->minx = p0->x;
							HX_STACK_LINE(252)
							_this1->aabb->miny = p0->y;
							HX_STACK_LINE(252)
							{
							}
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->maxx = p0->x;
							HX_STACK_LINE(252)
							_this1->aabb->maxy = p0->y;
							HX_STACK_LINE(252)
							{
							}
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(252)
							while((true)){
								HX_STACK_LINE(252)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(252)
									break;
								}
								HX_STACK_LINE(252)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									if (((p->x < _this1->aabb->minx))){
										HX_STACK_LINE(252)
										_this1->aabb->minx = p->x;
									}
									HX_STACK_LINE(252)
									if (((p->x > _this1->aabb->maxx))){
										HX_STACK_LINE(252)
										_this1->aabb->maxx = p->x;
									}
									HX_STACK_LINE(252)
									if (((p->y < _this1->aabb->miny))){
										HX_STACK_LINE(252)
										_this1->aabb->miny = p->y;
									}
									HX_STACK_LINE(252)
									if (((p->y > _this1->aabb->maxy))){
										HX_STACK_LINE(252)
										_this1->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(252)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Broadphase_obj,updateCircShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInCircle",0x6c7c392e,"zpp_nape.space.ZPP_Broadphase.shapesInCircle","zpp_nape/space/Broadphase.hx",255,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Broadphase_obj,shapesInCircle,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInCircle",0xa666787c,"zpp_nape.space.ZPP_Broadphase.bodiesInCircle","zpp_nape/space/Broadphase.hx",258,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(258)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Broadphase_obj,bodiesInCircle,return )

Void ZPP_Broadphase_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","validateShape",0xbcc5fb84,"zpp_nape.space.ZPP_Broadphase.validateShape","zpp_nape/space/Broadphase.hx",260,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(261)
		if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(261)
			::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if ((_this->zip_gaxi)){
				HX_STACK_LINE(261)
				if (((_this->body != null()))){
					HX_STACK_LINE(261)
					_this->zip_gaxi = false;
					HX_STACK_LINE(261)
					_this->validate_laxi();
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(261)
						if ((_this1->zip_axis)){
							HX_STACK_LINE(261)
							_this1->zip_axis = false;
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(261)
								_this1->axisx = _g;
								HX_STACK_LINE(261)
								Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(261)
								_this1->axisy = _g1;
								HX_STACK_LINE(261)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(261)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(261)
						if (((_this->body != null()))){
							HX_STACK_LINE(261)
							_this->zip_gverts = false;
							HX_STACK_LINE(261)
							_this->validate_lverts();
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(261)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(261)
									_this1->zip_axis = false;
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(261)
										_this1->axisx = _g2;
										HX_STACK_LINE(261)
										Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(261)
										_this1->axisy = _g3;
										HX_STACK_LINE(261)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(261)
								while((true)){
									HX_STACK_LINE(261)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(261)
										li = li->next;
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(261)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(261)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(261)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(261)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(261)
						while((true)){
							HX_STACK_LINE(261)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(261)
								break;
							}
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(261)
								ite = ite->next;
								HX_STACK_LINE(261)
								e->gp0 = u;
								HX_STACK_LINE(261)
								e->gp1 = v;
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
									HX_STACK_LINE(261)
									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
								}
								HX_STACK_LINE(261)
								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(261)
								if (((e->wrap_gnorm != null()))){
									HX_STACK_LINE(261)
									e->wrap_gnorm->zpp_inner->x = e->gnormx;
									HX_STACK_LINE(261)
									e->wrap_gnorm->zpp_inner->y = e->gnormy;
									HX_STACK_LINE(261)
									{
									}
								}
								HX_STACK_LINE(261)
								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
								HX_STACK_LINE(261)
								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
							}
							HX_STACK_LINE(261)
							u = v;
							HX_STACK_LINE(261)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(261)
							ite = ite->next;
							HX_STACK_LINE(261)
							e->gp0 = u;
							HX_STACK_LINE(261)
							e->gp1 = v;
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(261)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(261)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(261)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(261)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(261)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(261)
								{
								}
							}
							HX_STACK_LINE(261)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(261)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
					}
				}
			}
		}
		HX_STACK_LINE(262)
		if ((s->zip_aabb)){
			HX_STACK_LINE(262)
			if (((s->body != null()))){
				HX_STACK_LINE(262)
				s->zip_aabb = false;
				HX_STACK_LINE(262)
				if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(262)
					::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(262)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(262)
						if (((_this->body != null()))){
							HX_STACK_LINE(262)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(262)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(262)
								_this->zip_localCOM = false;
								HX_STACK_LINE(262)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(262)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(262)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(262)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(262)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(262)
										Dynamic();
									}
									else{
										HX_STACK_LINE(262)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(262)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(262)
												{
												}
											}
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(262)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(262)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(262)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(262)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(262)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(262)
												{
												}
											}
											HX_STACK_LINE(262)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(262)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(262)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(262)
												while((true)){
													HX_STACK_LINE(262)
													if ((!(((cx_ite != null()))))){
														HX_STACK_LINE(262)
														break;
													}
													HX_STACK_LINE(262)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(262)
													{
														HX_STACK_LINE(262)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(262)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(262)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(262)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(262)
													u = v;
													HX_STACK_LINE(262)
													v = w;
													HX_STACK_LINE(262)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(262)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(262)
												{
													HX_STACK_LINE(262)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(262)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(262)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(262)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(262)
												u = v;
												HX_STACK_LINE(262)
												v = w;
												HX_STACK_LINE(262)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(262)
												{
													HX_STACK_LINE(262)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(262)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(262)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(262)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(262)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(262)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(262)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(262)
								if (((_this->wrap_localCOM != null()))){
									HX_STACK_LINE(262)
									_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
									HX_STACK_LINE(262)
									_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
									HX_STACK_LINE(262)
									{
									}
								}
							}
							HX_STACK_LINE(262)
							{
								HX_STACK_LINE(262)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(262)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(262)
									_this1->zip_axis = false;
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										Float _g4 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(262)
										_this1->axisx = _g4;
										HX_STACK_LINE(262)
										Float _g5 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(262)
										_this1->axisy = _g5;
										HX_STACK_LINE(262)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(262)
							{
								HX_STACK_LINE(262)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(262)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(262)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(262)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(262)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(262)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(262)
					::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(262)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(262)
						if (((_this->body != null()))){
							HX_STACK_LINE(262)
							_this->zip_gverts = false;
							HX_STACK_LINE(262)
							_this->validate_lverts();
							HX_STACK_LINE(262)
							{
								HX_STACK_LINE(262)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(262)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(262)
									_this1->zip_axis = false;
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										Float _g6 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(262)
										_this1->axisx = _g6;
										HX_STACK_LINE(262)
										Float _g7 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(262)
										_this1->axisy = _g7;
										HX_STACK_LINE(262)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(262)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(262)
							{
								HX_STACK_LINE(262)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(262)
								while((true)){
									HX_STACK_LINE(262)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(262)
										break;
									}
									HX_STACK_LINE(262)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(262)
										li = li->next;
										HX_STACK_LINE(262)
										{
											HX_STACK_LINE(262)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(262)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(262)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(262)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(262)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(262)
						{
						}
					}
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(262)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(262)
						{
						}
					}
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(262)
						while((true)){
							HX_STACK_LINE(262)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(262)
								break;
							}
							HX_STACK_LINE(262)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(262)
							{
								HX_STACK_LINE(262)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(262)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(262)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(262)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(262)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(262)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(262)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(262)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(262)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(263)
		if ((s->zip_worldCOM)){
			HX_STACK_LINE(263)
			if (((s->body != null()))){
				HX_STACK_LINE(263)
				s->zip_worldCOM = false;
				HX_STACK_LINE(263)
				if ((s->zip_localCOM)){
					HX_STACK_LINE(263)
					s->zip_localCOM = false;
					HX_STACK_LINE(263)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(263)
						::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(263)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(263)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(263)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(263)
							Dynamic();
						}
						else{
							HX_STACK_LINE(263)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(263)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(263)
									{
									}
								}
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(263)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(263)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(263)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(263)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(263)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(263)
									{
									}
								}
								HX_STACK_LINE(263)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(263)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(263)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(263)
									while((true)){
										HX_STACK_LINE(263)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(263)
											break;
										}
										HX_STACK_LINE(263)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(263)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(263)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(263)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(263)
										u = v;
										HX_STACK_LINE(263)
										v = w;
										HX_STACK_LINE(263)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(263)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(263)
									{
										HX_STACK_LINE(263)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(263)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(263)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(263)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(263)
									u = v;
									HX_STACK_LINE(263)
									v = w;
									HX_STACK_LINE(263)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(263)
									{
										HX_STACK_LINE(263)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(263)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(263)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(263)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(263)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(263)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(263)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(263)
					if (((s->wrap_localCOM != null()))){
						HX_STACK_LINE(263)
						s->wrap_localCOM->zpp_inner->x = s->localCOMx;
						HX_STACK_LINE(263)
						s->wrap_localCOM->zpp_inner->y = s->localCOMy;
						HX_STACK_LINE(263)
						{
						}
					}
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::zpp_nape::phys::ZPP_Body _this = s->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(263)
					if ((_this->zip_axis)){
						HX_STACK_LINE(263)
						_this->zip_axis = false;
						HX_STACK_LINE(263)
						{
							HX_STACK_LINE(263)
							Float _g8 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(263)
							_this->axisx = _g8;
							HX_STACK_LINE(263)
							Float _g9 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(263)
							_this->axisy = _g9;
							HX_STACK_LINE(263)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					s->worldCOMx = (s->body->posx + (((s->body->axisy * s->localCOMx) - (s->body->axisx * s->localCOMy))));
					HX_STACK_LINE(263)
					s->worldCOMy = (s->body->posy + (((s->localCOMx * s->body->axisx) + (s->localCOMy * s->body->axisy))));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,validateShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInShape",0xe5d3e9c3,"zpp_nape.space.ZPP_Broadphase.shapesInShape","zpp_nape/space/Broadphase.hx",266,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(266)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,shapesInShape,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInShape",0x50d98e35,"zpp_nape.space.ZPP_Broadphase.bodiesInShape","zpp_nape/space/Broadphase.hx",269,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(269)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,bodiesInShape,return )

::nape::geom::RayResult ZPP_Broadphase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","rayCast",0x113d1de2,"zpp_nape.space.ZPP_Broadphase.rayCast","zpp_nape/space/Broadphase.hx",272,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Broadphase_obj,rayCast,return )

::nape::geom::RayResultList ZPP_Broadphase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","rayMultiCast",0x3bb047d5,"zpp_nape.space.ZPP_Broadphase.rayMultiCast","zpp_nape/space/Broadphase.hx",275,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(275)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,rayMultiCast,return )


ZPP_Broadphase_obj::ZPP_Broadphase_obj()
{
}

void ZPP_Broadphase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Broadphase);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(is_sweep,"is_sweep");
	HX_MARK_MEMBER_NAME(sweep,"sweep");
	HX_MARK_MEMBER_NAME(dynab,"dynab");
	HX_MARK_MEMBER_NAME(aabbShape,"aabbShape");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(circShape,"circShape");
	HX_MARK_END_CLASS();
}

void ZPP_Broadphase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(is_sweep,"is_sweep");
	HX_VISIT_MEMBER_NAME(sweep,"sweep");
	HX_VISIT_MEMBER_NAME(dynab,"dynab");
	HX_VISIT_MEMBER_NAME(aabbShape,"aabbShape");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(circShape,"circShape");
}

Dynamic ZPP_Broadphase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return sync_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"dynab") ) { return dynab; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_sweep") ) { return is_sweep; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aabbShape") ) { return aabbShape; }
		if (HX_FIELD_EQ(inName,"circShape") ) { return circShape; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { return validateShape_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAABBShape") ) { return updateAABBShape_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCircShape") ) { return updateCircShape_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Broadphase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::space::ZPP_SweepPhase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynab") ) { dynab=inValue.Cast< ::zpp_nape::space::ZPP_DynAABBPhase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::nape::geom::Mat23 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_sweep") ) { is_sweep=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aabbShape") ) { aabbShape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"circShape") ) { circShape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Broadphase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("is_sweep"));
	outFields->push(HX_CSTRING("sweep"));
	outFields->push(HX_CSTRING("dynab"));
	outFields->push(HX_CSTRING("aabbShape"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("circShape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Broadphase_obj,space),HX_CSTRING("space")},
	{hx::fsBool,(int)offsetof(ZPP_Broadphase_obj,is_sweep),HX_CSTRING("is_sweep")},
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepPhase*/ ,(int)offsetof(ZPP_Broadphase_obj,sweep),HX_CSTRING("sweep")},
	{hx::fsObject /*::zpp_nape::space::ZPP_DynAABBPhase*/ ,(int)offsetof(ZPP_Broadphase_obj,dynab),HX_CSTRING("dynab")},
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Broadphase_obj,aabbShape),HX_CSTRING("aabbShape")},
	{hx::fsObject /*::nape::geom::Mat23*/ ,(int)offsetof(ZPP_Broadphase_obj,matrix),HX_CSTRING("matrix")},
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Broadphase_obj,circShape),HX_CSTRING("circShape")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("space"),
	HX_CSTRING("is_sweep"),
	HX_CSTRING("sweep"),
	HX_CSTRING("dynab"),
	HX_CSTRING("insert"),
	HX_CSTRING("remove"),
	HX_CSTRING("sync"),
	HX_CSTRING("broadphase"),
	HX_CSTRING("clear"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("aabbShape"),
	HX_CSTRING("matrix"),
	HX_CSTRING("updateAABBShape"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("circShape"),
	HX_CSTRING("updateCircShape"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("validateShape"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("rayMultiCast"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Broadphase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Broadphase_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Broadphase_obj::__mClass;

void ZPP_Broadphase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_Broadphase"), hx::TCanCast< ZPP_Broadphase_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Broadphase_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace space
