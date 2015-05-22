#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace nape{
namespace shape{

Void Edge_obj::__construct()
{
HX_STACK_FRAME("nape.shape.Edge","new",0xc0f99b82,"nape.shape.Edge.new","nape/shape/Edge.hx",177,0xab3b8fac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
}
;
	return null();
}

//Edge_obj::~Edge_obj() { }

Dynamic Edge_obj::__CreateEmpty() { return  new Edge_obj; }
hx::ObjectPtr< Edge_obj > Edge_obj::__new()
{  hx::ObjectPtr< Edge_obj > result = new Edge_obj();
	result->__construct();
	return result;}

Dynamic Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Edge_obj > result = new Edge_obj();
	result->__construct();
	return result;}

::nape::shape::Polygon Edge_obj::get_polygon( ){
	HX_STACK_FRAME("nape.shape.Edge","get_polygon",0x78841fb3,"nape.shape.Edge.get_polygon","nape/shape/Edge.hx",199,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	return this->zpp_inner->polygon->outer_zn;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_polygon,return )

::nape::geom::Vec2 Edge_obj::get_localNormal( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localNormal",0x39c0bfab,"nape.shape.Edge.get_localNormal","nape/shape/Edge.hx",208,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	if (((this->zpp_inner->wrap_lnorm == null()))){
		HX_STACK_LINE(212)
		this->zpp_inner->getlnorm();
	}
	HX_STACK_LINE(213)
	return this->zpp_inner->wrap_lnorm;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localNormal,return )

::nape::geom::Vec2 Edge_obj::get_worldNormal( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldNormal",0x47f3b3d2,"nape.shape.Edge.get_worldNormal","nape/shape/Edge.hx",224,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	if (((this->zpp_inner->wrap_gnorm == null()))){
		HX_STACK_LINE(228)
		this->zpp_inner->getgnorm();
	}
	HX_STACK_LINE(229)
	return this->zpp_inner->wrap_gnorm;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldNormal,return )

Float Edge_obj::get_length( ){
	HX_STACK_FRAME("nape.shape.Edge","get_length",0xf6bbc1cd,"nape.shape.Edge.get_length","nape/shape/Edge.hx",236,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	this->zpp_inner->polygon->validate_laxi();
	HX_STACK_LINE(241)
	return this->zpp_inner->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_length,return )

Float Edge_obj::get_localProjection( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localProjection",0xa0f1e813,"nape.shape.Edge.get_localProjection","nape/shape/Edge.hx",248,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	this->zpp_inner->polygon->validate_laxi();
	HX_STACK_LINE(253)
	return this->zpp_inner->lprojection;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localProjection,return )

Float Edge_obj::get_worldProjection( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldProjection",0xea4f7bba,"nape.shape.Edge.get_worldProjection","nape/shape/Edge.hx",262,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(267)
		::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(267)
		if ((_this->zip_gaxi)){
			HX_STACK_LINE(267)
			if (((_this->body != null()))){
				HX_STACK_LINE(267)
				_this->zip_gaxi = false;
				HX_STACK_LINE(267)
				_this->validate_laxi();
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(267)
					if ((_this1->zip_axis)){
						HX_STACK_LINE(267)
						_this1->zip_axis = false;
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(267)
							_this1->axisx = _g;
							HX_STACK_LINE(267)
							Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(267)
							_this1->axisy = _g1;
							HX_STACK_LINE(267)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(267)
				if ((_this->zip_gverts)){
					HX_STACK_LINE(267)
					if (((_this->body != null()))){
						HX_STACK_LINE(267)
						_this->zip_gverts = false;
						HX_STACK_LINE(267)
						_this->validate_lverts();
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(267)
							if ((_this1->zip_axis)){
								HX_STACK_LINE(267)
								_this1->zip_axis = false;
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(267)
									_this1->axisx = _g2;
									HX_STACK_LINE(267)
									Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(267)
									_this1->axisy = _g3;
									HX_STACK_LINE(267)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(267)
						::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(267)
							while((true)){
								HX_STACK_LINE(267)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(267)
									break;
								}
								HX_STACK_LINE(267)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(267)
									li = li->next;
									HX_STACK_LINE(267)
									{
										HX_STACK_LINE(267)
										g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
										HX_STACK_LINE(267)
										g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
									}
								}
								HX_STACK_LINE(267)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(267)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(267)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(267)
					while((true)){
						HX_STACK_LINE(267)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(267)
							break;
						}
						HX_STACK_LINE(267)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(267)
							ite = ite->next;
							HX_STACK_LINE(267)
							e->gp0 = u;
							HX_STACK_LINE(267)
							e->gp1 = v;
							HX_STACK_LINE(267)
							{
								HX_STACK_LINE(267)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(267)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(267)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(267)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(267)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(267)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(267)
								{
								}
							}
							HX_STACK_LINE(267)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(267)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
						HX_STACK_LINE(267)
						u = v;
						HX_STACK_LINE(267)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(267)
						ite = ite->next;
						HX_STACK_LINE(267)
						e->gp0 = u;
						HX_STACK_LINE(267)
						e->gp1 = v;
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
							HX_STACK_LINE(267)
							e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
						}
						HX_STACK_LINE(267)
						e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(267)
						if (((e->wrap_gnorm != null()))){
							HX_STACK_LINE(267)
							e->wrap_gnorm->zpp_inner->x = e->gnormx;
							HX_STACK_LINE(267)
							e->wrap_gnorm->zpp_inner->y = e->gnormy;
							HX_STACK_LINE(267)
							{
							}
						}
						HX_STACK_LINE(267)
						e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
						HX_STACK_LINE(267)
						e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
					}
				}
			}
		}
	}
	HX_STACK_LINE(268)
	return this->zpp_inner->gprojection;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldProjection,return )

::nape::geom::Vec2 Edge_obj::get_localVertex1( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localVertex1",0xa0a4a249,"nape.shape.Edge.get_localVertex1","nape/shape/Edge.hx",275,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	this->zpp_inner->polygon->validate_laxi();
	HX_STACK_LINE(280)
	::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->lp0;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(280)
	if (((_this->outer == null()))){
		HX_STACK_LINE(280)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		_this->outer = _g;
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				if (((o->outer != null()))){
					HX_STACK_LINE(280)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(280)
					o->outer = null();
				}
				HX_STACK_LINE(280)
				o->_isimmutable = null();
				HX_STACK_LINE(280)
				o->_validate = null();
				HX_STACK_LINE(280)
				o->_invalidate = null();
			}
			HX_STACK_LINE(280)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(280)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(280)
		_this->outer->zpp_inner = _this;
	}
	HX_STACK_LINE(280)
	return _this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex1,return )

::nape::geom::Vec2 Edge_obj::get_localVertex2( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localVertex2",0xa0a4a24a,"nape.shape.Edge.get_localVertex2","nape/shape/Edge.hx",287,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	this->zpp_inner->polygon->validate_laxi();
	HX_STACK_LINE(292)
	::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->lp1;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(292)
	if (((_this->outer == null()))){
		HX_STACK_LINE(292)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		_this->outer = _g;
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				if (((o->outer != null()))){
					HX_STACK_LINE(292)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(292)
					o->outer = null();
				}
				HX_STACK_LINE(292)
				o->_isimmutable = null();
				HX_STACK_LINE(292)
				o->_validate = null();
				HX_STACK_LINE(292)
				o->_invalidate = null();
			}
			HX_STACK_LINE(292)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(292)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(292)
		_this->outer->zpp_inner = _this;
	}
	HX_STACK_LINE(292)
	return _this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex2,return )

::nape::geom::Vec2 Edge_obj::get_worldVertex1( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldVertex1",0xff075042,"nape.shape.Edge.get_worldVertex1","nape/shape/Edge.hx",299,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(303)
		if ((_this->zip_gaxi)){
			HX_STACK_LINE(303)
			if (((_this->body != null()))){
				HX_STACK_LINE(303)
				_this->zip_gaxi = false;
				HX_STACK_LINE(303)
				_this->validate_laxi();
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(303)
					if ((_this1->zip_axis)){
						HX_STACK_LINE(303)
						_this1->zip_axis = false;
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(303)
							_this1->axisx = _g;
							HX_STACK_LINE(303)
							Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(303)
							_this1->axisy = _g1;
							HX_STACK_LINE(303)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(303)
				if ((_this->zip_gverts)){
					HX_STACK_LINE(303)
					if (((_this->body != null()))){
						HX_STACK_LINE(303)
						_this->zip_gverts = false;
						HX_STACK_LINE(303)
						_this->validate_lverts();
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(303)
							if ((_this1->zip_axis)){
								HX_STACK_LINE(303)
								_this1->zip_axis = false;
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(303)
									_this1->axisx = _g2;
									HX_STACK_LINE(303)
									Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(303)
									_this1->axisy = _g3;
									HX_STACK_LINE(303)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(303)
						::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(303)
							while((true)){
								HX_STACK_LINE(303)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(303)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(303)
									li = li->next;
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
										HX_STACK_LINE(303)
										g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
									}
								}
								HX_STACK_LINE(303)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(303)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(303)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(303)
					while((true)){
						HX_STACK_LINE(303)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(303)
							break;
						}
						HX_STACK_LINE(303)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(303)
							ite = ite->next;
							HX_STACK_LINE(303)
							e->gp0 = u;
							HX_STACK_LINE(303)
							e->gp1 = v;
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(303)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(303)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(303)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(303)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(303)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(303)
								{
								}
							}
							HX_STACK_LINE(303)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(303)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
						HX_STACK_LINE(303)
						u = v;
						HX_STACK_LINE(303)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(303)
						ite = ite->next;
						HX_STACK_LINE(303)
						e->gp0 = u;
						HX_STACK_LINE(303)
						e->gp1 = v;
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
							HX_STACK_LINE(303)
							e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
						}
						HX_STACK_LINE(303)
						e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(303)
						if (((e->wrap_gnorm != null()))){
							HX_STACK_LINE(303)
							e->wrap_gnorm->zpp_inner->x = e->gnormx;
							HX_STACK_LINE(303)
							e->wrap_gnorm->zpp_inner->y = e->gnormy;
							HX_STACK_LINE(303)
							{
							}
						}
						HX_STACK_LINE(303)
						e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
						HX_STACK_LINE(303)
						e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
					}
				}
			}
		}
	}
	HX_STACK_LINE(304)
	::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->gp0;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(304)
	if (((_this->outer == null()))){
		HX_STACK_LINE(304)
		::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(304)
		_this->outer = _g4;
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				if (((o->outer != null()))){
					HX_STACK_LINE(304)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(304)
					o->outer = null();
				}
				HX_STACK_LINE(304)
				o->_isimmutable = null();
				HX_STACK_LINE(304)
				o->_validate = null();
				HX_STACK_LINE(304)
				o->_invalidate = null();
			}
			HX_STACK_LINE(304)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(304)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(304)
		_this->outer->zpp_inner = _this;
	}
	HX_STACK_LINE(304)
	return _this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex1,return )

::nape::geom::Vec2 Edge_obj::get_worldVertex2( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldVertex2",0xff075043,"nape.shape.Edge.get_worldVertex2","nape/shape/Edge.hx",311,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(315)
		if ((_this->zip_gaxi)){
			HX_STACK_LINE(315)
			if (((_this->body != null()))){
				HX_STACK_LINE(315)
				_this->zip_gaxi = false;
				HX_STACK_LINE(315)
				_this->validate_laxi();
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(315)
					if ((_this1->zip_axis)){
						HX_STACK_LINE(315)
						_this1->zip_axis = false;
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(315)
							_this1->axisx = _g;
							HX_STACK_LINE(315)
							Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(315)
							_this1->axisy = _g1;
							HX_STACK_LINE(315)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(315)
				if ((_this->zip_gverts)){
					HX_STACK_LINE(315)
					if (((_this->body != null()))){
						HX_STACK_LINE(315)
						_this->zip_gverts = false;
						HX_STACK_LINE(315)
						_this->validate_lverts();
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(315)
							if ((_this1->zip_axis)){
								HX_STACK_LINE(315)
								_this1->zip_axis = false;
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(315)
									_this1->axisx = _g2;
									HX_STACK_LINE(315)
									Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(315)
									_this1->axisy = _g3;
									HX_STACK_LINE(315)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(315)
							while((true)){
								HX_STACK_LINE(315)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(315)
									break;
								}
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(315)
									li = li->next;
									HX_STACK_LINE(315)
									{
										HX_STACK_LINE(315)
										g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
										HX_STACK_LINE(315)
										g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
									}
								}
								HX_STACK_LINE(315)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(315)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(315)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(315)
					while((true)){
						HX_STACK_LINE(315)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(315)
							break;
						}
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(315)
							ite = ite->next;
							HX_STACK_LINE(315)
							e->gp0 = u;
							HX_STACK_LINE(315)
							e->gp1 = v;
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(315)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(315)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(315)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(315)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(315)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(315)
								{
								}
							}
							HX_STACK_LINE(315)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(315)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
						HX_STACK_LINE(315)
						u = v;
						HX_STACK_LINE(315)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(315)
						ite = ite->next;
						HX_STACK_LINE(315)
						e->gp0 = u;
						HX_STACK_LINE(315)
						e->gp1 = v;
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
							HX_STACK_LINE(315)
							e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
						}
						HX_STACK_LINE(315)
						e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(315)
						if (((e->wrap_gnorm != null()))){
							HX_STACK_LINE(315)
							e->wrap_gnorm->zpp_inner->x = e->gnormx;
							HX_STACK_LINE(315)
							e->wrap_gnorm->zpp_inner->y = e->gnormy;
							HX_STACK_LINE(315)
							{
							}
						}
						HX_STACK_LINE(315)
						e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
						HX_STACK_LINE(315)
						e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
					}
				}
			}
		}
	}
	HX_STACK_LINE(316)
	::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->gp1;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(316)
	if (((_this->outer == null()))){
		HX_STACK_LINE(316)
		::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(316)
		_this->outer = _g4;
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				if (((o->outer != null()))){
					HX_STACK_LINE(316)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(316)
					o->outer = null();
				}
				HX_STACK_LINE(316)
				o->_isimmutable = null();
				HX_STACK_LINE(316)
				o->_validate = null();
				HX_STACK_LINE(316)
				o->_invalidate = null();
			}
			HX_STACK_LINE(316)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(316)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(316)
		_this->outer->zpp_inner = _this;
	}
	HX_STACK_LINE(316)
	return _this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex2,return )

::String Edge_obj::toString( ){
	HX_STACK_FRAME("nape.shape.Edge","toString",0x0c0b6a4a,"nape.shape.Edge.toString","nape/shape/Edge.hx",322,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	if (((this->zpp_inner->polygon == null()))){
		HX_STACK_LINE(322)
		return HX_CSTRING("Edge(object-pooled)");
	}
	else{
		HX_STACK_LINE(323)
		if (((this->zpp_inner->polygon->body == null()))){
			HX_STACK_LINE(324)
			this->zpp_inner->polygon->validate_laxi();
			HX_STACK_LINE(325)
			return ((HX_CSTRING("{ localNormal : ") + (((((HX_CSTRING("{ x: ") + this->zpp_inner->lnormx) + HX_CSTRING(" y: ")) + this->zpp_inner->lnormy) + HX_CSTRING(" }")))) + HX_CSTRING(" }"));
		}
		else{
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				if ((_this->zip_gaxi)){
					HX_STACK_LINE(328)
					if (((_this->body != null()))){
						HX_STACK_LINE(328)
						_this->zip_gaxi = false;
						HX_STACK_LINE(328)
						_this->validate_laxi();
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(328)
							if ((_this1->zip_axis)){
								HX_STACK_LINE(328)
								_this1->zip_axis = false;
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(328)
									_this1->axisx = _g;
									HX_STACK_LINE(328)
									Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(328)
									_this1->axisy = _g1;
									HX_STACK_LINE(328)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(328)
						if ((_this->zip_gverts)){
							HX_STACK_LINE(328)
							if (((_this->body != null()))){
								HX_STACK_LINE(328)
								_this->zip_gverts = false;
								HX_STACK_LINE(328)
								_this->validate_lverts();
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(328)
									if ((_this1->zip_axis)){
										HX_STACK_LINE(328)
										_this1->zip_axis = false;
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(328)
											_this1->axisx = _g2;
											HX_STACK_LINE(328)
											Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(328)
											_this1->axisy = _g3;
											HX_STACK_LINE(328)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(328)
								::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(328)
									while((true)){
										HX_STACK_LINE(328)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(328)
											break;
										}
										HX_STACK_LINE(328)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(328)
											li = li->next;
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
												HX_STACK_LINE(328)
												g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
											}
										}
										HX_STACK_LINE(328)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(328)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(328)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(328)
							while((true)){
								HX_STACK_LINE(328)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(328)
									break;
								}
								HX_STACK_LINE(328)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(328)
									ite = ite->next;
									HX_STACK_LINE(328)
									e->gp0 = u;
									HX_STACK_LINE(328)
									e->gp1 = v;
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
										HX_STACK_LINE(328)
										e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
									}
									HX_STACK_LINE(328)
									e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
									HX_STACK_LINE(328)
									if (((e->wrap_gnorm != null()))){
										HX_STACK_LINE(328)
										e->wrap_gnorm->zpp_inner->x = e->gnormx;
										HX_STACK_LINE(328)
										e->wrap_gnorm->zpp_inner->y = e->gnormy;
										HX_STACK_LINE(328)
										{
										}
									}
									HX_STACK_LINE(328)
									e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
									HX_STACK_LINE(328)
									e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
								}
								HX_STACK_LINE(328)
								u = v;
								HX_STACK_LINE(328)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(328)
							{
								HX_STACK_LINE(328)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(328)
								ite = ite->next;
								HX_STACK_LINE(328)
								e->gp0 = u;
								HX_STACK_LINE(328)
								e->gp1 = v;
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
									HX_STACK_LINE(328)
									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
								}
								HX_STACK_LINE(328)
								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(328)
								if (((e->wrap_gnorm != null()))){
									HX_STACK_LINE(328)
									e->wrap_gnorm->zpp_inner->x = e->gnormx;
									HX_STACK_LINE(328)
									e->wrap_gnorm->zpp_inner->y = e->gnormy;
									HX_STACK_LINE(328)
									{
									}
								}
								HX_STACK_LINE(328)
								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
								HX_STACK_LINE(328)
								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
							}
						}
					}
				}
			}
			HX_STACK_LINE(329)
			return ((((HX_CSTRING("{ localNormal : ") + (((((HX_CSTRING("{ x: ") + this->zpp_inner->lnormx) + HX_CSTRING(" y: ")) + this->zpp_inner->lnormy) + HX_CSTRING(" }")))) + HX_CSTRING(" worldNormal : ")) + (((((HX_CSTRING("{ x: ") + this->zpp_inner->gnormx) + HX_CSTRING(" y: ")) + this->zpp_inner->gnormy) + HX_CSTRING(" }")))) + HX_CSTRING(" }"));
		}
	}
	HX_STACK_LINE(322)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,toString,return )


Edge_obj::Edge_obj()
{
}

void Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Edge);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Edge_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return get_polygon(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_polygon") ) { return get_polygon_dyn(); }
		if (HX_FIELD_EQ(inName,"localNormal") ) { return get_localNormal(); }
		if (HX_FIELD_EQ(inName,"worldNormal") ) { return get_worldNormal(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localVertex1") ) { return get_localVertex1(); }
		if (HX_FIELD_EQ(inName,"localVertex2") ) { return get_localVertex2(); }
		if (HX_FIELD_EQ(inName,"worldVertex1") ) { return get_worldVertex1(); }
		if (HX_FIELD_EQ(inName,"worldVertex2") ) { return get_worldVertex2(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_localNormal") ) { return get_localNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldNormal") ) { return get_worldNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"localProjection") ) { return get_localProjection(); }
		if (HX_FIELD_EQ(inName,"worldProjection") ) { return get_worldProjection(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_localVertex1") ) { return get_localVertex1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localVertex2") ) { return get_localVertex2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVertex1") ) { return get_worldVertex1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVertex2") ) { return get_worldVertex2_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_localProjection") ) { return get_localProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldProjection") ) { return get_worldProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("polygon"));
	outFields->push(HX_CSTRING("localNormal"));
	outFields->push(HX_CSTRING("worldNormal"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("localProjection"));
	outFields->push(HX_CSTRING("worldProjection"));
	outFields->push(HX_CSTRING("localVertex1"));
	outFields->push(HX_CSTRING("localVertex2"));
	outFields->push(HX_CSTRING("worldVertex1"));
	outFields->push(HX_CSTRING("worldVertex2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(Edge_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_polygon"),
	HX_CSTRING("get_localNormal"),
	HX_CSTRING("get_worldNormal"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_localProjection"),
	HX_CSTRING("get_worldProjection"),
	HX_CSTRING("get_localVertex1"),
	HX_CSTRING("get_localVertex2"),
	HX_CSTRING("get_worldVertex1"),
	HX_CSTRING("get_worldVertex2"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Edge_obj::__mClass,"__mClass");
};

#endif

Class Edge_obj::__mClass;

void Edge_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.Edge"), hx::TCanCast< Edge_obj> ,sStaticFields,sMemberFields,
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

void Edge_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
