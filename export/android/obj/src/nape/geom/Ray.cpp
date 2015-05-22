#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Ray_obj::__construct(::nape::geom::Vec2 origin,::nape::geom::Vec2 direction)
{
HX_STACK_FRAME("nape.geom.Ray","new",0xebb19f50,"nape.geom.Ray.new","nape/geom/Ray.hx",177,0xeaaa9e80)
HX_STACK_THIS(this)
HX_STACK_ARG(origin,"origin")
HX_STACK_ARG(direction,"direction")
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(338)
	::zpp_nape::geom::ZPP_Ray _g = ::zpp_nape::geom::ZPP_Ray_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(338)
	this->zpp_inner = _g;
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			::nape::geom::Vec2 _this = this->zpp_inner->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(339)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					x = origin->zpp_inner->x;
				}
				HX_STACK_LINE(339)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					y = origin->zpp_inner->y;
				}
				HX_STACK_LINE(339)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					_g1 = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",339,0xeaaa9e80)
						{
							HX_STACK_LINE(339)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(339)
							{
								HX_STACK_LINE(339)
								{
									HX_STACK_LINE(339)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(339)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(339)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(339)
								_g2 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(339)
							return (_g2 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(339)
				if ((!(((  (((_g1 == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(339)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(339)
						{
						}
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(339)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(339)
				ret = _this;
			}
			HX_STACK_LINE(339)
			if ((origin->zpp_inner->weak)){
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					::zpp_nape::geom::ZPP_Vec2 inner = origin->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(339)
					origin->zpp_inner->outer = null();
					HX_STACK_LINE(339)
					origin->zpp_inner = null();
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::nape::geom::Vec2 o = origin;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(339)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							if (((o->outer != null()))){
								HX_STACK_LINE(339)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(339)
								o->outer = null();
							}
							HX_STACK_LINE(339)
							o->_isimmutable = null();
							HX_STACK_LINE(339)
							o->_validate = null();
							HX_STACK_LINE(339)
							o->_invalidate = null();
						}
						HX_STACK_LINE(339)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(339)
				true;
			}
			else{
				HX_STACK_LINE(339)
				false;
			}
			HX_STACK_LINE(339)
			ret;
		}
		HX_STACK_LINE(339)
		this->zpp_inner->origin;
	}
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::nape::geom::Vec2 _this = this->zpp_inner->direction;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(340)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(340)
				{
					HX_STACK_LINE(340)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						x = direction->zpp_inner->x;
					}
					HX_STACK_LINE(340)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						y = direction->zpp_inner->y;
					}
					HX_STACK_LINE(340)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						_g3 = _this->zpp_inner->x;
					}
					struct _Function_5_1{
						inline static bool Block( Float &y,::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",340,0xeaaa9e80)
							{
								HX_STACK_LINE(340)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(340)
								{
									HX_STACK_LINE(340)
									{
										HX_STACK_LINE(340)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(340)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(340)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(340)
									_g4 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(340)
								return (_g4 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(340)
					if ((!(((  (((_g3 == x))) ? bool(_Function_5_1::Block(y,_this)) : bool(false) ))))){
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(340)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(340)
							{
							}
						}
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(340)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(340)
					ret = _this;
				}
				HX_STACK_LINE(340)
				if ((direction->zpp_inner->weak)){
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(340)
						direction->zpp_inner->outer = null();
						HX_STACK_LINE(340)
						direction->zpp_inner = null();
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(340)
							o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(340)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(340)
							{
								HX_STACK_LINE(340)
								if (((o->outer != null()))){
									HX_STACK_LINE(340)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(340)
									o->outer = null();
								}
								HX_STACK_LINE(340)
								o->_isimmutable = null();
								HX_STACK_LINE(340)
								o->_validate = null();
								HX_STACK_LINE(340)
								o->_invalidate = null();
							}
							HX_STACK_LINE(340)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(340)
					true;
				}
				else{
					HX_STACK_LINE(340)
					false;
				}
				HX_STACK_LINE(340)
				ret;
			}
			HX_STACK_LINE(340)
			this->zpp_inner->zip_dir = true;
		}
		HX_STACK_LINE(340)
		this->zpp_inner->direction;
	}
	HX_STACK_LINE(341)
	this->zpp_inner->maxdist = ::Math_obj::POSITIVE_INFINITY;
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::nape::geom::Vec2 origin,::nape::geom::Vec2 direction)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(origin,direction);
	return result;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic Ray_obj::get_userData( ){
	HX_STACK_FRAME("nape.geom.Ray","get_userData",0x2d8b1d2e,"nape.geom.Ray.get_userData","nape/geom/Ray.hx",195,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",197,0xeaaa9e80)
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


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_userData,return )

::nape::geom::Vec2 Ray_obj::get_origin( ){
	HX_STACK_FRAME("nape.geom.Ray","get_origin",0x5ceb78bf,"nape.geom.Ray.get_origin","nape/geom/Ray.hx",210,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return this->zpp_inner->origin;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_origin,return )

::nape::geom::Vec2 Ray_obj::set_origin( ::nape::geom::Vec2 origin){
	HX_STACK_FRAME("nape.geom.Ray","set_origin",0x60691733,"nape.geom.Ray.set_origin","nape/geom/Ray.hx",212,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(origin,"origin")
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::nape::geom::Vec2 _this = this->zpp_inner->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(224)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				x = origin->zpp_inner->x;
			}
			HX_STACK_LINE(224)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				y = origin->zpp_inner->y;
			}
			HX_STACK_LINE(224)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",224,0xeaaa9e80)
					{
						HX_STACK_LINE(224)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(224)
						{
							HX_STACK_LINE(224)
							{
								HX_STACK_LINE(224)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(224)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(224)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(224)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(224)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(224)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(224)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(224)
					{
					}
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(224)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(224)
			ret = _this;
		}
		HX_STACK_LINE(224)
		if ((origin->zpp_inner->weak)){
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::zpp_nape::geom::ZPP_Vec2 inner = origin->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(224)
				origin->zpp_inner->outer = null();
				HX_STACK_LINE(224)
				origin->zpp_inner = null();
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::nape::geom::Vec2 o = origin;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(224)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(224)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						if (((o->outer != null()))){
							HX_STACK_LINE(224)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(224)
							o->outer = null();
						}
						HX_STACK_LINE(224)
						o->_isimmutable = null();
						HX_STACK_LINE(224)
						o->_validate = null();
						HX_STACK_LINE(224)
						o->_invalidate = null();
					}
					HX_STACK_LINE(224)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(224)
			true;
		}
		else{
			HX_STACK_LINE(224)
			false;
		}
		HX_STACK_LINE(224)
		ret;
	}
	HX_STACK_LINE(226)
	return this->zpp_inner->origin;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_origin,return )

::nape::geom::Vec2 Ray_obj::get_direction( ){
	HX_STACK_FRAME("nape.geom.Ray","get_direction",0x3e141106,"nape.geom.Ray.get_direction","nape/geom/Ray.hx",240,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return this->zpp_inner->direction;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_direction,return )

::nape::geom::Vec2 Ray_obj::set_direction( ::nape::geom::Vec2 direction){
	HX_STACK_FRAME("nape.geom.Ray","set_direction",0x8319f312,"nape.geom.Ray.set_direction","nape/geom/Ray.hx",242,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::nape::geom::Vec2 _this = this->zpp_inner->direction;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(254)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					x = direction->zpp_inner->x;
				}
				HX_STACK_LINE(254)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					y = direction->zpp_inner->y;
				}
				HX_STACK_LINE(254)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					_g = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",254,0xeaaa9e80)
						{
							HX_STACK_LINE(254)
							Float _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(254)
							{
								HX_STACK_LINE(254)
								{
									HX_STACK_LINE(254)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(254)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(254)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(254)
								_g1 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(254)
							return (_g1 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(254)
				if ((!(((  (((_g == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(254)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(254)
						{
						}
					}
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(254)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(254)
				ret = _this;
			}
			HX_STACK_LINE(254)
			if ((direction->zpp_inner->weak)){
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(254)
					direction->zpp_inner->outer = null();
					HX_STACK_LINE(254)
					direction->zpp_inner = null();
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(254)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(254)
						{
							HX_STACK_LINE(254)
							if (((o->outer != null()))){
								HX_STACK_LINE(254)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(254)
								o->outer = null();
							}
							HX_STACK_LINE(254)
							o->_isimmutable = null();
							HX_STACK_LINE(254)
							o->_validate = null();
							HX_STACK_LINE(254)
							o->_invalidate = null();
						}
						HX_STACK_LINE(254)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(254)
				true;
			}
			else{
				HX_STACK_LINE(254)
				false;
			}
			HX_STACK_LINE(254)
			ret;
		}
		HX_STACK_LINE(255)
		this->zpp_inner->zip_dir = true;
	}
	HX_STACK_LINE(257)
	return this->zpp_inner->direction;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_direction,return )

Float Ray_obj::get_maxDistance( ){
	HX_STACK_FRAME("nape.geom.Ray","get_maxDistance",0xeef1cc80,"nape.geom.Ray.get_maxDistance","nape/geom/Ray.hx",273,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	return this->zpp_inner->maxdist;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_maxDistance,return )

Float Ray_obj::set_maxDistance( Float maxDistance){
	HX_STACK_FRAME("nape.geom.Ray","set_maxDistance",0xeabd498c,"nape.geom.Ray.set_maxDistance","nape/geom/Ray.hx",275,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxDistance,"maxDistance")
	HX_STACK_LINE(282)
	this->zpp_inner->maxdist = maxDistance;
	HX_STACK_LINE(284)
	return this->zpp_inner->maxdist;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_maxDistance,return )

::nape::geom::AABB Ray_obj::aabb( ){
	HX_STACK_FRAME("nape.geom.Ray","aabb",0x471ee5b0,"nape.geom.Ray.aabb","nape/geom/Ray.hx",296,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return this->zpp_inner->rayAABB()->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,aabb,return )

::nape::geom::Vec2 Ray_obj::at( Float distance,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Ray","at",0x7f55b403,"nape.geom.Ray.at","nape/geom/Ray.hx",313,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(distance,"distance")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(314)
		this->zpp_inner->validate_dir();
		HX_STACK_LINE(315)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			::nape::geom::Vec2 _this = this->zpp_inner->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(315)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(315)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(315)
			_g = _this->zpp_inner->x;
		}
		HX_STACK_LINE(315)
		Float x = (_g + (distance * this->zpp_inner->dirx));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(315)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			::nape::geom::Vec2 _this = this->zpp_inner->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(315)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(315)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(315)
			_g1 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(315)
		Float y = (_g1 + (distance * this->zpp_inner->diry));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(315)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(315)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(315)
			::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(315)
			ret = _g2;
		}
		else{
			HX_STACK_LINE(315)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(315)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(315)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(315)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(315)
			::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(315)
						ret1 = _g3;
					}
					else{
						HX_STACK_LINE(315)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(315)
						ret1->next = null();
					}
					HX_STACK_LINE(315)
					ret1->weak = false;
				}
				HX_STACK_LINE(315)
				ret1->_immutable = immutable;
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					ret1->x = x;
					HX_STACK_LINE(315)
					ret1->y = y;
					HX_STACK_LINE(315)
					{
					}
				}
				HX_STACK_LINE(315)
				_g4 = ret1;
			}
			HX_STACK_LINE(315)
			ret->zpp_inner = _g4;
			HX_STACK_LINE(315)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(315)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(315)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(315)
						_this->_validate();
					}
				}
				HX_STACK_LINE(315)
				_g5 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",315,0xeaaa9e80)
					{
						HX_STACK_LINE(315)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(315)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(315)
									_this->_validate();
								}
							}
							HX_STACK_LINE(315)
							_g6 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(315)
						return (_g6 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(315)
			if ((!(((  (((_g5 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(315)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(315)
					{
					}
				}
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(315)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(315)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(315)
			ret;
		}
		HX_STACK_LINE(315)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(315)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,at,return )

::nape::geom::Ray Ray_obj::copy( ){
	HX_STACK_FRAME("nape.geom.Ray","copy",0x487bfec5,"nape.geom.Ray.copy","nape/geom/Ray.hx",350,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	::nape::geom::Ray ret = ::nape::geom::Ray_obj::__new(this->zpp_inner->origin,this->zpp_inner->direction);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		ret->zpp_inner->maxdist = this->zpp_inner->maxdist;
		HX_STACK_LINE(352)
		ret->zpp_inner->maxdist;
	}
	HX_STACK_LINE(353)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,copy,return )

::nape::geom::Ray Ray_obj::fromSegment( ::nape::geom::Vec2 start,::nape::geom::Vec2 end){
	HX_STACK_FRAME("nape.geom.Ray","fromSegment",0x543d7259,"nape.geom.Ray.fromSegment","nape/geom/Ray.hx",370,0xeaaa9e80)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(389)
	::nape::geom::Vec2 dir = end->sub(start,true);		HX_STACK_VAR(dir,"dir");
	HX_STACK_LINE(390)
	::nape::geom::Ray ret = ::nape::geom::Ray_obj::__new(start,dir);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			Float ax;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				ax = start->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float ay;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				ay = start->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			Float bx;		HX_STACK_VAR(bx,"bx");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				bx = end->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float by;		HX_STACK_VAR(by,"by");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				by = end->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(391)
			Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				dx = (ax - bx);
				HX_STACK_LINE(391)
				dy = (ay - by);
			}
			HX_STACK_LINE(391)
			_g = ((dx * dx) + (dy * dy));
		}
		HX_STACK_LINE(391)
		Float maxDistance = ::Math_obj::sqrt(_g);		HX_STACK_VAR(maxDistance,"maxDistance");
		HX_STACK_LINE(391)
		ret->zpp_inner->maxdist = maxDistance;
		HX_STACK_LINE(391)
		ret->zpp_inner->maxdist;
	}
	HX_STACK_LINE(392)
	if ((start->zpp_inner->weak)){
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(396)
			start->zpp_inner->outer = null();
			HX_STACK_LINE(396)
			start->zpp_inner = null();
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(396)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(396)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					if (((o->outer != null()))){
						HX_STACK_LINE(396)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(396)
						o->outer = null();
					}
					HX_STACK_LINE(396)
					o->_isimmutable = null();
					HX_STACK_LINE(396)
					o->_validate = null();
					HX_STACK_LINE(396)
					o->_invalidate = null();
				}
				HX_STACK_LINE(396)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(397)
		true;
	}
	else{
		HX_STACK_LINE(400)
		false;
	}
	HX_STACK_LINE(403)
	if ((end->zpp_inner->weak)){
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(407)
			end->zpp_inner->outer = null();
			HX_STACK_LINE(407)
			end->zpp_inner = null();
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(407)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(407)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					if (((o->outer != null()))){
						HX_STACK_LINE(407)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(407)
						o->outer = null();
					}
					HX_STACK_LINE(407)
					o->_isimmutable = null();
					HX_STACK_LINE(407)
					o->_validate = null();
					HX_STACK_LINE(407)
					o->_invalidate = null();
				}
				HX_STACK_LINE(407)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(407)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(408)
		true;
	}
	else{
		HX_STACK_LINE(411)
		false;
	}
	HX_STACK_LINE(414)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,fromSegment,return )


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Ray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return get_origin(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSegment") ) { return fromSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"maxDistance") ) { return get_maxDistance(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_maxDistance") ) { return get_maxDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxDistance") ) { return set_maxDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return set_origin(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Ray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxDistance") ) { return set_maxDistance(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("maxDistance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromSegment"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Ray*/ ,(int)offsetof(Ray_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_origin"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("get_maxDistance"),
	HX_CSTRING("set_maxDistance"),
	HX_CSTRING("aabb"),
	HX_CSTRING("at"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Ray"), hx::TCanCast< Ray_obj> ,sStaticFields,sMemberFields,
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

void Ray_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
