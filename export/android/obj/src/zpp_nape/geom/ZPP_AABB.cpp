#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_AABB_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","new",0x3f8704a8,"zpp_nape.geom.ZPP_AABB.new","zpp_nape/geom/AABB.hx",174,0xbecf4f8d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(406)
	this->wrap_max = null();
	HX_STACK_LINE(405)
	this->maxy = 0.0;
	HX_STACK_LINE(404)
	this->maxx = 0.0;
	HX_STACK_LINE(341)
	this->wrap_min = null();
	HX_STACK_LINE(340)
	this->miny = 0.0;
	HX_STACK_LINE(339)
	this->minx = 0.0;
	HX_STACK_LINE(217)
	this->next = null();
	HX_STACK_LINE(192)
	this->outer = null();
	HX_STACK_LINE(177)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

//ZPP_AABB_obj::~ZPP_AABB_obj() { }

Dynamic ZPP_AABB_obj::__CreateEmpty() { return  new ZPP_AABB_obj; }
hx::ObjectPtr< ZPP_AABB_obj > ZPP_AABB_obj::__new()
{  hx::ObjectPtr< ZPP_AABB_obj > result = new ZPP_AABB_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABB_obj > result = new ZPP_AABB_obj();
	result->__construct();
	return result;}

Void ZPP_AABB_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","validate",0x2546174e,"zpp_nape.geom.ZPP_AABB.validate","zpp_nape/geom/AABB.hx",181,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(182)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,validate,(void))

Void ZPP_AABB_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","invalidate",0x39b57e33,"zpp_nape.geom.ZPP_AABB.invalidate","zpp_nape/geom/AABB.hx",188,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(189)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,invalidate,(void))

::nape::geom::AABB ZPP_AABB_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","wrapper",0xad1bcd9b,"zpp_nape.geom.ZPP_AABB.wrapper","zpp_nape/geom/AABB.hx",193,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	if (((this->outer == null()))){
		HX_STACK_LINE(195)
		::nape::geom::AABB _g = ::nape::geom::AABB_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		this->outer = _g;
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(197)
			::zpp_nape::geom::ZPP_AABB o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				if (((o->outer != null()))){
					HX_STACK_LINE(206)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(206)
					o->outer = null();
				}
				HX_STACK_LINE(206)
				::nape::geom::Vec2 _g1 = o->wrap_max = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(206)
				o->wrap_min = _g1;
				HX_STACK_LINE(206)
				o->_invalidate = null();
				HX_STACK_LINE(206)
				o->_validate = null();
			}
			HX_STACK_LINE(207)
			o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(208)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
		}
		HX_STACK_LINE(213)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(215)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,wrapper,return )

Void ZPP_AABB_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","alloc",0xfb327abd,"zpp_nape.geom.ZPP_AABB.alloc","zpp_nape/geom/AABB.hx",244,0xbecf4f8d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,alloc,(void))

Void ZPP_AABB_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","free",0x515d2764,"zpp_nape.geom.ZPP_AABB.free","zpp_nape/geom/AABB.hx",247,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		if (((this->outer != null()))){
			HX_STACK_LINE(249)
			this->outer->zpp_inner = null();
			HX_STACK_LINE(250)
			this->outer = null();
		}
		HX_STACK_LINE(252)
		::nape::geom::Vec2 _g = this->wrap_max = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		this->wrap_min = _g;
		HX_STACK_LINE(253)
		this->_invalidate = null();
		HX_STACK_LINE(254)
		this->_validate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,free,(void))

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","copy",0x4f5f466d,"zpp_nape.geom.ZPP_AABB.copy","zpp_nape/geom/AABB.hx",322,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_AABB _g = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			ret = _g;
		}
		else{
			HX_STACK_LINE(322)
			ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
			HX_STACK_LINE(322)
			ret->next = null();
		}
		HX_STACK_LINE(322)
		Dynamic();
	}
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		ret->minx = this->minx;
		HX_STACK_LINE(322)
		ret->miny = this->miny;
		HX_STACK_LINE(322)
		{
		}
	}
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		ret->maxx = this->maxx;
		HX_STACK_LINE(322)
		ret->maxy = this->maxy;
		HX_STACK_LINE(322)
		{
		}
	}
	HX_STACK_LINE(322)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,copy,return )

Float ZPP_AABB_obj::width( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","width",0xa4018c4e,"zpp_nape.geom.ZPP_AABB.width","zpp_nape/geom/AABB.hx",327,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	return (this->maxx - this->minx);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,width,return )

Float ZPP_AABB_obj::height( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","height",0x93a8b09f,"zpp_nape.geom.ZPP_AABB.height","zpp_nape/geom/AABB.hx",332,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	return (this->maxy - this->miny);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,height,return )

Float ZPP_AABB_obj::perimeter( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","perimeter",0x95f07b65,"zpp_nape.geom.ZPP_AABB.perimeter","zpp_nape/geom/AABB.hx",337,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	return ((((this->maxx - this->minx) + ((this->maxy - this->miny)))) * (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,perimeter,return )

::nape::geom::Vec2 ZPP_AABB_obj::getmin( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","getmin",0x34973b74,"zpp_nape.geom.ZPP_AABB.getmin","zpp_nape/geom/AABB.hx",342,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(343)
	if (((this->wrap_min == null()))){
		HX_STACK_LINE(344)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			Float x = this->minx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(344)
			Float y = this->miny;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(344)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(344)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(344)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(344)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(344)
				ret = _g;
			}
			else{
				HX_STACK_LINE(344)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(344)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(344)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(344)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(344)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(344)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(344)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(344)
							ret1->next = null();
						}
						HX_STACK_LINE(344)
						ret1->weak = false;
					}
					HX_STACK_LINE(344)
					ret1->_immutable = immutable;
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						ret1->x = x;
						HX_STACK_LINE(344)
						ret1->y = y;
						HX_STACK_LINE(344)
						{
						}
					}
					HX_STACK_LINE(344)
					_g2 = ret1;
				}
				HX_STACK_LINE(344)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(344)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(344)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(344)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(344)
							_this->_validate();
						}
					}
					HX_STACK_LINE(344)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/AABB.hx",344,0xbecf4f8d)
						{
							HX_STACK_LINE(344)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(344)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(344)
										_this->_validate();
									}
								}
								HX_STACK_LINE(344)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(344)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(344)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(344)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(344)
						{
						}
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(344)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(344)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(344)
				ret;
			}
			HX_STACK_LINE(344)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(344)
			_g5 = ret;
		}
		HX_STACK_LINE(344)
		this->wrap_min = _g5;
		HX_STACK_LINE(345)
		this->wrap_min->zpp_inner->_inuse = true;
		HX_STACK_LINE(346)
		if ((this->_immutable)){
			HX_STACK_LINE(347)
			this->wrap_min->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(350)
			this->wrap_min->zpp_inner->_invalidate = this->mod_min_dyn();
		}
		HX_STACK_LINE(352)
		this->wrap_min->zpp_inner->_validate = this->dom_min_dyn();
	}
	HX_STACK_LINE(354)
	return this->wrap_min;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmin,return )

Void ZPP_AABB_obj::dom_min( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","dom_min",0x4181fa5d,"zpp_nape.geom.ZPP_AABB.dom_min","zpp_nape/geom/AABB.hx",356,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(357)
			this->_validate();
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(359)
			this->wrap_min->zpp_inner->x = this->minx;
			HX_STACK_LINE(360)
			this->wrap_min->zpp_inner->y = this->miny;
			HX_STACK_LINE(369)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_min,(void))

Void ZPP_AABB_obj::mod_min( ::zpp_nape::geom::ZPP_Vec2 min){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","mod_min",0x8927ee9d,"zpp_nape.geom.ZPP_AABB.mod_min","zpp_nape/geom/AABB.hx",380,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_LINE(380)
		if (((bool((min->x != this->minx)) || bool((min->y != this->miny))))){
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(382)
				this->minx = min->x;
				HX_STACK_LINE(383)
				this->miny = min->y;
				HX_STACK_LINE(392)
				{
				}
			}
			HX_STACK_LINE(401)
			if (((this->_invalidate_dyn() != null()))){
				HX_STACK_LINE(401)
				this->_invalidate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_min,(void))

::nape::geom::Vec2 ZPP_AABB_obj::getmax( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","getmax",0x34973486,"zpp_nape.geom.ZPP_AABB.getmax","zpp_nape/geom/AABB.hx",407,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(408)
	if (((this->wrap_max == null()))){
		HX_STACK_LINE(409)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(409)
		{
			HX_STACK_LINE(409)
			Float x = this->maxx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(409)
			Float y = this->maxy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(409)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(409)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(409)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(409)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(409)
				ret = _g;
			}
			else{
				HX_STACK_LINE(409)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(409)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(409)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(409)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(409)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(409)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(409)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(409)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(409)
							ret1->next = null();
						}
						HX_STACK_LINE(409)
						ret1->weak = false;
					}
					HX_STACK_LINE(409)
					ret1->_immutable = immutable;
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						ret1->x = x;
						HX_STACK_LINE(409)
						ret1->y = y;
						HX_STACK_LINE(409)
						{
						}
					}
					HX_STACK_LINE(409)
					_g2 = ret1;
				}
				HX_STACK_LINE(409)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(409)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(409)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(409)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(409)
							_this->_validate();
						}
					}
					HX_STACK_LINE(409)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/AABB.hx",409,0xbecf4f8d)
						{
							HX_STACK_LINE(409)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								{
									HX_STACK_LINE(409)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(409)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(409)
										_this->_validate();
									}
								}
								HX_STACK_LINE(409)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(409)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(409)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(409)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(409)
						{
						}
					}
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(409)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(409)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(409)
				ret;
			}
			HX_STACK_LINE(409)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(409)
			_g5 = ret;
		}
		HX_STACK_LINE(409)
		this->wrap_max = _g5;
		HX_STACK_LINE(410)
		this->wrap_max->zpp_inner->_inuse = true;
		HX_STACK_LINE(411)
		if ((this->_immutable)){
			HX_STACK_LINE(412)
			this->wrap_max->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(415)
			this->wrap_max->zpp_inner->_invalidate = this->mod_max_dyn();
		}
		HX_STACK_LINE(417)
		this->wrap_max->zpp_inner->_validate = this->dom_max_dyn();
	}
	HX_STACK_LINE(419)
	return this->wrap_max;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmax,return )

Void ZPP_AABB_obj::dom_max( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","dom_max",0x4181f36f,"zpp_nape.geom.ZPP_AABB.dom_max","zpp_nape/geom/AABB.hx",421,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(422)
			this->_validate();
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(424)
			this->wrap_max->zpp_inner->x = this->maxx;
			HX_STACK_LINE(425)
			this->wrap_max->zpp_inner->y = this->maxy;
			HX_STACK_LINE(434)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_max,(void))

Void ZPP_AABB_obj::mod_max( ::zpp_nape::geom::ZPP_Vec2 max){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","mod_max",0x8927e7af,"zpp_nape.geom.ZPP_AABB.mod_max","zpp_nape/geom/AABB.hx",445,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(445)
		if (((bool((max->x != this->maxx)) || bool((max->y != this->maxy))))){
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(447)
				this->maxx = max->x;
				HX_STACK_LINE(448)
				this->maxy = max->y;
				HX_STACK_LINE(457)
				{
				}
			}
			HX_STACK_LINE(466)
			if (((this->_invalidate_dyn() != null()))){
				HX_STACK_LINE(466)
				this->_invalidate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_max,(void))

bool ZPP_AABB_obj::intersectX( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersectX",0x96772751,"zpp_nape.geom.ZPP_AABB.intersectX","zpp_nape/geom/AABB.hx",472,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(472)
	return !(((bool((x->minx > this->maxx)) || bool((this->minx > x->maxx)))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectX,return )

bool ZPP_AABB_obj::intersectY( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersectY",0x96772752,"zpp_nape.geom.ZPP_AABB.intersectY","zpp_nape/geom/AABB.hx",477,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(477)
	return !(((bool((x->miny > this->maxy)) || bool((this->miny > x->maxy)))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectY,return )

bool ZPP_AABB_obj::intersect( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersect",0x78109b27,"zpp_nape.geom.ZPP_AABB.intersect","zpp_nape/geom/AABB.hx",482,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(482)
	return (bool((bool((bool((x->miny <= this->maxy)) && bool((this->miny <= x->maxy)))) && bool((x->minx <= this->maxx)))) && bool((this->minx <= x->maxx)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersect,return )

Void ZPP_AABB_obj::combine( ::zpp_nape::geom::ZPP_AABB x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","combine",0x19e522c7,"zpp_nape.geom.ZPP_AABB.combine","zpp_nape/geom/AABB.hx",486,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(487)
		if (((x->minx < this->minx))){
			HX_STACK_LINE(487)
			this->minx = x->minx;
		}
		HX_STACK_LINE(488)
		if (((x->maxx > this->maxx))){
			HX_STACK_LINE(488)
			this->maxx = x->maxx;
		}
		HX_STACK_LINE(489)
		if (((x->miny < this->miny))){
			HX_STACK_LINE(489)
			this->miny = x->miny;
		}
		HX_STACK_LINE(490)
		if (((x->maxy > this->maxy))){
			HX_STACK_LINE(490)
			this->maxy = x->maxy;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,combine,(void))

bool ZPP_AABB_obj::contains( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","contains",0x4cdda0d7,"zpp_nape.geom.ZPP_AABB.contains","zpp_nape/geom/AABB.hx",495,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(495)
	return (bool((bool((bool((x->minx >= this->minx)) && bool((x->miny >= this->miny)))) && bool((x->maxx <= this->maxx)))) && bool((x->maxy <= this->maxy)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,contains,return )

bool ZPP_AABB_obj::containsPoint( ::zpp_nape::geom::ZPP_Vec2 v){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","containsPoint",0x5c3617f9,"zpp_nape.geom.ZPP_AABB.containsPoint","zpp_nape/geom/AABB.hx",500,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(500)
	return (bool((bool((bool((v->x >= this->minx)) && bool((v->x <= this->maxx)))) && bool((v->y >= this->miny)))) && bool((v->y <= this->maxy)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,containsPoint,return )

Void ZPP_AABB_obj::setCombine( ::zpp_nape::geom::ZPP_AABB a,::zpp_nape::geom::ZPP_AABB b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setCombine",0x7f98b3b5,"zpp_nape.geom.ZPP_AABB.setCombine","zpp_nape/geom/AABB.hx",504,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(505)
		if (((a->minx < b->minx))){
			HX_STACK_LINE(505)
			this->minx = a->minx;
		}
		else{
			HX_STACK_LINE(505)
			this->minx = b->minx;
		}
		HX_STACK_LINE(506)
		if (((a->miny < b->miny))){
			HX_STACK_LINE(506)
			this->miny = a->miny;
		}
		else{
			HX_STACK_LINE(506)
			this->miny = b->miny;
		}
		HX_STACK_LINE(507)
		if (((a->maxx > b->maxx))){
			HX_STACK_LINE(507)
			this->maxx = a->maxx;
		}
		else{
			HX_STACK_LINE(507)
			this->maxx = b->maxx;
		}
		HX_STACK_LINE(508)
		if (((a->maxy > b->maxy))){
			HX_STACK_LINE(508)
			this->maxy = a->maxy;
		}
		else{
			HX_STACK_LINE(508)
			this->maxy = b->maxy;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setCombine,(void))

Void ZPP_AABB_obj::setExpand( ::zpp_nape::geom::ZPP_AABB a,Float fatten){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setExpand",0x59b5fde4,"zpp_nape.geom.ZPP_AABB.setExpand","zpp_nape/geom/AABB.hx",512,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(fatten,"fatten")
		HX_STACK_LINE(513)
		this->minx = (a->minx - fatten);
		HX_STACK_LINE(514)
		this->miny = (a->miny - fatten);
		HX_STACK_LINE(515)
		this->maxx = (a->maxx + fatten);
		HX_STACK_LINE(516)
		this->maxy = (a->maxy + fatten);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpand,(void))

Void ZPP_AABB_obj::setExpandPoint( Float x,Float y){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setExpandPoint",0x23904bcc,"zpp_nape.geom.ZPP_AABB.setExpandPoint","zpp_nape/geom/AABB.hx",520,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(521)
		if (((x < this->minx))){
			HX_STACK_LINE(521)
			this->minx = x;
		}
		HX_STACK_LINE(522)
		if (((x > this->maxx))){
			HX_STACK_LINE(522)
			this->maxx = x;
		}
		HX_STACK_LINE(523)
		if (((y < this->miny))){
			HX_STACK_LINE(523)
			this->miny = y;
		}
		HX_STACK_LINE(524)
		if (((y > this->maxy))){
			HX_STACK_LINE(524)
			this->maxy = y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpandPoint,(void))

::String ZPP_AABB_obj::toString( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","toString",0x58d11764,"zpp_nape.geom.ZPP_AABB.toString","zpp_nape/geom/AABB.hx",527,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	return ((((((((HX_CSTRING("{ x: ") + this->minx) + HX_CSTRING(" y: ")) + this->miny) + HX_CSTRING(" w: ")) + ((this->maxx - this->minx))) + HX_CSTRING(" h: ")) + ((this->maxy - this->miny))) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,toString,return )

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::zpp_pool;

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::get( Float minx,Float miny,Float maxx,Float maxy){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","get",0x3f81b4de,"zpp_nape.geom.ZPP_AABB.get","zpp_nape/geom/AABB.hx",258,0xbecf4f8d)
	HX_STACK_ARG(minx,"minx")
	HX_STACK_ARG(miny,"miny")
	HX_STACK_ARG(maxx,"maxx")
	HX_STACK_ARG(maxy,"maxy")
	HX_STACK_LINE(259)
	::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(261)
		if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
			HX_STACK_LINE(262)
			::zpp_nape::geom::ZPP_AABB _g = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			ret = _g;
		}
		else{
			HX_STACK_LINE(268)
			ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
			HX_STACK_LINE(270)
			ret->next = null();
		}
		HX_STACK_LINE(275)
		Dynamic();
	}
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		ret->minx = minx;
		HX_STACK_LINE(279)
		ret->miny = miny;
		HX_STACK_LINE(288)
		{
		}
	}
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		ret->maxx = maxx;
		HX_STACK_LINE(299)
		ret->maxy = maxy;
		HX_STACK_LINE(308)
		{
		}
	}
	HX_STACK_LINE(317)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_AABB_obj,get,return )


ZPP_AABB_obj::ZPP_AABB_obj()
{
}

void ZPP_AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABB);
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(minx,"minx");
	HX_MARK_MEMBER_NAME(miny,"miny");
	HX_MARK_MEMBER_NAME(wrap_min,"wrap_min");
	HX_MARK_MEMBER_NAME(maxx,"maxx");
	HX_MARK_MEMBER_NAME(maxy,"maxy");
	HX_MARK_MEMBER_NAME(wrap_max,"wrap_max");
	HX_MARK_END_CLASS();
}

void ZPP_AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(minx,"minx");
	HX_VISIT_MEMBER_NAME(miny,"miny");
	HX_VISIT_MEMBER_NAME(wrap_min,"wrap_min");
	HX_VISIT_MEMBER_NAME(maxx,"maxx");
	HX_VISIT_MEMBER_NAME(maxy,"maxy");
	HX_VISIT_MEMBER_NAME(wrap_max,"wrap_max");
}

Dynamic ZPP_AABB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"minx") ) { return minx; }
		if (HX_FIELD_EQ(inName,"miny") ) { return miny; }
		if (HX_FIELD_EQ(inName,"maxx") ) { return maxx; }
		if (HX_FIELD_EQ(inName,"maxy") ) { return maxy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height_dyn(); }
		if (HX_FIELD_EQ(inName,"getmin") ) { return getmin_dyn(); }
		if (HX_FIELD_EQ(inName,"getmax") ) { return getmax_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_min") ) { return dom_min_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_min") ) { return mod_min_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_max") ) { return dom_max_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_max") ) { return mod_max_dyn(); }
		if (HX_FIELD_EQ(inName,"combine") ) { return combine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_min") ) { return wrap_min; }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { return wrap_max; }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		if (HX_FIELD_EQ(inName,"perimeter") ) { return perimeter_dyn(); }
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		if (HX_FIELD_EQ(inName,"setExpand") ) { return setExpand_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectX") ) { return intersectX_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectY") ) { return intersectY_dyn(); }
		if (HX_FIELD_EQ(inName,"setCombine") ) { return setCombine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setExpandPoint") ) { return setExpandPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minx") ) { minx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"miny") ) { miny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxx") ) { maxx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxy") ) { maxy=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_min") ) { wrap_min=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { wrap_max=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_immutable"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("minx"));
	outFields->push(HX_CSTRING("miny"));
	outFields->push(HX_CSTRING("wrap_min"));
	outFields->push(HX_CSTRING("maxx"));
	outFields->push(HX_CSTRING("maxy"));
	outFields->push(HX_CSTRING("wrap_max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_AABB_obj,_invalidate),HX_CSTRING("_invalidate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_AABB_obj,_validate),HX_CSTRING("_validate")},
	{hx::fsBool,(int)offsetof(ZPP_AABB_obj,_immutable),HX_CSTRING("_immutable")},
	{hx::fsObject /*::nape::geom::AABB*/ ,(int)offsetof(ZPP_AABB_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_AABB_obj,next),HX_CSTRING("next")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,minx),HX_CSTRING("minx")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,miny),HX_CSTRING("miny")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_AABB_obj,wrap_min),HX_CSTRING("wrap_min")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,maxx),HX_CSTRING("maxx")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,maxy),HX_CSTRING("maxy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_AABB_obj,wrap_max),HX_CSTRING("wrap_max")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_invalidate"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_immutable"),
	HX_CSTRING("validate"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("outer"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("copy"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("perimeter"),
	HX_CSTRING("minx"),
	HX_CSTRING("miny"),
	HX_CSTRING("wrap_min"),
	HX_CSTRING("getmin"),
	HX_CSTRING("dom_min"),
	HX_CSTRING("mod_min"),
	HX_CSTRING("maxx"),
	HX_CSTRING("maxy"),
	HX_CSTRING("wrap_max"),
	HX_CSTRING("getmax"),
	HX_CSTRING("dom_max"),
	HX_CSTRING("mod_max"),
	HX_CSTRING("intersectX"),
	HX_CSTRING("intersectY"),
	HX_CSTRING("intersect"),
	HX_CSTRING("combine"),
	HX_CSTRING("contains"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("setCombine"),
	HX_CSTRING("setExpand"),
	HX_CSTRING("setExpandPoint"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_AABB_obj::__mClass;

void ZPP_AABB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_AABB"), hx::TCanCast< ZPP_AABB_obj> ,sStaticFields,sMemberFields,
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

void ZPP_AABB_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
