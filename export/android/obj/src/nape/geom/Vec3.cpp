#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec3_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("nape.geom.Vec3","new",0xc5b97ddd,"nape.geom.Vec3.new","nape/geom/Vec3.hx",181,0x02b49bd3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(189)
	this->zpp_pool = null();
	HX_STACK_LINE(185)
	this->zpp_inner = null();
	HX_STACK_LINE(361)
	::zpp_nape::geom::ZPP_Vec3 _g = ::zpp_nape::geom::ZPP_Vec3_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(361)
	this->zpp_inner = _g;
	HX_STACK_LINE(362)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				this->zpp_inner->x = x;
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(365)
							_this->_validate();
						}
					}
					HX_STACK_LINE(365)
					this->zpp_inner->x;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				this->zpp_inner->y = y;
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(366)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(366)
							_this->_validate();
						}
					}
					HX_STACK_LINE(366)
					this->zpp_inner->y;
				}
			}
			HX_STACK_LINE(375)
			{
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			this->zpp_inner->z = z;
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(384)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(384)
						_this->_validate();
					}
				}
				HX_STACK_LINE(384)
				this->zpp_inner->z;
			}
		}
	}
}
;
	return null();
}

//Vec3_obj::~Vec3_obj() { }

Dynamic Vec3_obj::__CreateEmpty() { return  new Vec3_obj; }
hx::ObjectPtr< Vec3_obj > Vec3_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< Vec3_obj > result = new Vec3_obj();
	result->__construct(__o_x,__o_y,__o_z);
	return result;}

Dynamic Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec3_obj > result = new Vec3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float Vec3_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_x",0xbdaa6c0c,"nape.geom.Vec3.get_x","nape/geom/Vec3.hx",225,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(231)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(231)
			_this->_validate();
		}
	}
	HX_STACK_LINE(232)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_x,return )

Float Vec3_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec3","set_x",0xa6796218,"nape.geom.Vec3.set_x","nape/geom/Vec3.hx",234,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(246)
	this->zpp_inner->x = x;
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(248)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(248)
			_this->_validate();
		}
	}
	HX_STACK_LINE(248)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_x,return )

Float Vec3_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_y",0xbdaa6c0d,"nape.geom.Vec3.get_y","nape/geom/Vec3.hx",256,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(262)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(262)
			_this->_validate();
		}
	}
	HX_STACK_LINE(263)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_y,return )

Float Vec3_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec3","set_y",0xa6796219,"nape.geom.Vec3.set_y","nape/geom/Vec3.hx",265,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(277)
	this->zpp_inner->y = y;
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(279)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(279)
			_this->_validate();
		}
	}
	HX_STACK_LINE(279)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_y,return )

Float Vec3_obj::get_z( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_z",0xbdaa6c0e,"nape.geom.Vec3.get_z","nape/geom/Vec3.hx",287,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(293)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(293)
			_this->_validate();
		}
	}
	HX_STACK_LINE(294)
	return this->zpp_inner->z;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_z,return )

Float Vec3_obj::set_z( Float z){
	HX_STACK_FRAME("nape.geom.Vec3","set_z",0xa679621a,"nape.geom.Vec3.set_z","nape/geom/Vec3.hx",296,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(308)
	this->zpp_inner->z = z;
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(310)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(310)
			_this->_validate();
		}
	}
	HX_STACK_LINE(310)
	return this->zpp_inner->z;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_z,return )

Void Vec3_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec3","dispose",0xe2a3309c,"nape.geom.Vec3.dispose","nape/geom/Vec3.hx",417,0x02b49bd3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(418)
		::nape::geom::Vec3 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(434)
		o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;
		HX_STACK_LINE(435)
		::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = o;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,dispose,(void))

Float Vec3_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_length",0x758ab0d2,"nape.geom.Vec3.get_length","nape/geom/Vec3.hx",457,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(463)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(463)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(463)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(463)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g4 = this->zpp_inner->y;
	}
	HX_STACK_LINE(463)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(463)
	Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(463)
	Float _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g7 = this->zpp_inner->z;
	}
	HX_STACK_LINE(463)
	Float _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		_g8 = this->zpp_inner->z;
	}
	HX_STACK_LINE(463)
	Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(463)
	Float _g10 = (_g6 + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(463)
	return ::Math_obj::sqrt(_g10);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_length,return )

Float Vec3_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec3","set_length",0x79084f46,"nape.geom.Vec3.set_length","nape/geom/Vec3.hx",465,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(480)
	{
		HX_STACK_LINE(481)
		Float _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(481)
		{
			HX_STACK_LINE(481)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g = this->zpp_inner->x;
			}
			HX_STACK_LINE(481)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g1 = this->zpp_inner->x;
			}
			HX_STACK_LINE(481)
			Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(481)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g3 = this->zpp_inner->y;
			}
			HX_STACK_LINE(481)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g4 = this->zpp_inner->y;
			}
			HX_STACK_LINE(481)
			Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(481)
			Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(481)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g7 = this->zpp_inner->z;
			}
			HX_STACK_LINE(481)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				_g8 = this->zpp_inner->z;
			}
			HX_STACK_LINE(481)
			Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(481)
			Float _g10 = (_g6 + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(481)
			_g11 = ::Math_obj::sqrt(_g10);
		}
		HX_STACK_LINE(481)
		Float t = (Float(length) / Float(_g11));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(483)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(492)
								_this->_validate();
							}
						}
						HX_STACK_LINE(492)
						_g12 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(492)
					Float x = (_g12 * t1);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(492)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(492)
								_this->_validate();
							}
						}
						HX_STACK_LINE(492)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					Float _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(493)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(493)
								_this->_validate();
							}
						}
						HX_STACK_LINE(493)
						_g13 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(493)
					Float y = (_g13 * t1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(493)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(493)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(493)
								_this->_validate();
							}
						}
						HX_STACK_LINE(493)
						_g->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				Float _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(495)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(495)
							_this->_validate();
						}
					}
					HX_STACK_LINE(495)
					_g14 = _g->zpp_inner->z;
				}
				HX_STACK_LINE(495)
				Float z = (_g14 * t);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(495)
				_g->zpp_inner->z = z;
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(495)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(495)
							_this->_validate();
						}
					}
					HX_STACK_LINE(495)
					_g->zpp_inner->z;
				}
			}
		}
	}
	HX_STACK_LINE(498)
	Float _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g15 = this->zpp_inner->x;
	}
	HX_STACK_LINE(498)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g16 = this->zpp_inner->x;
	}
	HX_STACK_LINE(498)
	Float _g17 = (_g15 * _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(498)
	Float _g18;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g18 = this->zpp_inner->y;
	}
	HX_STACK_LINE(498)
	Float _g19;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g19 = this->zpp_inner->y;
	}
	HX_STACK_LINE(498)
	Float _g20 = (_g18 * _g19);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(498)
	Float _g21 = (_g17 + _g20);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(498)
	Float _g22;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g22 = this->zpp_inner->z;
	}
	HX_STACK_LINE(498)
	Float _g23;		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(498)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(498)
				_this->_validate();
			}
		}
		HX_STACK_LINE(498)
		_g23 = this->zpp_inner->z;
	}
	HX_STACK_LINE(498)
	Float _g24 = (_g22 * _g23);		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(498)
	Float _g25 = (_g21 + _g24);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(498)
	return ::Math_obj::sqrt(_g25);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_length,return )

Float Vec3_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec3","lsq",0xc5b80587,"nape.geom.Vec3.lsq","nape/geom/Vec3.hx",507,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(513)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(513)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g1 = this->zpp_inner->x;
	}
	HX_STACK_LINE(513)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(513)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(513)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g4 = this->zpp_inner->y;
	}
	HX_STACK_LINE(513)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(513)
	Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(513)
	Float _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g7 = this->zpp_inner->z;
	}
	HX_STACK_LINE(513)
	Float _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		_g8 = this->zpp_inner->z;
	}
	HX_STACK_LINE(513)
	Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(513)
	return (_g6 + _g9);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,lsq,return )

::nape::geom::Vec3 Vec3_obj::set( ::nape::geom::Vec3 vector){
	HX_STACK_FRAME("nape.geom.Vec3","set",0xc5bd491f,"nape.geom.Vec3.set","nape/geom/Vec3.hx",524,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(540)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		_g = vector->zpp_inner->x;
	}
	HX_STACK_LINE(540)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		_g1 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(540)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		_g2 = vector->zpp_inner->z;
	}
	HX_STACK_LINE(540)
	return this->setxyz(_g,_g1,_g2);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set,return )

::nape::geom::Vec3 Vec3_obj::setxyz( Float x,Float y,Float z){
	HX_STACK_FRAME("nape.geom.Vec3","setxyz",0x03cf6c9a,"nape.geom.Vec3.setxyz","nape/geom/Vec3.hx",552,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(558)
	{
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				this->zpp_inner->x = x;
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(560)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(560)
							_this->_validate();
						}
					}
					HX_STACK_LINE(560)
					this->zpp_inner->x;
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				this->zpp_inner->y = y;
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(561)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(561)
							_this->_validate();
						}
					}
					HX_STACK_LINE(561)
					this->zpp_inner->y;
				}
			}
			HX_STACK_LINE(570)
			{
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			this->zpp_inner->z = z;
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(579)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(579)
						_this->_validate();
					}
				}
				HX_STACK_LINE(579)
				this->zpp_inner->z;
			}
		}
	}
	HX_STACK_LINE(581)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,setxyz,return )

::nape::geom::Vec2 Vec3_obj::xy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec3","xy",0x83c1ba24,"nape.geom.Vec3.xy","nape/geom/Vec3.hx",603,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(603)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(603)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(603)
					_this->_validate();
				}
			}
			HX_STACK_LINE(603)
			x = this->zpp_inner->x;
		}
		HX_STACK_LINE(603)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(603)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(603)
					_this->_validate();
				}
			}
			HX_STACK_LINE(603)
			y = this->zpp_inner->y;
		}
		HX_STACK_LINE(603)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(603)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(603)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(603)
			ret = _g;
		}
		else{
			HX_STACK_LINE(603)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(603)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(603)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(603)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(603)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(603)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(603)
						ret1->next = null();
					}
					HX_STACK_LINE(603)
					ret1->weak = false;
				}
				HX_STACK_LINE(603)
				ret1->_immutable = immutable;
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					ret1->x = x;
					HX_STACK_LINE(603)
					ret1->y = y;
					HX_STACK_LINE(603)
					{
					}
				}
				HX_STACK_LINE(603)
				_g2 = ret1;
			}
			HX_STACK_LINE(603)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(603)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(603)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(603)
						_this->_validate();
					}
				}
				HX_STACK_LINE(603)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Vec3.hx",603,0x02b49bd3)
					{
						HX_STACK_LINE(603)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							{
								HX_STACK_LINE(603)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(603)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(603)
									_this->_validate();
								}
							}
							HX_STACK_LINE(603)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(603)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(603)
			if ((!(((  (((_g3 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(603)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(603)
					{
					}
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(603)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(603)
			ret;
		}
		HX_STACK_LINE(603)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(603)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,xy,return )

::String Vec3_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec3","toString",0x7cf21e0f,"nape.geom.Vec3.toString","nape/geom/Vec3.hx",608,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(614)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		_g = this->zpp_inner->x;
	}
	HX_STACK_LINE(614)
	::String _g1 = (HX_CSTRING("{ x: ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(614)
	::String _g2 = (_g1 + HX_CSTRING(" y: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(614)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		_g3 = this->zpp_inner->y;
	}
	HX_STACK_LINE(614)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(614)
	::String _g5 = (_g4 + HX_CSTRING(" z: "));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(614)
	Float _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		_g6 = this->zpp_inner->z;
	}
	HX_STACK_LINE(614)
	::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(614)
	return (_g7 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,toString,return )

::nape::geom::Vec3 Vec3_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
	HX_STACK_FRAME("nape.geom.Vec3","get",0xc5b42e13,"nape.geom.Vec3.get","nape/geom/Vec3.hx",322,0x02b49bd3)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
{
		HX_STACK_LINE(323)
		::nape::geom::Vec3 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(325)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec3 == null()))){
			HX_STACK_LINE(326)
			::nape::geom::Vec3 _g = ::nape::geom::Vec3_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			ret = _g;
		}
		else{
			HX_STACK_LINE(332)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;
			HX_STACK_LINE(333)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = ret->zpp_pool;
			HX_STACK_LINE(334)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(344)
		ret->setxyz(x,y,z);
		HX_STACK_LINE(345)
		ret->zpp_inner->immutable = false;
		HX_STACK_LINE(346)
		ret->zpp_inner->_validate = null();
		HX_STACK_LINE(347)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,get,return )


Vec3_obj::Vec3_obj()
{
}

void Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec3);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_END_CLASS();
}

void Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
}

Dynamic Vec3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return xy_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"setxyz") ) { return setxyz_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("zpp_pool"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec3*/ ,(int)offsetof(Vec3_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(Vec3_obj,zpp_pool),HX_CSTRING("zpp_pool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_z"),
	HX_CSTRING("set_z"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_length"),
	HX_CSTRING("lsq"),
	HX_CSTRING("set"),
	HX_CSTRING("setxyz"),
	HX_CSTRING("xy"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#endif

Class Vec3_obj::__mClass;

void Vec3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec3"), hx::TCanCast< Vec3_obj> ,sStaticFields,sMemberFields,
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

void Vec3_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
