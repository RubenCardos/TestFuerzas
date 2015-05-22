#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeVelocity
#include <flixel/addons/nape/FlxNapeVelocity.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeVelocity_obj::__construct()
{
	return null();
}

//FlxNapeVelocity_obj::~FlxNapeVelocity_obj() { }

Dynamic FlxNapeVelocity_obj::__CreateEmpty() { return  new FlxNapeVelocity_obj; }
hx::ObjectPtr< FlxNapeVelocity_obj > FlxNapeVelocity_obj::__new()
{  hx::ObjectPtr< FlxNapeVelocity_obj > result = new FlxNapeVelocity_obj();
	result->__construct();
	return result;}

Dynamic FlxNapeVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeVelocity_obj > result = new FlxNapeVelocity_obj();
	result->__construct();
	return result;}

Void FlxNapeVelocity_obj::moveTowardsObject( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed){
Float Speed = __o_Speed.Default(100);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeVelocity","moveTowardsObject",0x7d11cb56,"flixel.addons.nape.FlxNapeVelocity.moveTowardsObject","flixel/addons/nape/FlxNapeVelocity.hx",23,0xbc39a1c5)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
{
		HX_STACK_LINE(24)
		Float direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(24)
			Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(24)
			Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(24)
			if ((AsDegrees)){
				HX_STACK_LINE(24)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(24)
				direction = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(24)
				direction = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(25)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::fromPolar(Speed,direction,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		Source->body->applyImpulse(_g,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxNapeVelocity_obj,moveTowardsObject,(void))

Void FlxNapeVelocity_obj::moveTowardsMouse( ::flixel::addons::nape::FlxNapeSprite Source,hx::Null< Float >  __o_Speed){
Float Speed = __o_Speed.Default(100);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeVelocity","moveTowardsMouse",0x7553a96e,"flixel.addons.nape.FlxNapeVelocity.moveTowardsMouse","flixel/addons/nape/FlxNapeVelocity.hx",37,0xbc39a1c5)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
{
		HX_STACK_LINE(38)
		Float direction = ::flixel::util::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(39)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::fromPolar(Speed,direction,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		Source->body->applyImpulse(_g,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxNapeVelocity_obj,moveTowardsMouse,(void))

Void FlxNapeVelocity_obj::moveTowardsTouch( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  __o_Speed){
Float Speed = __o_Speed.Default(100);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeVelocity","moveTowardsTouch",0x7d21ab08,"flixel.addons.nape.FlxNapeVelocity.moveTowardsTouch","flixel/addons/nape/FlxNapeVelocity.hx",52,0xbc39a1c5)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
{
		HX_STACK_LINE(53)
		Float direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint p = Source->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(53)
			Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(53)
			Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(53)
			if ((AsDegrees)){
				HX_STACK_LINE(53)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(53)
				direction = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(53)
				direction = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(54)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::fromPolar(Speed,direction,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		Source->body->applyImpulse(_g,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxNapeVelocity_obj,moveTowardsTouch,(void))

Void FlxNapeVelocity_obj::moveTowardsPoint( ::flixel::addons::nape::FlxNapeSprite Source,::flixel::util::FlxPoint Target,hx::Null< Float >  __o_Speed){
Float Speed = __o_Speed.Default(100);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeVelocity","moveTowardsPoint",0x2f7e4799,"flixel.addons.nape.FlxNapeVelocity.moveTowardsPoint","flixel/addons/nape/FlxNapeVelocity.hx",67,0xbc39a1c5)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
{
		HX_STACK_LINE(68)
		Float direction = ::flixel::util::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(69)
		::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::fromPolar(Speed,direction,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		Source->body->applyImpulse(_g,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxNapeVelocity_obj,moveTowardsPoint,(void))

Void FlxNapeVelocity_obj::stopVelocity( ::flixel::addons::nape::FlxNapeSprite Source){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeVelocity","stopVelocity",0xc8e0e1d3,"flixel.addons.nape.FlxNapeVelocity.stopVelocity","flixel/addons/nape/FlxNapeVelocity.hx",78,0xbc39a1c5)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_LINE(78)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::nape::phys::Body _this1 = Source->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(78)
			if (((_this1->zpp_inner->wrap_vel == null()))){
				HX_STACK_LINE(78)
				_this1->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(78)
			_this = _this1->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(78)
		::nape::geom::Vec2 vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(78)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(78)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(78)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(78)
				ret = _g;
			}
			else{
				HX_STACK_LINE(78)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(78)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(78)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(78)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(78)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(78)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(78)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(78)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(78)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(78)
							ret1->next = null();
						}
						HX_STACK_LINE(78)
						ret1->weak = false;
					}
					HX_STACK_LINE(78)
					ret1->_immutable = immutable;
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						ret1->x = (int)0;
						HX_STACK_LINE(78)
						ret1->y = (int)0;
						HX_STACK_LINE(78)
						{
						}
					}
					HX_STACK_LINE(78)
					_g2 = ret1;
				}
				HX_STACK_LINE(78)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(78)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(78)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(78)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(78)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(78)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeVelocity.hx",78,0xbc39a1c5)
						{
							HX_STACK_LINE(78)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								{
									HX_STACK_LINE(78)
									::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(78)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(78)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(78)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(78)
							return (_g4 == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(78)
				if ((!(((  (((_g3 == (int)0))) ? bool(_Function_3_1::Block(ret)) : bool(false) ))))){
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						ret->zpp_inner->x = (int)0;
						HX_STACK_LINE(78)
						ret->zpp_inner->y = (int)0;
						HX_STACK_LINE(78)
						{
						}
					}
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(78)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(78)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(78)
				ret;
			}
			HX_STACK_LINE(78)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(78)
			vector = ret;
		}
		HX_STACK_LINE(78)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(78)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(78)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(78)
				x = vector->zpp_inner->x;
			}
			HX_STACK_LINE(78)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(78)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(78)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(78)
				y = vector->zpp_inner->y;
			}
			HX_STACK_LINE(78)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(78)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(78)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(78)
				_g5 = _this->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeVelocity.hx",78,0xbc39a1c5)
					{
						HX_STACK_LINE(78)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(78)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(78)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(78)
							_g6 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(78)
						return (_g6 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(78)
			if ((!(((  (((_g5 == x))) ? bool(_Function_2_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(78)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(78)
					{
					}
				}
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(78)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(78)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(78)
			ret = _this;
		}
		HX_STACK_LINE(78)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(78)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(78)
				vector->zpp_inner = null();
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(78)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(78)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						if (((o->outer != null()))){
							HX_STACK_LINE(78)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(78)
							o->outer = null();
						}
						HX_STACK_LINE(78)
						o->_isimmutable = null();
						HX_STACK_LINE(78)
						o->_validate = null();
						HX_STACK_LINE(78)
						o->_invalidate = null();
					}
					HX_STACK_LINE(78)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(78)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(78)
			true;
		}
		else{
			HX_STACK_LINE(78)
			false;
		}
		HX_STACK_LINE(78)
		ret;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxNapeVelocity_obj,stopVelocity,(void))


FlxNapeVelocity_obj::FlxNapeVelocity_obj()
{
}

Dynamic FlxNapeVelocity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"stopVelocity") ) { return stopVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { return moveTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { return moveTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { return moveTowardsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { return moveTowardsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeVelocity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeVelocity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moveTowardsObject"),
	HX_CSTRING("moveTowardsMouse"),
	HX_CSTRING("moveTowardsTouch"),
	HX_CSTRING("moveTowardsPoint"),
	HX_CSTRING("stopVelocity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeVelocity_obj::__mClass,"__mClass");
};

#endif

Class FlxNapeVelocity_obj::__mClass;

void FlxNapeVelocity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.nape.FlxNapeVelocity"), hx::TCanCast< FlxNapeVelocity_obj> ,sStaticFields,sMemberFields,
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

void FlxNapeVelocity_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
