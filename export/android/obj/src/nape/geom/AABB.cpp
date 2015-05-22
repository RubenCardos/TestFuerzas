#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
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
namespace nape{
namespace geom{

Void AABB_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("nape.geom.AABB","new",0xaccd397e,"nape.geom.AABB.new","nape/geom/AABB.hx",182,0x3e49ef52)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(186)
	this->zpp_inner = null();
	HX_STACK_LINE(214)
	::zpp_nape::geom::ZPP_AABB _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB _g = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(214)
				ret = _g;
			}
			else{
				HX_STACK_LINE(214)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(214)
				ret->next = null();
			}
			HX_STACK_LINE(214)
			Dynamic();
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->minx = x;
			HX_STACK_LINE(214)
			ret->miny = y;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->maxx = (x + width);
			HX_STACK_LINE(214)
			ret->maxy = (y + height);
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		_g1 = ret;
	}
	HX_STACK_LINE(214)
	this->zpp_inner = _g1;
	HX_STACK_LINE(215)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//AABB_obj::~AABB_obj() { }

Dynamic AABB_obj::__CreateEmpty() { return  new AABB_obj; }
hx::ObjectPtr< AABB_obj > AABB_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< AABB_obj > result = new AABB_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB_obj > result = new AABB_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::nape::geom::AABB AABB_obj::copy( ){
	HX_STACK_FRAME("nape.geom.AABB","copy",0x7f874cd7,"nape.geom.AABB.copy","nape/geom/AABB.hx",226,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(227)
			_this->_validate();
		}
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( hx::ObjectPtr< ::nape::geom::AABB_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",228,0x3e49ef52)
			{
				HX_STACK_LINE(228)
				::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_AABB Block( ::zpp_nape::geom::ZPP_AABB _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",228,0x3e49ef52)
						{
							HX_STACK_LINE(228)
							::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_AABB _g = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(228)
									ret = _g;
								}
								else{
									HX_STACK_LINE(228)
									ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
									HX_STACK_LINE(228)
									ret->next = null();
								}
								HX_STACK_LINE(228)
								Dynamic();
							}
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								ret->minx = _this->minx;
								HX_STACK_LINE(228)
								ret->miny = _this->miny;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								ret->maxx = _this->maxx;
								HX_STACK_LINE(228)
								ret->maxy = _this->maxy;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(228)
				return _Function_2_1::Block(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(228)
	return (_Function_1_1::Block(this))->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,copy,return )

::openfl::_v2::geom::Rectangle AABB_obj::toRect( ){
	HX_STACK_FRAME("nape.geom.AABB","toRect",0xa1c355e1,"nape.geom.AABB.toRect","nape/geom/AABB.hx",260,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		_g = this->zpp_inner->minx;
	}
	HX_STACK_LINE(261)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		_g1 = this->zpp_inner->miny;
	}
	HX_STACK_LINE(261)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			_g2 = (_this->maxx - _this->minx);
		}
	}
	HX_STACK_LINE(261)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			_g3 = (_this->maxy - _this->miny);
		}
	}
	HX_STACK_LINE(261)
	return ::openfl::_v2::geom::Rectangle_obj::__new(_g,_g1,_g2,_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toRect,return )

::nape::geom::Vec2 AABB_obj::get_min( ){
	HX_STACK_FRAME("nape.geom.AABB","get_min",0x5caf2a47,"nape.geom.AABB.get_min","nape/geom/AABB.hx",281,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	return this->zpp_inner->getmin();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_min,return )

::nape::geom::Vec2 AABB_obj::set_min( ::nape::geom::Vec2 min){
	HX_STACK_FRAME("nape.geom.AABB","set_min",0x4fb0bb53,"nape.geom.AABB.set_min","nape/geom/AABB.hx",283,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		::nape::geom::Vec2 _this = this->zpp_inner->getmin();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(309)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				x = min->zpp_inner->x;
			}
			HX_STACK_LINE(309)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				y = min->zpp_inner->y;
			}
			HX_STACK_LINE(309)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",309,0x3e49ef52)
					{
						HX_STACK_LINE(309)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(309)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(309)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(309)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(309)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(309)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(309)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(309)
					{
					}
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(309)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(309)
			ret = _this;
		}
		HX_STACK_LINE(309)
		if ((min->zpp_inner->weak)){
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::zpp_nape::geom::ZPP_Vec2 inner = min->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(309)
				min->zpp_inner->outer = null();
				HX_STACK_LINE(309)
				min->zpp_inner = null();
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::nape::geom::Vec2 o = min;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(309)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(309)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						if (((o->outer != null()))){
							HX_STACK_LINE(309)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(309)
							o->outer = null();
						}
						HX_STACK_LINE(309)
						o->_isimmutable = null();
						HX_STACK_LINE(309)
						o->_validate = null();
						HX_STACK_LINE(309)
						o->_invalidate = null();
					}
					HX_STACK_LINE(309)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(309)
			true;
		}
		else{
			HX_STACK_LINE(309)
			false;
		}
		HX_STACK_LINE(309)
		ret;
	}
	HX_STACK_LINE(311)
	return this->zpp_inner->getmin();
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_min,return )

::nape::geom::Vec2 AABB_obj::get_max( ){
	HX_STACK_FRAME("nape.geom.AABB","get_max",0x5caf2359,"nape.geom.AABB.get_max","nape/geom/AABB.hx",330,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	return this->zpp_inner->getmax();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_max,return )

::nape::geom::Vec2 AABB_obj::set_max( ::nape::geom::Vec2 max){
	HX_STACK_FRAME("nape.geom.AABB","set_max",0x4fb0b465,"nape.geom.AABB.set_max","nape/geom/AABB.hx",332,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(358)
	{
		HX_STACK_LINE(358)
		::nape::geom::Vec2 _this = this->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(358)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				x = max->zpp_inner->x;
			}
			HX_STACK_LINE(358)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				y = max->zpp_inner->y;
			}
			HX_STACK_LINE(358)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",358,0x3e49ef52)
					{
						HX_STACK_LINE(358)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(358)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(358)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(358)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(358)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(358)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(358)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(358)
					{
					}
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(358)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(358)
			ret = _this;
		}
		HX_STACK_LINE(358)
		if ((max->zpp_inner->weak)){
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::zpp_nape::geom::ZPP_Vec2 inner = max->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(358)
				max->zpp_inner->outer = null();
				HX_STACK_LINE(358)
				max->zpp_inner = null();
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::nape::geom::Vec2 o = max;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(358)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(358)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						if (((o->outer != null()))){
							HX_STACK_LINE(358)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(358)
							o->outer = null();
						}
						HX_STACK_LINE(358)
						o->_isimmutable = null();
						HX_STACK_LINE(358)
						o->_validate = null();
						HX_STACK_LINE(358)
						o->_invalidate = null();
					}
					HX_STACK_LINE(358)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(358)
			true;
		}
		else{
			HX_STACK_LINE(358)
			false;
		}
		HX_STACK_LINE(358)
		ret;
	}
	HX_STACK_LINE(360)
	return this->zpp_inner->getmax();
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_max,return )

Float AABB_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.AABB","get_x",0x5ddd11ed,"nape.geom.AABB.get_x","nape/geom/AABB.hx",370,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(371)
			_this->_validate();
		}
	}
	HX_STACK_LINE(372)
	return this->zpp_inner->minx;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_x,return )

Float AABB_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.AABB","set_x",0x46ac07f9,"nape.geom.AABB.set_x","nape/geom/AABB.hx",374,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(381)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(381)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(381)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(381)
					_this->_validate();
				}
			}
			HX_STACK_LINE(381)
			_g = this->zpp_inner->minx;
		}
		HX_STACK_LINE(381)
		if (((_g != x))){
			HX_STACK_LINE(385)
			hx::AddEq(this->zpp_inner->maxx,(x - this->zpp_inner->minx));
			HX_STACK_LINE(386)
			this->zpp_inner->minx = x;
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(387)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(390)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(390)
			_this->_validate();
		}
	}
	HX_STACK_LINE(390)
	return this->zpp_inner->minx;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_x,return )

Float AABB_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.AABB","get_y",0x5ddd11ee,"nape.geom.AABB.get_y","nape/geom/AABB.hx",400,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(401)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(401)
			_this->_validate();
		}
	}
	HX_STACK_LINE(402)
	return this->zpp_inner->miny;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_y,return )

Float AABB_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.AABB","set_y",0x46ac07fa,"nape.geom.AABB.set_y","nape/geom/AABB.hx",404,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(405)
	{
		HX_STACK_LINE(411)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(411)
					_this->_validate();
				}
			}
			HX_STACK_LINE(411)
			_g = this->zpp_inner->miny;
		}
		HX_STACK_LINE(411)
		if (((_g != y))){
			HX_STACK_LINE(415)
			hx::AddEq(this->zpp_inner->maxy,(y - this->zpp_inner->miny));
			HX_STACK_LINE(416)
			this->zpp_inner->miny = y;
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(417)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(420)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(420)
			_this->_validate();
		}
	}
	HX_STACK_LINE(420)
	return this->zpp_inner->miny;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_y,return )

Float AABB_obj::get_width( ){
	HX_STACK_FRAME("nape.geom.AABB","get_width",0x087e25fb,"nape.geom.AABB.get_width","nape/geom/AABB.hx",430,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(431)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(431)
			_this->_validate();
		}
	}
	HX_STACK_LINE(432)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(432)
	return (_this->maxx - _this->minx);
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_width,return )

Float AABB_obj::set_width( Float width){
	HX_STACK_FRAME("nape.geom.AABB","set_width",0xebcf1207,"nape.geom.AABB.set_width","nape/geom/AABB.hx",434,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(441)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(441)
					_this->_validate();
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				_g = (_this->maxx - _this->minx);
			}
		}
		HX_STACK_LINE(441)
		if (((_g != width))){
			HX_STACK_LINE(450)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(450)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(450)
						_this->_validate();
					}
				}
				HX_STACK_LINE(450)
				_g1 = this->zpp_inner->minx;
			}
			HX_STACK_LINE(450)
			Float _g2 = (_g1 + width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(450)
			this->zpp_inner->maxx = _g2;
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(451)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(454)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(454)
			_this->_validate();
		}
	}
	HX_STACK_LINE(454)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(454)
	return (_this->maxx - _this->minx);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_width,return )

Float AABB_obj::get_height( ){
	HX_STACK_FRAME("nape.geom.AABB","get_height",0x1c328e52,"nape.geom.AABB.get_height","nape/geom/AABB.hx",464,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(465)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(465)
			_this->_validate();
		}
	}
	HX_STACK_LINE(466)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(466)
	return (_this->maxy - _this->miny);
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_height,return )

Float AABB_obj::set_height( Float height){
	HX_STACK_FRAME("nape.geom.AABB","set_height",0x1fb02cc6,"nape.geom.AABB.set_height","nape/geom/AABB.hx",468,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(469)
	{
		HX_STACK_LINE(475)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(475)
					_this->_validate();
				}
			}
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				_g = (_this->maxy - _this->miny);
			}
		}
		HX_STACK_LINE(475)
		if (((_g != height))){
			HX_STACK_LINE(484)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(484)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(484)
						_this->_validate();
					}
				}
				HX_STACK_LINE(484)
				_g1 = this->zpp_inner->miny;
			}
			HX_STACK_LINE(484)
			Float _g2 = (_g1 + height);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(484)
			this->zpp_inner->maxy = _g2;
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(485)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(485)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(488)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(488)
			_this->_validate();
		}
	}
	HX_STACK_LINE(488)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(488)
	return (_this->maxy - _this->miny);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_height,return )

::String AABB_obj::toString( ){
	HX_STACK_FRAME("nape.geom.AABB","toString",0x2ced9ace,"nape.geom.AABB.toString","nape/geom/AABB.hx",493,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(494)
			_this->_validate();
		}
	}
	HX_STACK_LINE(495)
	return this->zpp_inner->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toString,return )

::nape::geom::AABB AABB_obj::fromRect( ::openfl::_v2::geom::Rectangle rect){
	HX_STACK_FRAME("nape.geom.AABB","fromRect",0x9df1e5d0,"nape.geom.AABB.fromRect","nape/geom/AABB.hx",249,0x3e49ef52)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(249)
	return ::nape::geom::AABB_obj::__new(rect->x,rect->y,rect->width,rect->height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,fromRect,return )


AABB_obj::AABB_obj()
{
}

void AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic AABB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toRect") ) { return toRect_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromRect") ) { return fromRect_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { return set_max(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromRect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(AABB_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("copy"),
	HX_CSTRING("toRect"),
	HX_CSTRING("get_min"),
	HX_CSTRING("set_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("set_max"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#endif

Class AABB_obj::__mClass;

void AABB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.AABB"), hx::TCanCast< AABB_obj> ,sStaticFields,sMemberFields,
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

void AABB_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
