#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("nape.geom.Vec2","new",0x3252e95c,"nape.geom.Vec2.new","nape/geom/Vec2.hx",204,0x020b6534)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(212)
	this->zpp_pool = null();
	HX_STACK_LINE(208)
	this->zpp_inner = null();
	HX_STACK_LINE(406)
	::zpp_nape::geom::ZPP_Vec2 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(406)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 _g = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(406)
				ret = _g;
			}
			else{
				HX_STACK_LINE(406)
				ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(406)
				ret->next = null();
			}
			HX_STACK_LINE(406)
			ret->weak = false;
		}
		HX_STACK_LINE(406)
		ret->_immutable = immutable;
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			ret->x = x;
			HX_STACK_LINE(406)
			ret->y = y;
			HX_STACK_LINE(406)
			{
			}
		}
		HX_STACK_LINE(406)
		_g1 = ret;
	}
	HX_STACK_LINE(406)
	this->zpp_inner = _g1;
	HX_STACK_LINE(407)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Vec2_obj::~Vec2_obj() { }

Dynamic Vec2_obj::__CreateEmpty() { return  new Vec2_obj; }
hx::ObjectPtr< Vec2_obj > Vec2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Vec2_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec2","dispose",0x0fb1c79b,"nape.geom.Vec2.dispose","nape/geom/Vec2.hx",328,0x020b6534)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 inner = this->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(341)
		this->zpp_inner->outer = null();
		HX_STACK_LINE(342)
		this->zpp_inner = null();
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(344)
			::nape::geom::Vec2 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(360)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(361)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				if (((o->outer != null()))){
					HX_STACK_LINE(380)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(380)
					o->outer = null();
				}
				HX_STACK_LINE(380)
				o->_isimmutable = null();
				HX_STACK_LINE(380)
				o->_validate = null();
				HX_STACK_LINE(380)
				o->_invalidate = null();
			}
			HX_STACK_LINE(381)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(382)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,dispose,(void))

::nape::geom::Vec2 Vec2_obj::copy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","copy",0xcefb7f39,"nape.geom.Vec2.copy","nape/geom/Vec2.hx",431,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(431)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(431)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(431)
					_this->_validate();
				}
			}
			HX_STACK_LINE(431)
			x = this->zpp_inner->x;
		}
		HX_STACK_LINE(431)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(431)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(431)
					_this->_validate();
				}
			}
			HX_STACK_LINE(431)
			y = this->zpp_inner->y;
		}
		HX_STACK_LINE(431)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(431)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(431)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(431)
			ret = _g;
		}
		else{
			HX_STACK_LINE(431)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(431)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(431)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(431)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(431)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(431)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(431)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(431)
						ret1->next = null();
					}
					HX_STACK_LINE(431)
					ret1->weak = false;
				}
				HX_STACK_LINE(431)
				ret1->_immutable = immutable;
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					ret1->x = x;
					HX_STACK_LINE(431)
					ret1->y = y;
					HX_STACK_LINE(431)
					{
					}
				}
				HX_STACK_LINE(431)
				_g2 = ret1;
			}
			HX_STACK_LINE(431)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(431)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(431)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(431)
						_this->_validate();
					}
				}
				HX_STACK_LINE(431)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",431,0x020b6534)
					{
						HX_STACK_LINE(431)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							{
								HX_STACK_LINE(431)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(431)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(431)
									_this->_validate();
								}
							}
							HX_STACK_LINE(431)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(431)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(431)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(431)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(431)
					{
					}
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(431)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(431)
			ret;
		}
		HX_STACK_LINE(431)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(431)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,copy,return )

::openfl::_v2::geom::Point Vec2_obj::toPoint( ::openfl::_v2::geom::Point output){
	HX_STACK_FRAME("nape.geom.Vec2","toPoint",0xe77947d1,"nape.geom.Vec2.toPoint","nape/geom/Vec2.hx",475,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(481)
	if (((output == null()))){
		HX_STACK_LINE(481)
		::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(481)
		output = _g;
	}
	HX_STACK_LINE(482)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(482)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(482)
				_this->_validate();
			}
		}
		HX_STACK_LINE(482)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(482)
	output->x = _g1;
	HX_STACK_LINE(483)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(483)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(483)
				_this->_validate();
			}
		}
		HX_STACK_LINE(483)
		_g2 = this->zpp_inner->y;
	}
	HX_STACK_LINE(483)
	output->y = _g2;
	HX_STACK_LINE(484)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,toPoint,return )

Float Vec2_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_x",0x9414f54b,"nape.geom.Vec2.get_x","nape/geom/Vec2.hx",523,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(529)
			_this->_validate();
		}
	}
	HX_STACK_LINE(530)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_x,return )

Float Vec2_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec2","set_x",0x7ce3eb57,"nape.geom.Vec2.set_x","nape/geom/Vec2.hx",532,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(540)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(540)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(540)
					_this->_validate();
				}
			}
			HX_STACK_LINE(540)
			_g = this->zpp_inner->x;
		}
		HX_STACK_LINE(540)
		if (((_g != x))){
			HX_STACK_LINE(546)
			this->zpp_inner->x = x;
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(547)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(547)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(550)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(550)
			_this->_validate();
		}
	}
	HX_STACK_LINE(550)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_x,return )

Float Vec2_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_y",0x9414f54c,"nape.geom.Vec2.get_y","nape/geom/Vec2.hx",559,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(565)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(565)
			_this->_validate();
		}
	}
	HX_STACK_LINE(566)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_y,return )

Float Vec2_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec2","set_y",0x7ce3eb58,"nape.geom.Vec2.set_y","nape/geom/Vec2.hx",568,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(576)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(576)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(576)
					_this->_validate();
				}
			}
			HX_STACK_LINE(576)
			_g = this->zpp_inner->y;
		}
		HX_STACK_LINE(576)
		if (((_g != y))){
			HX_STACK_LINE(582)
			this->zpp_inner->y = y;
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(583)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(586)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(586)
			_this->_validate();
		}
	}
	HX_STACK_LINE(586)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_y,return )

Float Vec2_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_length",0x33cb4333,"nape.geom.Vec2.get_length","nape/geom/Vec2.hx",599,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(605)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(605)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(605)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(605)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(605)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		_g4 = this->zpp_inner->y;
	}
	HX_STACK_LINE(605)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(605)
	Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(605)
	return ::Math_obj::sqrt(_g6);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_length,return )

Float Vec2_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec2","set_length",0x3748e1a7,"nape.geom.Vec2.set_length","nape/geom/Vec2.hx",607,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(624)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(624)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				_g1 = this->zpp_inner->x;
			}
			HX_STACK_LINE(624)
			Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(624)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				_g3 = this->zpp_inner->y;
			}
			HX_STACK_LINE(624)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				_g4 = this->zpp_inner->y;
			}
			HX_STACK_LINE(624)
			Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(624)
			Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(624)
			Float _g7 = ::Math_obj::sqrt(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(624)
			Float t = (Float(length) / Float(_g7));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::nape::geom::Vec2 _g8 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(633)
				{
					HX_STACK_LINE(633)
					Float _g81;		HX_STACK_VAR(_g81,"_g81");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						_g81 = _g8->zpp_inner->x;
					}
					HX_STACK_LINE(633)
					Float x = (_g81 * t);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						Float _g9;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(633)
									_this->_validate();
								}
							}
							HX_STACK_LINE(633)
							_g9 = _g8->zpp_inner->x;
						}
						HX_STACK_LINE(633)
						if (((_g9 != x))){
							HX_STACK_LINE(633)
							_g8->zpp_inner->x = x;
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(633)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						_g8->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::nape::geom::Vec2 _g8 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						_g10 = _g8->zpp_inner->y;
					}
					HX_STACK_LINE(634)
					Float y = (_g10 * t);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						Float _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(634)
									_this->_validate();
								}
							}
							HX_STACK_LINE(634)
							_g11 = _g8->zpp_inner->y;
						}
						HX_STACK_LINE(634)
						if (((_g11 != y))){
							HX_STACK_LINE(634)
							_g8->zpp_inner->y = y;
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(634)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						_g8->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(636)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(636)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(638)
	Float _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(638)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(638)
				_this->_validate();
			}
		}
		HX_STACK_LINE(638)
		_g12 = this->zpp_inner->x;
	}
	HX_STACK_LINE(638)
	Float _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(638)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(638)
				_this->_validate();
			}
		}
		HX_STACK_LINE(638)
		_g13 = this->zpp_inner->x;
	}
	HX_STACK_LINE(638)
	Float _g14 = (_g12 * _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(638)
	Float _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(638)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(638)
				_this->_validate();
			}
		}
		HX_STACK_LINE(638)
		_g15 = this->zpp_inner->y;
	}
	HX_STACK_LINE(638)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(638)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(638)
				_this->_validate();
			}
		}
		HX_STACK_LINE(638)
		_g16 = this->zpp_inner->y;
	}
	HX_STACK_LINE(638)
	Float _g17 = (_g15 * _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(638)
	Float _g18 = (_g14 + _g17);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(638)
	return ::Math_obj::sqrt(_g18);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_length,return )

Float Vec2_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec2","lsq",0x32517106,"nape.geom.Vec2.lsq","nape/geom/Vec2.hx",650,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(656)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(656)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(656)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(656)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(656)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g4 = this->zpp_inner->y;
	}
	HX_STACK_LINE(656)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(656)
	return (_g2 + _g5);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,lsq,return )

::nape::geom::Vec2 Vec2_obj::set( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","set",0x3256b49e,"nape.geom.Vec2.set","nape/geom/Vec2.hx",671,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(688)
	::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			x = vector->zpp_inner->x;
		}
		HX_STACK_LINE(688)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			y = vector->zpp_inner->y;
		}
		HX_STACK_LINE(688)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			_g = this->zpp_inner->x;
		}
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",688,0x020b6534)
				{
					HX_STACK_LINE(688)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(688)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(688)
								_this->_validate();
							}
						}
						HX_STACK_LINE(688)
						_g1 = __this->zpp_inner->y;
					}
					HX_STACK_LINE(688)
					return (_g1 == y);
				}
				return null();
			}
		};
		HX_STACK_LINE(688)
		if ((!(((  (((_g == x))) ? bool(_Function_2_1::Block(this,y)) : bool(false) ))))){
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				this->zpp_inner->x = x;
				HX_STACK_LINE(688)
				this->zpp_inner->y = y;
				HX_STACK_LINE(688)
				{
				}
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(688)
					_this->_invalidate(_this);
				}
			}
		}
		HX_STACK_LINE(688)
		ret = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(689)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(693)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(693)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(693)
			vector->zpp_inner = null();
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(693)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(693)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					if (((o->outer != null()))){
						HX_STACK_LINE(693)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(693)
						o->outer = null();
					}
					HX_STACK_LINE(693)
					o->_isimmutable = null();
					HX_STACK_LINE(693)
					o->_validate = null();
					HX_STACK_LINE(693)
					o->_invalidate = null();
				}
				HX_STACK_LINE(693)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(694)
		true;
	}
	else{
		HX_STACK_LINE(697)
		false;
	}
	HX_STACK_LINE(700)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set,return )

::nape::geom::Vec2 Vec2_obj::setxy( Float x,Float y){
	HX_STACK_FRAME("nape.geom.Vec2","setxy",0x7ce4011f,"nape.geom.Vec2.setxy","nape/geom/Vec2.hx",808,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(820)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(820)
	{
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(820)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(820)
				_this->_validate();
			}
		}
		HX_STACK_LINE(820)
		_g = this->zpp_inner->x;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",820,0x020b6534)
			{
				HX_STACK_LINE(820)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(820)
				{
					HX_STACK_LINE(820)
					{
						HX_STACK_LINE(820)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(820)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(820)
							_this->_validate();
						}
					}
					HX_STACK_LINE(820)
					_g1 = __this->zpp_inner->y;
				}
				HX_STACK_LINE(820)
				return (_g1 == y);
			}
			return null();
		}
	};
	HX_STACK_LINE(820)
	if ((!(((  (((_g == x))) ? bool(_Function_1_1::Block(this,y)) : bool(false) ))))){
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(822)
			this->zpp_inner->x = x;
			HX_STACK_LINE(823)
			this->zpp_inner->y = y;
			HX_STACK_LINE(832)
			{
			}
		}
		HX_STACK_LINE(841)
		{
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(841)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(841)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(843)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,setxy,return )

Float Vec2_obj::get_angle( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_angle",0x940d9e26,"nape.geom.Vec2.get_angle","nape/geom/Vec2.hx",861,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(867)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(867)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		_g1 = this->zpp_inner->y;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",867,0x020b6534)
			{
				HX_STACK_LINE(867)
				Float _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(867)
				{
					HX_STACK_LINE(867)
					{
						HX_STACK_LINE(867)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(867)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(867)
							_this->_validate();
						}
					}
					HX_STACK_LINE(867)
					_g2 = __this->zpp_inner->x;
				}
				HX_STACK_LINE(867)
				return (_g2 == (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(867)
	if (((  (((_g == _g1))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(868)
		return 0.0;
	}
	else{
		HX_STACK_LINE(871)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			_g3 = this->zpp_inner->y;
		}
		HX_STACK_LINE(871)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			_g4 = this->zpp_inner->x;
		}
		HX_STACK_LINE(871)
		return ::Math_obj::atan2(_g3,_g4);
	}
	HX_STACK_LINE(867)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_angle,return )

Float Vec2_obj::set_angle( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","set_angle",0x775e8a32,"nape.geom.Vec2.set_angle","nape/geom/Vec2.hx",874,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(887)
		Float l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(887)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				_g1 = this->zpp_inner->x;
			}
			HX_STACK_LINE(887)
			Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(887)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				_g3 = this->zpp_inner->y;
			}
			HX_STACK_LINE(887)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				_g4 = this->zpp_inner->y;
			}
			HX_STACK_LINE(887)
			Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(887)
			Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(887)
			l = ::Math_obj::sqrt(_g6);
		}
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			Float _g7 = ::Math_obj::cos(angle);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(888)
			Float x = (l * _g7);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(888)
			Float _g8 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(888)
			Float y = (l * _g8);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(888)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(888)
						_this->_validate();
					}
				}
				HX_STACK_LINE(888)
				_g9 = this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",888,0x020b6534)
					{
						HX_STACK_LINE(888)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(888)
						{
							HX_STACK_LINE(888)
							{
								HX_STACK_LINE(888)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(888)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(888)
									_this->_validate();
								}
							}
							HX_STACK_LINE(888)
							_g10 = __this->zpp_inner->y;
						}
						HX_STACK_LINE(888)
						return (_g10 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(888)
			if ((!(((  (((_g9 == x))) ? bool(_Function_3_1::Block(this,y)) : bool(false) ))))){
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					this->zpp_inner->x = x;
					HX_STACK_LINE(888)
					this->zpp_inner->y = y;
					HX_STACK_LINE(888)
					{
					}
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(888)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(888)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(890)
	Float _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(890)
	{
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(890)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(890)
				_this->_validate();
			}
		}
		HX_STACK_LINE(890)
		_g11 = this->zpp_inner->x;
	}
	HX_STACK_LINE(890)
	Float _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(890)
	{
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(890)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(890)
				_this->_validate();
			}
		}
		HX_STACK_LINE(890)
		_g12 = this->zpp_inner->y;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",890,0x020b6534)
			{
				HX_STACK_LINE(890)
				Float _g13;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					{
						HX_STACK_LINE(890)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(890)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(890)
							_this->_validate();
						}
					}
					HX_STACK_LINE(890)
					_g13 = __this->zpp_inner->x;
				}
				HX_STACK_LINE(890)
				return (_g13 == (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(890)
	if (((  (((_g11 == _g12))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(890)
		return 0.0;
	}
	else{
		HX_STACK_LINE(890)
		Float _g14;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			_g14 = this->zpp_inner->y;
		}
		HX_STACK_LINE(890)
		Float _g15;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			_g15 = this->zpp_inner->x;
		}
		HX_STACK_LINE(890)
		return ::Math_obj::atan2(_g14,_g15);
	}
	HX_STACK_LINE(890)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_angle,return )

::nape::geom::Vec2 Vec2_obj::rotate( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","rotate",0x2631f2df,"nape.geom.Vec2.rotate","nape/geom/Vec2.hx",907,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(919)
	if (((hx::Mod(angle,((::Math_obj::PI * (int)2))) != (int)0))){
		HX_STACK_LINE(920)
		Float ax = ::Math_obj::sin(angle);		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(921)
		Float ay = ::Math_obj::cos(angle);		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(923)
			Float t = ((ay * this->zpp_inner->x) - (ax * this->zpp_inner->y));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(924)
			this->zpp_inner->y = ((this->zpp_inner->x * ax) + (this->zpp_inner->y * ay));
			HX_STACK_LINE(925)
			this->zpp_inner->x = t;
		}
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(927)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(927)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(929)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,rotate,return )

::nape::geom::Vec2 Vec2_obj::reflect( ::nape::geom::Vec2 vec,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","reflect",0x3d8ecb39,"nape.geom.Vec2.reflect","nape/geom/Vec2.hx",942,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_ARG(weak,"weak")
{
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",958,0x020b6534)
				{
					HX_STACK_LINE(958)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(958)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(958)
								_this->_validate();
							}
						}
						HX_STACK_LINE(958)
						x = __this->zpp_inner->x;
					}
					HX_STACK_LINE(958)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(958)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(958)
								_this->_validate();
							}
						}
						HX_STACK_LINE(958)
						y = __this->zpp_inner->y;
					}
					HX_STACK_LINE(958)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(958)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(958)
						::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(958)
						ret = _g;
					}
					else{
						HX_STACK_LINE(958)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(958)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(958)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(958)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(958)
									::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(958)
									ret1 = _g1;
								}
								else{
									HX_STACK_LINE(958)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(958)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(958)
									ret1->next = null();
								}
								HX_STACK_LINE(958)
								ret1->weak = false;
							}
							HX_STACK_LINE(958)
							ret1->_immutable = immutable;
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								ret1->x = x;
								HX_STACK_LINE(958)
								ret1->y = y;
								HX_STACK_LINE(958)
								{
								}
							}
							HX_STACK_LINE(958)
							_g2 = ret1;
						}
						HX_STACK_LINE(958)
						ret->zpp_inner = _g2;
						HX_STACK_LINE(958)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(958)
						Float _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(958)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(958)
									_this->_validate();
								}
							}
							HX_STACK_LINE(958)
							_g3 = ret->zpp_inner->x;
						}
						struct _Function_3_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",958,0x020b6534)
								{
									HX_STACK_LINE(958)
									Float _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(958)
									{
										HX_STACK_LINE(958)
										{
											HX_STACK_LINE(958)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(958)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(958)
												_this->_validate();
											}
										}
										HX_STACK_LINE(958)
										_g4 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(958)
									return (_g4 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(958)
						if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(958)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(958)
								{
								}
							}
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(958)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(958)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(958)
						ret;
					}
					HX_STACK_LINE(958)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(958)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(958)
		::nape::geom::Vec2 normal = (_Function_1_1::Block(this))->normalise();		HX_STACK_VAR(normal,"normal");
		HX_STACK_LINE(959)
		Float _g5 = normal->dot(vec);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(959)
		Float _g6 = ((int)2 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 _g7 = normal->muleq(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 ret = vec->sub(_g7,weak);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(960)
		if ((vec->zpp_inner->weak)){
			HX_STACK_LINE(964)
			{
				HX_STACK_LINE(964)
				::zpp_nape::geom::ZPP_Vec2 inner = vec->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(964)
				vec->zpp_inner->outer = null();
				HX_STACK_LINE(964)
				vec->zpp_inner = null();
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::nape::geom::Vec2 o = vec;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(964)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(964)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						if (((o->outer != null()))){
							HX_STACK_LINE(964)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(964)
							o->outer = null();
						}
						HX_STACK_LINE(964)
						o->_isimmutable = null();
						HX_STACK_LINE(964)
						o->_validate = null();
						HX_STACK_LINE(964)
						o->_invalidate = null();
					}
					HX_STACK_LINE(964)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(965)
			true;
		}
		else{
			HX_STACK_LINE(968)
			false;
		}
		HX_STACK_LINE(971)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,reflect,return )

::nape::geom::Vec2 Vec2_obj::normalise( ){
	HX_STACK_FRAME("nape.geom.Vec2","normalise",0xd9232f70,"nape.geom.Vec2.normalise","nape/geom/Vec2.hx",984,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(996)
	{
		HX_STACK_LINE(997)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			_g = this->zpp_inner->x;
		}
		HX_STACK_LINE(997)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			_g1 = this->zpp_inner->x;
		}
		HX_STACK_LINE(997)
		Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(997)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			_g3 = this->zpp_inner->y;
		}
		HX_STACK_LINE(997)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			_g4 = this->zpp_inner->y;
		}
		HX_STACK_LINE(997)
		Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(997)
		Float d = (_g2 + _g5);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1006)
		Float _g6 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1006)
		Float imag = (Float(1.0) / Float(_g6));		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(1007)
		{
			HX_STACK_LINE(1008)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::nape::geom::Vec2 _g7 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1017)
				{
					HX_STACK_LINE(1017)
					Float _g71;		HX_STACK_VAR(_g71,"_g71");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						_g71 = _g7->zpp_inner->x;
					}
					HX_STACK_LINE(1017)
					Float x = (_g71 * t);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						Float _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1017)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1017)
							_g8 = _g7->zpp_inner->x;
						}
						HX_STACK_LINE(1017)
						if (((_g8 != x))){
							HX_STACK_LINE(1017)
							_g7->zpp_inner->x = x;
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1017)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						_g7->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				::nape::geom::Vec2 _g7 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1018)
				{
					HX_STACK_LINE(1018)
					Float _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						_g9 = _g7->zpp_inner->y;
					}
					HX_STACK_LINE(1018)
					Float y = (_g9 * t);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1018)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1018)
							_g10 = _g7->zpp_inner->y;
						}
						HX_STACK_LINE(1018)
						if (((_g10 != y))){
							HX_STACK_LINE(1018)
							_g7->zpp_inner->y = y;
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1018)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g7->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						_g7->zpp_inner->y;
					}
				}
			}
		}
	}
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1021)
		if (((_this->_invalidate != null()))){
			HX_STACK_LINE(1021)
			_this->_invalidate(_this);
		}
	}
	HX_STACK_LINE(1022)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,normalise,return )

::nape::geom::Vec2 Vec2_obj::unit( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","unit",0xdae08e08,"nape.geom.Vec2.unit","nape/geom/Vec2.hx",1035,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1046)
		Float _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1046)
		{
			HX_STACK_LINE(1046)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(1046)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				_g1 = this->zpp_inner->x;
			}
			HX_STACK_LINE(1046)
			Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1046)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				_g3 = this->zpp_inner->y;
			}
			HX_STACK_LINE(1046)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				_g4 = this->zpp_inner->y;
			}
			HX_STACK_LINE(1046)
			Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1046)
			Float x = (_g2 + _g5);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1046)
			_g6 = ::Math_obj::sqrt(x);
		}
		HX_STACK_LINE(1046)
		Float scale = (Float((int)1) / Float(_g6));		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(1047)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1047)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1047)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1047)
			_g7 = this->zpp_inner->x;
		}
		HX_STACK_LINE(1047)
		Float x = (_g7 * scale);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1047)
		Float _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1047)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1047)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1047)
			_g8 = this->zpp_inner->y;
		}
		HX_STACK_LINE(1047)
		Float y = (_g8 * scale);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1047)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1047)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1047)
			::nape::geom::Vec2 _g9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1047)
			ret = _g9;
		}
		else{
			HX_STACK_LINE(1047)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1047)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1047)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1047)
			::zpp_nape::geom::ZPP_Vec2 _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 _g10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1047)
						ret1 = _g10;
					}
					else{
						HX_STACK_LINE(1047)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1047)
						ret1->next = null();
					}
					HX_STACK_LINE(1047)
					ret1->weak = false;
				}
				HX_STACK_LINE(1047)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					ret1->x = x;
					HX_STACK_LINE(1047)
					ret1->y = y;
					HX_STACK_LINE(1047)
					{
					}
				}
				HX_STACK_LINE(1047)
				_g11 = ret1;
			}
			HX_STACK_LINE(1047)
			ret->zpp_inner = _g11;
			HX_STACK_LINE(1047)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1047)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1047)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1047)
				_g12 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1047,0x020b6534)
					{
						HX_STACK_LINE(1047)
						Float _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							{
								HX_STACK_LINE(1047)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1047)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1047)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1047)
							_g13 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1047)
						return (_g13 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1047)
			if ((!(((  (((_g12 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1047)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1047)
					{
					}
				}
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1047)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1047)
			ret;
		}
		HX_STACK_LINE(1047)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1047)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,unit,return )

::nape::geom::Vec2 Vec2_obj::add( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","add",0x32490b1d,"nape.geom.Vec2.add","nape/geom/Vec2.hx",1066,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1082)
		{
			HX_STACK_LINE(1082)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(1082)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				_g1 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1082)
			Float x = (_g + _g1);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1082)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				_g2 = this->zpp_inner->y;
			}
			HX_STACK_LINE(1082)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				_g3 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1082)
			Float y = (_g2 + _g3);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1082)
			::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(1082)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1082)
				::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1082)
				ret1 = _g4;
			}
			else{
				HX_STACK_LINE(1082)
				ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1082)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
				HX_STACK_LINE(1082)
				ret1->zpp_pool = null();
			}
			HX_STACK_LINE(1082)
			if (((ret1->zpp_inner == null()))){
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 _g5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1082)
							ret2 = _g5;
						}
						else{
							HX_STACK_LINE(1082)
							ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
							HX_STACK_LINE(1082)
							ret2->next = null();
						}
						HX_STACK_LINE(1082)
						ret2->weak = false;
					}
					HX_STACK_LINE(1082)
					ret2->_immutable = immutable;
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret2->x = x;
						HX_STACK_LINE(1082)
						ret2->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					_g6 = ret2;
				}
				HX_STACK_LINE(1082)
				ret1->zpp_inner = _g6;
				HX_STACK_LINE(1082)
				ret1->zpp_inner->outer = ret1;
			}
			else{
				HX_STACK_LINE(1082)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1082)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1082)
					_g7 = ret1->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret1,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1082,0x020b6534)
						{
							HX_STACK_LINE(1082)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1082)
							{
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1082)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1082)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1082)
								_g8 = ret1->zpp_inner->y;
							}
							HX_STACK_LINE(1082)
							return (_g8 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1082)
				if ((!(((  (((_g7 == x))) ? bool(_Function_3_1::Block(ret1,y)) : bool(false) ))))){
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret1->zpp_inner->x = x;
						HX_STACK_LINE(1082)
						ret1->zpp_inner->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1082)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1082)
				ret1;
			}
			HX_STACK_LINE(1082)
			ret1->zpp_inner->weak = weak;
			HX_STACK_LINE(1082)
			ret = ret1;
		}
		HX_STACK_LINE(1083)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1087)
			{
				HX_STACK_LINE(1087)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1087)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1087)
				vector->zpp_inner = null();
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1087)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1087)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						if (((o->outer != null()))){
							HX_STACK_LINE(1087)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1087)
							o->outer = null();
						}
						HX_STACK_LINE(1087)
						o->_isimmutable = null();
						HX_STACK_LINE(1087)
						o->_validate = null();
						HX_STACK_LINE(1087)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1087)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1088)
			true;
		}
		else{
			HX_STACK_LINE(1091)
			false;
		}
		HX_STACK_LINE(1094)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,add,return )

::nape::geom::Vec2 Vec2_obj::addMul( ::nape::geom::Vec2 vector,Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","addMul",0xfa15d8e7,"nape.geom.Vec2.addMul","nape/geom/Vec2.hx",1119,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1135)
		{
			HX_STACK_LINE(1135)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(1135)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				_g1 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1135)
			Float _g2 = (_g1 * scalar);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1135)
			Float x = (_g + _g2);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1135)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				_g3 = this->zpp_inner->y;
			}
			HX_STACK_LINE(1135)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				_g4 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1135)
			Float _g5 = (_g4 * scalar);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1135)
			Float y = (_g3 + _g5);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1135)
			::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(1135)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1135)
				::nape::geom::Vec2 _g6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1135)
				ret1 = _g6;
			}
			else{
				HX_STACK_LINE(1135)
				ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1135)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
				HX_STACK_LINE(1135)
				ret1->zpp_pool = null();
			}
			HX_STACK_LINE(1135)
			if (((ret1->zpp_inner == null()))){
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 _g7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1135)
							ret2 = _g7;
						}
						else{
							HX_STACK_LINE(1135)
							ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
							HX_STACK_LINE(1135)
							ret2->next = null();
						}
						HX_STACK_LINE(1135)
						ret2->weak = false;
					}
					HX_STACK_LINE(1135)
					ret2->_immutable = immutable;
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret2->x = x;
						HX_STACK_LINE(1135)
						ret2->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					_g8 = ret2;
				}
				HX_STACK_LINE(1135)
				ret1->zpp_inner = _g8;
				HX_STACK_LINE(1135)
				ret1->zpp_inner->outer = ret1;
			}
			else{
				HX_STACK_LINE(1135)
				Float _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1135)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1135)
					_g9 = ret1->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret1,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1135,0x020b6534)
						{
							HX_STACK_LINE(1135)
							Float _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1135)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1135)
								_g10 = ret1->zpp_inner->y;
							}
							HX_STACK_LINE(1135)
							return (_g10 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1135)
				if ((!(((  (((_g9 == x))) ? bool(_Function_3_1::Block(ret1,y)) : bool(false) ))))){
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret1->zpp_inner->x = x;
						HX_STACK_LINE(1135)
						ret1->zpp_inner->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1135)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1135)
				ret1;
			}
			HX_STACK_LINE(1135)
			ret1->zpp_inner->weak = weak;
			HX_STACK_LINE(1135)
			ret = ret1;
		}
		HX_STACK_LINE(1136)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1140)
			{
				HX_STACK_LINE(1140)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1140)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1140)
				vector->zpp_inner = null();
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1140)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1140)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						if (((o->outer != null()))){
							HX_STACK_LINE(1140)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1140)
							o->outer = null();
						}
						HX_STACK_LINE(1140)
						o->_isimmutable = null();
						HX_STACK_LINE(1140)
						o->_validate = null();
						HX_STACK_LINE(1140)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1140)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1141)
			true;
		}
		else{
			HX_STACK_LINE(1144)
			false;
		}
		HX_STACK_LINE(1147)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,addMul,return )

::nape::geom::Vec2 Vec2_obj::sub( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","sub",0x3256c27c,"nape.geom.Vec2.sub","nape/geom/Vec2.hx",1165,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(1181)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				_g1 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1181)
			Float x = (_g - _g1);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1181)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				_g2 = this->zpp_inner->y;
			}
			HX_STACK_LINE(1181)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				_g3 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1181)
			Float y = (_g2 - _g3);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1181)
			::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(1181)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1181)
				::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1181)
				ret1 = _g4;
			}
			else{
				HX_STACK_LINE(1181)
				ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1181)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
				HX_STACK_LINE(1181)
				ret1->zpp_pool = null();
			}
			HX_STACK_LINE(1181)
			if (((ret1->zpp_inner == null()))){
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _g5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1181)
							ret2 = _g5;
						}
						else{
							HX_STACK_LINE(1181)
							ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
							HX_STACK_LINE(1181)
							ret2->next = null();
						}
						HX_STACK_LINE(1181)
						ret2->weak = false;
					}
					HX_STACK_LINE(1181)
					ret2->_immutable = immutable;
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret2->x = x;
						HX_STACK_LINE(1181)
						ret2->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					_g6 = ret2;
				}
				HX_STACK_LINE(1181)
				ret1->zpp_inner = _g6;
				HX_STACK_LINE(1181)
				ret1->zpp_inner->outer = ret1;
			}
			else{
				HX_STACK_LINE(1181)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1181)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1181)
					_g7 = ret1->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret1,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1181,0x020b6534)
						{
							HX_STACK_LINE(1181)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1181)
							{
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								_g8 = ret1->zpp_inner->y;
							}
							HX_STACK_LINE(1181)
							return (_g8 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1181)
				if ((!(((  (((_g7 == x))) ? bool(_Function_3_1::Block(ret1,y)) : bool(false) ))))){
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret1->zpp_inner->x = x;
						HX_STACK_LINE(1181)
						ret1->zpp_inner->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1181)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1181)
				ret1;
			}
			HX_STACK_LINE(1181)
			ret1->zpp_inner->weak = weak;
			HX_STACK_LINE(1181)
			ret = ret1;
		}
		HX_STACK_LINE(1182)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1186)
			{
				HX_STACK_LINE(1186)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1186)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1186)
				vector->zpp_inner = null();
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1186)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1186)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						if (((o->outer != null()))){
							HX_STACK_LINE(1186)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1186)
							o->outer = null();
						}
						HX_STACK_LINE(1186)
						o->_isimmutable = null();
						HX_STACK_LINE(1186)
						o->_validate = null();
						HX_STACK_LINE(1186)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1186)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1187)
			true;
		}
		else{
			HX_STACK_LINE(1190)
			false;
		}
		HX_STACK_LINE(1193)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,sub,return )

::nape::geom::Vec2 Vec2_obj::mul( Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","mul",0x32523500,"nape.geom.Vec2.mul","nape/geom/Vec2.hx",1220,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1220)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1220)
		{
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1220)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1220)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1220)
			_g = this->zpp_inner->x;
		}
		HX_STACK_LINE(1220)
		Float x = (_g * scalar);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1220)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1220)
		{
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1220)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1220)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1220)
			_g1 = this->zpp_inner->y;
		}
		HX_STACK_LINE(1220)
		Float y = (_g1 * scalar);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1220)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1220)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1220)
			::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1220)
			ret = _g2;
		}
		else{
			HX_STACK_LINE(1220)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1220)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1220)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1220)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1220)
			::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1220)
						ret1 = _g3;
					}
					else{
						HX_STACK_LINE(1220)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1220)
						ret1->next = null();
					}
					HX_STACK_LINE(1220)
					ret1->weak = false;
				}
				HX_STACK_LINE(1220)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					ret1->x = x;
					HX_STACK_LINE(1220)
					ret1->y = y;
					HX_STACK_LINE(1220)
					{
					}
				}
				HX_STACK_LINE(1220)
				_g4 = ret1;
			}
			HX_STACK_LINE(1220)
			ret->zpp_inner = _g4;
			HX_STACK_LINE(1220)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1220)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1220)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1220)
				_g5 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1220,0x020b6534)
					{
						HX_STACK_LINE(1220)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1220)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1220)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1220)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1220)
							_g6 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1220)
						return (_g6 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1220)
			if ((!(((  (((_g5 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1220)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1220)
					{
					}
				}
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1220)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1220)
			ret;
		}
		HX_STACK_LINE(1220)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1220)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,mul,return )

::nape::geom::Vec2 Vec2_obj::addeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","addeq",0x1ef824c9,"nape.geom.Vec2.addeq","nape/geom/Vec2.hx",1237,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			_g = this->zpp_inner->x;
		}
		HX_STACK_LINE(1254)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			_g1 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1254)
		Float x = (_g + _g1);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1254)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			_g2 = this->zpp_inner->y;
		}
		HX_STACK_LINE(1254)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			_g3 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1254)
		Float y = (_g2 + _g3);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1254)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			_g4 = this->zpp_inner->x;
		}
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1254,0x020b6534)
				{
					HX_STACK_LINE(1254)
					Float _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						{
							HX_STACK_LINE(1254)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1254)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1254)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1254)
						_g5 = __this->zpp_inner->y;
					}
					HX_STACK_LINE(1254)
					return (_g5 == y);
				}
				return null();
			}
		};
		HX_STACK_LINE(1254)
		if ((!(((  (((_g4 == x))) ? bool(_Function_2_1::Block(this,y)) : bool(false) ))))){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				this->zpp_inner->x = x;
				HX_STACK_LINE(1254)
				this->zpp_inner->y = y;
				HX_STACK_LINE(1254)
				{
				}
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(1254)
					_this->_invalidate(_this);
				}
			}
		}
		HX_STACK_LINE(1254)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1255)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1259)
		{
			HX_STACK_LINE(1259)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1259)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1259)
			vector->zpp_inner = null();
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1259)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1259)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					if (((o->outer != null()))){
						HX_STACK_LINE(1259)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1259)
						o->outer = null();
					}
					HX_STACK_LINE(1259)
					o->_isimmutable = null();
					HX_STACK_LINE(1259)
					o->_validate = null();
					HX_STACK_LINE(1259)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1259)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1260)
		true;
	}
	else{
		HX_STACK_LINE(1263)
		false;
	}
	HX_STACK_LINE(1266)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,addeq,return )

::nape::geom::Vec2 Vec2_obj::subeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","subeq",0x8769b1e8,"nape.geom.Vec2.subeq","nape/geom/Vec2.hx",1283,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1300)
	{
		HX_STACK_LINE(1300)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			_g = this->zpp_inner->x;
		}
		HX_STACK_LINE(1300)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			_g1 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1300)
		Float x = (_g - _g1);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1300)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			_g2 = this->zpp_inner->y;
		}
		HX_STACK_LINE(1300)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			_g3 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1300)
		Float y = (_g2 - _g3);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1300)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			_g4 = this->zpp_inner->x;
		}
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1300,0x020b6534)
				{
					HX_STACK_LINE(1300)
					Float _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						{
							HX_STACK_LINE(1300)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1300)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1300)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1300)
						_g5 = __this->zpp_inner->y;
					}
					HX_STACK_LINE(1300)
					return (_g5 == y);
				}
				return null();
			}
		};
		HX_STACK_LINE(1300)
		if ((!(((  (((_g4 == x))) ? bool(_Function_2_1::Block(this,y)) : bool(false) ))))){
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				this->zpp_inner->x = x;
				HX_STACK_LINE(1300)
				this->zpp_inner->y = y;
				HX_STACK_LINE(1300)
				{
				}
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(1300)
					_this->_invalidate(_this);
				}
			}
		}
		HX_STACK_LINE(1300)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1301)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1305)
		{
			HX_STACK_LINE(1305)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1305)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1305)
			vector->zpp_inner = null();
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1305)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1305)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					if (((o->outer != null()))){
						HX_STACK_LINE(1305)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1305)
						o->outer = null();
					}
					HX_STACK_LINE(1305)
					o->_isimmutable = null();
					HX_STACK_LINE(1305)
					o->_validate = null();
					HX_STACK_LINE(1305)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1305)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1306)
		true;
	}
	else{
		HX_STACK_LINE(1309)
		false;
	}
	HX_STACK_LINE(1312)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,subeq,return )

::nape::geom::Vec2 Vec2_obj::muleq( Float scalar){
	HX_STACK_FRAME("nape.geom.Vec2","muleq",0x1309cd6c,"nape.geom.Vec2.muleq","nape/geom/Vec2.hx",1340,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_LINE(1340)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1340)
	{
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1340)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1340)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1340)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(1340)
	Float x = (_g * scalar);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1340)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1340)
	{
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1340)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1340)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1340)
		_g1 = this->zpp_inner->y;
	}
	HX_STACK_LINE(1340)
	Float y = (_g1 * scalar);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(1340)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1340)
	{
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1340)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1340)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1340)
		_g2 = this->zpp_inner->x;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1340,0x020b6534)
			{
				HX_STACK_LINE(1340)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1340)
				{
					HX_STACK_LINE(1340)
					{
						HX_STACK_LINE(1340)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1340)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1340)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1340)
					_g3 = __this->zpp_inner->y;
				}
				HX_STACK_LINE(1340)
				return (_g3 == y);
			}
			return null();
		}
	};
	HX_STACK_LINE(1340)
	if ((!(((  (((_g2 == x))) ? bool(_Function_1_1::Block(this,y)) : bool(false) ))))){
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			this->zpp_inner->x = x;
			HX_STACK_LINE(1340)
			this->zpp_inner->y = y;
			HX_STACK_LINE(1340)
			{
			}
		}
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1340)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(1340)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(1340)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,muleq,return )

Float Vec2_obj::dot( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","dot",0x324b5b85,"nape.geom.Vec2.dot","nape/geom/Vec2.hx",1359,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1375)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(1375)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		_g1 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1375)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1375)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(1375)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		_g4 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1375)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1375)
	Float ret = (_g2 + _g5);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1376)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1380)
		{
			HX_STACK_LINE(1380)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1380)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1380)
			vector->zpp_inner = null();
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1380)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1380)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					if (((o->outer != null()))){
						HX_STACK_LINE(1380)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1380)
						o->outer = null();
					}
					HX_STACK_LINE(1380)
					o->_isimmutable = null();
					HX_STACK_LINE(1380)
					o->_validate = null();
					HX_STACK_LINE(1380)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1380)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1381)
		true;
	}
	else{
		HX_STACK_LINE(1384)
		false;
	}
	HX_STACK_LINE(1387)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,dot,return )

Float Vec2_obj::cross( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","cross",0x4f0eaf7c,"nape.geom.Vec2.cross","nape/geom/Vec2.hx",1419,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1435)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		_g = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1435)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(1435)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1435)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		_g3 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1435)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		_g4 = this->zpp_inner->y;
	}
	HX_STACK_LINE(1435)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1435)
	Float ret = (_g2 - _g5);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1436)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1440)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1440)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1440)
			vector->zpp_inner = null();
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1440)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1440)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					if (((o->outer != null()))){
						HX_STACK_LINE(1440)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1440)
						o->outer = null();
					}
					HX_STACK_LINE(1440)
					o->_isimmutable = null();
					HX_STACK_LINE(1440)
					o->_validate = null();
					HX_STACK_LINE(1440)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1440)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1441)
		true;
	}
	else{
		HX_STACK_LINE(1444)
		false;
	}
	HX_STACK_LINE(1447)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,cross,return )

::nape::geom::Vec2 Vec2_obj::perp( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","perp",0xd78bb077,"nape.geom.Vec2.perp","nape/geom/Vec2.hx",1476,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::nape::geom::Vec2_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1476,0x020b6534)
				{
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1476)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1476)
		Float x = -(_Function_1_1::Block(this));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1476)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1476)
		{
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1476)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1476)
			y = this->zpp_inner->x;
		}
		HX_STACK_LINE(1476)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1476)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1476)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1476)
			ret = _g;
		}
		else{
			HX_STACK_LINE(1476)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1476)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1476)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1476)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1476)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1476)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(1476)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1476)
						ret1->next = null();
					}
					HX_STACK_LINE(1476)
					ret1->weak = false;
				}
				HX_STACK_LINE(1476)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					ret1->x = x;
					HX_STACK_LINE(1476)
					ret1->y = y;
					HX_STACK_LINE(1476)
					{
					}
				}
				HX_STACK_LINE(1476)
				_g2 = ret1;
			}
			HX_STACK_LINE(1476)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(1476)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1476)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1476)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1476)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",1476,0x020b6534)
					{
						HX_STACK_LINE(1476)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1476)
						{
							HX_STACK_LINE(1476)
							{
								HX_STACK_LINE(1476)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1476)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1476)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1476)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1476)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1476)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1476)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1476)
					{
					}
				}
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1476)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1476)
			ret;
		}
		HX_STACK_LINE(1476)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1476)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,perp,return )

::String Vec2_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec2","toString",0xbca7a630,"nape.geom.Vec2.toString","nape/geom/Vec2.hx",1481,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1487)
	{
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1487)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(1487)
			_this->_validate();
		}
	}
	HX_STACK_LINE(1488)
	return this->zpp_inner->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,toString,return )

::nape::geom::Vec2 Vec2_obj::weak( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("nape.geom.Vec2","weak",0xdc2c1ffc,"nape.geom.Vec2.weak","nape/geom/Vec2.hx",257,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(257)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(257)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(257)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			ret = _g;
		}
		else{
			HX_STACK_LINE(257)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(257)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(257)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(257)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(257)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(257)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(257)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(257)
						ret1->next = null();
					}
					HX_STACK_LINE(257)
					ret1->weak = false;
				}
				HX_STACK_LINE(257)
				ret1->_immutable = immutable;
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					ret1->x = x;
					HX_STACK_LINE(257)
					ret1->y = y;
					HX_STACK_LINE(257)
					{
					}
				}
				HX_STACK_LINE(257)
				_g2 = ret1;
			}
			HX_STACK_LINE(257)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(257)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(257)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(257)
						_this->_validate();
					}
				}
				HX_STACK_LINE(257)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",257,0x020b6534)
					{
						HX_STACK_LINE(257)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(257)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(257)
									_this->_validate();
								}
							}
							HX_STACK_LINE(257)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(257)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(257)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(257)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(257)
					{
					}
				}
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(257)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(257)
			ret;
		}
		HX_STACK_LINE(257)
		ret->zpp_inner->weak = true;
		HX_STACK_LINE(257)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,weak,return )

::nape::geom::Vec2 Vec2_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< bool >  __o_weak){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","get",0x324d9992,"nape.geom.Vec2.get","nape/geom/Vec2.hx",273,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(279)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(281)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(282)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(282)
			ret = _g;
		}
		else{
			HX_STACK_LINE(288)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(290)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(300)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(301)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(301)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(301)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(301)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(301)
						ret1->next = null();
					}
					HX_STACK_LINE(301)
					ret1->weak = false;
				}
				HX_STACK_LINE(301)
				ret1->_immutable = immutable;
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					ret1->x = x;
					HX_STACK_LINE(301)
					ret1->y = y;
					HX_STACK_LINE(301)
					{
					}
				}
				HX_STACK_LINE(301)
				_g2 = ret1;
			}
			HX_STACK_LINE(301)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(302)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(305)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",305,0x020b6534)
					{
						HX_STACK_LINE(305)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(305)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(305)
									_this->_validate();
								}
							}
							HX_STACK_LINE(305)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(305)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(305)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(305)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(305)
					{
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(305)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(305)
			ret;
		}
		HX_STACK_LINE(307)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(308)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,get,return )

::nape::geom::Vec2 Vec2_obj::fromPoint( ::openfl::_v2::geom::Point point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","fromPoint",0xa89a9c82,"nape.geom.Vec2.fromPoint","nape/geom/Vec2.hx",461,0x020b6534)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(461)
		Float x = point->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(461)
		Float y = point->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(461)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(461)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(461)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(461)
			ret = _g;
		}
		else{
			HX_STACK_LINE(461)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(461)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(461)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(461)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(461)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(461)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(461)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(461)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(461)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(461)
						ret1->next = null();
					}
					HX_STACK_LINE(461)
					ret1->weak = false;
				}
				HX_STACK_LINE(461)
				ret1->_immutable = immutable;
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					ret1->x = x;
					HX_STACK_LINE(461)
					ret1->y = y;
					HX_STACK_LINE(461)
					{
					}
				}
				HX_STACK_LINE(461)
				_g2 = ret1;
			}
			HX_STACK_LINE(461)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(461)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(461)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(461)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(461)
						_this->_validate();
					}
				}
				HX_STACK_LINE(461)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",461,0x020b6534)
					{
						HX_STACK_LINE(461)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(461)
						{
							HX_STACK_LINE(461)
							{
								HX_STACK_LINE(461)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(461)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(461)
									_this->_validate();
								}
							}
							HX_STACK_LINE(461)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(461)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(461)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(461)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(461)
					{
					}
				}
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(461)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(461)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(461)
			ret;
		}
		HX_STACK_LINE(461)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(461)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,fromPoint,return )

::nape::geom::Vec2 Vec2_obj::fromPolar( Float length,Float angle,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","fromPolar",0xa89cd7f0,"nape.geom.Vec2.fromPolar","nape/geom/Vec2.hx",514,0x020b6534)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(514)
		Float _g = ::Math_obj::cos(angle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		Float x = (length * _g);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(514)
		Float _g1 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(514)
		Float y = (length * _g1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(514)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(514)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(514)
			::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(514)
			ret = _g2;
		}
		else{
			HX_STACK_LINE(514)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(514)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(514)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(514)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(514)
			::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(514)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(514)
						ret1 = _g3;
					}
					else{
						HX_STACK_LINE(514)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(514)
						ret1->next = null();
					}
					HX_STACK_LINE(514)
					ret1->weak = false;
				}
				HX_STACK_LINE(514)
				ret1->_immutable = immutable;
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					ret1->x = x;
					HX_STACK_LINE(514)
					ret1->y = y;
					HX_STACK_LINE(514)
					{
					}
				}
				HX_STACK_LINE(514)
				_g4 = ret1;
			}
			HX_STACK_LINE(514)
			ret->zpp_inner = _g4;
			HX_STACK_LINE(514)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(514)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(514)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(514)
						_this->_validate();
					}
				}
				HX_STACK_LINE(514)
				_g5 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec2.hx",514,0x020b6534)
					{
						HX_STACK_LINE(514)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(514)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(514)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(514)
									_this->_validate();
								}
							}
							HX_STACK_LINE(514)
							_g6 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(514)
						return (_g6 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(514)
			if ((!(((  (((_g5 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(514)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(514)
					{
					}
				}
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(514)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(514)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(514)
			ret;
		}
		HX_STACK_LINE(514)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(514)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,fromPolar,return )

Float Vec2_obj::dsq( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","dsq",0x324b5efe,"nape.geom.Vec2.dsq","nape/geom/Vec2.hx",711,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(725)
	Float ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(725)
	{
		HX_STACK_LINE(725)
		Float ax;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			ax = a->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float ay;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			ay = a->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float bx;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			bx = b->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float by;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			by = b->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(725)
		Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			dx = (ax - bx);
			HX_STACK_LINE(725)
			dy = (ay - by);
		}
		HX_STACK_LINE(725)
		ret = ((dx * dx) + (dy * dy));
	}
	HX_STACK_LINE(726)
	if ((a->zpp_inner->weak)){
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(730)
			a->zpp_inner->outer = null();
			HX_STACK_LINE(730)
			a->zpp_inner = null();
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(730)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(730)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					if (((o->outer != null()))){
						HX_STACK_LINE(730)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(730)
						o->outer = null();
					}
					HX_STACK_LINE(730)
					o->_isimmutable = null();
					HX_STACK_LINE(730)
					o->_validate = null();
					HX_STACK_LINE(730)
					o->_invalidate = null();
				}
				HX_STACK_LINE(730)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(731)
		true;
	}
	else{
		HX_STACK_LINE(734)
		false;
	}
	HX_STACK_LINE(737)
	if ((b->zpp_inner->weak)){
		HX_STACK_LINE(741)
		{
			HX_STACK_LINE(741)
			::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(741)
			b->zpp_inner->outer = null();
			HX_STACK_LINE(741)
			b->zpp_inner = null();
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(741)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(741)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					if (((o->outer != null()))){
						HX_STACK_LINE(741)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(741)
						o->outer = null();
					}
					HX_STACK_LINE(741)
					o->_isimmutable = null();
					HX_STACK_LINE(741)
					o->_validate = null();
					HX_STACK_LINE(741)
					o->_invalidate = null();
				}
				HX_STACK_LINE(741)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(742)
		true;
	}
	else{
		HX_STACK_LINE(745)
		false;
	}
	HX_STACK_LINE(748)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,dsq,return )

Float Vec2_obj::distance( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","distance",0xf03268b9,"nape.geom.Vec2.distance","nape/geom/Vec2.hx",759,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(773)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(773)
	{
		HX_STACK_LINE(773)
		Float ax;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			ax = a->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float ay;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			ay = a->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float bx;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			bx = b->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float by;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			by = b->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(773)
		Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			dx = (ax - bx);
			HX_STACK_LINE(773)
			dy = (ay - by);
		}
		HX_STACK_LINE(773)
		_g = ((dx * dx) + (dy * dy));
	}
	HX_STACK_LINE(773)
	Float ret = ::Math_obj::sqrt(_g);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	if ((a->zpp_inner->weak)){
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(778)
			a->zpp_inner->outer = null();
			HX_STACK_LINE(778)
			a->zpp_inner = null();
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(778)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(778)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					if (((o->outer != null()))){
						HX_STACK_LINE(778)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(778)
						o->outer = null();
					}
					HX_STACK_LINE(778)
					o->_isimmutable = null();
					HX_STACK_LINE(778)
					o->_validate = null();
					HX_STACK_LINE(778)
					o->_invalidate = null();
				}
				HX_STACK_LINE(778)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(779)
		true;
	}
	else{
		HX_STACK_LINE(782)
		false;
	}
	HX_STACK_LINE(785)
	if ((b->zpp_inner->weak)){
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(789)
			b->zpp_inner->outer = null();
			HX_STACK_LINE(789)
			b->zpp_inner = null();
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(789)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(789)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					if (((o->outer != null()))){
						HX_STACK_LINE(789)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(789)
						o->outer = null();
					}
					HX_STACK_LINE(789)
					o->_isimmutable = null();
					HX_STACK_LINE(789)
					o->_validate = null();
					HX_STACK_LINE(789)
					o->_invalidate = null();
				}
				HX_STACK_LINE(789)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(790)
		true;
	}
	else{
		HX_STACK_LINE(793)
		false;
	}
	HX_STACK_LINE(796)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,distance,return )


Vec2_obj::Vec2_obj()
{
}

void Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_END_CLASS();
}

void Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
}

Dynamic Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"dsq") ) { return dsq_dyn(); }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"unit") ) { return unit_dyn(); }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"setxy") ) { return setxy_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"addeq") ) { return addeq_dyn(); }
		if (HX_FIELD_EQ(inName,"subeq") ) { return subeq_dyn(); }
		if (HX_FIELD_EQ(inName,"muleq") ) { return muleq_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"addMul") ) { return addMul_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPoint") ) { return fromPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"fromPolar") ) { return fromPolar_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"normalise") ) { return normalise_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("zpp_pool"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("weak"),
	HX_CSTRING("get"),
	HX_CSTRING("fromPoint"),
	HX_CSTRING("fromPolar"),
	HX_CSTRING("dsq"),
	HX_CSTRING("distance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(Vec2_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Vec2_obj,zpp_pool),HX_CSTRING("zpp_pool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("dispose"),
	HX_CSTRING("copy"),
	HX_CSTRING("toPoint"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_length"),
	HX_CSTRING("lsq"),
	HX_CSTRING("set"),
	HX_CSTRING("setxy"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("rotate"),
	HX_CSTRING("reflect"),
	HX_CSTRING("normalise"),
	HX_CSTRING("unit"),
	HX_CSTRING("add"),
	HX_CSTRING("addMul"),
	HX_CSTRING("sub"),
	HX_CSTRING("mul"),
	HX_CSTRING("addeq"),
	HX_CSTRING("subeq"),
	HX_CSTRING("muleq"),
	HX_CSTRING("dot"),
	HX_CSTRING("cross"),
	HX_CSTRING("perp"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#endif

Class Vec2_obj::__mClass;

void Vec2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec2"), hx::TCanCast< Vec2_obj> ,sStaticFields,sMemberFields,
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

void Vec2_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
