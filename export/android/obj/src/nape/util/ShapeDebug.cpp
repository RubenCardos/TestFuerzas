#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace util{

Void ShapeDebug_obj::__construct(int width,int height,hx::Null< int >  __o_bgColour)
{
HX_STACK_FRAME("nape.util.ShapeDebug","new",0xf3c659ea,"nape.util.ShapeDebug.new","nape/util/ShapeDebug.hx",182,0xfa2f3866)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_bgColour,"bgColour")
int bgColour = __o_bgColour.Default(3355443);
{
	HX_STACK_LINE(191)
	this->thickness = 0.0;
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(217)
	super::__construct();
	HX_STACK_LINE(221)
	::zpp_nape::util::ZPP_ShapeDebug _g = ::zpp_nape::util::ZPP_ShapeDebug_obj::__new(width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(221)
	this->zpp_inner_zn = _g;
	HX_STACK_LINE(222)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(223)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(224)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		this->zpp_inner->d_shape->setbg(bgColour);
		HX_STACK_LINE(225)
		this->zpp_inner->bg_col;
	}
	HX_STACK_LINE(226)
	this->thickness = 0.1;
}
;
	return null();
}

//ShapeDebug_obj::~ShapeDebug_obj() { }

Dynamic ShapeDebug_obj::__CreateEmpty() { return  new ShapeDebug_obj; }
hx::ObjectPtr< ShapeDebug_obj > ShapeDebug_obj::__new(int width,int height,hx::Null< int >  __o_bgColour)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(width,height,__o_bgColour);
	return result;}

Dynamic ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ShapeDebug_obj::clear( ){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","clear",0xe4aaf197,"nape.util.ShapeDebug.clear","nape/util/ShapeDebug.hx",232,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->zpp_inner_zn->graphics->clear();
	}
return null();
}


Void ShapeDebug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawLine",0xbd19644e,"nape.util.ShapeDebug.drawLine","nape/util/ShapeDebug.hx",237,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(255)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(256)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(257)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(258)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(258)
						_this->_validate();
					}
				}
				HX_STACK_LINE(258)
				_g = start->zpp_inner->x;
			}
			HX_STACK_LINE(258)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(258)
						_this->_validate();
					}
				}
				HX_STACK_LINE(258)
				_g1 = start->zpp_inner->y;
			}
			HX_STACK_LINE(258)
			g->moveTo(_g,_g1);
			HX_STACK_LINE(259)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				_g2 = end->zpp_inner->x;
			}
			HX_STACK_LINE(259)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				_g3 = end->zpp_inner->y;
			}
			HX_STACK_LINE(259)
			g->lineTo(_g2,_g3);
			HX_STACK_LINE(260)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(264)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(264)
					start->zpp_inner = null();
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							if (((o->outer != null()))){
								HX_STACK_LINE(264)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(264)
								o->outer = null();
							}
							HX_STACK_LINE(264)
							o->_isimmutable = null();
							HX_STACK_LINE(264)
							o->_validate = null();
							HX_STACK_LINE(264)
							o->_invalidate = null();
						}
						HX_STACK_LINE(264)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(265)
				true;
			}
			else{
				HX_STACK_LINE(268)
				false;
			}
			HX_STACK_LINE(271)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(275)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(275)
					end->zpp_inner = null();
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(275)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							if (((o->outer != null()))){
								HX_STACK_LINE(275)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(275)
								o->outer = null();
							}
							HX_STACK_LINE(275)
							o->_isimmutable = null();
							HX_STACK_LINE(275)
							o->_validate = null();
							HX_STACK_LINE(275)
							o->_invalidate = null();
						}
						HX_STACK_LINE(275)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(276)
				true;
			}
			else{
				HX_STACK_LINE(279)
				false;
			}
		}
		else{
			HX_STACK_LINE(284)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(285)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(285)
						_this->_validate();
					}
				}
				HX_STACK_LINE(285)
				_g4 = v->zpp_inner->x;
			}
			HX_STACK_LINE(285)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(285)
						_this->_validate();
					}
				}
				HX_STACK_LINE(285)
				_g5 = v->zpp_inner->y;
			}
			HX_STACK_LINE(285)
			g->moveTo(_g4,_g5);
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				v->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						if (((o->outer != null()))){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(287)
			::nape::geom::Vec2 _g6 = this->zpp_inner->xform->outer->transform(end,null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(287)
			v = _g6;
			HX_STACK_LINE(288)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(288)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(288)
						_this->_validate();
					}
				}
				HX_STACK_LINE(288)
				_g7 = v->zpp_inner->x;
			}
			HX_STACK_LINE(288)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(288)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(288)
						_this->_validate();
					}
				}
				HX_STACK_LINE(288)
				_g8 = v->zpp_inner->y;
			}
			HX_STACK_LINE(288)
			g->lineTo(_g7,_g8);
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(289)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(289)
				v->zpp_inner = null();
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(289)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						if (((o->outer != null()))){
							HX_STACK_LINE(289)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(289)
							o->outer = null();
						}
						HX_STACK_LINE(289)
						o->_isimmutable = null();
						HX_STACK_LINE(289)
						o->_validate = null();
						HX_STACK_LINE(289)
						o->_invalidate = null();
					}
					HX_STACK_LINE(289)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCurve",0x9274cf15,"nape.util.ShapeDebug.drawCurve","nape/util/ShapeDebug.hx",295,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(319)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(320)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(321)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(322)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(322)
						_this->_validate();
					}
				}
				HX_STACK_LINE(322)
				_g = start->zpp_inner->x;
			}
			HX_STACK_LINE(322)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(322)
						_this->_validate();
					}
				}
				HX_STACK_LINE(322)
				_g1 = start->zpp_inner->y;
			}
			HX_STACK_LINE(322)
			g->moveTo(_g,_g1);
			HX_STACK_LINE(323)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g2 = control->zpp_inner->x;
			}
			HX_STACK_LINE(323)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g3 = control->zpp_inner->y;
			}
			HX_STACK_LINE(323)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g4 = end->zpp_inner->x;
			}
			HX_STACK_LINE(323)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g5 = end->zpp_inner->y;
			}
			HX_STACK_LINE(323)
			g->curveTo(_g2,_g3,_g4,_g5);
			HX_STACK_LINE(324)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(328)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(328)
					start->zpp_inner = null();
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(328)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							if (((o->outer != null()))){
								HX_STACK_LINE(328)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(328)
								o->outer = null();
							}
							HX_STACK_LINE(328)
							o->_isimmutable = null();
							HX_STACK_LINE(328)
							o->_validate = null();
							HX_STACK_LINE(328)
							o->_invalidate = null();
						}
						HX_STACK_LINE(328)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(329)
				true;
			}
			else{
				HX_STACK_LINE(332)
				false;
			}
			HX_STACK_LINE(335)
			if ((control->zpp_inner->weak)){
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					::zpp_nape::geom::ZPP_Vec2 inner = control->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(339)
					control->zpp_inner->outer = null();
					HX_STACK_LINE(339)
					control->zpp_inner = null();
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::nape::geom::Vec2 o = control;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(339)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							if (((o->outer != null()))){
								HX_STACK_LINE(339)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(339)
								o->outer = null();
							}
							HX_STACK_LINE(339)
							o->_isimmutable = null();
							HX_STACK_LINE(339)
							o->_validate = null();
							HX_STACK_LINE(339)
							o->_invalidate = null();
						}
						HX_STACK_LINE(339)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(340)
				true;
			}
			else{
				HX_STACK_LINE(343)
				false;
			}
			HX_STACK_LINE(346)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(350)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(350)
					end->zpp_inner = null();
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(350)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							if (((o->outer != null()))){
								HX_STACK_LINE(350)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(350)
								o->outer = null();
							}
							HX_STACK_LINE(350)
							o->_isimmutable = null();
							HX_STACK_LINE(350)
							o->_validate = null();
							HX_STACK_LINE(350)
							o->_invalidate = null();
						}
						HX_STACK_LINE(350)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(351)
				true;
			}
			else{
				HX_STACK_LINE(354)
				false;
			}
		}
		else{
			HX_STACK_LINE(359)
			::nape::geom::Vec2 u = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(control,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 q = this->zpp_inner->xform->outer->transform(end,null(),null());		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(362)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(362)
						_this->_validate();
					}
				}
				HX_STACK_LINE(362)
				_g6 = u->zpp_inner->x;
			}
			HX_STACK_LINE(362)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(362)
						_this->_validate();
					}
				}
				HX_STACK_LINE(362)
				_g7 = u->zpp_inner->y;
			}
			HX_STACK_LINE(362)
			g->moveTo(_g6,_g7);
			HX_STACK_LINE(363)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g8 = v->zpp_inner->x;
			}
			HX_STACK_LINE(363)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g9 = v->zpp_inner->y;
			}
			HX_STACK_LINE(363)
			Float _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g10 = q->zpp_inner->x;
			}
			HX_STACK_LINE(363)
			Float _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g11 = q->zpp_inner->y;
			}
			HX_STACK_LINE(363)
			g->curveTo(_g8,_g9,_g10,_g11);
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(364)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(364)
				u->zpp_inner = null();
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(364)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						if (((o->outer != null()))){
							HX_STACK_LINE(364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(364)
							o->outer = null();
						}
						HX_STACK_LINE(364)
						o->_isimmutable = null();
						HX_STACK_LINE(364)
						o->_validate = null();
						HX_STACK_LINE(364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(365)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(365)
				v->zpp_inner = null();
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(365)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						if (((o->outer != null()))){
							HX_STACK_LINE(365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(365)
							o->outer = null();
						}
						HX_STACK_LINE(365)
						o->_isimmutable = null();
						HX_STACK_LINE(365)
						o->_validate = null();
						HX_STACK_LINE(365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(366)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(366)
				q->zpp_inner = null();
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(366)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						if (((o->outer != null()))){
							HX_STACK_LINE(366)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(366)
							o->outer = null();
						}
						HX_STACK_LINE(366)
						o->_isimmutable = null();
						HX_STACK_LINE(366)
						o->_validate = null();
						HX_STACK_LINE(366)
						o->_invalidate = null();
					}
					HX_STACK_LINE(366)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCircle",0xaae308ea,"nape.util.ShapeDebug.drawCircle","nape/util/ShapeDebug.hx",372,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(385)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(386)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(387)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(388)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(388)
						_this->_validate();
					}
				}
				HX_STACK_LINE(388)
				_g = position->zpp_inner->x;
			}
			HX_STACK_LINE(388)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(388)
						_this->_validate();
					}
				}
				HX_STACK_LINE(388)
				_g1 = position->zpp_inner->y;
			}
			HX_STACK_LINE(388)
			g->drawCircle(_g,_g1,radius);
			HX_STACK_LINE(389)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(393)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(393)
					position->zpp_inner = null();
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(393)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							if (((o->outer != null()))){
								HX_STACK_LINE(393)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(393)
								o->outer = null();
							}
							HX_STACK_LINE(393)
							o->_isimmutable = null();
							HX_STACK_LINE(393)
							o->_validate = null();
							HX_STACK_LINE(393)
							o->_invalidate = null();
						}
						HX_STACK_LINE(393)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(394)
				true;
			}
			else{
				HX_STACK_LINE(397)
				false;
			}
		}
		else{
			HX_STACK_LINE(402)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(403)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(403)
						_this->_validate();
					}
				}
				HX_STACK_LINE(403)
				_g2 = v->zpp_inner->x;
			}
			HX_STACK_LINE(403)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(403)
						_this->_validate();
					}
				}
				HX_STACK_LINE(403)
				_g3 = v->zpp_inner->y;
			}
			HX_STACK_LINE(403)
			g->drawCircle(_g2,_g3,(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(404)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(404)
				v->zpp_inner = null();
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(404)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						if (((o->outer != null()))){
							HX_STACK_LINE(404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(404)
							o->outer = null();
						}
						HX_STACK_LINE(404)
						o->_isimmutable = null();
						HX_STACK_LINE(404)
						o->_validate = null();
						HX_STACK_LINE(404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(404)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawAABB",0xb5b58ada,"nape.util.ShapeDebug.drawAABB","nape/util/ShapeDebug.hx",410,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(417)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(418)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(419)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(419)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				_g = aabb->zpp_inner->minx;
			}
			HX_STACK_LINE(419)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				_g1 = aabb->zpp_inner->miny;
			}
			HX_STACK_LINE(419)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					_g2 = (_this->maxx - _this->minx);
				}
			}
			HX_STACK_LINE(419)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					_g3 = (_this->maxy - _this->miny);
				}
			}
			HX_STACK_LINE(419)
			g->drawRect(_g,_g1,_g2,_g3);
		}
		else{
			HX_STACK_LINE(421)
			::nape::geom::Vec2 _g4 = aabb->zpp_inner->getmin();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(421)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(_g4,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(422)
			::nape::geom::Vec2 w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(422)
							_this->_validate();
						}
					}
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						x = (_this->maxx - _this->minx);
					}
				}
				HX_STACK_LINE(422)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(422)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(422)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(422)
					::nape::geom::Vec2 _g5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(422)
					ret = _g5;
				}
				else{
					HX_STACK_LINE(422)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(422)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(422)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(422)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(422)
					::zpp_nape::geom::ZPP_Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 _g6 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(422)
								ret1 = _g6;
							}
							else{
								HX_STACK_LINE(422)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(422)
								ret1->next = null();
							}
							HX_STACK_LINE(422)
							ret1->weak = false;
						}
						HX_STACK_LINE(422)
						ret1->_immutable = immutable;
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret1->x = x;
							HX_STACK_LINE(422)
							ret1->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						_g7 = ret1;
					}
					HX_STACK_LINE(422)
					ret->zpp_inner = _g7;
					HX_STACK_LINE(422)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(422)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(422)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(422)
								_this->_validate();
							}
						}
						HX_STACK_LINE(422)
						_g8 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",422,0xfa2f3866)
							{
								HX_STACK_LINE(422)
								Float _g9;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									{
										HX_STACK_LINE(422)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(422)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(422)
											_this->_validate();
										}
									}
									HX_STACK_LINE(422)
									_g9 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(422)
								return (_g9 == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(422)
					if ((!(((  (((_g8 == x))) ? bool(_Function_4_1::Block(ret)) : bool(false) ))))){
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(422)
							ret->zpp_inner->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(422)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(422)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(422)
					ret;
				}
				HX_STACK_LINE(422)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(422)
				w = ret;
			}
			HX_STACK_LINE(423)
			::nape::geom::Vec2 w2 = this->zpp_inner->xform->outer->transform(w,true,null());		HX_STACK_VAR(w2,"w2");
			HX_STACK_LINE(424)
			::nape::geom::Vec2 h;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(424)
							_this->_validate();
						}
					}
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						y = (_this->maxy - _this->miny);
					}
				}
				HX_STACK_LINE(424)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(424)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(424)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(424)
					::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(424)
					ret = _g10;
				}
				else{
					HX_STACK_LINE(424)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(424)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(424)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(424)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(424)
					::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(424)
								ret1 = _g11;
							}
							else{
								HX_STACK_LINE(424)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(424)
								ret1->next = null();
							}
							HX_STACK_LINE(424)
							ret1->weak = false;
						}
						HX_STACK_LINE(424)
						ret1->_immutable = immutable;
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret1->x = (int)0;
							HX_STACK_LINE(424)
							ret1->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						_g12 = ret1;
					}
					HX_STACK_LINE(424)
					ret->zpp_inner = _g12;
					HX_STACK_LINE(424)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(424)
					Float _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						_g13 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",424,0xfa2f3866)
							{
								HX_STACK_LINE(424)
								Float _g14;		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									{
										HX_STACK_LINE(424)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(424)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(424)
											_this->_validate();
										}
									}
									HX_STACK_LINE(424)
									_g14 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(424)
								return (_g14 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(424)
					if ((!(((  (((_g13 == (int)0))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret->zpp_inner->x = (int)0;
							HX_STACK_LINE(424)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(424)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(424)
					ret;
				}
				HX_STACK_LINE(424)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(424)
				h = ret;
			}
			HX_STACK_LINE(425)
			::nape::geom::Vec2 h2 = this->zpp_inner->xform->outer->transform(h,true,null());		HX_STACK_VAR(h2,"h2");
			HX_STACK_LINE(426)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(426)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(426)
						_this->_validate();
					}
				}
				HX_STACK_LINE(426)
				_g15 = v->zpp_inner->x;
			}
			HX_STACK_LINE(426)
			Float _g16;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(426)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(426)
						_this->_validate();
					}
				}
				HX_STACK_LINE(426)
				_g16 = v->zpp_inner->y;
			}
			HX_STACK_LINE(426)
			g->moveTo(_g15,_g16);
			HX_STACK_LINE(427)
			Float _g17;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g17 = v->zpp_inner->x;
			}
			HX_STACK_LINE(427)
			Float _g18;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g18 = w2->zpp_inner->x;
			}
			HX_STACK_LINE(427)
			Float _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(427)
			Float _g20;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g20 = v->zpp_inner->y;
			}
			HX_STACK_LINE(427)
			Float _g21;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g21 = w2->zpp_inner->y;
			}
			HX_STACK_LINE(427)
			Float _g22 = (_g20 + _g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(427)
			g->lineTo(_g19,_g22);
			HX_STACK_LINE(428)
			Float _g23;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g23 = v->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float _g24;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g24 = w2->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float _g25 = (_g23 + _g24);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(428)
			Float _g26;		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g26 = h2->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float _g27 = (_g25 + _g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(428)
			Float _g28;		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g28 = v->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float _g29;		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g29 = w2->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float _g30 = (_g28 + _g29);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(428)
			Float _g31;		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g31 = h2->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(428)
			g->lineTo(_g27,_g32);
			HX_STACK_LINE(429)
			Float _g33;		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g33 = v->zpp_inner->x;
			}
			HX_STACK_LINE(429)
			Float _g34;		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g34 = h2->zpp_inner->x;
			}
			HX_STACK_LINE(429)
			Float _g35 = (_g33 + _g34);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(429)
			Float _g36;		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g36 = v->zpp_inner->y;
			}
			HX_STACK_LINE(429)
			Float _g37;		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g37 = h2->zpp_inner->y;
			}
			HX_STACK_LINE(429)
			Float _g38 = (_g36 + _g37);		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(429)
			g->lineTo(_g35,_g38);
			HX_STACK_LINE(430)
			Float _g39;		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(430)
						_this->_validate();
					}
				}
				HX_STACK_LINE(430)
				_g39 = v->zpp_inner->x;
			}
			HX_STACK_LINE(430)
			Float _g40;		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(430)
						_this->_validate();
					}
				}
				HX_STACK_LINE(430)
				_g40 = v->zpp_inner->y;
			}
			HX_STACK_LINE(430)
			g->lineTo(_g39,_g40);
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(431)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(431)
				v->zpp_inner = null();
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						if (((o->outer != null()))){
							HX_STACK_LINE(431)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(431)
							o->outer = null();
						}
						HX_STACK_LINE(431)
						o->_isimmutable = null();
						HX_STACK_LINE(431)
						o->_validate = null();
						HX_STACK_LINE(431)
						o->_invalidate = null();
					}
					HX_STACK_LINE(431)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 inner = w->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(432)
				w->zpp_inner->outer = null();
				HX_STACK_LINE(432)
				w->zpp_inner = null();
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::nape::geom::Vec2 o = w;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(432)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						if (((o->outer != null()))){
							HX_STACK_LINE(432)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(432)
							o->outer = null();
						}
						HX_STACK_LINE(432)
						o->_isimmutable = null();
						HX_STACK_LINE(432)
						o->_validate = null();
						HX_STACK_LINE(432)
						o->_invalidate = null();
					}
					HX_STACK_LINE(432)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 inner = w2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(433)
				w2->zpp_inner->outer = null();
				HX_STACK_LINE(433)
				w2->zpp_inner = null();
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::nape::geom::Vec2 o = w2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(433)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						if (((o->outer != null()))){
							HX_STACK_LINE(433)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(433)
							o->outer = null();
						}
						HX_STACK_LINE(433)
						o->_isimmutable = null();
						HX_STACK_LINE(433)
						o->_validate = null();
						HX_STACK_LINE(433)
						o->_invalidate = null();
					}
					HX_STACK_LINE(433)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(434)
			{
				HX_STACK_LINE(434)
				::zpp_nape::geom::ZPP_Vec2 inner = h->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(434)
				h->zpp_inner->outer = null();
				HX_STACK_LINE(434)
				h->zpp_inner = null();
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::nape::geom::Vec2 o = h;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(434)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						if (((o->outer != null()))){
							HX_STACK_LINE(434)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(434)
							o->outer = null();
						}
						HX_STACK_LINE(434)
						o->_isimmutable = null();
						HX_STACK_LINE(434)
						o->_validate = null();
						HX_STACK_LINE(434)
						o->_invalidate = null();
					}
					HX_STACK_LINE(434)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::zpp_nape::geom::ZPP_Vec2 inner = h2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(435)
				h2->zpp_inner->outer = null();
				HX_STACK_LINE(435)
				h2->zpp_inner = null();
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::nape::geom::Vec2 o = h2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(435)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(435)
						if (((o->outer != null()))){
							HX_STACK_LINE(435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(435)
							o->outer = null();
						}
						HX_STACK_LINE(435)
						o->_isimmutable = null();
						HX_STACK_LINE(435)
						o->_validate = null();
						HX_STACK_LINE(435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(435)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledTriangle",0xb9aefb64,"nape.util.ShapeDebug.drawFilledTriangle","nape/util/ShapeDebug.hx",441,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p0,"p0")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(463)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(464)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(465)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(466)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(467)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(467)
						_this->_validate();
					}
				}
				HX_STACK_LINE(467)
				_g = p0->zpp_inner->x;
			}
			HX_STACK_LINE(467)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(467)
						_this->_validate();
					}
				}
				HX_STACK_LINE(467)
				_g1 = p0->zpp_inner->y;
			}
			HX_STACK_LINE(467)
			g->moveTo(_g,_g1);
			HX_STACK_LINE(468)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(468)
						_this->_validate();
					}
				}
				HX_STACK_LINE(468)
				_g2 = p1->zpp_inner->x;
			}
			HX_STACK_LINE(468)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(468)
						_this->_validate();
					}
				}
				HX_STACK_LINE(468)
				_g3 = p1->zpp_inner->y;
			}
			HX_STACK_LINE(468)
			g->lineTo(_g2,_g3);
			HX_STACK_LINE(469)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(469)
						_this->_validate();
					}
				}
				HX_STACK_LINE(469)
				_g4 = p2->zpp_inner->x;
			}
			HX_STACK_LINE(469)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(469)
						_this->_validate();
					}
				}
				HX_STACK_LINE(469)
				_g5 = p2->zpp_inner->y;
			}
			HX_STACK_LINE(469)
			g->lineTo(_g4,_g5);
			HX_STACK_LINE(470)
			if ((p0->zpp_inner->weak)){
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(474)
					p0->zpp_inner->outer = null();
					HX_STACK_LINE(474)
					p0->zpp_inner = null();
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(474)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							if (((o->outer != null()))){
								HX_STACK_LINE(474)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(474)
								o->outer = null();
							}
							HX_STACK_LINE(474)
							o->_isimmutable = null();
							HX_STACK_LINE(474)
							o->_validate = null();
							HX_STACK_LINE(474)
							o->_invalidate = null();
						}
						HX_STACK_LINE(474)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(475)
				true;
			}
			else{
				HX_STACK_LINE(478)
				false;
			}
			HX_STACK_LINE(481)
			if ((p1->zpp_inner->weak)){
				HX_STACK_LINE(485)
				{
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(485)
					p1->zpp_inner->outer = null();
					HX_STACK_LINE(485)
					p1->zpp_inner = null();
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(485)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							if (((o->outer != null()))){
								HX_STACK_LINE(485)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(485)
								o->outer = null();
							}
							HX_STACK_LINE(485)
							o->_isimmutable = null();
							HX_STACK_LINE(485)
							o->_validate = null();
							HX_STACK_LINE(485)
							o->_invalidate = null();
						}
						HX_STACK_LINE(485)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(486)
				true;
			}
			else{
				HX_STACK_LINE(489)
				false;
			}
			HX_STACK_LINE(492)
			if ((p2->zpp_inner->weak)){
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(496)
					::zpp_nape::geom::ZPP_Vec2 inner = p2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(496)
					p2->zpp_inner->outer = null();
					HX_STACK_LINE(496)
					p2->zpp_inner = null();
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::nape::geom::Vec2 o = p2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(496)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							if (((o->outer != null()))){
								HX_STACK_LINE(496)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(496)
								o->outer = null();
							}
							HX_STACK_LINE(496)
							o->_isimmutable = null();
							HX_STACK_LINE(496)
							o->_validate = null();
							HX_STACK_LINE(496)
							o->_invalidate = null();
						}
						HX_STACK_LINE(496)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(497)
				true;
			}
			else{
				HX_STACK_LINE(500)
				false;
			}
		}
		else{
			HX_STACK_LINE(505)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p0,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(506)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(506)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(506)
						_this->_validate();
					}
				}
				HX_STACK_LINE(506)
				_g6 = v->zpp_inner->x;
			}
			HX_STACK_LINE(506)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(506)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(506)
						_this->_validate();
					}
				}
				HX_STACK_LINE(506)
				_g7 = v->zpp_inner->y;
			}
			HX_STACK_LINE(506)
			g->moveTo(_g6,_g7);
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(507)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(507)
				v->zpp_inner = null();
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(507)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						if (((o->outer != null()))){
							HX_STACK_LINE(507)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(507)
							o->outer = null();
						}
						HX_STACK_LINE(507)
						o->_isimmutable = null();
						HX_STACK_LINE(507)
						o->_validate = null();
						HX_STACK_LINE(507)
						o->_invalidate = null();
					}
					HX_STACK_LINE(507)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(508)
			::nape::geom::Vec2 _g8 = this->zpp_inner->xform->outer->transform(p1,null(),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(508)
			v = _g8;
			HX_STACK_LINE(509)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(509)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(509)
						_this->_validate();
					}
				}
				HX_STACK_LINE(509)
				_g9 = v->zpp_inner->x;
			}
			HX_STACK_LINE(509)
			Float _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(509)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(509)
						_this->_validate();
					}
				}
				HX_STACK_LINE(509)
				_g10 = v->zpp_inner->y;
			}
			HX_STACK_LINE(509)
			g->lineTo(_g9,_g10);
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(510)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(510)
				v->zpp_inner = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(510)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						if (((o->outer != null()))){
							HX_STACK_LINE(510)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(510)
							o->outer = null();
						}
						HX_STACK_LINE(510)
						o->_isimmutable = null();
						HX_STACK_LINE(510)
						o->_validate = null();
						HX_STACK_LINE(510)
						o->_invalidate = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(511)
			::nape::geom::Vec2 _g11 = this->zpp_inner->xform->outer->transform(p2,null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(511)
			v = _g11;
			HX_STACK_LINE(512)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(512)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(512)
						_this->_validate();
					}
				}
				HX_STACK_LINE(512)
				_g12 = v->zpp_inner->x;
			}
			HX_STACK_LINE(512)
			Float _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(512)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(512)
						_this->_validate();
					}
				}
				HX_STACK_LINE(512)
				_g13 = v->zpp_inner->y;
			}
			HX_STACK_LINE(512)
			g->lineTo(_g12,_g13);
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(513)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(513)
				v->zpp_inner = null();
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(513)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						if (((o->outer != null()))){
							HX_STACK_LINE(513)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(513)
							o->outer = null();
						}
						HX_STACK_LINE(513)
						o->_isimmutable = null();
						HX_STACK_LINE(513)
						o->_validate = null();
						HX_STACK_LINE(513)
						o->_invalidate = null();
					}
					HX_STACK_LINE(513)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(515)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledCircle",0xa41f0fac,"nape.util.ShapeDebug.drawFilledCircle","nape/util/ShapeDebug.hx",520,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(533)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(534)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(535)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(536)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(537)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(537)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(537)
						_this->_validate();
					}
				}
				HX_STACK_LINE(537)
				_g = position->zpp_inner->x;
			}
			HX_STACK_LINE(537)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(537)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(537)
						_this->_validate();
					}
				}
				HX_STACK_LINE(537)
				_g1 = position->zpp_inner->y;
			}
			HX_STACK_LINE(537)
			g->drawCircle(_g,_g1,radius);
			HX_STACK_LINE(538)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(542)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(542)
					position->zpp_inner = null();
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(542)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						{
							HX_STACK_LINE(542)
							if (((o->outer != null()))){
								HX_STACK_LINE(542)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(542)
								o->outer = null();
							}
							HX_STACK_LINE(542)
							o->_isimmutable = null();
							HX_STACK_LINE(542)
							o->_validate = null();
							HX_STACK_LINE(542)
							o->_invalidate = null();
						}
						HX_STACK_LINE(542)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(543)
				true;
			}
			else{
				HX_STACK_LINE(546)
				false;
			}
		}
		else{
			HX_STACK_LINE(551)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(552)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(552)
						_this->_validate();
					}
				}
				HX_STACK_LINE(552)
				_g2 = v->zpp_inner->x;
			}
			HX_STACK_LINE(552)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(552)
						_this->_validate();
					}
				}
				HX_STACK_LINE(552)
				_g3 = v->zpp_inner->y;
			}
			HX_STACK_LINE(552)
			g->drawCircle(_g2,_g3,(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(553)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(553)
				v->zpp_inner = null();
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(553)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						if (((o->outer != null()))){
							HX_STACK_LINE(553)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(553)
							o->outer = null();
						}
						HX_STACK_LINE(553)
						o->_isimmutable = null();
						HX_STACK_LINE(553)
						o->_validate = null();
						HX_STACK_LINE(553)
						o->_invalidate = null();
					}
					HX_STACK_LINE(553)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(555)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawPolygon",0xf89f6a60,"nape.util.ShapeDebug.drawPolygon","nape/util/ShapeDebug.hx",560,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(567)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(568)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),1.0,null(),null(),null(),null(),null());
		HX_STACK_LINE(569)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(570)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(571)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(573)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(574)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(575)
				{
					HX_STACK_LINE(575)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(575)
					while((true)){
						HX_STACK_LINE(575)
						if ((!(((_g < lv->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(575)
							break;
						}
						HX_STACK_LINE(575)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(575)
						++(_g);
						HX_STACK_LINE(582)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(588)
						{
							HX_STACK_LINE(589)
							if ((fsttime)){
								HX_STACK_LINE(590)
								::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(590)
								{
									HX_STACK_LINE(590)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(590)
									{
										HX_STACK_LINE(590)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(590)
										{
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											x = p->zpp_inner->x;
										}
										HX_STACK_LINE(590)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(590)
										{
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											y = p->zpp_inner->y;
										}
										HX_STACK_LINE(590)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(590)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(590)
											::nape::geom::Vec2 _g1 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(590)
											ret = _g1;
										}
										else{
											HX_STACK_LINE(590)
											ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(590)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(590)
											ret->zpp_pool = null();
										}
										HX_STACK_LINE(590)
										if (((ret->zpp_inner == null()))){
											HX_STACK_LINE(590)
											::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(590)
														ret1 = _g1;
													}
													else{
														HX_STACK_LINE(590)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(590)
														ret1->next = null();
													}
													HX_STACK_LINE(590)
													ret1->weak = false;
												}
												HX_STACK_LINE(590)
												ret1->_immutable = immutable;
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													ret1->x = x;
													HX_STACK_LINE(590)
													ret1->y = y;
													HX_STACK_LINE(590)
													{
													}
												}
												HX_STACK_LINE(590)
												_g2 = ret1;
											}
											HX_STACK_LINE(590)
											ret->zpp_inner = _g2;
											HX_STACK_LINE(590)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(590)
											Float _g3;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(590)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(590)
														_this->_validate();
													}
												}
												HX_STACK_LINE(590)
												_g3 = ret->zpp_inner->x;
											}
											struct _Function_10_1{
												inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",590,0xfa2f3866)
													{
														HX_STACK_LINE(590)
														Float _g4;		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(590)
														{
															HX_STACK_LINE(590)
															{
																HX_STACK_LINE(590)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(590)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(590)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(590)
															_g4 = ret->zpp_inner->y;
														}
														HX_STACK_LINE(590)
														return (_g4 == y);
													}
													return null();
												}
											};
											HX_STACK_LINE(590)
											if ((!(((  (((_g3 == x))) ? bool(_Function_10_1::Block(ret,y)) : bool(false) ))))){
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(590)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(590)
													{
													}
												}
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(590)
													if (((_this->_invalidate != null()))){
														HX_STACK_LINE(590)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(590)
											ret;
										}
										HX_STACK_LINE(590)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(590)
										_g5 = ret;
									}
								}
								HX_STACK_LINE(590)
								fst = _g5;
								HX_STACK_LINE(591)
								Float _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(591)
								{
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(591)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(591)
											_this->_validate();
										}
									}
									HX_STACK_LINE(591)
									_g6 = p->zpp_inner->x;
								}
								HX_STACK_LINE(591)
								Float _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(591)
								{
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(591)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(591)
											_this->_validate();
										}
									}
									HX_STACK_LINE(591)
									_g7 = p->zpp_inner->y;
								}
								HX_STACK_LINE(591)
								g->moveTo(_g6,_g7);
							}
							else{
								HX_STACK_LINE(593)
								Float _g8;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(593)
								{
									HX_STACK_LINE(593)
									{
										HX_STACK_LINE(593)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(593)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(593)
											_this->_validate();
										}
									}
									HX_STACK_LINE(593)
									_g8 = p->zpp_inner->x;
								}
								HX_STACK_LINE(593)
								Float _g9;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(593)
								{
									HX_STACK_LINE(593)
									{
										HX_STACK_LINE(593)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(593)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(593)
											_this->_validate();
										}
									}
									HX_STACK_LINE(593)
									_g9 = p->zpp_inner->y;
								}
								HX_STACK_LINE(593)
								g->lineTo(_g8,_g9);
							}
							HX_STACK_LINE(594)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(621)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(622)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(623)
					{
						HX_STACK_LINE(623)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(623)
						while((true)){
							struct _Function_6_1{
								inline static bool Block( ::nape::geom::Vec2Iterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",623,0xfa2f3866)
									{
										HX_STACK_LINE(623)
										_g->zpp_inner->zpp_inner->valmod();
										HX_STACK_LINE(623)
										int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(623)
										_g->zpp_critical = true;
										struct _Function_7_1{
											inline static bool Block( ::nape::geom::Vec2Iterator &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",623,0xfa2f3866)
												{
													HX_STACK_LINE(623)
													{
														HX_STACK_LINE(623)
														_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
														HX_STACK_LINE(623)
														::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
														HX_STACK_LINE(623)
														_g->zpp_inner = null();
													}
													HX_STACK_LINE(623)
													return false;
												}
												return null();
											}
										};
										HX_STACK_LINE(623)
										return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(623)
							if ((!(_Function_6_1::Block(_g)))){
								HX_STACK_LINE(623)
								break;
							}
							HX_STACK_LINE(623)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(623)
							{
								HX_STACK_LINE(623)
								_g->zpp_critical = false;
								HX_STACK_LINE(623)
								int _g10 = (_g->zpp_i)++;		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(623)
								p = _g->zpp_inner->at(_g10);
							}
							HX_STACK_LINE(632)
							{
								HX_STACK_LINE(633)
								if ((fsttime)){
									HX_STACK_LINE(634)
									::nape::geom::Vec2 _g16;		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(634)
										{
											HX_STACK_LINE(634)
											Float x;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(634)
											{
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												x = p->zpp_inner->x;
											}
											HX_STACK_LINE(634)
											Float y;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(634)
											{
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												y = p->zpp_inner->y;
											}
											HX_STACK_LINE(634)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(634)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(634)
												::nape::geom::Vec2 _g11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(634)
												ret = _g11;
											}
											else{
												HX_STACK_LINE(634)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(634)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(634)
												ret->zpp_pool = null();
											}
											HX_STACK_LINE(634)
											if (((ret->zpp_inner == null()))){
												HX_STACK_LINE(634)
												::zpp_nape::geom::ZPP_Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2 _g12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g12,"_g12");
															HX_STACK_LINE(634)
															ret1 = _g12;
														}
														else{
															HX_STACK_LINE(634)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(634)
															ret1->next = null();
														}
														HX_STACK_LINE(634)
														ret1->weak = false;
													}
													HX_STACK_LINE(634)
													ret1->_immutable = immutable;
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														ret1->x = x;
														HX_STACK_LINE(634)
														ret1->y = y;
														HX_STACK_LINE(634)
														{
														}
													}
													HX_STACK_LINE(634)
													_g13 = ret1;
												}
												HX_STACK_LINE(634)
												ret->zpp_inner = _g13;
												HX_STACK_LINE(634)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(634)
												Float _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(634)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(634)
															_this->_validate();
														}
													}
													HX_STACK_LINE(634)
													_g14 = ret->zpp_inner->x;
												}
												struct _Function_11_1{
													inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",634,0xfa2f3866)
														{
															HX_STACK_LINE(634)
															Float _g15;		HX_STACK_VAR(_g15,"_g15");
															HX_STACK_LINE(634)
															{
																HX_STACK_LINE(634)
																{
																	HX_STACK_LINE(634)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(634)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(634)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(634)
																_g15 = ret->zpp_inner->y;
															}
															HX_STACK_LINE(634)
															return (_g15 == y);
														}
														return null();
													}
												};
												HX_STACK_LINE(634)
												if ((!(((  (((_g14 == x))) ? bool(_Function_11_1::Block(ret,y)) : bool(false) ))))){
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(634)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(634)
														{
														}
													}
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(634)
														if (((_this->_invalidate != null()))){
															HX_STACK_LINE(634)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(634)
												ret;
											}
											HX_STACK_LINE(634)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(634)
											_g16 = ret;
										}
									}
									HX_STACK_LINE(634)
									fst = _g16;
									HX_STACK_LINE(635)
									Float _g17;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(635)
									{
										HX_STACK_LINE(635)
										{
											HX_STACK_LINE(635)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(635)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(635)
												_this->_validate();
											}
										}
										HX_STACK_LINE(635)
										_g17 = p->zpp_inner->x;
									}
									HX_STACK_LINE(635)
									Float _g18;		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(635)
									{
										HX_STACK_LINE(635)
										{
											HX_STACK_LINE(635)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(635)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(635)
												_this->_validate();
											}
										}
										HX_STACK_LINE(635)
										_g18 = p->zpp_inner->y;
									}
									HX_STACK_LINE(635)
									g->moveTo(_g17,_g18);
								}
								else{
									HX_STACK_LINE(637)
									Float _g19;		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(637)
									{
										HX_STACK_LINE(637)
										{
											HX_STACK_LINE(637)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(637)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(637)
												_this->_validate();
											}
										}
										HX_STACK_LINE(637)
										_g19 = p->zpp_inner->x;
									}
									HX_STACK_LINE(637)
									Float _g20;		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(637)
									{
										HX_STACK_LINE(637)
										{
											HX_STACK_LINE(637)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(637)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(637)
												_this->_validate();
											}
										}
										HX_STACK_LINE(637)
										_g20 = p->zpp_inner->y;
									}
									HX_STACK_LINE(637)
									g->lineTo(_g19,_g20);
								}
								HX_STACK_LINE(638)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(642)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(643)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(649)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(650)
						if (((verts != null()))){
							HX_STACK_LINE(651)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(652)
							while((true)){
								HX_STACK_LINE(653)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(653)
								{
									HX_STACK_LINE(653)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(653)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(653)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(653)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(653)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(653)
										::nape::geom::Vec2 _g21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(653)
										ret = _g21;
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
										::zpp_nape::geom::ZPP_Vec2 _g23;		HX_STACK_VAR(_g23,"_g23");
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
													::zpp_nape::geom::ZPP_Vec2 _g22 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g22,"_g22");
													HX_STACK_LINE(653)
													ret1 = _g22;
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
											_g23 = ret1;
										}
										HX_STACK_LINE(653)
										ret->zpp_inner = _g23;
										HX_STACK_LINE(653)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(653)
										Float _g24;		HX_STACK_VAR(_g24,"_g24");
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
											_g24 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",653,0xfa2f3866)
												{
													HX_STACK_LINE(653)
													Float _g25;		HX_STACK_VAR(_g25,"_g25");
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
														_g25 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(653)
													return (_g25 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(653)
										if ((!(((  (((_g24 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
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
									p = ret;
								}
								HX_STACK_LINE(654)
								vite = vite->next;
								HX_STACK_LINE(655)
								{
									HX_STACK_LINE(656)
									if ((fsttime)){
										HX_STACK_LINE(657)
										::nape::geom::Vec2 _g31;		HX_STACK_VAR(_g31,"_g31");
										HX_STACK_LINE(657)
										{
											HX_STACK_LINE(657)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(657)
											{
												HX_STACK_LINE(657)
												Float x;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(657)
												{
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													x = p->zpp_inner->x;
												}
												HX_STACK_LINE(657)
												Float y;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(657)
												{
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													y = p->zpp_inner->y;
												}
												HX_STACK_LINE(657)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(657)
												if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
													HX_STACK_LINE(657)
													::nape::geom::Vec2 _g26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g26,"_g26");
													HX_STACK_LINE(657)
													ret = _g26;
												}
												else{
													HX_STACK_LINE(657)
													ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(657)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(657)
													ret->zpp_pool = null();
												}
												HX_STACK_LINE(657)
												if (((ret->zpp_inner == null()))){
													HX_STACK_LINE(657)
													::zpp_nape::geom::ZPP_Vec2 _g28;		HX_STACK_VAR(_g28,"_g28");
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2 _g27 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g27,"_g27");
																HX_STACK_LINE(657)
																ret1 = _g27;
															}
															else{
																HX_STACK_LINE(657)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(657)
																ret1->next = null();
															}
															HX_STACK_LINE(657)
															ret1->weak = false;
														}
														HX_STACK_LINE(657)
														ret1->_immutable = immutable;
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															ret1->x = x;
															HX_STACK_LINE(657)
															ret1->y = y;
															HX_STACK_LINE(657)
															{
															}
														}
														HX_STACK_LINE(657)
														_g28 = ret1;
													}
													HX_STACK_LINE(657)
													ret->zpp_inner = _g28;
													HX_STACK_LINE(657)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(657)
													Float _g29;		HX_STACK_VAR(_g29,"_g29");
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(657)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(657)
																_this->_validate();
															}
														}
														HX_STACK_LINE(657)
														_g29 = ret->zpp_inner->x;
													}
													struct _Function_12_1{
														inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",657,0xfa2f3866)
															{
																HX_STACK_LINE(657)
																Float _g30;		HX_STACK_VAR(_g30,"_g30");
																HX_STACK_LINE(657)
																{
																	HX_STACK_LINE(657)
																	{
																		HX_STACK_LINE(657)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(657)
																		if (((_this->_validate != null()))){
																			HX_STACK_LINE(657)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(657)
																	_g30 = ret->zpp_inner->y;
																}
																HX_STACK_LINE(657)
																return (_g30 == y);
															}
															return null();
														}
													};
													HX_STACK_LINE(657)
													if ((!(((  (((_g29 == x))) ? bool(_Function_12_1::Block(ret,y)) : bool(false) ))))){
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(657)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(657)
															{
															}
														}
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(657)
															if (((_this->_invalidate != null()))){
																HX_STACK_LINE(657)
																_this->_invalidate(_this);
															}
														}
													}
													HX_STACK_LINE(657)
													ret;
												}
												HX_STACK_LINE(657)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(657)
												_g31 = ret;
											}
										}
										HX_STACK_LINE(657)
										fst = _g31;
										HX_STACK_LINE(658)
										Float _g32;		HX_STACK_VAR(_g32,"_g32");
										HX_STACK_LINE(658)
										{
											HX_STACK_LINE(658)
											{
												HX_STACK_LINE(658)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(658)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(658)
													_this->_validate();
												}
											}
											HX_STACK_LINE(658)
											_g32 = p->zpp_inner->x;
										}
										HX_STACK_LINE(658)
										Float _g33;		HX_STACK_VAR(_g33,"_g33");
										HX_STACK_LINE(658)
										{
											HX_STACK_LINE(658)
											{
												HX_STACK_LINE(658)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(658)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(658)
													_this->_validate();
												}
											}
											HX_STACK_LINE(658)
											_g33 = p->zpp_inner->y;
										}
										HX_STACK_LINE(658)
										g->moveTo(_g32,_g33);
									}
									else{
										HX_STACK_LINE(660)
										Float _g34;		HX_STACK_VAR(_g34,"_g34");
										HX_STACK_LINE(660)
										{
											HX_STACK_LINE(660)
											{
												HX_STACK_LINE(660)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(660)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(660)
													_this->_validate();
												}
											}
											HX_STACK_LINE(660)
											_g34 = p->zpp_inner->x;
										}
										HX_STACK_LINE(660)
										Float _g35;		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(660)
										{
											HX_STACK_LINE(660)
											{
												HX_STACK_LINE(660)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(660)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(660)
													_this->_validate();
												}
											}
											HX_STACK_LINE(660)
											_g35 = p->zpp_inner->y;
										}
										HX_STACK_LINE(660)
										g->lineTo(_g34,_g35);
									}
									HX_STACK_LINE(661)
									fsttime = false;
								}
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(663)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(663)
									p->zpp_inner = null();
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(663)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											if (((o->outer != null()))){
												HX_STACK_LINE(663)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(663)
												o->outer = null();
											}
											HX_STACK_LINE(663)
											o->_isimmutable = null();
											HX_STACK_LINE(663)
											o->_validate = null();
											HX_STACK_LINE(663)
											o->_invalidate = null();
										}
										HX_STACK_LINE(663)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(652)
								if ((!(((vite != verts))))){
									HX_STACK_LINE(652)
									break;
								}
							}
						}
					}
					else{
					}
				}
			}
			HX_STACK_LINE(674)
			Float _g36;		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(674)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(674)
						_this->_validate();
					}
				}
				HX_STACK_LINE(674)
				_g36 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(674)
			Float _g37;		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(674)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(674)
						_this->_validate();
					}
				}
				HX_STACK_LINE(674)
				_g37 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(674)
			g->lineTo(_g36,_g37);
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(675)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(675)
				fst->zpp_inner = null();
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(675)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						if (((o->outer != null()))){
							HX_STACK_LINE(675)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(675)
							o->outer = null();
						}
						HX_STACK_LINE(675)
						o->_isimmutable = null();
						HX_STACK_LINE(675)
						o->_validate = null();
						HX_STACK_LINE(675)
						o->_invalidate = null();
					}
					HX_STACK_LINE(675)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(679)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(680)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(681)
					while((true)){
						HX_STACK_LINE(681)
						if ((!(((_g < lv->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(681)
							break;
						}
						HX_STACK_LINE(681)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(681)
						++(_g);
						HX_STACK_LINE(688)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(694)
						{
							HX_STACK_LINE(695)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(696)
							if ((fsttime)){
								HX_STACK_LINE(697)
								fst = v;
								HX_STACK_LINE(698)
								Float _g38;		HX_STACK_VAR(_g38,"_g38");
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(698)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(698)
											_this->_validate();
										}
									}
									HX_STACK_LINE(698)
									_g38 = v->zpp_inner->x;
								}
								HX_STACK_LINE(698)
								Float _g39;		HX_STACK_VAR(_g39,"_g39");
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(698)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(698)
											_this->_validate();
										}
									}
									HX_STACK_LINE(698)
									_g39 = v->zpp_inner->y;
								}
								HX_STACK_LINE(698)
								g->moveTo(_g38,_g39);
							}
							else{
								HX_STACK_LINE(700)
								Float _g40;		HX_STACK_VAR(_g40,"_g40");
								HX_STACK_LINE(700)
								{
									HX_STACK_LINE(700)
									{
										HX_STACK_LINE(700)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(700)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(700)
											_this->_validate();
										}
									}
									HX_STACK_LINE(700)
									_g40 = v->zpp_inner->x;
								}
								HX_STACK_LINE(700)
								Float _g41;		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(700)
								{
									HX_STACK_LINE(700)
									{
										HX_STACK_LINE(700)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(700)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(700)
											_this->_validate();
										}
									}
									HX_STACK_LINE(700)
									_g41 = v->zpp_inner->y;
								}
								HX_STACK_LINE(700)
								g->lineTo(_g40,_g41);
							}
							HX_STACK_LINE(701)
							if ((!(fsttime))){
								HX_STACK_LINE(701)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(701)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(701)
								v->zpp_inner = null();
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(701)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									{
										HX_STACK_LINE(701)
										if (((o->outer != null()))){
											HX_STACK_LINE(701)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(701)
											o->outer = null();
										}
										HX_STACK_LINE(701)
										o->_isimmutable = null();
										HX_STACK_LINE(701)
										o->_validate = null();
										HX_STACK_LINE(701)
										o->_invalidate = null();
									}
									HX_STACK_LINE(701)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(702)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(731)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(732)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(733)
					{
						HX_STACK_LINE(733)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(733)
						while((true)){
							struct _Function_6_1{
								inline static bool Block( ::nape::geom::Vec2Iterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",733,0xfa2f3866)
									{
										HX_STACK_LINE(733)
										_g->zpp_inner->zpp_inner->valmod();
										HX_STACK_LINE(733)
										int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(733)
										_g->zpp_critical = true;
										struct _Function_7_1{
											inline static bool Block( ::nape::geom::Vec2Iterator &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",733,0xfa2f3866)
												{
													HX_STACK_LINE(733)
													{
														HX_STACK_LINE(733)
														_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
														HX_STACK_LINE(733)
														::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
														HX_STACK_LINE(733)
														_g->zpp_inner = null();
													}
													HX_STACK_LINE(733)
													return false;
												}
												return null();
											}
										};
										HX_STACK_LINE(733)
										return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(733)
							if ((!(_Function_6_1::Block(_g)))){
								HX_STACK_LINE(733)
								break;
							}
							HX_STACK_LINE(733)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(733)
								_g->zpp_critical = false;
								HX_STACK_LINE(733)
								int _g42 = (_g->zpp_i)++;		HX_STACK_VAR(_g42,"_g42");
								HX_STACK_LINE(733)
								p = _g->zpp_inner->at(_g42);
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(743)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(744)
								if ((fsttime)){
									HX_STACK_LINE(745)
									fst = v;
									HX_STACK_LINE(746)
									Float _g43;		HX_STACK_VAR(_g43,"_g43");
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(746)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(746)
												_this->_validate();
											}
										}
										HX_STACK_LINE(746)
										_g43 = v->zpp_inner->x;
									}
									HX_STACK_LINE(746)
									Float _g44;		HX_STACK_VAR(_g44,"_g44");
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(746)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(746)
												_this->_validate();
											}
										}
										HX_STACK_LINE(746)
										_g44 = v->zpp_inner->y;
									}
									HX_STACK_LINE(746)
									g->moveTo(_g43,_g44);
								}
								else{
									HX_STACK_LINE(748)
									Float _g45;		HX_STACK_VAR(_g45,"_g45");
									HX_STACK_LINE(748)
									{
										HX_STACK_LINE(748)
										{
											HX_STACK_LINE(748)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(748)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(748)
												_this->_validate();
											}
										}
										HX_STACK_LINE(748)
										_g45 = v->zpp_inner->x;
									}
									HX_STACK_LINE(748)
									Float _g46;		HX_STACK_VAR(_g46,"_g46");
									HX_STACK_LINE(748)
									{
										HX_STACK_LINE(748)
										{
											HX_STACK_LINE(748)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(748)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(748)
												_this->_validate();
											}
										}
										HX_STACK_LINE(748)
										_g46 = v->zpp_inner->y;
									}
									HX_STACK_LINE(748)
									g->lineTo(_g45,_g46);
								}
								HX_STACK_LINE(749)
								if ((!(fsttime))){
									HX_STACK_LINE(749)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(749)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(749)
									v->zpp_inner = null();
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(749)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										{
											HX_STACK_LINE(749)
											if (((o->outer != null()))){
												HX_STACK_LINE(749)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(749)
												o->outer = null();
											}
											HX_STACK_LINE(749)
											o->_isimmutable = null();
											HX_STACK_LINE(749)
											o->_validate = null();
											HX_STACK_LINE(749)
											o->_invalidate = null();
										}
										HX_STACK_LINE(749)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(750)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(754)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(755)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(762)
						if (((verts != null()))){
							HX_STACK_LINE(763)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(764)
							while((true)){
								HX_STACK_LINE(765)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(765)
								{
									HX_STACK_LINE(765)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(765)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(765)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(765)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(765)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(765)
										::nape::geom::Vec2 _g47 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g47,"_g47");
										HX_STACK_LINE(765)
										ret = _g47;
									}
									else{
										HX_STACK_LINE(765)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(765)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(765)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(765)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(765)
										::zpp_nape::geom::ZPP_Vec2 _g49;		HX_STACK_VAR(_g49,"_g49");
										HX_STACK_LINE(765)
										{
											HX_STACK_LINE(765)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(765)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2 _g48 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g48,"_g48");
													HX_STACK_LINE(765)
													ret1 = _g48;
												}
												else{
													HX_STACK_LINE(765)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(765)
													ret1->next = null();
												}
												HX_STACK_LINE(765)
												ret1->weak = false;
											}
											HX_STACK_LINE(765)
											ret1->_immutable = immutable;
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												ret1->x = x;
												HX_STACK_LINE(765)
												ret1->y = y;
												HX_STACK_LINE(765)
												{
												}
											}
											HX_STACK_LINE(765)
											_g49 = ret1;
										}
										HX_STACK_LINE(765)
										ret->zpp_inner = _g49;
										HX_STACK_LINE(765)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(765)
										Float _g50;		HX_STACK_VAR(_g50,"_g50");
										HX_STACK_LINE(765)
										{
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(765)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(765)
													_this->_validate();
												}
											}
											HX_STACK_LINE(765)
											_g50 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",765,0xfa2f3866)
												{
													HX_STACK_LINE(765)
													Float _g51;		HX_STACK_VAR(_g51,"_g51");
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														{
															HX_STACK_LINE(765)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(765)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(765)
																_this->_validate();
															}
														}
														HX_STACK_LINE(765)
														_g51 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(765)
													return (_g51 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(765)
										if ((!(((  (((_g50 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(765)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(765)
												{
												}
											}
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(765)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(765)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(765)
										ret;
									}
									HX_STACK_LINE(765)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(765)
									p = ret;
								}
								HX_STACK_LINE(766)
								vite = vite->next;
								HX_STACK_LINE(767)
								{
									HX_STACK_LINE(768)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(769)
									if ((fsttime)){
										HX_STACK_LINE(770)
										fst = v;
										HX_STACK_LINE(771)
										Float _g52;		HX_STACK_VAR(_g52,"_g52");
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(771)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(771)
													_this->_validate();
												}
											}
											HX_STACK_LINE(771)
											_g52 = v->zpp_inner->x;
										}
										HX_STACK_LINE(771)
										Float _g53;		HX_STACK_VAR(_g53,"_g53");
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(771)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(771)
													_this->_validate();
												}
											}
											HX_STACK_LINE(771)
											_g53 = v->zpp_inner->y;
										}
										HX_STACK_LINE(771)
										g->moveTo(_g52,_g53);
									}
									else{
										HX_STACK_LINE(773)
										Float _g54;		HX_STACK_VAR(_g54,"_g54");
										HX_STACK_LINE(773)
										{
											HX_STACK_LINE(773)
											{
												HX_STACK_LINE(773)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(773)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(773)
													_this->_validate();
												}
											}
											HX_STACK_LINE(773)
											_g54 = v->zpp_inner->x;
										}
										HX_STACK_LINE(773)
										Float _g55;		HX_STACK_VAR(_g55,"_g55");
										HX_STACK_LINE(773)
										{
											HX_STACK_LINE(773)
											{
												HX_STACK_LINE(773)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(773)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(773)
													_this->_validate();
												}
											}
											HX_STACK_LINE(773)
											_g55 = v->zpp_inner->y;
										}
										HX_STACK_LINE(773)
										g->lineTo(_g54,_g55);
									}
									HX_STACK_LINE(774)
									if ((!(fsttime))){
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(774)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(774)
										v->zpp_inner = null();
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(774)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												if (((o->outer != null()))){
													HX_STACK_LINE(774)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(774)
													o->outer = null();
												}
												HX_STACK_LINE(774)
												o->_isimmutable = null();
												HX_STACK_LINE(774)
												o->_validate = null();
												HX_STACK_LINE(774)
												o->_invalidate = null();
											}
											HX_STACK_LINE(774)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(775)
									fsttime = false;
								}
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(777)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(777)
									p->zpp_inner = null();
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(777)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										{
											HX_STACK_LINE(777)
											if (((o->outer != null()))){
												HX_STACK_LINE(777)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(777)
												o->outer = null();
											}
											HX_STACK_LINE(777)
											o->_isimmutable = null();
											HX_STACK_LINE(777)
											o->_validate = null();
											HX_STACK_LINE(777)
											o->_invalidate = null();
										}
										HX_STACK_LINE(777)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(764)
								if ((!(((vite != verts))))){
									HX_STACK_LINE(764)
									break;
								}
							}
						}
					}
					else{
					}
				}
			}
			HX_STACK_LINE(788)
			Float _g56;		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(788)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(788)
						_this->_validate();
					}
				}
				HX_STACK_LINE(788)
				_g56 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(788)
			Float _g57;		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(788)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(788)
						_this->_validate();
					}
				}
				HX_STACK_LINE(788)
				_g57 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(788)
			g->lineTo(_g56,_g57);
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				fst->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
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
		}
		HX_STACK_LINE(792)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(793)
			Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(794)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(795)
			while((true)){
				HX_STACK_LINE(795)
				if ((!(((i < lv->length))))){
					HX_STACK_LINE(795)
					break;
				}
				HX_STACK_LINE(796)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",800,0xfa2f3866)
						{
							HX_STACK_LINE(801)
							{
								HX_STACK_LINE(801)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(801)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(801)
								cur->zpp_inner = null();
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(801)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									{
										HX_STACK_LINE(801)
										if (((o->outer != null()))){
											HX_STACK_LINE(801)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(801)
											o->outer = null();
										}
										HX_STACK_LINE(801)
										o->_isimmutable = null();
										HX_STACK_LINE(801)
										o->_validate = null();
										HX_STACK_LINE(801)
										o->_invalidate = null();
									}
									HX_STACK_LINE(801)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(802)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(797)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(808)
					lv->splice(i,(int)1);
					HX_STACK_LINE(809)
					continue;
				}
				HX_STACK_LINE(811)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(839)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(840)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(841)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(841)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(842)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(843)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(844)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(845)
				while((true)){
					HX_STACK_LINE(845)
					if ((!(((cur != null()))))){
						HX_STACK_LINE(845)
						break;
					}
					HX_STACK_LINE(846)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(847)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(850)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 _g58 = ins->erase(pre);		HX_STACK_VAR(_g58,"_g58");
						HX_STACK_LINE(850)
						cur = _g58;
						HX_STACK_LINE(851)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(855)
							{
								HX_STACK_LINE(855)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(855)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(855)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(855)
								_this->zpp_inner = null();
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(855)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									{
										HX_STACK_LINE(855)
										if (((o->outer != null()))){
											HX_STACK_LINE(855)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(855)
											o->outer = null();
										}
										HX_STACK_LINE(855)
										o->_isimmutable = null();
										HX_STACK_LINE(855)
										o->_validate = null();
										HX_STACK_LINE(855)
										o->_invalidate = null();
									}
									HX_STACK_LINE(855)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(856)
							true;
						}
						else{
							HX_STACK_LINE(859)
							false;
						}
					}
					else{
						HX_STACK_LINE(864)
						pre = cur;
						HX_STACK_LINE(865)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledPolygon",0x13e94d5e,"nape.util.ShapeDebug.drawFilledPolygon","nape/util/ShapeDebug.hx",874,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(881)
		::openfl::_v2::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(882)
		g->beginFill((int(colour) & int((int)16777215)),1.0);
		HX_STACK_LINE(883)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(884)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(885)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(886)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(888)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(889)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(890)
					while((true)){
						HX_STACK_LINE(890)
						if ((!(((_g < lv->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(890)
							break;
						}
						HX_STACK_LINE(890)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(890)
						++(_g);
						HX_STACK_LINE(897)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(904)
							if ((fsttime)){
								HX_STACK_LINE(905)
								::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(905)
								{
									HX_STACK_LINE(905)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(905)
									{
										HX_STACK_LINE(905)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(905)
										{
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											x = p->zpp_inner->x;
										}
										HX_STACK_LINE(905)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(905)
										{
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											y = p->zpp_inner->y;
										}
										HX_STACK_LINE(905)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(905)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(905)
											::nape::geom::Vec2 _g1 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(905)
											ret = _g1;
										}
										else{
											HX_STACK_LINE(905)
											ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(905)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(905)
											ret->zpp_pool = null();
										}
										HX_STACK_LINE(905)
										if (((ret->zpp_inner == null()))){
											HX_STACK_LINE(905)
											::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(905)
														ret1 = _g1;
													}
													else{
														HX_STACK_LINE(905)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(905)
														ret1->next = null();
													}
													HX_STACK_LINE(905)
													ret1->weak = false;
												}
												HX_STACK_LINE(905)
												ret1->_immutable = immutable;
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													ret1->x = x;
													HX_STACK_LINE(905)
													ret1->y = y;
													HX_STACK_LINE(905)
													{
													}
												}
												HX_STACK_LINE(905)
												_g2 = ret1;
											}
											HX_STACK_LINE(905)
											ret->zpp_inner = _g2;
											HX_STACK_LINE(905)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(905)
											Float _g3;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(905)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(905)
														_this->_validate();
													}
												}
												HX_STACK_LINE(905)
												_g3 = ret->zpp_inner->x;
											}
											struct _Function_10_1{
												inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",905,0xfa2f3866)
													{
														HX_STACK_LINE(905)
														Float _g4;		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(905)
														{
															HX_STACK_LINE(905)
															{
																HX_STACK_LINE(905)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(905)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(905)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(905)
															_g4 = ret->zpp_inner->y;
														}
														HX_STACK_LINE(905)
														return (_g4 == y);
													}
													return null();
												}
											};
											HX_STACK_LINE(905)
											if ((!(((  (((_g3 == x))) ? bool(_Function_10_1::Block(ret,y)) : bool(false) ))))){
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(905)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(905)
													{
													}
												}
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(905)
													if (((_this->_invalidate != null()))){
														HX_STACK_LINE(905)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(905)
											ret;
										}
										HX_STACK_LINE(905)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(905)
										_g5 = ret;
									}
								}
								HX_STACK_LINE(905)
								fst = _g5;
								HX_STACK_LINE(906)
								Float _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(906)
								{
									HX_STACK_LINE(906)
									{
										HX_STACK_LINE(906)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(906)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(906)
											_this->_validate();
										}
									}
									HX_STACK_LINE(906)
									_g6 = p->zpp_inner->x;
								}
								HX_STACK_LINE(906)
								Float _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(906)
								{
									HX_STACK_LINE(906)
									{
										HX_STACK_LINE(906)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(906)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(906)
											_this->_validate();
										}
									}
									HX_STACK_LINE(906)
									_g7 = p->zpp_inner->y;
								}
								HX_STACK_LINE(906)
								g->moveTo(_g6,_g7);
							}
							else{
								HX_STACK_LINE(908)
								Float _g8;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(908)
								{
									HX_STACK_LINE(908)
									{
										HX_STACK_LINE(908)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(908)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(908)
											_this->_validate();
										}
									}
									HX_STACK_LINE(908)
									_g8 = p->zpp_inner->x;
								}
								HX_STACK_LINE(908)
								Float _g9;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(908)
								{
									HX_STACK_LINE(908)
									{
										HX_STACK_LINE(908)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(908)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(908)
											_this->_validate();
										}
									}
									HX_STACK_LINE(908)
									_g9 = p->zpp_inner->y;
								}
								HX_STACK_LINE(908)
								g->lineTo(_g8,_g9);
							}
							HX_STACK_LINE(909)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(936)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(937)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(938)
					{
						HX_STACK_LINE(938)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(938)
						while((true)){
							struct _Function_6_1{
								inline static bool Block( ::nape::geom::Vec2Iterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",938,0xfa2f3866)
									{
										HX_STACK_LINE(938)
										_g->zpp_inner->zpp_inner->valmod();
										HX_STACK_LINE(938)
										int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(938)
										_g->zpp_critical = true;
										struct _Function_7_1{
											inline static bool Block( ::nape::geom::Vec2Iterator &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",938,0xfa2f3866)
												{
													HX_STACK_LINE(938)
													{
														HX_STACK_LINE(938)
														_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
														HX_STACK_LINE(938)
														::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
														HX_STACK_LINE(938)
														_g->zpp_inner = null();
													}
													HX_STACK_LINE(938)
													return false;
												}
												return null();
											}
										};
										HX_STACK_LINE(938)
										return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(938)
							if ((!(_Function_6_1::Block(_g)))){
								HX_STACK_LINE(938)
								break;
							}
							HX_STACK_LINE(938)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(938)
							{
								HX_STACK_LINE(938)
								_g->zpp_critical = false;
								HX_STACK_LINE(938)
								int _g10 = (_g->zpp_i)++;		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(938)
								p = _g->zpp_inner->at(_g10);
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(948)
								if ((fsttime)){
									HX_STACK_LINE(949)
									::nape::geom::Vec2 _g16;		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(949)
									{
										HX_STACK_LINE(949)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(949)
										{
											HX_STACK_LINE(949)
											Float x;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(949)
											{
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												x = p->zpp_inner->x;
											}
											HX_STACK_LINE(949)
											Float y;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(949)
											{
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												y = p->zpp_inner->y;
											}
											HX_STACK_LINE(949)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(949)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(949)
												::nape::geom::Vec2 _g11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(949)
												ret = _g11;
											}
											else{
												HX_STACK_LINE(949)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(949)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(949)
												ret->zpp_pool = null();
											}
											HX_STACK_LINE(949)
											if (((ret->zpp_inner == null()))){
												HX_STACK_LINE(949)
												::zpp_nape::geom::ZPP_Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2 _g12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g12,"_g12");
															HX_STACK_LINE(949)
															ret1 = _g12;
														}
														else{
															HX_STACK_LINE(949)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(949)
															ret1->next = null();
														}
														HX_STACK_LINE(949)
														ret1->weak = false;
													}
													HX_STACK_LINE(949)
													ret1->_immutable = immutable;
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														ret1->x = x;
														HX_STACK_LINE(949)
														ret1->y = y;
														HX_STACK_LINE(949)
														{
														}
													}
													HX_STACK_LINE(949)
													_g13 = ret1;
												}
												HX_STACK_LINE(949)
												ret->zpp_inner = _g13;
												HX_STACK_LINE(949)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(949)
												Float _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(949)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(949)
															_this->_validate();
														}
													}
													HX_STACK_LINE(949)
													_g14 = ret->zpp_inner->x;
												}
												struct _Function_11_1{
													inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",949,0xfa2f3866)
														{
															HX_STACK_LINE(949)
															Float _g15;		HX_STACK_VAR(_g15,"_g15");
															HX_STACK_LINE(949)
															{
																HX_STACK_LINE(949)
																{
																	HX_STACK_LINE(949)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(949)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(949)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(949)
																_g15 = ret->zpp_inner->y;
															}
															HX_STACK_LINE(949)
															return (_g15 == y);
														}
														return null();
													}
												};
												HX_STACK_LINE(949)
												if ((!(((  (((_g14 == x))) ? bool(_Function_11_1::Block(ret,y)) : bool(false) ))))){
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(949)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(949)
														{
														}
													}
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(949)
														if (((_this->_invalidate != null()))){
															HX_STACK_LINE(949)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(949)
												ret;
											}
											HX_STACK_LINE(949)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(949)
											_g16 = ret;
										}
									}
									HX_STACK_LINE(949)
									fst = _g16;
									HX_STACK_LINE(950)
									Float _g17;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(950)
									{
										HX_STACK_LINE(950)
										{
											HX_STACK_LINE(950)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(950)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(950)
												_this->_validate();
											}
										}
										HX_STACK_LINE(950)
										_g17 = p->zpp_inner->x;
									}
									HX_STACK_LINE(950)
									Float _g18;		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(950)
									{
										HX_STACK_LINE(950)
										{
											HX_STACK_LINE(950)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(950)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(950)
												_this->_validate();
											}
										}
										HX_STACK_LINE(950)
										_g18 = p->zpp_inner->y;
									}
									HX_STACK_LINE(950)
									g->moveTo(_g17,_g18);
								}
								else{
									HX_STACK_LINE(952)
									Float _g19;		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(952)
									{
										HX_STACK_LINE(952)
										{
											HX_STACK_LINE(952)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(952)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(952)
												_this->_validate();
											}
										}
										HX_STACK_LINE(952)
										_g19 = p->zpp_inner->x;
									}
									HX_STACK_LINE(952)
									Float _g20;		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(952)
									{
										HX_STACK_LINE(952)
										{
											HX_STACK_LINE(952)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(952)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(952)
												_this->_validate();
											}
										}
										HX_STACK_LINE(952)
										_g20 = p->zpp_inner->y;
									}
									HX_STACK_LINE(952)
									g->lineTo(_g19,_g20);
								}
								HX_STACK_LINE(953)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(957)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(958)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(965)
						if (((verts != null()))){
							HX_STACK_LINE(966)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(967)
							while((true)){
								HX_STACK_LINE(968)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(968)
								{
									HX_STACK_LINE(968)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(968)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(968)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(968)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(968)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(968)
										::nape::geom::Vec2 _g21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(968)
										ret = _g21;
									}
									else{
										HX_STACK_LINE(968)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(968)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(968)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(968)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(968)
										::zpp_nape::geom::ZPP_Vec2 _g23;		HX_STACK_VAR(_g23,"_g23");
										HX_STACK_LINE(968)
										{
											HX_STACK_LINE(968)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(968)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2 _g22 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g22,"_g22");
													HX_STACK_LINE(968)
													ret1 = _g22;
												}
												else{
													HX_STACK_LINE(968)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(968)
													ret1->next = null();
												}
												HX_STACK_LINE(968)
												ret1->weak = false;
											}
											HX_STACK_LINE(968)
											ret1->_immutable = immutable;
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												ret1->x = x;
												HX_STACK_LINE(968)
												ret1->y = y;
												HX_STACK_LINE(968)
												{
												}
											}
											HX_STACK_LINE(968)
											_g23 = ret1;
										}
										HX_STACK_LINE(968)
										ret->zpp_inner = _g23;
										HX_STACK_LINE(968)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(968)
										Float _g24;		HX_STACK_VAR(_g24,"_g24");
										HX_STACK_LINE(968)
										{
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(968)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(968)
													_this->_validate();
												}
											}
											HX_STACK_LINE(968)
											_g24 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",968,0xfa2f3866)
												{
													HX_STACK_LINE(968)
													Float _g25;		HX_STACK_VAR(_g25,"_g25");
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														{
															HX_STACK_LINE(968)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(968)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(968)
																_this->_validate();
															}
														}
														HX_STACK_LINE(968)
														_g25 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(968)
													return (_g25 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(968)
										if ((!(((  (((_g24 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(968)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(968)
												{
												}
											}
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(968)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(968)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(968)
										ret;
									}
									HX_STACK_LINE(968)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(968)
									p = ret;
								}
								HX_STACK_LINE(969)
								vite = vite->next;
								HX_STACK_LINE(970)
								{
									HX_STACK_LINE(971)
									if ((fsttime)){
										HX_STACK_LINE(972)
										::nape::geom::Vec2 _g31;		HX_STACK_VAR(_g31,"_g31");
										HX_STACK_LINE(972)
										{
											HX_STACK_LINE(972)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(972)
											{
												HX_STACK_LINE(972)
												Float x;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(972)
												{
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													x = p->zpp_inner->x;
												}
												HX_STACK_LINE(972)
												Float y;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(972)
												{
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													y = p->zpp_inner->y;
												}
												HX_STACK_LINE(972)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(972)
												if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
													HX_STACK_LINE(972)
													::nape::geom::Vec2 _g26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g26,"_g26");
													HX_STACK_LINE(972)
													ret = _g26;
												}
												else{
													HX_STACK_LINE(972)
													ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(972)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(972)
													ret->zpp_pool = null();
												}
												HX_STACK_LINE(972)
												if (((ret->zpp_inner == null()))){
													HX_STACK_LINE(972)
													::zpp_nape::geom::ZPP_Vec2 _g28;		HX_STACK_VAR(_g28,"_g28");
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2 _g27 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g27,"_g27");
																HX_STACK_LINE(972)
																ret1 = _g27;
															}
															else{
																HX_STACK_LINE(972)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(972)
																ret1->next = null();
															}
															HX_STACK_LINE(972)
															ret1->weak = false;
														}
														HX_STACK_LINE(972)
														ret1->_immutable = immutable;
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															ret1->x = x;
															HX_STACK_LINE(972)
															ret1->y = y;
															HX_STACK_LINE(972)
															{
															}
														}
														HX_STACK_LINE(972)
														_g28 = ret1;
													}
													HX_STACK_LINE(972)
													ret->zpp_inner = _g28;
													HX_STACK_LINE(972)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(972)
													Float _g29;		HX_STACK_VAR(_g29,"_g29");
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(972)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(972)
																_this->_validate();
															}
														}
														HX_STACK_LINE(972)
														_g29 = ret->zpp_inner->x;
													}
													struct _Function_12_1{
														inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",972,0xfa2f3866)
															{
																HX_STACK_LINE(972)
																Float _g30;		HX_STACK_VAR(_g30,"_g30");
																HX_STACK_LINE(972)
																{
																	HX_STACK_LINE(972)
																	{
																		HX_STACK_LINE(972)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(972)
																		if (((_this->_validate != null()))){
																			HX_STACK_LINE(972)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(972)
																	_g30 = ret->zpp_inner->y;
																}
																HX_STACK_LINE(972)
																return (_g30 == y);
															}
															return null();
														}
													};
													HX_STACK_LINE(972)
													if ((!(((  (((_g29 == x))) ? bool(_Function_12_1::Block(ret,y)) : bool(false) ))))){
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(972)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(972)
															{
															}
														}
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(972)
															if (((_this->_invalidate != null()))){
																HX_STACK_LINE(972)
																_this->_invalidate(_this);
															}
														}
													}
													HX_STACK_LINE(972)
													ret;
												}
												HX_STACK_LINE(972)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(972)
												_g31 = ret;
											}
										}
										HX_STACK_LINE(972)
										fst = _g31;
										HX_STACK_LINE(973)
										Float _g32;		HX_STACK_VAR(_g32,"_g32");
										HX_STACK_LINE(973)
										{
											HX_STACK_LINE(973)
											{
												HX_STACK_LINE(973)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(973)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(973)
													_this->_validate();
												}
											}
											HX_STACK_LINE(973)
											_g32 = p->zpp_inner->x;
										}
										HX_STACK_LINE(973)
										Float _g33;		HX_STACK_VAR(_g33,"_g33");
										HX_STACK_LINE(973)
										{
											HX_STACK_LINE(973)
											{
												HX_STACK_LINE(973)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(973)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(973)
													_this->_validate();
												}
											}
											HX_STACK_LINE(973)
											_g33 = p->zpp_inner->y;
										}
										HX_STACK_LINE(973)
										g->moveTo(_g32,_g33);
									}
									else{
										HX_STACK_LINE(975)
										Float _g34;		HX_STACK_VAR(_g34,"_g34");
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											{
												HX_STACK_LINE(975)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(975)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(975)
													_this->_validate();
												}
											}
											HX_STACK_LINE(975)
											_g34 = p->zpp_inner->x;
										}
										HX_STACK_LINE(975)
										Float _g35;		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											{
												HX_STACK_LINE(975)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(975)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(975)
													_this->_validate();
												}
											}
											HX_STACK_LINE(975)
											_g35 = p->zpp_inner->y;
										}
										HX_STACK_LINE(975)
										g->lineTo(_g34,_g35);
									}
									HX_STACK_LINE(976)
									fsttime = false;
								}
								HX_STACK_LINE(978)
								{
									HX_STACK_LINE(978)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(978)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(978)
									p->zpp_inner = null();
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(978)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										{
											HX_STACK_LINE(978)
											if (((o->outer != null()))){
												HX_STACK_LINE(978)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(978)
												o->outer = null();
											}
											HX_STACK_LINE(978)
											o->_isimmutable = null();
											HX_STACK_LINE(978)
											o->_validate = null();
											HX_STACK_LINE(978)
											o->_invalidate = null();
										}
										HX_STACK_LINE(978)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(967)
								if ((!(((vite != verts))))){
									HX_STACK_LINE(967)
									break;
								}
							}
						}
					}
					else{
					}
				}
			}
			HX_STACK_LINE(989)
			Float _g36;		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(989)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(989)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(989)
						_this->_validate();
					}
				}
				HX_STACK_LINE(989)
				_g36 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(989)
			Float _g37;		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(989)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(989)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(989)
						_this->_validate();
					}
				}
				HX_STACK_LINE(989)
				_g37 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(989)
			g->lineTo(_g36,_g37);
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(990)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(990)
				fst->zpp_inner = null();
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(990)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(990)
						if (((o->outer != null()))){
							HX_STACK_LINE(990)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(990)
							o->outer = null();
						}
						HX_STACK_LINE(990)
						o->_isimmutable = null();
						HX_STACK_LINE(990)
						o->_validate = null();
						HX_STACK_LINE(990)
						o->_invalidate = null();
					}
					HX_STACK_LINE(990)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(994)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(995)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(996)
				{
					HX_STACK_LINE(996)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(996)
					while((true)){
						HX_STACK_LINE(996)
						if ((!(((_g < lv->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(996)
							break;
						}
						HX_STACK_LINE(996)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(996)
						++(_g);
						HX_STACK_LINE(1003)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1009)
						{
							HX_STACK_LINE(1010)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1011)
							if ((fsttime)){
								HX_STACK_LINE(1012)
								fst = v;
								HX_STACK_LINE(1013)
								Float _g38;		HX_STACK_VAR(_g38,"_g38");
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1013)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1013)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1013)
									_g38 = v->zpp_inner->x;
								}
								HX_STACK_LINE(1013)
								Float _g39;		HX_STACK_VAR(_g39,"_g39");
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1013)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1013)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1013)
									_g39 = v->zpp_inner->y;
								}
								HX_STACK_LINE(1013)
								g->moveTo(_g38,_g39);
							}
							else{
								HX_STACK_LINE(1015)
								Float _g40;		HX_STACK_VAR(_g40,"_g40");
								HX_STACK_LINE(1015)
								{
									HX_STACK_LINE(1015)
									{
										HX_STACK_LINE(1015)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1015)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1015)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1015)
									_g40 = v->zpp_inner->x;
								}
								HX_STACK_LINE(1015)
								Float _g41;		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(1015)
								{
									HX_STACK_LINE(1015)
									{
										HX_STACK_LINE(1015)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1015)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1015)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1015)
									_g41 = v->zpp_inner->y;
								}
								HX_STACK_LINE(1015)
								g->lineTo(_g40,_g41);
							}
							HX_STACK_LINE(1016)
							if ((!(fsttime))){
								HX_STACK_LINE(1016)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1016)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1016)
								v->zpp_inner = null();
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1016)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										if (((o->outer != null()))){
											HX_STACK_LINE(1016)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1016)
											o->outer = null();
										}
										HX_STACK_LINE(1016)
										o->_isimmutable = null();
										HX_STACK_LINE(1016)
										o->_validate = null();
										HX_STACK_LINE(1016)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1016)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1017)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1046)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(1047)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1048)
					{
						HX_STACK_LINE(1048)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1048)
						while((true)){
							struct _Function_6_1{
								inline static bool Block( ::nape::geom::Vec2Iterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1048,0xfa2f3866)
									{
										HX_STACK_LINE(1048)
										_g->zpp_inner->zpp_inner->valmod();
										HX_STACK_LINE(1048)
										int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(1048)
										_g->zpp_critical = true;
										struct _Function_7_1{
											inline static bool Block( ::nape::geom::Vec2Iterator &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1048,0xfa2f3866)
												{
													HX_STACK_LINE(1048)
													{
														HX_STACK_LINE(1048)
														_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
														HX_STACK_LINE(1048)
														::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
														HX_STACK_LINE(1048)
														_g->zpp_inner = null();
													}
													HX_STACK_LINE(1048)
													return false;
												}
												return null();
											}
										};
										HX_STACK_LINE(1048)
										return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1048)
							if ((!(_Function_6_1::Block(_g)))){
								HX_STACK_LINE(1048)
								break;
							}
							HX_STACK_LINE(1048)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(1048)
							{
								HX_STACK_LINE(1048)
								_g->zpp_critical = false;
								HX_STACK_LINE(1048)
								int _g42 = (_g->zpp_i)++;		HX_STACK_VAR(_g42,"_g42");
								HX_STACK_LINE(1048)
								p = _g->zpp_inner->at(_g42);
							}
							HX_STACK_LINE(1057)
							{
								HX_STACK_LINE(1058)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1059)
								if ((fsttime)){
									HX_STACK_LINE(1060)
									fst = v;
									HX_STACK_LINE(1061)
									Float _g43;		HX_STACK_VAR(_g43,"_g43");
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1061)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1061)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1061)
										_g43 = v->zpp_inner->x;
									}
									HX_STACK_LINE(1061)
									Float _g44;		HX_STACK_VAR(_g44,"_g44");
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1061)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1061)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1061)
										_g44 = v->zpp_inner->y;
									}
									HX_STACK_LINE(1061)
									g->moveTo(_g43,_g44);
								}
								else{
									HX_STACK_LINE(1063)
									Float _g45;		HX_STACK_VAR(_g45,"_g45");
									HX_STACK_LINE(1063)
									{
										HX_STACK_LINE(1063)
										{
											HX_STACK_LINE(1063)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1063)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1063)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1063)
										_g45 = v->zpp_inner->x;
									}
									HX_STACK_LINE(1063)
									Float _g46;		HX_STACK_VAR(_g46,"_g46");
									HX_STACK_LINE(1063)
									{
										HX_STACK_LINE(1063)
										{
											HX_STACK_LINE(1063)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1063)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1063)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1063)
										_g46 = v->zpp_inner->y;
									}
									HX_STACK_LINE(1063)
									g->lineTo(_g45,_g46);
								}
								HX_STACK_LINE(1064)
								if ((!(fsttime))){
									HX_STACK_LINE(1064)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1064)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1064)
									v->zpp_inner = null();
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1064)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											if (((o->outer != null()))){
												HX_STACK_LINE(1064)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1064)
												o->outer = null();
											}
											HX_STACK_LINE(1064)
											o->_isimmutable = null();
											HX_STACK_LINE(1064)
											o->_validate = null();
											HX_STACK_LINE(1064)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1064)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1065)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1069)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(1070)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1076)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1077)
						if (((verts != null()))){
							HX_STACK_LINE(1078)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1079)
							while((true)){
								HX_STACK_LINE(1080)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1080)
								{
									HX_STACK_LINE(1080)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1080)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1080)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1080)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1080)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1080)
										::nape::geom::Vec2 _g47 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g47,"_g47");
										HX_STACK_LINE(1080)
										ret = _g47;
									}
									else{
										HX_STACK_LINE(1080)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1080)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1080)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1080)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1080)
										::zpp_nape::geom::ZPP_Vec2 _g49;		HX_STACK_VAR(_g49,"_g49");
										HX_STACK_LINE(1080)
										{
											HX_STACK_LINE(1080)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1080)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2 _g48 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g48,"_g48");
													HX_STACK_LINE(1080)
													ret1 = _g48;
												}
												else{
													HX_STACK_LINE(1080)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1080)
													ret1->next = null();
												}
												HX_STACK_LINE(1080)
												ret1->weak = false;
											}
											HX_STACK_LINE(1080)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												ret1->x = x;
												HX_STACK_LINE(1080)
												ret1->y = y;
												HX_STACK_LINE(1080)
												{
												}
											}
											HX_STACK_LINE(1080)
											_g49 = ret1;
										}
										HX_STACK_LINE(1080)
										ret->zpp_inner = _g49;
										HX_STACK_LINE(1080)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1080)
										Float _g50;		HX_STACK_VAR(_g50,"_g50");
										HX_STACK_LINE(1080)
										{
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1080)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1080)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1080)
											_g50 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1080,0xfa2f3866)
												{
													HX_STACK_LINE(1080)
													Float _g51;		HX_STACK_VAR(_g51,"_g51");
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														{
															HX_STACK_LINE(1080)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1080)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(1080)
																_this->_validate();
															}
														}
														HX_STACK_LINE(1080)
														_g51 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1080)
													return (_g51 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1080)
										if ((!(((  (((_g50 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1080)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1080)
												{
												}
											}
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1080)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(1080)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(1080)
										ret;
									}
									HX_STACK_LINE(1080)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1080)
									p = ret;
								}
								HX_STACK_LINE(1081)
								vite = vite->next;
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1084)
									if ((fsttime)){
										HX_STACK_LINE(1085)
										fst = v;
										HX_STACK_LINE(1086)
										Float _g52;		HX_STACK_VAR(_g52,"_g52");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1086)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1086)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1086)
											_g52 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1086)
										Float _g53;		HX_STACK_VAR(_g53,"_g53");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1086)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1086)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1086)
											_g53 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1086)
										g->moveTo(_g52,_g53);
									}
									else{
										HX_STACK_LINE(1088)
										Float _g54;		HX_STACK_VAR(_g54,"_g54");
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1088)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1088)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1088)
											_g54 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1088)
										Float _g55;		HX_STACK_VAR(_g55,"_g55");
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1088)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1088)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1088)
											_g55 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1088)
										g->lineTo(_g54,_g55);
									}
									HX_STACK_LINE(1089)
									if ((!(fsttime))){
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1089)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(1089)
										v->zpp_inner = null();
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(1089)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												if (((o->outer != null()))){
													HX_STACK_LINE(1089)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1089)
													o->outer = null();
												}
												HX_STACK_LINE(1089)
												o->_isimmutable = null();
												HX_STACK_LINE(1089)
												o->_validate = null();
												HX_STACK_LINE(1089)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1089)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1090)
									fsttime = false;
								}
								HX_STACK_LINE(1092)
								{
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1092)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(1092)
									p->zpp_inner = null();
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1092)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										{
											HX_STACK_LINE(1092)
											if (((o->outer != null()))){
												HX_STACK_LINE(1092)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1092)
												o->outer = null();
											}
											HX_STACK_LINE(1092)
											o->_isimmutable = null();
											HX_STACK_LINE(1092)
											o->_validate = null();
											HX_STACK_LINE(1092)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1092)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1079)
								if ((!(((vite != verts))))){
									HX_STACK_LINE(1079)
									break;
								}
							}
						}
					}
					else{
					}
				}
			}
			HX_STACK_LINE(1103)
			Float _g56;		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1103)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1103)
				_g56 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(1103)
			Float _g57;		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1103)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1103)
				_g57 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(1103)
			g->lineTo(_g56,_g57);
			HX_STACK_LINE(1104)
			{
				HX_STACK_LINE(1104)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1104)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(1104)
				fst->zpp_inner = null();
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1104)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1104)
						if (((o->outer != null()))){
							HX_STACK_LINE(1104)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1104)
							o->outer = null();
						}
						HX_STACK_LINE(1104)
						o->_isimmutable = null();
						HX_STACK_LINE(1104)
						o->_validate = null();
						HX_STACK_LINE(1104)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1104)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1106)
		g->endFill();
		HX_STACK_LINE(1108)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1109)
			Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1110)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1111)
			while((true)){
				HX_STACK_LINE(1111)
				if ((!(((i < lv->length))))){
					HX_STACK_LINE(1111)
					break;
				}
				HX_STACK_LINE(1112)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1116,0xfa2f3866)
						{
							HX_STACK_LINE(1117)
							{
								HX_STACK_LINE(1117)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1117)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1117)
								cur->zpp_inner = null();
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1117)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									{
										HX_STACK_LINE(1117)
										if (((o->outer != null()))){
											HX_STACK_LINE(1117)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1117)
											o->outer = null();
										}
										HX_STACK_LINE(1117)
										o->_isimmutable = null();
										HX_STACK_LINE(1117)
										o->_validate = null();
										HX_STACK_LINE(1117)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1117)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1118)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1113)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1124)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1125)
					continue;
				}
				HX_STACK_LINE(1127)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1155)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1156)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1157)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(1157)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1158)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1159)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1160)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1161)
				while((true)){
					HX_STACK_LINE(1161)
					if ((!(((cur != null()))))){
						HX_STACK_LINE(1161)
						break;
					}
					HX_STACK_LINE(1162)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1163)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1166)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 _g58 = ins->erase(pre);		HX_STACK_VAR(_g58,"_g58");
						HX_STACK_LINE(1166)
						cur = _g58;
						HX_STACK_LINE(1167)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1171)
							{
								HX_STACK_LINE(1171)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1171)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1171)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1171)
								_this->zpp_inner = null();
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1171)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									{
										HX_STACK_LINE(1171)
										if (((o->outer != null()))){
											HX_STACK_LINE(1171)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1171)
											o->outer = null();
										}
										HX_STACK_LINE(1171)
										o->_isimmutable = null();
										HX_STACK_LINE(1171)
										o->_validate = null();
										HX_STACK_LINE(1171)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1171)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1172)
							true;
						}
						else{
							HX_STACK_LINE(1175)
							false;
						}
					}
					else{
						HX_STACK_LINE(1180)
						pre = cur;
						HX_STACK_LINE(1181)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::draw( Dynamic object){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","draw",0x5335fb3a,"nape.util.ShapeDebug.draw","nape/util/ShapeDebug.hx",1195,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(1195)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(1196)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1196)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,null(),1.0,true);
			}
			else{
				HX_STACK_LINE(1197)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Compound >()))){
					HX_STACK_LINE(1197)
					this->zpp_inner_zn->draw_compound((hx::TCast< nape::phys::Compound >::cast(object))->zpp_inner,null(),1.0,true);
				}
				else{
					HX_STACK_LINE(1198)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
						HX_STACK_LINE(1198)
						this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,null(),1.0,true);
					}
					else{
						HX_STACK_LINE(1199)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
							HX_STACK_LINE(1199)
							this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,null(),1.0,true);
						}
						else{
							HX_STACK_LINE(1200)
							if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
								HX_STACK_LINE(1200)
								(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
							}
							else{
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1208)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1208)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
			}
			else{
				HX_STACK_LINE(1209)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
					HX_STACK_LINE(1209)
					this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
				}
				else{
					HX_STACK_LINE(1210)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
						HX_STACK_LINE(1210)
						this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
					}
					else{
						HX_STACK_LINE(1211)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
							HX_STACK_LINE(1211)
							(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
						}
						else{
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(3.0);
	HX_STACK_FRAME("nape.util.ShapeDebug","drawSpring",0x186b6da7,"nape.util.ShapeDebug.drawSpring","nape/util/ShapeDebug.hx",1223,0xfa2f3866)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(colour,"colour")
	HX_STACK_ARG(coils,"coils")
	HX_STACK_ARG(radius,"radius")
{
		HX_STACK_LINE(1243)
		if (((coils == (int)0))){
			HX_STACK_LINE(1243)
			this->drawLine(start,end,colour);
		}
		else{
			HX_STACK_LINE(1245)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1245)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1245)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1245)
				_g = end->zpp_inner->x;
			}
			HX_STACK_LINE(1245)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1245)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1245)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1245)
				_g1 = start->zpp_inner->x;
			}
			HX_STACK_LINE(1245)
			Float dx = (_g - _g1);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1246)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1246)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1246)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1246)
				_g2 = end->zpp_inner->y;
			}
			HX_STACK_LINE(1246)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1246)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1246)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1246)
				_g3 = start->zpp_inner->y;
			}
			HX_STACK_LINE(1246)
			Float dy = (_g2 - _g3);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1263)
			{
				HX_STACK_LINE(1264)
				Float t = (Float(1.0) / Float(((coils * (int)4))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1273)
				hx::MultEq(dx,t);
				HX_STACK_LINE(1274)
				hx::MultEq(dy,t);
			}
			HX_STACK_LINE(1276)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1277)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1279)
				nx = dx;
				HX_STACK_LINE(1280)
				ny = dy;
				HX_STACK_LINE(1289)
				{
				}
			}
			HX_STACK_LINE(1298)
			if (((((nx * nx) + (ny * ny)) < 0.1))){
				HX_STACK_LINE(1298)
				return null();
			}
			HX_STACK_LINE(1299)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1301)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1310)
					Float imag;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1310)
					{
						HX_STACK_LINE(1310)
						Float _g4 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1310)
						imag = (Float(1.0) / Float(_g4));
					}
					HX_STACK_LINE(1311)
					{
						HX_STACK_LINE(1312)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1321)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1322)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1325)
				{
					HX_STACK_LINE(1326)
					Float t = nx;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1327)
					nx = -(ny);
					HX_STACK_LINE(1328)
					ny = t;
				}
			}
			HX_STACK_LINE(1331)
			{
				HX_STACK_LINE(1332)
				Float t = (radius * (int)2);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1341)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1342)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(1344)
			::nape::geom::Vec2 u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1344)
			{
				HX_STACK_LINE(1344)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1344)
				{
					HX_STACK_LINE(1344)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						x = start->zpp_inner->x;
					}
					HX_STACK_LINE(1344)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						y = start->zpp_inner->y;
					}
					HX_STACK_LINE(1344)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1344)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1344)
						::nape::geom::Vec2 _g5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1344)
						ret = _g5;
					}
					else{
						HX_STACK_LINE(1344)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1344)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1344)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(1344)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(1344)
						::zpp_nape::geom::ZPP_Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 _g6 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(1344)
									ret1 = _g6;
								}
								else{
									HX_STACK_LINE(1344)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1344)
									ret1->next = null();
								}
								HX_STACK_LINE(1344)
								ret1->weak = false;
							}
							HX_STACK_LINE(1344)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret1->x = x;
								HX_STACK_LINE(1344)
								ret1->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							_g7 = ret1;
						}
						HX_STACK_LINE(1344)
						ret->zpp_inner = _g7;
						HX_STACK_LINE(1344)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1344)
						Float _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1344)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1344)
							_g8 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1344,0xfa2f3866)
								{
									HX_STACK_LINE(1344)
									Float _g9;		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(1344)
									{
										HX_STACK_LINE(1344)
										{
											HX_STACK_LINE(1344)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1344)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1344)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1344)
										_g9 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(1344)
									return (_g9 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(1344)
						if ((!(((  (((_g8 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1344)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1344)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1344)
						ret;
					}
					HX_STACK_LINE(1344)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1344)
					u = ret;
				}
			}
			HX_STACK_LINE(1345)
			::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1345)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1345)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1345)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1345)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1345)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1345)
					::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1345)
					ret = _g10;
				}
				else{
					HX_STACK_LINE(1345)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1345)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1345)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(1345)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1345)
					::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1345)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(1345)
								ret1 = _g11;
							}
							else{
								HX_STACK_LINE(1345)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1345)
								ret1->next = null();
							}
							HX_STACK_LINE(1345)
							ret1->weak = false;
						}
						HX_STACK_LINE(1345)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret1->x = x;
							HX_STACK_LINE(1345)
							ret1->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						_g12 = ret1;
					}
					HX_STACK_LINE(1345)
					ret->zpp_inner = _g12;
					HX_STACK_LINE(1345)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1345)
					Float _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1345)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1345)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1345)
						_g13 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1345,0xfa2f3866)
							{
								HX_STACK_LINE(1345)
								Float _g14;		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									{
										HX_STACK_LINE(1345)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1345)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1345)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1345)
									_g14 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(1345)
								return (_g14 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(1345)
					if ((!(((  (((_g13 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1345)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1345)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1345)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1345)
					ret;
				}
				HX_STACK_LINE(1345)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1345)
				v = ret;
			}
			HX_STACK_LINE(1346)
			::nape::geom::Vec2 q;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1346)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1346)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1346)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1346)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1346)
					::nape::geom::Vec2 _g15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(1346)
					ret = _g15;
				}
				else{
					HX_STACK_LINE(1346)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1346)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1346)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(1346)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1346)
					::zpp_nape::geom::ZPP_Vec2 _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1346)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 _g16 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(1346)
								ret1 = _g16;
							}
							else{
								HX_STACK_LINE(1346)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1346)
								ret1->next = null();
							}
							HX_STACK_LINE(1346)
							ret1->weak = false;
						}
						HX_STACK_LINE(1346)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret1->x = x;
							HX_STACK_LINE(1346)
							ret1->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						_g17 = ret1;
					}
					HX_STACK_LINE(1346)
					ret->zpp_inner = _g17;
					HX_STACK_LINE(1346)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1346)
					Float _g18;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1346)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1346)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1346)
						_g18 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1346,0xfa2f3866)
							{
								HX_STACK_LINE(1346)
								Float _g19;		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									{
										HX_STACK_LINE(1346)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1346)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1346)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1346)
									_g19 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(1346)
								return (_g19 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(1346)
					if ((!(((  (((_g18 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1346)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1346)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1346)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1346)
					ret;
				}
				HX_STACK_LINE(1346)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1346)
				q = ret;
			}
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1347)
				while((true)){
					HX_STACK_LINE(1347)
					if ((!(((_g4 < coils))))){
						HX_STACK_LINE(1347)
						break;
					}
					HX_STACK_LINE(1347)
					int i = (_g4)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1348)
					{
						HX_STACK_LINE(1348)
						Float _g20;		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							_g20 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1348)
						Float _g21 = (_g20 + dx);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1348)
						Float x = (_g21 + nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							Float _g22;		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1348)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1348)
								_g22 = v->zpp_inner->x;
							}
							HX_STACK_LINE(1348)
							if (((_g22 != x))){
								HX_STACK_LINE(1348)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1348)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1349)
					{
						HX_STACK_LINE(1349)
						Float _g23;		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							_g23 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1349)
						Float _g24 = (_g23 + dy);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(1349)
						Float y = (_g24 + ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							Float _g25;		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1349)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1349)
								_g25 = v->zpp_inner->y;
							}
							HX_STACK_LINE(1349)
							if (((_g25 != y))){
								HX_STACK_LINE(1349)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1349)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1350)
					{
						HX_STACK_LINE(1350)
						Float _g26;		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							_g26 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1350)
						Float x = (_g26 + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							Float _g27;		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1350)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1350)
								_g27 = q->zpp_inner->x;
							}
							HX_STACK_LINE(1350)
							if (((_g27 != x))){
								HX_STACK_LINE(1350)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1350)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1351)
					{
						HX_STACK_LINE(1351)
						Float _g28;		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							_g28 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1351)
						Float y = (_g28 + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							Float _g29;		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1351)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1351)
								_g29 = q->zpp_inner->y;
							}
							HX_STACK_LINE(1351)
							if (((_g29 != y))){
								HX_STACK_LINE(1351)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1351)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1352)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1353)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							x = q->zpp_inner->x;
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							Float _g30;		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1353)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1353)
								_g30 = u->zpp_inner->x;
							}
							HX_STACK_LINE(1353)
							if (((_g30 != x))){
								HX_STACK_LINE(1353)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1353)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1354)
					{
						HX_STACK_LINE(1354)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							y = q->zpp_inner->y;
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							Float _g31;		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1354)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1354)
								_g31 = u->zpp_inner->y;
							}
							HX_STACK_LINE(1354)
							if (((_g31 != y))){
								HX_STACK_LINE(1354)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1354)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							u->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1355)
					{
						HX_STACK_LINE(1355)
						Float _g32;		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							_g32 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1355)
						Float _g33 = (_g32 + dx);		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(1355)
						Float x = (_g33 - nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							Float _g34;		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1355)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1355)
								_g34 = v->zpp_inner->x;
							}
							HX_STACK_LINE(1355)
							if (((_g34 != x))){
								HX_STACK_LINE(1355)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1355)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1356)
					{
						HX_STACK_LINE(1356)
						Float _g35;		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							_g35 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1356)
						Float _g36 = (_g35 + dy);		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(1356)
						Float y = (_g36 - ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							Float _g37;		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1356)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1356)
								_g37 = v->zpp_inner->y;
							}
							HX_STACK_LINE(1356)
							if (((_g37 != y))){
								HX_STACK_LINE(1356)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1356)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						Float _g38;		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							_g38 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1357)
						Float x = (_g38 + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							Float _g39;		HX_STACK_VAR(_g39,"_g39");
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1357)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1357)
								_g39 = q->zpp_inner->x;
							}
							HX_STACK_LINE(1357)
							if (((_g39 != x))){
								HX_STACK_LINE(1357)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1357)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1358)
					{
						HX_STACK_LINE(1358)
						Float _g40;		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							_g40 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1358)
						Float y = (_g40 + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							Float _g41;		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1358)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1358)
								_g41 = q->zpp_inner->y;
							}
							HX_STACK_LINE(1358)
							if (((_g41 != y))){
								HX_STACK_LINE(1358)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1358)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1359)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1360)
					{
						HX_STACK_LINE(1360)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							x = q->zpp_inner->x;
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							Float _g42;		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1360)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1360)
								_g42 = u->zpp_inner->x;
							}
							HX_STACK_LINE(1360)
							if (((_g42 != x))){
								HX_STACK_LINE(1360)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1360)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1361)
					{
						HX_STACK_LINE(1361)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							y = q->zpp_inner->y;
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							Float _g43;		HX_STACK_VAR(_g43,"_g43");
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1361)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1361)
								_g43 = u->zpp_inner->y;
							}
							HX_STACK_LINE(1361)
							if (((_g43 != y))){
								HX_STACK_LINE(1361)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1361)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							u->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1363)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1363)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(1363)
				u->zpp_inner = null();
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					{
						HX_STACK_LINE(1363)
						if (((o->outer != null()))){
							HX_STACK_LINE(1363)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1363)
							o->outer = null();
						}
						HX_STACK_LINE(1363)
						o->_isimmutable = null();
						HX_STACK_LINE(1363)
						o->_validate = null();
						HX_STACK_LINE(1363)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1363)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1364)
			{
				HX_STACK_LINE(1364)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1364)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(1364)
				v->zpp_inner = null();
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1364)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					{
						HX_STACK_LINE(1364)
						if (((o->outer != null()))){
							HX_STACK_LINE(1364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1364)
							o->outer = null();
						}
						HX_STACK_LINE(1364)
						o->_isimmutable = null();
						HX_STACK_LINE(1364)
						o->_validate = null();
						HX_STACK_LINE(1364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1365)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(1365)
				q->zpp_inner = null();
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1365)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						if (((o->outer != null()))){
							HX_STACK_LINE(1365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1365)
							o->outer = null();
						}
						HX_STACK_LINE(1365)
						o->_isimmutable = null();
						HX_STACK_LINE(1365)
						o->_validate = null();
						HX_STACK_LINE(1365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1367)
		if ((start->zpp_inner->weak)){
			HX_STACK_LINE(1371)
			{
				HX_STACK_LINE(1371)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1371)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(1371)
				start->zpp_inner = null();
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						if (((o->outer != null()))){
							HX_STACK_LINE(1371)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1371)
							o->outer = null();
						}
						HX_STACK_LINE(1371)
						o->_isimmutable = null();
						HX_STACK_LINE(1371)
						o->_validate = null();
						HX_STACK_LINE(1371)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1371)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1372)
			true;
		}
		else{
			HX_STACK_LINE(1375)
			false;
		}
		HX_STACK_LINE(1378)
		if ((end->zpp_inner->weak)){
			HX_STACK_LINE(1382)
			{
				HX_STACK_LINE(1382)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1382)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(1382)
				end->zpp_inner = null();
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1382)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						if (((o->outer != null()))){
							HX_STACK_LINE(1382)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1382)
							o->outer = null();
						}
						HX_STACK_LINE(1382)
						o->_isimmutable = null();
						HX_STACK_LINE(1382)
						o->_validate = null();
						HX_STACK_LINE(1382)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1382)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1383)
			true;
		}
		else{
			HX_STACK_LINE(1386)
			false;
		}
	}
return null();
}



ShapeDebug_obj::ShapeDebug_obj()
{
}

void ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeDebug);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("thickness"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ShapeDebug*/ ,(int)offsetof(ShapeDebug_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{hx::fsFloat,(int)offsetof(ShapeDebug_obj,thickness),HX_CSTRING("thickness")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("thickness"),
	HX_CSTRING("clear"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawAABB"),
	HX_CSTRING("drawFilledTriangle"),
	HX_CSTRING("drawFilledCircle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawFilledPolygon"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawSpring"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#endif

Class ShapeDebug_obj::__mClass;

void ShapeDebug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.ShapeDebug"), hx::TCanCast< ShapeDebug_obj> ,sStaticFields,sMemberFields,
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

void ShapeDebug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
