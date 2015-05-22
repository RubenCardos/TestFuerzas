#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicA
#include <flixel/ui/_FlxVirtualPad/GraphicA.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicB
#include <flixel/ui/_FlxVirtualPad/GraphicB.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicC
#include <flixel/ui/_FlxVirtualPad/GraphicC.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicDown
#include <flixel/ui/_FlxVirtualPad/GraphicDown.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicLeft
#include <flixel/ui/_FlxVirtualPad/GraphicLeft.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicRight
#include <flixel/ui/_FlxVirtualPad/GraphicRight.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicUp
#include <flixel/ui/_FlxVirtualPad/GraphicUp.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicX
#include <flixel/ui/_FlxVirtualPad/GraphicX.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicY
#include <flixel/ui/_FlxVirtualPad/GraphicY.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace ui{

Void FlxVirtualPad_obj::__construct(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action)
{
HX_STACK_FRAME("flixel.ui.FlxVirtualPad","new",0xc70c1fa4,"flixel.ui.FlxVirtualPad.new","flixel/ui/FlxVirtualPad.hx",69,0x865d16ec)
HX_STACK_THIS(this)
HX_STACK_ARG(DPad,"DPad")
HX_STACK_ARG(Action,"Action")
{
	HX_STACK_LINE(70)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(71)
	this->scrollFactor->set(null(),null());
	HX_STACK_LINE(73)
	if (((DPad == null()))){
		HX_STACK_LINE(75)
		DPad = ::flixel::ui::DPadMode_obj::FULL;
	}
	HX_STACK_LINE(77)
	if (((Action == null()))){
		HX_STACK_LINE(79)
		Action = ::flixel::ui::ActionMode_obj::A_B_C;
	}
	HX_STACK_LINE(82)
	::flixel::group::FlxSpriteGroup _g = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(82)
	this->dPad = _g;
	HX_STACK_LINE(83)
	this->dPad->scrollFactor->set(null(),null());
	HX_STACK_LINE(85)
	::flixel::group::FlxSpriteGroup _g1 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(85)
	this->actions = _g1;
	HX_STACK_LINE(86)
	this->actions->scrollFactor->set(null(),null());
	HX_STACK_LINE(88)
	switch( (int)(DPad->__Index())){
		case (int)1: {
			HX_STACK_LINE(91)
			::flixel::ui::FlxButton _g2 = this->createButton((int)0,(::flixel::FlxG_obj::height - (int)85),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(91)
			::flixel::ui::FlxButton _g3 = this->buttonUp = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(91)
			::flixel::FlxSprite _g4 = this->add(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(91)
			this->dPad->add(_g4);
			HX_STACK_LINE(92)
			::flixel::ui::FlxButton _g5 = this->createButton((int)0,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(92)
			::flixel::ui::FlxButton _g6 = this->buttonDown = _g5;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(92)
			::flixel::FlxSprite _g7 = this->add(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(92)
			this->dPad->add(_g7);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(94)
			::flixel::ui::FlxButton _g8 = this->createButton((int)0,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicLeft >(),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(94)
			::flixel::ui::FlxButton _g9 = this->buttonLeft = _g8;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(94)
			::flixel::FlxSprite _g10 = this->add(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(94)
			this->dPad->add(_g10);
			HX_STACK_LINE(95)
			::flixel::ui::FlxButton _g11 = this->createButton((int)42,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(95)
			::flixel::ui::FlxButton _g12 = this->buttonRight = _g11;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(95)
			::flixel::FlxSprite _g13 = this->add(_g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(95)
			this->dPad->add(_g13);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(97)
			::flixel::ui::FlxButton _g14 = this->createButton((int)35,(::flixel::FlxG_obj::height - (int)81),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(97)
			::flixel::ui::FlxButton _g15 = this->buttonUp = _g14;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(97)
			::flixel::FlxSprite _g16 = this->add(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(97)
			this->dPad->add(_g16);
			HX_STACK_LINE(98)
			::flixel::ui::FlxButton _g17 = this->createButton((int)0,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(98)
			::flixel::ui::FlxButton _g18 = this->buttonLeft = _g17;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(98)
			::flixel::FlxSprite _g19 = this->add(_g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(98)
			this->dPad->add(_g19);
			HX_STACK_LINE(99)
			::flixel::ui::FlxButton _g20 = this->createButton((int)69,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(99)
			::flixel::ui::FlxButton _g21 = this->buttonRight = _g20;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(99)
			::flixel::FlxSprite _g22 = this->add(_g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(99)
			this->dPad->add(_g22);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(101)
			::flixel::ui::FlxButton _g23 = this->createButton((int)35,(::flixel::FlxG_obj::height - (int)116),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(101)
			::flixel::ui::FlxButton _g24 = this->buttonUp = _g23;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(101)
			::flixel::FlxSprite _g25 = this->add(_g24);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(101)
			this->dPad->add(_g25);
			HX_STACK_LINE(102)
			::flixel::ui::FlxButton _g26 = this->createButton((int)0,(::flixel::FlxG_obj::height - (int)81),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicLeft >(),null());		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(102)
			::flixel::ui::FlxButton _g27 = this->buttonLeft = _g26;		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(102)
			::flixel::FlxSprite _g28 = this->add(_g27);		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(102)
			this->dPad->add(_g28);
			HX_STACK_LINE(103)
			::flixel::ui::FlxButton _g29 = this->createButton((int)69,(::flixel::FlxG_obj::height - (int)81),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(103)
			::flixel::ui::FlxButton _g30 = this->buttonRight = _g29;		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(103)
			::flixel::FlxSprite _g31 = this->add(_g30);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(103)
			this->dPad->add(_g31);
			HX_STACK_LINE(104)
			::flixel::ui::FlxButton _g32 = this->createButton((int)35,(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(104)
			::flixel::ui::FlxButton _g33 = this->buttonDown = _g32;		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(104)
			::flixel::FlxSprite _g34 = this->add(_g33);		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(104)
			this->dPad->add(_g34);
		}
		;break;
		case (int)0: {
		}
		;break;
	}
	HX_STACK_LINE(108)
	switch( (int)(Action->__Index())){
		case (int)1: {
			HX_STACK_LINE(111)
			::flixel::ui::FlxButton _g35 = this->createButton((::flixel::FlxG_obj::width - (int)44),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(111)
			::flixel::ui::FlxButton _g36 = this->buttonA = _g35;		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(111)
			::flixel::FlxSprite _g37 = this->add(_g36);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(111)
			this->actions->add(_g37);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(113)
			::flixel::ui::FlxButton _g38 = this->createButton((::flixel::FlxG_obj::width - (int)44),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(113)
			::flixel::ui::FlxButton _g39 = this->buttonA = _g38;		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(113)
			::flixel::FlxSprite _g40 = this->add(_g39);		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(113)
			this->actions->add(_g40);
			HX_STACK_LINE(114)
			::flixel::ui::FlxButton _g41 = this->createButton((::flixel::FlxG_obj::width - (int)86),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(114)
			::flixel::ui::FlxButton _g42 = this->buttonB = _g41;		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(114)
			::flixel::FlxSprite _g43 = this->add(_g42);		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(114)
			this->actions->add(_g43);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(116)
			::flixel::ui::FlxButton _g44 = this->createButton((::flixel::FlxG_obj::width - (int)128),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(116)
			::flixel::ui::FlxButton _g45 = this->buttonA = _g44;		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(116)
			::flixel::FlxSprite _g46 = this->add(_g45);		HX_STACK_VAR(_g46,"_g46");
			HX_STACK_LINE(116)
			this->actions->add(_g46);
			HX_STACK_LINE(117)
			::flixel::ui::FlxButton _g47 = this->createButton((::flixel::FlxG_obj::width - (int)86),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(_g47,"_g47");
			HX_STACK_LINE(117)
			::flixel::ui::FlxButton _g48 = this->buttonB = _g47;		HX_STACK_VAR(_g48,"_g48");
			HX_STACK_LINE(117)
			::flixel::FlxSprite _g49 = this->add(_g48);		HX_STACK_VAR(_g49,"_g49");
			HX_STACK_LINE(117)
			this->actions->add(_g49);
			HX_STACK_LINE(118)
			::flixel::ui::FlxButton _g50 = this->createButton((::flixel::FlxG_obj::width - (int)44),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicC >(),null());		HX_STACK_VAR(_g50,"_g50");
			HX_STACK_LINE(118)
			::flixel::ui::FlxButton _g51 = this->buttonC = _g50;		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(118)
			::flixel::FlxSprite _g52 = this->add(_g51);		HX_STACK_VAR(_g52,"_g52");
			HX_STACK_LINE(118)
			this->actions->add(_g52);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(120)
			::flixel::ui::FlxButton _g53 = this->createButton((::flixel::FlxG_obj::width - (int)86),(::flixel::FlxG_obj::height - (int)85),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicY >(),null());		HX_STACK_VAR(_g53,"_g53");
			HX_STACK_LINE(120)
			::flixel::ui::FlxButton _g54 = this->buttonY = _g53;		HX_STACK_VAR(_g54,"_g54");
			HX_STACK_LINE(120)
			::flixel::FlxSprite _g55 = this->add(_g54);		HX_STACK_VAR(_g55,"_g55");
			HX_STACK_LINE(120)
			this->actions->add(_g55);
			HX_STACK_LINE(121)
			::flixel::ui::FlxButton _g56 = this->createButton((::flixel::FlxG_obj::width - (int)44),(::flixel::FlxG_obj::height - (int)85),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicX >(),null());		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(121)
			::flixel::ui::FlxButton _g57 = this->buttonX = _g56;		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(121)
			::flixel::FlxSprite _g58 = this->add(_g57);		HX_STACK_VAR(_g58,"_g58");
			HX_STACK_LINE(121)
			this->actions->add(_g58);
			HX_STACK_LINE(122)
			::flixel::ui::FlxButton _g59 = this->createButton((::flixel::FlxG_obj::width - (int)86),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(_g59,"_g59");
			HX_STACK_LINE(122)
			::flixel::ui::FlxButton _g60 = this->buttonB = _g59;		HX_STACK_VAR(_g60,"_g60");
			HX_STACK_LINE(122)
			::flixel::FlxSprite _g61 = this->add(_g60);		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(122)
			this->actions->add(_g61);
			HX_STACK_LINE(123)
			::flixel::ui::FlxButton _g62 = this->createButton((::flixel::FlxG_obj::width - (int)44),(::flixel::FlxG_obj::height - (int)45),(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(_g62,"_g62");
			HX_STACK_LINE(123)
			::flixel::ui::FlxButton _g63 = this->buttonA = _g62;		HX_STACK_VAR(_g63,"_g63");
			HX_STACK_LINE(123)
			::flixel::FlxSprite _g64 = this->add(_g63);		HX_STACK_VAR(_g64,"_g64");
			HX_STACK_LINE(123)
			this->actions->add(_g64);
		}
		;break;
		case (int)0: {
		}
		;break;
	}
}
;
	return null();
}

//FlxVirtualPad_obj::~FlxVirtualPad_obj() { }

Dynamic FlxVirtualPad_obj::__CreateEmpty() { return  new FlxVirtualPad_obj; }
hx::ObjectPtr< FlxVirtualPad_obj > FlxVirtualPad_obj::__new(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action)
{  hx::ObjectPtr< FlxVirtualPad_obj > result = new FlxVirtualPad_obj();
	result->__construct(DPad,Action);
	return result;}

Dynamic FlxVirtualPad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVirtualPad_obj > result = new FlxVirtualPad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxVirtualPad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxVirtualPad","destroy",0x76516e3e,"flixel.ui.FlxVirtualPad.destroy","flixel/ui/FlxVirtualPad.hx",129,0x865d16ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->super::destroy();
		HX_STACK_LINE(132)
		::flixel::group::FlxSpriteGroup _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->dPad);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		this->dPad = _g;
		HX_STACK_LINE(133)
		::flixel::group::FlxSpriteGroup _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->actions);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		this->actions = _g1;
		HX_STACK_LINE(135)
		this->dPad = null();
		HX_STACK_LINE(136)
		this->actions = null();
		HX_STACK_LINE(137)
		this->buttonA = null();
		HX_STACK_LINE(138)
		this->buttonB = null();
		HX_STACK_LINE(139)
		this->buttonC = null();
		HX_STACK_LINE(140)
		this->buttonY = null();
		HX_STACK_LINE(141)
		this->buttonX = null();
		HX_STACK_LINE(142)
		this->buttonLeft = null();
		HX_STACK_LINE(143)
		this->buttonUp = null();
		HX_STACK_LINE(144)
		this->buttonDown = null();
		HX_STACK_LINE(145)
		this->buttonRight = null();
	}
return null();
}


::flixel::ui::FlxButton FlxVirtualPad_obj::createButton( Float X,Float Y,int Width,int Height,Dynamic Image,Dynamic OnClick){
	HX_STACK_FRAME("flixel.ui.FlxVirtualPad","createButton",0xad434a4a,"flixel.ui.FlxVirtualPad.createButton","flixel/ui/FlxVirtualPad.hx",158,0x865d16ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(OnClick,"OnClick")
	HX_STACK_LINE(159)
	::flixel::ui::FlxButton button = ::flixel::ui::FlxButton_obj::__new(X,Y,null(),null());		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(160)
	button->loadGraphic(Image,true,Width,Height,null(),null());
	HX_STACK_LINE(161)
	button->set_solid(false);
	HX_STACK_LINE(162)
	button->set_immovable(true);
	HX_STACK_LINE(163)
	button->scrollFactor->set(null(),null());
	HX_STACK_LINE(169)
	if (((OnClick != null()))){
		HX_STACK_LINE(171)
		button->onDown->callback = OnClick;
	}
	HX_STACK_LINE(174)
	return button;
}


HX_DEFINE_DYNAMIC_FUNC6(FlxVirtualPad_obj,createButton,return )


FlxVirtualPad_obj::FlxVirtualPad_obj()
{
}

void FlxVirtualPad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVirtualPad);
	HX_MARK_MEMBER_NAME(buttonA,"buttonA");
	HX_MARK_MEMBER_NAME(buttonB,"buttonB");
	HX_MARK_MEMBER_NAME(buttonC,"buttonC");
	HX_MARK_MEMBER_NAME(buttonY,"buttonY");
	HX_MARK_MEMBER_NAME(buttonX,"buttonX");
	HX_MARK_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_MARK_MEMBER_NAME(buttonUp,"buttonUp");
	HX_MARK_MEMBER_NAME(buttonRight,"buttonRight");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(dPad,"dPad");
	HX_MARK_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxVirtualPad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonA,"buttonA");
	HX_VISIT_MEMBER_NAME(buttonB,"buttonB");
	HX_VISIT_MEMBER_NAME(buttonC,"buttonC");
	HX_VISIT_MEMBER_NAME(buttonY,"buttonY");
	HX_VISIT_MEMBER_NAME(buttonX,"buttonX");
	HX_VISIT_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_VISIT_MEMBER_NAME(buttonUp,"buttonUp");
	HX_VISIT_MEMBER_NAME(buttonRight,"buttonRight");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(dPad,"dPad");
	HX_VISIT_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxVirtualPad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { return dPad; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { return buttonA; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { return buttonB; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { return buttonC; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { return buttonY; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { return buttonX; }
		if (HX_FIELD_EQ(inName,"actions") ) { return actions; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { return buttonUp; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { return buttonLeft; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { return buttonRight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVirtualPad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { dPad=inValue.Cast< ::flixel::group::FlxSpriteGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { buttonA=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { buttonB=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { buttonC=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { buttonY=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { buttonX=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast< ::flixel::group::FlxSpriteGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { buttonUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { buttonLeft=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { buttonRight=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVirtualPad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buttonA"));
	outFields->push(HX_CSTRING("buttonB"));
	outFields->push(HX_CSTRING("buttonC"));
	outFields->push(HX_CSTRING("buttonY"));
	outFields->push(HX_CSTRING("buttonX"));
	outFields->push(HX_CSTRING("buttonLeft"));
	outFields->push(HX_CSTRING("buttonUp"));
	outFields->push(HX_CSTRING("buttonRight"));
	outFields->push(HX_CSTRING("buttonDown"));
	outFields->push(HX_CSTRING("dPad"));
	outFields->push(HX_CSTRING("actions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonA),HX_CSTRING("buttonA")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonB),HX_CSTRING("buttonB")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonC),HX_CSTRING("buttonC")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonY),HX_CSTRING("buttonY")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonX),HX_CSTRING("buttonX")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonLeft),HX_CSTRING("buttonLeft")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonUp),HX_CSTRING("buttonUp")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonRight),HX_CSTRING("buttonRight")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonDown),HX_CSTRING("buttonDown")},
	{hx::fsObject /*::flixel::group::FlxSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,dPad),HX_CSTRING("dPad")},
	{hx::fsObject /*::flixel::group::FlxSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,actions),HX_CSTRING("actions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buttonA"),
	HX_CSTRING("buttonB"),
	HX_CSTRING("buttonC"),
	HX_CSTRING("buttonY"),
	HX_CSTRING("buttonX"),
	HX_CSTRING("buttonLeft"),
	HX_CSTRING("buttonUp"),
	HX_CSTRING("buttonRight"),
	HX_CSTRING("buttonDown"),
	HX_CSTRING("dPad"),
	HX_CSTRING("actions"),
	HX_CSTRING("destroy"),
	HX_CSTRING("createButton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#endif

Class FlxVirtualPad_obj::__mClass;

void FlxVirtualPad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxVirtualPad"), hx::TCanCast< FlxVirtualPad_obj> ,sStaticFields,sMemberFields,
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

void FlxVirtualPad_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
