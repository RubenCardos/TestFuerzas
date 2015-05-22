#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
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
namespace zpp_nape{
namespace dynamics{

Void ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","new",0xb3e8b5cf,"zpp_nape.dynamics.ZPP_FluidArbiter.new","zpp_nape/dynamics/Arbiter.hx",446,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(706)
	this->pre_dt = 0.0;
	HX_STACK_LINE(668)
	this->_mutable = false;
	HX_STACK_LINE(565)
	this->wrap_position = null();
	HX_STACK_LINE(517)
	this->buoyy = 0.0;
	HX_STACK_LINE(516)
	this->buoyx = 0.0;
	HX_STACK_LINE(515)
	this->ny = 0.0;
	HX_STACK_LINE(514)
	this->nx = 0.0;
	HX_STACK_LINE(513)
	this->lgamma = 0.0;
	HX_STACK_LINE(512)
	this->dampy = 0.0;
	HX_STACK_LINE(511)
	this->dampx = 0.0;
	HX_STACK_LINE(510)
	this->vMassc = 0.0;
	HX_STACK_LINE(509)
	this->vMassb = 0.0;
	HX_STACK_LINE(508)
	this->vMassa = 0.0;
	HX_STACK_LINE(507)
	this->agamma = 0.0;
	HX_STACK_LINE(506)
	this->adamp = 0.0;
	HX_STACK_LINE(505)
	this->wMass = 0.0;
	HX_STACK_LINE(504)
	this->nodrag = false;
	HX_STACK_LINE(503)
	this->r2y = 0.0;
	HX_STACK_LINE(502)
	this->r2x = 0.0;
	HX_STACK_LINE(501)
	this->r1y = 0.0;
	HX_STACK_LINE(500)
	this->r1x = 0.0;
	HX_STACK_LINE(499)
	this->overlap = 0.0;
	HX_STACK_LINE(498)
	this->centroidy = 0.0;
	HX_STACK_LINE(497)
	this->centroidx = 0.0;
	HX_STACK_LINE(448)
	this->next = null();
	HX_STACK_LINE(447)
	this->outer_zn = null();
	HX_STACK_LINE(574)
	super::__construct();
	HX_STACK_LINE(575)
	this->type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;
	HX_STACK_LINE(576)
	this->fluidarb = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(578)
		this->buoyx = (int)0;
		HX_STACK_LINE(579)
		this->buoyy = (int)0;
		HX_STACK_LINE(588)
		{
		}
	}
	HX_STACK_LINE(597)
	this->pre_dt = -1.0;
}
;
	return null();
}

//ZPP_FluidArbiter_obj::~ZPP_FluidArbiter_obj() { }

Dynamic ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZPP_FluidArbiter_obj > ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_FluidArbiter_obj > result = new ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_FluidArbiter_obj > result = new ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Void ZPP_FluidArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","alloc",0x904003a4,"zpp_nape.dynamics.ZPP_FluidArbiter.alloc","zpp_nape/dynamics/Arbiter.hx",476,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,alloc,(void))

Void ZPP_FluidArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","free",0xb276785d,"zpp_nape.dynamics.ZPP_FluidArbiter.free","zpp_nape/dynamics/Arbiter.hx",488,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,free,(void))

Void ZPP_FluidArbiter_obj::position_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","position_validate",0xcbea33db,"zpp_nape.dynamics.ZPP_FluidArbiter.position_validate","zpp_nape/dynamics/Arbiter.hx",522,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		this->wrap_position->zpp_inner->x = this->centroidx;
		HX_STACK_LINE(524)
		this->wrap_position->zpp_inner->y = this->centroidy;
		HX_STACK_LINE(533)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,position_validate,(void))

Void ZPP_FluidArbiter_obj::position_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","position_invalidate",0xe7039800,"zpp_nape.dynamics.ZPP_FluidArbiter.position_invalidate","zpp_nape/dynamics/Arbiter.hx",544,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(545)
		this->centroidx = x->x;
		HX_STACK_LINE(546)
		this->centroidy = x->y;
		HX_STACK_LINE(555)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidArbiter_obj,position_invalidate,(void))

Void ZPP_FluidArbiter_obj::getposition( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","getposition",0xe86b13ae,"zpp_nape.dynamics.ZPP_FluidArbiter.getposition","zpp_nape/dynamics/Arbiter.hx",566,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(567)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(567)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(567)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(567)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(567)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(567)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(567)
				ret = _g;
			}
			else{
				HX_STACK_LINE(567)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(567)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(567)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(567)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(567)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(567)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(567)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(567)
							ret1->next = null();
						}
						HX_STACK_LINE(567)
						ret1->weak = false;
					}
					HX_STACK_LINE(567)
					ret1->_immutable = immutable;
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						ret1->x = x;
						HX_STACK_LINE(567)
						ret1->y = y;
						HX_STACK_LINE(567)
						{
						}
					}
					HX_STACK_LINE(567)
					_g2 = ret1;
				}
				HX_STACK_LINE(567)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(567)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(567)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(567)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(567)
							_this->_validate();
						}
					}
					HX_STACK_LINE(567)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",567,0x26846f2e)
						{
							HX_STACK_LINE(567)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(567)
							{
								HX_STACK_LINE(567)
								{
									HX_STACK_LINE(567)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(567)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(567)
										_this->_validate();
									}
								}
								HX_STACK_LINE(567)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(567)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(567)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(567)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(567)
						{
						}
					}
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(567)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(567)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(567)
				ret;
			}
			HX_STACK_LINE(567)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(567)
			_g5 = ret;
		}
		HX_STACK_LINE(567)
		this->wrap_position = _g5;
		HX_STACK_LINE(568)
		this->wrap_position->zpp_inner->_inuse = true;
		HX_STACK_LINE(569)
		this->wrap_position->zpp_inner->_immutable = !(this->_mutable);
		HX_STACK_LINE(570)
		this->wrap_position->zpp_inner->_validate = this->position_validate_dyn();
		HX_STACK_LINE(571)
		this->wrap_position->zpp_inner->_invalidate = this->position_invalidate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,getposition,(void))

Void ZPP_FluidArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","assign",0xb42d3020,"zpp_nape.dynamics.ZPP_FluidArbiter.assign","zpp_nape/dynamics/Arbiter.hx",601,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			this->b1 = s1->body;
			HX_STACK_LINE(602)
			this->ws1 = s1;
			HX_STACK_LINE(602)
			this->b2 = s2->body;
			HX_STACK_LINE(602)
			this->ws2 = s2;
			HX_STACK_LINE(602)
			this->id = id;
			HX_STACK_LINE(602)
			this->di = di;
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter _g = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(602)
							ret = _g;
						}
						else{
							HX_STACK_LINE(602)
							ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(602)
							ret->next = null();
						}
						HX_STACK_LINE(602)
						Dynamic();
					}
					HX_STACK_LINE(602)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(602)
					temp = ret;
				}
				HX_STACK_LINE(602)
				temp->next = _this->head;
				HX_STACK_LINE(602)
				_this->head = temp;
				HX_STACK_LINE(602)
				_this->modified = true;
				HX_STACK_LINE(602)
				(_this->length)++;
				HX_STACK_LINE(602)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter _g1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(602)
							ret = _g1;
						}
						else{
							HX_STACK_LINE(602)
							ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(602)
							ret->next = null();
						}
						HX_STACK_LINE(602)
						Dynamic();
					}
					HX_STACK_LINE(602)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(602)
					temp = ret;
				}
				HX_STACK_LINE(602)
				temp->next = _this->head;
				HX_STACK_LINE(602)
				_this->head = temp;
				HX_STACK_LINE(602)
				_this->modified = true;
				HX_STACK_LINE(602)
				(_this->length)++;
				HX_STACK_LINE(602)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(602)
			this->active = true;
			HX_STACK_LINE(602)
			this->present = (int)0;
			HX_STACK_LINE(602)
			this->cleared = false;
			HX_STACK_LINE(602)
			this->sleeping = false;
			HX_STACK_LINE(602)
			this->fresh = false;
			HX_STACK_LINE(602)
			this->presentable = false;
		}
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(604)
			this->nx = (int)0;
			HX_STACK_LINE(605)
			this->ny = (int)1;
			HX_STACK_LINE(614)
			{
			}
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(624)
			this->dampx = (int)0;
			HX_STACK_LINE(625)
			this->dampy = (int)0;
			HX_STACK_LINE(634)
			{
			}
		}
		HX_STACK_LINE(643)
		this->adamp = 0.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_FluidArbiter_obj,assign,(void))

Void ZPP_FluidArbiter_obj::retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","retire",0x714b738c,"zpp_nape.dynamics.ZPP_FluidArbiter.retire","zpp_nape/dynamics/Arbiter.hx",647,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			if ((!(this->cleared))){
				HX_STACK_LINE(648)
				{
					HX_STACK_LINE(648)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(648)
					{
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(648)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(648)
						while((true)){
							HX_STACK_LINE(648)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(648)
								{
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(648)
									if (((pre == null()))){
										HX_STACK_LINE(648)
										old = _this->head;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										_this->head = ret1;
										HX_STACK_LINE(648)
										if (((_this->head == null()))){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(648)
										old = pre->next;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										pre->next = ret1;
										HX_STACK_LINE(648)
										if (((ret1 == null()))){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(648)
									{
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(648)
										o->elt = null();
										HX_STACK_LINE(648)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(648)
									_this->modified = true;
									HX_STACK_LINE(648)
									(_this->length)--;
									HX_STACK_LINE(648)
									_this->pushmod = true;
									HX_STACK_LINE(648)
									ret1;
								}
								HX_STACK_LINE(648)
								ret = true;
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							pre = cur;
							HX_STACK_LINE(648)
							cur = cur->next;
						}
						HX_STACK_LINE(648)
						ret;
					}
				}
				HX_STACK_LINE(648)
				{
					HX_STACK_LINE(648)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(648)
					{
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(648)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(648)
						while((true)){
							HX_STACK_LINE(648)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(648)
								{
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(648)
									if (((pre == null()))){
										HX_STACK_LINE(648)
										old = _this->head;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										_this->head = ret1;
										HX_STACK_LINE(648)
										if (((_this->head == null()))){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(648)
										old = pre->next;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										pre->next = ret1;
										HX_STACK_LINE(648)
										if (((ret1 == null()))){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(648)
									{
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(648)
										o->elt = null();
										HX_STACK_LINE(648)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(648)
									_this->modified = true;
									HX_STACK_LINE(648)
									(_this->length)--;
									HX_STACK_LINE(648)
									_this->pushmod = true;
									HX_STACK_LINE(648)
									ret1;
								}
								HX_STACK_LINE(648)
								ret = true;
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							pre = cur;
							HX_STACK_LINE(648)
							cur = cur->next;
						}
						HX_STACK_LINE(648)
						ret;
					}
				}
				HX_STACK_LINE(648)
				if (((this->pair != null()))){
					HX_STACK_LINE(648)
					this->pair->arb = null();
					HX_STACK_LINE(648)
					this->pair = null();
				}
			}
			HX_STACK_LINE(648)
			::zpp_nape::phys::ZPP_Body _g = this->b2 = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(648)
			this->b1 = _g;
			HX_STACK_LINE(648)
			this->active = false;
			HX_STACK_LINE(648)
			this->intchange = false;
		}
		HX_STACK_LINE(649)
		{
			HX_STACK_LINE(650)
			::zpp_nape::dynamics::ZPP_FluidArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(660)
			o->next = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;
			HX_STACK_LINE(661)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(666)
		this->pre_dt = -1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,retire,(void))

Void ZPP_FluidArbiter_obj::makemutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","makemutable",0xcf2febe7,"zpp_nape.dynamics.ZPP_FluidArbiter.makemutable","zpp_nape/dynamics/Arbiter.hx",671,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(672)
		this->_mutable = true;
		HX_STACK_LINE(673)
		if (((this->wrap_position != null()))){
			HX_STACK_LINE(673)
			this->wrap_position->zpp_inner->_immutable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,makemutable,(void))

Void ZPP_FluidArbiter_obj::makeimmutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","makeimmutable",0x0892e6c3,"zpp_nape.dynamics.ZPP_FluidArbiter.makeimmutable","zpp_nape/dynamics/Arbiter.hx",677,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(678)
		this->_mutable = false;
		HX_STACK_LINE(679)
		if (((this->wrap_position != null()))){
			HX_STACK_LINE(679)
			this->wrap_position->zpp_inner->_immutable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,makeimmutable,(void))

Void ZPP_FluidArbiter_obj::inject( Float area,Float cx,Float cy){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","inject",0x00113482,"zpp_nape.dynamics.ZPP_FluidArbiter.inject","zpp_nape/dynamics/Arbiter.hx",683,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(area,"area")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_LINE(684)
		this->overlap = area;
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(686)
			this->centroidx = cx;
			HX_STACK_LINE(687)
			this->centroidy = cy;
			HX_STACK_LINE(696)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_FluidArbiter_obj,inject,(void))

Void ZPP_FluidArbiter_obj::preStep( ::zpp_nape::space::ZPP_Space s,Float dt){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","preStep",0xdea689fe,"zpp_nape.dynamics.ZPP_FluidArbiter.preStep","zpp_nape/dynamics/Arbiter.hx",709,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(710)
		if (((this->pre_dt == -1.0))){
			HX_STACK_LINE(710)
			this->pre_dt = dt;
		}
		HX_STACK_LINE(711)
		Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
		HX_STACK_LINE(712)
		this->pre_dt = dt;
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(714)
			this->r1x = (this->centroidx - this->b1->posx);
			HX_STACK_LINE(715)
			this->r1y = (this->centroidy - this->b1->posy);
		}
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(718)
			this->r2x = (this->centroidx - this->b2->posx);
			HX_STACK_LINE(719)
			this->r2y = (this->centroidy - this->b2->posy);
		}
		HX_STACK_LINE(721)
		Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
		HX_STACK_LINE(722)
		Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
		HX_STACK_LINE(723)
		if (((bool(this->ws1->fluidEnabled) && bool((this->ws1->fluidProperties->wrap_gravity != null()))))){
			HX_STACK_LINE(724)
			g1x = this->ws1->fluidProperties->gravityx;
			HX_STACK_LINE(725)
			g1y = this->ws1->fluidProperties->gravityy;
			HX_STACK_LINE(734)
			{
			}
		}
		else{
			HX_STACK_LINE(744)
			g1x = s->gravityx;
			HX_STACK_LINE(745)
			g1y = s->gravityy;
			HX_STACK_LINE(754)
			{
			}
		}
		HX_STACK_LINE(763)
		Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
		HX_STACK_LINE(764)
		Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
		HX_STACK_LINE(765)
		if (((bool(this->ws2->fluidEnabled) && bool((this->ws2->fluidProperties->wrap_gravity != null()))))){
			HX_STACK_LINE(766)
			g2x = this->ws2->fluidProperties->gravityx;
			HX_STACK_LINE(767)
			g2y = this->ws2->fluidProperties->gravityy;
			HX_STACK_LINE(776)
			{
			}
		}
		else{
			HX_STACK_LINE(786)
			g2x = s->gravityx;
			HX_STACK_LINE(787)
			g2y = s->gravityy;
			HX_STACK_LINE(796)
			{
			}
		}
		HX_STACK_LINE(805)
		Float buoyx = (int)0;		HX_STACK_VAR(buoyx,"buoyx");
		HX_STACK_LINE(806)
		Float buoyy = (int)0;		HX_STACK_VAR(buoyy,"buoyy");
		HX_STACK_LINE(823)
		if (((bool(this->ws1->fluidEnabled) && bool(this->ws2->fluidEnabled)))){
			HX_STACK_LINE(824)
			Float mass1 = (this->overlap * this->ws1->fluidProperties->density);		HX_STACK_VAR(mass1,"mass1");
			HX_STACK_LINE(825)
			Float mass2 = (this->overlap * this->ws2->fluidProperties->density);		HX_STACK_VAR(mass2,"mass2");
			HX_STACK_LINE(826)
			if (((mass1 > mass2))){
				HX_STACK_LINE(827)
				Float t = (mass1 + mass2);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(836)
				hx::SubEq(buoyx,(g1x * t));
				HX_STACK_LINE(837)
				hx::SubEq(buoyy,(g1y * t));
			}
			else{
				HX_STACK_LINE(839)
				if (((mass1 < mass2))){
					HX_STACK_LINE(840)
					Float t = (mass1 + mass2);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(849)
					hx::AddEq(buoyx,(g2x * t));
					HX_STACK_LINE(850)
					hx::AddEq(buoyy,(g2y * t));
				}
				else{
					HX_STACK_LINE(853)
					Float gx = 0.0;		HX_STACK_VAR(gx,"gx");
					HX_STACK_LINE(854)
					Float gy = 0.0;		HX_STACK_VAR(gy,"gy");
					HX_STACK_LINE(855)
					{
						HX_STACK_LINE(856)
						gx = (g1x + g2x);
						HX_STACK_LINE(857)
						gy = (g1y + g2y);
					}
					HX_STACK_LINE(859)
					{
						HX_STACK_LINE(860)
						Float t = 0.5;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(869)
						hx::MultEq(gx,t);
						HX_STACK_LINE(870)
						hx::MultEq(gy,t);
					}
					HX_STACK_LINE(872)
					if (((((this->ws1->worldCOMx * gx) + (this->ws1->worldCOMy * gy)) > ((this->ws2->worldCOMx * gx) + (this->ws2->worldCOMy * gy))))){
						HX_STACK_LINE(873)
						Float t = (mass1 + mass2);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(882)
						hx::SubEq(buoyx,(gx * t));
						HX_STACK_LINE(883)
						hx::SubEq(buoyy,(gy * t));
					}
					else{
						HX_STACK_LINE(886)
						Float t = (mass1 + mass2);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(895)
						hx::AddEq(buoyx,(gx * t));
						HX_STACK_LINE(896)
						hx::AddEq(buoyy,(gy * t));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(900)
			if ((this->ws1->fluidEnabled)){
				HX_STACK_LINE(901)
				Float mass = (this->overlap * this->ws1->fluidProperties->density);		HX_STACK_VAR(mass,"mass");
				HX_STACK_LINE(902)
				{
					HX_STACK_LINE(903)
					Float t = mass;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(912)
					hx::SubEq(buoyx,(g1x * t));
					HX_STACK_LINE(913)
					hx::SubEq(buoyy,(g1y * t));
				}
			}
			else{
				HX_STACK_LINE(916)
				if ((this->ws2->fluidEnabled)){
					HX_STACK_LINE(917)
					Float mass = (this->overlap * this->ws2->fluidProperties->density);		HX_STACK_VAR(mass,"mass");
					HX_STACK_LINE(918)
					{
						HX_STACK_LINE(919)
						Float t = mass;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(928)
						hx::AddEq(buoyx,(g2x * t));
						HX_STACK_LINE(929)
						hx::AddEq(buoyy,(g2y * t));
					}
				}
			}
		}
		HX_STACK_LINE(932)
		{
			HX_STACK_LINE(933)
			Float t = dt;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(942)
			hx::MultEq(buoyx,t);
			HX_STACK_LINE(943)
			hx::MultEq(buoyy,t);
		}
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			this->buoyx = buoyx;
			HX_STACK_LINE(947)
			this->buoyy = buoyy;
			HX_STACK_LINE(956)
			{
			}
		}
		HX_STACK_LINE(965)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(966)
			{
				HX_STACK_LINE(967)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(976)
				hx::SubEq(this->b1->velx,(buoyx * t));
				HX_STACK_LINE(977)
				hx::SubEq(this->b1->vely,(buoyy * t));
			}
			HX_STACK_LINE(979)
			hx::SubEq(this->b1->angvel,((((buoyy * this->r1x) - (buoyx * this->r1y))) * this->b1->iinertia));
		}
		HX_STACK_LINE(981)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(982)
			{
				HX_STACK_LINE(983)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(992)
				hx::AddEq(this->b2->velx,(buoyx * t));
				HX_STACK_LINE(993)
				hx::AddEq(this->b2->vely,(buoyy * t));
			}
			HX_STACK_LINE(995)
			hx::AddEq(this->b2->angvel,((((buoyy * this->r2x) - (buoyx * this->r2y))) * this->b2->iinertia));
		}
		HX_STACK_LINE(997)
		if (((bool(((bool(!(this->ws1->fluidEnabled)) || bool((this->ws1->fluidProperties->viscosity == (int)0))))) && bool(((bool(!(this->ws2->fluidEnabled)) || bool((this->ws2->fluidProperties->viscosity == (int)0)))))))){
			HX_STACK_LINE(998)
			this->nodrag = true;
			HX_STACK_LINE(999)
			{
				HX_STACK_LINE(1000)
				this->dampx = (int)0;
				HX_STACK_LINE(1001)
				this->dampy = (int)0;
				HX_STACK_LINE(1010)
				{
				}
			}
			HX_STACK_LINE(1019)
			this->adamp = (int)0;
		}
		else{
			HX_STACK_LINE(1022)
			this->nodrag = false;
			HX_STACK_LINE(1023)
			Float tViscosity = 0.0;		HX_STACK_VAR(tViscosity,"tViscosity");
			HX_STACK_LINE(1024)
			if ((this->ws1->fluidEnabled)){
				HX_STACK_LINE(1025)
				this->ws2->validate_angDrag();
				HX_STACK_LINE(1026)
				hx::AddEq(tViscosity,(Float(((this->ws1->fluidProperties->viscosity * this->ws2->angDrag) * this->overlap)) / Float(this->ws2->area)));
			}
			HX_STACK_LINE(1028)
			if ((this->ws2->fluidEnabled)){
				HX_STACK_LINE(1029)
				this->ws1->validate_angDrag();
				HX_STACK_LINE(1030)
				hx::AddEq(tViscosity,(Float(((this->ws2->fluidProperties->viscosity * this->ws1->angDrag) * this->overlap)) / Float(this->ws1->area)));
			}
			HX_STACK_LINE(1032)
			if (((tViscosity != (int)0))){
				HX_STACK_LINE(1033)
				Float iSum = (this->b1->sinertia + this->b2->sinertia);		HX_STACK_VAR(iSum,"iSum");
				HX_STACK_LINE(1034)
				if (((iSum != (int)0))){
					HX_STACK_LINE(1034)
					this->wMass = (Float((int)1) / Float(iSum));
				}
				else{
					HX_STACK_LINE(1035)
					this->wMass = 0.0;
				}
				HX_STACK_LINE(1036)
				Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
				HX_STACK_LINE(1037)
				hx::MultEq(tViscosity,0.0004);
				HX_STACK_LINE(1038)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1038)
				{
					HX_STACK_LINE(1039)
					Float omega = (((int)2 * ::Math_obj::PI) * tViscosity);		HX_STACK_VAR(omega,"omega");
					HX_STACK_LINE(1040)
					this->agamma = (Float((int)1) / Float((((dt * omega) * (((int)2 + (omega * dt)))))));
					HX_STACK_LINE(1041)
					Float ig = (Float((int)1) / Float((((int)1 + this->agamma))));		HX_STACK_VAR(ig,"ig");
					HX_STACK_LINE(1042)
					biasCoef = (((dt * omega) * omega) * this->agamma);
					HX_STACK_LINE(1043)
					hx::MultEq(this->agamma,ig);
					HX_STACK_LINE(1044)
					_g = ig;
				}
				HX_STACK_LINE(1038)
				hx::MultEq(this->wMass,_g);
			}
			else{
				HX_STACK_LINE(1048)
				this->wMass = 0.0;
				HX_STACK_LINE(1049)
				this->agamma = 0.0;
			}
			HX_STACK_LINE(1051)
			Float vrnx = (((this->b2->velx + this->b2->kinvelx) - (this->r2y * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->velx + this->b1->kinvelx) - (this->r1y * ((this->b2->angvel + this->b2->kinangvel))))));		HX_STACK_VAR(vrnx,"vrnx");
			HX_STACK_LINE(1052)
			Float vrny = (((this->b2->vely + this->b2->kinvely) + (this->r2x * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->vely + this->b1->kinvely) + (this->r1x * ((this->b1->angvel + this->b1->kinangvel))))));		HX_STACK_VAR(vrny,"vrny");
			HX_STACK_LINE(1069)
			if (((((vrnx * vrnx) + (vrny * vrny)) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
			}
			else{
				HX_STACK_LINE(1071)
				{
					HX_STACK_LINE(1072)
					Float d = ((vrnx * vrnx) + (vrny * vrny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1081)
					Float imag;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1081)
					{
						HX_STACK_LINE(1081)
						Float _g1 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1081)
						imag = (Float(1.0) / Float(_g1));
					}
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1083)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1092)
						hx::MultEq(vrnx,t);
						HX_STACK_LINE(1093)
						hx::MultEq(vrny,t);
					}
				}
				HX_STACK_LINE(1096)
				{
					HX_STACK_LINE(1097)
					this->nx = vrnx;
					HX_STACK_LINE(1098)
					this->ny = vrny;
					HX_STACK_LINE(1107)
					{
					}
				}
			}
			HX_STACK_LINE(1117)
			Float tViscosity1 = 0.0;		HX_STACK_VAR(tViscosity1,"tViscosity1");
			HX_STACK_LINE(1118)
			if ((this->ws1->fluidEnabled)){
				HX_STACK_LINE(1119)
				Float f = (Float((-(this->ws1->fluidProperties->viscosity) * this->overlap)) / Float(this->ws2->area));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1120)
				if (((this->ws2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(1120)
					hx::SubEq(tViscosity1,(Float(((f * this->ws2->circle->radius) * ::nape::Config_obj::fluidLinearDrag)) / Float(((((int)2 * this->ws2->circle->radius) * ::Math_obj::PI)))));
				}
				else{
					HX_STACK_LINE(1122)
					::zpp_nape::shape::ZPP_Polygon poly = this->ws2->polygon;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(1123)
					Float bord = 0.0;		HX_STACK_VAR(bord,"bord");
					HX_STACK_LINE(1124)
					Float acc = 0.0;		HX_STACK_VAR(acc,"acc");
					HX_STACK_LINE(1125)
					{
						HX_STACK_LINE(1126)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1127)
						while((true)){
							HX_STACK_LINE(1127)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(1127)
								break;
							}
							HX_STACK_LINE(1128)
							::zpp_nape::shape::ZPP_Edge ex = cx_ite->elt;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1129)
							{
								HX_STACK_LINE(1130)
								hx::AddEq(bord,ex->length);
								HX_STACK_LINE(1131)
								Float fact = ((f * ex->length) * (((ex->gnormx * this->nx) + (ex->gnormy * this->ny))));		HX_STACK_VAR(fact,"fact");
								HX_STACK_LINE(1132)
								if (((fact > (int)0))){
									HX_STACK_LINE(1132)
									Float _g2 = hx::MultEq(fact,-(::nape::Config_obj::fluidVacuumDrag));		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1132)
									fact = _g2;
								}
								HX_STACK_LINE(1133)
								hx::SubEq(acc,((fact * 0.5) * ::nape::Config_obj::fluidLinearDrag));
							}
							HX_STACK_LINE(1135)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1138)
					hx::AddEq(tViscosity1,(Float(acc) / Float(bord)));
				}
			}
			HX_STACK_LINE(1141)
			if ((this->ws2->fluidEnabled)){
				HX_STACK_LINE(1142)
				Float f = (Float((-(this->ws2->fluidProperties->viscosity) * this->overlap)) / Float(this->ws1->area));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1143)
				if (((this->ws1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(1143)
					hx::SubEq(tViscosity1,(Float(((f * this->ws1->circle->radius) * ::nape::Config_obj::fluidLinearDrag)) / Float(((((int)2 * this->ws1->circle->radius) * ::Math_obj::PI)))));
				}
				else{
					HX_STACK_LINE(1145)
					::zpp_nape::shape::ZPP_Polygon poly = this->ws1->polygon;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(1146)
					Float bord = 0.0;		HX_STACK_VAR(bord,"bord");
					HX_STACK_LINE(1147)
					Float acc = 0.0;		HX_STACK_VAR(acc,"acc");
					HX_STACK_LINE(1148)
					{
						HX_STACK_LINE(1149)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1150)
						while((true)){
							HX_STACK_LINE(1150)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(1150)
								break;
							}
							HX_STACK_LINE(1151)
							::zpp_nape::shape::ZPP_Edge ex = cx_ite->elt;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1152)
							{
								HX_STACK_LINE(1153)
								hx::AddEq(bord,ex->length);
								HX_STACK_LINE(1154)
								Float fact = ((f * ex->length) * (((ex->gnormx * this->nx) + (ex->gnormy * this->ny))));		HX_STACK_VAR(fact,"fact");
								HX_STACK_LINE(1155)
								if (((fact > (int)0))){
									HX_STACK_LINE(1155)
									Float _g3 = hx::MultEq(fact,-(::nape::Config_obj::fluidVacuumDrag));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(1155)
									fact = _g3;
								}
								HX_STACK_LINE(1156)
								hx::SubEq(acc,((fact * 0.5) * ::nape::Config_obj::fluidLinearDrag));
							}
							HX_STACK_LINE(1158)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1161)
					hx::AddEq(tViscosity1,(Float(acc) / Float(bord)));
				}
			}
			HX_STACK_LINE(1164)
			if (((tViscosity1 != (int)0))){
				HX_STACK_LINE(1165)
				Float m = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1166)
				Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
				HX_STACK_LINE(1167)
				Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
				HX_STACK_LINE(1168)
				Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
				HX_STACK_LINE(1169)
				{
					HX_STACK_LINE(1170)
					Ka = m;
					HX_STACK_LINE(1171)
					Kb = (int)0;
					HX_STACK_LINE(1172)
					Kc = m;
				}
				HX_STACK_LINE(1174)
				if (((this->b1->sinertia != (int)0))){
					HX_STACK_LINE(1175)
					Float X = (this->r1x * this->b1->sinertia);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1176)
					Float Y = (this->r1y * this->b1->sinertia);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1177)
					{
						HX_STACK_LINE(1178)
						hx::AddEq(Ka,(Y * this->r1y));
						HX_STACK_LINE(1179)
						hx::AddEq(Kb,(-(Y) * this->r1x));
						HX_STACK_LINE(1180)
						hx::AddEq(Kc,(X * this->r1x));
					}
				}
				HX_STACK_LINE(1183)
				if (((this->b2->sinertia != (int)0))){
					HX_STACK_LINE(1184)
					Float X = (this->r2x * this->b2->sinertia);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1185)
					Float Y = (this->r2y * this->b2->sinertia);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1187)
						hx::AddEq(Ka,(Y * this->r2y));
						HX_STACK_LINE(1188)
						hx::AddEq(Kb,(-(Y) * this->r2x));
						HX_STACK_LINE(1189)
						hx::AddEq(Kc,(X * this->r2x));
					}
				}
				HX_STACK_LINE(1192)
				{
					HX_STACK_LINE(1193)
					Float det = ((Ka * Kc) - (Kb * Kb));		HX_STACK_VAR(det,"det");
					HX_STACK_LINE(1194)
					if (((det != det))){
						HX_STACK_LINE(1195)
						Float _g4 = Kc = (int)0;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1195)
						Float _g5 = Kb = _g4;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1195)
						Ka = _g5;
						HX_STACK_LINE(1196)
						(int)3;
					}
					else{
						HX_STACK_LINE(1198)
						if (((det == (int)0))){
							HX_STACK_LINE(1199)
							int flag = (int)0;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(1200)
							if (((Ka != (int)0))){
								HX_STACK_LINE(1200)
								Ka = (Float((int)1) / Float(Ka));
							}
							else{
								HX_STACK_LINE(1202)
								Ka = (int)0;
								HX_STACK_LINE(1203)
								hx::OrEq(flag,(int)1);
							}
							HX_STACK_LINE(1205)
							if (((Kc != (int)0))){
								HX_STACK_LINE(1205)
								Kc = (Float((int)1) / Float(Kc));
							}
							else{
								HX_STACK_LINE(1207)
								Kc = (int)0;
								HX_STACK_LINE(1208)
								hx::OrEq(flag,(int)2);
							}
							HX_STACK_LINE(1210)
							Kb = (int)0;
							HX_STACK_LINE(1211)
							flag;
						}
						else{
							HX_STACK_LINE(1214)
							det = (Float((int)1) / Float(det));
							HX_STACK_LINE(1215)
							Float t = (Kc * det);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1216)
							Kc = (Ka * det);
							HX_STACK_LINE(1217)
							Ka = t;
							HX_STACK_LINE(1218)
							hx::MultEq(Kb,-(det));
							HX_STACK_LINE(1219)
							(int)0;
						}
					}
				}
				HX_STACK_LINE(1222)
				{
					HX_STACK_LINE(1223)
					this->vMassa = Ka;
					HX_STACK_LINE(1224)
					this->vMassb = Kb;
					HX_STACK_LINE(1225)
					this->vMassc = Kc;
				}
				HX_STACK_LINE(1227)
				Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
				HX_STACK_LINE(1228)
				{
					HX_STACK_LINE(1229)
					Float X;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1229)
					{
						HX_STACK_LINE(1230)
						Float omega = (((int)2 * ::Math_obj::PI) * tViscosity1);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(1231)
						this->lgamma = (Float((int)1) / Float((((dt * omega) * (((int)2 + (omega * dt)))))));
						HX_STACK_LINE(1232)
						Float ig = (Float((int)1) / Float((((int)1 + this->lgamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(1233)
						biasCoef = (((dt * omega) * omega) * this->lgamma);
						HX_STACK_LINE(1234)
						hx::MultEq(this->lgamma,ig);
						HX_STACK_LINE(1235)
						X = ig;
					}
					HX_STACK_LINE(1237)
					hx::MultEq(this->vMassa,X);
					HX_STACK_LINE(1238)
					hx::MultEq(this->vMassb,X);
					HX_STACK_LINE(1239)
					hx::MultEq(this->vMassc,X);
				}
			}
			else{
				HX_STACK_LINE(1243)
				{
					HX_STACK_LINE(1244)
					this->vMassa = (int)0;
					HX_STACK_LINE(1245)
					this->vMassb = (int)0;
					HX_STACK_LINE(1246)
					this->vMassc = (int)0;
				}
				HX_STACK_LINE(1248)
				this->lgamma = 0.0;
			}
		}
		HX_STACK_LINE(1251)
		{
			HX_STACK_LINE(1252)
			Float t = dtratio;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1261)
			hx::MultEq(this->dampx,t);
			HX_STACK_LINE(1262)
			hx::MultEq(this->dampy,t);
		}
		HX_STACK_LINE(1264)
		hx::MultEq(this->adamp,dtratio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_FluidArbiter_obj,preStep,(void))

Void ZPP_FluidArbiter_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","warmStart",0x40a04a8c,"zpp_nape.dynamics.ZPP_FluidArbiter.warmStart","zpp_nape/dynamics/Arbiter.hx",1268,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1269)
		{
			HX_STACK_LINE(1270)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1279)
			hx::SubEq(this->b1->velx,(this->dampx * t));
			HX_STACK_LINE(1280)
			hx::SubEq(this->b1->vely,(this->dampy * t));
		}
		HX_STACK_LINE(1282)
		{
			HX_STACK_LINE(1283)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1292)
			hx::AddEq(this->b2->velx,(this->dampx * t));
			HX_STACK_LINE(1293)
			hx::AddEq(this->b2->vely,(this->dampy * t));
		}
		HX_STACK_LINE(1295)
		hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((this->dampy * this->r1x) - (this->dampx * this->r1y)))));
		HX_STACK_LINE(1296)
		hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((this->dampy * this->r2x) - (this->dampx * this->r2y)))));
		HX_STACK_LINE(1297)
		hx::SubEq(this->b1->angvel,(this->adamp * this->b1->iinertia));
		HX_STACK_LINE(1298)
		hx::AddEq(this->b2->angvel,(this->adamp * this->b2->iinertia));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,warmStart,(void))

Void ZPP_FluidArbiter_obj::applyImpulseVel( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","applyImpulseVel",0x4f9f97a5,"zpp_nape.dynamics.ZPP_FluidArbiter.applyImpulseVel","zpp_nape/dynamics/Arbiter.hx",1303,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1303)
		if ((!(this->nodrag))){
			HX_STACK_LINE(1304)
			Float w1 = (this->b1->angvel + this->b1->kinangvel);		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(1305)
			Float w2 = (this->b2->angvel + this->b2->kinangvel);		HX_STACK_VAR(w2,"w2");
			HX_STACK_LINE(1306)
			Float jx = (((this->b1->velx + this->b1->kinvelx) - (this->r1y * w1)) - (((this->b2->velx + this->b2->kinvelx) - (this->r2y * w2))));		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(1307)
			Float jy = (((this->b1->vely + this->b1->kinvely) + (this->r1x * w1)) - (((this->b2->vely + this->b2->kinvely) + (this->r2x * w2))));		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1325)
				Float t = ((this->vMassa * jx) + (this->vMassb * jy));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1326)
				jy = ((this->vMassb * jx) + (this->vMassc * jy));
				HX_STACK_LINE(1327)
				jx = t;
			}
			HX_STACK_LINE(1329)
			{
				HX_STACK_LINE(1330)
				Float t = this->lgamma;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1339)
				hx::SubEq(jx,(this->dampx * t));
				HX_STACK_LINE(1340)
				hx::SubEq(jy,(this->dampy * t));
			}
			HX_STACK_LINE(1342)
			{
				HX_STACK_LINE(1343)
				Float t = 1.0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1352)
				hx::AddEq(this->dampx,(jx * t));
				HX_STACK_LINE(1353)
				hx::AddEq(this->dampy,(jy * t));
			}
			HX_STACK_LINE(1355)
			{
				HX_STACK_LINE(1356)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1365)
				hx::SubEq(this->b1->velx,(jx * t));
				HX_STACK_LINE(1366)
				hx::SubEq(this->b1->vely,(jy * t));
			}
			HX_STACK_LINE(1368)
			{
				HX_STACK_LINE(1369)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1378)
				hx::AddEq(this->b2->velx,(jx * t));
				HX_STACK_LINE(1379)
				hx::AddEq(this->b2->vely,(jy * t));
			}
			HX_STACK_LINE(1381)
			hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((jy * this->r1x) - (jx * this->r1y)))));
			HX_STACK_LINE(1382)
			hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((jy * this->r2x) - (jx * this->r2y)))));
			HX_STACK_LINE(1383)
			Float j_damp = ((((w1 - w2)) * this->wMass) - (this->adamp * this->agamma));		HX_STACK_VAR(j_damp,"j_damp");
			HX_STACK_LINE(1384)
			hx::AddEq(this->adamp,j_damp);
			HX_STACK_LINE(1385)
			hx::SubEq(this->b1->angvel,(j_damp * this->b1->iinertia));
			HX_STACK_LINE(1386)
			hx::AddEq(this->b2->angvel,(j_damp * this->b2->iinertia));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,applyImpulseVel,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZPP_FluidArbiter_obj::zpp_pool;


ZPP_FluidArbiter_obj::ZPP_FluidArbiter_obj()
{
}

void ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(centroidx,"centroidx");
	HX_MARK_MEMBER_NAME(centroidy,"centroidy");
	HX_MARK_MEMBER_NAME(overlap,"overlap");
	HX_MARK_MEMBER_NAME(r1x,"r1x");
	HX_MARK_MEMBER_NAME(r1y,"r1y");
	HX_MARK_MEMBER_NAME(r2x,"r2x");
	HX_MARK_MEMBER_NAME(r2y,"r2y");
	HX_MARK_MEMBER_NAME(nodrag,"nodrag");
	HX_MARK_MEMBER_NAME(wMass,"wMass");
	HX_MARK_MEMBER_NAME(adamp,"adamp");
	HX_MARK_MEMBER_NAME(agamma,"agamma");
	HX_MARK_MEMBER_NAME(vMassa,"vMassa");
	HX_MARK_MEMBER_NAME(vMassb,"vMassb");
	HX_MARK_MEMBER_NAME(vMassc,"vMassc");
	HX_MARK_MEMBER_NAME(dampx,"dampx");
	HX_MARK_MEMBER_NAME(dampy,"dampy");
	HX_MARK_MEMBER_NAME(lgamma,"lgamma");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(buoyx,"buoyx");
	HX_MARK_MEMBER_NAME(buoyy,"buoyy");
	HX_MARK_MEMBER_NAME(wrap_position,"wrap_position");
	HX_MARK_MEMBER_NAME(_mutable,"mutable");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(centroidx,"centroidx");
	HX_VISIT_MEMBER_NAME(centroidy,"centroidy");
	HX_VISIT_MEMBER_NAME(overlap,"overlap");
	HX_VISIT_MEMBER_NAME(r1x,"r1x");
	HX_VISIT_MEMBER_NAME(r1y,"r1y");
	HX_VISIT_MEMBER_NAME(r2x,"r2x");
	HX_VISIT_MEMBER_NAME(r2y,"r2y");
	HX_VISIT_MEMBER_NAME(nodrag,"nodrag");
	HX_VISIT_MEMBER_NAME(wMass,"wMass");
	HX_VISIT_MEMBER_NAME(adamp,"adamp");
	HX_VISIT_MEMBER_NAME(agamma,"agamma");
	HX_VISIT_MEMBER_NAME(vMassa,"vMassa");
	HX_VISIT_MEMBER_NAME(vMassb,"vMassb");
	HX_VISIT_MEMBER_NAME(vMassc,"vMassc");
	HX_VISIT_MEMBER_NAME(dampx,"dampx");
	HX_VISIT_MEMBER_NAME(dampy,"dampy");
	HX_VISIT_MEMBER_NAME(lgamma,"lgamma");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(buoyx,"buoyx");
	HX_VISIT_MEMBER_NAME(buoyy,"buoyy");
	HX_VISIT_MEMBER_NAME(wrap_position,"wrap_position");
	HX_VISIT_MEMBER_NAME(_mutable,"mutable");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { return r1x; }
		if (HX_FIELD_EQ(inName,"r1y") ) { return r1y; }
		if (HX_FIELD_EQ(inName,"r2x") ) { return r2x; }
		if (HX_FIELD_EQ(inName,"r2y") ) { return r2y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"wMass") ) { return wMass; }
		if (HX_FIELD_EQ(inName,"adamp") ) { return adamp; }
		if (HX_FIELD_EQ(inName,"dampx") ) { return dampx; }
		if (HX_FIELD_EQ(inName,"dampy") ) { return dampy; }
		if (HX_FIELD_EQ(inName,"buoyx") ) { return buoyx; }
		if (HX_FIELD_EQ(inName,"buoyy") ) { return buoyy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nodrag") ) { return nodrag; }
		if (HX_FIELD_EQ(inName,"agamma") ) { return agamma; }
		if (HX_FIELD_EQ(inName,"vMassa") ) { return vMassa; }
		if (HX_FIELD_EQ(inName,"vMassb") ) { return vMassb; }
		if (HX_FIELD_EQ(inName,"vMassc") ) { return vMassc; }
		if (HX_FIELD_EQ(inName,"lgamma") ) { return lgamma; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"inject") ) { return inject_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap; }
		if (HX_FIELD_EQ(inName,"mutable") ) { return _mutable; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"centroidx") ) { return centroidx; }
		if (HX_FIELD_EQ(inName,"centroidy") ) { return centroidy; }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getposition") ) { return getposition_dyn(); }
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { return wrap_position; }
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"position_validate") ) { return position_validate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"position_invalidate") ) { return position_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { r1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1y") ) { r1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2x") ) { r2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2y") ) { r2y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wMass") ) { wMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adamp") ) { adamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampx") ) { dampx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampy") ) { dampy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buoyx") ) { buoyx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buoyy") ) { buoyy=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nodrag") ) { nodrag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"agamma") ) { agamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassa") ) { vMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassb") ) { vMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassc") ) { vMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lgamma") ) { lgamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { overlap=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mutable") ) { _mutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::dynamics::FluidArbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"centroidx") ) { centroidx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centroidy") ) { centroidy=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { wrap_position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zn"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("centroidx"));
	outFields->push(HX_CSTRING("centroidy"));
	outFields->push(HX_CSTRING("overlap"));
	outFields->push(HX_CSTRING("r1x"));
	outFields->push(HX_CSTRING("r1y"));
	outFields->push(HX_CSTRING("r2x"));
	outFields->push(HX_CSTRING("r2y"));
	outFields->push(HX_CSTRING("nodrag"));
	outFields->push(HX_CSTRING("wMass"));
	outFields->push(HX_CSTRING("adamp"));
	outFields->push(HX_CSTRING("agamma"));
	outFields->push(HX_CSTRING("vMassa"));
	outFields->push(HX_CSTRING("vMassb"));
	outFields->push(HX_CSTRING("vMassc"));
	outFields->push(HX_CSTRING("dampx"));
	outFields->push(HX_CSTRING("dampy"));
	outFields->push(HX_CSTRING("lgamma"));
	outFields->push(HX_CSTRING("nx"));
	outFields->push(HX_CSTRING("ny"));
	outFields->push(HX_CSTRING("buoyx"));
	outFields->push(HX_CSTRING("buoyy"));
	outFields->push(HX_CSTRING("wrap_position"));
	outFields->push(HX_CSTRING("mutable"));
	outFields->push(HX_CSTRING("pre_dt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::FluidArbiter*/ ,(int)offsetof(ZPP_FluidArbiter_obj,outer_zn),HX_CSTRING("outer_zn")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_FluidArbiter*/ ,(int)offsetof(ZPP_FluidArbiter_obj,next),HX_CSTRING("next")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,centroidx),HX_CSTRING("centroidx")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,centroidy),HX_CSTRING("centroidy")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,overlap),HX_CSTRING("overlap")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r1x),HX_CSTRING("r1x")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r1y),HX_CSTRING("r1y")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r2x),HX_CSTRING("r2x")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r2y),HX_CSTRING("r2y")},
	{hx::fsBool,(int)offsetof(ZPP_FluidArbiter_obj,nodrag),HX_CSTRING("nodrag")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,wMass),HX_CSTRING("wMass")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,adamp),HX_CSTRING("adamp")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,agamma),HX_CSTRING("agamma")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassa),HX_CSTRING("vMassa")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassb),HX_CSTRING("vMassb")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassc),HX_CSTRING("vMassc")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,dampx),HX_CSTRING("dampx")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,dampy),HX_CSTRING("dampy")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,lgamma),HX_CSTRING("lgamma")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,nx),HX_CSTRING("nx")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,ny),HX_CSTRING("ny")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,buoyx),HX_CSTRING("buoyx")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,buoyy),HX_CSTRING("buoyy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_FluidArbiter_obj,wrap_position),HX_CSTRING("wrap_position")},
	{hx::fsBool,(int)offsetof(ZPP_FluidArbiter_obj,_mutable),HX_CSTRING("mutable")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,pre_dt),HX_CSTRING("pre_dt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zn"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("centroidx"),
	HX_CSTRING("centroidy"),
	HX_CSTRING("overlap"),
	HX_CSTRING("r1x"),
	HX_CSTRING("r1y"),
	HX_CSTRING("r2x"),
	HX_CSTRING("r2y"),
	HX_CSTRING("nodrag"),
	HX_CSTRING("wMass"),
	HX_CSTRING("adamp"),
	HX_CSTRING("agamma"),
	HX_CSTRING("vMassa"),
	HX_CSTRING("vMassb"),
	HX_CSTRING("vMassc"),
	HX_CSTRING("dampx"),
	HX_CSTRING("dampy"),
	HX_CSTRING("lgamma"),
	HX_CSTRING("nx"),
	HX_CSTRING("ny"),
	HX_CSTRING("buoyx"),
	HX_CSTRING("buoyy"),
	HX_CSTRING("position_validate"),
	HX_CSTRING("position_invalidate"),
	HX_CSTRING("wrap_position"),
	HX_CSTRING("getposition"),
	HX_CSTRING("assign"),
	HX_CSTRING("retire"),
	HX_CSTRING("mutable"),
	HX_CSTRING("makemutable"),
	HX_CSTRING("makeimmutable"),
	HX_CSTRING("inject"),
	HX_CSTRING("pre_dt"),
	HX_CSTRING("preStep"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("applyImpulseVel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_FluidArbiter_obj::__mClass;

void ZPP_FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_FluidArbiter"), hx::TCanCast< ZPP_FluidArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZPP_FluidArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
