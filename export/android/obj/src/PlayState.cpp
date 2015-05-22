#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_ui_ActionMode
#include <flixel/ui/ActionMode.h>
#endif
#ifndef INCLUDED_flixel_ui_DPadMode
#include <flixel/ui/DPadMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxAnalog
#include <flixel/ui/FlxAnalog.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",33,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(50)
	this->ballCollisionType = ::nape::callbacks::CbType_obj::__new();
	HX_STACK_LINE(49)
	this->wallCollisionType = ::nape::callbacks::CbType_obj::__new();
	HX_STACK_LINE(46)
	this->_numPlanets = (int)2;
	HX_STACK_LINE(33)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",57,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->super::create();
		HX_STACK_LINE(63)
		this->createWalls(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(68)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Space.PNG"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->_bg = _g;
		HX_STACK_LINE(69)
		this->add(this->_bg);
		HX_STACK_LINE(72)
		::flixel::addons::nape::FlxNapeSprite _g1 = ::flixel::addons::nape::FlxNapeSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)4)),((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)130),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->_box1 = _g1;
		HX_STACK_LINE(73)
		::nape::phys::BodyType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
				HX_STACK_LINE(73)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(73)
				::nape::phys::BodyType _g2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g2;
				HX_STACK_LINE(73)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(73)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(73)
		this->_box1->createCircularBody((int)21,_g3);
		HX_STACK_LINE(74)
		this->_box1->setBodyMaterial(0.2,0.8,0.8,7.8,0.001);
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::nape::phys::Body _this1 = this->_box1->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(75)
				if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
					HX_STACK_LINE(75)
					_this1->zpp_inner_i->setupcbTypes();
				}
				HX_STACK_LINE(75)
				_this = _this1->zpp_inner_i->wrap_cbTypes;
			}
			HX_STACK_LINE(75)
			::nape::callbacks::CbType obj = this->ballCollisionType;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(75)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(75)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(75)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(76)
		this->_box1->loadGraphic(HX_CSTRING("assets/images/ball.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(77)
		this->add(this->_box1);
		HX_STACK_LINE(81)
		::flixel::group::FlxTypedGroup _g4 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(81)
		this->_planets = _g4;
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(85)
			int _g2 = (this->_numPlanets + (int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(86)
				::flixel::addons::nape::FlxNapeSprite _planet = ::flixel::addons::nape::FlxNapeSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)4)) * i),(Float(::flixel::FlxG_obj::height) / Float((int)2)),null(),null(),null());		HX_STACK_VAR(_planet,"_planet");
				HX_STACK_LINE(87)
				::nape::phys::BodyType _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(87)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(87)
						::nape::phys::BodyType _g5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(87)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g5;
						HX_STACK_LINE(87)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(87)
					_g6 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				HX_STACK_LINE(87)
				_planet->createCircularBody((int)67,_g6);
				HX_STACK_LINE(88)
				_planet->setBodyMaterial(0.2,0.57,0.74,7.8,0.001);
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						::nape::phys::Body _this1 = _planet->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(89)
						if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
							HX_STACK_LINE(89)
							_this1->zpp_inner_i->setupcbTypes();
						}
						HX_STACK_LINE(89)
						_this = _this1->zpp_inner_i->wrap_cbTypes;
					}
					HX_STACK_LINE(89)
					::nape::callbacks::CbType obj = this->wallCollisionType;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(89)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(89)
						_this->push(obj);
					}
					else{
						HX_STACK_LINE(89)
						_this->unshift(obj);
					}
				}
				HX_STACK_LINE(90)
				::String _g7 = ::Std_obj::string(i);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(90)
				::String _g8 = (HX_CSTRING("assets/images/planet") + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(90)
				::String ruta = (_g8 + HX_CSTRING(".png"));		HX_STACK_VAR(ruta,"ruta");
				HX_STACK_LINE(91)
				::haxe::Log_obj::trace(ruta,hx::SourceInfo(HX_CSTRING("PlayState.hx"),91,HX_CSTRING("PlayState"),HX_CSTRING("create")));
				HX_STACK_LINE(92)
				_planet->loadGraphic(ruta,null(),null(),null(),null(),null());
				HX_STACK_LINE(93)
				this->_planets->add(_planet);
			}
		}
		HX_STACK_LINE(97)
		this->add(this->_planets);
		HX_STACK_LINE(100)
		::nape::callbacks::CbEvent _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(100)
				::nape::callbacks::CbEvent _g9 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g9;
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(100)
			_g10 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
		}
		HX_STACK_LINE(100)
		::nape::callbacks::InteractionType _g12;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(100)
				::nape::callbacks::InteractionType _g11 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g11;
				HX_STACK_LINE(100)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(100)
			_g12 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
		}
		HX_STACK_LINE(100)
		::nape::callbacks::InteractionListener _g13 = ::nape::callbacks::InteractionListener_obj::__new(_g10,_g12,this->wallCollisionType,this->ballCollisionType,this->collisionHandle_dyn(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(100)
		this->interactionListener = _g13;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::nape::callbacks::ListenerList _this = ::flixel::addons::nape::FlxNapeState_obj::space->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(101)
			::nape::callbacks::Listener obj = this->interactionListener;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(101)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(101)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(101)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(105)
		::flixel::ui::FlxVirtualPad _g14 = ::flixel::ui::FlxVirtualPad_obj::__new(::flixel::ui::DPadMode_obj::LEFT_RIGHT,::flixel::ui::ActionMode_obj::A);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(105)
		this->_vPdad = _g14;
		HX_STACK_LINE(109)
		this->add(this->_vPdad);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",119,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",126,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->super::update();
		HX_STACK_LINE(129)
		this->calcularPlaneta();
		HX_STACK_LINE(130)
		this->planetGravity(this->_box1,this->_planetForce);
		HX_STACK_LINE(131)
		this->movimiento();
	}
return null();
}


Void PlayState_obj::movimiento( ){
{
		HX_STACK_FRAME("PlayState","movimiento",0x9b17fdc6,"PlayState.movimiento","PlayState.hx",135,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		if (((  ((!(::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("D")),(int)2)))) ? bool((this->_vPdad->buttonRight->status == (int)2)) : bool(true) ))){
			HX_STACK_LINE(138)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new((int)120,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			this->_box1->body->applyImpulse(_g,null(),null());
		}
		HX_STACK_LINE(141)
		if (((  ((!(::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("A")),(int)2)))) ? bool((this->_vPdad->buttonLeft->status == (int)2)) : bool(true) ))){
			HX_STACK_LINE(142)
			::nape::geom::Vec2 _g1 = ::nape::geom::Vec2_obj::__new((int)-120,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			this->_box1->body->applyImpulse(_g1,null(),null());
		}
		HX_STACK_LINE(145)
		if (((  ((!(::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("SPACE")),(int)1)))) ? bool((this->_vPdad->buttonA->status == (int)2)) : bool(true) ))){
			HX_STACK_LINE(146)
			::flixel::addons::nape::FlxNapeSprite Source = this->_box1;		HX_STACK_VAR(Source,"Source");
			HX_STACK_LINE(146)
			::flixel::FlxSprite Dest = this->_planetForce;		HX_STACK_VAR(Dest,"Dest");
			HX_STACK_LINE(146)
			Float direction;		HX_STACK_VAR(direction,"direction");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
				HX_STACK_LINE(146)
				Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(146)
				Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(146)
				if ((AsDegrees)){
					HX_STACK_LINE(146)
					Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
					HX_STACK_LINE(146)
					direction = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
				}
				else{
					HX_STACK_LINE(146)
					direction = ::Math_obj::atan2(dy,dx);
				}
			}
			HX_STACK_LINE(146)
			::nape::geom::Vec2 _g2 = ::nape::geom::Vec2_obj::fromPolar((int)-800,direction,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(146)
			Source->body->applyImpulse(_g2,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,movimiento,(void))

Void PlayState_obj::calcularPlaneta( ){
{
		HX_STACK_FRAME("PlayState","calcularPlaneta",0x82ccf31b,"PlayState.calcularPlaneta","PlayState.hx",150,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		int aux = ::flixel::FlxG_obj::width;		HX_STACK_VAR(aux,"aux");
		HX_STACK_LINE(152)
		for(::cpp::FastIterator_obj< ::flixel::addons::nape::FlxNapeSprite > *__it = ::cpp::CreateFastIterator< ::flixel::addons::nape::FlxNapeSprite >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->_planets->members,null()));  __it->hasNext(); ){
			::flixel::addons::nape::FlxNapeSprite planet = __it->next();
			{
				HX_STACK_LINE(153)
				int dis;		HX_STACK_VAR(dis,"dis");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					::flixel::FlxSprite SpriteA = this->_box1;		HX_STACK_VAR(SpriteA,"SpriteA");
					HX_STACK_LINE(153)
					Float dx = ((SpriteA->x + SpriteA->origin->x) - ((planet->x + planet->origin->x)));		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(153)
					Float dy = ((SpriteA->y + SpriteA->origin->y) - ((planet->y + planet->origin->y)));		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(153)
					Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(153)
					dis = ::Std_obj::_int(_g);
				}
				HX_STACK_LINE(154)
				if (((dis < aux))){
					HX_STACK_LINE(155)
					aux = dis;
					HX_STACK_LINE(156)
					this->_planetForce = planet;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,calcularPlaneta,(void))

Void PlayState_obj::planetGravity( ::flixel::addons::nape::FlxNapeSprite ball,::flixel::addons::nape::FlxNapeSprite planet){
{
		HX_STACK_FRAME("PlayState","planetGravity",0xd239cdc5,"PlayState.planetGravity","PlayState.hx",161,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ball,"ball")
		HX_STACK_ARG(planet,"planet")
		HX_STACK_LINE(163)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::nape::phys::Body _this1 = planet->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(163)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(163)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(163)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(163)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(163)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(163)
			_g = _this->zpp_inner->x;
		}
		HX_STACK_LINE(163)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::nape::phys::Body _this1 = ball->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(163)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(163)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(163)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(163)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(163)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(163)
			_g1 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(163)
		Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		int dx = ::Std_obj::_int(_g2);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(164)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::nape::phys::Body _this1 = planet->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(164)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(164)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(164)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(164)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(164)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(164)
			_g3 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(164)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::nape::phys::Body _this1 = ball->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(164)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(164)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(164)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(164)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(164)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(164)
			_g4 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(164)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(164)
		int dy = ::Std_obj::_int(_g5);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(165)
		::nape::geom::Vec2 impulse;		HX_STACK_VAR(impulse,"impulse");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(165)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(165)
				::nape::geom::Vec2 _g6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(165)
				ret = _g6;
			}
			else{
				HX_STACK_LINE(165)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(165)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(165)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(165)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(165)
				::zpp_nape::geom::ZPP_Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(165)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_Vec2 _g7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(165)
							ret1 = _g7;
						}
						else{
							HX_STACK_LINE(165)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(165)
							ret1->next = null();
						}
						HX_STACK_LINE(165)
						ret1->weak = false;
					}
					HX_STACK_LINE(165)
					ret1->_immutable = immutable;
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						ret1->x = dx;
						HX_STACK_LINE(165)
						ret1->y = dy;
						HX_STACK_LINE(165)
						{
						}
					}
					HX_STACK_LINE(165)
					_g8 = ret1;
				}
				HX_STACK_LINE(165)
				ret->zpp_inner = _g8;
				HX_STACK_LINE(165)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(165)
				Float _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(165)
							_this->_validate();
						}
					}
					HX_STACK_LINE(165)
					_g9 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( int &dy,::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",165,0xb30d7781)
						{
							HX_STACK_LINE(165)
							Float _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(165)
							{
								HX_STACK_LINE(165)
								{
									HX_STACK_LINE(165)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(165)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(165)
										_this->_validate();
									}
								}
								HX_STACK_LINE(165)
								_g10 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(165)
							return (_g10 == dy);
						}
						return null();
					}
				};
				HX_STACK_LINE(165)
				if ((!(((  (((_g9 == dx))) ? bool(_Function_3_1::Block(dy,ret)) : bool(false) ))))){
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						ret->zpp_inner->x = dx;
						HX_STACK_LINE(165)
						ret->zpp_inner->y = dy;
						HX_STACK_LINE(165)
						{
						}
					}
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(165)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(165)
				ret;
			}
			HX_STACK_LINE(165)
			ret->zpp_inner->weak = true;
			HX_STACK_LINE(165)
			impulse = ret;
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(166)
								_this->_validate();
							}
						}
						HX_STACK_LINE(166)
						_g11 = impulse->zpp_inner->x;
					}
					HX_STACK_LINE(166)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(166)
								_this->_validate();
							}
						}
						HX_STACK_LINE(166)
						_g12 = impulse->zpp_inner->x;
					}
					HX_STACK_LINE(166)
					Float _g13 = (_g11 * _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(166)
					Float _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(166)
								_this->_validate();
							}
						}
						HX_STACK_LINE(166)
						_g14 = impulse->zpp_inner->y;
					}
					HX_STACK_LINE(166)
					Float _g15;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(166)
								_this->_validate();
							}
						}
						HX_STACK_LINE(166)
						_g15 = impulse->zpp_inner->y;
					}
					HX_STACK_LINE(166)
					Float _g16 = (_g14 * _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(166)
					Float _g17 = (_g13 + _g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(166)
					Float _g18 = ::Math_obj::sqrt(_g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(166)
					Float t = (Float((int)500) / Float(_g18));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::nape::geom::Vec2 _g6 = impulse;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							Float _g19;		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(166)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(166)
										_this->_validate();
									}
								}
								HX_STACK_LINE(166)
								_g19 = _g6->zpp_inner->x;
							}
							HX_STACK_LINE(166)
							Float x = (_g19 * t);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								Float _g20;		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(166)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(166)
											_this->_validate();
										}
									}
									HX_STACK_LINE(166)
									_g20 = _g6->zpp_inner->x;
								}
								HX_STACK_LINE(166)
								if (((_g20 != x))){
									HX_STACK_LINE(166)
									_g6->zpp_inner->x = x;
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(166)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(166)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(166)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(166)
										_this->_validate();
									}
								}
								HX_STACK_LINE(166)
								_g6->zpp_inner->x;
							}
						}
					}
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::nape::geom::Vec2 _g6 = impulse;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							Float _g21;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(166)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(166)
										_this->_validate();
									}
								}
								HX_STACK_LINE(166)
								_g21 = _g6->zpp_inner->y;
							}
							HX_STACK_LINE(166)
							Float y = (_g21 * t);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								Float _g22;		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(166)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(166)
											_this->_validate();
										}
									}
									HX_STACK_LINE(166)
									_g22 = _g6->zpp_inner->y;
								}
								HX_STACK_LINE(166)
								if (((_g22 != y))){
									HX_STACK_LINE(166)
									_g6->zpp_inner->y = y;
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(166)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(166)
											_this->_invalidate(_this);
										}
									}
								}
							}
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_Vec2 _this = _g6->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(166)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(166)
										_this->_validate();
									}
								}
								HX_STACK_LINE(166)
								_g6->zpp_inner->y;
							}
						}
					}
				}
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(166)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(166)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				Float _g23;		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(166)
							_this->_validate();
						}
					}
					HX_STACK_LINE(166)
					_g23 = impulse->zpp_inner->x;
				}
				HX_STACK_LINE(166)
				Float _g24;		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(166)
							_this->_validate();
						}
					}
					HX_STACK_LINE(166)
					_g24 = impulse->zpp_inner->x;
				}
				HX_STACK_LINE(166)
				Float _g25 = (_g23 * _g24);		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(166)
				Float _g26;		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(166)
							_this->_validate();
						}
					}
					HX_STACK_LINE(166)
					_g26 = impulse->zpp_inner->y;
				}
				HX_STACK_LINE(166)
				Float _g27;		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(166)
							_this->_validate();
						}
					}
					HX_STACK_LINE(166)
					_g27 = impulse->zpp_inner->y;
				}
				HX_STACK_LINE(166)
				Float _g28 = (_g26 * _g27);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(166)
				Float _g29 = (_g25 + _g28);		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(166)
				::Math_obj::sqrt(_g29);
			}
		}
		HX_STACK_LINE(167)
		ball->body->applyImpulse(impulse,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,planetGravity,(void))

Void PlayState_obj::collisionHandle( ::nape::callbacks::InteractionCallback collision){
{
		HX_STACK_FRAME("PlayState","collisionHandle",0x163cb2a9,"PlayState.collisionHandle","PlayState.hx",172,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collision,"collision")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,collisionHandle,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_box1,"_box1");
	HX_MARK_MEMBER_NAME(_planet1,"_planet1");
	HX_MARK_MEMBER_NAME(_bg,"_bg");
	HX_MARK_MEMBER_NAME(_planet2,"_planet2");
	HX_MARK_MEMBER_NAME(_planets,"_planets");
	HX_MARK_MEMBER_NAME(_planetForce,"_planetForce");
	HX_MARK_MEMBER_NAME(_numPlanets,"_numPlanets");
	HX_MARK_MEMBER_NAME(interactionListener,"interactionListener");
	HX_MARK_MEMBER_NAME(wallCollisionType,"wallCollisionType");
	HX_MARK_MEMBER_NAME(ballCollisionType,"ballCollisionType");
	HX_MARK_MEMBER_NAME(_vPdad,"_vPdad");
	HX_MARK_MEMBER_NAME(_vJoystick,"_vJoystick");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_box1,"_box1");
	HX_VISIT_MEMBER_NAME(_planet1,"_planet1");
	HX_VISIT_MEMBER_NAME(_bg,"_bg");
	HX_VISIT_MEMBER_NAME(_planet2,"_planet2");
	HX_VISIT_MEMBER_NAME(_planets,"_planets");
	HX_VISIT_MEMBER_NAME(_planetForce,"_planetForce");
	HX_VISIT_MEMBER_NAME(_numPlanets,"_numPlanets");
	HX_VISIT_MEMBER_NAME(interactionListener,"interactionListener");
	HX_VISIT_MEMBER_NAME(wallCollisionType,"wallCollisionType");
	HX_VISIT_MEMBER_NAME(ballCollisionType,"ballCollisionType");
	HX_VISIT_MEMBER_NAME(_vPdad,"_vPdad");
	HX_VISIT_MEMBER_NAME(_vJoystick,"_vJoystick");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_bg") ) { return _bg; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_box1") ) { return _box1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_vPdad") ) { return _vPdad; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_planet1") ) { return _planet1; }
		if (HX_FIELD_EQ(inName,"_planet2") ) { return _planet2; }
		if (HX_FIELD_EQ(inName,"_planets") ) { return _planets; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_vJoystick") ) { return _vJoystick; }
		if (HX_FIELD_EQ(inName,"movimiento") ) { return movimiento_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numPlanets") ) { return _numPlanets; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_planetForce") ) { return _planetForce; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"planetGravity") ) { return planetGravity_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calcularPlaneta") ) { return calcularPlaneta_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionHandle") ) { return collisionHandle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"wallCollisionType") ) { return wallCollisionType; }
		if (HX_FIELD_EQ(inName,"ballCollisionType") ) { return ballCollisionType; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interactionListener") ) { return interactionListener; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_bg") ) { _bg=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_box1") ) { _box1=inValue.Cast< ::flixel::addons::nape::FlxNapeSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_vPdad") ) { _vPdad=inValue.Cast< ::flixel::ui::FlxVirtualPad >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_planet1") ) { _planet1=inValue.Cast< ::flixel::addons::nape::FlxNapeSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_planet2") ) { _planet2=inValue.Cast< ::flixel::addons::nape::FlxNapeSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_planets") ) { _planets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_vJoystick") ) { _vJoystick=inValue.Cast< ::flixel::ui::FlxAnalog >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numPlanets") ) { _numPlanets=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_planetForce") ) { _planetForce=inValue.Cast< ::flixel::addons::nape::FlxNapeSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"wallCollisionType") ) { wallCollisionType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballCollisionType") ) { ballCollisionType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interactionListener") ) { interactionListener=inValue.Cast< ::nape::callbacks::InteractionListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_box1"));
	outFields->push(HX_CSTRING("_planet1"));
	outFields->push(HX_CSTRING("_bg"));
	outFields->push(HX_CSTRING("_planet2"));
	outFields->push(HX_CSTRING("_planets"));
	outFields->push(HX_CSTRING("_planetForce"));
	outFields->push(HX_CSTRING("_numPlanets"));
	outFields->push(HX_CSTRING("interactionListener"));
	outFields->push(HX_CSTRING("wallCollisionType"));
	outFields->push(HX_CSTRING("ballCollisionType"));
	outFields->push(HX_CSTRING("_vPdad"));
	outFields->push(HX_CSTRING("_vJoystick"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::nape::FlxNapeSprite*/ ,(int)offsetof(PlayState_obj,_box1),HX_CSTRING("_box1")},
	{hx::fsObject /*::flixel::addons::nape::FlxNapeSprite*/ ,(int)offsetof(PlayState_obj,_planet1),HX_CSTRING("_planet1")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,_bg),HX_CSTRING("_bg")},
	{hx::fsObject /*::flixel::addons::nape::FlxNapeSprite*/ ,(int)offsetof(PlayState_obj,_planet2),HX_CSTRING("_planet2")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_planets),HX_CSTRING("_planets")},
	{hx::fsObject /*::flixel::addons::nape::FlxNapeSprite*/ ,(int)offsetof(PlayState_obj,_planetForce),HX_CSTRING("_planetForce")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_numPlanets),HX_CSTRING("_numPlanets")},
	{hx::fsObject /*::nape::callbacks::InteractionListener*/ ,(int)offsetof(PlayState_obj,interactionListener),HX_CSTRING("interactionListener")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(int)offsetof(PlayState_obj,wallCollisionType),HX_CSTRING("wallCollisionType")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(int)offsetof(PlayState_obj,ballCollisionType),HX_CSTRING("ballCollisionType")},
	{hx::fsObject /*::flixel::ui::FlxVirtualPad*/ ,(int)offsetof(PlayState_obj,_vPdad),HX_CSTRING("_vPdad")},
	{hx::fsObject /*::flixel::ui::FlxAnalog*/ ,(int)offsetof(PlayState_obj,_vJoystick),HX_CSTRING("_vJoystick")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_box1"),
	HX_CSTRING("_planet1"),
	HX_CSTRING("_bg"),
	HX_CSTRING("_planet2"),
	HX_CSTRING("_planets"),
	HX_CSTRING("_planetForce"),
	HX_CSTRING("_numPlanets"),
	HX_CSTRING("interactionListener"),
	HX_CSTRING("wallCollisionType"),
	HX_CSTRING("ballCollisionType"),
	HX_CSTRING("_vPdad"),
	HX_CSTRING("_vJoystick"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("movimiento"),
	HX_CSTRING("calcularPlaneta"),
	HX_CSTRING("planetGravity"),
	HX_CSTRING("collisionHandle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

