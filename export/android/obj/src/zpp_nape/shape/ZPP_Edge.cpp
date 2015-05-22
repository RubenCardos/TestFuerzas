#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Edge_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","new",0x28a22ac2,"zpp_nape.shape.ZPP_Edge.new","zpp_nape/shape/Edge.hx",174,0x9f6a6311)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(234)
	this->tp1 = 0.0;
	HX_STACK_LINE(233)
	this->tp0 = 0.0;
	HX_STACK_LINE(232)
	this->gp1 = null();
	HX_STACK_LINE(231)
	this->lp1 = null();
	HX_STACK_LINE(230)
	this->gp0 = null();
	HX_STACK_LINE(229)
	this->lp0 = null();
	HX_STACK_LINE(228)
	this->gprojection = 0.0;
	HX_STACK_LINE(227)
	this->lprojection = 0.0;
	HX_STACK_LINE(226)
	this->length = 0.0;
	HX_STACK_LINE(225)
	this->wrap_gnorm = null();
	HX_STACK_LINE(224)
	this->gnormy = 0.0;
	HX_STACK_LINE(223)
	this->gnormx = 0.0;
	HX_STACK_LINE(222)
	this->wrap_lnorm = null();
	HX_STACK_LINE(221)
	this->lnormy = 0.0;
	HX_STACK_LINE(220)
	this->lnormx = 0.0;
	HX_STACK_LINE(210)
	this->outer = null();
	HX_STACK_LINE(208)
	this->polygon = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(300)
		this->lnormx = (int)0;
		HX_STACK_LINE(301)
		this->lnormy = (int)0;
		HX_STACK_LINE(310)
		{
		}
	}
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(320)
		this->gnormx = (int)0;
		HX_STACK_LINE(321)
		this->gnormy = (int)0;
		HX_STACK_LINE(330)
		{
		}
	}
	HX_STACK_LINE(339)
	this->length = (int)0;
	HX_STACK_LINE(340)
	this->lprojection = (int)0;
	HX_STACK_LINE(341)
	this->gprojection = (int)0;
}
;
	return null();
}

//ZPP_Edge_obj::~ZPP_Edge_obj() { }

Dynamic ZPP_Edge_obj::__CreateEmpty() { return  new ZPP_Edge_obj; }
hx::ObjectPtr< ZPP_Edge_obj > ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZPP_Edge_obj > result = new ZPP_Edge_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Edge_obj > result = new ZPP_Edge_obj();
	result->__construct();
	return result;}

Void ZPP_Edge_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","free",0x6003580a,"zpp_nape.shape.ZPP_Edge.free","zpp_nape/shape/Edge.hx",203,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->polygon = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,free,(void))

Void ZPP_Edge_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","alloc",0xbdf6db57,"zpp_nape.shape.ZPP_Edge.alloc","zpp_nape/shape/Edge.hx",207,0x9f6a6311)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,alloc,(void))

::nape::shape::Edge ZPP_Edge_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","wrapper",0xf22d08b5,"zpp_nape.shape.ZPP_Edge.wrapper","zpp_nape/shape/Edge.hx",211,0x9f6a6311)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	if (((this->outer == null()))){
		HX_STACK_LINE(213)
		::zpp_nape::shape::ZPP_Edge_obj::internal = true;
		HX_STACK_LINE(214)
		::nape::shape::Edge _g = ::nape::shape::Edge_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		this->outer = _g;
		HX_STACK_LINE(215)
		::zpp_nape::shape::ZPP_Edge_obj::internal = false;
		HX_STACK_LINE(216)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(218)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,wrapper,return )

Void ZPP_Edge_obj::lnorm_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","lnorm_validate",0xe154132b,"zpp_nape.shape.ZPP_Edge.lnorm_validate","zpp_nape/shape/Edge.hx",235,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->polygon->validate_laxi();
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(241)
			this->wrap_lnorm->zpp_inner->x = this->lnormx;
			HX_STACK_LINE(242)
			this->wrap_lnorm->zpp_inner->y = this->lnormy;
			HX_STACK_LINE(251)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,lnorm_validate,(void))

Void ZPP_Edge_obj::gnorm_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","gnorm_validate",0x13f17250,"zpp_nape.shape.ZPP_Edge.gnorm_validate","zpp_nape/shape/Edge.hx",261,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(266)
			if ((_this->zip_gaxi)){
				HX_STACK_LINE(266)
				if (((_this->body != null()))){
					HX_STACK_LINE(266)
					_this->zip_gaxi = false;
					HX_STACK_LINE(266)
					_this->validate_laxi();
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(266)
						if ((_this1->zip_axis)){
							HX_STACK_LINE(266)
							_this1->zip_axis = false;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(266)
								_this1->axisx = _g;
								HX_STACK_LINE(266)
								Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(266)
								_this1->axisy = _g1;
								HX_STACK_LINE(266)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(266)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(266)
						if (((_this->body != null()))){
							HX_STACK_LINE(266)
							_this->zip_gverts = false;
							HX_STACK_LINE(266)
							_this->validate_lverts();
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(266)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(266)
									_this1->zip_axis = false;
									HX_STACK_LINE(266)
									{
										HX_STACK_LINE(266)
										Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(266)
										_this1->axisx = _g2;
										HX_STACK_LINE(266)
										Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(266)
										_this1->axisy = _g3;
										HX_STACK_LINE(266)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(266)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(266)
								while((true)){
									HX_STACK_LINE(266)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(266)
										break;
									}
									HX_STACK_LINE(266)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(266)
									{
										HX_STACK_LINE(266)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(266)
										li = li->next;
										HX_STACK_LINE(266)
										{
											HX_STACK_LINE(266)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(266)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(266)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(266)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(266)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(266)
						while((true)){
							HX_STACK_LINE(266)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(266)
								break;
							}
							HX_STACK_LINE(266)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(266)
								ite = ite->next;
								HX_STACK_LINE(266)
								e->gp0 = u;
								HX_STACK_LINE(266)
								e->gp1 = v;
								HX_STACK_LINE(266)
								{
									HX_STACK_LINE(266)
									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
									HX_STACK_LINE(266)
									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
								}
								HX_STACK_LINE(266)
								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(266)
								if (((e->wrap_gnorm != null()))){
									HX_STACK_LINE(266)
									e->wrap_gnorm->zpp_inner->x = e->gnormx;
									HX_STACK_LINE(266)
									e->wrap_gnorm->zpp_inner->y = e->gnormy;
									HX_STACK_LINE(266)
									{
									}
								}
								HX_STACK_LINE(266)
								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
								HX_STACK_LINE(266)
								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
							}
							HX_STACK_LINE(266)
							u = v;
							HX_STACK_LINE(266)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(266)
							ite = ite->next;
							HX_STACK_LINE(266)
							e->gp0 = u;
							HX_STACK_LINE(266)
							e->gp1 = v;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(266)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(266)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(266)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(266)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(266)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(266)
								{
								}
							}
							HX_STACK_LINE(266)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(266)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
					}
				}
			}
		}
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(268)
			this->wrap_gnorm->zpp_inner->x = this->gnormx;
			HX_STACK_LINE(269)
			this->wrap_gnorm->zpp_inner->y = this->gnormy;
			HX_STACK_LINE(278)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,gnorm_validate,(void))

Void ZPP_Edge_obj::getlnorm( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","getlnorm",0x8f5f1eb0,"zpp_nape.shape.ZPP_Edge.getlnorm","zpp_nape/shape/Edge.hx",288,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			Float x = this->lnormx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(289)
			Float y = this->lnormy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(289)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(289)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(289)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(289)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(289)
				ret = _g;
			}
			else{
				HX_STACK_LINE(289)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(289)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(289)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(289)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(289)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(289)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(289)
							ret1->next = null();
						}
						HX_STACK_LINE(289)
						ret1->weak = false;
					}
					HX_STACK_LINE(289)
					ret1->_immutable = immutable;
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						ret1->x = x;
						HX_STACK_LINE(289)
						ret1->y = y;
						HX_STACK_LINE(289)
						{
						}
					}
					HX_STACK_LINE(289)
					_g2 = ret1;
				}
				HX_STACK_LINE(289)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(289)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(289)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(289)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(289)
							_this->_validate();
						}
					}
					HX_STACK_LINE(289)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/shape/Edge.hx",289,0x9f6a6311)
						{
							HX_STACK_LINE(289)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(289)
							{
								HX_STACK_LINE(289)
								{
									HX_STACK_LINE(289)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(289)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(289)
										_this->_validate();
									}
								}
								HX_STACK_LINE(289)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(289)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(289)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(289)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(289)
						{
						}
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(289)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(289)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(289)
				ret;
			}
			HX_STACK_LINE(289)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(289)
			_g5 = ret;
		}
		HX_STACK_LINE(289)
		this->wrap_lnorm = _g5;
		HX_STACK_LINE(290)
		this->wrap_lnorm->zpp_inner->_immutable = true;
		HX_STACK_LINE(291)
		this->wrap_lnorm->zpp_inner->_validate = this->lnorm_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,getlnorm,(void))

Void ZPP_Edge_obj::getgnorm( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","getgnorm",0xae5e382b,"zpp_nape.shape.ZPP_Edge.getgnorm","zpp_nape/shape/Edge.hx",293,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			Float x = this->gnormx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(294)
			Float y = this->gnormy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(294)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(294)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(294)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(294)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(294)
				ret = _g;
			}
			else{
				HX_STACK_LINE(294)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(294)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(294)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(294)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(294)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(294)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(294)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(294)
							ret1->next = null();
						}
						HX_STACK_LINE(294)
						ret1->weak = false;
					}
					HX_STACK_LINE(294)
					ret1->_immutable = immutable;
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						ret1->x = x;
						HX_STACK_LINE(294)
						ret1->y = y;
						HX_STACK_LINE(294)
						{
						}
					}
					HX_STACK_LINE(294)
					_g2 = ret1;
				}
				HX_STACK_LINE(294)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(294)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(294)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(294)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(294)
							_this->_validate();
						}
					}
					HX_STACK_LINE(294)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/shape/Edge.hx",294,0x9f6a6311)
						{
							HX_STACK_LINE(294)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(294)
								{
									HX_STACK_LINE(294)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(294)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(294)
										_this->_validate();
									}
								}
								HX_STACK_LINE(294)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(294)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(294)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(294)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(294)
						{
						}
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(294)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(294)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(294)
				ret;
			}
			HX_STACK_LINE(294)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(294)
			_g5 = ret;
		}
		HX_STACK_LINE(294)
		this->wrap_gnorm = _g5;
		HX_STACK_LINE(295)
		this->wrap_gnorm->zpp_inner->_immutable = true;
		HX_STACK_LINE(296)
		this->wrap_gnorm->zpp_inner->_validate = this->gnorm_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,getgnorm,(void))

::zpp_nape::shape::ZPP_Edge ZPP_Edge_obj::zpp_pool;

bool ZPP_Edge_obj::internal;


ZPP_Edge_obj::ZPP_Edge_obj()
{
}

void ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Edge);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(lnormx,"lnormx");
	HX_MARK_MEMBER_NAME(lnormy,"lnormy");
	HX_MARK_MEMBER_NAME(wrap_lnorm,"wrap_lnorm");
	HX_MARK_MEMBER_NAME(gnormx,"gnormx");
	HX_MARK_MEMBER_NAME(gnormy,"gnormy");
	HX_MARK_MEMBER_NAME(wrap_gnorm,"wrap_gnorm");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lprojection,"lprojection");
	HX_MARK_MEMBER_NAME(gprojection,"gprojection");
	HX_MARK_MEMBER_NAME(lp0,"lp0");
	HX_MARK_MEMBER_NAME(gp0,"gp0");
	HX_MARK_MEMBER_NAME(lp1,"lp1");
	HX_MARK_MEMBER_NAME(gp1,"gp1");
	HX_MARK_MEMBER_NAME(tp0,"tp0");
	HX_MARK_MEMBER_NAME(tp1,"tp1");
	HX_MARK_END_CLASS();
}

void ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(lnormx,"lnormx");
	HX_VISIT_MEMBER_NAME(lnormy,"lnormy");
	HX_VISIT_MEMBER_NAME(wrap_lnorm,"wrap_lnorm");
	HX_VISIT_MEMBER_NAME(gnormx,"gnormx");
	HX_VISIT_MEMBER_NAME(gnormy,"gnormy");
	HX_VISIT_MEMBER_NAME(wrap_gnorm,"wrap_gnorm");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lprojection,"lprojection");
	HX_VISIT_MEMBER_NAME(gprojection,"gprojection");
	HX_VISIT_MEMBER_NAME(lp0,"lp0");
	HX_VISIT_MEMBER_NAME(gp0,"gp0");
	HX_VISIT_MEMBER_NAME(lp1,"lp1");
	HX_VISIT_MEMBER_NAME(gp1,"gp1");
	HX_VISIT_MEMBER_NAME(tp0,"tp0");
	HX_VISIT_MEMBER_NAME(tp1,"tp1");
}

Dynamic ZPP_Edge_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lp0") ) { return lp0; }
		if (HX_FIELD_EQ(inName,"gp0") ) { return gp0; }
		if (HX_FIELD_EQ(inName,"lp1") ) { return lp1; }
		if (HX_FIELD_EQ(inName,"gp1") ) { return gp1; }
		if (HX_FIELD_EQ(inName,"tp0") ) { return tp0; }
		if (HX_FIELD_EQ(inName,"tp1") ) { return tp1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lnormx") ) { return lnormx; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { return lnormy; }
		if (HX_FIELD_EQ(inName,"gnormx") ) { return gnormx; }
		if (HX_FIELD_EQ(inName,"gnormy") ) { return gnormy; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"getlnorm") ) { return getlnorm_dyn(); }
		if (HX_FIELD_EQ(inName,"getgnorm") ) { return getgnorm_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_lnorm") ) { return wrap_lnorm; }
		if (HX_FIELD_EQ(inName,"wrap_gnorm") ) { return wrap_gnorm; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lprojection") ) { return lprojection; }
		if (HX_FIELD_EQ(inName,"gprojection") ) { return gprojection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lnorm_validate") ) { return lnorm_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"gnorm_validate") ) { return gnorm_validate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lp0") ) { lp0=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gp0") ) { gp0=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lp1") ) { lp1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gp1") ) { gp1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tp0") ) { tp0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tp1") ) { tp1=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::shape::Edge >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lnormx") ) { lnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { lnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gnormx") ) { gnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gnormy") ) { gnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_lnorm") ) { wrap_lnorm=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_gnorm") ) { wrap_gnorm=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lprojection") ) { lprojection=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gprojection") ) { gprojection=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("polygon"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("lnormx"));
	outFields->push(HX_CSTRING("lnormy"));
	outFields->push(HX_CSTRING("wrap_lnorm"));
	outFields->push(HX_CSTRING("gnormx"));
	outFields->push(HX_CSTRING("gnormy"));
	outFields->push(HX_CSTRING("wrap_gnorm"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lprojection"));
	outFields->push(HX_CSTRING("gprojection"));
	outFields->push(HX_CSTRING("lp0"));
	outFields->push(HX_CSTRING("gp0"));
	outFields->push(HX_CSTRING("lp1"));
	outFields->push(HX_CSTRING("gp1"));
	outFields->push(HX_CSTRING("tp0"));
	outFields->push(HX_CSTRING("tp1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("internal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_Edge_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(ZPP_Edge_obj,polygon),HX_CSTRING("polygon")},
	{hx::fsObject /*::nape::shape::Edge*/ ,(int)offsetof(ZPP_Edge_obj,outer),HX_CSTRING("outer")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lnormx),HX_CSTRING("lnormx")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lnormy),HX_CSTRING("lnormy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Edge_obj,wrap_lnorm),HX_CSTRING("wrap_lnorm")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gnormx),HX_CSTRING("gnormx")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gnormy),HX_CSTRING("gnormy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Edge_obj,wrap_gnorm),HX_CSTRING("wrap_gnorm")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lprojection),HX_CSTRING("lprojection")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gprojection),HX_CSTRING("gprojection")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,lp0),HX_CSTRING("lp0")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,gp0),HX_CSTRING("gp0")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,lp1),HX_CSTRING("lp1")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,gp1),HX_CSTRING("gp1")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,tp0),HX_CSTRING("tp0")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,tp1),HX_CSTRING("tp1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("polygon"),
	HX_CSTRING("outer"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("lnormx"),
	HX_CSTRING("lnormy"),
	HX_CSTRING("wrap_lnorm"),
	HX_CSTRING("gnormx"),
	HX_CSTRING("gnormy"),
	HX_CSTRING("wrap_gnorm"),
	HX_CSTRING("length"),
	HX_CSTRING("lprojection"),
	HX_CSTRING("gprojection"),
	HX_CSTRING("lp0"),
	HX_CSTRING("gp0"),
	HX_CSTRING("lp1"),
	HX_CSTRING("gp1"),
	HX_CSTRING("tp0"),
	HX_CSTRING("tp1"),
	HX_CSTRING("lnorm_validate"),
	HX_CSTRING("gnorm_validate"),
	HX_CSTRING("getlnorm"),
	HX_CSTRING("getgnorm"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::internal,"internal");
};

#endif

Class ZPP_Edge_obj::__mClass;

void ZPP_Edge_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.shape.ZPP_Edge"), hx::TCanCast< ZPP_Edge_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Edge_obj::__boot()
{
	zpp_pool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace shape
