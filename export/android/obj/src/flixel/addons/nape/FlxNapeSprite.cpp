#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeState
#include <flixel/addons/nape/FlxNapeState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics)
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","new",0x927785f4,"flixel.addons.nape.FlxNapeSprite.new","flixel/addons/nape/FlxNapeSprite.hx",21,0x811bdfdd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(__o_CreateRectangularBody,"CreateRectangularBody")
HX_STACK_ARG(__o_EnablePhysics,"EnablePhysics")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool CreateRectangularBody = __o_CreateRectangularBody.Default(true);
bool EnablePhysics = __o_EnablePhysics.Default(true);
{
	HX_STACK_LINE(42)
	this->_angularDrag = (int)1;
	HX_STACK_LINE(37)
	this->_linearDrag = (int)1;
	HX_STACK_LINE(31)
	this->physicsEnabled = false;
	HX_STACK_LINE(59)
	super::__construct(X,Y,SimpleGraphic);
	HX_STACK_LINE(61)
	if ((CreateRectangularBody)){
		HX_STACK_LINE(63)
		this->createRectangularBody(null(),null(),null());
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(64)
				::nape::space::Space space;		HX_STACK_VAR(space,"space");
				HX_STACK_LINE(64)
				if ((EnablePhysics)){
					HX_STACK_LINE(64)
					space = ::flixel::addons::nape::FlxNapeState_obj::space;
				}
				else{
					HX_STACK_LINE(64)
					space = null();
				}
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
					HX_STACK_LINE(64)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
						HX_STACK_LINE(64)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(64)
							_this->zpp_inner->component->woken = false;
						}
						HX_STACK_LINE(64)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(64)
							((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
						}
						HX_STACK_LINE(64)
						if (((space != null()))){
							HX_STACK_LINE(64)
							::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(64)
							if ((_this1->zpp_inner->reverse_flag)){
								HX_STACK_LINE(64)
								_this1->push(_this);
							}
							else{
								HX_STACK_LINE(64)
								_this1->unshift(_this);
							}
						}
					}
				}
				HX_STACK_LINE(64)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(64)
					Dynamic();
				}
				else{
					HX_STACK_LINE(64)
					_this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(64)
			this->physicsEnabled = EnablePhysics;
		}
	}
}
;
	return null();
}

//FlxNapeSprite_obj::~FlxNapeSprite_obj() { }

Dynamic FlxNapeSprite_obj::__CreateEmpty() { return  new FlxNapeSprite_obj; }
hx::ObjectPtr< FlxNapeSprite_obj > FlxNapeSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics)
{  hx::ObjectPtr< FlxNapeSprite_obj > result = new FlxNapeSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic,__o_CreateRectangularBody,__o_EnablePhysics);
	return result;}

Dynamic FlxNapeSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeSprite_obj > result = new FlxNapeSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxNapeSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","destroy",0xc2763c8e,"flixel.addons.nape.FlxNapeSprite.destroy","flixel/addons/nape/FlxNapeSprite.hx",76,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->destroyPhysObjects();
		HX_STACK_LINE(79)
		this->super::destroy();
	}
return null();
}


Void FlxNapeSprite_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","update",0xb23484f5,"flixel.addons.nape.FlxNapeSprite.update","flixel/addons/nape/FlxNapeSprite.hx",86,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::update();
		HX_STACK_LINE(89)
		if (((bool((this->body != null())) && bool(this->moves)))){
			HX_STACK_LINE(91)
			this->updatePhysObjects();
		}
	}
return null();
}


Void FlxNapeSprite_obj::kill( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","kill",0x94250b8a,"flixel.addons.nape.FlxNapeSprite.kill","flixel/addons/nape/FlxNapeSprite.hx",100,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::kill();
		HX_STACK_LINE(103)
		if (((this->body != null()))){
			HX_STACK_LINE(105)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(105)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(105)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(105)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(105)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(105)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(105)
					{
					}
				}
			}
			HX_STACK_LINE(105)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(105)
				Dynamic();
			}
			else{
				HX_STACK_LINE(105)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


Void FlxNapeSprite_obj::revive( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","revive",0x35a5f941,"flixel.addons.nape.FlxNapeSprite.revive","flixel/addons/nape/FlxNapeSprite.hx",114,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->super::revive();
		HX_STACK_LINE(117)
		if (((this->body != null()))){
			HX_STACK_LINE(119)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(119)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(119)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(119)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(119)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(119)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(119)
					if (((space != null()))){
						HX_STACK_LINE(119)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(119)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(119)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(119)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(119)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(119)
				Dynamic();
			}
			else{
				HX_STACK_LINE(119)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


Void FlxNapeSprite_obj::addPremadeBody( ::nape::phys::Body NewBody){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","addPremadeBody",0x42b17685,"flixel.addons.nape.FlxNapeSprite.addPremadeBody","flixel/addons/nape/FlxNapeSprite.hx",130,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewBody,"NewBody")
		HX_STACK_LINE(131)
		::nape::space::Space currSpace = null();		HX_STACK_VAR(currSpace,"currSpace");
		HX_STACK_LINE(133)
		if (((this->body != null()))){
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(135)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(135)
					currSpace = null();
				}
				else{
					HX_STACK_LINE(135)
					currSpace = _this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(136)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				if (((NewBody->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(139)
					NewBody->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(139)
				_this = NewBody->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(139)
			Float x = this->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(139)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(139)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(139)
					_g = _this->zpp_inner->x;
				}
				HX_STACK_LINE(139)
				if (((_g != x))){
					HX_STACK_LINE(139)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(139)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(139)
							_this1->_invalidate(_this1);
						}
					}
				}
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(139)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(139)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(139)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				if (((NewBody->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(140)
					NewBody->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(140)
				_this = NewBody->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(140)
			Float y = this->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(140)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(140)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(140)
					_g1 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(140)
				if (((_g1 != y))){
					HX_STACK_LINE(140)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(140)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(140)
							_this1->_invalidate(_this1);
						}
					}
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(140)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(140)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(140)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				NewBody->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(141)
				if (((((  (((NewBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(NewBody->zpp_inner->space->outer) )) != currSpace))){
					HX_STACK_LINE(141)
					if (((((  (((NewBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(NewBody->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(141)
						NewBody->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(141)
					if (((((  (((NewBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(NewBody->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(141)
						((  (((NewBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(NewBody->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(NewBody);
					}
					HX_STACK_LINE(141)
					if (((currSpace != null()))){
						HX_STACK_LINE(141)
						::nape::phys::BodyList _this = currSpace->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(141)
						if ((_this->zpp_inner->reverse_flag)){
							HX_STACK_LINE(141)
							_this->push(NewBody);
						}
						else{
							HX_STACK_LINE(141)
							_this->unshift(NewBody);
						}
					}
				}
			}
			HX_STACK_LINE(141)
			if (((NewBody->zpp_inner->space == null()))){
				HX_STACK_LINE(141)
				Dynamic();
			}
			else{
				HX_STACK_LINE(141)
				NewBody->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(142)
		this->body = NewBody;
		HX_STACK_LINE(143)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSprite_obj,addPremadeBody,(void))

Void FlxNapeSprite_obj::createCircularBody( hx::Null< Float >  __o_Radius,::nape::phys::BodyType _Type){
Float Radius = __o_Radius.Default(16);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","createCircularBody",0x406956a9,"flixel.addons.nape.FlxNapeSprite.createCircularBody","flixel/addons/nape/FlxNapeSprite.hx",153,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(_Type,"_Type")
{
		HX_STACK_LINE(154)
		::nape::space::Space currSpace = null();		HX_STACK_VAR(currSpace,"currSpace");
		HX_STACK_LINE(156)
		if (((this->body != null()))){
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(158)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(158)
					currSpace = null();
				}
				else{
					HX_STACK_LINE(158)
					currSpace = _this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(159)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(162)
		this->centerOffsets(false);
		HX_STACK_LINE(163)
		::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		if (((_Type != null()))){
			HX_STACK_LINE(163)
			_g1 = _Type;
		}
		else{
			HX_STACK_LINE(163)
			if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
				HX_STACK_LINE(163)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(163)
				::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(163)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g;
				HX_STACK_LINE(163)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(163)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(163)
		::nape::geom::Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			Float x = this->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(163)
			Float y = this->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(163)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(163)
					::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(163)
					ret = _g2;
				}
				else{
					HX_STACK_LINE(163)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(163)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(163)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(163)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(163)
					::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(163)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(163)
								::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(163)
								ret1 = _g3;
							}
							else{
								HX_STACK_LINE(163)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(163)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(163)
								ret1->next = null();
							}
							HX_STACK_LINE(163)
							ret1->weak = false;
						}
						HX_STACK_LINE(163)
						ret1->_immutable = immutable;
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							ret1->x = x;
							HX_STACK_LINE(163)
							ret1->y = y;
							HX_STACK_LINE(163)
							{
							}
						}
						HX_STACK_LINE(163)
						_g4 = ret1;
					}
					HX_STACK_LINE(163)
					ret->zpp_inner = _g4;
					HX_STACK_LINE(163)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(163)
					Float _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(163)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(163)
								_this->_validate();
							}
						}
						HX_STACK_LINE(163)
						_g5 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeSprite.hx",163,0x811bdfdd)
							{
								HX_STACK_LINE(163)
								Float _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(163)
								{
									HX_STACK_LINE(163)
									{
										HX_STACK_LINE(163)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(163)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(163)
											_this->_validate();
										}
									}
									HX_STACK_LINE(163)
									_g6 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(163)
								return (_g6 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(163)
					if ((!(((  (((_g5 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(163)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(163)
							{
							}
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(163)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(163)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(163)
					ret;
				}
				HX_STACK_LINE(163)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(163)
				_g7 = ret;
			}
		}
		HX_STACK_LINE(163)
		::nape::phys::Body _g8 = ::nape::phys::Body_obj::__new(_g1,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(163)
		this->body = _g8;
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(164)
			::nape::shape::Shape obj = ::nape::shape::Circle_obj::__new(Radius,null(),null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(164)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(164)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(164)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(165)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != currSpace))){
					HX_STACK_LINE(165)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(165)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(165)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(165)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(165)
					if (((currSpace != null()))){
						HX_STACK_LINE(165)
						::nape::phys::BodyList _this1 = currSpace->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(165)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(165)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(165)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(165)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(165)
				Dynamic();
			}
			else{
				HX_STACK_LINE(165)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(167)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeSprite_obj,createCircularBody,(void))

Void FlxNapeSprite_obj::createRectangularBody( hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,::nape::phys::BodyType _Type){
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","createRectangularBody",0x984e32f8,"flixel.addons.nape.FlxNapeSprite.createRectangularBody","flixel/addons/nape/FlxNapeSprite.hx",181,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(_Type,"_Type")
{
		HX_STACK_LINE(182)
		::nape::space::Space currSpace = null();		HX_STACK_VAR(currSpace,"currSpace");
		HX_STACK_LINE(184)
		if (((this->body != null()))){
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(186)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(186)
					currSpace = null();
				}
				else{
					HX_STACK_LINE(186)
					currSpace = _this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(187)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(190)
		if (((Width == (int)0))){
			HX_STACK_LINE(192)
			Width = this->frameWidth;
		}
		HX_STACK_LINE(194)
		if (((Height == (int)0))){
			HX_STACK_LINE(196)
			Height = this->frameHeight;
		}
		HX_STACK_LINE(199)
		this->centerOffsets(false);
		HX_STACK_LINE(200)
		::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(200)
		if (((_Type != null()))){
			HX_STACK_LINE(200)
			_g1 = _Type;
		}
		else{
			HX_STACK_LINE(200)
			if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(200)
				::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g;
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(200)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(200)
		::nape::geom::Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			Float x = this->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(200)
			Float y = this->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(200)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(200)
					::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(200)
					ret = _g2;
				}
				else{
					HX_STACK_LINE(200)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(200)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(200)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(200)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(200)
								::zpp_nape::geom::ZPP_Vec2 _g3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(200)
								ret1 = _g3;
							}
							else{
								HX_STACK_LINE(200)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(200)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(200)
								ret1->next = null();
							}
							HX_STACK_LINE(200)
							ret1->weak = false;
						}
						HX_STACK_LINE(200)
						ret1->_immutable = immutable;
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							ret1->x = x;
							HX_STACK_LINE(200)
							ret1->y = y;
							HX_STACK_LINE(200)
							{
							}
						}
						HX_STACK_LINE(200)
						_g4 = ret1;
					}
					HX_STACK_LINE(200)
					ret->zpp_inner = _g4;
					HX_STACK_LINE(200)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(200)
					Float _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(200)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(200)
								_this->_validate();
							}
						}
						HX_STACK_LINE(200)
						_g5 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeSprite.hx",200,0x811bdfdd)
							{
								HX_STACK_LINE(200)
								Float _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(200)
								{
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(200)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(200)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(200)
											_this->_validate();
										}
									}
									HX_STACK_LINE(200)
									_g6 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(200)
								return (_g6 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(200)
					if ((!(((  (((_g5 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(200)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(200)
							{
							}
						}
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(200)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(200)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(200)
					ret;
				}
				HX_STACK_LINE(200)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(200)
				_g7 = ret;
			}
		}
		HX_STACK_LINE(200)
		::nape::phys::Body _g8 = ::nape::phys::Body_obj::__new(_g1,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(200)
		this->body = _g8;
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(201)
			Array< ::Dynamic > _g9 = ::nape::shape::Polygon_obj::box(Width,Height,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(201)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(_g9,null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(201)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(201)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(201)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(202)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != currSpace))){
					HX_STACK_LINE(202)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(202)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(202)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(202)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(202)
					if (((currSpace != null()))){
						HX_STACK_LINE(202)
						::nape::phys::BodyList _this1 = currSpace->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(202)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(202)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(202)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(202)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(202)
				Dynamic();
			}
			else{
				HX_STACK_LINE(202)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(204)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeSprite_obj,createRectangularBody,(void))

Void FlxNapeSprite_obj::setBodyMaterial( hx::Null< Float >  __o_Elasticity,hx::Null< Float >  __o_DynamicFriction,hx::Null< Float >  __o_StaticFriction,hx::Null< Float >  __o_Density,hx::Null< Float >  __o_RotationFriction){
Float Elasticity = __o_Elasticity.Default(1);
Float DynamicFriction = __o_DynamicFriction.Default(0.2);
Float StaticFriction = __o_StaticFriction.Default(0.4);
Float Density = __o_Density.Default(1);
Float RotationFriction = __o_RotationFriction.Default(0.001);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setBodyMaterial",0xec9e9bbf,"flixel.addons.nape.FlxNapeSprite.setBodyMaterial","flixel/addons/nape/FlxNapeSprite.hx",217,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Elasticity,"Elasticity")
	HX_STACK_ARG(DynamicFriction,"DynamicFriction")
	HX_STACK_ARG(StaticFriction,"StaticFriction")
	HX_STACK_ARG(Density,"Density")
	HX_STACK_ARG(RotationFriction,"RotationFriction")
{
		HX_STACK_LINE(218)
		if (((this->body == null()))){
			HX_STACK_LINE(220)
			return null();
		}
		HX_STACK_LINE(223)
		::nape::phys::Material _g = ::nape::phys::Material_obj::__new(Elasticity,DynamicFriction,StaticFriction,Density,RotationFriction);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		this->body->setShapeMaterials(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxNapeSprite_obj,setBodyMaterial,(void))

Void FlxNapeSprite_obj::destroyPhysObjects( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","destroyPhysObjects",0x7450bf34,"flixel.addons.nape.FlxNapeSprite.destroyPhysObjects","flixel/addons/nape/FlxNapeSprite.hx",231,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		if (((this->body != null()))){
			HX_STACK_LINE(233)
			::flixel::addons::nape::FlxNapeState_obj::space->zpp_inner->wrap_bodies->remove(this->body);
			HX_STACK_LINE(234)
			this->body = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSprite_obj,destroyPhysObjects,(void))

Void FlxNapeSprite_obj::setDrag( hx::Null< Float >  __o_LinearDrag,hx::Null< Float >  __o_AngularDrag){
Float LinearDrag = __o_LinearDrag.Default(1);
Float AngularDrag = __o_AngularDrag.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setDrag",0xa5e47c4a,"flixel.addons.nape.FlxNapeSprite.setDrag","flixel/addons/nape/FlxNapeSprite.hx",247,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(LinearDrag,"LinearDrag")
	HX_STACK_ARG(AngularDrag,"AngularDrag")
{
		HX_STACK_LINE(248)
		this->_linearDrag = LinearDrag;
		HX_STACK_LINE(249)
		this->_angularDrag = AngularDrag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeSprite_obj,setDrag,(void))

Void FlxNapeSprite_obj::updatePhysObjects( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","updatePhysObjects",0x8c2c922d,"flixel.addons.nape.FlxNapeSprite.updatePhysObjects","flixel/addons/nape/FlxNapeSprite.hx",270,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(271)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(271)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(271)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(271)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(271)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(271)
			_g = _this->zpp_inner->x;
		}
		HX_STACK_LINE(271)
		Float _g1 = (_g - this->origin->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		this->set_x(_g1);
		HX_STACK_LINE(272)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(272)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(272)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(272)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(272)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(272)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(272)
			_g2 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(272)
		Float _g3 = (_g2 - this->origin->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(272)
		this->set_y(_g3);
		HX_STACK_LINE(274)
		if ((!(this->body->zpp_inner->norotate))){
			HX_STACK_LINE(276)
			this->set_angle((this->body->zpp_inner->rot * ((Float((int)180) / Float(::Math_obj::PI)))));
		}
		HX_STACK_LINE(280)
		if (((bool((this->_linearDrag < (int)1)) || bool((this->_angularDrag < (int)1))))){
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(282)
				::nape::phys::Body _g4 = this->body;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(282)
					Float angularVel = (_g4->zpp_inner->angvel * this->_angularDrag);		HX_STACK_VAR(angularVel,"angularVel");
					HX_STACK_LINE(282)
					if (((_g4->zpp_inner->angvel != angularVel))){
						HX_STACK_LINE(282)
						_g4->zpp_inner->angvel = angularVel;
						HX_STACK_LINE(282)
						_g4->zpp_inner->wake();
					}
					HX_STACK_LINE(282)
					_g4->zpp_inner->angvel;
				}
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::nape::geom::Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(283)
					if (((_this->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(283)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(283)
					_g4 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					Float _g41;		HX_STACK_VAR(_g41,"_g41");
					HX_STACK_LINE(283)
					{
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(283)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(283)
								_this->_validate();
							}
						}
						HX_STACK_LINE(283)
						_g41 = _g4->zpp_inner->x;
					}
					HX_STACK_LINE(283)
					Float x = (_g41 * this->_linearDrag);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(283)
					{
						HX_STACK_LINE(283)
						Float _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(283)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(283)
									_this->_validate();
								}
							}
							HX_STACK_LINE(283)
							_g5 = _g4->zpp_inner->x;
						}
						HX_STACK_LINE(283)
						if (((_g5 != x))){
							HX_STACK_LINE(283)
							_g4->zpp_inner->x = x;
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(283)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(283)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(283)
					{
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(283)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(283)
								_this->_validate();
							}
						}
						HX_STACK_LINE(283)
						_g4->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::nape::geom::Vec2 _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(284)
					if (((_this->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(284)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(284)
					_g4 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					Float _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(284)
							::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(284)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(284)
								_this->_validate();
							}
						}
						HX_STACK_LINE(284)
						_g6 = _g4->zpp_inner->y;
					}
					HX_STACK_LINE(284)
					Float y = (_g6 * this->_linearDrag);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(284)
						Float _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(284)
							{
								HX_STACK_LINE(284)
								::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(284)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(284)
									_this->_validate();
								}
							}
							HX_STACK_LINE(284)
							_g7 = _g4->zpp_inner->y;
						}
						HX_STACK_LINE(284)
						if (((_g7 != y))){
							HX_STACK_LINE(284)
							_g4->zpp_inner->y = y;
							HX_STACK_LINE(284)
							{
								HX_STACK_LINE(284)
								::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(284)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(284)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(284)
							::zpp_nape::geom::ZPP_Vec2 _this = _g4->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(284)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(284)
								_this->_validate();
							}
						}
						HX_STACK_LINE(284)
						_g4->zpp_inner->y;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSprite_obj,updatePhysObjects,(void))

bool FlxNapeSprite_obj::set_physicsEnabled( bool Value){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","set_physicsEnabled",0xe2ef6ea3,"flixel.addons.nape.FlxNapeSprite.set_physicsEnabled","flixel/addons/nape/FlxNapeSprite.hx",289,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(290)
	{
		HX_STACK_LINE(290)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(290)
		::nape::space::Space space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(290)
		if ((Value)){
			HX_STACK_LINE(290)
			space = ::flixel::addons::nape::FlxNapeState_obj::space;
		}
		else{
			HX_STACK_LINE(290)
			space = null();
		}
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(290)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(290)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(290)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(290)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(290)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(290)
				if (((space != null()))){
					HX_STACK_LINE(290)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(290)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(290)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(290)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(290)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(290)
			Dynamic();
		}
		else{
			HX_STACK_LINE(290)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(291)
	return this->physicsEnabled = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSprite_obj,set_physicsEnabled,return )


FlxNapeSprite_obj::FlxNapeSprite_obj()
{
}

void FlxNapeSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNapeSprite);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(physicsEnabled,"physicsEnabled");
	HX_MARK_MEMBER_NAME(_linearDrag,"_linearDrag");
	HX_MARK_MEMBER_NAME(_angularDrag,"_angularDrag");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxNapeSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(physicsEnabled,"physicsEnabled");
	HX_VISIT_MEMBER_NAME(_linearDrag,"_linearDrag");
	HX_VISIT_MEMBER_NAME(_angularDrag,"_angularDrag");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxNapeSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setDrag") ) { return setDrag_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linearDrag") ) { return _linearDrag; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angularDrag") ) { return _angularDrag; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"physicsEnabled") ) { return physicsEnabled; }
		if (HX_FIELD_EQ(inName,"addPremadeBody") ) { return addPremadeBody_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setBodyMaterial") ) { return setBodyMaterial_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updatePhysObjects") ) { return updatePhysObjects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createCircularBody") ) { return createCircularBody_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyPhysObjects") ) { return destroyPhysObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"set_physicsEnabled") ) { return set_physicsEnabled_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createRectangularBody") ) { return createRectangularBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linearDrag") ) { _linearDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angularDrag") ) { _angularDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"physicsEnabled") ) { if (inCallProp) return set_physicsEnabled(inValue);physicsEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("physicsEnabled"));
	outFields->push(HX_CSTRING("_linearDrag"));
	outFields->push(HX_CSTRING("_angularDrag"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(FlxNapeSprite_obj,body),HX_CSTRING("body")},
	{hx::fsBool,(int)offsetof(FlxNapeSprite_obj,physicsEnabled),HX_CSTRING("physicsEnabled")},
	{hx::fsFloat,(int)offsetof(FlxNapeSprite_obj,_linearDrag),HX_CSTRING("_linearDrag")},
	{hx::fsFloat,(int)offsetof(FlxNapeSprite_obj,_angularDrag),HX_CSTRING("_angularDrag")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("body"),
	HX_CSTRING("physicsEnabled"),
	HX_CSTRING("_linearDrag"),
	HX_CSTRING("_angularDrag"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("kill"),
	HX_CSTRING("revive"),
	HX_CSTRING("addPremadeBody"),
	HX_CSTRING("createCircularBody"),
	HX_CSTRING("createRectangularBody"),
	HX_CSTRING("setBodyMaterial"),
	HX_CSTRING("destroyPhysObjects"),
	HX_CSTRING("setDrag"),
	HX_CSTRING("updatePhysObjects"),
	HX_CSTRING("set_physicsEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxNapeSprite_obj::__mClass;

void FlxNapeSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.nape.FlxNapeSprite"), hx::TCanCast< FlxNapeSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxNapeSprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
