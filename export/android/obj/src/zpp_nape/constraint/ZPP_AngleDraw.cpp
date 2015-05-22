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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleDraw
#include <zpp_nape/constraint/ZPP_AngleDraw.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_AngleDraw_obj::__construct()
{
	return null();
}

//ZPP_AngleDraw_obj::~ZPP_AngleDraw_obj() { }

Dynamic ZPP_AngleDraw_obj::__CreateEmpty() { return  new ZPP_AngleDraw_obj; }
hx::ObjectPtr< ZPP_AngleDraw_obj > ZPP_AngleDraw_obj::__new()
{  hx::ObjectPtr< ZPP_AngleDraw_obj > result = new ZPP_AngleDraw_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AngleDraw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AngleDraw_obj > result = new ZPP_AngleDraw_obj();
	result->__construct();
	return result;}

Void ZPP_AngleDraw_obj::indicator( ::nape::util::Debug g,::nape::geom::Vec2 c,Float ang,Float rad,int col){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","indicator",0xbd951c03,"zpp_nape.constraint.ZPP_AngleDraw.indicator","zpp_nape/constraint/AngleJoint.hx",652,0x575b2617)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(ang,"ang")
		HX_STACK_ARG(rad,"rad")
		HX_STACK_ARG(col,"col")
		HX_STACK_LINE(653)
		::nape::geom::Vec2 dir;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			Float x = ::Math_obj::cos(ang);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(653)
			Float y = ::Math_obj::sin(ang);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(653)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(653)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(653)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(653)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(653)
				ret = _g;
			}
			else{
				HX_STACK_LINE(653)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(653)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(653)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(653)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(653)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(653)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(653)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(653)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(653)
							ret1->next = null();
						}
						HX_STACK_LINE(653)
						ret1->weak = false;
					}
					HX_STACK_LINE(653)
					ret1->_immutable = immutable;
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						ret1->x = x;
						HX_STACK_LINE(653)
						ret1->y = y;
						HX_STACK_LINE(653)
						{
						}
					}
					HX_STACK_LINE(653)
					_g2 = ret1;
				}
				HX_STACK_LINE(653)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(653)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(653)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(653)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(653)
							_this->_validate();
						}
					}
					HX_STACK_LINE(653)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",653,0x575b2617)
						{
							HX_STACK_LINE(653)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(653)
							{
								HX_STACK_LINE(653)
								{
									HX_STACK_LINE(653)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(653)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(653)
										_this->_validate();
									}
								}
								HX_STACK_LINE(653)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(653)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(653)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(653)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(653)
						{
						}
					}
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(653)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(653)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(653)
				ret;
			}
			HX_STACK_LINE(653)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(653)
			dir = ret;
		}
		HX_STACK_LINE(654)
		::nape::geom::Vec2 _g5 = dir->mul(rad,true);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(654)
		::nape::geom::Vec2 _g6 = c->add(_g5,true);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(654)
		g->drawFilledCircle(_g6,(int)2,col);
		HX_STACK_LINE(655)
		{
			HX_STACK_LINE(655)
			::zpp_nape::geom::ZPP_Vec2 inner = dir->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(655)
			dir->zpp_inner->outer = null();
			HX_STACK_LINE(655)
			dir->zpp_inner = null();
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				::nape::geom::Vec2 o = dir;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(655)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(655)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(655)
				{
					HX_STACK_LINE(655)
					if (((o->outer != null()))){
						HX_STACK_LINE(655)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(655)
						o->outer = null();
					}
					HX_STACK_LINE(655)
					o->_isimmutable = null();
					HX_STACK_LINE(655)
					o->_validate = null();
					HX_STACK_LINE(655)
					o->_invalidate = null();
				}
				HX_STACK_LINE(655)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_AngleDraw_obj,indicator,(void))

Float ZPP_AngleDraw_obj::maxarc;

Void ZPP_AngleDraw_obj::drawSpiralSpring( ::nape::util::Debug g,::nape::geom::Vec2 c,Float a0,Float a1,Float r0,Float r1,int col,hx::Null< int >  __o_coils){
int coils = __o_coils.Default(4);
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","drawSpiralSpring",0xd52ba24e,"zpp_nape.constraint.ZPP_AngleDraw.drawSpiralSpring","zpp_nape/constraint/AngleJoint.hx",658,0x575b2617)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(a0,"a0")
	HX_STACK_ARG(a1,"a1")
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(coils,"coils")
{
		HX_STACK_LINE(659)
		if (((a0 > a1))){
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(661)
				Float t = a0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(662)
				a0 = a1;
				HX_STACK_LINE(663)
				a1 = t;
			}
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(666)
				Float t = r0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(667)
				r0 = r1;
				HX_STACK_LINE(668)
				r1 = t;
			}
		}
		HX_STACK_LINE(671)
		if (((a0 == a1))){
			HX_STACK_LINE(671)
			return null();
		}
		HX_STACK_LINE(672)
		Float dr = (r1 - r0);		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(673)
		Float da = (a1 - a0);		HX_STACK_VAR(da,"da");
		HX_STACK_LINE(674)
		Float Delta;		HX_STACK_VAR(Delta,"Delta");
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(675)
			Float x = (Float((((int)2 * ::Math_obj::PI) * dr)) / Float(da));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(676)
			if (((x < (int)0))){
				HX_STACK_LINE(676)
				Delta = -(x);
			}
			else{
				HX_STACK_LINE(676)
				Delta = x;
			}
		}
		HX_STACK_LINE(678)
		int dcnt;		HX_STACK_VAR(dcnt,"dcnt");
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(679)
			int x = ::Math_obj::ceil(((Float(da) / Float(::zpp_nape::constraint::ZPP_AngleDraw_obj::maxarc)) * (int)3));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(680)
			int y = ((int)4 * coils);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(681)
			if (((x > y))){
				HX_STACK_LINE(681)
				dcnt = x;
			}
			else{
				HX_STACK_LINE(681)
				dcnt = y;
			}
		}
		HX_STACK_LINE(683)
		Float drad = (Float(dr) / Float(dcnt));		HX_STACK_VAR(drad,"drad");
		HX_STACK_LINE(684)
		Float dang = (Float(da) / Float(dcnt));		HX_STACK_VAR(dang,"dang");
		HX_STACK_LINE(685)
		Float dtime = (Float((int)1) / Float(dcnt));		HX_STACK_VAR(dtime,"dtime");
		HX_STACK_LINE(686)
		Float c0 = ::Math_obj::cos(a0);		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(687)
		Float s0 = ::Math_obj::sin(a0);		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(688)
		Float R0;		HX_STACK_VAR(R0,"R0");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(689)
			Float p = (r0 + (dr * (int)0));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(690)
			Float _g = ::Math_obj::sin(((((int)2 * coils) * ::Math_obj::PI) * (int)0));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(690)
			Float _g1 = ((0.75 * Delta) * _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(690)
			R0 = (p + _g1);
		}
		HX_STACK_LINE(692)
		::nape::geom::Vec2 p0;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(692)
		{
			HX_STACK_LINE(692)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(692)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(692)
						_this->_validate();
					}
				}
				HX_STACK_LINE(692)
				_g2 = c->zpp_inner->x;
			}
			HX_STACK_LINE(692)
			Float x = (_g2 + (R0 * c0));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(692)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(692)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(692)
						_this->_validate();
					}
				}
				HX_STACK_LINE(692)
				_g3 = c->zpp_inner->y;
			}
			HX_STACK_LINE(692)
			Float y = (_g3 + (R0 * s0));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(692)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(692)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(692)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(692)
				::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(692)
				ret = _g4;
			}
			else{
				HX_STACK_LINE(692)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(692)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(692)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(692)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(692)
				::zpp_nape::geom::ZPP_Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2 _g5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(692)
							ret1 = _g5;
						}
						else{
							HX_STACK_LINE(692)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(692)
							ret1->next = null();
						}
						HX_STACK_LINE(692)
						ret1->weak = false;
					}
					HX_STACK_LINE(692)
					ret1->_immutable = immutable;
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						ret1->x = x;
						HX_STACK_LINE(692)
						ret1->y = y;
						HX_STACK_LINE(692)
						{
						}
					}
					HX_STACK_LINE(692)
					_g6 = ret1;
				}
				HX_STACK_LINE(692)
				ret->zpp_inner = _g6;
				HX_STACK_LINE(692)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(692)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(692)
							_this->_validate();
						}
					}
					HX_STACK_LINE(692)
					_g7 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",692,0x575b2617)
						{
							HX_STACK_LINE(692)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(692)
							{
								HX_STACK_LINE(692)
								{
									HX_STACK_LINE(692)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(692)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(692)
										_this->_validate();
									}
								}
								HX_STACK_LINE(692)
								_g8 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(692)
							return (_g8 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(692)
				if ((!(((  (((_g7 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(692)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(692)
						{
						}
					}
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(692)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(692)
				ret;
			}
			HX_STACK_LINE(692)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(692)
			p0 = ret;
		}
		HX_STACK_LINE(693)
		Float DR;		HX_STACK_VAR(DR,"DR");
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(694)
			Float _g9 = ::Math_obj::cos(((((int)2 * coils) * ::Math_obj::PI) * (int)0));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(694)
			Float _g10 = ((((1.5 * coils) * Delta) * ::Math_obj::PI) * _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(694)
			DR = (dr + _g10);
		}
		HX_STACK_LINE(696)
		Float ux = ((DR * c0) - ((R0 * da) * s0));		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(697)
		Float uy = ((DR * s0) + ((R0 * da) * c0));		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(698)
		::nape::geom::Vec2 p1;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(698)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(698)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(698)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(698)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(698)
				::nape::geom::Vec2 _g11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(698)
				ret = _g11;
			}
			else{
				HX_STACK_LINE(698)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(698)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(698)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(698)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(698)
				::zpp_nape::geom::ZPP_Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(698)
				{
					HX_STACK_LINE(698)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(698)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2 _g12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(698)
							ret1 = _g12;
						}
						else{
							HX_STACK_LINE(698)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(698)
							ret1->next = null();
						}
						HX_STACK_LINE(698)
						ret1->weak = false;
					}
					HX_STACK_LINE(698)
					ret1->_immutable = immutable;
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						ret1->x = x;
						HX_STACK_LINE(698)
						ret1->y = y;
						HX_STACK_LINE(698)
						{
						}
					}
					HX_STACK_LINE(698)
					_g13 = ret1;
				}
				HX_STACK_LINE(698)
				ret->zpp_inner = _g13;
				HX_STACK_LINE(698)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(698)
				Float _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(698)
				{
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(698)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(698)
							_this->_validate();
						}
					}
					HX_STACK_LINE(698)
					_g14 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",698,0x575b2617)
						{
							HX_STACK_LINE(698)
							Float _g15;		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(698)
							{
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(698)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(698)
										_this->_validate();
									}
								}
								HX_STACK_LINE(698)
								_g15 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(698)
							return (_g15 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(698)
				if ((!(((  (((_g14 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(698)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(698)
						{
						}
					}
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(698)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(698)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(698)
				ret;
			}
			HX_STACK_LINE(698)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(698)
			p1 = ret;
		}
		HX_STACK_LINE(699)
		::nape::geom::Vec2 ct;		HX_STACK_VAR(ct,"ct");
		HX_STACK_LINE(699)
		{
			HX_STACK_LINE(699)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(699)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(699)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(699)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(699)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(699)
				::nape::geom::Vec2 _g16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(699)
				ret = _g16;
			}
			else{
				HX_STACK_LINE(699)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(699)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(699)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(699)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(699)
				::zpp_nape::geom::ZPP_Vec2 _g18;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(699)
				{
					HX_STACK_LINE(699)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(699)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2 _g17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(699)
							ret1 = _g17;
						}
						else{
							HX_STACK_LINE(699)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(699)
							ret1->next = null();
						}
						HX_STACK_LINE(699)
						ret1->weak = false;
					}
					HX_STACK_LINE(699)
					ret1->_immutable = immutable;
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						ret1->x = x;
						HX_STACK_LINE(699)
						ret1->y = y;
						HX_STACK_LINE(699)
						{
						}
					}
					HX_STACK_LINE(699)
					_g18 = ret1;
				}
				HX_STACK_LINE(699)
				ret->zpp_inner = _g18;
				HX_STACK_LINE(699)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(699)
				Float _g19;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(699)
				{
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(699)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(699)
							_this->_validate();
						}
					}
					HX_STACK_LINE(699)
					_g19 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",699,0x575b2617)
						{
							HX_STACK_LINE(699)
							Float _g20;		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(699)
							{
								HX_STACK_LINE(699)
								{
									HX_STACK_LINE(699)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(699)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(699)
										_this->_validate();
									}
								}
								HX_STACK_LINE(699)
								_g20 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(699)
							return (_g20 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(699)
				if ((!(((  (((_g19 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(699)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(699)
						{
						}
					}
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(699)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(699)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(699)
				ret;
			}
			HX_STACK_LINE(699)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(699)
			ct = ret;
		}
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(700)
			while((true)){
				HX_STACK_LINE(700)
				if ((!(((_g < dcnt))))){
					HX_STACK_LINE(700)
					break;
				}
				HX_STACK_LINE(700)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(701)
				Float a11 = (a0 + dang);		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(702)
				Float c1 = ::Math_obj::cos(a11);		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(703)
				Float s1 = ::Math_obj::sin(a11);		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(704)
				Float R1;		HX_STACK_VAR(R1,"R1");
				HX_STACK_LINE(704)
				{
					HX_STACK_LINE(705)
					Float p = (r0 + ((dr * ((i + (int)1))) * dtime));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(706)
					Float _g21 = ::Math_obj::sin((((((int)2 * coils) * ::Math_obj::PI) * ((i + (int)1))) * dtime));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(706)
					Float _g22 = ((0.75 * Delta) * _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(706)
					R1 = (p + _g22);
				}
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					Float _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						_g23 = c->zpp_inner->x;
					}
					HX_STACK_LINE(708)
					Float x = (_g23 + (R1 * c1));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(708)
					Float _g24;		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						_g24 = c->zpp_inner->y;
					}
					HX_STACK_LINE(708)
					Float y = (_g24 + (R1 * s1));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(708)
					Float _g25;		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						_g25 = p1->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &p1,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",708,0x575b2617)
							{
								HX_STACK_LINE(708)
								Float _g26;		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(708)
								{
									HX_STACK_LINE(708)
									{
										HX_STACK_LINE(708)
										::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(708)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(708)
											_this->_validate();
										}
									}
									HX_STACK_LINE(708)
									_g26 = p1->zpp_inner->y;
								}
								HX_STACK_LINE(708)
								return (_g26 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(708)
					if ((!(((  (((_g25 == x))) ? bool(_Function_4_1::Block(p1,y)) : bool(false) ))))){
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							p1->zpp_inner->x = x;
							HX_STACK_LINE(708)
							p1->zpp_inner->y = y;
							HX_STACK_LINE(708)
							{
							}
						}
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(708)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(708)
					p1;
				}
				HX_STACK_LINE(709)
				Float DR1;		HX_STACK_VAR(DR1,"DR1");
				HX_STACK_LINE(709)
				{
					HX_STACK_LINE(710)
					Float _g27 = ::Math_obj::cos((((((int)2 * coils) * ::Math_obj::PI) * ((i + (int)1))) * dtime));		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(710)
					Float _g28 = ((((1.5 * coils) * Delta) * ::Math_obj::PI) * _g27);		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(710)
					DR1 = (dr + _g28);
				}
				HX_STACK_LINE(712)
				Float vx = ((DR1 * c1) - ((R1 * da) * s1));		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(713)
				Float vy = ((DR1 * s1) + ((R1 * da) * c1));		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(714)
				Float den = ((ux * vy) - (uy * vx));		HX_STACK_VAR(den,"den");
				HX_STACK_LINE(715)
				if (((bool((bool(((den * den) < ::nape::Config_obj::epsilon)) || bool((((ux * vx) + (uy * vy)) <= (int)0)))) || bool((((ux * vx) + (uy * vy)) > 0.999))))){
					HX_STACK_LINE(715)
					g->drawLine(p0,p1,col);
				}
				else{
					HX_STACK_LINE(717)
					Float _g29;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						_g29 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(717)
					Float _g30;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						_g30 = p0->zpp_inner->x;
					}
					HX_STACK_LINE(717)
					Float _g31 = (_g29 - _g30);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(717)
					Float _g32 = (_g31 * vy);		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(717)
					Float _g33;		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						_g33 = p0->zpp_inner->y;
					}
					HX_STACK_LINE(717)
					Float _g34;		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						_g34 = p1->zpp_inner->y;
					}
					HX_STACK_LINE(717)
					Float _g35 = (_g33 - _g34);		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(717)
					Float _g36 = (_g35 * vx);		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(717)
					Float _g37 = (_g32 + _g36);		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(717)
					Float t = (Float(_g37) / Float(den));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(718)
					if (((t <= (int)0))){
						HX_STACK_LINE(718)
						g->drawLine(p0,p1,col);
					}
					else{
						HX_STACK_LINE(720)
						{
							HX_STACK_LINE(720)
							Float _g38;		HX_STACK_VAR(_g38,"_g38");
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(720)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(720)
										_this->_validate();
									}
								}
								HX_STACK_LINE(720)
								_g38 = p0->zpp_inner->x;
							}
							HX_STACK_LINE(720)
							Float x = (_g38 + (ux * t));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								Float _g39;		HX_STACK_VAR(_g39,"_g39");
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(720)
											_this->_validate();
										}
									}
									HX_STACK_LINE(720)
									_g39 = ct->zpp_inner->x;
								}
								HX_STACK_LINE(720)
								if (((_g39 != x))){
									HX_STACK_LINE(720)
									ct->zpp_inner->x = x;
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(720)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(720)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(720)
										_this->_validate();
									}
								}
								HX_STACK_LINE(720)
								ct->zpp_inner->x;
							}
						}
						HX_STACK_LINE(721)
						{
							HX_STACK_LINE(721)
							Float _g40;		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(721)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(721)
										_this->_validate();
									}
								}
								HX_STACK_LINE(721)
								_g40 = p0->zpp_inner->y;
							}
							HX_STACK_LINE(721)
							Float y = (_g40 + (uy * t));		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								Float _g41;		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									{
										HX_STACK_LINE(721)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(721)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(721)
											_this->_validate();
										}
									}
									HX_STACK_LINE(721)
									_g41 = ct->zpp_inner->y;
								}
								HX_STACK_LINE(721)
								if (((_g41 != y))){
									HX_STACK_LINE(721)
									ct->zpp_inner->y = y;
									HX_STACK_LINE(721)
									{
										HX_STACK_LINE(721)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(721)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(721)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(721)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(721)
										_this->_validate();
									}
								}
								HX_STACK_LINE(721)
								ct->zpp_inner->y;
							}
						}
						HX_STACK_LINE(722)
						g->drawCurve(p0,ct,p1,col);
					}
				}
				HX_STACK_LINE(725)
				a0 = a11;
				HX_STACK_LINE(726)
				c0 = c1;
				HX_STACK_LINE(727)
				s0 = s1;
				HX_STACK_LINE(728)
				ux = vx;
				HX_STACK_LINE(729)
				uy = vy;
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							x = p1->zpp_inner->x;
						}
						HX_STACK_LINE(730)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							y = p1->zpp_inner->y;
						}
						HX_STACK_LINE(730)
						Float _g42;		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							_g42 = p0->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &p0,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",730,0x575b2617)
								{
									HX_STACK_LINE(730)
									Float _g43;		HX_STACK_VAR(_g43,"_g43");
									HX_STACK_LINE(730)
									{
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(730)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(730)
												_this->_validate();
											}
										}
										HX_STACK_LINE(730)
										_g43 = p0->zpp_inner->y;
									}
									HX_STACK_LINE(730)
									return (_g43 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(730)
						if ((!(((  (((_g42 == x))) ? bool(_Function_5_1::Block(p0,y)) : bool(false) ))))){
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								p0->zpp_inner->x = x;
								HX_STACK_LINE(730)
								p0->zpp_inner->y = y;
								HX_STACK_LINE(730)
								{
								}
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(730)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(730)
						ret = p0;
					}
					HX_STACK_LINE(730)
					if ((p1->zpp_inner->weak)){
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(730)
							p1->zpp_inner->outer = null();
							HX_STACK_LINE(730)
							p1->zpp_inner = null();
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
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
						HX_STACK_LINE(730)
						true;
					}
					else{
						HX_STACK_LINE(730)
						false;
					}
					HX_STACK_LINE(730)
					ret;
				}
			}
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(732)
			p0->zpp_inner->outer = null();
			HX_STACK_LINE(732)
			p0->zpp_inner = null();
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(732)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(732)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					if (((o->outer != null()))){
						HX_STACK_LINE(732)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(732)
						o->outer = null();
					}
					HX_STACK_LINE(732)
					o->_isimmutable = null();
					HX_STACK_LINE(732)
					o->_validate = null();
					HX_STACK_LINE(732)
					o->_invalidate = null();
				}
				HX_STACK_LINE(732)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(732)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(733)
			p1->zpp_inner->outer = null();
			HX_STACK_LINE(733)
			p1->zpp_inner = null();
			HX_STACK_LINE(733)
			{
				HX_STACK_LINE(733)
				::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(733)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(733)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(733)
			{
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(733)
				{
					HX_STACK_LINE(733)
					if (((o->outer != null()))){
						HX_STACK_LINE(733)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(733)
						o->outer = null();
					}
					HX_STACK_LINE(733)
					o->_isimmutable = null();
					HX_STACK_LINE(733)
					o->_validate = null();
					HX_STACK_LINE(733)
					o->_invalidate = null();
				}
				HX_STACK_LINE(733)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(734)
		{
			HX_STACK_LINE(734)
			::zpp_nape::geom::ZPP_Vec2 inner = ct->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(734)
			ct->zpp_inner->outer = null();
			HX_STACK_LINE(734)
			ct->zpp_inner = null();
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				::nape::geom::Vec2 o = ct;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(734)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(734)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(734)
				{
					HX_STACK_LINE(734)
					if (((o->outer != null()))){
						HX_STACK_LINE(734)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(734)
						o->outer = null();
					}
					HX_STACK_LINE(734)
					o->_isimmutable = null();
					HX_STACK_LINE(734)
					o->_validate = null();
					HX_STACK_LINE(734)
					o->_invalidate = null();
				}
				HX_STACK_LINE(734)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ZPP_AngleDraw_obj,drawSpiralSpring,(void))

Void ZPP_AngleDraw_obj::drawSpiral( ::nape::util::Debug g,::nape::geom::Vec2 c,Float a0,Float a1,Float r0,Float r1,int col){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","drawSpiral",0x7fd3a8a1,"zpp_nape.constraint.ZPP_AngleDraw.drawSpiral","zpp_nape/constraint/AngleJoint.hx",736,0x575b2617)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(a0,"a0")
		HX_STACK_ARG(a1,"a1")
		HX_STACK_ARG(r0,"r0")
		HX_STACK_ARG(r1,"r1")
		HX_STACK_ARG(col,"col")
		HX_STACK_LINE(737)
		if (((a0 > a1))){
			HX_STACK_LINE(738)
			{
				HX_STACK_LINE(739)
				Float t = a0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(740)
				a0 = a1;
				HX_STACK_LINE(741)
				a1 = t;
			}
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(744)
				Float t = r0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(745)
				r0 = r1;
				HX_STACK_LINE(746)
				r1 = t;
			}
		}
		HX_STACK_LINE(749)
		if (((a0 == a1))){
			HX_STACK_LINE(749)
			return null();
		}
		HX_STACK_LINE(750)
		Float dr = (r1 - r0);		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(751)
		Float da = (a1 - a0);		HX_STACK_VAR(da,"da");
		HX_STACK_LINE(752)
		int dcnt = ::Math_obj::ceil((Float(da) / Float(::zpp_nape::constraint::ZPP_AngleDraw_obj::maxarc)));		HX_STACK_VAR(dcnt,"dcnt");
		HX_STACK_LINE(753)
		Float drad = (Float(dr) / Float(dcnt));		HX_STACK_VAR(drad,"drad");
		HX_STACK_LINE(754)
		Float dang = (Float(da) / Float(dcnt));		HX_STACK_VAR(dang,"dang");
		HX_STACK_LINE(755)
		Float c0 = ::Math_obj::cos(a0);		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(756)
		Float s0 = ::Math_obj::sin(a0);		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(757)
		::nape::geom::Vec2 p0;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(757)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(757)
						_this->_validate();
					}
				}
				HX_STACK_LINE(757)
				_g = c->zpp_inner->x;
			}
			HX_STACK_LINE(757)
			Float x = (_g + (r0 * c0));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(757)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(757)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(757)
						_this->_validate();
					}
				}
				HX_STACK_LINE(757)
				_g1 = c->zpp_inner->y;
			}
			HX_STACK_LINE(757)
			Float y = (_g1 + (r0 * s0));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(757)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(757)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(757)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(757)
				::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(757)
				ret = _g2;
			}
			else{
				HX_STACK_LINE(757)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(757)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(757)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(757)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(757)
				::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(757)
							ret1 = _g3;
						}
						else{
							HX_STACK_LINE(757)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(757)
							ret1->next = null();
						}
						HX_STACK_LINE(757)
						ret1->weak = false;
					}
					HX_STACK_LINE(757)
					ret1->_immutable = immutable;
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret1->x = x;
						HX_STACK_LINE(757)
						ret1->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					_g4 = ret1;
				}
				HX_STACK_LINE(757)
				ret->zpp_inner = _g4;
				HX_STACK_LINE(757)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(757)
				Float _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(757)
							_this->_validate();
						}
					}
					HX_STACK_LINE(757)
					_g5 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",757,0x575b2617)
						{
							HX_STACK_LINE(757)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(757)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(757)
										_this->_validate();
									}
								}
								HX_STACK_LINE(757)
								_g6 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(757)
							return (_g6 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(757)
				if ((!(((  (((_g5 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(757)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(757)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(757)
				ret;
			}
			HX_STACK_LINE(757)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(757)
			p0 = ret;
		}
		HX_STACK_LINE(758)
		Float ux = ((dr * c0) - ((r0 * da) * s0));		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(759)
		Float uy = ((dr * s0) + ((r0 * da) * c0));		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(760)
		::nape::geom::Vec2 p1;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(760)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(760)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(760)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(760)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(760)
				::nape::geom::Vec2 _g7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(760)
				ret = _g7;
			}
			else{
				HX_STACK_LINE(760)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(760)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(760)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(760)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(760)
				::zpp_nape::geom::ZPP_Vec2 _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2 _g8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(760)
							ret1 = _g8;
						}
						else{
							HX_STACK_LINE(760)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(760)
							ret1->next = null();
						}
						HX_STACK_LINE(760)
						ret1->weak = false;
					}
					HX_STACK_LINE(760)
					ret1->_immutable = immutable;
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						ret1->x = x;
						HX_STACK_LINE(760)
						ret1->y = y;
						HX_STACK_LINE(760)
						{
						}
					}
					HX_STACK_LINE(760)
					_g9 = ret1;
				}
				HX_STACK_LINE(760)
				ret->zpp_inner = _g9;
				HX_STACK_LINE(760)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(760)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(760)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(760)
							_this->_validate();
						}
					}
					HX_STACK_LINE(760)
					_g10 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",760,0x575b2617)
						{
							HX_STACK_LINE(760)
							Float _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(760)
							{
								HX_STACK_LINE(760)
								{
									HX_STACK_LINE(760)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(760)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(760)
										_this->_validate();
									}
								}
								HX_STACK_LINE(760)
								_g11 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(760)
							return (_g11 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(760)
				if ((!(((  (((_g10 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(760)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(760)
						{
						}
					}
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(760)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(760)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(760)
				ret;
			}
			HX_STACK_LINE(760)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(760)
			p1 = ret;
		}
		HX_STACK_LINE(761)
		::nape::geom::Vec2 ct;		HX_STACK_VAR(ct,"ct");
		HX_STACK_LINE(761)
		{
			HX_STACK_LINE(761)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(761)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(761)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(761)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(761)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(761)
				::nape::geom::Vec2 _g12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(761)
				ret = _g12;
			}
			else{
				HX_STACK_LINE(761)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(761)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(761)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(761)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(761)
				::zpp_nape::geom::ZPP_Vec2 _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(761)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2 _g13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(761)
							ret1 = _g13;
						}
						else{
							HX_STACK_LINE(761)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(761)
							ret1->next = null();
						}
						HX_STACK_LINE(761)
						ret1->weak = false;
					}
					HX_STACK_LINE(761)
					ret1->_immutable = immutable;
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						ret1->x = x;
						HX_STACK_LINE(761)
						ret1->y = y;
						HX_STACK_LINE(761)
						{
						}
					}
					HX_STACK_LINE(761)
					_g14 = ret1;
				}
				HX_STACK_LINE(761)
				ret->zpp_inner = _g14;
				HX_STACK_LINE(761)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(761)
				Float _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(761)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(761)
							_this->_validate();
						}
					}
					HX_STACK_LINE(761)
					_g15 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",761,0x575b2617)
						{
							HX_STACK_LINE(761)
							Float _g16;		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(761)
							{
								HX_STACK_LINE(761)
								{
									HX_STACK_LINE(761)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(761)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(761)
										_this->_validate();
									}
								}
								HX_STACK_LINE(761)
								_g16 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(761)
							return (_g16 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(761)
				if ((!(((  (((_g15 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(761)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(761)
						{
						}
					}
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(761)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(761)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(761)
				ret;
			}
			HX_STACK_LINE(761)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(761)
			ct = ret;
		}
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(762)
			while((true)){
				HX_STACK_LINE(762)
				if ((!(((_g < dcnt))))){
					HX_STACK_LINE(762)
					break;
				}
				HX_STACK_LINE(762)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(763)
				Float r11 = (r0 + drad);		HX_STACK_VAR(r11,"r11");
				HX_STACK_LINE(764)
				Float a11 = (a0 + dang);		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(765)
				Float c1 = ::Math_obj::cos(a11);		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(766)
				Float s1 = ::Math_obj::sin(a11);		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(767)
				{
					HX_STACK_LINE(767)
					Float _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						_g17 = c->zpp_inner->x;
					}
					HX_STACK_LINE(767)
					Float x = (_g17 + (r11 * c1));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(767)
					Float _g18;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						_g18 = c->zpp_inner->y;
					}
					HX_STACK_LINE(767)
					Float y = (_g18 + (r11 * s1));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(767)
					Float _g19;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						_g19 = p1->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &p1,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",767,0x575b2617)
							{
								HX_STACK_LINE(767)
								Float _g20;		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(767)
								{
									HX_STACK_LINE(767)
									{
										HX_STACK_LINE(767)
										::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(767)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(767)
											_this->_validate();
										}
									}
									HX_STACK_LINE(767)
									_g20 = p1->zpp_inner->y;
								}
								HX_STACK_LINE(767)
								return (_g20 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(767)
					if ((!(((  (((_g19 == x))) ? bool(_Function_4_1::Block(p1,y)) : bool(false) ))))){
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							p1->zpp_inner->x = x;
							HX_STACK_LINE(767)
							p1->zpp_inner->y = y;
							HX_STACK_LINE(767)
							{
							}
						}
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(767)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(767)
					p1;
				}
				HX_STACK_LINE(768)
				Float vx = ((dr * c1) - ((r11 * da) * s1));		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(769)
				Float vy = ((dr * s1) + ((r11 * da) * c1));		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(770)
				Float den = ((ux * vy) - (uy * vx));		HX_STACK_VAR(den,"den");
				HX_STACK_LINE(771)
				if ((((den * den) < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(771)
					g->drawLine(p0,p1,col);
				}
				else{
					HX_STACK_LINE(773)
					Float _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						_g21 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(773)
					Float _g22;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						_g22 = p0->zpp_inner->x;
					}
					HX_STACK_LINE(773)
					Float _g23 = (_g21 - _g22);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(773)
					Float _g24 = (_g23 * vy);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(773)
					Float _g25;		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						_g25 = p0->zpp_inner->y;
					}
					HX_STACK_LINE(773)
					Float _g26;		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						_g26 = p1->zpp_inner->y;
					}
					HX_STACK_LINE(773)
					Float _g27 = (_g25 - _g26);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(773)
					Float _g28 = (_g27 * vx);		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(773)
					Float _g29 = (_g24 + _g28);		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(773)
					Float t = (Float(_g29) / Float(den));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(774)
					if (((t <= (int)0))){
						HX_STACK_LINE(774)
						g->drawLine(p0,p1,col);
					}
					else{
						HX_STACK_LINE(776)
						{
							HX_STACK_LINE(776)
							Float _g30;		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(776)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(776)
										_this->_validate();
									}
								}
								HX_STACK_LINE(776)
								_g30 = p0->zpp_inner->x;
							}
							HX_STACK_LINE(776)
							Float x = (_g30 + (ux * t));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								Float _g31;		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									{
										HX_STACK_LINE(776)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(776)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(776)
											_this->_validate();
										}
									}
									HX_STACK_LINE(776)
									_g31 = ct->zpp_inner->x;
								}
								HX_STACK_LINE(776)
								if (((_g31 != x))){
									HX_STACK_LINE(776)
									ct->zpp_inner->x = x;
									HX_STACK_LINE(776)
									{
										HX_STACK_LINE(776)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(776)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(776)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(776)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(776)
										_this->_validate();
									}
								}
								HX_STACK_LINE(776)
								ct->zpp_inner->x;
							}
						}
						HX_STACK_LINE(777)
						{
							HX_STACK_LINE(777)
							Float _g32;		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(777)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(777)
										_this->_validate();
									}
								}
								HX_STACK_LINE(777)
								_g32 = p0->zpp_inner->y;
							}
							HX_STACK_LINE(777)
							Float y = (_g32 + (uy * t));		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								Float _g33;		HX_STACK_VAR(_g33,"_g33");
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(777)
											_this->_validate();
										}
									}
									HX_STACK_LINE(777)
									_g33 = ct->zpp_inner->y;
								}
								HX_STACK_LINE(777)
								if (((_g33 != y))){
									HX_STACK_LINE(777)
									ct->zpp_inner->y = y;
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(777)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(777)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(777)
										_this->_validate();
									}
								}
								HX_STACK_LINE(777)
								ct->zpp_inner->y;
							}
						}
						HX_STACK_LINE(778)
						g->drawCurve(p0,ct,p1,col);
					}
				}
				HX_STACK_LINE(781)
				r0 = r11;
				HX_STACK_LINE(782)
				a0 = a11;
				HX_STACK_LINE(783)
				c0 = c1;
				HX_STACK_LINE(784)
				s0 = s1;
				HX_STACK_LINE(785)
				ux = vx;
				HX_STACK_LINE(786)
				uy = vy;
				HX_STACK_LINE(787)
				{
					HX_STACK_LINE(787)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(787)
					{
						HX_STACK_LINE(787)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							x = p1->zpp_inner->x;
						}
						HX_STACK_LINE(787)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							y = p1->zpp_inner->y;
						}
						HX_STACK_LINE(787)
						Float _g34;		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							_g34 = p0->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &p0,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",787,0x575b2617)
								{
									HX_STACK_LINE(787)
									Float _g35;		HX_STACK_VAR(_g35,"_g35");
									HX_STACK_LINE(787)
									{
										HX_STACK_LINE(787)
										{
											HX_STACK_LINE(787)
											::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(787)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(787)
												_this->_validate();
											}
										}
										HX_STACK_LINE(787)
										_g35 = p0->zpp_inner->y;
									}
									HX_STACK_LINE(787)
									return (_g35 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(787)
						if ((!(((  (((_g34 == x))) ? bool(_Function_5_1::Block(p0,y)) : bool(false) ))))){
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								p0->zpp_inner->x = x;
								HX_STACK_LINE(787)
								p0->zpp_inner->y = y;
								HX_STACK_LINE(787)
								{
								}
							}
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(787)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(787)
						ret = p0;
					}
					HX_STACK_LINE(787)
					if ((p1->zpp_inner->weak)){
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(787)
							p1->zpp_inner->outer = null();
							HX_STACK_LINE(787)
							p1->zpp_inner = null();
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(787)
								o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
								HX_STACK_LINE(787)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(787)
								{
									HX_STACK_LINE(787)
									if (((o->outer != null()))){
										HX_STACK_LINE(787)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(787)
										o->outer = null();
									}
									HX_STACK_LINE(787)
									o->_isimmutable = null();
									HX_STACK_LINE(787)
									o->_validate = null();
									HX_STACK_LINE(787)
									o->_invalidate = null();
								}
								HX_STACK_LINE(787)
								o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(787)
						true;
					}
					else{
						HX_STACK_LINE(787)
						false;
					}
					HX_STACK_LINE(787)
					ret;
				}
			}
		}
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(789)
			p0->zpp_inner->outer = null();
			HX_STACK_LINE(789)
			p0->zpp_inner = null();
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
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
		{
			HX_STACK_LINE(790)
			::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(790)
			p1->zpp_inner->outer = null();
			HX_STACK_LINE(790)
			p1->zpp_inner = null();
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(790)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(790)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(790)
				{
					HX_STACK_LINE(790)
					if (((o->outer != null()))){
						HX_STACK_LINE(790)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(790)
						o->outer = null();
					}
					HX_STACK_LINE(790)
					o->_isimmutable = null();
					HX_STACK_LINE(790)
					o->_validate = null();
					HX_STACK_LINE(790)
					o->_invalidate = null();
				}
				HX_STACK_LINE(790)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(791)
		{
			HX_STACK_LINE(791)
			::zpp_nape::geom::ZPP_Vec2 inner = ct->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(791)
			ct->zpp_inner->outer = null();
			HX_STACK_LINE(791)
			ct->zpp_inner = null();
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::nape::geom::Vec2 o = ct;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(791)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					if (((o->outer != null()))){
						HX_STACK_LINE(791)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(791)
						o->outer = null();
					}
					HX_STACK_LINE(791)
					o->_isimmutable = null();
					HX_STACK_LINE(791)
					o->_validate = null();
					HX_STACK_LINE(791)
					o->_invalidate = null();
				}
				HX_STACK_LINE(791)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(791)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ZPP_AngleDraw_obj,drawSpiral,(void))


ZPP_AngleDraw_obj::ZPP_AngleDraw_obj()
{
}

Dynamic ZPP_AngleDraw_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maxarc") ) { return maxarc; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indicator") ) { return indicator_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawSpiral") ) { return drawSpiral_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawSpiralSpring") ) { return drawSpiralSpring_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AngleDraw_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maxarc") ) { maxarc=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AngleDraw_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("indicator"),
	HX_CSTRING("maxarc"),
	HX_CSTRING("drawSpiralSpring"),
	HX_CSTRING("drawSpiral"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AngleDraw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AngleDraw_obj::maxarc,"maxarc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AngleDraw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AngleDraw_obj::maxarc,"maxarc");
};

#endif

Class ZPP_AngleDraw_obj::__mClass;

void ZPP_AngleDraw_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_AngleDraw"), hx::TCanCast< ZPP_AngleDraw_obj> ,sStaticFields,sMemberFields,
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

void ZPP_AngleDraw_obj::__boot()
{
	maxarc= (Float(::Math_obj::PI) / Float((int)4));
}

} // end namespace zpp_nape
} // end namespace constraint
