#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_ui_FlxAnalog
#include <flixel/ui/FlxAnalog.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxAnalog_GraphicBase
#include <flixel/ui/_FlxAnalog/GraphicBase.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxAnalog_GraphicThumb
#include <flixel/ui/_FlxAnalog/GraphicThumb.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace ui{

Void FlxAnalog_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< Float >  __o_Ease)
{
HX_STACK_FRAME("flixel.ui.FlxAnalog","new",0x5f4f88cc,"flixel.ui.FlxAnalog.new","flixel/ui/FlxAnalog.hx",26,0x15673ac4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Radius,"Radius")
HX_STACK_ARG(__o_Ease,"Ease")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Radius = __o_Radius.Default(0);
Float Ease = __o_Ease.Default(0.25);
{
	HX_STACK_LINE(92)
	this->_amount = (int)0;
	HX_STACK_LINE(91)
	this->_direction = (int)0;
	struct _Function_1_1{
		inline static ::flixel::util::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxAnalog.hx",85,0x15673ac4)
			{
				HX_STACK_LINE(85)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(85)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(85)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(85)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(85)
				::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(85)
					_this->x = X;
					HX_STACK_LINE(85)
					_this->y = Y;
					HX_STACK_LINE(85)
					_this->width = Width;
					HX_STACK_LINE(85)
					_this->height = Height;
					HX_STACK_LINE(85)
					rect = _this;
				}
				HX_STACK_LINE(85)
				rect->_inPool = false;
				HX_STACK_LINE(85)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	this->_zone = _Function_1_1::Block();
	HX_STACK_LINE(79)
	this->_tempTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->status = (int)0;
	HX_STACK_LINE(108)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(110)
	this->_radius = Radius;
	HX_STACK_LINE(111)
	this->_ease = Ease;
	HX_STACK_LINE(113)
	::flixel::ui::FlxAnalog_obj::_analogs->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(115)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(115)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(115)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(115)
		point->_inPool = false;
		HX_STACK_LINE(115)
		_g = point;
	}
	HX_STACK_LINE(115)
	this->_point = _g;
	HX_STACK_LINE(117)
	this->createBase();
	HX_STACK_LINE(118)
	this->createThumb();
	HX_STACK_LINE(120)
	this->set_x(X);
	HX_STACK_LINE(121)
	this->set_y(Y);
	HX_STACK_LINE(123)
	this->scrollFactor->set(null(),null());
	HX_STACK_LINE(124)
	this->set_moves(false);
}
;
	return null();
}

//FlxAnalog_obj::~FlxAnalog_obj() { }

Dynamic FlxAnalog_obj::__CreateEmpty() { return  new FlxAnalog_obj; }
hx::ObjectPtr< FlxAnalog_obj > FlxAnalog_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< Float >  __o_Ease)
{  hx::ObjectPtr< FlxAnalog_obj > result = new FlxAnalog_obj();
	result->__construct(__o_X,__o_Y,__o_Radius,__o_Ease);
	return result;}

Dynamic FlxAnalog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnalog_obj > result = new FlxAnalog_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxAnalog_obj::createBase( ){
{
		HX_STACK_FRAME("flixel.ui.FlxAnalog","createBase",0xfd521641,"flixel.ui.FlxAnalog.createBase","flixel/ui/FlxAnalog.hx",132,0x15673ac4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(this->x,this->y,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		this->base = _g;
		HX_STACK_LINE(134)
		this->base->loadGraphic(hx::ClassOf< ::flixel::ui::_FlxAnalog::GraphicBase >(),null(),null(),null(),null(),null());
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::flixel::FlxSprite _g1 = this->base;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			Float _g11 = -(this->base->get_width());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(135)
			Float _g2 = (_g11 * 0.5);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(135)
			Float _g3 = (_g1->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(135)
			_g1->set_x(_g3);
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::flixel::FlxSprite _g1 = this->base;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			Float _g4 = -(this->base->get_height());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(136)
			Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(136)
			Float _g6 = (_g1->y + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(136)
			_g1->set_y(_g6);
		}
		HX_STACK_LINE(137)
		this->base->scrollFactor->set(null(),null());
		HX_STACK_LINE(138)
		this->base->set_solid(false);
		HX_STACK_LINE(144)
		this->add(this->base);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,createBase,(void))

Void FlxAnalog_obj::createThumb( ){
{
		HX_STACK_FRAME("flixel.ui.FlxAnalog","createThumb",0x0c59dde6,"flixel.ui.FlxAnalog.createThumb","flixel/ui/FlxAnalog.hx",152,0x15673ac4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(this->x,this->y,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		this->thumb = _g;
		HX_STACK_LINE(154)
		this->thumb->loadGraphic(hx::ClassOf< ::flixel::ui::_FlxAnalog::GraphicThumb >(),null(),null(),null(),null(),null());
		HX_STACK_LINE(155)
		this->thumb->scrollFactor->set(null(),null());
		HX_STACK_LINE(156)
		this->thumb->set_solid(false);
		HX_STACK_LINE(162)
		this->add(this->thumb);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,createThumb,(void))

Void FlxAnalog_obj::createZone( ){
{
		HX_STACK_FRAME("flixel.ui.FlxAnalog","createZone",0x0d39d05c,"flixel.ui.FlxAnalog.createZone","flixel/ui/FlxAnalog.hx",171,0x15673ac4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		if (((this->base != null()))){
			HX_STACK_LINE(174)
			Float _g = this->base->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(174)
			this->_radius = _g1;
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::flixel::util::FlxRect _this = this->_zone;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			_this->x = (this->x - this->_radius);
			HX_STACK_LINE(177)
			_this->y = (this->y - this->_radius);
			HX_STACK_LINE(177)
			_this->width = ((int)2 * this->_radius);
			HX_STACK_LINE(177)
			_this->height = ((int)2 * this->_radius);
			HX_STACK_LINE(177)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,createZone,(void))

Void FlxAnalog_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxAnalog","destroy",0x07048b66,"flixel.ui.FlxAnalog.destroy","flixel/ui/FlxAnalog.hx",184,0x15673ac4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		this->super::destroy();
		HX_STACK_LINE(187)
		::flixel::util::FlxRect _g = ::flixel::util::FlxDestroyUtil_obj::put(this->_zone);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		this->_zone = _g;
		HX_STACK_LINE(189)
		::flixel::ui::FlxAnalog_obj::_analogs->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(190)
		this->onUp = null();
		HX_STACK_LINE(191)
		this->onDown = null();
		HX_STACK_LINE(192)
		this->onOver = null();
		HX_STACK_LINE(193)
		this->onPressed = null();
		HX_STACK_LINE(194)
		this->thumb = null();
		HX_STACK_LINE(195)
		this->base = null();
		HX_STACK_LINE(198)
		this->_currentTouch = null();
		HX_STACK_LINE(199)
		this->_tempTouches = null();
	}
return null();
}


Void FlxAnalog_obj::update( ){
{
		HX_STACK_FRAME("flixel.ui.FlxAnalog","update",0x5d8fd91d,"flixel.ui.FlxAnalog.update","flixel/ui/FlxAnalog.hx",207,0x15673ac4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::flixel::input::touch::FlxTouch touch = null();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(211)
		bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
		HX_STACK_LINE(215)
		if (((this->_currentTouch != null()))){
			HX_STACK_LINE(217)
			this->_tempTouches->push(this->_currentTouch);
		}
		else{
			HX_STACK_LINE(221)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				::flixel::input::touch::FlxTouch touch1 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch1,"touch1");
				HX_STACK_LINE(221)
				++(_g);
				HX_STACK_LINE(223)
				bool touchInserted = false;		HX_STACK_VAR(touchInserted,"touchInserted");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(225)
					Array< ::Dynamic > _g3 = ::flixel::ui::FlxAnalog_obj::_analogs;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(225)
					while((true)){
						HX_STACK_LINE(225)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(225)
							break;
						}
						HX_STACK_LINE(225)
						::flixel::ui::FlxAnalog analog = _g3->__get(_g2).StaticCast< ::flixel::ui::FlxAnalog >();		HX_STACK_VAR(analog,"analog");
						HX_STACK_LINE(225)
						++(_g2);
						HX_STACK_LINE(229)
						if (((bool((bool((analog == hx::ObjectPtr<OBJ_>(this))) && bool((analog->_currentTouch != touch1)))) && bool((touchInserted == false))))){
							HX_STACK_LINE(231)
							this->_tempTouches->push(touch1);
							HX_STACK_LINE(232)
							touchInserted = true;
						}
					}
				}
			}
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			Array< ::Dynamic > _g1 = this->_tempTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				::flixel::input::touch::FlxTouch touch1 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch1,"touch1");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(240)
				::flixel::util::FlxPoint _g2 = touch1->getWorldPosition(::flixel::FlxG_obj::camera,this->_point);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(240)
				this->_point = _g2;
				HX_STACK_LINE(242)
				bool _g11 = this->updateAnalog(this->_point,(touch1->_current > (int)0),(touch1->_current == (int)2),(touch1->_current == (int)-1),touch1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(242)
				if (((_g11 == false))){
					HX_STACK_LINE(244)
					offAll = false;
					HX_STACK_LINE(245)
					break;
				}
			}
		}
		HX_STACK_LINE(251)
		this->_point->set(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxAnalog.hx",253,0x15673ac4)
				{
					HX_STACK_LINE(253)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(253)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxAnalog.hx",253,0x15673ac4)
				{
					HX_STACK_LINE(253)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(253)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(253)
		bool _g2 = this->updateAnalog(this->_point,(::flixel::FlxG_obj::mouse->_leftButton->current > (int)0),_Function_1_1::Block(),_Function_1_2::Block(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(253)
		if (((_g2 == false))){
			HX_STACK_LINE(255)
			offAll = false;
		}
		HX_STACK_LINE(259)
		if (((bool(((bool((this->status == (int)1)) || bool((this->status == (int)0))))) && bool((this->_amount != (int)0))))){
			HX_STACK_LINE(261)
			hx::MultEq(this->_amount,this->_ease);
			HX_STACK_LINE(263)
			Float _g3 = ::Math_obj::abs(this->_amount);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(263)
			if (((_g3 < 0.1))){
				HX_STACK_LINE(265)
				this->_amount = (int)0;
			}
		}
		HX_STACK_LINE(269)
		Float _g4 = ::Math_obj::cos(this->_direction);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(269)
		Float _g5 = (_g4 * this->_amount);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(269)
		Float _g6 = (_g5 * this->_radius);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(269)
		Float _g7 = (this->x + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(269)
		Float _g8 = this->thumb->get_width();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(269)
		Float _g9 = (_g8 * 0.5);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(269)
		Float _g10 = (_g7 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(269)
		this->thumb->set_x(_g10);
		HX_STACK_LINE(270)
		Float _g11 = ::Math_obj::sin(this->_direction);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(270)
		Float _g12 = (_g11 * this->_amount);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(270)
		Float _g13 = (_g12 * this->_radius);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(270)
		Float _g14 = (this->y + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(270)
		Float _g15 = this->thumb->get_height();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(270)
		Float _g16 = (_g15 * 0.5);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(270)
		Float _g17 = (_g14 - _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(270)
		this->thumb->set_y(_g17);
		HX_STACK_LINE(272)
		if ((offAll)){
			HX_STACK_LINE(274)
			this->status = (int)0;
		}
		HX_STACK_LINE(278)
		this->_tempTouches->splice((int)0,this->_tempTouches->length);
		HX_STACK_LINE(281)
		this->super::update();
	}
return null();
}


bool FlxAnalog_obj::updateAnalog( ::flixel::util::FlxPoint TouchPoint,bool Pressed,bool JustPressed,bool JustReleased,::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","updateAnalog",0x6e1d572d,"flixel.ui.FlxAnalog.updateAnalog","flixel/ui/FlxAnalog.hx",285,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchPoint,"TouchPoint")
	HX_STACK_ARG(Pressed,"Pressed")
	HX_STACK_ARG(JustPressed,"JustPressed")
	HX_STACK_ARG(JustReleased,"JustReleased")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(286)
	bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
	HX_STACK_LINE(292)
	if (((Touch != null()))){
		HX_STACK_LINE(294)
		TouchPoint->set(Touch->screenX,Touch->screenY);
	}
	HX_STACK_LINE(298)
	if (((  ((!(::flixel::util::FlxMath_obj::pointInFlxRect(TouchPoint->x,TouchPoint->y,this->_zone)))) ? bool((this->status == (int)2)) : bool(true) ))){
		HX_STACK_LINE(300)
		offAll = false;
		HX_STACK_LINE(302)
		if ((Pressed)){
			HX_STACK_LINE(305)
			if (((Touch != null()))){
				HX_STACK_LINE(307)
				this->_currentTouch = Touch;
			}
			HX_STACK_LINE(310)
			this->status = (int)2;
			HX_STACK_LINE(312)
			if ((JustPressed)){
				HX_STACK_LINE(314)
				if (((this->onDown_dyn() != null()))){
					HX_STACK_LINE(316)
					this->onDown();
				}
			}
			HX_STACK_LINE(320)
			if (((this->status == (int)2))){
				HX_STACK_LINE(322)
				if (((this->onPressed_dyn() != null()))){
					HX_STACK_LINE(324)
					this->onPressed();
				}
				HX_STACK_LINE(327)
				Float dx = (TouchPoint->x - this->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(328)
				Float dy = (TouchPoint->y - this->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(330)
				Float dist = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(dist,"dist");
				HX_STACK_LINE(332)
				if (((dist < (int)1))){
					HX_STACK_LINE(334)
					dist = (int)0;
				}
				HX_STACK_LINE(337)
				Float _g = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				this->_direction = _g;
				HX_STACK_LINE(338)
				Float _g1 = ::Math_obj::min(this->_radius,dist);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(338)
				Float _g2 = (Float(_g1) / Float(this->_radius));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(338)
				this->_amount = _g2;
				HX_STACK_LINE(340)
				Float _g3 = ::Math_obj::cos(this->_direction);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(340)
				Float _g4 = (_g3 * this->_amount);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(340)
				Float _g5 = (_g4 * this->_radius);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(340)
				this->acceleration->set_x(_g5);
				HX_STACK_LINE(341)
				Float _g6 = ::Math_obj::sin(this->_direction);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(341)
				Float _g7 = (_g6 * this->_amount);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(341)
				Float _g8 = (_g7 * this->_radius);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(341)
				this->acceleration->set_y(_g8);
			}
		}
		else{
			HX_STACK_LINE(344)
			if (((bool(JustReleased) && bool((this->status == (int)2))))){
				HX_STACK_LINE(347)
				this->_currentTouch = null();
				HX_STACK_LINE(350)
				this->status = (int)1;
				HX_STACK_LINE(352)
				if (((this->onUp_dyn() != null()))){
					HX_STACK_LINE(354)
					this->onUp();
				}
				HX_STACK_LINE(357)
				this->acceleration->set(null(),null());
			}
		}
		HX_STACK_LINE(360)
		if (((this->status == (int)0))){
			HX_STACK_LINE(362)
			this->status = (int)1;
			HX_STACK_LINE(364)
			if (((this->onOver_dyn() != null()))){
				HX_STACK_LINE(366)
				this->onOver();
			}
		}
	}
	HX_STACK_LINE(371)
	return offAll;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxAnalog_obj,updateAnalog,return )

Float FlxAnalog_obj::getAngle( ){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","getAngle",0xcecd9371,"flixel.ui.FlxAnalog.getAngle","flixel/ui/FlxAnalog.hx",378,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(379)
	Float _g = ::Math_obj::atan2(this->acceleration->y,this->acceleration->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(379)
	return (_g * ((Float((int)180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,getAngle,return )

bool FlxAnalog_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","get_pressed",0x932d3725,"flixel.ui.FlxAnalog.get_pressed","flixel/ui/FlxAnalog.hx",389,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	return (this->status == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,get_pressed,return )

bool FlxAnalog_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","get_justPressed",0xe66d6fd9,"flixel.ui.FlxAnalog.get_justPressed","flixel/ui/FlxAnalog.hx",398,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	if (((this->_currentTouch != null()))){
		HX_STACK_LINE(402)
		return (bool((this->_currentTouch->_current == (int)2)) && bool((this->status == (int)2)));
	}
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxAnalog.hx",407,0x15673ac4)
			{
				HX_STACK_LINE(407)
				::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(407)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(407)
	return (bool(_Function_1_1::Block()) && bool((this->status == (int)2)));
	HX_STACK_LINE(410)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,get_justPressed,return )

bool FlxAnalog_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","get_justReleased",0xc02a7ba6,"flixel.ui.FlxAnalog.get_justReleased","flixel/ui/FlxAnalog.hx",419,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	if (((this->_currentTouch != null()))){
		HX_STACK_LINE(423)
		return (bool((this->_currentTouch->_current == (int)-1)) && bool((this->status == (int)1)));
	}
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxAnalog.hx",428,0x15673ac4)
			{
				HX_STACK_LINE(428)
				::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(428)
				return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(428)
	return (bool(_Function_1_1::Block()) && bool((this->status == (int)1)));
	HX_STACK_LINE(431)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnalog_obj,get_justReleased,return )

Float FlxAnalog_obj::set_x( Float X){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","set_x",0x59db46c7,"flixel.ui.FlxAnalog.set_x","flixel/ui/FlxAnalog.hx",435,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_LINE(436)
	this->super::set_x(X);
	HX_STACK_LINE(437)
	this->createZone();
	HX_STACK_LINE(439)
	return X;
}


Float FlxAnalog_obj::set_y( Float Y){
	HX_STACK_FRAME("flixel.ui.FlxAnalog","set_y",0x59db46c8,"flixel.ui.FlxAnalog.set_y","flixel/ui/FlxAnalog.hx",443,0x15673ac4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(444)
	this->super::set_y(Y);
	HX_STACK_LINE(445)
	this->createZone();
	HX_STACK_LINE(447)
	return Y;
}


int FlxAnalog_obj::NORMAL;

int FlxAnalog_obj::HIGHLIGHT;

int FlxAnalog_obj::PRESSED;

Array< ::Dynamic > FlxAnalog_obj::_analogs;


FlxAnalog_obj::FlxAnalog_obj()
{
}

void FlxAnalog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnalog);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(thumb,"thumb");
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onPressed,"onPressed");
	HX_MARK_MEMBER_NAME(_currentTouch,"_currentTouch");
	HX_MARK_MEMBER_NAME(_tempTouches,"_tempTouches");
	HX_MARK_MEMBER_NAME(_zone,"_zone");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_amount,"_amount");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnalog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(thumb,"thumb");
	HX_VISIT_MEMBER_NAME(base,"base");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onPressed,"onPressed");
	HX_VISIT_MEMBER_NAME(_currentTouch,"_currentTouch");
	HX_VISIT_MEMBER_NAME(_tempTouches,"_tempTouches");
	HX_VISIT_MEMBER_NAME(_zone,"_zone");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_amount,"_amount");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxAnalog_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return base; }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"thumb") ) { return thumb; }
		if (HX_FIELD_EQ(inName,"_zone") ) { return _zone; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"_amount") ) { return _amount; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_analogs") ) { return _analogs; }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onPressed") ) { return onPressed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		if (HX_FIELD_EQ(inName,"createBase") ) { return createBase_dyn(); }
		if (HX_FIELD_EQ(inName,"createZone") ) { return createZone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createThumb") ) { return createThumb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempTouches") ) { return _tempTouches; }
		if (HX_FIELD_EQ(inName,"updateAnalog") ) { return updateAnalog_dyn(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentTouch") ) { return _currentTouch; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnalog_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"thumb") ) { thumb=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zone") ) { _zone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_amount") ) { _amount=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_analogs") ) { _analogs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onPressed") ) { onPressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempTouches") ) { _tempTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentTouch") ) { _currentTouch=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnalog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("thumb"));
	outFields->push(HX_CSTRING("base"));
	outFields->push(HX_CSTRING("_currentTouch"));
	outFields->push(HX_CSTRING("_tempTouches"));
	outFields->push(HX_CSTRING("_zone"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("_amount"));
	outFields->push(HX_CSTRING("_ease"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("HIGHLIGHT"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("_analogs"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnalog_obj,status),HX_CSTRING("status")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxAnalog_obj,thumb),HX_CSTRING("thumb")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxAnalog_obj,base),HX_CSTRING("base")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnalog_obj,onUp),HX_CSTRING("onUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnalog_obj,onDown),HX_CSTRING("onDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnalog_obj,onOver),HX_CSTRING("onOver")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnalog_obj,onPressed),HX_CSTRING("onPressed")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(FlxAnalog_obj,_currentTouch),HX_CSTRING("_currentTouch")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxAnalog_obj,_tempTouches),HX_CSTRING("_tempTouches")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxAnalog_obj,_zone),HX_CSTRING("_zone")},
	{hx::fsFloat,(int)offsetof(FlxAnalog_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsFloat,(int)offsetof(FlxAnalog_obj,_direction),HX_CSTRING("_direction")},
	{hx::fsFloat,(int)offsetof(FlxAnalog_obj,_amount),HX_CSTRING("_amount")},
	{hx::fsFloat,(int)offsetof(FlxAnalog_obj,_ease),HX_CSTRING("_ease")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("status"),
	HX_CSTRING("thumb"),
	HX_CSTRING("base"),
	HX_CSTRING("onUp"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onPressed"),
	HX_CSTRING("_currentTouch"),
	HX_CSTRING("_tempTouches"),
	HX_CSTRING("_zone"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_direction"),
	HX_CSTRING("_amount"),
	HX_CSTRING("_ease"),
	HX_CSTRING("createBase"),
	HX_CSTRING("createThumb"),
	HX_CSTRING("createZone"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateAnalog"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnalog_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAnalog_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxAnalog_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxAnalog_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxAnalog_obj::_analogs,"_analogs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnalog_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAnalog_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxAnalog_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxAnalog_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxAnalog_obj::_analogs,"_analogs");
};

#endif

Class FlxAnalog_obj::__mClass;

void FlxAnalog_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxAnalog"), hx::TCanCast< FlxAnalog_obj> ,sStaticFields,sMemberFields,
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

void FlxAnalog_obj::__boot()
{
	NORMAL= (int)0;
	HIGHLIGHT= (int)1;
	PRESSED= (int)2;
	_analogs= Array_obj< ::Dynamic >::__new();
}

} // end namespace flixel
} // end namespace ui
