#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SweepDistance_obj::__construct()
{
	return null();
}

//ZPP_SweepDistance_obj::~ZPP_SweepDistance_obj() { }

Dynamic ZPP_SweepDistance_obj::__CreateEmpty() { return  new ZPP_SweepDistance_obj; }
hx::ObjectPtr< ZPP_SweepDistance_obj > ZPP_SweepDistance_obj::__new()
{  hx::ObjectPtr< ZPP_SweepDistance_obj > result = new ZPP_SweepDistance_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SweepDistance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepDistance_obj > result = new ZPP_SweepDistance_obj();
	result->__construct();
	return result;}

Void ZPP_SweepDistance_obj::dynamicSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius,hx::Null< bool >  __o_userAPI){
bool userAPI = __o_userAPI.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","dynamicSweep",0x731dabf0,"zpp_nape.geom.ZPP_SweepDistance.dynamicSweep","zpp_nape/geom/SweepDistance.hx",230,0x2645f2ee)
	HX_STACK_ARG(toi,"toi")
	HX_STACK_ARG(timeStep,"timeStep")
	HX_STACK_ARG(lowerBound,"lowerBound")
	HX_STACK_ARG(negRadius,"negRadius")
	HX_STACK_ARG(userAPI,"userAPI")
{
		HX_STACK_LINE(231)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(232)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(234)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(235)
		Float deltax = 0.0;		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(236)
		Float deltay = 0.0;		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(238)
			deltax = (b2->velx - b1->velx);
			HX_STACK_LINE(239)
			deltay = (b2->vely - b1->vely);
		}
		HX_STACK_LINE(241)
		Float ang1 = b1->angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(242)
		if (((ang1 < (int)0))){
			HX_STACK_LINE(242)
			ang1 = -(ang1);
		}
		HX_STACK_LINE(243)
		Float ang2 = b2->angvel;		HX_STACK_VAR(ang2,"ang2");
		HX_STACK_LINE(244)
		if (((ang2 < (int)0))){
			HX_STACK_LINE(244)
			ang2 = -(ang2);
		}
		HX_STACK_LINE(245)
		Float angBias = ((s1->sweepCoef * ang1) + (s2->sweepCoef * ang2));		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(246)
		if (((bool((bool((bool(!(userAPI)) && bool(!(toi->kinematic)))) && bool((((deltax * deltax) + (deltay * deltay)) < (::nape::Config_obj::dynamicSweepLinearThreshold * ::nape::Config_obj::dynamicSweepLinearThreshold))))) && bool((angBias < ::nape::Config_obj::dynamicSweepAngularThreshold))))){
			HX_STACK_LINE(247)
			toi->toi = (int)-1;
			HX_STACK_LINE(248)
			toi->failed = true;
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(252)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(253)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(254)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(255)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(257)
				Float delta = (dt - b1->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(257)
				if (((delta != (int)0))){
					HX_STACK_LINE(257)
					b1->sweepTime = dt;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(257)
						hx::AddEq(b1->posx,(b1->velx * t));
						HX_STACK_LINE(257)
						hx::AddEq(b1->posy,(b1->vely * t));
					}
					HX_STACK_LINE(257)
					if (((b1->angvel != (int)0))){
						HX_STACK_LINE(257)
						Float dr = (b1->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(257)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(257)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(257)
							Float _g = ::Math_obj::sin(b1->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(257)
							b1->axisx = _g;
							HX_STACK_LINE(257)
							Float _g1 = ::Math_obj::cos(b1->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(257)
							b1->axisy = _g1;
							HX_STACK_LINE(257)
							Dynamic();
						}
						else{
							HX_STACK_LINE(257)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(257)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(257)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(257)
							Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(257)
							b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
							HX_STACK_LINE(257)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(258)
			if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(258)
				s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
				HX_STACK_LINE(258)
				s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
			}
			else{
				HX_STACK_LINE(258)
				::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(258)
							li = li->next;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
								HX_STACK_LINE(258)
								g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
							}
						}
						HX_STACK_LINE(258)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(258)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(258)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(258)
							ite = ite->next;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(258)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(258)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(258)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(258)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
						HX_STACK_LINE(258)
						u = v;
						HX_STACK_LINE(258)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(258)
						ite = ite->next;
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
							HX_STACK_LINE(258)
							e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
						}
						HX_STACK_LINE(258)
						e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(258)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(258)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(259)
				Float delta = (dt - b2->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(259)
				if (((delta != (int)0))){
					HX_STACK_LINE(259)
					b2->sweepTime = dt;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(259)
						hx::AddEq(b2->posx,(b2->velx * t));
						HX_STACK_LINE(259)
						hx::AddEq(b2->posy,(b2->vely * t));
					}
					HX_STACK_LINE(259)
					if (((b2->angvel != (int)0))){
						HX_STACK_LINE(259)
						Float dr = (b2->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(259)
						hx::AddEq(b2->rot,dr);
						HX_STACK_LINE(259)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(259)
							Float _g2 = ::Math_obj::sin(b2->rot);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(259)
							b2->axisx = _g2;
							HX_STACK_LINE(259)
							Float _g3 = ::Math_obj::cos(b2->rot);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(259)
							b2->axisy = _g3;
							HX_STACK_LINE(259)
							Dynamic();
						}
						else{
							HX_STACK_LINE(259)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(259)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(259)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(259)
							Float nx = ((((p * b2->axisx) + (dr * b2->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(259)
							b2->axisy = ((((p * b2->axisy) - (dr * b2->axisx))) * m);
							HX_STACK_LINE(259)
							b2->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(260)
			if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(260)
				s2->worldCOMx = (b2->posx + (((b2->axisy * s2->localCOMx) - (b2->axisx * s2->localCOMy))));
				HX_STACK_LINE(260)
				s2->worldCOMy = (b2->posy + (((s2->localCOMx * b2->axisx) + (s2->localCOMy * b2->axisy))));
			}
			else{
				HX_STACK_LINE(260)
				::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(260)
				::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(260)
					while((true)){
						HX_STACK_LINE(260)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(260)
							break;
						}
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(260)
							li = li->next;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								g->x = (b2->posx + (((b2->axisy * l->x) - (b2->axisx * l->y))));
								HX_STACK_LINE(260)
								g->y = (b2->posy + (((l->x * b2->axisx) + (l->y * b2->axisy))));
							}
						}
						HX_STACK_LINE(260)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(260)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(260)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(260)
					while((true)){
						HX_STACK_LINE(260)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(260)
							break;
						}
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(260)
							ite = ite->next;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
								HX_STACK_LINE(260)
								e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
							}
							HX_STACK_LINE(260)
							e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(260)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(260)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
						HX_STACK_LINE(260)
						u = v;
						HX_STACK_LINE(260)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(260)
						ite = ite->next;
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
							HX_STACK_LINE(260)
							e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
						}
						HX_STACK_LINE(260)
						e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(260)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(260)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
				}
			}
			HX_STACK_LINE(261)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(261)
				Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(261)
				if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(261)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(261)
						Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							nx = (c21->worldCOMx - c11->worldCOMx);
							HX_STACK_LINE(261)
							ny = (c21->worldCOMy - c11->worldCOMy);
						}
						HX_STACK_LINE(261)
						Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(261)
						dist = (len - ((c11->radius + c21->radius)));
						HX_STACK_LINE(261)
						if (((dist < upperBound))){
							HX_STACK_LINE(261)
							if (((len == (int)0))){
								HX_STACK_LINE(261)
								nx = (int)1;
								HX_STACK_LINE(261)
								ny = (int)0;
								HX_STACK_LINE(261)
								{
								}
							}
							else{
								HX_STACK_LINE(261)
								Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								hx::MultEq(nx,t);
								HX_STACK_LINE(261)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								w1->x = (c11->worldCOMx + (nx * t));
								HX_STACK_LINE(261)
								w1->y = (c11->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								w2->x = (c21->worldCOMx + (nx * t));
								HX_STACK_LINE(261)
								w2->y = (c21->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								axis->x = nx;
								HX_STACK_LINE(261)
								axis->y = ny;
								HX_STACK_LINE(261)
								{
								}
							}
						}
					}
					HX_STACK_LINE(261)
					_g6 = dist;
				}
				else{
					HX_STACK_LINE(261)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(261)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(261)
						s11 = s21;
						HX_STACK_LINE(261)
						s21 = tmp;
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(261)
						w1 = w2;
						HX_STACK_LINE(261)
						w2 = tmp2;
						HX_STACK_LINE(261)
						swapped = true;
					}
					HX_STACK_LINE(261)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(261)
						Float best = -1e+100;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(261)
									if (((dist > upperBound))){
										HX_STACK_LINE(261)
										best = dist;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									if (((dist > (int)0))){
										HX_STACK_LINE(261)
										if (((dist > best))){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(261)
										if (((bool((best < (int)0)) && bool((dist > best))))){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						if (((best < upperBound))){
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(261)
							Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(261)
							if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
								HX_STACK_LINE(261)
								Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(261)
								Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									nx = (circle->worldCOMx - v0->x);
									HX_STACK_LINE(261)
									ny = (circle->worldCOMy - v0->y);
								}
								HX_STACK_LINE(261)
								Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(261)
								best = (len - circle->radius);
								HX_STACK_LINE(261)
								if (((best < upperBound))){
									HX_STACK_LINE(261)
									if (((len == (int)0))){
										HX_STACK_LINE(261)
										nx = (int)1;
										HX_STACK_LINE(261)
										ny = (int)0;
										HX_STACK_LINE(261)
										{
										}
									}
									else{
										HX_STACK_LINE(261)
										Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										hx::MultEq(nx,t);
										HX_STACK_LINE(261)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										w1->x = (v0->x + (nx * t));
										HX_STACK_LINE(261)
										w1->y = (v0->y + (ny * t));
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										w2->x = (circle->worldCOMx + (nx * t));
										HX_STACK_LINE(261)
										w2->y = (circle->worldCOMy + (ny * t));
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = nx;
										HX_STACK_LINE(261)
										axis->y = ny;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
									HX_STACK_LINE(261)
									Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(261)
									Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										nx = (circle->worldCOMx - v1->x);
										HX_STACK_LINE(261)
										ny = (circle->worldCOMy - v1->y);
									}
									HX_STACK_LINE(261)
									Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(261)
									best = (len - circle->radius);
									HX_STACK_LINE(261)
									if (((best < upperBound))){
										HX_STACK_LINE(261)
										if (((len == (int)0))){
											HX_STACK_LINE(261)
											nx = (int)1;
											HX_STACK_LINE(261)
											ny = (int)0;
											HX_STACK_LINE(261)
											{
											}
										}
										else{
											HX_STACK_LINE(261)
											Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(nx,t);
											HX_STACK_LINE(261)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											w1->x = (v1->x + (nx * t));
											HX_STACK_LINE(261)
											w1->y = (v1->y + (ny * t));
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											w2->x = (circle->worldCOMx + (nx * t));
											HX_STACK_LINE(261)
											w2->y = (circle->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											axis->x = nx;
											HX_STACK_LINE(261)
											axis->y = ny;
											HX_STACK_LINE(261)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										w2->x = (circle->worldCOMx + (a0->gnormx * t));
										HX_STACK_LINE(261)
										w2->y = (circle->worldCOMy + (a0->gnormy * t));
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = -(best);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										w1->x = (w2->x + (a0->gnormx * t));
										HX_STACK_LINE(261)
										w1->y = (w2->y + (a0->gnormy * t));
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = a0->gnormx;
										HX_STACK_LINE(261)
										axis->y = a0->gnormy;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(261)
						if ((swapped)){
							HX_STACK_LINE(261)
							axis->x = -(axis->x);
							HX_STACK_LINE(261)
							axis->y = -(axis->y);
						}
						HX_STACK_LINE(261)
						_g6 = best;
					}
					else{
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(261)
						Float best = -1e+100;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(261)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float min = 1e100;		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(261)
										while((true)){
											HX_STACK_LINE(261)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(261)
												break;
											}
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(261)
												if (((k < min))){
													HX_STACK_LINE(261)
													min = k;
												}
											}
											HX_STACK_LINE(261)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(261)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(261)
									if (((min > upperBound))){
										HX_STACK_LINE(261)
										best = min;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									if (((min > (int)0))){
										HX_STACK_LINE(261)
										if (((min > best))){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(261)
										if (((bool((best < (int)0)) && bool((min > best))))){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						if (((best < upperBound))){
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(261)
								while((true)){
									HX_STACK_LINE(261)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float min = 1e100;		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(261)
											while((true)){
												HX_STACK_LINE(261)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(261)
													break;
												}
												HX_STACK_LINE(261)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(261)
													if (((k < min))){
														HX_STACK_LINE(261)
														min = k;
													}
												}
												HX_STACK_LINE(261)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(261)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(261)
										if (((min > upperBound))){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										if (((min > (int)0))){
											HX_STACK_LINE(261)
											if (((min > best))){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(261)
											if (((bool((best < (int)0)) && bool((min > best))))){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(261)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(261)
							if (((best < upperBound))){
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(261)
								if (((besti == (int)1))){
									HX_STACK_LINE(261)
									q1 = p1;
									HX_STACK_LINE(261)
									q2 = p2;
									HX_STACK_LINE(261)
									ax = a1;
								}
								else{
									HX_STACK_LINE(261)
									q1 = p2;
									HX_STACK_LINE(261)
									q2 = p1;
									HX_STACK_LINE(261)
									ax = a2;
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(261)
									w1 = w2;
									HX_STACK_LINE(261)
									w2 = tmp;
									HX_STACK_LINE(261)
									swapped = !(swapped);
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(261)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(261)
									while((true)){
										HX_STACK_LINE(261)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(261)
											if (((k < min))){
												HX_STACK_LINE(261)
												min = k;
												HX_STACK_LINE(261)
												ay = a;
											}
										}
										HX_STACK_LINE(261)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(261)
								if ((swapped)){
									HX_STACK_LINE(261)
									axis->x = -(ax->gnormx);
									HX_STACK_LINE(261)
									axis->y = -(ax->gnormy);
									HX_STACK_LINE(261)
									{
									}
								}
								else{
									HX_STACK_LINE(261)
									axis->x = ax->gnormx;
									HX_STACK_LINE(261)
									axis->y = ax->gnormy;
									HX_STACK_LINE(261)
									{
									}
								}
								HX_STACK_LINE(261)
								if (((best >= (int)0))){
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(261)
									Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(261)
									Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(261)
									Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(261)
									Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										vx = (v1->x - v0->x);
										HX_STACK_LINE(261)
										vy = (v1->y - v0->y);
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										qx = (q11->x - q0->x);
										HX_STACK_LINE(261)
										qy = (q11->y - q0->y);
									}
									HX_STACK_LINE(261)
									Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(261)
									Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(261)
									Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(261)
									Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(261)
									Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(261)
									if (((t1 < (int)0))){
										HX_STACK_LINE(261)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										if (((t1 > (int)1))){
											HX_STACK_LINE(261)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									if (((t2 < (int)0))){
										HX_STACK_LINE(261)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										if (((t2 > (int)1))){
											HX_STACK_LINE(261)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									if (((s12 < (int)0))){
										HX_STACK_LINE(261)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										if (((s12 > (int)1))){
											HX_STACK_LINE(261)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									if (((s22 < (int)0))){
										HX_STACK_LINE(261)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										if (((s22 > (int)1))){
											HX_STACK_LINE(261)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(261)
									Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										f1x = (v0->x + (vx * t));
										HX_STACK_LINE(261)
										f1y = (v0->y + (vy * t));
									}
									HX_STACK_LINE(261)
									Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(261)
									Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										f2x = (v0->x + (vx * t));
										HX_STACK_LINE(261)
										f2y = (v0->y + (vy * t));
									}
									HX_STACK_LINE(261)
									Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(261)
									Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										g1x = (q0->x + (qx * t));
										HX_STACK_LINE(261)
										g1y = (q0->y + (qy * t));
									}
									HX_STACK_LINE(261)
									Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(261)
									Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										g2x = (q0->x + (qx * t));
										HX_STACK_LINE(261)
										g2y = (q0->y + (qy * t));
									}
									HX_STACK_LINE(261)
									Float d1;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											dx = (f1x - q0->x);
											HX_STACK_LINE(261)
											dy = (f1y - q0->y);
										}
										HX_STACK_LINE(261)
										d1 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(261)
									Float d2;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											dx = (f2x - q11->x);
											HX_STACK_LINE(261)
											dy = (f2y - q11->y);
										}
										HX_STACK_LINE(261)
										d2 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(261)
									Float e1;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											dx = (g1x - v0->x);
											HX_STACK_LINE(261)
											dy = (g1y - v0->y);
										}
										HX_STACK_LINE(261)
										e1 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(261)
									Float e2;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											dx = (g2x - v1->x);
											HX_STACK_LINE(261)
											dy = (g2y - v1->y);
										}
										HX_STACK_LINE(261)
										e2 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(261)
									Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(261)
									Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(261)
									if (((d1 < d2))){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f1x;
											HX_STACK_LINE(261)
											minfy = f1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f2x;
											HX_STACK_LINE(261)
											minfy = f2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q11;
										HX_STACK_LINE(261)
										d1 = d2;
									}
									HX_STACK_LINE(261)
									Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(261)
									Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(261)
									if (((e1 < e2))){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g1x;
											HX_STACK_LINE(261)
											mingy = g1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g2x;
											HX_STACK_LINE(261)
											mingy = g2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v1;
										HX_STACK_LINE(261)
										e1 = e2;
									}
									HX_STACK_LINE(261)
									if (((d1 < e1))){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minfx;
											HX_STACK_LINE(261)
											w1->y = minfy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = minq->x;
											HX_STACK_LINE(261)
											w2->y = minq->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float _g4 = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(261)
										best = _g4;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = mingx;
											HX_STACK_LINE(261)
											w2->y = mingy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minv->x;
											HX_STACK_LINE(261)
											w1->y = minv->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float _g5 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(261)
										best = _g5;
									}
									HX_STACK_LINE(261)
									if (((best != (int)0))){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											axis->x = (w2->x - w1->x);
											HX_STACK_LINE(261)
											axis->y = (w2->y - w1->y);
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(261)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(261)
										if ((swapped)){
											HX_STACK_LINE(261)
											axis->x = -(axis->x);
											HX_STACK_LINE(261)
											axis->y = -(axis->y);
										}
									}
									HX_STACK_LINE(261)
									_g6 = best;
								}
								else{
									HX_STACK_LINE(261)
									Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(261)
									Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										c0x = ay->gp0->x;
										HX_STACK_LINE(261)
										c0y = ay->gp0->y;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(261)
									Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										c1x = ay->gp1->x;
										HX_STACK_LINE(261)
										c1y = ay->gp1->y;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(261)
									Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										dvx = (c1x - c0x);
										HX_STACK_LINE(261)
										dvy = (c1y - c0y);
									}
									HX_STACK_LINE(261)
									Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(261)
									Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(261)
									Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(261)
									if (((t > ::nape::Config_obj::epsilon))){
										HX_STACK_LINE(261)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(261)
										hx::AddEq(c0x,(dvx * t1));
										HX_STACK_LINE(261)
										hx::AddEq(c0y,(dvy * t1));
									}
									HX_STACK_LINE(261)
									Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									if (((t1 < -(::nape::Config_obj::epsilon)))){
										HX_STACK_LINE(261)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(261)
										hx::AddEq(c1x,(dvx * t2));
										HX_STACK_LINE(261)
										hx::AddEq(c1y,(dvy * t2));
									}
									HX_STACK_LINE(261)
									Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(261)
									Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(261)
									if (((c0d < c1d))){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c0x;
											HX_STACK_LINE(261)
											w2->y = c0y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											w1->x = (w2->x + (ax->gnormx * t2));
											HX_STACK_LINE(261)
											w1->y = (w2->y + (ax->gnormy * t2));
										}
										HX_STACK_LINE(261)
										_g6 = c0d;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c1x;
											HX_STACK_LINE(261)
											w2->y = c1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											w1->x = (w2->x + (ax->gnormx * t2));
											HX_STACK_LINE(261)
											w1->y = (w2->y + (ax->gnormy * t2));
										}
										HX_STACK_LINE(261)
										_g6 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								_g6 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(261)
							_g6 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(261)
			Float sep = (_g6 + negRadius);		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(262)
			Float dot = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(263)
			if (((sep < ::nape::Config_obj::distanceThresholdCCD))){
				HX_STACK_LINE(264)
				if ((userAPI)){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(267)
				Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(268)
				Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					d1x = (c1->x - b1->posx);
					HX_STACK_LINE(271)
					d1y = (c1->y - b1->posy);
				}
				HX_STACK_LINE(273)
				Float d2x = 0.0;		HX_STACK_VAR(d2x,"d2x");
				HX_STACK_LINE(274)
				Float d2y = 0.0;		HX_STACK_VAR(d2y,"d2y");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(276)
					d2x = (c2->x - b2->posx);
					HX_STACK_LINE(277)
					d2y = (c2->y - b2->posy);
				}
				HX_STACK_LINE(279)
				Float proj = ((dot - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y))))) + (b2->sweep_angvel * (((axis->y * d2x) - (axis->x * d2y)))));		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(280)
				if (((proj > (int)0))){
					HX_STACK_LINE(281)
					toi->slipped = true;
				}
				HX_STACK_LINE(283)
				if (((bool((proj <= (int)0)) || bool((sep < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
					HX_STACK_LINE(284)
					break;
				}
			}
			HX_STACK_LINE(287)
			Float denom = (((angBias - dot)) * timeStep);		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(288)
			if (((denom <= (int)0))){
				HX_STACK_LINE(289)
				curTOI = (int)-1;
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(292)
			Float delta = (Float(sep) / Float(denom));		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(293)
			if (((delta < 1e-6))){
				HX_STACK_LINE(293)
				delta = 1e-6;
			}
			HX_STACK_LINE(294)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(295)
			if (((curTOI >= (int)1))){
				HX_STACK_LINE(296)
				curTOI = (int)1;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(297)
					Float delta1 = (dt - b1->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(297)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(297)
						b1->sweepTime = dt;
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(297)
							hx::AddEq(b1->posx,(b1->velx * t));
							HX_STACK_LINE(297)
							hx::AddEq(b1->posy,(b1->vely * t));
						}
						HX_STACK_LINE(297)
						if (((b1->angvel != (int)0))){
							HX_STACK_LINE(297)
							Float dr = (b1->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(297)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(297)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(297)
								Float _g7 = ::Math_obj::sin(b1->rot);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(297)
								b1->axisx = _g7;
								HX_STACK_LINE(297)
								Float _g8 = ::Math_obj::cos(b1->rot);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(297)
								b1->axisy = _g8;
								HX_STACK_LINE(297)
								Dynamic();
							}
							else{
								HX_STACK_LINE(297)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(297)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(297)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(297)
								Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(297)
								b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
								HX_STACK_LINE(297)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(298)
				if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(298)
					s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
					HX_STACK_LINE(298)
					s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
				}
				else{
					HX_STACK_LINE(298)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(298)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(298)
					{
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(298)
						while((true)){
							HX_STACK_LINE(298)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(298)
								break;
							}
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(298)
								li = li->next;
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
									HX_STACK_LINE(298)
									g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
								}
							}
							HX_STACK_LINE(298)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(298)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(298)
					{
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(298)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(298)
						while((true)){
							HX_STACK_LINE(298)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(298)
								break;
							}
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(298)
								ite = ite->next;
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(298)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(298)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(298)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(298)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(298)
							u = v;
							HX_STACK_LINE(298)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(298)
							ite = ite->next;
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(298)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(298)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(298)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(298)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(299)
					Float delta1 = (dt - b2->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(299)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(299)
						b2->sweepTime = dt;
						HX_STACK_LINE(299)
						{
							HX_STACK_LINE(299)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(299)
							hx::AddEq(b2->posx,(b2->velx * t));
							HX_STACK_LINE(299)
							hx::AddEq(b2->posy,(b2->vely * t));
						}
						HX_STACK_LINE(299)
						if (((b2->angvel != (int)0))){
							HX_STACK_LINE(299)
							Float dr = (b2->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(299)
							hx::AddEq(b2->rot,dr);
							HX_STACK_LINE(299)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(299)
								Float _g9 = ::Math_obj::sin(b2->rot);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(299)
								b2->axisx = _g9;
								HX_STACK_LINE(299)
								Float _g10 = ::Math_obj::cos(b2->rot);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(299)
								b2->axisy = _g10;
								HX_STACK_LINE(299)
								Dynamic();
							}
							else{
								HX_STACK_LINE(299)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(299)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(299)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(299)
								Float nx = ((((p * b2->axisx) + (dr * b2->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(299)
								b2->axisy = ((((p * b2->axisy) - (dr * b2->axisx))) * m);
								HX_STACK_LINE(299)
								b2->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(300)
				if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(300)
					s2->worldCOMx = (b2->posx + (((b2->axisy * s2->localCOMx) - (b2->axisx * s2->localCOMy))));
					HX_STACK_LINE(300)
					s2->worldCOMy = (b2->posy + (((s2->localCOMx * b2->axisx) + (s2->localCOMy * b2->axisy))));
				}
				else{
					HX_STACK_LINE(300)
					::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(300)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(300)
					{
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(300)
						while((true)){
							HX_STACK_LINE(300)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(300)
								break;
							}
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(300)
								li = li->next;
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									g->x = (b2->posx + (((b2->axisy * l->x) - (b2->axisx * l->y))));
									HX_STACK_LINE(300)
									g->y = (b2->posy + (((l->x * b2->axisx) + (l->y * b2->axisy))));
								}
							}
							HX_STACK_LINE(300)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(300)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(300)
					{
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(300)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(300)
						while((true)){
							HX_STACK_LINE(300)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(300)
								break;
							}
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(300)
								ite = ite->next;
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
									HX_STACK_LINE(300)
									e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
								}
								HX_STACK_LINE(300)
								e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(300)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(300)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(300)
							u = v;
							HX_STACK_LINE(300)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(300)
							ite = ite->next;
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
								HX_STACK_LINE(300)
								e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
							}
							HX_STACK_LINE(300)
							e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(300)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(300)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
				HX_STACK_LINE(301)
				Float _g13;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(301)
					Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(301)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(301)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(301)
							Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								nx = (c21->worldCOMx - c11->worldCOMx);
								HX_STACK_LINE(301)
								ny = (c21->worldCOMy - c11->worldCOMy);
							}
							HX_STACK_LINE(301)
							Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(301)
							dist = (len - ((c11->radius + c21->radius)));
							HX_STACK_LINE(301)
							if (((dist < upperBound))){
								HX_STACK_LINE(301)
								if (((len == (int)0))){
									HX_STACK_LINE(301)
									nx = (int)1;
									HX_STACK_LINE(301)
									ny = (int)0;
									HX_STACK_LINE(301)
									{
									}
								}
								else{
									HX_STACK_LINE(301)
									Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									hx::MultEq(nx,t);
									HX_STACK_LINE(301)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									w1->x = (c11->worldCOMx + (nx * t));
									HX_STACK_LINE(301)
									w1->y = (c11->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									w2->x = (c21->worldCOMx + (nx * t));
									HX_STACK_LINE(301)
									w2->y = (c21->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									axis->x = nx;
									HX_STACK_LINE(301)
									axis->y = ny;
									HX_STACK_LINE(301)
									{
									}
								}
							}
						}
						HX_STACK_LINE(301)
						_g13 = dist;
					}
					else{
						HX_STACK_LINE(301)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(301)
						if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(301)
							s11 = s21;
							HX_STACK_LINE(301)
							s21 = tmp;
							HX_STACK_LINE(301)
							::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(301)
							w1 = w2;
							HX_STACK_LINE(301)
							w2 = tmp2;
							HX_STACK_LINE(301)
							swapped = true;
						}
						HX_STACK_LINE(301)
						if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(301)
							Float best = -1e+100;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(301)
										if (((dist > upperBound))){
											HX_STACK_LINE(301)
											best = dist;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										if (((dist > (int)0))){
											HX_STACK_LINE(301)
											if (((dist > best))){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(301)
											if (((bool((best < (int)0)) && bool((dist > best))))){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							if (((best < upperBound))){
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(301)
								Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(301)
								if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
									HX_STACK_LINE(301)
									Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(301)
									Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										nx = (circle->worldCOMx - v0->x);
										HX_STACK_LINE(301)
										ny = (circle->worldCOMy - v0->y);
									}
									HX_STACK_LINE(301)
									Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(301)
									best = (len - circle->radius);
									HX_STACK_LINE(301)
									if (((best < upperBound))){
										HX_STACK_LINE(301)
										if (((len == (int)0))){
											HX_STACK_LINE(301)
											nx = (int)1;
											HX_STACK_LINE(301)
											ny = (int)0;
											HX_STACK_LINE(301)
											{
											}
										}
										else{
											HX_STACK_LINE(301)
											Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											hx::MultEq(nx,t);
											HX_STACK_LINE(301)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											w1->x = (v0->x + (nx * t));
											HX_STACK_LINE(301)
											w1->y = (v0->y + (ny * t));
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											w2->x = (circle->worldCOMx + (nx * t));
											HX_STACK_LINE(301)
											w2->y = (circle->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = nx;
											HX_STACK_LINE(301)
											axis->y = ny;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
										HX_STACK_LINE(301)
										Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(301)
										Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											nx = (circle->worldCOMx - v1->x);
											HX_STACK_LINE(301)
											ny = (circle->worldCOMy - v1->y);
										}
										HX_STACK_LINE(301)
										Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(301)
										best = (len - circle->radius);
										HX_STACK_LINE(301)
										if (((best < upperBound))){
											HX_STACK_LINE(301)
											if (((len == (int)0))){
												HX_STACK_LINE(301)
												nx = (int)1;
												HX_STACK_LINE(301)
												ny = (int)0;
												HX_STACK_LINE(301)
												{
												}
											}
											else{
												HX_STACK_LINE(301)
												Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(nx,t);
												HX_STACK_LINE(301)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												w1->x = (v1->x + (nx * t));
												HX_STACK_LINE(301)
												w1->y = (v1->y + (ny * t));
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												w2->x = (circle->worldCOMx + (nx * t));
												HX_STACK_LINE(301)
												w2->y = (circle->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												axis->x = nx;
												HX_STACK_LINE(301)
												axis->y = ny;
												HX_STACK_LINE(301)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											w2->x = (circle->worldCOMx + (a0->gnormx * t));
											HX_STACK_LINE(301)
											w2->y = (circle->worldCOMy + (a0->gnormy * t));
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = -(best);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											w1->x = (w2->x + (a0->gnormx * t));
											HX_STACK_LINE(301)
											w1->y = (w2->y + (a0->gnormy * t));
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = a0->gnormx;
											HX_STACK_LINE(301)
											axis->y = a0->gnormy;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(301)
							if ((swapped)){
								HX_STACK_LINE(301)
								axis->x = -(axis->x);
								HX_STACK_LINE(301)
								axis->y = -(axis->y);
							}
							HX_STACK_LINE(301)
							_g13 = best;
						}
						else{
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(301)
							Float best = -1e+100;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(301)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float min = 1e100;		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(301)
											while((true)){
												HX_STACK_LINE(301)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(301)
													break;
												}
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(301)
													if (((k < min))){
														HX_STACK_LINE(301)
														min = k;
													}
												}
												HX_STACK_LINE(301)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(301)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(301)
										if (((min > upperBound))){
											HX_STACK_LINE(301)
											best = min;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										if (((min > (int)0))){
											HX_STACK_LINE(301)
											if (((min > best))){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(301)
											if (((bool((best < (int)0)) && bool((min > best))))){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							if (((best < upperBound))){
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(301)
									while((true)){
										HX_STACK_LINE(301)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float min = 1e100;		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(301)
												while((true)){
													HX_STACK_LINE(301)
													if ((!(((cx_ite1 != null()))))){
														HX_STACK_LINE(301)
														break;
													}
													HX_STACK_LINE(301)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(301)
													{
														HX_STACK_LINE(301)
														Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(301)
														if (((k < min))){
															HX_STACK_LINE(301)
															min = k;
														}
													}
													HX_STACK_LINE(301)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(301)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(301)
											if (((min > upperBound))){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											if (((min > (int)0))){
												HX_STACK_LINE(301)
												if (((min > best))){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(301)
												if (((bool((best < (int)0)) && bool((min > best))))){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(301)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(301)
								if (((best < upperBound))){
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(301)
									if (((besti == (int)1))){
										HX_STACK_LINE(301)
										q1 = p1;
										HX_STACK_LINE(301)
										q2 = p2;
										HX_STACK_LINE(301)
										ax = a1;
									}
									else{
										HX_STACK_LINE(301)
										q1 = p2;
										HX_STACK_LINE(301)
										q2 = p1;
										HX_STACK_LINE(301)
										ax = a2;
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
										HX_STACK_LINE(301)
										w1 = w2;
										HX_STACK_LINE(301)
										w2 = tmp;
										HX_STACK_LINE(301)
										swapped = !(swapped);
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(301)
									Float min = 1e100;		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(301)
										while((true)){
											HX_STACK_LINE(301)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(301)
												if (((k < min))){
													HX_STACK_LINE(301)
													min = k;
													HX_STACK_LINE(301)
													ay = a;
												}
											}
											HX_STACK_LINE(301)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(301)
									if ((swapped)){
										HX_STACK_LINE(301)
										axis->x = -(ax->gnormx);
										HX_STACK_LINE(301)
										axis->y = -(ax->gnormy);
										HX_STACK_LINE(301)
										{
										}
									}
									else{
										HX_STACK_LINE(301)
										axis->x = ax->gnormx;
										HX_STACK_LINE(301)
										axis->y = ax->gnormy;
										HX_STACK_LINE(301)
										{
										}
									}
									HX_STACK_LINE(301)
									if (((best >= (int)0))){
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(301)
										Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(301)
										Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(301)
										Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(301)
										Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											vx = (v1->x - v0->x);
											HX_STACK_LINE(301)
											vy = (v1->y - v0->y);
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											qx = (q11->x - q0->x);
											HX_STACK_LINE(301)
											qy = (q11->y - q0->y);
										}
										HX_STACK_LINE(301)
										Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(301)
										Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(301)
										Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(301)
										Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(301)
										Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(301)
										if (((t1 < (int)0))){
											HX_STACK_LINE(301)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											if (((t1 > (int)1))){
												HX_STACK_LINE(301)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										if (((t2 < (int)0))){
											HX_STACK_LINE(301)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											if (((t2 > (int)1))){
												HX_STACK_LINE(301)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										if (((s12 < (int)0))){
											HX_STACK_LINE(301)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											if (((s12 > (int)1))){
												HX_STACK_LINE(301)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										if (((s22 < (int)0))){
											HX_STACK_LINE(301)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											if (((s22 > (int)1))){
												HX_STACK_LINE(301)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(301)
										Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											f1x = (v0->x + (vx * t));
											HX_STACK_LINE(301)
											f1y = (v0->y + (vy * t));
										}
										HX_STACK_LINE(301)
										Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(301)
										Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											f2x = (v0->x + (vx * t));
											HX_STACK_LINE(301)
											f2y = (v0->y + (vy * t));
										}
										HX_STACK_LINE(301)
										Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(301)
										Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											g1x = (q0->x + (qx * t));
											HX_STACK_LINE(301)
											g1y = (q0->y + (qy * t));
										}
										HX_STACK_LINE(301)
										Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(301)
										Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											g2x = (q0->x + (qx * t));
											HX_STACK_LINE(301)
											g2y = (q0->y + (qy * t));
										}
										HX_STACK_LINE(301)
										Float d1;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												dx = (f1x - q0->x);
												HX_STACK_LINE(301)
												dy = (f1y - q0->y);
											}
											HX_STACK_LINE(301)
											d1 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(301)
										Float d2;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												dx = (f2x - q11->x);
												HX_STACK_LINE(301)
												dy = (f2y - q11->y);
											}
											HX_STACK_LINE(301)
											d2 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(301)
										Float e1;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												dx = (g1x - v0->x);
												HX_STACK_LINE(301)
												dy = (g1y - v0->y);
											}
											HX_STACK_LINE(301)
											e1 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(301)
										Float e2;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												dx = (g2x - v1->x);
												HX_STACK_LINE(301)
												dy = (g2y - v1->y);
											}
											HX_STACK_LINE(301)
											e2 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(301)
										Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(301)
										Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(301)
										if (((d1 < d2))){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f1x;
												HX_STACK_LINE(301)
												minfy = f1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f2x;
												HX_STACK_LINE(301)
												minfy = f2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q11;
											HX_STACK_LINE(301)
											d1 = d2;
										}
										HX_STACK_LINE(301)
										Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(301)
										Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(301)
										if (((e1 < e2))){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g1x;
												HX_STACK_LINE(301)
												mingy = g1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g2x;
												HX_STACK_LINE(301)
												mingy = g2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v1;
											HX_STACK_LINE(301)
											e1 = e2;
										}
										HX_STACK_LINE(301)
										if (((d1 < e1))){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minfx;
												HX_STACK_LINE(301)
												w1->y = minfy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = minq->x;
												HX_STACK_LINE(301)
												w2->y = minq->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float _g11 = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(301)
											best = _g11;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = mingx;
												HX_STACK_LINE(301)
												w2->y = mingy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minv->x;
												HX_STACK_LINE(301)
												w1->y = minv->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float _g12 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(301)
											best = _g12;
										}
										HX_STACK_LINE(301)
										if (((best != (int)0))){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												axis->x = (w2->x - w1->x);
												HX_STACK_LINE(301)
												axis->y = (w2->y - w1->y);
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(301)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(301)
											if ((swapped)){
												HX_STACK_LINE(301)
												axis->x = -(axis->x);
												HX_STACK_LINE(301)
												axis->y = -(axis->y);
											}
										}
										HX_STACK_LINE(301)
										_g13 = best;
									}
									else{
										HX_STACK_LINE(301)
										Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(301)
										Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											c0x = ay->gp0->x;
											HX_STACK_LINE(301)
											c0y = ay->gp0->y;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(301)
										Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											c1x = ay->gp1->x;
											HX_STACK_LINE(301)
											c1y = ay->gp1->y;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(301)
										Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											dvx = (c1x - c0x);
											HX_STACK_LINE(301)
											dvy = (c1y - c0y);
										}
										HX_STACK_LINE(301)
										Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(301)
										Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(301)
										Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(301)
										if (((t > ::nape::Config_obj::epsilon))){
											HX_STACK_LINE(301)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(301)
											hx::AddEq(c0x,(dvx * t1));
											HX_STACK_LINE(301)
											hx::AddEq(c0y,(dvy * t1));
										}
										HX_STACK_LINE(301)
										Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										if (((t1 < -(::nape::Config_obj::epsilon)))){
											HX_STACK_LINE(301)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(301)
											hx::AddEq(c1x,(dvx * t2));
											HX_STACK_LINE(301)
											hx::AddEq(c1y,(dvy * t2));
										}
										HX_STACK_LINE(301)
										Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(301)
										Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(301)
										if (((c0d < c1d))){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c0x;
												HX_STACK_LINE(301)
												w2->y = c0y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												w1->x = (w2->x + (ax->gnormx * t2));
												HX_STACK_LINE(301)
												w1->y = (w2->y + (ax->gnormy * t2));
											}
											HX_STACK_LINE(301)
											_g13 = c0d;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c1x;
												HX_STACK_LINE(301)
												w2->y = c1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												w1->x = (w2->x + (ax->gnormx * t2));
												HX_STACK_LINE(301)
												w1->y = (w2->y + (ax->gnormy * t2));
											}
											HX_STACK_LINE(301)
											_g13 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									_g13 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(301)
								_g13 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(301)
				Float sep1 = (_g13 + negRadius);		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(302)
				Float dot1 = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(303)
				if (((sep1 < ::nape::Config_obj::distanceThresholdCCD))){
					HX_STACK_LINE(304)
					if ((userAPI)){
						HX_STACK_LINE(305)
						break;
					}
					HX_STACK_LINE(307)
					Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(308)
					Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(310)
						d1x = (c1->x - b1->posx);
						HX_STACK_LINE(311)
						d1y = (c1->y - b1->posy);
					}
					HX_STACK_LINE(313)
					Float d2x = 0.0;		HX_STACK_VAR(d2x,"d2x");
					HX_STACK_LINE(314)
					Float d2y = 0.0;		HX_STACK_VAR(d2y,"d2y");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(316)
						d2x = (c2->x - b2->posx);
						HX_STACK_LINE(317)
						d2y = (c2->y - b2->posy);
					}
					HX_STACK_LINE(319)
					Float proj = ((dot1 - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y))))) + (b2->sweep_angvel * (((axis->y * d2x) - (axis->x * d2y)))));		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(320)
					if (((proj > (int)0))){
						HX_STACK_LINE(321)
						toi->slipped = true;
					}
					HX_STACK_LINE(323)
					if (((bool((proj <= (int)0)) || bool((sep1 < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
						HX_STACK_LINE(324)
						break;
					}
				}
				HX_STACK_LINE(327)
				curTOI = (int)-1;
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(330)
			int _g14 = ++(curIter);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(330)
			if (((_g14 >= (int)40))){
				HX_STACK_LINE(331)
				if (((sep > negRadius))){
					HX_STACK_LINE(332)
					toi->failed = true;
				}
				HX_STACK_LINE(334)
				break;
			}
		}
		HX_STACK_LINE(337)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_SweepDistance_obj,dynamicSweep,(void))

Void ZPP_SweepDistance_obj::staticSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","staticSweep",0x284911bb,"zpp_nape.geom.ZPP_SweepDistance.staticSweep","zpp_nape/geom/SweepDistance.hx",339,0x2645f2ee)
		HX_STACK_ARG(toi,"toi")
		HX_STACK_ARG(timeStep,"timeStep")
		HX_STACK_ARG(lowerBound,"lowerBound")
		HX_STACK_ARG(negRadius,"negRadius")
		HX_STACK_LINE(340)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(341)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(342)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(343)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(344)
		Float deltax = 0.0;		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(345)
		Float deltay = 0.0;		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(347)
			deltax = -(b1->velx);
			HX_STACK_LINE(348)
			deltay = -(b1->vely);
			HX_STACK_LINE(357)
			{
			}
		}
		HX_STACK_LINE(366)
		Float ang1 = b1->sweep_angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(367)
		if (((ang1 < (int)0))){
			HX_STACK_LINE(367)
			ang1 = -(ang1);
		}
		HX_STACK_LINE(368)
		Float angBias = (s1->sweepCoef * ang1);		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(369)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(370)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(372)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(373)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(391)
				Float delta = (dt - b1->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(391)
				if (((delta != (int)0))){
					HX_STACK_LINE(391)
					b1->sweepTime = dt;
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(391)
						hx::AddEq(b1->posx,(b1->velx * t));
						HX_STACK_LINE(391)
						hx::AddEq(b1->posy,(b1->vely * t));
					}
					HX_STACK_LINE(391)
					if (((b1->angvel != (int)0))){
						HX_STACK_LINE(391)
						Float dr = (b1->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(391)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(391)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(391)
							Float _g = ::Math_obj::sin(b1->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(391)
							b1->axisx = _g;
							HX_STACK_LINE(391)
							Float _g1 = ::Math_obj::cos(b1->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(391)
							b1->axisy = _g1;
							HX_STACK_LINE(391)
							Dynamic();
						}
						else{
							HX_STACK_LINE(391)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(391)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(391)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(391)
							Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(391)
							b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
							HX_STACK_LINE(391)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(392)
			if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(392)
				s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
				HX_STACK_LINE(392)
				s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
			}
			else{
				HX_STACK_LINE(392)
				::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(392)
					while((true)){
						HX_STACK_LINE(392)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(392)
							break;
						}
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(392)
							li = li->next;
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
								HX_STACK_LINE(392)
								g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
							}
						}
						HX_STACK_LINE(392)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(392)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(392)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(392)
					while((true)){
						HX_STACK_LINE(392)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(392)
							break;
						}
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(392)
							ite = ite->next;
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(392)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(392)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(392)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(392)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
						HX_STACK_LINE(392)
						u = v;
						HX_STACK_LINE(392)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(392)
						ite = ite->next;
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
							HX_STACK_LINE(392)
							e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
						}
						HX_STACK_LINE(392)
						e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(392)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(392)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
				}
			}
			HX_STACK_LINE(393)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(393)
				Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(393)
				if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(393)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(393)
						Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							nx = (c21->worldCOMx - c11->worldCOMx);
							HX_STACK_LINE(393)
							ny = (c21->worldCOMy - c11->worldCOMy);
						}
						HX_STACK_LINE(393)
						Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(393)
						dist = (len - ((c11->radius + c21->radius)));
						HX_STACK_LINE(393)
						if (((dist < upperBound))){
							HX_STACK_LINE(393)
							if (((len == (int)0))){
								HX_STACK_LINE(393)
								nx = (int)1;
								HX_STACK_LINE(393)
								ny = (int)0;
								HX_STACK_LINE(393)
								{
								}
							}
							else{
								HX_STACK_LINE(393)
								Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								hx::MultEq(nx,t);
								HX_STACK_LINE(393)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								w1->x = (c11->worldCOMx + (nx * t));
								HX_STACK_LINE(393)
								w1->y = (c11->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								w2->x = (c21->worldCOMx + (nx * t));
								HX_STACK_LINE(393)
								w2->y = (c21->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								axis->x = nx;
								HX_STACK_LINE(393)
								axis->y = ny;
								HX_STACK_LINE(393)
								{
								}
							}
						}
					}
					HX_STACK_LINE(393)
					_g4 = dist;
				}
				else{
					HX_STACK_LINE(393)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(393)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(393)
						s11 = s21;
						HX_STACK_LINE(393)
						s21 = tmp;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(393)
						w1 = w2;
						HX_STACK_LINE(393)
						w2 = tmp2;
						HX_STACK_LINE(393)
						swapped = true;
					}
					HX_STACK_LINE(393)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(393)
						Float best = -1e+100;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(393)
									if (((dist > upperBound))){
										HX_STACK_LINE(393)
										best = dist;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									if (((dist > (int)0))){
										HX_STACK_LINE(393)
										if (((dist > best))){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(393)
										if (((bool((best < (int)0)) && bool((dist > best))))){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						if (((best < upperBound))){
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(393)
							Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(393)
							if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
								HX_STACK_LINE(393)
								Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(393)
								Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									nx = (circle->worldCOMx - v0->x);
									HX_STACK_LINE(393)
									ny = (circle->worldCOMy - v0->y);
								}
								HX_STACK_LINE(393)
								Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(393)
								best = (len - circle->radius);
								HX_STACK_LINE(393)
								if (((best < upperBound))){
									HX_STACK_LINE(393)
									if (((len == (int)0))){
										HX_STACK_LINE(393)
										nx = (int)1;
										HX_STACK_LINE(393)
										ny = (int)0;
										HX_STACK_LINE(393)
										{
										}
									}
									else{
										HX_STACK_LINE(393)
										Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										hx::MultEq(nx,t);
										HX_STACK_LINE(393)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										w1->x = (v0->x + (nx * t));
										HX_STACK_LINE(393)
										w1->y = (v0->y + (ny * t));
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										w2->x = (circle->worldCOMx + (nx * t));
										HX_STACK_LINE(393)
										w2->y = (circle->worldCOMy + (ny * t));
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = nx;
										HX_STACK_LINE(393)
										axis->y = ny;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
									HX_STACK_LINE(393)
									Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(393)
									Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										nx = (circle->worldCOMx - v1->x);
										HX_STACK_LINE(393)
										ny = (circle->worldCOMy - v1->y);
									}
									HX_STACK_LINE(393)
									Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(393)
									best = (len - circle->radius);
									HX_STACK_LINE(393)
									if (((best < upperBound))){
										HX_STACK_LINE(393)
										if (((len == (int)0))){
											HX_STACK_LINE(393)
											nx = (int)1;
											HX_STACK_LINE(393)
											ny = (int)0;
											HX_STACK_LINE(393)
											{
											}
										}
										else{
											HX_STACK_LINE(393)
											Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(nx,t);
											HX_STACK_LINE(393)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											w1->x = (v1->x + (nx * t));
											HX_STACK_LINE(393)
											w1->y = (v1->y + (ny * t));
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											w2->x = (circle->worldCOMx + (nx * t));
											HX_STACK_LINE(393)
											w2->y = (circle->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											axis->x = nx;
											HX_STACK_LINE(393)
											axis->y = ny;
											HX_STACK_LINE(393)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										w2->x = (circle->worldCOMx + (a0->gnormx * t));
										HX_STACK_LINE(393)
										w2->y = (circle->worldCOMy + (a0->gnormy * t));
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = -(best);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										w1->x = (w2->x + (a0->gnormx * t));
										HX_STACK_LINE(393)
										w1->y = (w2->y + (a0->gnormy * t));
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = a0->gnormx;
										HX_STACK_LINE(393)
										axis->y = a0->gnormy;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(393)
						if ((swapped)){
							HX_STACK_LINE(393)
							axis->x = -(axis->x);
							HX_STACK_LINE(393)
							axis->y = -(axis->y);
						}
						HX_STACK_LINE(393)
						_g4 = best;
					}
					else{
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(393)
						Float best = -1e+100;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(393)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float min = 1e100;		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(393)
										while((true)){
											HX_STACK_LINE(393)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(393)
												break;
											}
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(393)
												if (((k < min))){
													HX_STACK_LINE(393)
													min = k;
												}
											}
											HX_STACK_LINE(393)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(393)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(393)
									if (((min > upperBound))){
										HX_STACK_LINE(393)
										best = min;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									if (((min > (int)0))){
										HX_STACK_LINE(393)
										if (((min > best))){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(393)
										if (((bool((best < (int)0)) && bool((min > best))))){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						if (((best < upperBound))){
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(393)
								while((true)){
									HX_STACK_LINE(393)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float min = 1e100;		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(393)
											while((true)){
												HX_STACK_LINE(393)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(393)
													break;
												}
												HX_STACK_LINE(393)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(393)
												{
													HX_STACK_LINE(393)
													Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(393)
													if (((k < min))){
														HX_STACK_LINE(393)
														min = k;
													}
												}
												HX_STACK_LINE(393)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(393)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(393)
										if (((min > upperBound))){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										if (((min > (int)0))){
											HX_STACK_LINE(393)
											if (((min > best))){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(393)
											if (((bool((best < (int)0)) && bool((min > best))))){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(393)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(393)
							if (((best < upperBound))){
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(393)
								if (((besti == (int)1))){
									HX_STACK_LINE(393)
									q1 = p1;
									HX_STACK_LINE(393)
									q2 = p2;
									HX_STACK_LINE(393)
									ax = a1;
								}
								else{
									HX_STACK_LINE(393)
									q1 = p2;
									HX_STACK_LINE(393)
									q2 = p1;
									HX_STACK_LINE(393)
									ax = a2;
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(393)
									w1 = w2;
									HX_STACK_LINE(393)
									w2 = tmp;
									HX_STACK_LINE(393)
									swapped = !(swapped);
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(393)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(393)
									while((true)){
										HX_STACK_LINE(393)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(393)
											if (((k < min))){
												HX_STACK_LINE(393)
												min = k;
												HX_STACK_LINE(393)
												ay = a;
											}
										}
										HX_STACK_LINE(393)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(393)
								if ((swapped)){
									HX_STACK_LINE(393)
									axis->x = -(ax->gnormx);
									HX_STACK_LINE(393)
									axis->y = -(ax->gnormy);
									HX_STACK_LINE(393)
									{
									}
								}
								else{
									HX_STACK_LINE(393)
									axis->x = ax->gnormx;
									HX_STACK_LINE(393)
									axis->y = ax->gnormy;
									HX_STACK_LINE(393)
									{
									}
								}
								HX_STACK_LINE(393)
								if (((best >= (int)0))){
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(393)
									Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(393)
									Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(393)
									Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(393)
									Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										vx = (v1->x - v0->x);
										HX_STACK_LINE(393)
										vy = (v1->y - v0->y);
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										qx = (q11->x - q0->x);
										HX_STACK_LINE(393)
										qy = (q11->y - q0->y);
									}
									HX_STACK_LINE(393)
									Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(393)
									Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(393)
									Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(393)
									Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(393)
									Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(393)
									if (((t1 < (int)0))){
										HX_STACK_LINE(393)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										if (((t1 > (int)1))){
											HX_STACK_LINE(393)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									if (((t2 < (int)0))){
										HX_STACK_LINE(393)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										if (((t2 > (int)1))){
											HX_STACK_LINE(393)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									if (((s12 < (int)0))){
										HX_STACK_LINE(393)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										if (((s12 > (int)1))){
											HX_STACK_LINE(393)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									if (((s22 < (int)0))){
										HX_STACK_LINE(393)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										if (((s22 > (int)1))){
											HX_STACK_LINE(393)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(393)
									Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										f1x = (v0->x + (vx * t));
										HX_STACK_LINE(393)
										f1y = (v0->y + (vy * t));
									}
									HX_STACK_LINE(393)
									Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(393)
									Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										f2x = (v0->x + (vx * t));
										HX_STACK_LINE(393)
										f2y = (v0->y + (vy * t));
									}
									HX_STACK_LINE(393)
									Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(393)
									Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										g1x = (q0->x + (qx * t));
										HX_STACK_LINE(393)
										g1y = (q0->y + (qy * t));
									}
									HX_STACK_LINE(393)
									Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(393)
									Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										g2x = (q0->x + (qx * t));
										HX_STACK_LINE(393)
										g2y = (q0->y + (qy * t));
									}
									HX_STACK_LINE(393)
									Float d1;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											dx = (f1x - q0->x);
											HX_STACK_LINE(393)
											dy = (f1y - q0->y);
										}
										HX_STACK_LINE(393)
										d1 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(393)
									Float d2;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											dx = (f2x - q11->x);
											HX_STACK_LINE(393)
											dy = (f2y - q11->y);
										}
										HX_STACK_LINE(393)
										d2 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(393)
									Float e1;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											dx = (g1x - v0->x);
											HX_STACK_LINE(393)
											dy = (g1y - v0->y);
										}
										HX_STACK_LINE(393)
										e1 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(393)
									Float e2;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											dx = (g2x - v1->x);
											HX_STACK_LINE(393)
											dy = (g2y - v1->y);
										}
										HX_STACK_LINE(393)
										e2 = ((dx * dx) + (dy * dy));
									}
									HX_STACK_LINE(393)
									Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(393)
									Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(393)
									if (((d1 < d2))){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f1x;
											HX_STACK_LINE(393)
											minfy = f1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f2x;
											HX_STACK_LINE(393)
											minfy = f2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q11;
										HX_STACK_LINE(393)
										d1 = d2;
									}
									HX_STACK_LINE(393)
									Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(393)
									Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(393)
									if (((e1 < e2))){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g1x;
											HX_STACK_LINE(393)
											mingy = g1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g2x;
											HX_STACK_LINE(393)
											mingy = g2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v1;
										HX_STACK_LINE(393)
										e1 = e2;
									}
									HX_STACK_LINE(393)
									if (((d1 < e1))){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minfx;
											HX_STACK_LINE(393)
											w1->y = minfy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = minq->x;
											HX_STACK_LINE(393)
											w2->y = minq->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float _g2 = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(393)
										best = _g2;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = mingx;
											HX_STACK_LINE(393)
											w2->y = mingy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minv->x;
											HX_STACK_LINE(393)
											w1->y = minv->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float _g3 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(393)
										best = _g3;
									}
									HX_STACK_LINE(393)
									if (((best != (int)0))){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											axis->x = (w2->x - w1->x);
											HX_STACK_LINE(393)
											axis->y = (w2->y - w1->y);
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(393)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(393)
										if ((swapped)){
											HX_STACK_LINE(393)
											axis->x = -(axis->x);
											HX_STACK_LINE(393)
											axis->y = -(axis->y);
										}
									}
									HX_STACK_LINE(393)
									_g4 = best;
								}
								else{
									HX_STACK_LINE(393)
									Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(393)
									Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										c0x = ay->gp0->x;
										HX_STACK_LINE(393)
										c0y = ay->gp0->y;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(393)
									Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										c1x = ay->gp1->x;
										HX_STACK_LINE(393)
										c1y = ay->gp1->y;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(393)
									Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										dvx = (c1x - c0x);
										HX_STACK_LINE(393)
										dvy = (c1y - c0y);
									}
									HX_STACK_LINE(393)
									Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(393)
									Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(393)
									Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(393)
									if (((t > ::nape::Config_obj::epsilon))){
										HX_STACK_LINE(393)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(393)
										hx::AddEq(c0x,(dvx * t1));
										HX_STACK_LINE(393)
										hx::AddEq(c0y,(dvy * t1));
									}
									HX_STACK_LINE(393)
									Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									if (((t1 < -(::nape::Config_obj::epsilon)))){
										HX_STACK_LINE(393)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(393)
										hx::AddEq(c1x,(dvx * t2));
										HX_STACK_LINE(393)
										hx::AddEq(c1y,(dvy * t2));
									}
									HX_STACK_LINE(393)
									Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(393)
									Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(393)
									if (((c0d < c1d))){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c0x;
											HX_STACK_LINE(393)
											w2->y = c0y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											w1->x = (w2->x + (ax->gnormx * t2));
											HX_STACK_LINE(393)
											w1->y = (w2->y + (ax->gnormy * t2));
										}
										HX_STACK_LINE(393)
										_g4 = c0d;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c1x;
											HX_STACK_LINE(393)
											w2->y = c1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											w1->x = (w2->x + (ax->gnormx * t2));
											HX_STACK_LINE(393)
											w1->y = (w2->y + (ax->gnormy * t2));
										}
										HX_STACK_LINE(393)
										_g4 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								_g4 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(393)
							_g4 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(393)
			Float sep = (_g4 + negRadius);		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(394)
			Float dot = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(395)
			if (((sep < ::nape::Config_obj::distanceThresholdCCD))){
				HX_STACK_LINE(396)
				Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(397)
				Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					d1x = (c1->x - b1->posx);
					HX_STACK_LINE(400)
					d1y = (c1->y - b1->posy);
				}
				HX_STACK_LINE(402)
				Float proj = (dot - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y)))));		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(403)
				if (((proj > (int)0))){
					HX_STACK_LINE(404)
					toi->slipped = true;
				}
				HX_STACK_LINE(406)
				if (((bool((proj <= (int)0)) || bool((sep < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
					HX_STACK_LINE(407)
					break;
				}
			}
			HX_STACK_LINE(410)
			Float denom = (((angBias - dot)) * timeStep);		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(411)
			if (((denom <= (int)0))){
				HX_STACK_LINE(412)
				curTOI = (int)-1;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(415)
			Float delta = (Float(sep) / Float(denom));		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(416)
			if (((delta < 1e-6))){
				HX_STACK_LINE(416)
				delta = 1e-6;
			}
			HX_STACK_LINE(425)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(426)
			if (((curTOI >= (int)1))){
				HX_STACK_LINE(427)
				curTOI = (int)1;
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(444)
					Float delta1 = (dt - b1->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(444)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(444)
						b1->sweepTime = dt;
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(444)
							hx::AddEq(b1->posx,(b1->velx * t));
							HX_STACK_LINE(444)
							hx::AddEq(b1->posy,(b1->vely * t));
						}
						HX_STACK_LINE(444)
						if (((b1->angvel != (int)0))){
							HX_STACK_LINE(444)
							Float dr = (b1->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(444)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(444)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(444)
								Float _g5 = ::Math_obj::sin(b1->rot);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(444)
								b1->axisx = _g5;
								HX_STACK_LINE(444)
								Float _g6 = ::Math_obj::cos(b1->rot);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(444)
								b1->axisy = _g6;
								HX_STACK_LINE(444)
								Dynamic();
							}
							else{
								HX_STACK_LINE(444)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(444)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(444)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(444)
								Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(444)
								b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
								HX_STACK_LINE(444)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(445)
				if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(445)
					s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
					HX_STACK_LINE(445)
					s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
				}
				else{
					HX_STACK_LINE(445)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(445)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(445)
						while((true)){
							HX_STACK_LINE(445)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(445)
								break;
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(445)
								li = li->next;
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
									HX_STACK_LINE(445)
									g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
								}
							}
							HX_STACK_LINE(445)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(445)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(445)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(445)
						while((true)){
							HX_STACK_LINE(445)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(445)
								break;
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(445)
								ite = ite->next;
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(445)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(445)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(445)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(445)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(445)
							u = v;
							HX_STACK_LINE(445)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(445)
							ite = ite->next;
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(445)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(445)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(445)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(445)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
				HX_STACK_LINE(446)
				Float _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(446)
					Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(446)
					if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(446)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(446)
							Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								nx = (c21->worldCOMx - c11->worldCOMx);
								HX_STACK_LINE(446)
								ny = (c21->worldCOMy - c11->worldCOMy);
							}
							HX_STACK_LINE(446)
							Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(446)
							dist = (len - ((c11->radius + c21->radius)));
							HX_STACK_LINE(446)
							if (((dist < upperBound))){
								HX_STACK_LINE(446)
								if (((len == (int)0))){
									HX_STACK_LINE(446)
									nx = (int)1;
									HX_STACK_LINE(446)
									ny = (int)0;
									HX_STACK_LINE(446)
									{
									}
								}
								else{
									HX_STACK_LINE(446)
									Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									hx::MultEq(nx,t);
									HX_STACK_LINE(446)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									w1->x = (c11->worldCOMx + (nx * t));
									HX_STACK_LINE(446)
									w1->y = (c11->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									w2->x = (c21->worldCOMx + (nx * t));
									HX_STACK_LINE(446)
									w2->y = (c21->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									axis->x = nx;
									HX_STACK_LINE(446)
									axis->y = ny;
									HX_STACK_LINE(446)
									{
									}
								}
							}
						}
						HX_STACK_LINE(446)
						_g9 = dist;
					}
					else{
						HX_STACK_LINE(446)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(446)
						if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(446)
							s11 = s21;
							HX_STACK_LINE(446)
							s21 = tmp;
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(446)
							w1 = w2;
							HX_STACK_LINE(446)
							w2 = tmp2;
							HX_STACK_LINE(446)
							swapped = true;
						}
						HX_STACK_LINE(446)
						if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(446)
							Float best = -1e+100;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(446)
										if (((dist > upperBound))){
											HX_STACK_LINE(446)
											best = dist;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										if (((dist > (int)0))){
											HX_STACK_LINE(446)
											if (((dist > best))){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(446)
											if (((bool((best < (int)0)) && bool((dist > best))))){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							if (((best < upperBound))){
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(446)
								Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(446)
								if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
									HX_STACK_LINE(446)
									Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(446)
									Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										nx = (circle->worldCOMx - v0->x);
										HX_STACK_LINE(446)
										ny = (circle->worldCOMy - v0->y);
									}
									HX_STACK_LINE(446)
									Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(446)
									best = (len - circle->radius);
									HX_STACK_LINE(446)
									if (((best < upperBound))){
										HX_STACK_LINE(446)
										if (((len == (int)0))){
											HX_STACK_LINE(446)
											nx = (int)1;
											HX_STACK_LINE(446)
											ny = (int)0;
											HX_STACK_LINE(446)
											{
											}
										}
										else{
											HX_STACK_LINE(446)
											Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											hx::MultEq(nx,t);
											HX_STACK_LINE(446)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											w1->x = (v0->x + (nx * t));
											HX_STACK_LINE(446)
											w1->y = (v0->y + (ny * t));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											w2->x = (circle->worldCOMx + (nx * t));
											HX_STACK_LINE(446)
											w2->y = (circle->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = nx;
											HX_STACK_LINE(446)
											axis->y = ny;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
										HX_STACK_LINE(446)
										Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(446)
										Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											nx = (circle->worldCOMx - v1->x);
											HX_STACK_LINE(446)
											ny = (circle->worldCOMy - v1->y);
										}
										HX_STACK_LINE(446)
										Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(446)
										best = (len - circle->radius);
										HX_STACK_LINE(446)
										if (((best < upperBound))){
											HX_STACK_LINE(446)
											if (((len == (int)0))){
												HX_STACK_LINE(446)
												nx = (int)1;
												HX_STACK_LINE(446)
												ny = (int)0;
												HX_STACK_LINE(446)
												{
												}
											}
											else{
												HX_STACK_LINE(446)
												Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(nx,t);
												HX_STACK_LINE(446)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												w1->x = (v1->x + (nx * t));
												HX_STACK_LINE(446)
												w1->y = (v1->y + (ny * t));
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												w2->x = (circle->worldCOMx + (nx * t));
												HX_STACK_LINE(446)
												w2->y = (circle->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												axis->x = nx;
												HX_STACK_LINE(446)
												axis->y = ny;
												HX_STACK_LINE(446)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											w2->x = (circle->worldCOMx + (a0->gnormx * t));
											HX_STACK_LINE(446)
											w2->y = (circle->worldCOMy + (a0->gnormy * t));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = -(best);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											w1->x = (w2->x + (a0->gnormx * t));
											HX_STACK_LINE(446)
											w1->y = (w2->y + (a0->gnormy * t));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = a0->gnormx;
											HX_STACK_LINE(446)
											axis->y = a0->gnormy;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(446)
							if ((swapped)){
								HX_STACK_LINE(446)
								axis->x = -(axis->x);
								HX_STACK_LINE(446)
								axis->y = -(axis->y);
							}
							HX_STACK_LINE(446)
							_g9 = best;
						}
						else{
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(446)
							Float best = -1e+100;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(446)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float min = 1e100;		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(446)
											while((true)){
												HX_STACK_LINE(446)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(446)
													break;
												}
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(446)
													if (((k < min))){
														HX_STACK_LINE(446)
														min = k;
													}
												}
												HX_STACK_LINE(446)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(446)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(446)
										if (((min > upperBound))){
											HX_STACK_LINE(446)
											best = min;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										if (((min > (int)0))){
											HX_STACK_LINE(446)
											if (((min > best))){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(446)
											if (((bool((best < (int)0)) && bool((min > best))))){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							if (((best < upperBound))){
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(446)
									while((true)){
										HX_STACK_LINE(446)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float min = 1e100;		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(446)
												while((true)){
													HX_STACK_LINE(446)
													if ((!(((cx_ite1 != null()))))){
														HX_STACK_LINE(446)
														break;
													}
													HX_STACK_LINE(446)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(446)
													{
														HX_STACK_LINE(446)
														Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(446)
														if (((k < min))){
															HX_STACK_LINE(446)
															min = k;
														}
													}
													HX_STACK_LINE(446)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(446)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(446)
											if (((min > upperBound))){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											if (((min > (int)0))){
												HX_STACK_LINE(446)
												if (((min > best))){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(446)
												if (((bool((best < (int)0)) && bool((min > best))))){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(446)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(446)
								if (((best < upperBound))){
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(446)
									if (((besti == (int)1))){
										HX_STACK_LINE(446)
										q1 = p1;
										HX_STACK_LINE(446)
										q2 = p2;
										HX_STACK_LINE(446)
										ax = a1;
									}
									else{
										HX_STACK_LINE(446)
										q1 = p2;
										HX_STACK_LINE(446)
										q2 = p1;
										HX_STACK_LINE(446)
										ax = a2;
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
										HX_STACK_LINE(446)
										w1 = w2;
										HX_STACK_LINE(446)
										w2 = tmp;
										HX_STACK_LINE(446)
										swapped = !(swapped);
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(446)
									Float min = 1e100;		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(446)
										while((true)){
											HX_STACK_LINE(446)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(446)
												if (((k < min))){
													HX_STACK_LINE(446)
													min = k;
													HX_STACK_LINE(446)
													ay = a;
												}
											}
											HX_STACK_LINE(446)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(446)
									if ((swapped)){
										HX_STACK_LINE(446)
										axis->x = -(ax->gnormx);
										HX_STACK_LINE(446)
										axis->y = -(ax->gnormy);
										HX_STACK_LINE(446)
										{
										}
									}
									else{
										HX_STACK_LINE(446)
										axis->x = ax->gnormx;
										HX_STACK_LINE(446)
										axis->y = ax->gnormy;
										HX_STACK_LINE(446)
										{
										}
									}
									HX_STACK_LINE(446)
									if (((best >= (int)0))){
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(446)
										Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(446)
										Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(446)
										Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(446)
										Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											vx = (v1->x - v0->x);
											HX_STACK_LINE(446)
											vy = (v1->y - v0->y);
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											qx = (q11->x - q0->x);
											HX_STACK_LINE(446)
											qy = (q11->y - q0->y);
										}
										HX_STACK_LINE(446)
										Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(446)
										Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(446)
										Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(446)
										Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(446)
										Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(446)
										if (((t1 < (int)0))){
											HX_STACK_LINE(446)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											if (((t1 > (int)1))){
												HX_STACK_LINE(446)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										if (((t2 < (int)0))){
											HX_STACK_LINE(446)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											if (((t2 > (int)1))){
												HX_STACK_LINE(446)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										if (((s12 < (int)0))){
											HX_STACK_LINE(446)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											if (((s12 > (int)1))){
												HX_STACK_LINE(446)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										if (((s22 < (int)0))){
											HX_STACK_LINE(446)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											if (((s22 > (int)1))){
												HX_STACK_LINE(446)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(446)
										Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											f1x = (v0->x + (vx * t));
											HX_STACK_LINE(446)
											f1y = (v0->y + (vy * t));
										}
										HX_STACK_LINE(446)
										Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(446)
										Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											f2x = (v0->x + (vx * t));
											HX_STACK_LINE(446)
											f2y = (v0->y + (vy * t));
										}
										HX_STACK_LINE(446)
										Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(446)
										Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											g1x = (q0->x + (qx * t));
											HX_STACK_LINE(446)
											g1y = (q0->y + (qy * t));
										}
										HX_STACK_LINE(446)
										Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(446)
										Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											g2x = (q0->x + (qx * t));
											HX_STACK_LINE(446)
											g2y = (q0->y + (qy * t));
										}
										HX_STACK_LINE(446)
										Float d1;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												dx = (f1x - q0->x);
												HX_STACK_LINE(446)
												dy = (f1y - q0->y);
											}
											HX_STACK_LINE(446)
											d1 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(446)
										Float d2;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												dx = (f2x - q11->x);
												HX_STACK_LINE(446)
												dy = (f2y - q11->y);
											}
											HX_STACK_LINE(446)
											d2 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(446)
										Float e1;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												dx = (g1x - v0->x);
												HX_STACK_LINE(446)
												dy = (g1y - v0->y);
											}
											HX_STACK_LINE(446)
											e1 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(446)
										Float e2;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												dx = (g2x - v1->x);
												HX_STACK_LINE(446)
												dy = (g2y - v1->y);
											}
											HX_STACK_LINE(446)
											e2 = ((dx * dx) + (dy * dy));
										}
										HX_STACK_LINE(446)
										Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(446)
										Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(446)
										if (((d1 < d2))){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f1x;
												HX_STACK_LINE(446)
												minfy = f1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f2x;
												HX_STACK_LINE(446)
												minfy = f2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q11;
											HX_STACK_LINE(446)
											d1 = d2;
										}
										HX_STACK_LINE(446)
										Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(446)
										Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(446)
										if (((e1 < e2))){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g1x;
												HX_STACK_LINE(446)
												mingy = g1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g2x;
												HX_STACK_LINE(446)
												mingy = g2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v1;
											HX_STACK_LINE(446)
											e1 = e2;
										}
										HX_STACK_LINE(446)
										if (((d1 < e1))){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minfx;
												HX_STACK_LINE(446)
												w1->y = minfy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = minq->x;
												HX_STACK_LINE(446)
												w2->y = minq->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float _g7 = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(446)
											best = _g7;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = mingx;
												HX_STACK_LINE(446)
												w2->y = mingy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minv->x;
												HX_STACK_LINE(446)
												w1->y = minv->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float _g8 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(446)
											best = _g8;
										}
										HX_STACK_LINE(446)
										if (((best != (int)0))){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												axis->x = (w2->x - w1->x);
												HX_STACK_LINE(446)
												axis->y = (w2->y - w1->y);
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(446)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(446)
											if ((swapped)){
												HX_STACK_LINE(446)
												axis->x = -(axis->x);
												HX_STACK_LINE(446)
												axis->y = -(axis->y);
											}
										}
										HX_STACK_LINE(446)
										_g9 = best;
									}
									else{
										HX_STACK_LINE(446)
										Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(446)
										Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											c0x = ay->gp0->x;
											HX_STACK_LINE(446)
											c0y = ay->gp0->y;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(446)
										Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											c1x = ay->gp1->x;
											HX_STACK_LINE(446)
											c1y = ay->gp1->y;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(446)
										Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											dvx = (c1x - c0x);
											HX_STACK_LINE(446)
											dvy = (c1y - c0y);
										}
										HX_STACK_LINE(446)
										Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(446)
										Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(446)
										Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(446)
										if (((t > ::nape::Config_obj::epsilon))){
											HX_STACK_LINE(446)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(446)
											hx::AddEq(c0x,(dvx * t1));
											HX_STACK_LINE(446)
											hx::AddEq(c0y,(dvy * t1));
										}
										HX_STACK_LINE(446)
										Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										if (((t1 < -(::nape::Config_obj::epsilon)))){
											HX_STACK_LINE(446)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(446)
											hx::AddEq(c1x,(dvx * t2));
											HX_STACK_LINE(446)
											hx::AddEq(c1y,(dvy * t2));
										}
										HX_STACK_LINE(446)
										Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(446)
										Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(446)
										if (((c0d < c1d))){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c0x;
												HX_STACK_LINE(446)
												w2->y = c0y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												w1->x = (w2->x + (ax->gnormx * t2));
												HX_STACK_LINE(446)
												w1->y = (w2->y + (ax->gnormy * t2));
											}
											HX_STACK_LINE(446)
											_g9 = c0d;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c1x;
												HX_STACK_LINE(446)
												w2->y = c1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												w1->x = (w2->x + (ax->gnormx * t2));
												HX_STACK_LINE(446)
												w1->y = (w2->y + (ax->gnormy * t2));
											}
											HX_STACK_LINE(446)
											_g9 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									_g9 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(446)
								_g9 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(446)
				Float sep1 = (_g9 + negRadius);		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(447)
				Float dot1 = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(448)
				if (((sep1 < ::nape::Config_obj::distanceThresholdCCD))){
					HX_STACK_LINE(449)
					Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(450)
					Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(452)
						d1x = (c1->x - b1->posx);
						HX_STACK_LINE(453)
						d1y = (c1->y - b1->posy);
					}
					HX_STACK_LINE(455)
					Float proj = (dot1 - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y)))));		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(456)
					if (((proj > (int)0))){
						HX_STACK_LINE(457)
						toi->slipped = true;
					}
					HX_STACK_LINE(459)
					if (((bool((proj <= (int)0)) || bool((sep1 < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
						HX_STACK_LINE(460)
						break;
					}
				}
				HX_STACK_LINE(463)
				curTOI = (int)-1;
				HX_STACK_LINE(464)
				break;
			}
			HX_STACK_LINE(466)
			int _g10 = ++(curIter);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(466)
			if (((_g10 >= (int)40))){
				HX_STACK_LINE(467)
				if (((sep > negRadius))){
					HX_STACK_LINE(468)
					toi->failed = true;
				}
				HX_STACK_LINE(470)
				break;
			}
		}
		HX_STACK_LINE(473)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,staticSweep,(void))

Float ZPP_SweepDistance_obj::distanceBody( ::zpp_nape::phys::ZPP_Body b1,::zpp_nape::phys::ZPP_Body b2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distanceBody",0x2a59ca7a,"zpp_nape.geom.ZPP_SweepDistance.distanceBody","zpp_nape/geom/SweepDistance.hx",475,0x2645f2ee)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_LINE(476)
	::zpp_nape::geom::ZPP_Vec2 t1;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(478)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_Vec2 _g = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			t1 = _g;
		}
		else{
			HX_STACK_LINE(485)
			t1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(486)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t1->next;
			HX_STACK_LINE(487)
			t1->next = null();
		}
		HX_STACK_LINE(492)
		t1->weak = false;
	}
	HX_STACK_LINE(494)
	::zpp_nape::geom::ZPP_Vec2 t2;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			t2 = _g1;
		}
		else{
			HX_STACK_LINE(503)
			t2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(504)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t2->next;
			HX_STACK_LINE(505)
			t2->next = null();
		}
		HX_STACK_LINE(510)
		t2->weak = false;
	}
	HX_STACK_LINE(512)
	::zpp_nape::geom::ZPP_Vec2 ax;		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(514)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_Vec2 _g2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(515)
			ax = _g2;
		}
		else{
			HX_STACK_LINE(521)
			ax = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(522)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ax->next;
			HX_STACK_LINE(523)
			ax->next = null();
		}
		HX_STACK_LINE(528)
		ax->weak = false;
	}
	HX_STACK_LINE(530)
	Float min = 1e100;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(531)
	{
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = b1->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(533)
		while((true)){
			HX_STACK_LINE(533)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(533)
				break;
			}
			HX_STACK_LINE(534)
			::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = b2->shapes->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
				HX_STACK_LINE(538)
				while((true)){
					HX_STACK_LINE(538)
					if ((!(((cx_ite1 != null()))))){
						HX_STACK_LINE(538)
						break;
					}
					HX_STACK_LINE(539)
					::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w11 = t1;		HX_STACK_VAR(w11,"w11");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w21 = t2;		HX_STACK_VAR(w21,"w21");
							HX_STACK_LINE(541)
							if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c1 = s11->circle;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c2 = s21->circle;		HX_STACK_VAR(c2,"c2");
								HX_STACK_LINE(541)
								Float dist1;		HX_STACK_VAR(dist1,"dist1");
								HX_STACK_LINE(541)
								{
									HX_STACK_LINE(541)
									Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(541)
									Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										nx = (c2->worldCOMx - c1->worldCOMx);
										HX_STACK_LINE(541)
										ny = (c2->worldCOMy - c1->worldCOMy);
									}
									HX_STACK_LINE(541)
									Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(541)
									dist1 = (len - ((c1->radius + c2->radius)));
									HX_STACK_LINE(541)
									if (((dist1 < min))){
										HX_STACK_LINE(541)
										if (((len == (int)0))){
											HX_STACK_LINE(541)
											nx = (int)1;
											HX_STACK_LINE(541)
											ny = (int)0;
											HX_STACK_LINE(541)
											{
											}
										}
										else{
											HX_STACK_LINE(541)
											Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											hx::MultEq(nx,t);
											HX_STACK_LINE(541)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float t = c1->radius;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											w11->x = (c1->worldCOMx + (nx * t));
											HX_STACK_LINE(541)
											w11->y = (c1->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float t = -(c2->radius);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											w21->x = (c2->worldCOMx + (nx * t));
											HX_STACK_LINE(541)
											w21->y = (c2->worldCOMy + (ny * t));
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											ax->x = nx;
											HX_STACK_LINE(541)
											ax->y = ny;
											HX_STACK_LINE(541)
											{
											}
										}
									}
								}
								HX_STACK_LINE(541)
								dist = dist1;
							}
							else{
								HX_STACK_LINE(541)
								bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
								HX_STACK_LINE(541)
								if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(541)
									s11 = s21;
									HX_STACK_LINE(541)
									s21 = tmp;
									HX_STACK_LINE(541)
									::zpp_nape::geom::ZPP_Vec2 tmp2 = w11;		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(541)
									w11 = w21;
									HX_STACK_LINE(541)
									w21 = tmp2;
									HX_STACK_LINE(541)
									swapped = true;
								}
								HX_STACK_LINE(541)
								if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
									HX_STACK_LINE(541)
									Float best = -1e+100;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = poly->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											if ((!(((cx_ite2 != null()))))){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float dist1 = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist1,"dist1");
												HX_STACK_LINE(541)
												if (((dist1 > min))){
													HX_STACK_LINE(541)
													best = dist1;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												if (((dist1 > (int)0))){
													HX_STACK_LINE(541)
													if (((dist1 > best))){
														HX_STACK_LINE(541)
														best = dist1;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
												else{
													HX_STACK_LINE(541)
													if (((bool((best < (int)0)) && bool((dist1 > best))))){
														HX_STACK_LINE(541)
														best = dist1;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									if (((best < min))){
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(541)
										Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
										HX_STACK_LINE(541)
										if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
											HX_STACK_LINE(541)
											Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
											HX_STACK_LINE(541)
											Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												nx = (circle->worldCOMx - v0->x);
												HX_STACK_LINE(541)
												ny = (circle->worldCOMy - v0->y);
											}
											HX_STACK_LINE(541)
											Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(541)
											best = (len - circle->radius);
											HX_STACK_LINE(541)
											if (((best < min))){
												HX_STACK_LINE(541)
												if (((len == (int)0))){
													HX_STACK_LINE(541)
													nx = (int)1;
													HX_STACK_LINE(541)
													ny = (int)0;
													HX_STACK_LINE(541)
													{
													}
												}
												else{
													HX_STACK_LINE(541)
													Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													hx::MultEq(nx,t);
													HX_STACK_LINE(541)
													hx::MultEq(ny,t);
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													int t = (int)0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													w11->x = (v0->x + (nx * t));
													HX_STACK_LINE(541)
													w11->y = (v0->y + (ny * t));
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													w21->x = (circle->worldCOMx + (nx * t));
													HX_STACK_LINE(541)
													w21->y = (circle->worldCOMy + (ny * t));
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = nx;
													HX_STACK_LINE(541)
													ax->y = ny;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
												HX_STACK_LINE(541)
												Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
												HX_STACK_LINE(541)
												Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													nx = (circle->worldCOMx - v1->x);
													HX_STACK_LINE(541)
													ny = (circle->worldCOMy - v1->y);
												}
												HX_STACK_LINE(541)
												Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(541)
												best = (len - circle->radius);
												HX_STACK_LINE(541)
												if (((best < min))){
													HX_STACK_LINE(541)
													if (((len == (int)0))){
														HX_STACK_LINE(541)
														nx = (int)1;
														HX_STACK_LINE(541)
														ny = (int)0;
														HX_STACK_LINE(541)
														{
														}
													}
													else{
														HX_STACK_LINE(541)
														Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(nx,t);
														HX_STACK_LINE(541)
														hx::MultEq(ny,t);
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														int t = (int)0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														w11->x = (v1->x + (nx * t));
														HX_STACK_LINE(541)
														w11->y = (v1->y + (ny * t));
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														w21->x = (circle->worldCOMx + (nx * t));
														HX_STACK_LINE(541)
														w21->y = (circle->worldCOMy + (ny * t));
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														ax->x = nx;
														HX_STACK_LINE(541)
														ax->y = ny;
														HX_STACK_LINE(541)
														{
														}
													}
												}
											}
											else{
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													w21->x = (circle->worldCOMx + (a0->gnormx * t));
													HX_STACK_LINE(541)
													w21->y = (circle->worldCOMy + (a0->gnormy * t));
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = -(best);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													w11->x = (w21->x + (a0->gnormx * t));
													HX_STACK_LINE(541)
													w11->y = (w21->y + (a0->gnormy * t));
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = a0->gnormx;
													HX_STACK_LINE(541)
													ax->y = a0->gnormy;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
									}
									HX_STACK_LINE(541)
									if ((swapped)){
										HX_STACK_LINE(541)
										ax->x = -(ax->x);
										HX_STACK_LINE(541)
										ax->y = -(ax->y);
									}
									HX_STACK_LINE(541)
									dist = best;
								}
								else{
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
									HX_STACK_LINE(541)
									Float best = -1e+100;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
									HX_STACK_LINE(541)
									int besti = (int)0;		HX_STACK_VAR(besti,"besti");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = p1->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											if ((!(((cx_ite2 != null()))))){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 cx_ite3 = p2->gverts->next;		HX_STACK_VAR(cx_ite3,"cx_ite3");
													HX_STACK_LINE(541)
													while((true)){
														HX_STACK_LINE(541)
														if ((!(((cx_ite3 != null()))))){
															HX_STACK_LINE(541)
															break;
														}
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
															HX_STACK_LINE(541)
															if (((k < min1))){
																HX_STACK_LINE(541)
																min1 = k;
															}
														}
														HX_STACK_LINE(541)
														cx_ite3 = cx_ite3->next;
													}
												}
												HX_STACK_LINE(541)
												hx::SubEq(min1,a->gprojection);
												HX_STACK_LINE(541)
												if (((min1 > min))){
													HX_STACK_LINE(541)
													best = min1;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												if (((min1 > (int)0))){
													HX_STACK_LINE(541)
													if (((min1 > best))){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
												else{
													HX_STACK_LINE(541)
													if (((bool((best < (int)0)) && bool((min1 > best))))){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									if (((best < min))){
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = p2->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
											HX_STACK_LINE(541)
											while((true)){
												HX_STACK_LINE(541)
												if ((!(((cx_ite2 != null()))))){
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 cx_ite3 = p1->gverts->next;		HX_STACK_VAR(cx_ite3,"cx_ite3");
														HX_STACK_LINE(541)
														while((true)){
															HX_STACK_LINE(541)
															if ((!(((cx_ite3 != null()))))){
																HX_STACK_LINE(541)
																break;
															}
															HX_STACK_LINE(541)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(541)
															{
																HX_STACK_LINE(541)
																Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																HX_STACK_LINE(541)
																if (((k < min1))){
																	HX_STACK_LINE(541)
																	min1 = k;
																}
															}
															HX_STACK_LINE(541)
															cx_ite3 = cx_ite3->next;
														}
													}
													HX_STACK_LINE(541)
													hx::SubEq(min1,a->gprojection);
													HX_STACK_LINE(541)
													if (((min1 > min))){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													if (((min1 > (int)0))){
														HX_STACK_LINE(541)
														if (((min1 > best))){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
													else{
														HX_STACK_LINE(541)
														if (((bool((best < (int)0)) && bool((min1 > best))))){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
												}
												HX_STACK_LINE(541)
												cx_ite2 = cx_ite2->next;
											}
										}
										HX_STACK_LINE(541)
										if (((best < min))){
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ax1;		HX_STACK_VAR(ax1,"ax1");
											HX_STACK_LINE(541)
											if (((besti == (int)1))){
												HX_STACK_LINE(541)
												q1 = p1;
												HX_STACK_LINE(541)
												q2 = p2;
												HX_STACK_LINE(541)
												ax1 = a1;
											}
											else{
												HX_STACK_LINE(541)
												q1 = p2;
												HX_STACK_LINE(541)
												q2 = p1;
												HX_STACK_LINE(541)
												ax1 = a2;
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 tmp = w11;		HX_STACK_VAR(tmp,"tmp");
												HX_STACK_LINE(541)
												w11 = w21;
												HX_STACK_LINE(541)
												w21 = tmp;
												HX_STACK_LINE(541)
												swapped = !(swapped);
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
											HX_STACK_LINE(541)
											Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = q2->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
												HX_STACK_LINE(541)
												while((true)){
													HX_STACK_LINE(541)
													if ((!(((cx_ite2 != null()))))){
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float k = ((ax1->gnormx * a->gnormx) + (ax1->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(541)
														if (((k < min1))){
															HX_STACK_LINE(541)
															min1 = k;
															HX_STACK_LINE(541)
															ay = a;
														}
													}
													HX_STACK_LINE(541)
													cx_ite2 = cx_ite2->next;
												}
											}
											HX_STACK_LINE(541)
											if ((swapped)){
												HX_STACK_LINE(541)
												ax->x = -(ax1->gnormx);
												HX_STACK_LINE(541)
												ax->y = -(ax1->gnormy);
												HX_STACK_LINE(541)
												{
												}
											}
											else{
												HX_STACK_LINE(541)
												ax->x = ax1->gnormx;
												HX_STACK_LINE(541)
												ax->y = ax1->gnormy;
												HX_STACK_LINE(541)
												{
												}
											}
											HX_STACK_LINE(541)
											if (((best >= (int)0))){
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v0 = ax1->gp0;		HX_STACK_VAR(v0,"v0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v1 = ax1->gp1;		HX_STACK_VAR(v1,"v1");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
												HX_STACK_LINE(541)
												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(541)
												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(541)
												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(541)
												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													vx = (v1->x - v0->x);
													HX_STACK_LINE(541)
													vy = (v1->y - v0->y);
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													qx = (q11->x - q0->x);
													HX_STACK_LINE(541)
													qy = (q11->y - q0->y);
												}
												HX_STACK_LINE(541)
												Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
												HX_STACK_LINE(541)
												Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
												HX_STACK_LINE(541)
												Float t11 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t11,"t11");
												HX_STACK_LINE(541)
												Float t21 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t21,"t21");
												HX_STACK_LINE(541)
												Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
												HX_STACK_LINE(541)
												Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
												HX_STACK_LINE(541)
												if (((t11 < (int)0))){
													HX_STACK_LINE(541)
													t11 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													if (((t11 > (int)1))){
														HX_STACK_LINE(541)
														t11 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												if (((t21 < (int)0))){
													HX_STACK_LINE(541)
													t21 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													if (((t21 > (int)1))){
														HX_STACK_LINE(541)
														t21 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												if (((s12 < (int)0))){
													HX_STACK_LINE(541)
													s12 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													if (((s12 > (int)1))){
														HX_STACK_LINE(541)
														s12 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												if (((s22 < (int)0))){
													HX_STACK_LINE(541)
													s22 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													if (((s22 > (int)1))){
														HX_STACK_LINE(541)
														s22 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
												HX_STACK_LINE(541)
												Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t11;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													f1x = (v0->x + (vx * t));
													HX_STACK_LINE(541)
													f1y = (v0->y + (vy * t));
												}
												HX_STACK_LINE(541)
												Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
												HX_STACK_LINE(541)
												Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t21;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													f2x = (v0->x + (vx * t));
													HX_STACK_LINE(541)
													f2y = (v0->y + (vy * t));
												}
												HX_STACK_LINE(541)
												Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
												HX_STACK_LINE(541)
												Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s12;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													g1x = (q0->x + (qx * t));
													HX_STACK_LINE(541)
													g1y = (q0->y + (qy * t));
												}
												HX_STACK_LINE(541)
												Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
												HX_STACK_LINE(541)
												Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s22;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													g2x = (q0->x + (qx * t));
													HX_STACK_LINE(541)
													g2y = (q0->y + (qy * t));
												}
												HX_STACK_LINE(541)
												Float d1;		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														dx = (f1x - q0->x);
														HX_STACK_LINE(541)
														dy = (f1y - q0->y);
													}
													HX_STACK_LINE(541)
													d1 = ((dx * dx) + (dy * dy));
												}
												HX_STACK_LINE(541)
												Float d2;		HX_STACK_VAR(d2,"d2");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														dx = (f2x - q11->x);
														HX_STACK_LINE(541)
														dy = (f2y - q11->y);
													}
													HX_STACK_LINE(541)
													d2 = ((dx * dx) + (dy * dy));
												}
												HX_STACK_LINE(541)
												Float e1;		HX_STACK_VAR(e1,"e1");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														dx = (g1x - v0->x);
														HX_STACK_LINE(541)
														dy = (g1y - v0->y);
													}
													HX_STACK_LINE(541)
													e1 = ((dx * dx) + (dy * dy));
												}
												HX_STACK_LINE(541)
												Float e2;		HX_STACK_VAR(e2,"e2");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														dx = (g2x - v1->x);
														HX_STACK_LINE(541)
														dy = (g2y - v1->y);
													}
													HX_STACK_LINE(541)
													e2 = ((dx * dx) + (dy * dy));
												}
												HX_STACK_LINE(541)
												Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
												HX_STACK_LINE(541)
												Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
												HX_STACK_LINE(541)
												if (((d1 < d2))){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f1x;
														HX_STACK_LINE(541)
														minfy = f1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f2x;
														HX_STACK_LINE(541)
														minfy = f2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q11;
													HX_STACK_LINE(541)
													d1 = d2;
												}
												HX_STACK_LINE(541)
												Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
												HX_STACK_LINE(541)
												Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
												HX_STACK_LINE(541)
												if (((e1 < e2))){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g1x;
														HX_STACK_LINE(541)
														mingy = g1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g2x;
														HX_STACK_LINE(541)
														mingy = g2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v1;
													HX_STACK_LINE(541)
													e1 = e2;
												}
												HX_STACK_LINE(541)
												if (((d1 < e1))){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minfx;
														HX_STACK_LINE(541)
														w11->y = minfy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = minq->x;
														HX_STACK_LINE(541)
														w21->y = minq->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float _g3 = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g3,"_g3");
													HX_STACK_LINE(541)
													best = _g3;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = mingx;
														HX_STACK_LINE(541)
														w21->y = mingy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minv->x;
														HX_STACK_LINE(541)
														w11->y = minv->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float _g4 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(541)
													best = _g4;
												}
												HX_STACK_LINE(541)
												if (((best != (int)0))){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														ax->x = (w21->x - w11->x);
														HX_STACK_LINE(541)
														ax->y = (w21->y - w11->y);
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(ax->x,t);
														HX_STACK_LINE(541)
														hx::MultEq(ax->y,t);
													}
													HX_STACK_LINE(541)
													if ((swapped)){
														HX_STACK_LINE(541)
														ax->x = -(ax->x);
														HX_STACK_LINE(541)
														ax->y = -(ax->y);
													}
												}
												HX_STACK_LINE(541)
												dist = best;
											}
											else{
												HX_STACK_LINE(541)
												Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
												HX_STACK_LINE(541)
												Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													c0x = ay->gp0->x;
													HX_STACK_LINE(541)
													c0y = ay->gp0->y;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
												HX_STACK_LINE(541)
												Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													c1x = ay->gp1->x;
													HX_STACK_LINE(541)
													c1y = ay->gp1->y;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
												HX_STACK_LINE(541)
												Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													dvx = (c1x - c0x);
													HX_STACK_LINE(541)
													dvy = (c1y - c0y);
												}
												HX_STACK_LINE(541)
												Float d0 = ((ax1->gnormy * c0x) - (ax1->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
												HX_STACK_LINE(541)
												Float d1 = ((ax1->gnormy * c1x) - (ax1->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(541)
												Float t = (((-(ax1->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(541)
												if (((t > ::nape::Config_obj::epsilon))){
													HX_STACK_LINE(541)
													Float t3 = t;		HX_STACK_VAR(t3,"t3");
													HX_STACK_LINE(541)
													hx::AddEq(c0x,(dvx * t3));
													HX_STACK_LINE(541)
													hx::AddEq(c0y,(dvy * t3));
												}
												HX_STACK_LINE(541)
												Float t3 = (((-(ax1->tp0) - d1)) * den);		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(541)
												if (((t3 < -(::nape::Config_obj::epsilon)))){
													HX_STACK_LINE(541)
													Float t4 = t3;		HX_STACK_VAR(t4,"t4");
													HX_STACK_LINE(541)
													hx::AddEq(c1x,(dvx * t4));
													HX_STACK_LINE(541)
													hx::AddEq(c1y,(dvy * t4));
												}
												HX_STACK_LINE(541)
												Float c0d = (((c0x * ax1->gnormx) + (c0y * ax1->gnormy)) - ax1->gprojection);		HX_STACK_VAR(c0d,"c0d");
												HX_STACK_LINE(541)
												Float c1d = (((c1x * ax1->gnormx) + (c1y * ax1->gnormy)) - ax1->gprojection);		HX_STACK_VAR(c1d,"c1d");
												HX_STACK_LINE(541)
												if (((c0d < c1d))){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c0x;
														HX_STACK_LINE(541)
														w21->y = c0y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float t4 = -(c0d);		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														w11->x = (w21->x + (ax1->gnormx * t4));
														HX_STACK_LINE(541)
														w11->y = (w21->y + (ax1->gnormy * t4));
													}
													HX_STACK_LINE(541)
													dist = c0d;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c1x;
														HX_STACK_LINE(541)
														w21->y = c1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float t4 = -(c1d);		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														w11->x = (w21->x + (ax1->gnormx * t4));
														HX_STACK_LINE(541)
														w11->y = (w21->y + (ax1->gnormy * t4));
													}
													HX_STACK_LINE(541)
													dist = c1d;
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											dist = min;
										}
									}
									else{
										HX_STACK_LINE(541)
										dist = min;
									}
								}
							}
						}
						HX_STACK_LINE(542)
						if (((dist < min))){
							HX_STACK_LINE(543)
							min = dist;
							HX_STACK_LINE(544)
							{
								HX_STACK_LINE(545)
								w1->x = t1->x;
								HX_STACK_LINE(546)
								w1->y = t1->y;
								HX_STACK_LINE(555)
								{
								}
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(565)
								w2->x = t2->x;
								HX_STACK_LINE(566)
								w2->y = t2->y;
								HX_STACK_LINE(575)
								{
								}
							}
						}
					}
					HX_STACK_LINE(586)
					cx_ite1 = cx_ite1->next;
				}
			}
			HX_STACK_LINE(590)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(594)
		::zpp_nape::geom::ZPP_Vec2 o = t1;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			if (((o->outer != null()))){
				HX_STACK_LINE(603)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(603)
				o->outer = null();
			}
			HX_STACK_LINE(603)
			o->_isimmutable = null();
			HX_STACK_LINE(603)
			o->_validate = null();
			HX_STACK_LINE(603)
			o->_invalidate = null();
		}
		HX_STACK_LINE(604)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(611)
		::zpp_nape::geom::ZPP_Vec2 o = t2;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			if (((o->outer != null()))){
				HX_STACK_LINE(620)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(620)
				o->outer = null();
			}
			HX_STACK_LINE(620)
			o->_isimmutable = null();
			HX_STACK_LINE(620)
			o->_validate = null();
			HX_STACK_LINE(620)
			o->_invalidate = null();
		}
		HX_STACK_LINE(621)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(622)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(627)
	{
		HX_STACK_LINE(628)
		::zpp_nape::geom::ZPP_Vec2 o = ax;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			if (((o->outer != null()))){
				HX_STACK_LINE(637)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(637)
				o->outer = null();
			}
			HX_STACK_LINE(637)
			o->_isimmutable = null();
			HX_STACK_LINE(637)
			o->_validate = null();
			HX_STACK_LINE(637)
			o->_invalidate = null();
		}
		HX_STACK_LINE(638)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(639)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(644)
	return min;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,distanceBody,return )

Float ZPP_SweepDistance_obj::distance( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2,::zpp_nape::geom::ZPP_Vec2 axis,hx::Null< Float >  __o_upperBound){
Float upperBound = __o_upperBound.Default(1e100);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distance",0x5faae7b8,"zpp_nape.geom.ZPP_SweepDistance.distance","zpp_nape/geom/SweepDistance.hx",648,0x2645f2ee)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(upperBound,"upperBound")
{
		HX_STACK_LINE(648)
		if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
			HX_STACK_LINE(649)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(650)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(651)
			Float dist;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(653)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(654)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(655)
				{
					HX_STACK_LINE(656)
					nx = (c2->worldCOMx - c1->worldCOMx);
					HX_STACK_LINE(657)
					ny = (c2->worldCOMy - c1->worldCOMy);
				}
				HX_STACK_LINE(659)
				Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(660)
				dist = (len - ((c1->radius + c2->radius)));
				HX_STACK_LINE(661)
				if (((dist < upperBound))){
					HX_STACK_LINE(662)
					if (((len == (int)0))){
						HX_STACK_LINE(663)
						nx = (int)1;
						HX_STACK_LINE(664)
						ny = (int)0;
						HX_STACK_LINE(673)
						{
						}
					}
					else{
						HX_STACK_LINE(683)
						Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(692)
						hx::MultEq(nx,t);
						HX_STACK_LINE(693)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(696)
						Float t = c1->radius;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(705)
						w1->x = (c1->worldCOMx + (nx * t));
						HX_STACK_LINE(706)
						w1->y = (c1->worldCOMy + (ny * t));
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(709)
						Float t = -(c2->radius);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(718)
						w2->x = (c2->worldCOMx + (nx * t));
						HX_STACK_LINE(719)
						w2->y = (c2->worldCOMy + (ny * t));
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(722)
						axis->x = nx;
						HX_STACK_LINE(723)
						axis->y = ny;
						HX_STACK_LINE(732)
						{
						}
					}
				}
			}
			HX_STACK_LINE(743)
			return dist;
		}
		else{
			HX_STACK_LINE(746)
			bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
			HX_STACK_LINE(747)
			if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
				HX_STACK_LINE(748)
				::zpp_nape::shape::ZPP_Shape tmp = s1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(749)
				s1 = s2;
				HX_STACK_LINE(750)
				s2 = tmp;
				HX_STACK_LINE(751)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(752)
				w1 = w2;
				HX_STACK_LINE(753)
				w2 = tmp2;
				HX_STACK_LINE(754)
				swapped = true;
			}
			HX_STACK_LINE(756)
			if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
				HX_STACK_LINE(757)
				::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(758)
				::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
				HX_STACK_LINE(759)
				Float best = -1e+100;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(760)
				::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(762)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(763)
					while((true)){
						HX_STACK_LINE(763)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(763)
							break;
						}
						HX_STACK_LINE(764)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(765)
						{
							HX_STACK_LINE(766)
							Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(767)
							if (((dist > upperBound))){
								HX_STACK_LINE(768)
								best = dist;
								HX_STACK_LINE(769)
								break;
							}
							HX_STACK_LINE(771)
							if (((dist > (int)0))){
								HX_STACK_LINE(772)
								if (((dist > best))){
									HX_STACK_LINE(773)
									best = dist;
									HX_STACK_LINE(774)
									a0 = a;
								}
							}
							else{
								HX_STACK_LINE(777)
								if (((bool((best < (int)0)) && bool((dist > best))))){
									HX_STACK_LINE(778)
									best = dist;
									HX_STACK_LINE(779)
									a0 = a;
								}
							}
						}
						HX_STACK_LINE(782)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(785)
				if (((best < upperBound))){
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(787)
					::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(788)
					Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(789)
					if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
						HX_STACK_LINE(791)
						Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(792)
						Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(793)
						{
							HX_STACK_LINE(794)
							nx = (circle->worldCOMx - v0->x);
							HX_STACK_LINE(795)
							ny = (circle->worldCOMy - v0->y);
						}
						HX_STACK_LINE(797)
						Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(798)
						best = (len - circle->radius);
						HX_STACK_LINE(799)
						if (((best < upperBound))){
							HX_STACK_LINE(800)
							if (((len == (int)0))){
								HX_STACK_LINE(801)
								nx = (int)1;
								HX_STACK_LINE(802)
								ny = (int)0;
								HX_STACK_LINE(811)
								{
								}
							}
							else{
								HX_STACK_LINE(821)
								Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(830)
								hx::MultEq(nx,t);
								HX_STACK_LINE(831)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(833)
							{
								HX_STACK_LINE(834)
								int t = (int)0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(843)
								w1->x = (v0->x + (nx * t));
								HX_STACK_LINE(844)
								w1->y = (v0->y + (ny * t));
							}
							HX_STACK_LINE(846)
							{
								HX_STACK_LINE(847)
								Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(856)
								w2->x = (circle->worldCOMx + (nx * t));
								HX_STACK_LINE(857)
								w2->y = (circle->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(859)
							{
								HX_STACK_LINE(860)
								axis->x = nx;
								HX_STACK_LINE(861)
								axis->y = ny;
								HX_STACK_LINE(870)
								{
								}
							}
						}
					}
					else{
						HX_STACK_LINE(882)
						if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
							HX_STACK_LINE(884)
							Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(885)
							Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(886)
							{
								HX_STACK_LINE(887)
								nx = (circle->worldCOMx - v1->x);
								HX_STACK_LINE(888)
								ny = (circle->worldCOMy - v1->y);
							}
							HX_STACK_LINE(890)
							Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(891)
							best = (len - circle->radius);
							HX_STACK_LINE(892)
							if (((best < upperBound))){
								HX_STACK_LINE(893)
								if (((len == (int)0))){
									HX_STACK_LINE(894)
									nx = (int)1;
									HX_STACK_LINE(895)
									ny = (int)0;
									HX_STACK_LINE(904)
									{
									}
								}
								else{
									HX_STACK_LINE(914)
									Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(923)
									hx::MultEq(nx,t);
									HX_STACK_LINE(924)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(926)
								{
									HX_STACK_LINE(927)
									int t = (int)0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(936)
									w1->x = (v1->x + (nx * t));
									HX_STACK_LINE(937)
									w1->y = (v1->y + (ny * t));
								}
								HX_STACK_LINE(939)
								{
									HX_STACK_LINE(940)
									Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(949)
									w2->x = (circle->worldCOMx + (nx * t));
									HX_STACK_LINE(950)
									w2->y = (circle->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(952)
								{
									HX_STACK_LINE(953)
									axis->x = nx;
									HX_STACK_LINE(954)
									axis->y = ny;
									HX_STACK_LINE(963)
									{
									}
								}
							}
						}
						else{
							HX_STACK_LINE(976)
							{
								HX_STACK_LINE(977)
								Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(986)
								w2->x = (circle->worldCOMx + (a0->gnormx * t));
								HX_STACK_LINE(987)
								w2->y = (circle->worldCOMy + (a0->gnormy * t));
							}
							HX_STACK_LINE(989)
							{
								HX_STACK_LINE(990)
								Float t = -(best);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(999)
								w1->x = (w2->x + (a0->gnormx * t));
								HX_STACK_LINE(1000)
								w1->y = (w2->y + (a0->gnormy * t));
							}
							HX_STACK_LINE(1002)
							{
								HX_STACK_LINE(1003)
								axis->x = a0->gnormx;
								HX_STACK_LINE(1004)
								axis->y = a0->gnormy;
								HX_STACK_LINE(1013)
								{
								}
							}
						}
					}
				}
				HX_STACK_LINE(1024)
				if ((swapped)){
					HX_STACK_LINE(1025)
					axis->x = -(axis->x);
					HX_STACK_LINE(1026)
					axis->y = -(axis->y);
				}
				HX_STACK_LINE(1028)
				return best;
			}
			else{
				HX_STACK_LINE(1031)
				::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1032)
				::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1033)
				Float best = -1e+100;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(1034)
				::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1035)
				::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1036)
				int besti = (int)0;		HX_STACK_VAR(besti,"besti");
				HX_STACK_LINE(1037)
				{
					HX_STACK_LINE(1038)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1039)
					while((true)){
						HX_STACK_LINE(1039)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(1039)
							break;
						}
						HX_STACK_LINE(1040)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1041)
						{
							HX_STACK_LINE(1042)
							Float min = 1e100;		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(1043)
							{
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(1045)
								while((true)){
									HX_STACK_LINE(1045)
									if ((!(((cx_ite1 != null()))))){
										HX_STACK_LINE(1045)
										break;
									}
									HX_STACK_LINE(1046)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1048)
										Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(1049)
										if (((k < min))){
											HX_STACK_LINE(1049)
											min = k;
										}
									}
									HX_STACK_LINE(1051)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(1054)
							hx::SubEq(min,a->gprojection);
							HX_STACK_LINE(1055)
							if (((min > upperBound))){
								HX_STACK_LINE(1056)
								best = min;
								HX_STACK_LINE(1057)
								break;
							}
							HX_STACK_LINE(1059)
							if (((min > (int)0))){
								HX_STACK_LINE(1060)
								if (((min > best))){
									HX_STACK_LINE(1061)
									best = min;
									HX_STACK_LINE(1062)
									a1 = a;
									HX_STACK_LINE(1063)
									besti = (int)1;
								}
							}
							else{
								HX_STACK_LINE(1066)
								if (((bool((best < (int)0)) && bool((min > best))))){
									HX_STACK_LINE(1067)
									best = min;
									HX_STACK_LINE(1068)
									a1 = a;
									HX_STACK_LINE(1069)
									besti = (int)1;
								}
							}
						}
						HX_STACK_LINE(1072)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1075)
				if (((best < upperBound))){
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1077)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1078)
						while((true)){
							HX_STACK_LINE(1078)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(1078)
								break;
							}
							HX_STACK_LINE(1079)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1081)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1084)
									while((true)){
										HX_STACK_LINE(1084)
										if ((!(((cx_ite1 != null()))))){
											HX_STACK_LINE(1084)
											break;
										}
										HX_STACK_LINE(1085)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1087)
											Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1088)
											if (((k < min))){
												HX_STACK_LINE(1088)
												min = k;
											}
										}
										HX_STACK_LINE(1090)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1093)
								hx::SubEq(min,a->gprojection);
								HX_STACK_LINE(1094)
								if (((min > upperBound))){
									HX_STACK_LINE(1095)
									best = min;
									HX_STACK_LINE(1096)
									break;
								}
								HX_STACK_LINE(1098)
								if (((min > (int)0))){
									HX_STACK_LINE(1099)
									if (((min > best))){
										HX_STACK_LINE(1100)
										best = min;
										HX_STACK_LINE(1101)
										a2 = a;
										HX_STACK_LINE(1102)
										besti = (int)2;
									}
								}
								else{
									HX_STACK_LINE(1105)
									if (((bool((best < (int)0)) && bool((min > best))))){
										HX_STACK_LINE(1106)
										best = min;
										HX_STACK_LINE(1107)
										a2 = a;
										HX_STACK_LINE(1108)
										besti = (int)2;
									}
								}
							}
							HX_STACK_LINE(1111)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1114)
					if (((best < upperBound))){
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
						HX_STACK_LINE(1116)
						::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1117)
						if (((besti == (int)1))){
							HX_STACK_LINE(1118)
							q1 = p1;
							HX_STACK_LINE(1119)
							q2 = p2;
							HX_STACK_LINE(1120)
							ax = a1;
						}
						else{
							HX_STACK_LINE(1123)
							q1 = p2;
							HX_STACK_LINE(1124)
							q2 = p1;
							HX_STACK_LINE(1125)
							ax = a2;
							HX_STACK_LINE(1126)
							::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1127)
							w1 = w2;
							HX_STACK_LINE(1128)
							w2 = tmp;
							HX_STACK_LINE(1129)
							swapped = !(swapped);
						}
						HX_STACK_LINE(1131)
						::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1132)
						Float min = 1e100;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1133)
						{
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1135)
							while((true)){
								HX_STACK_LINE(1135)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(1135)
									break;
								}
								HX_STACK_LINE(1136)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1137)
								{
									HX_STACK_LINE(1138)
									Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1139)
									if (((k < min))){
										HX_STACK_LINE(1140)
										min = k;
										HX_STACK_LINE(1141)
										ay = a;
									}
								}
								HX_STACK_LINE(1144)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1147)
						if ((swapped)){
							HX_STACK_LINE(1148)
							axis->x = -(ax->gnormx);
							HX_STACK_LINE(1149)
							axis->y = -(ax->gnormy);
							HX_STACK_LINE(1158)
							{
							}
						}
						else{
							HX_STACK_LINE(1168)
							axis->x = ax->gnormx;
							HX_STACK_LINE(1169)
							axis->y = ax->gnormy;
							HX_STACK_LINE(1178)
							{
							}
						}
						HX_STACK_LINE(1187)
						if (((best >= (int)0))){
							HX_STACK_LINE(1188)
							::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(1189)
							::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(1190)
							::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
							HX_STACK_LINE(1191)
							::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
							HX_STACK_LINE(1192)
							Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(1193)
							Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(1194)
							Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
							HX_STACK_LINE(1195)
							Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
							HX_STACK_LINE(1196)
							{
								HX_STACK_LINE(1197)
								vx = (v1->x - v0->x);
								HX_STACK_LINE(1198)
								vy = (v1->y - v0->y);
							}
							HX_STACK_LINE(1200)
							{
								HX_STACK_LINE(1201)
								qx = (q11->x - q0->x);
								HX_STACK_LINE(1202)
								qy = (q11->y - q0->y);
							}
							HX_STACK_LINE(1204)
							Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
							HX_STACK_LINE(1205)
							Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
							HX_STACK_LINE(1206)
							Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1207)
							Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1208)
							Float s11 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(1209)
							Float s21 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(1210)
							if (((t1 < (int)0))){
								HX_STACK_LINE(1210)
								t1 = (int)0;
							}
							else{
								HX_STACK_LINE(1211)
								if (((t1 > (int)1))){
									HX_STACK_LINE(1211)
									t1 = (int)1;
								}
							}
							HX_STACK_LINE(1212)
							if (((t2 < (int)0))){
								HX_STACK_LINE(1212)
								t2 = (int)0;
							}
							else{
								HX_STACK_LINE(1213)
								if (((t2 > (int)1))){
									HX_STACK_LINE(1213)
									t2 = (int)1;
								}
							}
							HX_STACK_LINE(1214)
							if (((s11 < (int)0))){
								HX_STACK_LINE(1214)
								s11 = (int)0;
							}
							else{
								HX_STACK_LINE(1215)
								if (((s11 > (int)1))){
									HX_STACK_LINE(1215)
									s11 = (int)1;
								}
							}
							HX_STACK_LINE(1216)
							if (((s21 < (int)0))){
								HX_STACK_LINE(1216)
								s21 = (int)0;
							}
							else{
								HX_STACK_LINE(1217)
								if (((s21 > (int)1))){
									HX_STACK_LINE(1217)
									s21 = (int)1;
								}
							}
							HX_STACK_LINE(1218)
							Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
							HX_STACK_LINE(1219)
							Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1221)
								Float t = t1;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1230)
								f1x = (v0->x + (vx * t));
								HX_STACK_LINE(1231)
								f1y = (v0->y + (vy * t));
							}
							HX_STACK_LINE(1233)
							Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
							HX_STACK_LINE(1234)
							Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
							HX_STACK_LINE(1235)
							{
								HX_STACK_LINE(1236)
								Float t = t2;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1245)
								f2x = (v0->x + (vx * t));
								HX_STACK_LINE(1246)
								f2y = (v0->y + (vy * t));
							}
							HX_STACK_LINE(1248)
							Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
							HX_STACK_LINE(1249)
							Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
							HX_STACK_LINE(1250)
							{
								HX_STACK_LINE(1251)
								Float t = s11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1260)
								g1x = (q0->x + (qx * t));
								HX_STACK_LINE(1261)
								g1y = (q0->y + (qy * t));
							}
							HX_STACK_LINE(1263)
							Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
							HX_STACK_LINE(1264)
							Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
							HX_STACK_LINE(1265)
							{
								HX_STACK_LINE(1266)
								Float t = s21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1275)
								g2x = (q0->x + (qx * t));
								HX_STACK_LINE(1276)
								g2y = (q0->y + (qy * t));
							}
							HX_STACK_LINE(1278)
							Float d1;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1278)
							{
								HX_STACK_LINE(1278)
								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1278)
								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1278)
								{
									HX_STACK_LINE(1278)
									dx = (f1x - q0->x);
									HX_STACK_LINE(1278)
									dy = (f1y - q0->y);
								}
								HX_STACK_LINE(1278)
								d1 = ((dx * dx) + (dy * dy));
							}
							HX_STACK_LINE(1279)
							Float d2;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(1279)
							{
								HX_STACK_LINE(1279)
								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1279)
								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1279)
								{
									HX_STACK_LINE(1279)
									dx = (f2x - q11->x);
									HX_STACK_LINE(1279)
									dy = (f2y - q11->y);
								}
								HX_STACK_LINE(1279)
								d2 = ((dx * dx) + (dy * dy));
							}
							HX_STACK_LINE(1280)
							Float e1;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(1280)
							{
								HX_STACK_LINE(1280)
								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1280)
								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1280)
								{
									HX_STACK_LINE(1280)
									dx = (g1x - v0->x);
									HX_STACK_LINE(1280)
									dy = (g1y - v0->y);
								}
								HX_STACK_LINE(1280)
								e1 = ((dx * dx) + (dy * dy));
							}
							HX_STACK_LINE(1281)
							Float e2;		HX_STACK_VAR(e2,"e2");
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1281)
								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1281)
								{
									HX_STACK_LINE(1281)
									dx = (g2x - v1->x);
									HX_STACK_LINE(1281)
									dy = (g2y - v1->y);
								}
								HX_STACK_LINE(1281)
								e2 = ((dx * dx) + (dy * dy));
							}
							HX_STACK_LINE(1282)
							Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
							HX_STACK_LINE(1283)
							Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
							HX_STACK_LINE(1284)
							::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
							HX_STACK_LINE(1285)
							if (((d1 < d2))){
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1287)
									minfx = f1x;
									HX_STACK_LINE(1288)
									minfy = f1y;
									HX_STACK_LINE(1297)
									{
									}
								}
								HX_STACK_LINE(1306)
								minq = q0;
							}
							else{
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1310)
									minfx = f2x;
									HX_STACK_LINE(1311)
									minfy = f2y;
									HX_STACK_LINE(1320)
									{
									}
								}
								HX_STACK_LINE(1329)
								minq = q11;
								HX_STACK_LINE(1330)
								d1 = d2;
							}
							HX_STACK_LINE(1332)
							Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
							HX_STACK_LINE(1333)
							Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
							HX_STACK_LINE(1334)
							::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
							HX_STACK_LINE(1335)
							if (((e1 < e2))){
								HX_STACK_LINE(1336)
								{
									HX_STACK_LINE(1337)
									mingx = g1x;
									HX_STACK_LINE(1338)
									mingy = g1y;
									HX_STACK_LINE(1347)
									{
									}
								}
								HX_STACK_LINE(1356)
								minv = v0;
							}
							else{
								HX_STACK_LINE(1359)
								{
									HX_STACK_LINE(1360)
									mingx = g2x;
									HX_STACK_LINE(1361)
									mingy = g2y;
									HX_STACK_LINE(1370)
									{
									}
								}
								HX_STACK_LINE(1379)
								minv = v1;
								HX_STACK_LINE(1380)
								e1 = e2;
							}
							HX_STACK_LINE(1382)
							if (((d1 < e1))){
								HX_STACK_LINE(1383)
								{
									HX_STACK_LINE(1384)
									w1->x = minfx;
									HX_STACK_LINE(1385)
									w1->y = minfy;
									HX_STACK_LINE(1394)
									{
									}
								}
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									w2->x = minq->x;
									HX_STACK_LINE(1405)
									w2->y = minq->y;
									HX_STACK_LINE(1414)
									{
									}
								}
								HX_STACK_LINE(1423)
								Float _g = ::Math_obj::sqrt(d1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1423)
								best = _g;
							}
							else{
								HX_STACK_LINE(1426)
								{
									HX_STACK_LINE(1427)
									w2->x = mingx;
									HX_STACK_LINE(1428)
									w2->y = mingy;
									HX_STACK_LINE(1437)
									{
									}
								}
								HX_STACK_LINE(1446)
								{
									HX_STACK_LINE(1447)
									w1->x = minv->x;
									HX_STACK_LINE(1448)
									w1->y = minv->y;
									HX_STACK_LINE(1457)
									{
									}
								}
								HX_STACK_LINE(1466)
								Float _g1 = ::Math_obj::sqrt(e1);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1466)
								best = _g1;
							}
							HX_STACK_LINE(1468)
							if (((best != (int)0))){
								HX_STACK_LINE(1469)
								{
									HX_STACK_LINE(1470)
									axis->x = (w2->x - w1->x);
									HX_STACK_LINE(1471)
									axis->y = (w2->y - w1->y);
								}
								HX_STACK_LINE(1473)
								{
									HX_STACK_LINE(1474)
									Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1483)
									hx::MultEq(axis->x,t);
									HX_STACK_LINE(1484)
									hx::MultEq(axis->y,t);
								}
								HX_STACK_LINE(1486)
								if ((swapped)){
									HX_STACK_LINE(1487)
									axis->x = -(axis->x);
									HX_STACK_LINE(1488)
									axis->y = -(axis->y);
								}
							}
							HX_STACK_LINE(1491)
							return best;
						}
						else{
							HX_STACK_LINE(1494)
							Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
							HX_STACK_LINE(1495)
							Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
							HX_STACK_LINE(1496)
							{
								HX_STACK_LINE(1497)
								c0x = ay->gp0->x;
								HX_STACK_LINE(1498)
								c0y = ay->gp0->y;
								HX_STACK_LINE(1507)
								{
								}
							}
							HX_STACK_LINE(1516)
							Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
							HX_STACK_LINE(1517)
							Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
							HX_STACK_LINE(1518)
							{
								HX_STACK_LINE(1519)
								c1x = ay->gp1->x;
								HX_STACK_LINE(1520)
								c1y = ay->gp1->y;
								HX_STACK_LINE(1529)
								{
								}
							}
							HX_STACK_LINE(1538)
							Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
							HX_STACK_LINE(1539)
							Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
							HX_STACK_LINE(1540)
							{
								HX_STACK_LINE(1541)
								dvx = (c1x - c0x);
								HX_STACK_LINE(1542)
								dvy = (c1y - c0y);
							}
							HX_STACK_LINE(1544)
							Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
							HX_STACK_LINE(1545)
							Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1546)
							Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1547)
							Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1548)
							if (((t > ::nape::Config_obj::epsilon))){
								HX_STACK_LINE(1549)
								Float t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1558)
								hx::AddEq(c0x,(dvx * t1));
								HX_STACK_LINE(1559)
								hx::AddEq(c0y,(dvy * t1));
							}
							HX_STACK_LINE(1561)
							Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1562)
							if (((t1 < -(::nape::Config_obj::epsilon)))){
								HX_STACK_LINE(1563)
								Float t2 = t1;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(1572)
								hx::AddEq(c1x,(dvx * t2));
								HX_STACK_LINE(1573)
								hx::AddEq(c1y,(dvy * t2));
							}
							HX_STACK_LINE(1575)
							Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
							HX_STACK_LINE(1576)
							Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
							HX_STACK_LINE(1577)
							if (((c0d < c1d))){
								HX_STACK_LINE(1578)
								{
									HX_STACK_LINE(1579)
									w2->x = c0x;
									HX_STACK_LINE(1580)
									w2->y = c0y;
									HX_STACK_LINE(1589)
									{
									}
								}
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1599)
									Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1608)
									w1->x = (w2->x + (ax->gnormx * t2));
									HX_STACK_LINE(1609)
									w1->y = (w2->y + (ax->gnormy * t2));
								}
								HX_STACK_LINE(1611)
								return c0d;
							}
							else{
								HX_STACK_LINE(1614)
								{
									HX_STACK_LINE(1615)
									w2->x = c1x;
									HX_STACK_LINE(1616)
									w2->y = c1y;
									HX_STACK_LINE(1625)
									{
									}
								}
								HX_STACK_LINE(1634)
								{
									HX_STACK_LINE(1635)
									Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1644)
									w1->x = (w2->x + (ax->gnormx * t2));
									HX_STACK_LINE(1645)
									w1->y = (w2->y + (ax->gnormy * t2));
								}
								HX_STACK_LINE(1647)
								return c1d;
							}
						}
					}
					else{
						HX_STACK_LINE(1651)
						return upperBound;
					}
				}
				else{
					HX_STACK_LINE(1653)
					return upperBound;
				}
			}
		}
		HX_STACK_LINE(648)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_SweepDistance_obj,distance,return )


ZPP_SweepDistance_obj::ZPP_SweepDistance_obj()
{
}

Dynamic ZPP_SweepDistance_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticSweep") ) { return staticSweep_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicSweep") ) { return dynamicSweep_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceBody") ) { return distanceBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SweepDistance_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SweepDistance_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dynamicSweep"),
	HX_CSTRING("staticSweep"),
	HX_CSTRING("distanceBody"),
	HX_CSTRING("distance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#endif

Class ZPP_SweepDistance_obj::__mClass;

void ZPP_SweepDistance_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SweepDistance"), hx::TCanCast< ZPP_SweepDistance_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SweepDistance_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
