#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_RayResultList
#include <zpp_nape/util/ZPP_RayResultList.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Ray_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","new",0x8196e766,"zpp_nape.geom.ZPP_Ray.new","zpp_nape/geom/Ray.hx",174,0x908d5ea5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(284)
	this->zip_dir = false;
	HX_STACK_LINE(191)
	this->absnormaly = 0.0;
	HX_STACK_LINE(190)
	this->absnormalx = 0.0;
	HX_STACK_LINE(189)
	this->normaly = 0.0;
	HX_STACK_LINE(188)
	this->normalx = 0.0;
	HX_STACK_LINE(187)
	this->idiry = 0.0;
	HX_STACK_LINE(186)
	this->idirx = 0.0;
	HX_STACK_LINE(185)
	this->diry = 0.0;
	HX_STACK_LINE(184)
	this->dirx = 0.0;
	HX_STACK_LINE(183)
	this->originy = 0.0;
	HX_STACK_LINE(182)
	this->originx = 0.0;
	HX_STACK_LINE(181)
	this->userData = null();
	HX_STACK_LINE(180)
	this->maxdist = 0.0;
	HX_STACK_LINE(179)
	this->direction = null();
	HX_STACK_LINE(178)
	this->origin = null();
	HX_STACK_LINE(238)
	::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(238)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(238)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(238)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(238)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(238)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			ret = _g;
		}
		else{
			HX_STACK_LINE(238)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(238)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(238)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(238)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(238)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(238)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(238)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(238)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(238)
						ret1->next = null();
					}
					HX_STACK_LINE(238)
					ret1->weak = false;
				}
				HX_STACK_LINE(238)
				ret1->_immutable = immutable;
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					ret1->x = x;
					HX_STACK_LINE(238)
					ret1->y = y;
					HX_STACK_LINE(238)
					{
					}
				}
				HX_STACK_LINE(238)
				_g2 = ret1;
			}
			HX_STACK_LINE(238)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(238)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(238)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(238)
						_this->_validate();
					}
				}
				HX_STACK_LINE(238)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",238,0x908d5ea5)
					{
						HX_STACK_LINE(238)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(238)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(238)
									_this->_validate();
								}
							}
							HX_STACK_LINE(238)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(238)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(238)
			if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(238)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(238)
					{
					}
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(238)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(238)
			ret;
		}
		HX_STACK_LINE(238)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(238)
		_g5 = ret;
	}
	HX_STACK_LINE(238)
	this->origin = _g5;
	HX_STACK_LINE(239)
	this->origin->zpp_inner->_invalidate = this->origin_invalidate_dyn();
	HX_STACK_LINE(240)
	::nape::geom::Vec2 _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(240)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(240)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(240)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(240)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(240)
			::nape::geom::Vec2 _g6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(240)
			ret = _g6;
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
			::zpp_nape::geom::ZPP_Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
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
						::zpp_nape::geom::ZPP_Vec2 _g7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(240)
						ret1 = _g7;
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
				_g8 = ret1;
			}
			HX_STACK_LINE(240)
			ret->zpp_inner = _g8;
			HX_STACK_LINE(240)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(240)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(240)
						_this->_validate();
					}
				}
				HX_STACK_LINE(240)
				_g9 = ret->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",240,0x908d5ea5)
					{
						HX_STACK_LINE(240)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(240)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(240)
									_this->_validate();
								}
							}
							HX_STACK_LINE(240)
							_g10 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(240)
						return (_g10 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(240)
			if ((!(((  (((_g9 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
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
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(240)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(240)
			ret;
		}
		HX_STACK_LINE(240)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(240)
		_g11 = ret;
	}
	HX_STACK_LINE(240)
	this->direction = _g11;
	HX_STACK_LINE(241)
	this->direction->zpp_inner->_invalidate = this->direction_invalidate_dyn();
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(243)
		this->originx = (int)0;
		HX_STACK_LINE(244)
		this->originy = (int)0;
		HX_STACK_LINE(253)
		{
		}
	}
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(263)
		this->dirx = (int)0;
		HX_STACK_LINE(264)
		this->diry = (int)0;
		HX_STACK_LINE(273)
		{
		}
	}
	HX_STACK_LINE(282)
	this->zip_dir = false;
}
;
	return null();
}

//ZPP_Ray_obj::~ZPP_Ray_obj() { }

Dynamic ZPP_Ray_obj::__CreateEmpty() { return  new ZPP_Ray_obj; }
hx::ObjectPtr< ZPP_Ray_obj > ZPP_Ray_obj::__new()
{  hx::ObjectPtr< ZPP_Ray_obj > result = new ZPP_Ray_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Ray_obj > result = new ZPP_Ray_obj();
	result->__construct();
	return result;}

Void ZPP_Ray_obj::origin_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","origin_invalidate",0x49c6fffa,"zpp_nape.geom.ZPP_Ray.origin_invalidate","zpp_nape/geom/Ray.hx",193,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(194)
		this->originx = x->x;
		HX_STACK_LINE(195)
		this->originy = x->y;
		HX_STACK_LINE(204)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,origin_invalidate,(void))

Void ZPP_Ray_obj::direction_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","direction_invalidate",0x73b160f5,"zpp_nape.geom.ZPP_Ray.direction_invalidate","zpp_nape/geom/Ray.hx",214,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(216)
			this->dirx = x->x;
			HX_STACK_LINE(217)
			this->diry = x->y;
			HX_STACK_LINE(226)
			{
			}
		}
		HX_STACK_LINE(235)
		this->zip_dir = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,direction_invalidate,(void))

Void ZPP_Ray_obj::invalidate_dir( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","invalidate_dir",0x06fe5003,"zpp_nape.geom.ZPP_Ray.invalidate_dir","zpp_nape/geom/Ray.hx",288,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		this->zip_dir = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,invalidate_dir,(void))

Void ZPP_Ray_obj::validate_dir( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","validate_dir",0x991f2e1e,"zpp_nape.geom.ZPP_Ray.validate_dir","zpp_nape/geom/Ray.hx",291,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(291)
		if ((this->zip_dir)){
			HX_STACK_LINE(292)
			this->zip_dir = false;
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(299)
				Float d = ((this->dirx * this->dirx) + (this->diry * this->diry));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(308)
				Float _g = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(308)
				Float imag = (Float(1.0) / Float(_g));		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(310)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(319)
					hx::MultEq(this->dirx,t);
					HX_STACK_LINE(320)
					hx::MultEq(this->diry,t);
				}
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(324)
				this->idirx = (Float((int)1) / Float(this->dirx));
				HX_STACK_LINE(325)
				this->idiry = (Float((int)1) / Float(this->diry));
				HX_STACK_LINE(334)
				{
				}
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(344)
				this->normalx = -(this->diry);
				HX_STACK_LINE(345)
				this->normaly = this->dirx;
				HX_STACK_LINE(354)
				{
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(365)
					Float x = this->normalx;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(366)
					if (((x < (int)0))){
						HX_STACK_LINE(364)
						this->absnormalx = -(x);
					}
					else{
						HX_STACK_LINE(364)
						this->absnormalx = x;
					}
				}
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(369)
					Float x = this->normaly;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(370)
					if (((x < (int)0))){
						HX_STACK_LINE(368)
						this->absnormaly = -(x);
					}
					else{
						HX_STACK_LINE(368)
						this->absnormaly = x;
					}
				}
				HX_STACK_LINE(380)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,validate_dir,(void))

::zpp_nape::geom::ZPP_AABB ZPP_Ray_obj::rayAABB( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","rayAABB",0xae538f90,"zpp_nape.geom.ZPP_Ray.rayAABB","zpp_nape/geom/Ray.hx",391,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	Float x0 = this->originx;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(393)
	Float x1 = x0;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(394)
	Float y0 = this->originy;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(395)
	Float y1 = y0;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(396)
	if (((this->maxdist >= ::Math_obj::POSITIVE_INFINITY))){
		HX_STACK_LINE(397)
		if (((this->dirx > (int)0))){
			HX_STACK_LINE(398)
			x1 = ::Math_obj::POSITIVE_INFINITY;
		}
		else{
			HX_STACK_LINE(400)
			if (((this->dirx < (int)0))){
				HX_STACK_LINE(401)
				x1 = ::Math_obj::NEGATIVE_INFINITY;
			}
		}
		HX_STACK_LINE(403)
		if (((this->diry > (int)0))){
			HX_STACK_LINE(404)
			y1 = ::Math_obj::POSITIVE_INFINITY;
		}
		else{
			HX_STACK_LINE(406)
			if (((this->diry < (int)0))){
				HX_STACK_LINE(407)
				y1 = ::Math_obj::NEGATIVE_INFINITY;
			}
		}
	}
	else{
		HX_STACK_LINE(411)
		hx::AddEq(x1,(this->maxdist * this->dirx));
		HX_STACK_LINE(412)
		hx::AddEq(y1,(this->maxdist * this->diry));
	}
	HX_STACK_LINE(414)
	if (((x1 < x0))){
		HX_STACK_LINE(415)
		Float t = x0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(416)
		x0 = x1;
		HX_STACK_LINE(417)
		x1 = t;
	}
	HX_STACK_LINE(419)
	if (((y1 < y0))){
		HX_STACK_LINE(420)
		Float t = y0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(421)
		y0 = y1;
		HX_STACK_LINE(422)
		y1 = t;
	}
	HX_STACK_LINE(424)
	::zpp_nape::geom::ZPP_AABB rayab;		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(424)
				::zpp_nape::geom::ZPP_AABB _g = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(424)
				ret = _g;
			}
			else{
				HX_STACK_LINE(424)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(424)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(424)
				ret->next = null();
			}
			HX_STACK_LINE(424)
			Dynamic();
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			ret->minx = x0;
			HX_STACK_LINE(424)
			ret->miny = y0;
			HX_STACK_LINE(424)
			{
			}
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			ret->maxx = x1;
			HX_STACK_LINE(424)
			ret->maxy = y1;
			HX_STACK_LINE(424)
			{
			}
		}
		HX_STACK_LINE(424)
		rayab = ret;
	}
	HX_STACK_LINE(425)
	return rayab;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,rayAABB,return )

bool ZPP_Ray_obj::aabbtest( ::zpp_nape::geom::ZPP_AABB a){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","aabbtest",0xfe44ee2c,"zpp_nape.geom.ZPP_Ray.aabbtest","zpp_nape/geom/Ray.hx",427,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(428)
	Float dot1 = ((this->normalx * ((this->originx - (0.5 * ((a->minx + a->maxx)))))) + (this->normaly * ((this->originy - (0.5 * ((a->miny + a->maxy)))))));		HX_STACK_VAR(dot1,"dot1");
	HX_STACK_LINE(429)
	Float dot2 = (((this->absnormalx * 0.5) * ((a->maxx - a->minx))) + ((this->absnormaly * 0.5) * ((a->maxy - a->miny))));		HX_STACK_VAR(dot2,"dot2");
	struct _Function_1_1{
		inline static Float Block( Float &dot1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",430,0x908d5ea5)
			{
				HX_STACK_LINE(431)
				Float x = dot1;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(432)
				return (  (((x < (int)0))) ? Float(-(x)) : Float(x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(430)
	return (_Function_1_1::Block(dot1) < dot2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,aabbtest,return )

Float ZPP_Ray_obj::aabbsect( ::zpp_nape::geom::ZPP_AABB a){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","aabbsect",0xfd9ba99d,"zpp_nape.geom.ZPP_Ray.aabbsect","zpp_nape/geom/Ray.hx",435,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(436)
	bool cx = (bool((this->originx >= a->minx)) && bool((this->originx <= a->maxx)));		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(437)
	bool cy = (bool((this->originy >= a->miny)) && bool((this->originy <= a->maxy)));		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(438)
	if (((bool(cx) && bool(cy)))){
		HX_STACK_LINE(438)
		return 0.0;
	}
	else{
		HX_STACK_LINE(440)
		Float ret = -1.0;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(442)
			if (((bool((this->dirx >= (int)0)) && bool((this->originx >= a->maxx))))){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(443)
			if (((bool((this->dirx <= (int)0)) && bool((this->originx <= a->minx))))){
				HX_STACK_LINE(443)
				break;
			}
			HX_STACK_LINE(444)
			if (((bool((this->diry >= (int)0)) && bool((this->originy >= a->maxy))))){
				HX_STACK_LINE(444)
				break;
			}
			HX_STACK_LINE(445)
			if (((bool((this->diry <= (int)0)) && bool((this->originy <= a->miny))))){
				HX_STACK_LINE(445)
				break;
			}
			HX_STACK_LINE(446)
			if (((this->dirx > (int)0))){
				HX_STACK_LINE(447)
				Float t = (((a->minx - this->originx)) * this->idirx);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(448)
				if (((bool((t >= (int)0)) && bool((t <= this->maxdist))))){
					HX_STACK_LINE(449)
					Float y = (this->originy + (t * this->diry));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(450)
					if (((bool((y >= a->miny)) && bool((y <= a->maxy))))){
						HX_STACK_LINE(451)
						ret = t;
						HX_STACK_LINE(452)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(456)
				if (((this->dirx < (int)0))){
					HX_STACK_LINE(457)
					Float t = (((a->maxx - this->originx)) * this->idirx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(458)
					if (((bool((t >= (int)0)) && bool((t <= this->maxdist))))){
						HX_STACK_LINE(459)
						Float y = (this->originy + (t * this->diry));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(460)
						if (((bool((y >= a->miny)) && bool((y <= a->maxy))))){
							HX_STACK_LINE(461)
							ret = t;
							HX_STACK_LINE(462)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(466)
			if (((this->diry > (int)0))){
				HX_STACK_LINE(467)
				Float t = (((a->miny - this->originy)) * this->idiry);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(468)
				if (((bool((t >= (int)0)) && bool((t <= this->maxdist))))){
					HX_STACK_LINE(469)
					Float x = (this->originx + (t * this->dirx));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(470)
					if (((bool((x >= a->minx)) && bool((x <= a->maxx))))){
						HX_STACK_LINE(471)
						ret = t;
						HX_STACK_LINE(472)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(476)
				if (((this->diry < (int)0))){
					HX_STACK_LINE(477)
					Float t = (((a->maxy - this->originy)) * this->idiry);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(478)
					if (((bool((t >= (int)0)) && bool((t <= this->maxdist))))){
						HX_STACK_LINE(479)
						Float x = (this->originx + (t * this->dirx));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(480)
						if (((bool((x >= a->minx)) && bool((x <= a->maxx))))){
							HX_STACK_LINE(481)
							ret = t;
							HX_STACK_LINE(482)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(441)
			break;
		}
		HX_STACK_LINE(488)
		return ret;
	}
	HX_STACK_LINE(438)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,aabbsect,return )

::nape::geom::RayResult ZPP_Ray_obj::circlesect( ::zpp_nape::shape::ZPP_Circle c,bool inner,Float mint){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","circlesect",0x6df4b38d,"zpp_nape.geom.ZPP_Ray.circlesect","zpp_nape/geom/Ray.hx",491,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(mint,"mint")
	HX_STACK_LINE(492)
	if ((c->zip_worldCOM)){
		HX_STACK_LINE(492)
		if (((c->body != null()))){
			HX_STACK_LINE(492)
			c->zip_worldCOM = false;
			HX_STACK_LINE(492)
			if ((c->zip_localCOM)){
				HX_STACK_LINE(492)
				c->zip_localCOM = false;
				HX_STACK_LINE(492)
				if (((c->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
					HX_STACK_LINE(492)
					::zpp_nape::shape::ZPP_Polygon _this = c->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(492)
					if (((_this->lverts->next->next == null()))){
						HX_STACK_LINE(492)
						_this->localCOMx = _this->lverts->next->x;
						HX_STACK_LINE(492)
						_this->localCOMy = _this->lverts->next->y;
						HX_STACK_LINE(492)
						Dynamic();
					}
					else{
						HX_STACK_LINE(492)
						if (((_this->lverts->next->next->next == null()))){
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								_this->localCOMx = _this->lverts->next->x;
								HX_STACK_LINE(492)
								_this->localCOMy = _this->lverts->next->y;
								HX_STACK_LINE(492)
								{
								}
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								Float t = 1.0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(492)
								hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
								HX_STACK_LINE(492)
								hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								Float t = 0.5;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(492)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(492)
								hx::MultEq(_this->localCOMy,t);
							}
						}
						else{
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								_this->localCOMx = (int)0;
								HX_STACK_LINE(492)
								_this->localCOMy = (int)0;
								HX_STACK_LINE(492)
								{
								}
							}
							HX_STACK_LINE(492)
							Float area = 0.0;		HX_STACK_VAR(area,"area");
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(492)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(492)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(492)
								while((true)){
									HX_STACK_LINE(492)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(492)
										break;
									}
									HX_STACK_LINE(492)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(492)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(492)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(492)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(492)
									u = v;
									HX_STACK_LINE(492)
									v = w;
									HX_STACK_LINE(492)
									cx_ite = cx_ite->next;
								}
								HX_STACK_LINE(492)
								cx_ite = _this->lverts->next;
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(492)
								{
									HX_STACK_LINE(492)
									hx::AddEq(area,(v->x * ((w->y - u->y))));
									HX_STACK_LINE(492)
									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(492)
									hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
									HX_STACK_LINE(492)
									hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
								}
								HX_STACK_LINE(492)
								u = v;
								HX_STACK_LINE(492)
								v = w;
								HX_STACK_LINE(492)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
								HX_STACK_LINE(492)
								{
									HX_STACK_LINE(492)
									hx::AddEq(area,(v->x * ((w1->y - u->y))));
									HX_STACK_LINE(492)
									Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(492)
									hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
									HX_STACK_LINE(492)
									hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
								}
							}
							HX_STACK_LINE(492)
							area = (Float((int)1) / Float((((int)3 * area))));
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								Float t = area;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(492)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(492)
								hx::MultEq(_this->localCOMy,t);
							}
						}
					}
				}
				HX_STACK_LINE(492)
				if (((c->wrap_localCOM != null()))){
					HX_STACK_LINE(492)
					c->wrap_localCOM->zpp_inner->x = c->localCOMx;
					HX_STACK_LINE(492)
					c->wrap_localCOM->zpp_inner->y = c->localCOMy;
					HX_STACK_LINE(492)
					{
					}
				}
			}
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::zpp_nape::phys::ZPP_Body _this = c->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(492)
				if ((_this->zip_axis)){
					HX_STACK_LINE(492)
					_this->zip_axis = false;
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(492)
						_this->axisx = _g;
						HX_STACK_LINE(492)
						Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(492)
						_this->axisy = _g1;
						HX_STACK_LINE(492)
						Dynamic();
					}
				}
			}
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				c->worldCOMx = (c->body->posx + (((c->body->axisy * c->localCOMx) - (c->body->axisx * c->localCOMy))));
				HX_STACK_LINE(492)
				c->worldCOMy = (c->body->posy + (((c->localCOMx * c->body->axisx) + (c->localCOMy * c->body->axisy))));
			}
		}
	}
	HX_STACK_LINE(493)
	Float acx = 0.0;		HX_STACK_VAR(acx,"acx");
	HX_STACK_LINE(494)
	Float acy = 0.0;		HX_STACK_VAR(acy,"acy");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		acx = (this->originx - c->worldCOMx);
		HX_STACK_LINE(497)
		acy = (this->originy - c->worldCOMy);
	}
	HX_STACK_LINE(499)
	Float A = ((this->dirx * this->dirx) + (this->diry * this->diry));		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(500)
	Float B = ((int)2 * (((acx * this->dirx) + (acy * this->diry))));		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(501)
	Float C = (((acx * acx) + (acy * acy)) - (c->radius * c->radius));		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(502)
	Float det = ((B * B) - (((int)4 * A) * C));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(503)
	if (((det == (int)0))){
		HX_STACK_LINE(504)
		Float t = ((Float(-(B)) / Float((int)2)) * A);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(505)
		if (((bool((bool((bool(((bool(!(inner)) || bool((C > (int)0))))) && bool((t > (int)0)))) && bool((t < mint)))) && bool((t <= this->maxdist))))){
			HX_STACK_LINE(506)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(507)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(509)
				nx = this->originx;
				HX_STACK_LINE(510)
				ny = this->originy;
				HX_STACK_LINE(519)
				{
				}
			}
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(529)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(538)
				hx::AddEq(nx,(this->dirx * t1));
				HX_STACK_LINE(539)
				hx::AddEq(ny,(this->diry * t1));
			}
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(542)
				Float t1 = 1.0;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(551)
				hx::SubEq(nx,(c->worldCOMx * t1));
				HX_STACK_LINE(552)
				hx::SubEq(ny,(c->worldCOMy * t1));
			}
			HX_STACK_LINE(554)
			{
				HX_STACK_LINE(555)
				Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(564)
				Float _g2 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(564)
				Float imag = (Float(1.0) / Float(_g2));		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(566)
					Float t1 = imag;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(575)
					hx::MultEq(nx,t1);
					HX_STACK_LINE(576)
					hx::MultEq(ny,t1);
				}
			}
			HX_STACK_LINE(579)
			if (((C <= (int)0))){
				HX_STACK_LINE(580)
				nx = -(nx);
				HX_STACK_LINE(581)
				ny = -(ny);
			}
			HX_STACK_LINE(583)
			::nape::geom::Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(583)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(583)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(583)
					::nape::geom::Vec2 _g3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(583)
					ret = _g3;
				}
				else{
					HX_STACK_LINE(583)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(583)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(583)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(583)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 _g4 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(583)
								ret1 = _g4;
							}
							else{
								HX_STACK_LINE(583)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(583)
								ret1->next = null();
							}
							HX_STACK_LINE(583)
							ret1->weak = false;
						}
						HX_STACK_LINE(583)
						ret1->_immutable = immutable;
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							ret1->x = nx;
							HX_STACK_LINE(583)
							ret1->y = ny;
							HX_STACK_LINE(583)
							{
							}
						}
						HX_STACK_LINE(583)
						_g5 = ret1;
					}
					HX_STACK_LINE(583)
					ret->zpp_inner = _g5;
					HX_STACK_LINE(583)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(583)
					Float _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(583)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(583)
								_this->_validate();
							}
						}
						HX_STACK_LINE(583)
						_g6 = ret->zpp_inner->x;
					}
					struct _Function_5_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",583,0x908d5ea5)
							{
								HX_STACK_LINE(583)
								Float _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(583)
								{
									HX_STACK_LINE(583)
									{
										HX_STACK_LINE(583)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(583)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(583)
											_this->_validate();
										}
									}
									HX_STACK_LINE(583)
									_g7 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(583)
								return (_g7 == ny);
							}
							return null();
						}
					};
					HX_STACK_LINE(583)
					if ((!(((  (((_g6 == nx))) ? bool(_Function_5_1::Block(ret,ny)) : bool(false) ))))){
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(583)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(583)
							{
							}
						}
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(583)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(583)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(583)
					ret;
				}
				HX_STACK_LINE(583)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(583)
				_g8 = ret;
			}
			HX_STACK_LINE(583)
			return ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g8,t,(C <= (int)0),c->outer);
		}
		else{
			HX_STACK_LINE(585)
			return null();
		}
	}
	else{
		HX_STACK_LINE(588)
		Float _g9 = ::Math_obj::sqrt(det);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(588)
		det = _g9;
		HX_STACK_LINE(589)
		A = (Float((int)1) / Float((((int)2 * A))));
		HX_STACK_LINE(590)
		Float t0 = (((-(B) - det)) * A);		HX_STACK_VAR(t0,"t0");
		HX_STACK_LINE(591)
		Float t1 = (((-(B) + det)) * A);		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(592)
		if (((t0 > (int)0))){
			HX_STACK_LINE(593)
			if (((bool((t0 < mint)) && bool((t0 <= this->maxdist))))){
				HX_STACK_LINE(594)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(595)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(597)
					nx = this->originx;
					HX_STACK_LINE(598)
					ny = this->originy;
					HX_STACK_LINE(607)
					{
					}
				}
				HX_STACK_LINE(616)
				{
					HX_STACK_LINE(617)
					Float t = t0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(626)
					hx::AddEq(nx,(this->dirx * t));
					HX_STACK_LINE(627)
					hx::AddEq(ny,(this->diry * t));
				}
				HX_STACK_LINE(629)
				{
					HX_STACK_LINE(630)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(639)
					hx::SubEq(nx,(c->worldCOMx * t));
					HX_STACK_LINE(640)
					hx::SubEq(ny,(c->worldCOMy * t));
				}
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(643)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(652)
					Float _g10 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(652)
					Float imag = (Float(1.0) / Float(_g10));		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(654)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(663)
						hx::MultEq(nx,t);
						HX_STACK_LINE(664)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(671)
				::nape::geom::Vec2 _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(671)
				{
					HX_STACK_LINE(671)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(671)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(671)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(671)
						::nape::geom::Vec2 _g11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(671)
						ret = _g11;
					}
					else{
						HX_STACK_LINE(671)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(671)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(671)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(671)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(671)
						::zpp_nape::geom::ZPP_Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(671)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2 _g12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(671)
									ret1 = _g12;
								}
								else{
									HX_STACK_LINE(671)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(671)
									ret1->next = null();
								}
								HX_STACK_LINE(671)
								ret1->weak = false;
							}
							HX_STACK_LINE(671)
							ret1->_immutable = immutable;
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								ret1->x = nx;
								HX_STACK_LINE(671)
								ret1->y = ny;
								HX_STACK_LINE(671)
								{
								}
							}
							HX_STACK_LINE(671)
							_g13 = ret1;
						}
						HX_STACK_LINE(671)
						ret->zpp_inner = _g13;
						HX_STACK_LINE(671)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(671)
						Float _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(671)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(671)
									_this->_validate();
								}
							}
							HX_STACK_LINE(671)
							_g14 = ret->zpp_inner->x;
						}
						struct _Function_6_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",671,0x908d5ea5)
								{
									HX_STACK_LINE(671)
									Float _g15;		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(671)
									{
										HX_STACK_LINE(671)
										{
											HX_STACK_LINE(671)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(671)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(671)
												_this->_validate();
											}
										}
										HX_STACK_LINE(671)
										_g15 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(671)
									return (_g15 == ny);
								}
								return null();
							}
						};
						HX_STACK_LINE(671)
						if ((!(((  (((_g14 == nx))) ? bool(_Function_6_1::Block(ret,ny)) : bool(false) ))))){
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(671)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(671)
								{
								}
							}
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(671)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(671)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(671)
						ret;
					}
					HX_STACK_LINE(671)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(671)
					_g16 = ret;
				}
				HX_STACK_LINE(671)
				return ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g16,t0,false,c->outer);
			}
			else{
				HX_STACK_LINE(673)
				return null();
			}
		}
		else{
			HX_STACK_LINE(675)
			if (((bool((t1 > (int)0)) && bool(inner)))){
				HX_STACK_LINE(676)
				if (((bool((t1 < mint)) && bool((t1 <= this->maxdist))))){
					HX_STACK_LINE(677)
					Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(678)
					Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
					HX_STACK_LINE(679)
					{
						HX_STACK_LINE(680)
						nx = this->originx;
						HX_STACK_LINE(681)
						ny = this->originy;
						HX_STACK_LINE(690)
						{
						}
					}
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(700)
						Float t = t1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(709)
						hx::AddEq(nx,(this->dirx * t));
						HX_STACK_LINE(710)
						hx::AddEq(ny,(this->diry * t));
					}
					HX_STACK_LINE(712)
					{
						HX_STACK_LINE(713)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(722)
						hx::SubEq(nx,(c->worldCOMx * t));
						HX_STACK_LINE(723)
						hx::SubEq(ny,(c->worldCOMy * t));
					}
					HX_STACK_LINE(725)
					{
						HX_STACK_LINE(726)
						Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(735)
						Float _g17 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(735)
						Float imag = (Float(1.0) / Float(_g17));		HX_STACK_VAR(imag,"imag");
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(737)
							Float t = imag;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(746)
							hx::MultEq(nx,t);
							HX_STACK_LINE(747)
							hx::MultEq(ny,t);
						}
					}
					HX_STACK_LINE(750)
					{
						HX_STACK_LINE(751)
						nx = -(nx);
						HX_STACK_LINE(752)
						ny = -(ny);
					}
					HX_STACK_LINE(754)
					::nape::geom::Vec2 _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(754)
					{
						HX_STACK_LINE(754)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(754)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(754)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(754)
							::nape::geom::Vec2 _g18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(754)
							ret = _g18;
						}
						else{
							HX_STACK_LINE(754)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(754)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(754)
							ret->zpp_pool = null();
						}
						HX_STACK_LINE(754)
						if (((ret->zpp_inner == null()))){
							HX_STACK_LINE(754)
							::zpp_nape::geom::ZPP_Vec2 _g20;		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(754)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2 _g19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(754)
										ret1 = _g19;
									}
									else{
										HX_STACK_LINE(754)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(754)
										ret1->next = null();
									}
									HX_STACK_LINE(754)
									ret1->weak = false;
								}
								HX_STACK_LINE(754)
								ret1->_immutable = immutable;
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									ret1->x = nx;
									HX_STACK_LINE(754)
									ret1->y = ny;
									HX_STACK_LINE(754)
									{
									}
								}
								HX_STACK_LINE(754)
								_g20 = ret1;
							}
							HX_STACK_LINE(754)
							ret->zpp_inner = _g20;
							HX_STACK_LINE(754)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(754)
							Float _g21;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(754)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(754)
										_this->_validate();
									}
								}
								HX_STACK_LINE(754)
								_g21 = ret->zpp_inner->x;
							}
							struct _Function_7_1{
								inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",754,0x908d5ea5)
									{
										HX_STACK_LINE(754)
										Float _g22;		HX_STACK_VAR(_g22,"_g22");
										HX_STACK_LINE(754)
										{
											HX_STACK_LINE(754)
											{
												HX_STACK_LINE(754)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(754)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(754)
													_this->_validate();
												}
											}
											HX_STACK_LINE(754)
											_g22 = ret->zpp_inner->y;
										}
										HX_STACK_LINE(754)
										return (_g22 == ny);
									}
									return null();
								}
							};
							HX_STACK_LINE(754)
							if ((!(((  (((_g21 == nx))) ? bool(_Function_7_1::Block(ret,ny)) : bool(false) ))))){
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									ret->zpp_inner->x = nx;
									HX_STACK_LINE(754)
									ret->zpp_inner->y = ny;
									HX_STACK_LINE(754)
									{
									}
								}
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(754)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(754)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(754)
							ret;
						}
						HX_STACK_LINE(754)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(754)
						_g23 = ret;
					}
					HX_STACK_LINE(754)
					return ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g23,t1,true,c->outer);
				}
				else{
					HX_STACK_LINE(756)
					return null();
				}
			}
			else{
				HX_STACK_LINE(758)
				return null();
			}
		}
	}
	HX_STACK_LINE(503)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,circlesect,return )

Void ZPP_Ray_obj::circlesect2( ::zpp_nape::shape::ZPP_Circle c,bool inner,::nape::geom::RayResultList list){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","circlesect2",0xc8286805,"zpp_nape.geom.ZPP_Ray.circlesect2","zpp_nape/geom/Ray.hx",761,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(inner,"inner")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(762)
		if ((c->zip_worldCOM)){
			HX_STACK_LINE(762)
			if (((c->body != null()))){
				HX_STACK_LINE(762)
				c->zip_worldCOM = false;
				HX_STACK_LINE(762)
				if ((c->zip_localCOM)){
					HX_STACK_LINE(762)
					c->zip_localCOM = false;
					HX_STACK_LINE(762)
					if (((c->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(762)
						::zpp_nape::shape::ZPP_Polygon _this = c->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(762)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(762)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(762)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(762)
							Dynamic();
						}
						else{
							HX_STACK_LINE(762)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(762)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(762)
									{
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(762)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(762)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(762)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(762)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(762)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(762)
									{
									}
								}
								HX_STACK_LINE(762)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(762)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(762)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(762)
									while((true)){
										HX_STACK_LINE(762)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(762)
											break;
										}
										HX_STACK_LINE(762)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(762)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(762)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(762)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(762)
										u = v;
										HX_STACK_LINE(762)
										v = w;
										HX_STACK_LINE(762)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(762)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(762)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(762)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(762)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(762)
									u = v;
									HX_STACK_LINE(762)
									v = w;
									HX_STACK_LINE(762)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(762)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(762)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(762)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(762)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(762)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(762)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(762)
					if (((c->wrap_localCOM != null()))){
						HX_STACK_LINE(762)
						c->wrap_localCOM->zpp_inner->x = c->localCOMx;
						HX_STACK_LINE(762)
						c->wrap_localCOM->zpp_inner->y = c->localCOMy;
						HX_STACK_LINE(762)
						{
						}
					}
				}
				HX_STACK_LINE(762)
				{
					HX_STACK_LINE(762)
					::zpp_nape::phys::ZPP_Body _this = c->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(762)
					if ((_this->zip_axis)){
						HX_STACK_LINE(762)
						_this->zip_axis = false;
						HX_STACK_LINE(762)
						{
							HX_STACK_LINE(762)
							Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(762)
							_this->axisx = _g;
							HX_STACK_LINE(762)
							Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(762)
							_this->axisy = _g1;
							HX_STACK_LINE(762)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(762)
				{
					HX_STACK_LINE(762)
					c->worldCOMx = (c->body->posx + (((c->body->axisy * c->localCOMx) - (c->body->axisx * c->localCOMy))));
					HX_STACK_LINE(762)
					c->worldCOMy = (c->body->posy + (((c->localCOMx * c->body->axisx) + (c->localCOMy * c->body->axisy))));
				}
			}
		}
		HX_STACK_LINE(763)
		Float acx = 0.0;		HX_STACK_VAR(acx,"acx");
		HX_STACK_LINE(764)
		Float acy = 0.0;		HX_STACK_VAR(acy,"acy");
		HX_STACK_LINE(765)
		{
			HX_STACK_LINE(766)
			acx = (this->originx - c->worldCOMx);
			HX_STACK_LINE(767)
			acy = (this->originy - c->worldCOMy);
		}
		HX_STACK_LINE(769)
		Float A = ((this->dirx * this->dirx) + (this->diry * this->diry));		HX_STACK_VAR(A,"A");
		HX_STACK_LINE(770)
		Float B = ((int)2 * (((acx * this->dirx) + (acy * this->diry))));		HX_STACK_VAR(B,"B");
		HX_STACK_LINE(771)
		Float C = (((acx * acx) + (acy * acy)) - (c->radius * c->radius));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(772)
		Float det = ((B * B) - (((int)4 * A) * C));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(773)
		if (((det == (int)0))){
			HX_STACK_LINE(774)
			Float t = ((Float(-(B)) / Float((int)2)) * A);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(775)
			if (((bool((bool(((bool(!(inner)) || bool((C > (int)0))))) && bool((t > (int)0)))) && bool((t <= this->maxdist))))){
				HX_STACK_LINE(776)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(777)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(779)
					nx = this->originx;
					HX_STACK_LINE(780)
					ny = this->originy;
					HX_STACK_LINE(789)
					{
					}
				}
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(799)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(808)
					hx::AddEq(nx,(this->dirx * t1));
					HX_STACK_LINE(809)
					hx::AddEq(ny,(this->diry * t1));
				}
				HX_STACK_LINE(811)
				{
					HX_STACK_LINE(812)
					Float t1 = 1.0;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(821)
					hx::SubEq(nx,(c->worldCOMx * t1));
					HX_STACK_LINE(822)
					hx::SubEq(ny,(c->worldCOMy * t1));
				}
				HX_STACK_LINE(824)
				{
					HX_STACK_LINE(825)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(834)
					Float _g2 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(834)
					Float imag = (Float(1.0) / Float(_g2));		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(835)
					{
						HX_STACK_LINE(836)
						Float t1 = imag;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(845)
						hx::MultEq(nx,t1);
						HX_STACK_LINE(846)
						hx::MultEq(ny,t1);
					}
				}
				HX_STACK_LINE(849)
				if (((C <= (int)0))){
					HX_STACK_LINE(850)
					nx = -(nx);
					HX_STACK_LINE(851)
					ny = -(ny);
				}
				HX_STACK_LINE(853)
				::nape::geom::Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(853)
				{
					HX_STACK_LINE(853)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(853)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(853)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(853)
						::nape::geom::Vec2 _g3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(853)
						ret = _g3;
					}
					else{
						HX_STACK_LINE(853)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(853)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(853)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(853)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(853)
						::zpp_nape::geom::ZPP_Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 _g4 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(853)
									ret1 = _g4;
								}
								else{
									HX_STACK_LINE(853)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(853)
									ret1->next = null();
								}
								HX_STACK_LINE(853)
								ret1->weak = false;
							}
							HX_STACK_LINE(853)
							ret1->_immutable = immutable;
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								ret1->x = nx;
								HX_STACK_LINE(853)
								ret1->y = ny;
								HX_STACK_LINE(853)
								{
								}
							}
							HX_STACK_LINE(853)
							_g5 = ret1;
						}
						HX_STACK_LINE(853)
						ret->zpp_inner = _g5;
						HX_STACK_LINE(853)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(853)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(853)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(853)
									_this->_validate();
								}
							}
							HX_STACK_LINE(853)
							_g6 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",853,0x908d5ea5)
								{
									HX_STACK_LINE(853)
									Float _g7;		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(853)
									{
										HX_STACK_LINE(853)
										{
											HX_STACK_LINE(853)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(853)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(853)
												_this->_validate();
											}
										}
										HX_STACK_LINE(853)
										_g7 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(853)
									return (_g7 == ny);
								}
								return null();
							}
						};
						HX_STACK_LINE(853)
						if ((!(((  (((_g6 == nx))) ? bool(_Function_5_1::Block(ret,ny)) : bool(false) ))))){
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(853)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(853)
								{
								}
							}
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(853)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(853)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(853)
						ret;
					}
					HX_STACK_LINE(853)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(853)
					_g8 = ret;
				}
				HX_STACK_LINE(853)
				::nape::geom::RayResult res = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g8,t,(C <= (int)0),c->outer);		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(854)
				{
					HX_STACK_LINE(855)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(856)
					{
						HX_STACK_LINE(857)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = list->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(858)
						while((true)){
							HX_STACK_LINE(858)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(858)
								break;
							}
							HX_STACK_LINE(859)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(860)
							{
								HX_STACK_LINE(861)
								if (((res->zpp_inner->toiDistance < j->zpp_inner->toiDistance))){
									HX_STACK_LINE(861)
									break;
								}
								HX_STACK_LINE(862)
								pre = cx_ite;
							}
							HX_STACK_LINE(864)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(867)
					{
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPList_RayResult _this = list->zpp_inner->inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(867)
						{
							HX_STACK_LINE(867)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(867)
									::zpp_nape::util::ZNPNode_RayResult _g9 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(867)
									ret = _g9;
								}
								else{
									HX_STACK_LINE(867)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
									HX_STACK_LINE(867)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(867)
									ret->next = null();
								}
								HX_STACK_LINE(867)
								Dynamic();
							}
							HX_STACK_LINE(867)
							ret->elt = res;
							HX_STACK_LINE(867)
							temp = ret;
						}
						HX_STACK_LINE(867)
						if (((pre == null()))){
							HX_STACK_LINE(867)
							temp->next = _this->head;
							HX_STACK_LINE(867)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(867)
							temp->next = pre->next;
							HX_STACK_LINE(867)
							pre->next = temp;
						}
						HX_STACK_LINE(867)
						bool _g10 = _this->modified = true;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(867)
						_this->pushmod = _g10;
						HX_STACK_LINE(867)
						(_this->length)++;
						HX_STACK_LINE(867)
						temp;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(872)
			Float _g11 = ::Math_obj::sqrt(det);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(872)
			det = _g11;
			HX_STACK_LINE(873)
			A = (Float((int)1) / Float((((int)2 * A))));
			HX_STACK_LINE(874)
			Float t0 = (((-(B) - det)) * A);		HX_STACK_VAR(t0,"t0");
			HX_STACK_LINE(875)
			Float t1 = (((-(B) + det)) * A);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(876)
			if (((bool((t0 > (int)0)) && bool((t0 <= this->maxdist))))){
				HX_STACK_LINE(877)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(878)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(879)
				{
					HX_STACK_LINE(880)
					nx = this->originx;
					HX_STACK_LINE(881)
					ny = this->originy;
					HX_STACK_LINE(890)
					{
					}
				}
				HX_STACK_LINE(899)
				{
					HX_STACK_LINE(900)
					Float t = t0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(909)
					hx::AddEq(nx,(this->dirx * t));
					HX_STACK_LINE(910)
					hx::AddEq(ny,(this->diry * t));
				}
				HX_STACK_LINE(912)
				{
					HX_STACK_LINE(913)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(922)
					hx::SubEq(nx,(c->worldCOMx * t));
					HX_STACK_LINE(923)
					hx::SubEq(ny,(c->worldCOMy * t));
				}
				HX_STACK_LINE(925)
				{
					HX_STACK_LINE(926)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(935)
					Float _g12 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(935)
					Float imag = (Float(1.0) / Float(_g12));		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(936)
					{
						HX_STACK_LINE(937)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(946)
						hx::MultEq(nx,t);
						HX_STACK_LINE(947)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(954)
				::nape::geom::Vec2 _g18;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(954)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(954)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(954)
						::nape::geom::Vec2 _g13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(954)
						ret = _g13;
					}
					else{
						HX_STACK_LINE(954)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(954)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(954)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(954)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(954)
						::zpp_nape::geom::ZPP_Vec2 _g15;		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(954)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _g14 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(954)
									ret1 = _g14;
								}
								else{
									HX_STACK_LINE(954)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(954)
									ret1->next = null();
								}
								HX_STACK_LINE(954)
								ret1->weak = false;
							}
							HX_STACK_LINE(954)
							ret1->_immutable = immutable;
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								ret1->x = nx;
								HX_STACK_LINE(954)
								ret1->y = ny;
								HX_STACK_LINE(954)
								{
								}
							}
							HX_STACK_LINE(954)
							_g15 = ret1;
						}
						HX_STACK_LINE(954)
						ret->zpp_inner = _g15;
						HX_STACK_LINE(954)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(954)
						Float _g16;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(954)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(954)
									_this->_validate();
								}
							}
							HX_STACK_LINE(954)
							_g16 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",954,0x908d5ea5)
								{
									HX_STACK_LINE(954)
									Float _g17;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(954)
									{
										HX_STACK_LINE(954)
										{
											HX_STACK_LINE(954)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(954)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(954)
												_this->_validate();
											}
										}
										HX_STACK_LINE(954)
										_g17 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(954)
									return (_g17 == ny);
								}
								return null();
							}
						};
						HX_STACK_LINE(954)
						if ((!(((  (((_g16 == nx))) ? bool(_Function_5_1::Block(ret,ny)) : bool(false) ))))){
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(954)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(954)
								{
								}
							}
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(954)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(954)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(954)
						ret;
					}
					HX_STACK_LINE(954)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(954)
					_g18 = ret;
				}
				HX_STACK_LINE(954)
				::nape::geom::RayResult res = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g18,t0,false,c->outer);		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(955)
				{
					HX_STACK_LINE(956)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(957)
					{
						HX_STACK_LINE(958)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = list->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(959)
						while((true)){
							HX_STACK_LINE(959)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(959)
								break;
							}
							HX_STACK_LINE(960)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(961)
							{
								HX_STACK_LINE(962)
								if (((res->zpp_inner->toiDistance < j->zpp_inner->toiDistance))){
									HX_STACK_LINE(962)
									break;
								}
								HX_STACK_LINE(963)
								pre = cx_ite;
							}
							HX_STACK_LINE(965)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(968)
					{
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPList_RayResult _this = list->zpp_inner->inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(968)
						{
							HX_STACK_LINE(968)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(968)
							{
								HX_STACK_LINE(968)
								if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(968)
									::zpp_nape::util::ZNPNode_RayResult _g19 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(968)
									ret = _g19;
								}
								else{
									HX_STACK_LINE(968)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
									HX_STACK_LINE(968)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(968)
									ret->next = null();
								}
								HX_STACK_LINE(968)
								Dynamic();
							}
							HX_STACK_LINE(968)
							ret->elt = res;
							HX_STACK_LINE(968)
							temp = ret;
						}
						HX_STACK_LINE(968)
						if (((pre == null()))){
							HX_STACK_LINE(968)
							temp->next = _this->head;
							HX_STACK_LINE(968)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(968)
							temp->next = pre->next;
							HX_STACK_LINE(968)
							pre->next = temp;
						}
						HX_STACK_LINE(968)
						bool _g20 = _this->modified = true;		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(968)
						_this->pushmod = _g20;
						HX_STACK_LINE(968)
						(_this->length)++;
						HX_STACK_LINE(968)
						temp;
					}
				}
			}
			HX_STACK_LINE(971)
			if (((bool((bool((t1 > (int)0)) && bool((t1 <= this->maxdist)))) && bool(inner)))){
				HX_STACK_LINE(972)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(973)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(974)
				{
					HX_STACK_LINE(975)
					nx = this->originx;
					HX_STACK_LINE(976)
					ny = this->originy;
					HX_STACK_LINE(985)
					{
					}
				}
				HX_STACK_LINE(994)
				{
					HX_STACK_LINE(995)
					Float t = t1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1004)
					hx::AddEq(nx,(this->dirx * t));
					HX_STACK_LINE(1005)
					hx::AddEq(ny,(this->diry * t));
				}
				HX_STACK_LINE(1007)
				{
					HX_STACK_LINE(1008)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1017)
					hx::SubEq(nx,(c->worldCOMx * t));
					HX_STACK_LINE(1018)
					hx::SubEq(ny,(c->worldCOMy * t));
				}
				HX_STACK_LINE(1020)
				{
					HX_STACK_LINE(1021)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1030)
					Float _g21 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1030)
					Float imag = (Float(1.0) / Float(_g21));		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1031)
					{
						HX_STACK_LINE(1032)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1041)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1042)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1045)
				{
					HX_STACK_LINE(1046)
					nx = -(nx);
					HX_STACK_LINE(1047)
					ny = -(ny);
				}
				HX_STACK_LINE(1049)
				::nape::geom::Vec2 _g27;		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(1049)
				{
					HX_STACK_LINE(1049)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1049)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1049)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1049)
						::nape::geom::Vec2 _g22 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(1049)
						ret = _g22;
					}
					else{
						HX_STACK_LINE(1049)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1049)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1049)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(1049)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(1049)
						::zpp_nape::geom::ZPP_Vec2 _g24;		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1049)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 _g23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(1049)
									ret1 = _g23;
								}
								else{
									HX_STACK_LINE(1049)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1049)
									ret1->next = null();
								}
								HX_STACK_LINE(1049)
								ret1->weak = false;
							}
							HX_STACK_LINE(1049)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								ret1->x = nx;
								HX_STACK_LINE(1049)
								ret1->y = ny;
								HX_STACK_LINE(1049)
								{
								}
							}
							HX_STACK_LINE(1049)
							_g24 = ret1;
						}
						HX_STACK_LINE(1049)
						ret->zpp_inner = _g24;
						HX_STACK_LINE(1049)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1049)
						Float _g25;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1049)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1049)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1049)
							_g25 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",1049,0x908d5ea5)
								{
									HX_STACK_LINE(1049)
									Float _g26;		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(1049)
									{
										HX_STACK_LINE(1049)
										{
											HX_STACK_LINE(1049)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1049)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1049)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1049)
										_g26 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(1049)
									return (_g26 == ny);
								}
								return null();
							}
						};
						HX_STACK_LINE(1049)
						if ((!(((  (((_g25 == nx))) ? bool(_Function_5_1::Block(ret,ny)) : bool(false) ))))){
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(1049)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(1049)
								{
								}
							}
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1049)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1049)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1049)
						ret;
					}
					HX_STACK_LINE(1049)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1049)
					_g27 = ret;
				}
				HX_STACK_LINE(1049)
				::nape::geom::RayResult res = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g27,t1,true,c->outer);		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(1050)
				{
					HX_STACK_LINE(1051)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1052)
					{
						HX_STACK_LINE(1053)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = list->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1054)
						while((true)){
							HX_STACK_LINE(1054)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(1054)
								break;
							}
							HX_STACK_LINE(1055)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1056)
							{
								HX_STACK_LINE(1057)
								if (((res->zpp_inner->toiDistance < j->zpp_inner->toiDistance))){
									HX_STACK_LINE(1057)
									break;
								}
								HX_STACK_LINE(1058)
								pre = cx_ite;
							}
							HX_STACK_LINE(1060)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1063)
					{
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPList_RayResult _this = list->zpp_inner->inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(1063)
						{
							HX_STACK_LINE(1063)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1063)
							{
								HX_STACK_LINE(1063)
								if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(1063)
									::zpp_nape::util::ZNPNode_RayResult _g28 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g28,"_g28");
									HX_STACK_LINE(1063)
									ret = _g28;
								}
								else{
									HX_STACK_LINE(1063)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
									HX_STACK_LINE(1063)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1063)
									ret->next = null();
								}
								HX_STACK_LINE(1063)
								Dynamic();
							}
							HX_STACK_LINE(1063)
							ret->elt = res;
							HX_STACK_LINE(1063)
							temp = ret;
						}
						HX_STACK_LINE(1063)
						if (((pre == null()))){
							HX_STACK_LINE(1063)
							temp->next = _this->head;
							HX_STACK_LINE(1063)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(1063)
							temp->next = pre->next;
							HX_STACK_LINE(1063)
							pre->next = temp;
						}
						HX_STACK_LINE(1063)
						bool _g29 = _this->modified = true;		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(1063)
						_this->pushmod = _g29;
						HX_STACK_LINE(1063)
						(_this->length)++;
						HX_STACK_LINE(1063)
						temp;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,circlesect2,(void))

::nape::geom::RayResult ZPP_Ray_obj::polysect( ::zpp_nape::shape::ZPP_Polygon p,bool inner,Float mint){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","polysect",0xdb85cb49,"zpp_nape.geom.ZPP_Ray.polysect","zpp_nape/geom/Ray.hx",1068,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(mint,"mint")
	HX_STACK_LINE(1069)
	Float min = mint;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1070)
	::zpp_nape::shape::ZPP_Edge edge = null();		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(1071)
	::zpp_nape::util::ZNPNode_ZPP_Edge ei = p->edges->head;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(1072)
	{
		HX_STACK_LINE(1073)
		bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
		HX_STACK_LINE(1074)
		::zpp_nape::geom::ZPP_Vec2 cx_itei = p->gverts->next;		HX_STACK_VAR(cx_itei,"cx_itei");
		HX_STACK_LINE(1075)
		::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(1076)
		::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
		HX_STACK_LINE(1077)
		while((true)){
			HX_STACK_LINE(1077)
			if ((!(((cx_itej != null()))))){
				HX_STACK_LINE(1077)
				break;
			}
			HX_STACK_LINE(1078)
			::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1079)
			{
				HX_STACK_LINE(1080)
				::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1081)
				if (((bool(inner) || bool((((e->gnormx * this->dirx) + (e->gnormy * this->diry)) < (int)0))))){
					HX_STACK_LINE(1082)
					Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
					HX_STACK_LINE(1083)
					Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
					HX_STACK_LINE(1084)
					{
						HX_STACK_LINE(1085)
						_vx = (v->x - u->x);
						HX_STACK_LINE(1086)
						_vy = (v->y - u->y);
					}
					HX_STACK_LINE(1088)
					Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
					HX_STACK_LINE(1089)
					Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
					HX_STACK_LINE(1090)
					{
						HX_STACK_LINE(1091)
						_sx = (u->x - this->originx);
						HX_STACK_LINE(1092)
						_sy = (u->y - this->originy);
					}
					HX_STACK_LINE(1094)
					Float den = ((_vy * this->dirx) - (_vx * this->diry));		HX_STACK_VAR(den,"den");
					HX_STACK_LINE(1095)
					if ((((den * den) > ::nape::Config_obj::epsilon))){
						HX_STACK_LINE(1096)
						den = (Float((int)1) / Float(den));
						HX_STACK_LINE(1097)
						Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
						HX_STACK_LINE(1098)
						if (((bool((bool((sxx > (int)0)) && bool((sxx < min)))) && bool((sxx <= this->maxdist))))){
							HX_STACK_LINE(1099)
							Float txx = ((((this->diry * _sx) - (this->dirx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
							HX_STACK_LINE(1100)
							if (((bool((txx > -(::nape::Config_obj::epsilon))) && bool((txx < ((int)1 + ::nape::Config_obj::epsilon)))))){
								HX_STACK_LINE(1101)
								min = sxx;
								HX_STACK_LINE(1102)
								edge = ei->elt;
							}
						}
					}
				}
				HX_STACK_LINE(1107)
				ei = ei->next;
			}
			HX_STACK_LINE(1109)
			{
				HX_STACK_LINE(1110)
				cx_itei = cx_itej;
				HX_STACK_LINE(1111)
				u = v;
				HX_STACK_LINE(1112)
				cx_itej = cx_itej->next;
			}
		}
		HX_STACK_LINE(1115)
		if ((cx_cont)){
			HX_STACK_LINE(1116)
			while((true)){
				HX_STACK_LINE(1117)
				cx_itej = p->gverts->next;
				HX_STACK_LINE(1118)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1119)
				{
					HX_STACK_LINE(1120)
					::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(1121)
					if (((bool(inner) || bool((((e->gnormx * this->dirx) + (e->gnormy * this->diry)) < (int)0))))){
						HX_STACK_LINE(1122)
						Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
						HX_STACK_LINE(1123)
						Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
						HX_STACK_LINE(1124)
						{
							HX_STACK_LINE(1125)
							_vx = (v->x - u->x);
							HX_STACK_LINE(1126)
							_vy = (v->y - u->y);
						}
						HX_STACK_LINE(1128)
						Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
						HX_STACK_LINE(1129)
						Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
						HX_STACK_LINE(1130)
						{
							HX_STACK_LINE(1131)
							_sx = (u->x - this->originx);
							HX_STACK_LINE(1132)
							_sy = (u->y - this->originy);
						}
						HX_STACK_LINE(1134)
						Float den = ((_vy * this->dirx) - (_vx * this->diry));		HX_STACK_VAR(den,"den");
						HX_STACK_LINE(1135)
						if ((((den * den) > ::nape::Config_obj::epsilon))){
							HX_STACK_LINE(1136)
							den = (Float((int)1) / Float(den));
							HX_STACK_LINE(1137)
							Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
							HX_STACK_LINE(1138)
							if (((bool((bool((sxx > (int)0)) && bool((sxx < min)))) && bool((sxx <= this->maxdist))))){
								HX_STACK_LINE(1139)
								Float txx = ((((this->diry * _sx) - (this->dirx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
								HX_STACK_LINE(1140)
								if (((bool((txx > -(::nape::Config_obj::epsilon))) && bool((txx < ((int)1 + ::nape::Config_obj::epsilon)))))){
									HX_STACK_LINE(1141)
									min = sxx;
									HX_STACK_LINE(1142)
									edge = ei->elt;
								}
							}
						}
					}
					HX_STACK_LINE(1147)
					ei = ei->next;
				}
				HX_STACK_LINE(1116)
				break;
			}
		}
	}
	HX_STACK_LINE(1153)
	if (((edge != null()))){
		HX_STACK_LINE(1154)
		Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(1155)
		Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(1156)
		{
			HX_STACK_LINE(1157)
			nx = edge->gnormx;
			HX_STACK_LINE(1158)
			ny = edge->gnormy;
			HX_STACK_LINE(1167)
			{
			}
		}
		HX_STACK_LINE(1176)
		bool inner1 = (((nx * this->dirx) + (ny * this->diry)) > (int)0);		HX_STACK_VAR(inner1,"inner1");
		HX_STACK_LINE(1177)
		if ((inner1)){
			HX_STACK_LINE(1178)
			nx = -(nx);
			HX_STACK_LINE(1179)
			ny = -(ny);
		}
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1181)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1181)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1181)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1181)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1181)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1181)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1181)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(1181)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1181)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(1181)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1181)
							ret1->next = null();
						}
						HX_STACK_LINE(1181)
						ret1->weak = false;
					}
					HX_STACK_LINE(1181)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret1->x = nx;
						HX_STACK_LINE(1181)
						ret1->y = ny;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					_g2 = ret1;
				}
				HX_STACK_LINE(1181)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(1181)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1181)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1181)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1181)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",1181,0x908d5ea5)
						{
							HX_STACK_LINE(1181)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1181)
							{
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(1181)
							return (_g4 == ny);
						}
						return null();
					}
				};
				HX_STACK_LINE(1181)
				if ((!(((  (((_g3 == nx))) ? bool(_Function_4_1::Block(ret,ny)) : bool(false) ))))){
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret->zpp_inner->x = nx;
						HX_STACK_LINE(1181)
						ret->zpp_inner->y = ny;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1181)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1181)
				ret;
			}
			HX_STACK_LINE(1181)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1181)
			_g5 = ret;
		}
		HX_STACK_LINE(1181)
		return ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g5,min,inner1,p->outer);
	}
	else{
		HX_STACK_LINE(1183)
		return null();
	}
	HX_STACK_LINE(1153)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,polysect,return )

Void ZPP_Ray_obj::polysect2( ::zpp_nape::shape::ZPP_Polygon p,bool inner,::nape::geom::RayResultList list){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","polysect2",0x398c14c9,"zpp_nape.geom.ZPP_Ray.polysect2","zpp_nape/geom/Ray.hx",1185,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(inner,"inner")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(1186)
		Float min = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(1187)
		Float max = -1.0;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1188)
		::zpp_nape::shape::ZPP_Edge edge = null();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(1189)
		::zpp_nape::shape::ZPP_Edge edgemax = null();		HX_STACK_VAR(edgemax,"edgemax");
		HX_STACK_LINE(1190)
		::zpp_nape::util::ZNPNode_ZPP_Edge ei = p->edges->head;		HX_STACK_VAR(ei,"ei");
		HX_STACK_LINE(1191)
		{
			HX_STACK_LINE(1192)
			bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
			HX_STACK_LINE(1193)
			::zpp_nape::geom::ZPP_Vec2 cx_itei = p->gverts->next;		HX_STACK_VAR(cx_itei,"cx_itei");
			HX_STACK_LINE(1194)
			::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1195)
			::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
			HX_STACK_LINE(1196)
			while((true)){
				HX_STACK_LINE(1196)
				if ((!(((cx_itej != null()))))){
					HX_STACK_LINE(1196)
					break;
				}
				HX_STACK_LINE(1197)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1198)
				{
					HX_STACK_LINE(1199)
					::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(1200)
					if (((bool(inner) || bool((((e->gnormx * this->dirx) + (e->gnormy * this->diry)) < (int)0))))){
						HX_STACK_LINE(1201)
						Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
						HX_STACK_LINE(1202)
						Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
						HX_STACK_LINE(1203)
						{
							HX_STACK_LINE(1204)
							_vx = (v->x - u->x);
							HX_STACK_LINE(1205)
							_vy = (v->y - u->y);
						}
						HX_STACK_LINE(1207)
						Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
						HX_STACK_LINE(1208)
						Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
						HX_STACK_LINE(1209)
						{
							HX_STACK_LINE(1210)
							_sx = (u->x - this->originx);
							HX_STACK_LINE(1211)
							_sy = (u->y - this->originy);
						}
						HX_STACK_LINE(1213)
						Float den = ((_vy * this->dirx) - (_vx * this->diry));		HX_STACK_VAR(den,"den");
						HX_STACK_LINE(1214)
						if ((((den * den) > ::nape::Config_obj::epsilon))){
							HX_STACK_LINE(1215)
							den = (Float((int)1) / Float(den));
							HX_STACK_LINE(1216)
							Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
							HX_STACK_LINE(1217)
							if (((bool((bool((sxx > (int)0)) && bool((sxx <= this->maxdist)))) && bool(((bool((sxx < min)) || bool((sxx > max)))))))){
								HX_STACK_LINE(1218)
								Float txx = ((((this->diry * _sx) - (this->dirx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
								HX_STACK_LINE(1219)
								if (((bool((txx > -(::nape::Config_obj::epsilon))) && bool((txx < ((int)1 + ::nape::Config_obj::epsilon)))))){
									HX_STACK_LINE(1220)
									if (((sxx < min))){
										HX_STACK_LINE(1221)
										min = sxx;
										HX_STACK_LINE(1222)
										edge = ei->elt;
									}
									HX_STACK_LINE(1224)
									if (((sxx > max))){
										HX_STACK_LINE(1225)
										max = sxx;
										HX_STACK_LINE(1226)
										edgemax = ei->elt;
									}
								}
							}
						}
					}
					HX_STACK_LINE(1232)
					ei = ei->next;
				}
				HX_STACK_LINE(1234)
				{
					HX_STACK_LINE(1235)
					cx_itei = cx_itej;
					HX_STACK_LINE(1236)
					u = v;
					HX_STACK_LINE(1237)
					cx_itej = cx_itej->next;
				}
			}
			HX_STACK_LINE(1240)
			if ((cx_cont)){
				HX_STACK_LINE(1241)
				while((true)){
					HX_STACK_LINE(1242)
					cx_itej = p->gverts->next;
					HX_STACK_LINE(1243)
					::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1244)
					{
						HX_STACK_LINE(1245)
						::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(1246)
						if (((bool(inner) || bool((((e->gnormx * this->dirx) + (e->gnormy * this->diry)) < (int)0))))){
							HX_STACK_LINE(1247)
							Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
							HX_STACK_LINE(1248)
							Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
							HX_STACK_LINE(1249)
							{
								HX_STACK_LINE(1250)
								_vx = (v->x - u->x);
								HX_STACK_LINE(1251)
								_vy = (v->y - u->y);
							}
							HX_STACK_LINE(1253)
							Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
							HX_STACK_LINE(1254)
							Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
							HX_STACK_LINE(1255)
							{
								HX_STACK_LINE(1256)
								_sx = (u->x - this->originx);
								HX_STACK_LINE(1257)
								_sy = (u->y - this->originy);
							}
							HX_STACK_LINE(1259)
							Float den = ((_vy * this->dirx) - (_vx * this->diry));		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1260)
							if ((((den * den) > ::nape::Config_obj::epsilon))){
								HX_STACK_LINE(1261)
								den = (Float((int)1) / Float(den));
								HX_STACK_LINE(1262)
								Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
								HX_STACK_LINE(1263)
								if (((bool((bool((sxx > (int)0)) && bool((sxx <= this->maxdist)))) && bool(((bool((sxx < min)) || bool((sxx > max)))))))){
									HX_STACK_LINE(1264)
									Float txx = ((((this->diry * _sx) - (this->dirx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
									HX_STACK_LINE(1265)
									if (((bool((txx > -(::nape::Config_obj::epsilon))) && bool((txx < ((int)1 + ::nape::Config_obj::epsilon)))))){
										HX_STACK_LINE(1266)
										if (((sxx < min))){
											HX_STACK_LINE(1267)
											min = sxx;
											HX_STACK_LINE(1268)
											edge = ei->elt;
										}
										HX_STACK_LINE(1270)
										if (((sxx > max))){
											HX_STACK_LINE(1271)
											max = sxx;
											HX_STACK_LINE(1272)
											edgemax = ei->elt;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1278)
						ei = ei->next;
					}
					HX_STACK_LINE(1241)
					break;
				}
			}
		}
		HX_STACK_LINE(1284)
		if (((edge != null()))){
			HX_STACK_LINE(1285)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1286)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1287)
			{
				HX_STACK_LINE(1288)
				nx = edge->gnormx;
				HX_STACK_LINE(1289)
				ny = edge->gnormy;
				HX_STACK_LINE(1298)
				{
				}
			}
			HX_STACK_LINE(1307)
			bool inner1 = (((nx * this->dirx) + (ny * this->diry)) > (int)0);		HX_STACK_VAR(inner1,"inner1");
			HX_STACK_LINE(1308)
			if ((inner1)){
				HX_STACK_LINE(1309)
				nx = -(nx);
				HX_STACK_LINE(1310)
				ny = -(ny);
			}
			HX_STACK_LINE(1312)
			::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1312)
			{
				HX_STACK_LINE(1312)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1312)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1312)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1312)
					::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1312)
					ret = _g;
				}
				else{
					HX_STACK_LINE(1312)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1312)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1312)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(1312)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1312)
					::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1312)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1312)
								ret1 = _g1;
							}
							else{
								HX_STACK_LINE(1312)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1312)
								ret1->next = null();
							}
							HX_STACK_LINE(1312)
							ret1->weak = false;
						}
						HX_STACK_LINE(1312)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							ret1->x = nx;
							HX_STACK_LINE(1312)
							ret1->y = ny;
							HX_STACK_LINE(1312)
							{
							}
						}
						HX_STACK_LINE(1312)
						_g2 = ret1;
					}
					HX_STACK_LINE(1312)
					ret->zpp_inner = _g2;
					HX_STACK_LINE(1312)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1312)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1312)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1312)
						_g3 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",1312,0x908d5ea5)
							{
								HX_STACK_LINE(1312)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(1312)
								{
									HX_STACK_LINE(1312)
									{
										HX_STACK_LINE(1312)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1312)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1312)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1312)
									_g4 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(1312)
								return (_g4 == ny);
							}
							return null();
						}
					};
					HX_STACK_LINE(1312)
					if ((!(((  (((_g3 == nx))) ? bool(_Function_4_1::Block(ret,ny)) : bool(false) ))))){
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(1312)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(1312)
							{
							}
						}
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1312)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1312)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1312)
					ret;
				}
				HX_STACK_LINE(1312)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1312)
				_g5 = ret;
			}
			HX_STACK_LINE(1312)
			::nape::geom::RayResult ret = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g5,min,inner1,p->outer);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1313)
			{
				HX_STACK_LINE(1314)
				::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1316)
					::zpp_nape::util::ZNPNode_RayResult cx_ite = list->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1317)
					while((true)){
						HX_STACK_LINE(1317)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(1317)
							break;
						}
						HX_STACK_LINE(1318)
						::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1319)
						{
							HX_STACK_LINE(1320)
							if (((ret->zpp_inner->toiDistance < j->zpp_inner->toiDistance))){
								HX_STACK_LINE(1320)
								break;
							}
							HX_STACK_LINE(1321)
							pre = cx_ite;
						}
						HX_STACK_LINE(1323)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1326)
				{
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPList_RayResult _this = list->zpp_inner->inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(1326)
					{
						HX_STACK_LINE(1326)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1326)
						{
							HX_STACK_LINE(1326)
							if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
								HX_STACK_LINE(1326)
								::zpp_nape::util::ZNPNode_RayResult _g6 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(1326)
								ret1 = _g6;
							}
							else{
								HX_STACK_LINE(1326)
								ret1 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
								HX_STACK_LINE(1326)
								::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1326)
								ret1->next = null();
							}
							HX_STACK_LINE(1326)
							Dynamic();
						}
						HX_STACK_LINE(1326)
						ret1->elt = ret;
						HX_STACK_LINE(1326)
						temp = ret1;
					}
					HX_STACK_LINE(1326)
					if (((pre == null()))){
						HX_STACK_LINE(1326)
						temp->next = _this->head;
						HX_STACK_LINE(1326)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(1326)
						temp->next = pre->next;
						HX_STACK_LINE(1326)
						pre->next = temp;
					}
					HX_STACK_LINE(1326)
					bool _g7 = _this->modified = true;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1326)
					_this->pushmod = _g7;
					HX_STACK_LINE(1326)
					(_this->length)++;
					HX_STACK_LINE(1326)
					temp;
				}
			}
		}
		HX_STACK_LINE(1329)
		if (((bool((edgemax != null())) && bool((edge != edgemax))))){
			HX_STACK_LINE(1330)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1331)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1332)
			{
				HX_STACK_LINE(1333)
				nx = edgemax->gnormx;
				HX_STACK_LINE(1334)
				ny = edgemax->gnormy;
				HX_STACK_LINE(1343)
				{
				}
			}
			HX_STACK_LINE(1352)
			bool inner1 = (((nx * this->dirx) + (ny * this->diry)) > (int)0);		HX_STACK_VAR(inner1,"inner1");
			HX_STACK_LINE(1353)
			if ((inner1)){
				HX_STACK_LINE(1354)
				nx = -(nx);
				HX_STACK_LINE(1355)
				ny = -(ny);
			}
			HX_STACK_LINE(1357)
			::nape::geom::Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1357)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1357)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1357)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1357)
					::nape::geom::Vec2 _g8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1357)
					ret = _g8;
				}
				else{
					HX_STACK_LINE(1357)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1357)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1357)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(1357)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1357)
					::zpp_nape::geom::ZPP_Vec2 _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1357)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _g9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(1357)
								ret1 = _g9;
							}
							else{
								HX_STACK_LINE(1357)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1357)
								ret1->next = null();
							}
							HX_STACK_LINE(1357)
							ret1->weak = false;
						}
						HX_STACK_LINE(1357)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							ret1->x = nx;
							HX_STACK_LINE(1357)
							ret1->y = ny;
							HX_STACK_LINE(1357)
							{
							}
						}
						HX_STACK_LINE(1357)
						_g10 = ret1;
					}
					HX_STACK_LINE(1357)
					ret->zpp_inner = _g10;
					HX_STACK_LINE(1357)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1357)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1357)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1357)
						_g11 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &ny){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Ray.hx",1357,0x908d5ea5)
							{
								HX_STACK_LINE(1357)
								Float _g12;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									{
										HX_STACK_LINE(1357)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1357)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1357)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1357)
									_g12 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(1357)
								return (_g12 == ny);
							}
							return null();
						}
					};
					HX_STACK_LINE(1357)
					if ((!(((  (((_g11 == nx))) ? bool(_Function_4_1::Block(ret,ny)) : bool(false) ))))){
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(1357)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(1357)
							{
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1357)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1357)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1357)
					ret;
				}
				HX_STACK_LINE(1357)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1357)
				_g13 = ret;
			}
			HX_STACK_LINE(1357)
			::nape::geom::RayResult ret = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(_g13,max,inner1,p->outer);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1358)
			{
				HX_STACK_LINE(1359)
				::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1360)
				{
					HX_STACK_LINE(1361)
					::zpp_nape::util::ZNPNode_RayResult cx_ite = list->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1362)
					while((true)){
						HX_STACK_LINE(1362)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(1362)
							break;
						}
						HX_STACK_LINE(1363)
						::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1364)
						{
							HX_STACK_LINE(1365)
							if (((ret->zpp_inner->toiDistance < j->zpp_inner->toiDistance))){
								HX_STACK_LINE(1365)
								break;
							}
							HX_STACK_LINE(1366)
							pre = cx_ite;
						}
						HX_STACK_LINE(1368)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPList_RayResult _this = list->zpp_inner->inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1371)
						{
							HX_STACK_LINE(1371)
							if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
								HX_STACK_LINE(1371)
								::zpp_nape::util::ZNPNode_RayResult _g14 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(1371)
								ret1 = _g14;
							}
							else{
								HX_STACK_LINE(1371)
								ret1 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
								HX_STACK_LINE(1371)
								::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1371)
								ret1->next = null();
							}
							HX_STACK_LINE(1371)
							Dynamic();
						}
						HX_STACK_LINE(1371)
						ret1->elt = ret;
						HX_STACK_LINE(1371)
						temp = ret1;
					}
					HX_STACK_LINE(1371)
					if (((pre == null()))){
						HX_STACK_LINE(1371)
						temp->next = _this->head;
						HX_STACK_LINE(1371)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(1371)
						temp->next = pre->next;
						HX_STACK_LINE(1371)
						pre->next = temp;
					}
					HX_STACK_LINE(1371)
					bool _g15 = _this->modified = true;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(1371)
					_this->pushmod = _g15;
					HX_STACK_LINE(1371)
					(_this->length)++;
					HX_STACK_LINE(1371)
					temp;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,polysect2,(void))


ZPP_Ray_obj::ZPP_Ray_obj()
{
}

void ZPP_Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(maxdist,"maxdist");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(originx,"originx");
	HX_MARK_MEMBER_NAME(originy,"originy");
	HX_MARK_MEMBER_NAME(dirx,"dirx");
	HX_MARK_MEMBER_NAME(diry,"diry");
	HX_MARK_MEMBER_NAME(idirx,"idirx");
	HX_MARK_MEMBER_NAME(idiry,"idiry");
	HX_MARK_MEMBER_NAME(normalx,"normalx");
	HX_MARK_MEMBER_NAME(normaly,"normaly");
	HX_MARK_MEMBER_NAME(absnormalx,"absnormalx");
	HX_MARK_MEMBER_NAME(absnormaly,"absnormaly");
	HX_MARK_MEMBER_NAME(zip_dir,"zip_dir");
	HX_MARK_END_CLASS();
}

void ZPP_Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(maxdist,"maxdist");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(originx,"originx");
	HX_VISIT_MEMBER_NAME(originy,"originy");
	HX_VISIT_MEMBER_NAME(dirx,"dirx");
	HX_VISIT_MEMBER_NAME(diry,"diry");
	HX_VISIT_MEMBER_NAME(idirx,"idirx");
	HX_VISIT_MEMBER_NAME(idiry,"idiry");
	HX_VISIT_MEMBER_NAME(normalx,"normalx");
	HX_VISIT_MEMBER_NAME(normaly,"normaly");
	HX_VISIT_MEMBER_NAME(absnormalx,"absnormalx");
	HX_VISIT_MEMBER_NAME(absnormaly,"absnormaly");
	HX_VISIT_MEMBER_NAME(zip_dir,"zip_dir");
}

Dynamic ZPP_Ray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirx") ) { return dirx; }
		if (HX_FIELD_EQ(inName,"diry") ) { return diry; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idirx") ) { return idirx; }
		if (HX_FIELD_EQ(inName,"idiry") ) { return idiry; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxdist") ) { return maxdist; }
		if (HX_FIELD_EQ(inName,"originx") ) { return originx; }
		if (HX_FIELD_EQ(inName,"originy") ) { return originy; }
		if (HX_FIELD_EQ(inName,"normalx") ) { return normalx; }
		if (HX_FIELD_EQ(inName,"normaly") ) { return normaly; }
		if (HX_FIELD_EQ(inName,"zip_dir") ) { return zip_dir; }
		if (HX_FIELD_EQ(inName,"rayAABB") ) { return rayAABB_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"aabbtest") ) { return aabbtest_dyn(); }
		if (HX_FIELD_EQ(inName,"aabbsect") ) { return aabbsect_dyn(); }
		if (HX_FIELD_EQ(inName,"polysect") ) { return polysect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		if (HX_FIELD_EQ(inName,"polysect2") ) { return polysect2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"absnormalx") ) { return absnormalx; }
		if (HX_FIELD_EQ(inName,"absnormaly") ) { return absnormaly; }
		if (HX_FIELD_EQ(inName,"circlesect") ) { return circlesect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"circlesect2") ) { return circlesect2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validate_dir") ) { return validate_dir_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidate_dir") ) { return invalidate_dir_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"origin_invalidate") ) { return origin_invalidate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"direction_invalidate") ) { return direction_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirx") ) { dirx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diry") ) { diry=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idirx") ) { idirx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idiry") ) { idiry=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxdist") ) { maxdist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originx") ) { originx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originy") ) { originy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalx") ) { normalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normaly") ) { normaly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_dir") ) { zip_dir=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"absnormalx") ) { absnormalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absnormaly") ) { absnormaly=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("maxdist"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("originx"));
	outFields->push(HX_CSTRING("originy"));
	outFields->push(HX_CSTRING("dirx"));
	outFields->push(HX_CSTRING("diry"));
	outFields->push(HX_CSTRING("idirx"));
	outFields->push(HX_CSTRING("idiry"));
	outFields->push(HX_CSTRING("normalx"));
	outFields->push(HX_CSTRING("normaly"));
	outFields->push(HX_CSTRING("absnormalx"));
	outFields->push(HX_CSTRING("absnormaly"));
	outFields->push(HX_CSTRING("zip_dir"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Ray_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Ray_obj,direction),HX_CSTRING("direction")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,maxdist),HX_CSTRING("maxdist")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Ray_obj,userData),HX_CSTRING("userData")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,originx),HX_CSTRING("originx")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,originy),HX_CSTRING("originy")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,dirx),HX_CSTRING("dirx")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,diry),HX_CSTRING("diry")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,idirx),HX_CSTRING("idirx")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,idiry),HX_CSTRING("idiry")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,normalx),HX_CSTRING("normalx")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,normaly),HX_CSTRING("normaly")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,absnormalx),HX_CSTRING("absnormalx")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,absnormaly),HX_CSTRING("absnormaly")},
	{hx::fsBool,(int)offsetof(ZPP_Ray_obj,zip_dir),HX_CSTRING("zip_dir")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("direction"),
	HX_CSTRING("maxdist"),
	HX_CSTRING("userData"),
	HX_CSTRING("originx"),
	HX_CSTRING("originy"),
	HX_CSTRING("dirx"),
	HX_CSTRING("diry"),
	HX_CSTRING("idirx"),
	HX_CSTRING("idiry"),
	HX_CSTRING("normalx"),
	HX_CSTRING("normaly"),
	HX_CSTRING("absnormalx"),
	HX_CSTRING("absnormaly"),
	HX_CSTRING("origin_invalidate"),
	HX_CSTRING("direction_invalidate"),
	HX_CSTRING("zip_dir"),
	HX_CSTRING("invalidate_dir"),
	HX_CSTRING("validate_dir"),
	HX_CSTRING("rayAABB"),
	HX_CSTRING("aabbtest"),
	HX_CSTRING("aabbsect"),
	HX_CSTRING("circlesect"),
	HX_CSTRING("circlesect2"),
	HX_CSTRING("polysect"),
	HX_CSTRING("polysect2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Ray_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Ray_obj::__mClass;

void ZPP_Ray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Ray"), hx::TCanCast< ZPP_Ray_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Ray_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
