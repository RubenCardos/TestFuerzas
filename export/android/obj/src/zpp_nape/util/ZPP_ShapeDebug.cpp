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
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Shape
#include <openfl/_v2/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ShapeDebug_obj::__construct(int width,int height)
{
HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","new",0x20392594,"zpp_nape.util.ZPP_ShapeDebug.new","zpp_nape/util/Debug.hx",430,0xeecbde16)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(473)
	this->bodyList = null();
	HX_STACK_LINE(472)
	this->shapeList = null();
	HX_STACK_LINE(445)
	this->compoundstack = null();
	HX_STACK_LINE(433)
	this->graphics = null();
	HX_STACK_LINE(432)
	this->shape = null();
	HX_STACK_LINE(431)
	this->outer_zn = null();
	HX_STACK_LINE(435)
	super::__construct(width,height);
	HX_STACK_LINE(436)
	::openfl::_v2::display::Shape _g = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(436)
	this->shape = _g;
	HX_STACK_LINE(437)
	::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(437)
	this->shape->set_scrollRect(_g1);
	HX_STACK_LINE(438)
	::openfl::_v2::display::Graphics _g2 = this->shape->get_graphics();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(438)
	this->graphics = _g2;
	HX_STACK_LINE(439)
	this->isbmp = false;
	HX_STACK_LINE(440)
	this->d_shape = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_ShapeDebug_obj::~ZPP_ShapeDebug_obj() { }

Dynamic ZPP_ShapeDebug_obj::__CreateEmpty() { return  new ZPP_ShapeDebug_obj; }
hx::ObjectPtr< ZPP_ShapeDebug_obj > ZPP_ShapeDebug_obj::__new(int width,int height)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > result = new ZPP_ShapeDebug_obj();
	result->__construct(width,height);
	return result;}

Dynamic ZPP_ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > result = new ZPP_ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ZPP_ShapeDebug_obj::setbg( int bgColor){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","setbg",0x5dfba81b,"zpp_nape.util.ZPP_ShapeDebug.setbg","zpp_nape/util/Debug.hx",443,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bgColor,"bgColor")
		HX_STACK_LINE(443)
		this->sup_setbg(bgColor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ShapeDebug_obj,setbg,(void))

Void ZPP_ShapeDebug_obj::draw_compound( ::zpp_nape::phys::ZPP_Compound compound,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_compound",0x5da94c7a,"zpp_nape.util.ZPP_ShapeDebug.draw_compound","zpp_nape/util/Debug.hx",446,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(compound,"compound")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(448)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = compound->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(449)
			while((true)){
				HX_STACK_LINE(449)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(450)
				::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(451)
				this->draw_compound(c,xform,xdet,xnull);
				HX_STACK_LINE(452)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(456)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = compound->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(457)
			while((true)){
				HX_STACK_LINE(457)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(457)
					break;
				}
				HX_STACK_LINE(458)
				::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(459)
				if ((b->outer->debugDraw)){
					HX_STACK_LINE(459)
					this->draw_body(b,xform,xdet,xnull);
				}
				HX_STACK_LINE(460)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(464)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = compound->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(465)
			while((true)){
				HX_STACK_LINE(465)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(465)
					break;
				}
				HX_STACK_LINE(466)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(467)
				if (((bool(c->active) && bool(c->outer->debugDraw)))){
					HX_STACK_LINE(467)
					c->draw(this->outer);
				}
				HX_STACK_LINE(468)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_compound,(void))

Void ZPP_ShapeDebug_obj::draw_space( ::zpp_nape::space::ZPP_Space space,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_space",0xbf5b5457,"zpp_nape.util.ZPP_ShapeDebug.draw_space","zpp_nape/util/Debug.hx",474,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(475)
		if ((this->outer->cullingEnabled)){
			HX_STACK_LINE(476)
			if ((this->outer->drawBodies)){
				HX_STACK_LINE(477)
				if ((this->outer->drawBodyDetail)){
					HX_STACK_LINE(478)
					::nape::phys::BodyList _g = space->bphase->bodiesInAABB(this->iport,false,false,null(),this->bodyList);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(478)
					::nape::phys::BodyList bods = this->bodyList = _g;		HX_STACK_VAR(bods,"bods");
					HX_STACK_LINE(479)
					while((true)){
						HX_STACK_LINE(479)
						if ((!((!(((bods->zpp_inner->inner->head == null()))))))){
							HX_STACK_LINE(479)
							break;
						}
						HX_STACK_LINE(480)
						::nape::phys::Body b = bods->shift();		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(481)
						if ((b->debugDraw)){
							HX_STACK_LINE(481)
							this->draw_body(b->zpp_inner,xform,xdet,xnull);
						}
					}
				}
				else{
					HX_STACK_LINE(485)
					::nape::shape::ShapeList _g2 = space->bphase->shapesInAABB(this->iport,false,false,null(),this->shapeList);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(485)
					::nape::shape::ShapeList shapes = this->shapeList = _g2;		HX_STACK_VAR(shapes,"shapes");
					HX_STACK_LINE(486)
					while((true)){
						HX_STACK_LINE(486)
						if ((!((!(((shapes->zpp_inner->inner->head == null()))))))){
							HX_STACK_LINE(486)
							break;
						}
						HX_STACK_LINE(487)
						::nape::shape::Shape s = shapes->shift();		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(488)
						if ((((  (((s->zpp_inner->body != null()))) ? ::nape::phys::Body(s->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->debugDraw)){
							HX_STACK_LINE(488)
							this->draw_shape(s->zpp_inner,xform,xdet,xnull);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(494)
			if ((this->outer->drawBodies)){
				HX_STACK_LINE(495)
				if (((this->compoundstack == null()))){
					HX_STACK_LINE(495)
					::zpp_nape::util::ZNPList_ZPP_Compound _g4 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(495)
					this->compoundstack = _g4;
				}
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = space->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(498)
					while((true)){
						HX_STACK_LINE(498)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(498)
							break;
						}
						HX_STACK_LINE(499)
						::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(500)
						if ((b->outer->debugDraw)){
							HX_STACK_LINE(500)
							this->draw_body(b,xform,xdet,xnull);
						}
						HX_STACK_LINE(501)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(505)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = space->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(506)
					while((true)){
						HX_STACK_LINE(506)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(506)
							break;
						}
						HX_STACK_LINE(507)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(508)
						this->compoundstack->add(c);
						HX_STACK_LINE(509)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(512)
				while((true)){
					HX_STACK_LINE(512)
					if ((!((!(((this->compoundstack->head == null()))))))){
						HX_STACK_LINE(512)
						break;
					}
					HX_STACK_LINE(513)
					::zpp_nape::phys::ZPP_Compound x = this->compoundstack->pop_unsafe();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(515)
						::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = x->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(516)
						while((true)){
							HX_STACK_LINE(516)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(516)
								break;
							}
							HX_STACK_LINE(517)
							::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(518)
							if ((b->outer->debugDraw)){
								HX_STACK_LINE(518)
								this->draw_body(b,xform,xdet,xnull);
							}
							HX_STACK_LINE(519)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(522)
					{
						HX_STACK_LINE(523)
						::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(524)
						while((true)){
							HX_STACK_LINE(524)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(524)
								break;
							}
							HX_STACK_LINE(525)
							::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(526)
							this->compoundstack->add(c);
							HX_STACK_LINE(527)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(533)
		if (((bool((bool(this->outer->drawCollisionArbiters) || bool(this->outer->drawFluidArbiters))) || bool(this->outer->drawSensorArbiters)))){
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::zpp_nape::space::ZPP_Space &space){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",533,0xeecbde16)
					{
						HX_STACK_LINE(533)
						::nape::space::Space _this = space->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(533)
						if (((_this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(533)
							ret->space = _this->zpp_inner;
							HX_STACK_LINE(533)
							_this->zpp_inner->wrap_arbiters = ret;
						}
						HX_STACK_LINE(533)
						return _this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(533)
			::nape::dynamics::ArbiterIterator _g = (_Function_2_1::Block(space))->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(533)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",533,0xeecbde16)
						{
							HX_STACK_LINE(533)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(533)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(533)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",533,0xeecbde16)
									{
										HX_STACK_LINE(533)
										{
											HX_STACK_LINE(533)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(533)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(533)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(533)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(533)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(533)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(533)
					break;
				}
				HX_STACK_LINE(533)
				::nape::dynamics::Arbiter arb;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					_g->zpp_critical = false;
					HX_STACK_LINE(533)
					int _g5 = (_g->zpp_i)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(533)
					arb = _g->zpp_inner->at(_g5);
				}
				HX_STACK_LINE(533)
				this->draw_arbiter(arb->zpp_inner,xform,xdet,xnull);
			}
		}
		HX_STACK_LINE(534)
		if ((this->outer->drawConstraints)){
			HX_STACK_LINE(535)
			if (((this->compoundstack == null()))){
				HX_STACK_LINE(535)
				::zpp_nape::util::ZNPList_ZPP_Compound _g6 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(535)
				this->compoundstack = _g6;
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = space->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(538)
				while((true)){
					HX_STACK_LINE(538)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(538)
						break;
					}
					HX_STACK_LINE(539)
					::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(540)
					if (((bool(c->active) && bool(c->outer->debugDraw)))){
						HX_STACK_LINE(540)
						c->draw(this->outer);
					}
					HX_STACK_LINE(541)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(545)
				::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = space->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(546)
				while((true)){
					HX_STACK_LINE(546)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(546)
						break;
					}
					HX_STACK_LINE(547)
					::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(548)
					this->compoundstack->add(c);
					HX_STACK_LINE(549)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				if ((!((!(((this->compoundstack->head == null()))))))){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(553)
				::zpp_nape::phys::ZPP_Compound x = this->compoundstack->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(554)
				{
					HX_STACK_LINE(555)
					::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = x->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(556)
					while((true)){
						HX_STACK_LINE(556)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(556)
							break;
						}
						HX_STACK_LINE(557)
						::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(558)
						if (((bool(c->active) && bool(c->outer->debugDraw)))){
							HX_STACK_LINE(558)
							c->draw(this->outer);
						}
						HX_STACK_LINE(559)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(562)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(564)
					while((true)){
						HX_STACK_LINE(564)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(564)
							break;
						}
						HX_STACK_LINE(565)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(566)
						this->compoundstack->add(c);
						HX_STACK_LINE(567)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_space,(void))

Void ZPP_ShapeDebug_obj::draw_body( ::zpp_nape::phys::ZPP_Body body,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_body",0xd5799031,"zpp_nape.util.ZPP_ShapeDebug.draw_body","zpp_nape/util/Debug.hx",573,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(575)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(576)
			while((true)){
				HX_STACK_LINE(576)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(576)
					break;
				}
				HX_STACK_LINE(577)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(578)
				this->draw_shape(s,xform,xdet,xnull);
				HX_STACK_LINE(579)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(582)
		if ((this->outer->drawBodyDetail)){
			HX_STACK_LINE(583)
			int col;		HX_STACK_VAR(col,"col");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(584)
				int idc;		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(585)
				if (((this->outer->colour == null()))){
					HX_STACK_LINE(585)
					Float _g = ::Math_obj::exp((Float(-((hx::Mod(body->id,(int)500)))) / Float((int)1500)));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(585)
					Float _g1 = ((int)16777215 * _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(585)
					int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(585)
					idc = _g2;
				}
				else{
					HX_STACK_LINE(586)
					int _g3 = this->outer->colour(body->id);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(586)
					idc = _g3;
				}
				HX_STACK_LINE(587)
				Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(588)
				Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(589)
				Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(590)
				if (((bool((body->space != null())) && bool(body->outer->zpp_inner->component->sleeping)))){
					HX_STACK_LINE(591)
					_r = ((0.4 * _r) + (0.6 * this->bg_r));
					HX_STACK_LINE(592)
					_g = ((0.4 * _g) + (0.6 * this->bg_g));
					HX_STACK_LINE(593)
					_b = ((0.4 * _b) + (0.6 * this->bg_b));
				}
				HX_STACK_LINE(595)
				int _g4 = ::Std_obj::_int(_r);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(595)
				int _g5 = (int(_g4) << int((int)16));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(595)
				int _g6 = (int((int)-16777216) | int(_g5));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(595)
				int _g7 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(595)
				int _g8 = (int(_g7) << int((int)8));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(595)
				int _g9 = (int(_g6) | int(_g8));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(595)
				int _g10 = ::Std_obj::_int(_b);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(595)
				col = (int(_g9) | int(_g10));
			}
			HX_STACK_LINE(597)
			int _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(598)
				int col1 = col;		HX_STACK_VAR(col1,"col1");
				HX_STACK_LINE(599)
				int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
				HX_STACK_LINE(600)
				Float f = 0.8;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(601)
				int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(602)
				int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(603)
				int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(604)
				_g11 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
			}
			HX_STACK_LINE(597)
			this->graphics->lineStyle(this->outer_zn->thickness,_g11,(int)1,null(),null(),null(),null(),null());
			HX_STACK_LINE(607)
			Float px = 0.0;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(608)
			Float py = 0.0;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(609)
			Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
			HX_STACK_LINE(610)
			Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
			HX_STACK_LINE(611)
			if ((!(((body->shapes->head == null()))))){
				HX_STACK_LINE(612)
				body->validate_worldCOM();
				HX_STACK_LINE(613)
				if ((xnull)){
					HX_STACK_LINE(614)
					px = body->worldCOMx;
					HX_STACK_LINE(615)
					py = body->worldCOMy;
					HX_STACK_LINE(624)
					{
					}
				}
				else{
					HX_STACK_LINE(634)
					px = (((xform->a * body->worldCOMx) + (xform->b * body->worldCOMy)) + xform->tx);
					HX_STACK_LINE(635)
					py = (((xform->c * body->worldCOMx) + (xform->d * body->worldCOMy)) + xform->ty);
				}
				HX_STACK_LINE(637)
				this->graphics->drawCircle(px,py,(int)1);
				HX_STACK_LINE(638)
				if ((body->zip_aabb)){
					HX_STACK_LINE(638)
					body->zip_aabb = false;
					HX_STACK_LINE(638)
					{
						HX_STACK_LINE(638)
						body->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
						HX_STACK_LINE(638)
						body->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
						HX_STACK_LINE(638)
						{
						}
					}
					HX_STACK_LINE(638)
					{
						HX_STACK_LINE(638)
						body->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
						HX_STACK_LINE(638)
						body->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
						HX_STACK_LINE(638)
						{
						}
					}
					HX_STACK_LINE(638)
					{
						HX_STACK_LINE(638)
						::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(638)
						while((true)){
							HX_STACK_LINE(638)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(638)
								break;
							}
							HX_STACK_LINE(638)
							::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(638)
								if ((s->zip_aabb)){
									HX_STACK_LINE(638)
									if (((s->body != null()))){
										HX_STACK_LINE(638)
										s->zip_aabb = false;
										HX_STACK_LINE(638)
										if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
											HX_STACK_LINE(638)
											::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(638)
											if ((_this->zip_worldCOM)){
												HX_STACK_LINE(638)
												if (((_this->body != null()))){
													HX_STACK_LINE(638)
													_this->zip_worldCOM = false;
													HX_STACK_LINE(638)
													if ((_this->zip_localCOM)){
														HX_STACK_LINE(638)
														_this->zip_localCOM = false;
														HX_STACK_LINE(638)
														if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
															HX_STACK_LINE(638)
															::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(638)
															if (((_this1->lverts->next->next == null()))){
																HX_STACK_LINE(638)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(638)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(638)
																Dynamic();
															}
															else{
																HX_STACK_LINE(638)
																if (((_this1->lverts->next->next->next == null()))){
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		_this1->localCOMx = _this1->lverts->next->x;
																		HX_STACK_LINE(638)
																		_this1->localCOMy = _this1->lverts->next->y;
																		HX_STACK_LINE(638)
																		{
																		}
																	}
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		Float t = 1.0;		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(638)
																		hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																		HX_STACK_LINE(638)
																		hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																	}
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		Float t = 0.5;		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(638)
																		hx::MultEq(_this1->localCOMx,t);
																		HX_STACK_LINE(638)
																		hx::MultEq(_this1->localCOMy,t);
																	}
																}
																else{
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		_this1->localCOMx = (int)0;
																		HX_STACK_LINE(638)
																		_this1->localCOMy = (int)0;
																		HX_STACK_LINE(638)
																		{
																		}
																	}
																	HX_STACK_LINE(638)
																	Float area = 0.0;		HX_STACK_VAR(area,"area");
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																		HX_STACK_LINE(638)
																		cx_ite1 = cx_ite1->next;
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																		HX_STACK_LINE(638)
																		cx_ite1 = cx_ite1->next;
																		HX_STACK_LINE(638)
																		while((true)){
																			HX_STACK_LINE(638)
																			if ((!(((cx_ite1 != null()))))){
																				HX_STACK_LINE(638)
																				break;
																			}
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(638)
																			{
																				HX_STACK_LINE(638)
																				hx::AddEq(area,(v->x * ((w->y - u->y))));
																				HX_STACK_LINE(638)
																				Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(638)
																				hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																				HX_STACK_LINE(638)
																				hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																			}
																			HX_STACK_LINE(638)
																			u = v;
																			HX_STACK_LINE(638)
																			v = w;
																			HX_STACK_LINE(638)
																			cx_ite1 = cx_ite1->next;
																		}
																		HX_STACK_LINE(638)
																		cx_ite1 = _this1->lverts->next;
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(638)
																		{
																			HX_STACK_LINE(638)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(638)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(638)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(638)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(638)
																		u = v;
																		HX_STACK_LINE(638)
																		v = w;
																		HX_STACK_LINE(638)
																		cx_ite1 = cx_ite1->next;
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																		HX_STACK_LINE(638)
																		{
																			HX_STACK_LINE(638)
																			hx::AddEq(area,(v->x * ((w1->y - u->y))));
																			HX_STACK_LINE(638)
																			Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(638)
																			hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																			HX_STACK_LINE(638)
																			hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																		}
																	}
																	HX_STACK_LINE(638)
																	area = (Float((int)1) / Float((((int)3 * area))));
																	HX_STACK_LINE(638)
																	{
																		HX_STACK_LINE(638)
																		Float t = area;		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(638)
																		hx::MultEq(_this1->localCOMx,t);
																		HX_STACK_LINE(638)
																		hx::MultEq(_this1->localCOMy,t);
																	}
																}
															}
														}
														HX_STACK_LINE(638)
														if (((_this->wrap_localCOM != null()))){
															HX_STACK_LINE(638)
															_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
															HX_STACK_LINE(638)
															_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
															HX_STACK_LINE(638)
															{
															}
														}
													}
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(638)
														if ((_this1->zip_axis)){
															HX_STACK_LINE(638)
															_this1->zip_axis = false;
															HX_STACK_LINE(638)
															{
																HX_STACK_LINE(638)
																Float _g12 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g12,"_g12");
																HX_STACK_LINE(638)
																_this1->axisx = _g12;
																HX_STACK_LINE(638)
																Float _g13 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g13,"_g13");
																HX_STACK_LINE(638)
																_this1->axisy = _g13;
																HX_STACK_LINE(638)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
														HX_STACK_LINE(638)
														_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
													}
												}
											}
											HX_STACK_LINE(638)
											Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
											HX_STACK_LINE(638)
											Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
											HX_STACK_LINE(638)
											{
												HX_STACK_LINE(638)
												_this->aabb->minx = (_this->worldCOMx - rx);
												HX_STACK_LINE(638)
												_this->aabb->miny = (_this->worldCOMy - ry);
											}
											HX_STACK_LINE(638)
											{
												HX_STACK_LINE(638)
												_this->aabb->maxx = (_this->worldCOMx + rx);
												HX_STACK_LINE(638)
												_this->aabb->maxy = (_this->worldCOMy + ry);
											}
										}
										else{
											HX_STACK_LINE(638)
											::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(638)
											if ((_this->zip_gverts)){
												HX_STACK_LINE(638)
												if (((_this->body != null()))){
													HX_STACK_LINE(638)
													_this->zip_gverts = false;
													HX_STACK_LINE(638)
													_this->validate_lverts();
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(638)
														if ((_this1->zip_axis)){
															HX_STACK_LINE(638)
															_this1->zip_axis = false;
															HX_STACK_LINE(638)
															{
																HX_STACK_LINE(638)
																Float _g14 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g14,"_g14");
																HX_STACK_LINE(638)
																_this1->axisx = _g14;
																HX_STACK_LINE(638)
																Float _g15 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g15,"_g15");
																HX_STACK_LINE(638)
																_this1->axisy = _g15;
																HX_STACK_LINE(638)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(638)
													::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
														HX_STACK_LINE(638)
														while((true)){
															HX_STACK_LINE(638)
															if ((!(((cx_ite1 != null()))))){
																HX_STACK_LINE(638)
																break;
															}
															HX_STACK_LINE(638)
															::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
															HX_STACK_LINE(638)
															{
																HX_STACK_LINE(638)
																::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																HX_STACK_LINE(638)
																li = li->next;
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																	HX_STACK_LINE(638)
																	g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
																}
															}
															HX_STACK_LINE(638)
															cx_ite1 = cx_ite1->next;
														}
													}
												}
											}
											HX_STACK_LINE(638)
											::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
											HX_STACK_LINE(638)
											{
												HX_STACK_LINE(638)
												_this->aabb->minx = p0->x;
												HX_STACK_LINE(638)
												_this->aabb->miny = p0->y;
												HX_STACK_LINE(638)
												{
												}
											}
											HX_STACK_LINE(638)
											{
												HX_STACK_LINE(638)
												_this->aabb->maxx = p0->x;
												HX_STACK_LINE(638)
												_this->aabb->maxy = p0->y;
												HX_STACK_LINE(638)
												{
												}
											}
											HX_STACK_LINE(638)
											{
												HX_STACK_LINE(638)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(638)
												while((true)){
													HX_STACK_LINE(638)
													if ((!(((cx_ite1 != null()))))){
														HX_STACK_LINE(638)
														break;
													}
													HX_STACK_LINE(638)
													::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														if (((p->x < _this->aabb->minx))){
															HX_STACK_LINE(638)
															_this->aabb->minx = p->x;
														}
														HX_STACK_LINE(638)
														if (((p->x > _this->aabb->maxx))){
															HX_STACK_LINE(638)
															_this->aabb->maxx = p->x;
														}
														HX_STACK_LINE(638)
														if (((p->y < _this->aabb->miny))){
															HX_STACK_LINE(638)
															_this->aabb->miny = p->y;
														}
														HX_STACK_LINE(638)
														if (((p->y > _this->aabb->maxy))){
															HX_STACK_LINE(638)
															_this->aabb->maxy = p->y;
														}
													}
													HX_STACK_LINE(638)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
								}
								HX_STACK_LINE(638)
								{
									HX_STACK_LINE(638)
									::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(638)
									::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(638)
									if (((x->minx < _this->minx))){
										HX_STACK_LINE(638)
										_this->minx = x->minx;
									}
									HX_STACK_LINE(638)
									if (((x->maxx > _this->maxx))){
										HX_STACK_LINE(638)
										_this->maxx = x->maxx;
									}
									HX_STACK_LINE(638)
									if (((x->miny < _this->miny))){
										HX_STACK_LINE(638)
										_this->miny = x->miny;
									}
									HX_STACK_LINE(638)
									if (((x->maxy > _this->maxy))){
										HX_STACK_LINE(638)
										_this->maxy = x->maxy;
									}
								}
							}
							HX_STACK_LINE(638)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(640)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",640,0xeecbde16)
							{
								HX_STACK_LINE(640)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(640)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",640,0xeecbde16)
							{
								HX_STACK_LINE(640)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(640)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(640)
					this->graphics->drawRect(body->aabb->minx,body->aabb->miny,_Function_4_1::Block(body),_Function_4_2::Block(body));
				}
				else{
					HX_STACK_LINE(642)
					Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(643)
					Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						ox = (((xform->a * body->aabb->minx) + (xform->b * body->aabb->miny)) + xform->tx);
						HX_STACK_LINE(666)
						oy = (((xform->c * body->aabb->minx) + (xform->d * body->aabb->miny)) + xform->ty);
					}
					HX_STACK_LINE(668)
					Float wx;		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(668)
					{
						HX_STACK_LINE(668)
						::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(668)
						wx = (_this->maxx - _this->minx);
					}
					HX_STACK_LINE(669)
					Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(686)
					{
						HX_STACK_LINE(687)
						Float t = ((xform->a * wx) + (xform->b * wy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(688)
						wy = ((xform->c * wx) + (xform->d * wy));
						HX_STACK_LINE(689)
						wx = t;
					}
					HX_STACK_LINE(691)
					Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
					HX_STACK_LINE(692)
					Float hy;		HX_STACK_VAR(hy,"hy");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						hy = (_this->maxy - _this->miny);
					}
					HX_STACK_LINE(709)
					{
						HX_STACK_LINE(710)
						Float t = ((xform->a * hx) + (xform->b * hy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(711)
						hy = ((xform->c * hx) + (xform->d * hy));
						HX_STACK_LINE(712)
						hx = t;
					}
					HX_STACK_LINE(714)
					this->graphics->moveTo(ox,oy);
					HX_STACK_LINE(715)
					this->graphics->lineTo((ox + wx),(oy + wy));
					HX_STACK_LINE(716)
					this->graphics->lineTo(((ox + wx) + hx),((oy + wy) + hy));
					HX_STACK_LINE(717)
					this->graphics->lineTo((ox + hx),(oy + hy));
					HX_STACK_LINE(718)
					this->graphics->lineTo(ox,oy);
				}
			}
			HX_STACK_LINE(722)
			if ((xnull)){
				HX_STACK_LINE(723)
				qx = body->pre_posx;
				HX_STACK_LINE(724)
				qy = body->pre_posy;
				HX_STACK_LINE(733)
				{
				}
			}
			else{
				HX_STACK_LINE(743)
				qx = (((xform->a * body->pre_posx) + (xform->b * body->pre_posy)) + xform->tx);
				HX_STACK_LINE(744)
				qy = (((xform->c * body->pre_posx) + (xform->d * body->pre_posy)) + xform->ty);
			}
			HX_STACK_LINE(746)
			if ((xnull)){
				HX_STACK_LINE(747)
				px = body->posx;
				HX_STACK_LINE(748)
				py = body->posy;
				HX_STACK_LINE(757)
				{
				}
			}
			else{
				HX_STACK_LINE(767)
				px = (((xform->a * body->posx) + (xform->b * body->posy)) + xform->tx);
				HX_STACK_LINE(768)
				py = (((xform->c * body->posx) + (xform->d * body->posy)) + xform->ty);
			}
			HX_STACK_LINE(770)
			this->graphics->moveTo(qx,qy);
			HX_STACK_LINE(771)
			this->graphics->lineTo(px,py);
			HX_STACK_LINE(772)
			this->graphics->drawCircle(px,py,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_body,(void))

Void ZPP_ShapeDebug_obj::draw_shape( ::zpp_nape::shape::ZPP_Shape shape,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_shape",0xba11aab2,"zpp_nape.util.ZPP_ShapeDebug.draw_shape","zpp_nape/util/Debug.hx",775,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(776)
		int col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(776)
		{
			HX_STACK_LINE(777)
			int idc;		HX_STACK_VAR(idc,"idc");
			HX_STACK_LINE(778)
			if (((this->outer->colour == null()))){
				HX_STACK_LINE(778)
				Float _g = ::Math_obj::exp((Float(-((hx::Mod(shape->id,(int)500)))) / Float((int)1500)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(778)
				Float _g1 = ((int)16777215 * _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(778)
				int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(778)
				idc = _g2;
			}
			else{
				HX_STACK_LINE(779)
				int _g3 = this->outer->colour(shape->id);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(779)
				idc = _g3;
			}
			HX_STACK_LINE(780)
			Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
			HX_STACK_LINE(781)
			Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(782)
			Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
			HX_STACK_LINE(788)
			int _g4 = ::Std_obj::_int(_r);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(788)
			int _g5 = (int(_g4) << int((int)16));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(788)
			int _g6 = (int((int)-16777216) | int(_g5));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(788)
			int _g7 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(788)
			int _g8 = (int(_g7) << int((int)8));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(788)
			int _g9 = (int(_g6) | int(_g8));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(788)
			int _g10 = ::Std_obj::_int(_b);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(788)
			col = (int(_g9) | int(_g10));
		}
		HX_STACK_LINE(790)
		::zpp_nape::phys::ZPP_Body body = shape->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(791)
		if (((body != null()))){
			HX_STACK_LINE(792)
			int bcol;		HX_STACK_VAR(bcol,"bcol");
			HX_STACK_LINE(792)
			{
				HX_STACK_LINE(793)
				int idc;		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(794)
				if (((this->outer->colour == null()))){
					HX_STACK_LINE(794)
					Float _g11 = ::Math_obj::exp((Float(-((hx::Mod(body->id,(int)500)))) / Float((int)1500)));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(794)
					Float _g12 = ((int)16777215 * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(794)
					int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(794)
					idc = _g13;
				}
				else{
					HX_STACK_LINE(795)
					int _g14 = this->outer->colour(body->id);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(795)
					idc = _g14;
				}
				HX_STACK_LINE(796)
				Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(797)
				Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(798)
				Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(799)
				if (((bool((body->space != null())) && bool(body->outer->zpp_inner->component->sleeping)))){
					HX_STACK_LINE(800)
					_r = ((0.4 * _r) + (0.6 * this->bg_r));
					HX_STACK_LINE(801)
					_g = ((0.4 * _g) + (0.6 * this->bg_g));
					HX_STACK_LINE(802)
					_b = ((0.4 * _b) + (0.6 * this->bg_b));
				}
				HX_STACK_LINE(804)
				int _g15 = ::Std_obj::_int(_r);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(804)
				int _g16 = (int(_g15) << int((int)16));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(804)
				int _g17 = (int((int)-16777216) | int(_g16));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(804)
				int _g18 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(804)
				int _g19 = (int(_g18) << int((int)8));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(804)
				int _g20 = (int(_g17) | int(_g19));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(804)
				int _g21 = ::Std_obj::_int(_b);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(804)
				bcol = (int(_g20) | int(_g21));
			}
			HX_STACK_LINE(806)
			int _g22;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(806)
			{
				HX_STACK_LINE(807)
				int col1 = col;		HX_STACK_VAR(col1,"col1");
				HX_STACK_LINE(808)
				int ncol = bcol;		HX_STACK_VAR(ncol,"ncol");
				HX_STACK_LINE(809)
				Float f = 0.2;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(810)
				int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(811)
				int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(812)
				int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(813)
				_g22 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
			}
			HX_STACK_LINE(806)
			col = _g22;
			HX_STACK_LINE(815)
			this->graphics->lineStyle(this->outer_zn->thickness,col,1.0,null(),null(),null(),null(),null());
			HX_STACK_LINE(816)
			if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(817)
				::zpp_nape::shape::ZPP_Circle circ = shape->circle;		HX_STACK_VAR(circ,"circ");
				HX_STACK_LINE(818)
				if ((circ->zip_worldCOM)){
					HX_STACK_LINE(818)
					if (((circ->body != null()))){
						HX_STACK_LINE(818)
						circ->zip_worldCOM = false;
						HX_STACK_LINE(818)
						if ((circ->zip_localCOM)){
							HX_STACK_LINE(818)
							circ->zip_localCOM = false;
							HX_STACK_LINE(818)
							if (((circ->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(818)
								::zpp_nape::shape::ZPP_Polygon _this = circ->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(818)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(818)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(818)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(818)
									Dynamic();
								}
								else{
									HX_STACK_LINE(818)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(818)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(818)
											{
											}
										}
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(818)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(818)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(818)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(818)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(818)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(818)
											{
											}
										}
										HX_STACK_LINE(818)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(818)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(818)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(818)
											while((true)){
												HX_STACK_LINE(818)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(818)
													break;
												}
												HX_STACK_LINE(818)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(818)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(818)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(818)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(818)
												u = v;
												HX_STACK_LINE(818)
												v = w;
												HX_STACK_LINE(818)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(818)
											cx_ite = _this->lverts->next;
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(818)
											{
												HX_STACK_LINE(818)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(818)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(818)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(818)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(818)
											u = v;
											HX_STACK_LINE(818)
											v = w;
											HX_STACK_LINE(818)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(818)
											{
												HX_STACK_LINE(818)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(818)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(818)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(818)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(818)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(818)
										{
											HX_STACK_LINE(818)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(818)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(818)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(818)
							if (((circ->wrap_localCOM != null()))){
								HX_STACK_LINE(818)
								circ->wrap_localCOM->zpp_inner->x = circ->localCOMx;
								HX_STACK_LINE(818)
								circ->wrap_localCOM->zpp_inner->y = circ->localCOMy;
								HX_STACK_LINE(818)
								{
								}
							}
						}
						HX_STACK_LINE(818)
						{
							HX_STACK_LINE(818)
							::zpp_nape::phys::ZPP_Body _this = circ->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(818)
							if ((_this->zip_axis)){
								HX_STACK_LINE(818)
								_this->zip_axis = false;
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									Float _g23 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(818)
									_this->axisx = _g23;
									HX_STACK_LINE(818)
									Float _g24 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g24,"_g24");
									HX_STACK_LINE(818)
									_this->axisy = _g24;
									HX_STACK_LINE(818)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(818)
						{
							HX_STACK_LINE(818)
							circ->worldCOMx = (circ->body->posx + (((circ->body->axisy * circ->localCOMx) - (circ->body->axisx * circ->localCOMy))));
							HX_STACK_LINE(818)
							circ->worldCOMy = (circ->body->posy + (((circ->localCOMx * circ->body->axisx) + (circ->localCOMy * circ->body->axisy))));
						}
					}
				}
				HX_STACK_LINE(819)
				Float vx = circ->worldCOMx;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(820)
				Float vy = circ->worldCOMy;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(821)
				if ((!(xnull))){
					HX_STACK_LINE(822)
					Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(823)
					vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
					HX_STACK_LINE(824)
					vx = t;
				}
				HX_STACK_LINE(826)
				this->graphics->drawCircle(vx,vy,(circ->radius * xdet));
				HX_STACK_LINE(827)
				if ((this->outer->drawShapeAngleIndicators)){
					HX_STACK_LINE(828)
					Float v0x = (circ->worldCOMx + ((0.3 * circ->radius) * body->axisy));		HX_STACK_VAR(v0x,"v0x");
					HX_STACK_LINE(829)
					Float v0y = (circ->worldCOMy + ((0.3 * circ->radius) * body->axisx));		HX_STACK_VAR(v0y,"v0y");
					HX_STACK_LINE(830)
					Float v1x = (circ->worldCOMx + (circ->radius * body->axisy));		HX_STACK_VAR(v1x,"v1x");
					HX_STACK_LINE(831)
					Float v1y = (circ->worldCOMy + (circ->radius * body->axisx));		HX_STACK_VAR(v1y,"v1y");
					HX_STACK_LINE(832)
					if ((!(xnull))){
						HX_STACK_LINE(833)
						Float t = (((xform->a * v0x) + (xform->b * v0y)) + xform->tx);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(834)
						v0y = (((xform->c * v0x) + (xform->d * v0y)) + xform->ty);
						HX_STACK_LINE(835)
						v0x = t;
					}
					HX_STACK_LINE(837)
					if ((!(xnull))){
						HX_STACK_LINE(838)
						Float t = (((xform->a * v1x) + (xform->b * v1y)) + xform->tx);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(839)
						v1y = (((xform->c * v1x) + (xform->d * v1y)) + xform->ty);
						HX_STACK_LINE(840)
						v1x = t;
					}
					HX_STACK_LINE(842)
					this->graphics->moveTo(v0x,v0y);
					HX_STACK_LINE(843)
					this->graphics->lineTo(v1x,v1y);
				}
			}
			else{
				HX_STACK_LINE(847)
				::zpp_nape::shape::ZPP_Polygon poly = shape->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(848)
				if ((poly->zip_gverts)){
					HX_STACK_LINE(848)
					if (((poly->body != null()))){
						HX_STACK_LINE(848)
						poly->zip_gverts = false;
						HX_STACK_LINE(848)
						poly->validate_lverts();
						HX_STACK_LINE(848)
						{
							HX_STACK_LINE(848)
							::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(848)
							if ((_this->zip_axis)){
								HX_STACK_LINE(848)
								_this->zip_axis = false;
								HX_STACK_LINE(848)
								{
									HX_STACK_LINE(848)
									Float _g25 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g25,"_g25");
									HX_STACK_LINE(848)
									_this->axisx = _g25;
									HX_STACK_LINE(848)
									Float _g26 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(848)
									_this->axisy = _g26;
									HX_STACK_LINE(848)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(848)
						::zpp_nape::geom::ZPP_Vec2 li = poly->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(848)
						{
							HX_STACK_LINE(848)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = poly->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(848)
							while((true)){
								HX_STACK_LINE(848)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(848)
									break;
								}
								HX_STACK_LINE(848)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(848)
								{
									HX_STACK_LINE(848)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(848)
									li = li->next;
									HX_STACK_LINE(848)
									{
										HX_STACK_LINE(848)
										g->x = (poly->body->posx + (((poly->body->axisy * l->x) - (poly->body->axisx * l->y))));
										HX_STACK_LINE(848)
										g->y = (poly->body->posy + (((l->x * poly->body->axisx) + (l->y * poly->body->axisy))));
									}
								}
								HX_STACK_LINE(848)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(849)
				::zpp_nape::geom::ZPP_Vec2 u = poly->gverts->next;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(850)
				Float vx = u->x;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(851)
				Float vy = u->y;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(852)
				if ((!(xnull))){
					HX_STACK_LINE(853)
					Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(854)
					vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
					HX_STACK_LINE(855)
					vx = t;
				}
				HX_STACK_LINE(857)
				this->graphics->moveTo(vx,vy);
				HX_STACK_LINE(858)
				Float vox = vx;		HX_STACK_VAR(vox,"vox");
				HX_STACK_LINE(859)
				Float voy = vy;		HX_STACK_VAR(voy,"voy");
				HX_STACK_LINE(860)
				{
					HX_STACK_LINE(861)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = poly->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(862)
					while((true)){
						HX_STACK_LINE(862)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(862)
							break;
						}
						HX_STACK_LINE(863)
						::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(865)
							vx = u1->x;
							HX_STACK_LINE(866)
							vy = u1->y;
							HX_STACK_LINE(867)
							if ((!(xnull))){
								HX_STACK_LINE(868)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(869)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(870)
								vx = t;
							}
							HX_STACK_LINE(872)
							this->graphics->lineTo(vx,vy);
						}
						HX_STACK_LINE(874)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(877)
				this->graphics->lineTo(vox,voy);
				HX_STACK_LINE(878)
				if ((this->outer->drawShapeAngleIndicators)){
					HX_STACK_LINE(879)
					if ((poly->zip_worldCOM)){
						HX_STACK_LINE(879)
						if (((poly->body != null()))){
							HX_STACK_LINE(879)
							poly->zip_worldCOM = false;
							HX_STACK_LINE(879)
							if ((poly->zip_localCOM)){
								HX_STACK_LINE(879)
								poly->zip_localCOM = false;
								HX_STACK_LINE(879)
								if (((poly->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(879)
									::zpp_nape::shape::ZPP_Polygon _this = poly->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(879)
									if (((_this->lverts->next->next == null()))){
										HX_STACK_LINE(879)
										_this->localCOMx = _this->lverts->next->x;
										HX_STACK_LINE(879)
										_this->localCOMy = _this->lverts->next->y;
										HX_STACK_LINE(879)
										Dynamic();
									}
									else{
										HX_STACK_LINE(879)
										if (((_this->lverts->next->next->next == null()))){
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												_this->localCOMx = _this->lverts->next->x;
												HX_STACK_LINE(879)
												_this->localCOMy = _this->lverts->next->y;
												HX_STACK_LINE(879)
												{
												}
											}
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(879)
												hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
												HX_STACK_LINE(879)
												hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
											}
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(879)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(879)
												hx::MultEq(_this->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												_this->localCOMx = (int)0;
												HX_STACK_LINE(879)
												_this->localCOMy = (int)0;
												HX_STACK_LINE(879)
												{
												}
											}
											HX_STACK_LINE(879)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
												HX_STACK_LINE(879)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(879)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(879)
												while((true)){
													HX_STACK_LINE(879)
													if ((!(((cx_ite != null()))))){
														HX_STACK_LINE(879)
														break;
													}
													HX_STACK_LINE(879)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														hx::AddEq(area,(v->x * ((w->y - u1->y))));
														HX_STACK_LINE(879)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(879)
														hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(879)
														hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(879)
													u1 = v;
													HX_STACK_LINE(879)
													v = w;
													HX_STACK_LINE(879)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(879)
												cx_ite = _this->lverts->next;
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(879)
												{
													HX_STACK_LINE(879)
													hx::AddEq(area,(v->x * ((w->y - u1->y))));
													HX_STACK_LINE(879)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(879)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(879)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(879)
												u1 = v;
												HX_STACK_LINE(879)
												v = w;
												HX_STACK_LINE(879)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(879)
												{
													HX_STACK_LINE(879)
													hx::AddEq(area,(v->x * ((w1->y - u1->y))));
													HX_STACK_LINE(879)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(879)
													hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(879)
													hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(879)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(879)
											{
												HX_STACK_LINE(879)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(879)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(879)
												hx::MultEq(_this->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(879)
								if (((poly->wrap_localCOM != null()))){
									HX_STACK_LINE(879)
									poly->wrap_localCOM->zpp_inner->x = poly->localCOMx;
									HX_STACK_LINE(879)
									poly->wrap_localCOM->zpp_inner->y = poly->localCOMy;
									HX_STACK_LINE(879)
									{
									}
								}
							}
							HX_STACK_LINE(879)
							{
								HX_STACK_LINE(879)
								::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(879)
								if ((_this->zip_axis)){
									HX_STACK_LINE(879)
									_this->zip_axis = false;
									HX_STACK_LINE(879)
									{
										HX_STACK_LINE(879)
										Float _g27 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g27,"_g27");
										HX_STACK_LINE(879)
										_this->axisx = _g27;
										HX_STACK_LINE(879)
										Float _g28 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g28,"_g28");
										HX_STACK_LINE(879)
										_this->axisy = _g28;
										HX_STACK_LINE(879)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(879)
							{
								HX_STACK_LINE(879)
								poly->worldCOMx = (poly->body->posx + (((poly->body->axisy * poly->localCOMx) - (poly->body->axisx * poly->localCOMy))));
								HX_STACK_LINE(879)
								poly->worldCOMy = (poly->body->posy + (((poly->localCOMx * poly->body->axisx) + (poly->localCOMy * poly->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(880)
					if ((xnull)){
						HX_STACK_LINE(881)
						vx = poly->worldCOMx;
						HX_STACK_LINE(882)
						vy = poly->worldCOMy;
						HX_STACK_LINE(891)
						{
						}
					}
					else{
						HX_STACK_LINE(901)
						vx = (((xform->a * poly->worldCOMx) + (xform->b * poly->worldCOMy)) + xform->tx);
						HX_STACK_LINE(902)
						vy = (((xform->c * poly->worldCOMx) + (xform->d * poly->worldCOMy)) + xform->ty);
					}
					HX_STACK_LINE(904)
					this->graphics->moveTo(vx,vy);
					HX_STACK_LINE(905)
					this->graphics->lineTo(vox,voy);
				}
			}
			HX_STACK_LINE(908)
			if ((this->outer->drawShapeDetail)){
				HX_STACK_LINE(909)
				if ((shape->zip_worldCOM)){
					HX_STACK_LINE(909)
					if (((shape->body != null()))){
						HX_STACK_LINE(909)
						shape->zip_worldCOM = false;
						HX_STACK_LINE(909)
						if ((shape->zip_localCOM)){
							HX_STACK_LINE(909)
							shape->zip_localCOM = false;
							HX_STACK_LINE(909)
							if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(909)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(909)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(909)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(909)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(909)
									Dynamic();
								}
								else{
									HX_STACK_LINE(909)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(909)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(909)
											{
											}
										}
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(909)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(909)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(909)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(909)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(909)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(909)
											{
											}
										}
										HX_STACK_LINE(909)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(909)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(909)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(909)
											while((true)){
												HX_STACK_LINE(909)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(909)
													break;
												}
												HX_STACK_LINE(909)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(909)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(909)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(909)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(909)
												u = v;
												HX_STACK_LINE(909)
												v = w;
												HX_STACK_LINE(909)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(909)
											cx_ite = _this->lverts->next;
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(909)
											{
												HX_STACK_LINE(909)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(909)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(909)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(909)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(909)
											u = v;
											HX_STACK_LINE(909)
											v = w;
											HX_STACK_LINE(909)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(909)
											{
												HX_STACK_LINE(909)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(909)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(909)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(909)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(909)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(909)
										{
											HX_STACK_LINE(909)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(909)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(909)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(909)
							if (((shape->wrap_localCOM != null()))){
								HX_STACK_LINE(909)
								shape->wrap_localCOM->zpp_inner->x = shape->localCOMx;
								HX_STACK_LINE(909)
								shape->wrap_localCOM->zpp_inner->y = shape->localCOMy;
								HX_STACK_LINE(909)
								{
								}
							}
						}
						HX_STACK_LINE(909)
						{
							HX_STACK_LINE(909)
							::zpp_nape::phys::ZPP_Body _this = shape->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(909)
							if ((_this->zip_axis)){
								HX_STACK_LINE(909)
								_this->zip_axis = false;
								HX_STACK_LINE(909)
								{
									HX_STACK_LINE(909)
									Float _g29 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g29,"_g29");
									HX_STACK_LINE(909)
									_this->axisx = _g29;
									HX_STACK_LINE(909)
									Float _g30 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g30,"_g30");
									HX_STACK_LINE(909)
									_this->axisy = _g30;
									HX_STACK_LINE(909)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(909)
						{
							HX_STACK_LINE(909)
							shape->worldCOMx = (shape->body->posx + (((shape->body->axisy * shape->localCOMx) - (shape->body->axisx * shape->localCOMy))));
							HX_STACK_LINE(909)
							shape->worldCOMy = (shape->body->posy + (((shape->localCOMx * shape->body->axisx) + (shape->localCOMy * shape->body->axisy))));
						}
					}
				}
				HX_STACK_LINE(910)
				int _g31;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(910)
				{
					HX_STACK_LINE(911)
					int col1 = col;		HX_STACK_VAR(col1,"col1");
					HX_STACK_LINE(912)
					int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
					HX_STACK_LINE(913)
					Float f = 0.8;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(914)
					int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(915)
					int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(916)
					int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
					HX_STACK_LINE(917)
					_g31 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
				}
				HX_STACK_LINE(910)
				this->graphics->lineStyle(this->outer_zn->thickness,_g31,(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(920)
				Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(921)
				Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(922)
				if ((xnull)){
					HX_STACK_LINE(923)
					vx = shape->worldCOMx;
					HX_STACK_LINE(924)
					vy = shape->worldCOMy;
					HX_STACK_LINE(933)
					{
					}
				}
				else{
					HX_STACK_LINE(943)
					vx = (((xform->a * shape->worldCOMx) + (xform->b * shape->worldCOMy)) + xform->tx);
					HX_STACK_LINE(944)
					vy = (((xform->c * shape->worldCOMx) + (xform->d * shape->worldCOMy)) + xform->ty);
				}
				HX_STACK_LINE(946)
				this->graphics->drawCircle(vx,vy,(int)1);
				HX_STACK_LINE(947)
				if ((shape->zip_aabb)){
					HX_STACK_LINE(947)
					if (((shape->body != null()))){
						HX_STACK_LINE(947)
						shape->zip_aabb = false;
						HX_STACK_LINE(947)
						if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(947)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(947)
							if ((_this->zip_worldCOM)){
								HX_STACK_LINE(947)
								if (((_this->body != null()))){
									HX_STACK_LINE(947)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(947)
									if ((_this->zip_localCOM)){
										HX_STACK_LINE(947)
										_this->zip_localCOM = false;
										HX_STACK_LINE(947)
										if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
											HX_STACK_LINE(947)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(947)
											if (((_this1->lverts->next->next == null()))){
												HX_STACK_LINE(947)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(947)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(947)
												Dynamic();
											}
											else{
												HX_STACK_LINE(947)
												if (((_this1->lverts->next->next->next == null()))){
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(947)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(947)
														{
														}
													}
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														Float t = 1.0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(947)
														hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
														HX_STACK_LINE(947)
														hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
													}
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														Float t = 0.5;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(947)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(947)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(947)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(947)
														{
														}
													}
													HX_STACK_LINE(947)
													Float area = 0.0;		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(947)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(947)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(947)
														while((true)){
															HX_STACK_LINE(947)
															if ((!(((cx_ite != null()))))){
																HX_STACK_LINE(947)
																break;
															}
															HX_STACK_LINE(947)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(947)
															{
																HX_STACK_LINE(947)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(947)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(947)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(947)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(947)
															u = v;
															HX_STACK_LINE(947)
															v = w;
															HX_STACK_LINE(947)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(947)
														cx_ite = _this1->lverts->next;
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(947)
														{
															HX_STACK_LINE(947)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(947)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(947)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(947)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(947)
														u = v;
														HX_STACK_LINE(947)
														v = w;
														HX_STACK_LINE(947)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(947)
														{
															HX_STACK_LINE(947)
															hx::AddEq(area,(v->x * ((w1->y - u->y))));
															HX_STACK_LINE(947)
															Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(947)
															hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
															HX_STACK_LINE(947)
															hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
														}
													}
													HX_STACK_LINE(947)
													area = (Float((int)1) / Float((((int)3 * area))));
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(947)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(947)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
										HX_STACK_LINE(947)
										if (((_this->wrap_localCOM != null()))){
											HX_STACK_LINE(947)
											_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
											HX_STACK_LINE(947)
											_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
											HX_STACK_LINE(947)
											{
											}
										}
									}
									HX_STACK_LINE(947)
									{
										HX_STACK_LINE(947)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(947)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(947)
											_this1->zip_axis = false;
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												Float _g32 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g32,"_g32");
												HX_STACK_LINE(947)
												_this1->axisx = _g32;
												HX_STACK_LINE(947)
												Float _g33 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g33,"_g33");
												HX_STACK_LINE(947)
												_this1->axisy = _g33;
												HX_STACK_LINE(947)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(947)
									{
										HX_STACK_LINE(947)
										_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
										HX_STACK_LINE(947)
										_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
									}
								}
							}
							HX_STACK_LINE(947)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(947)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(947)
								_this->aabb->minx = (_this->worldCOMx - rx);
								HX_STACK_LINE(947)
								_this->aabb->miny = (_this->worldCOMy - ry);
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(947)
								_this->aabb->maxx = (_this->worldCOMx + rx);
								HX_STACK_LINE(947)
								_this->aabb->maxy = (_this->worldCOMy + ry);
							}
						}
						else{
							HX_STACK_LINE(947)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(947)
							if ((_this->zip_gverts)){
								HX_STACK_LINE(947)
								if (((_this->body != null()))){
									HX_STACK_LINE(947)
									_this->zip_gverts = false;
									HX_STACK_LINE(947)
									_this->validate_lverts();
									HX_STACK_LINE(947)
									{
										HX_STACK_LINE(947)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(947)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(947)
											_this1->zip_axis = false;
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												Float _g34 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g34,"_g34");
												HX_STACK_LINE(947)
												_this1->axisx = _g34;
												HX_STACK_LINE(947)
												Float _g35 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g35,"_g35");
												HX_STACK_LINE(947)
												_this1->axisy = _g35;
												HX_STACK_LINE(947)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(947)
									::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(947)
									{
										HX_STACK_LINE(947)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(947)
										while((true)){
											HX_STACK_LINE(947)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(947)
												break;
											}
											HX_STACK_LINE(947)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(947)
												li = li->next;
												HX_STACK_LINE(947)
												{
													HX_STACK_LINE(947)
													g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
													HX_STACK_LINE(947)
													g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
												}
											}
											HX_STACK_LINE(947)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(947)
							::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(947)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(947)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(947)
								{
								}
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(947)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(947)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(947)
								{
								}
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(947)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(947)
								while((true)){
									HX_STACK_LINE(947)
									if ((!(((cx_ite != null()))))){
										HX_STACK_LINE(947)
										break;
									}
									HX_STACK_LINE(947)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(947)
									{
										HX_STACK_LINE(947)
										if (((p->x < _this->aabb->minx))){
											HX_STACK_LINE(947)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(947)
										if (((p->x > _this->aabb->maxx))){
											HX_STACK_LINE(947)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(947)
										if (((p->y < _this->aabb->miny))){
											HX_STACK_LINE(947)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(947)
										if (((p->y > _this->aabb->maxy))){
											HX_STACK_LINE(947)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(947)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(949)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",949,0xeecbde16)
							{
								HX_STACK_LINE(949)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(949)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",949,0xeecbde16)
							{
								HX_STACK_LINE(949)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(949)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(949)
					this->graphics->drawRect(shape->aabb->minx,shape->aabb->miny,_Function_4_1::Block(shape),_Function_4_2::Block(shape));
				}
				else{
					HX_STACK_LINE(951)
					Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(952)
					Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(973)
					{
						HX_STACK_LINE(974)
						ox = (((xform->a * shape->aabb->minx) + (xform->b * shape->aabb->miny)) + xform->tx);
						HX_STACK_LINE(975)
						oy = (((xform->c * shape->aabb->minx) + (xform->d * shape->aabb->miny)) + xform->ty);
					}
					HX_STACK_LINE(977)
					Float wx;		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(977)
					{
						HX_STACK_LINE(977)
						::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(977)
						wx = (_this->maxx - _this->minx);
					}
					HX_STACK_LINE(978)
					Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(995)
					{
						HX_STACK_LINE(996)
						Float t = ((xform->a * wx) + (xform->b * wy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(997)
						wy = ((xform->c * wx) + (xform->d * wy));
						HX_STACK_LINE(998)
						wx = t;
					}
					HX_STACK_LINE(1000)
					Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
					HX_STACK_LINE(1001)
					Float hy;		HX_STACK_VAR(hy,"hy");
					HX_STACK_LINE(1001)
					{
						HX_STACK_LINE(1001)
						::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1001)
						hy = (_this->maxy - _this->miny);
					}
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1019)
						Float t = ((xform->a * hx) + (xform->b * hy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1020)
						hy = ((xform->c * hx) + (xform->d * hy));
						HX_STACK_LINE(1021)
						hx = t;
					}
					HX_STACK_LINE(1023)
					this->graphics->moveTo(ox,oy);
					HX_STACK_LINE(1024)
					this->graphics->lineTo((ox + wx),(oy + wy));
					HX_STACK_LINE(1025)
					this->graphics->lineTo(((ox + wx) + hx),((oy + wy) + hy));
					HX_STACK_LINE(1026)
					this->graphics->lineTo((ox + hx),(oy + hy));
					HX_STACK_LINE(1027)
					this->graphics->lineTo(ox,oy);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_shape,(void))

Void ZPP_ShapeDebug_obj::draw_arbiter( ::zpp_nape::dynamics::ZPP_Arbiter arb,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_arbiter",0x43b84dba,"zpp_nape.util.ZPP_ShapeDebug.draw_arbiter","zpp_nape/util/Debug.hx",1033,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(1034)
		Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(1035)
		Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(1036)
		if (((arb->outer->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))){
			HX_STACK_LINE(1037)
			if ((this->outer->drawSensorArbiters)){
				HX_STACK_LINE(1038)
				::nape::dynamics::Arbiter sarb = arb->outer;		HX_STACK_VAR(sarb,"sarb");
				HX_STACK_LINE(1039)
				int _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1039)
				{
					HX_STACK_LINE(1040)
					int col = (int)65280;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(1041)
					int ncol = ~(int)(this->bg_col);		HX_STACK_VAR(ncol,"ncol");
					HX_STACK_LINE(1042)
					Float f = 0.7;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1043)
					int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(1044)
					int _g1 = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1045)
					int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
					HX_STACK_LINE(1046)
					_g = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g1) << int((int)8))))) | int(_b));
				}
				HX_STACK_LINE(1039)
				this->graphics->lineStyle(this->outer_zn->thickness,_g,(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(1049)
				if ((xnull)){
					HX_STACK_LINE(1050)
					Float _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1050)
					{
						HX_STACK_LINE(1050)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1050)
						{
							HX_STACK_LINE(1050)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1050)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1050)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1050)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1050)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(1050)
								{
									HX_STACK_LINE(1050)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1050)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1050)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1050)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1050)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1050)
										::nape::geom::Vec2 _g1 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(1050)
										ret = _g1;
									}
									else{
										HX_STACK_LINE(1050)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1050)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1050)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1050)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1050)
										::zpp_nape::geom::ZPP_Vec2 _g3;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1050)
										{
											HX_STACK_LINE(1050)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1050)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2 _g2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(1050)
													ret1 = _g2;
												}
												else{
													HX_STACK_LINE(1050)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1050)
													ret1->next = null();
												}
												HX_STACK_LINE(1050)
												ret1->weak = false;
											}
											HX_STACK_LINE(1050)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												ret1->x = x;
												HX_STACK_LINE(1050)
												ret1->y = y;
												HX_STACK_LINE(1050)
												{
												}
											}
											HX_STACK_LINE(1050)
											_g3 = ret1;
										}
										HX_STACK_LINE(1050)
										ret->zpp_inner = _g3;
										HX_STACK_LINE(1050)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1050)
										Float _g4;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1050)
										{
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1050)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1050)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1050)
											_g4 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1050,0xeecbde16)
												{
													HX_STACK_LINE(1050)
													Float _g5;		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(1050)
													{
														HX_STACK_LINE(1050)
														{
															HX_STACK_LINE(1050)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1050)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1050)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1050)
														_g5 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1050)
													return (_g5 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1050)
										if ((!(((  (((_g4 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1050)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1050)
												{
												}
											}
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1050)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1050)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1050)
										ret;
									}
									HX_STACK_LINE(1050)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1050)
									_g6 = ret;
								}
								HX_STACK_LINE(1050)
								_this1->zpp_inner->wrap_worldCOM = _g6;
								HX_STACK_LINE(1050)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1050)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1050)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1050)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1050)
						{
							HX_STACK_LINE(1050)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1050)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1050)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1050)
						_g7 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1050)
					vx = _g7;
					HX_STACK_LINE(1051)
					Float _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(1051)
					{
						HX_STACK_LINE(1051)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1051)
						{
							HX_STACK_LINE(1051)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1051)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1051)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1051)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1051)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1051)
								::nape::geom::Vec2 _g13;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(1051)
								{
									HX_STACK_LINE(1051)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1051)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1051)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1051)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1051)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1051)
										::nape::geom::Vec2 _g8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(1051)
										ret = _g8;
									}
									else{
										HX_STACK_LINE(1051)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1051)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1051)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1051)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1051)
										::zpp_nape::geom::ZPP_Vec2 _g10;		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1051)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2 _g9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g9,"_g9");
													HX_STACK_LINE(1051)
													ret1 = _g9;
												}
												else{
													HX_STACK_LINE(1051)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1051)
													ret1->next = null();
												}
												HX_STACK_LINE(1051)
												ret1->weak = false;
											}
											HX_STACK_LINE(1051)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												ret1->x = x;
												HX_STACK_LINE(1051)
												ret1->y = y;
												HX_STACK_LINE(1051)
												{
												}
											}
											HX_STACK_LINE(1051)
											_g10 = ret1;
										}
										HX_STACK_LINE(1051)
										ret->zpp_inner = _g10;
										HX_STACK_LINE(1051)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1051)
										Float _g11;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1051)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1051)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1051)
											_g11 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1051,0xeecbde16)
												{
													HX_STACK_LINE(1051)
													Float _g12;		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(1051)
													{
														HX_STACK_LINE(1051)
														{
															HX_STACK_LINE(1051)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1051)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1051)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1051)
														_g12 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1051)
													return (_g12 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1051)
										if ((!(((  (((_g11 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1051)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1051)
												{
												}
											}
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1051)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1051)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1051)
										ret;
									}
									HX_STACK_LINE(1051)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1051)
									_g13 = ret;
								}
								HX_STACK_LINE(1051)
								_this1->zpp_inner->wrap_worldCOM = _g13;
								HX_STACK_LINE(1051)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1051)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1051)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1051)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1051)
						{
							HX_STACK_LINE(1051)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1051)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1051)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1051)
						_g14 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1051)
					vy = _g14;
					HX_STACK_LINE(1060)
					{
					}
				}
				else{
					HX_STACK_LINE(1070)
					Float _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1070)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1070)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1070)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 _g20;		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1070)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1070)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1070)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1070)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1070)
										::nape::geom::Vec2 _g15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(1070)
										ret = _g15;
									}
									else{
										HX_STACK_LINE(1070)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1070)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1070)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1070)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1070)
										::zpp_nape::geom::ZPP_Vec2 _g17;		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1070)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 _g16 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g16,"_g16");
													HX_STACK_LINE(1070)
													ret1 = _g16;
												}
												else{
													HX_STACK_LINE(1070)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1070)
													ret1->next = null();
												}
												HX_STACK_LINE(1070)
												ret1->weak = false;
											}
											HX_STACK_LINE(1070)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret1->x = x;
												HX_STACK_LINE(1070)
												ret1->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											_g17 = ret1;
										}
										HX_STACK_LINE(1070)
										ret->zpp_inner = _g17;
										HX_STACK_LINE(1070)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1070)
										Float _g18;		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1070)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1070)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1070)
											_g18 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1070,0xeecbde16)
												{
													HX_STACK_LINE(1070)
													Float _g19;		HX_STACK_VAR(_g19,"_g19");
													HX_STACK_LINE(1070)
													{
														HX_STACK_LINE(1070)
														{
															HX_STACK_LINE(1070)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1070)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1070)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1070)
														_g19 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1070)
													return (_g19 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1070)
										if ((!(((  (((_g18 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1070)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1070)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1070)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1070)
										ret;
									}
									HX_STACK_LINE(1070)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1070)
									_g20 = ret;
								}
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM = _g20;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1070)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1070)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1070)
						_g21 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1070)
					Float _g22 = (xform->a * _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(1070)
					Float _g29;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1070)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1070)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1070)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 _g28;		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1070)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1070)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1070)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1070)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1070)
										::nape::geom::Vec2 _g23 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g23,"_g23");
										HX_STACK_LINE(1070)
										ret = _g23;
									}
									else{
										HX_STACK_LINE(1070)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1070)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1070)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1070)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1070)
										::zpp_nape::geom::ZPP_Vec2 _g25;		HX_STACK_VAR(_g25,"_g25");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1070)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 _g24 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g24,"_g24");
													HX_STACK_LINE(1070)
													ret1 = _g24;
												}
												else{
													HX_STACK_LINE(1070)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1070)
													ret1->next = null();
												}
												HX_STACK_LINE(1070)
												ret1->weak = false;
											}
											HX_STACK_LINE(1070)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret1->x = x;
												HX_STACK_LINE(1070)
												ret1->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											_g25 = ret1;
										}
										HX_STACK_LINE(1070)
										ret->zpp_inner = _g25;
										HX_STACK_LINE(1070)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1070)
										Float _g26;		HX_STACK_VAR(_g26,"_g26");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1070)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1070)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1070)
											_g26 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1070,0xeecbde16)
												{
													HX_STACK_LINE(1070)
													Float _g27;		HX_STACK_VAR(_g27,"_g27");
													HX_STACK_LINE(1070)
													{
														HX_STACK_LINE(1070)
														{
															HX_STACK_LINE(1070)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1070)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1070)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1070)
														_g27 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1070)
													return (_g27 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1070)
										if ((!(((  (((_g26 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1070)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1070)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1070)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1070)
										ret;
									}
									HX_STACK_LINE(1070)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1070)
									_g28 = ret;
								}
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM = _g28;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1070)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1070)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1070)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1070)
						_g29 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1070)
					Float _g30 = (xform->b * _g29);		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(1070)
					Float _g31 = (_g22 + _g30);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(1070)
					Float _g32 = (_g31 + xform->tx);		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(1070)
					vx = _g32;
					HX_STACK_LINE(1071)
					Float _g39;		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(1071)
					{
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1071)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1071)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1071)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 _g38;		HX_STACK_VAR(_g38,"_g38");
								HX_STACK_LINE(1071)
								{
									HX_STACK_LINE(1071)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1071)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1071)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1071)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1071)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1071)
										::nape::geom::Vec2 _g33 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g33,"_g33");
										HX_STACK_LINE(1071)
										ret = _g33;
									}
									else{
										HX_STACK_LINE(1071)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1071)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1071)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1071)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1071)
										::zpp_nape::geom::ZPP_Vec2 _g35;		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1071)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 _g34 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g34,"_g34");
													HX_STACK_LINE(1071)
													ret1 = _g34;
												}
												else{
													HX_STACK_LINE(1071)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1071)
													ret1->next = null();
												}
												HX_STACK_LINE(1071)
												ret1->weak = false;
											}
											HX_STACK_LINE(1071)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret1->x = x;
												HX_STACK_LINE(1071)
												ret1->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											_g35 = ret1;
										}
										HX_STACK_LINE(1071)
										ret->zpp_inner = _g35;
										HX_STACK_LINE(1071)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1071)
										Float _g36;		HX_STACK_VAR(_g36,"_g36");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1071)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1071)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1071)
											_g36 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1071,0xeecbde16)
												{
													HX_STACK_LINE(1071)
													Float _g37;		HX_STACK_VAR(_g37,"_g37");
													HX_STACK_LINE(1071)
													{
														HX_STACK_LINE(1071)
														{
															HX_STACK_LINE(1071)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1071)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1071)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1071)
														_g37 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1071)
													return (_g37 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1071)
										if ((!(((  (((_g36 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1071)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1071)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1071)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1071)
										ret;
									}
									HX_STACK_LINE(1071)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1071)
									_g38 = ret;
								}
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM = _g38;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1071)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1071)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1071)
						_g39 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1071)
					Float _g40 = (xform->c * _g39);		HX_STACK_VAR(_g40,"_g40");
					HX_STACK_LINE(1071)
					Float _g47;		HX_STACK_VAR(_g47,"_g47");
					HX_STACK_LINE(1071)
					{
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1071)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							else{
								HX_STACK_LINE(1071)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							HX_STACK_LINE(1071)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 _g46;		HX_STACK_VAR(_g46,"_g46");
								HX_STACK_LINE(1071)
								{
									HX_STACK_LINE(1071)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1071)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1071)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1071)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1071)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1071)
										::nape::geom::Vec2 _g41 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g41,"_g41");
										HX_STACK_LINE(1071)
										ret = _g41;
									}
									else{
										HX_STACK_LINE(1071)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1071)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1071)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1071)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1071)
										::zpp_nape::geom::ZPP_Vec2 _g43;		HX_STACK_VAR(_g43,"_g43");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1071)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 _g42 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g42,"_g42");
													HX_STACK_LINE(1071)
													ret1 = _g42;
												}
												else{
													HX_STACK_LINE(1071)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1071)
													ret1->next = null();
												}
												HX_STACK_LINE(1071)
												ret1->weak = false;
											}
											HX_STACK_LINE(1071)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret1->x = x;
												HX_STACK_LINE(1071)
												ret1->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											_g43 = ret1;
										}
										HX_STACK_LINE(1071)
										ret->zpp_inner = _g43;
										HX_STACK_LINE(1071)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1071)
										Float _g44;		HX_STACK_VAR(_g44,"_g44");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1071)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1071)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1071)
											_g44 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1071,0xeecbde16)
												{
													HX_STACK_LINE(1071)
													Float _g45;		HX_STACK_VAR(_g45,"_g45");
													HX_STACK_LINE(1071)
													{
														HX_STACK_LINE(1071)
														{
															HX_STACK_LINE(1071)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1071)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1071)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1071)
														_g45 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1071)
													return (_g45 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1071)
										if ((!(((  (((_g44 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1071)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1071)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1071)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1071)
										ret;
									}
									HX_STACK_LINE(1071)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1071)
									_g46 = ret;
								}
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM = _g46;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1071)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1071)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1071)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1071)
						_g47 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1071)
					Float _g48 = (xform->d * _g47);		HX_STACK_VAR(_g48,"_g48");
					HX_STACK_LINE(1071)
					Float _g49 = (_g40 + _g48);		HX_STACK_VAR(_g49,"_g49");
					HX_STACK_LINE(1071)
					Float _g50 = (_g49 + xform->ty);		HX_STACK_VAR(_g50,"_g50");
					HX_STACK_LINE(1071)
					vy = _g50;
				}
				HX_STACK_LINE(1073)
				this->graphics->moveTo(vx,vy);
				HX_STACK_LINE(1074)
				if ((xnull)){
					HX_STACK_LINE(1075)
					Float _g57;		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(1075)
					{
						HX_STACK_LINE(1075)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1075)
						{
							HX_STACK_LINE(1075)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1075)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1075)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1075)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1075)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 _g56;		HX_STACK_VAR(_g56,"_g56");
								HX_STACK_LINE(1075)
								{
									HX_STACK_LINE(1075)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1075)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1075)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1075)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1075)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1075)
										::nape::geom::Vec2 _g51 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g51,"_g51");
										HX_STACK_LINE(1075)
										ret = _g51;
									}
									else{
										HX_STACK_LINE(1075)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1075)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1075)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1075)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1075)
										::zpp_nape::geom::ZPP_Vec2 _g53;		HX_STACK_VAR(_g53,"_g53");
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2 _g52 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g52,"_g52");
													HX_STACK_LINE(1075)
													ret1 = _g52;
												}
												else{
													HX_STACK_LINE(1075)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1075)
													ret1->next = null();
												}
												HX_STACK_LINE(1075)
												ret1->weak = false;
											}
											HX_STACK_LINE(1075)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												ret1->x = x;
												HX_STACK_LINE(1075)
												ret1->y = y;
												HX_STACK_LINE(1075)
												{
												}
											}
											HX_STACK_LINE(1075)
											_g53 = ret1;
										}
										HX_STACK_LINE(1075)
										ret->zpp_inner = _g53;
										HX_STACK_LINE(1075)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1075)
										Float _g54;		HX_STACK_VAR(_g54,"_g54");
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1075)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1075)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1075)
											_g54 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1075,0xeecbde16)
												{
													HX_STACK_LINE(1075)
													Float _g55;		HX_STACK_VAR(_g55,"_g55");
													HX_STACK_LINE(1075)
													{
														HX_STACK_LINE(1075)
														{
															HX_STACK_LINE(1075)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1075)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1075)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1075)
														_g55 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1075)
													return (_g55 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1075)
										if ((!(((  (((_g54 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1075)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1075)
												{
												}
											}
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1075)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1075)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1075)
										ret;
									}
									HX_STACK_LINE(1075)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1075)
									_g56 = ret;
								}
								HX_STACK_LINE(1075)
								_this1->zpp_inner->wrap_worldCOM = _g56;
								HX_STACK_LINE(1075)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1075)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1075)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1075)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1075)
						{
							HX_STACK_LINE(1075)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1075)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1075)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1075)
						_g57 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1075)
					vx = _g57;
					HX_STACK_LINE(1076)
					Float _g64;		HX_STACK_VAR(_g64,"_g64");
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1076)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1076)
						{
							HX_STACK_LINE(1076)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1076)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1076)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1076)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1076)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1076)
								::nape::geom::Vec2 _g63;		HX_STACK_VAR(_g63,"_g63");
								HX_STACK_LINE(1076)
								{
									HX_STACK_LINE(1076)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1076)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1076)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1076)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1076)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1076)
										::nape::geom::Vec2 _g58 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g58,"_g58");
										HX_STACK_LINE(1076)
										ret = _g58;
									}
									else{
										HX_STACK_LINE(1076)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1076)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1076)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1076)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1076)
										::zpp_nape::geom::ZPP_Vec2 _g60;		HX_STACK_VAR(_g60,"_g60");
										HX_STACK_LINE(1076)
										{
											HX_STACK_LINE(1076)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1076)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2 _g59 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g59,"_g59");
													HX_STACK_LINE(1076)
													ret1 = _g59;
												}
												else{
													HX_STACK_LINE(1076)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1076)
													ret1->next = null();
												}
												HX_STACK_LINE(1076)
												ret1->weak = false;
											}
											HX_STACK_LINE(1076)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												ret1->x = x;
												HX_STACK_LINE(1076)
												ret1->y = y;
												HX_STACK_LINE(1076)
												{
												}
											}
											HX_STACK_LINE(1076)
											_g60 = ret1;
										}
										HX_STACK_LINE(1076)
										ret->zpp_inner = _g60;
										HX_STACK_LINE(1076)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1076)
										Float _g61;		HX_STACK_VAR(_g61,"_g61");
										HX_STACK_LINE(1076)
										{
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1076)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1076)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1076)
											_g61 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1076,0xeecbde16)
												{
													HX_STACK_LINE(1076)
													Float _g62;		HX_STACK_VAR(_g62,"_g62");
													HX_STACK_LINE(1076)
													{
														HX_STACK_LINE(1076)
														{
															HX_STACK_LINE(1076)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1076)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1076)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1076)
														_g62 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1076)
													return (_g62 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1076)
										if ((!(((  (((_g61 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1076)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1076)
												{
												}
											}
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1076)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1076)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1076)
										ret;
									}
									HX_STACK_LINE(1076)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1076)
									_g63 = ret;
								}
								HX_STACK_LINE(1076)
								_this1->zpp_inner->wrap_worldCOM = _g63;
								HX_STACK_LINE(1076)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1076)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1076)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1076)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1076)
						{
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1076)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1076)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1076)
						_g64 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1076)
					vy = _g64;
					HX_STACK_LINE(1085)
					{
					}
				}
				else{
					HX_STACK_LINE(1095)
					Float _g71;		HX_STACK_VAR(_g71,"_g71");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1095)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1095)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1095)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 _g70;		HX_STACK_VAR(_g70,"_g70");
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1095)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1095)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1095)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1095)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1095)
										::nape::geom::Vec2 _g65 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g65,"_g65");
										HX_STACK_LINE(1095)
										ret = _g65;
									}
									else{
										HX_STACK_LINE(1095)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1095)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1095)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1095)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1095)
										::zpp_nape::geom::ZPP_Vec2 _g67;		HX_STACK_VAR(_g67,"_g67");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1095)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 _g66 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g66,"_g66");
													HX_STACK_LINE(1095)
													ret1 = _g66;
												}
												else{
													HX_STACK_LINE(1095)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1095)
													ret1->next = null();
												}
												HX_STACK_LINE(1095)
												ret1->weak = false;
											}
											HX_STACK_LINE(1095)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret1->x = x;
												HX_STACK_LINE(1095)
												ret1->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											_g67 = ret1;
										}
										HX_STACK_LINE(1095)
										ret->zpp_inner = _g67;
										HX_STACK_LINE(1095)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1095)
										Float _g68;		HX_STACK_VAR(_g68,"_g68");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1095)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1095)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1095)
											_g68 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1095,0xeecbde16)
												{
													HX_STACK_LINE(1095)
													Float _g69;		HX_STACK_VAR(_g69,"_g69");
													HX_STACK_LINE(1095)
													{
														HX_STACK_LINE(1095)
														{
															HX_STACK_LINE(1095)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1095)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1095)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1095)
														_g69 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1095)
													return (_g69 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1095)
										if ((!(((  (((_g68 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1095)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1095)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1095)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1095)
										ret;
									}
									HX_STACK_LINE(1095)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1095)
									_g70 = ret;
								}
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM = _g70;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1095)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1095)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1095)
						_g71 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1095)
					Float _g72 = (xform->a * _g71);		HX_STACK_VAR(_g72,"_g72");
					HX_STACK_LINE(1095)
					Float _g79;		HX_STACK_VAR(_g79,"_g79");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1095)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1095)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1095)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 _g78;		HX_STACK_VAR(_g78,"_g78");
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1095)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1095)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1095)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1095)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1095)
										::nape::geom::Vec2 _g73 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g73,"_g73");
										HX_STACK_LINE(1095)
										ret = _g73;
									}
									else{
										HX_STACK_LINE(1095)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1095)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1095)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1095)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1095)
										::zpp_nape::geom::ZPP_Vec2 _g75;		HX_STACK_VAR(_g75,"_g75");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1095)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 _g74 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g74,"_g74");
													HX_STACK_LINE(1095)
													ret1 = _g74;
												}
												else{
													HX_STACK_LINE(1095)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1095)
													ret1->next = null();
												}
												HX_STACK_LINE(1095)
												ret1->weak = false;
											}
											HX_STACK_LINE(1095)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret1->x = x;
												HX_STACK_LINE(1095)
												ret1->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											_g75 = ret1;
										}
										HX_STACK_LINE(1095)
										ret->zpp_inner = _g75;
										HX_STACK_LINE(1095)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1095)
										Float _g76;		HX_STACK_VAR(_g76,"_g76");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1095)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1095)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1095)
											_g76 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1095,0xeecbde16)
												{
													HX_STACK_LINE(1095)
													Float _g77;		HX_STACK_VAR(_g77,"_g77");
													HX_STACK_LINE(1095)
													{
														HX_STACK_LINE(1095)
														{
															HX_STACK_LINE(1095)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1095)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1095)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1095)
														_g77 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1095)
													return (_g77 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1095)
										if ((!(((  (((_g76 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1095)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1095)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1095)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1095)
										ret;
									}
									HX_STACK_LINE(1095)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1095)
									_g78 = ret;
								}
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM = _g78;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1095)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1095)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1095)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1095)
						_g79 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1095)
					Float _g80 = (xform->b * _g79);		HX_STACK_VAR(_g80,"_g80");
					HX_STACK_LINE(1095)
					Float _g81 = (_g72 + _g80);		HX_STACK_VAR(_g81,"_g81");
					HX_STACK_LINE(1095)
					Float _g82 = (_g81 + xform->tx);		HX_STACK_VAR(_g82,"_g82");
					HX_STACK_LINE(1095)
					vx = _g82;
					HX_STACK_LINE(1096)
					Float _g89;		HX_STACK_VAR(_g89,"_g89");
					HX_STACK_LINE(1096)
					{
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1096)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1096)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1096)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 _g88;		HX_STACK_VAR(_g88,"_g88");
								HX_STACK_LINE(1096)
								{
									HX_STACK_LINE(1096)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1096)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1096)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1096)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1096)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1096)
										::nape::geom::Vec2 _g83 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g83,"_g83");
										HX_STACK_LINE(1096)
										ret = _g83;
									}
									else{
										HX_STACK_LINE(1096)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1096)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1096)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1096)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1096)
										::zpp_nape::geom::ZPP_Vec2 _g85;		HX_STACK_VAR(_g85,"_g85");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1096)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 _g84 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g84,"_g84");
													HX_STACK_LINE(1096)
													ret1 = _g84;
												}
												else{
													HX_STACK_LINE(1096)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1096)
													ret1->next = null();
												}
												HX_STACK_LINE(1096)
												ret1->weak = false;
											}
											HX_STACK_LINE(1096)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret1->x = x;
												HX_STACK_LINE(1096)
												ret1->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											_g85 = ret1;
										}
										HX_STACK_LINE(1096)
										ret->zpp_inner = _g85;
										HX_STACK_LINE(1096)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1096)
										Float _g86;		HX_STACK_VAR(_g86,"_g86");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1096)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1096)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1096)
											_g86 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1096,0xeecbde16)
												{
													HX_STACK_LINE(1096)
													Float _g87;		HX_STACK_VAR(_g87,"_g87");
													HX_STACK_LINE(1096)
													{
														HX_STACK_LINE(1096)
														{
															HX_STACK_LINE(1096)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1096)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1096)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1096)
														_g87 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1096)
													return (_g87 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1096)
										if ((!(((  (((_g86 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1096)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1096)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1096)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1096)
										ret;
									}
									HX_STACK_LINE(1096)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1096)
									_g88 = ret;
								}
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM = _g88;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1096)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1096)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1096)
						_g89 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1096)
					Float _g90 = (xform->c * _g89);		HX_STACK_VAR(_g90,"_g90");
					HX_STACK_LINE(1096)
					Float _g97;		HX_STACK_VAR(_g97,"_g97");
					HX_STACK_LINE(1096)
					{
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::nape::shape::Shape _this1;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							if (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))){
								HX_STACK_LINE(1096)
								_this1 = sarb->zpp_inner->ws1->outer;
							}
							else{
								HX_STACK_LINE(1096)
								_this1 = sarb->zpp_inner->ws2->outer;
							}
							HX_STACK_LINE(1096)
							if (((_this1->zpp_inner->wrap_worldCOM == null()))){
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 _g96;		HX_STACK_VAR(_g96,"_g96");
								HX_STACK_LINE(1096)
								{
									HX_STACK_LINE(1096)
									Float x = _this1->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1096)
									Float y = _this1->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1096)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1096)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1096)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1096)
										::nape::geom::Vec2 _g91 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g91,"_g91");
										HX_STACK_LINE(1096)
										ret = _g91;
									}
									else{
										HX_STACK_LINE(1096)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1096)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1096)
										ret->zpp_pool = null();
									}
									HX_STACK_LINE(1096)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1096)
										::zpp_nape::geom::ZPP_Vec2 _g93;		HX_STACK_VAR(_g93,"_g93");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1096)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 _g92 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g92,"_g92");
													HX_STACK_LINE(1096)
													ret1 = _g92;
												}
												else{
													HX_STACK_LINE(1096)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1096)
													ret1->next = null();
												}
												HX_STACK_LINE(1096)
												ret1->weak = false;
											}
											HX_STACK_LINE(1096)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret1->x = x;
												HX_STACK_LINE(1096)
												ret1->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											_g93 = ret1;
										}
										HX_STACK_LINE(1096)
										ret->zpp_inner = _g93;
										HX_STACK_LINE(1096)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1096)
										Float _g94;		HX_STACK_VAR(_g94,"_g94");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1096)
												if (((_this2->_validate != null()))){
													HX_STACK_LINE(1096)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(1096)
											_g94 = ret->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1096,0xeecbde16)
												{
													HX_STACK_LINE(1096)
													Float _g95;		HX_STACK_VAR(_g95,"_g95");
													HX_STACK_LINE(1096)
													{
														HX_STACK_LINE(1096)
														{
															HX_STACK_LINE(1096)
															::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(1096)
															if (((_this2->_validate != null()))){
																HX_STACK_LINE(1096)
																_this2->_validate();
															}
														}
														HX_STACK_LINE(1096)
														_g95 = ret->zpp_inner->y;
													}
													HX_STACK_LINE(1096)
													return (_g95 == y);
												}
												return null();
											}
										};
										HX_STACK_LINE(1096)
										if ((!(((  (((_g94 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1096)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this2 = ret->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(1096)
												if (((_this2->_invalidate != null()))){
													HX_STACK_LINE(1096)
													_this2->_invalidate(_this2);
												}
											}
										}
										HX_STACK_LINE(1096)
										ret;
									}
									HX_STACK_LINE(1096)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1096)
									_g96 = ret;
								}
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM = _g96;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
								HX_STACK_LINE(1096)
								_this1->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this1->zpp_inner->getworldCOM_dyn();
							}
							HX_STACK_LINE(1096)
							_this = _this1->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(1096)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1096)
						_g97 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1096)
					Float _g98 = (xform->d * _g97);		HX_STACK_VAR(_g98,"_g98");
					HX_STACK_LINE(1096)
					Float _g99 = (_g90 + _g98);		HX_STACK_VAR(_g99,"_g99");
					HX_STACK_LINE(1096)
					Float _g100 = (_g99 + xform->ty);		HX_STACK_VAR(_g100,"_g100");
					HX_STACK_LINE(1096)
					vy = _g100;
				}
				HX_STACK_LINE(1098)
				this->graphics->lineTo(vx,vy);
			}
		}
		else{
			HX_STACK_LINE(1101)
			if (((arb->outer->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
				HX_STACK_LINE(1102)
				if ((this->outer->drawFluidArbiters)){
					HX_STACK_LINE(1103)
					::nape::dynamics::FluidArbiter farb;		HX_STACK_VAR(farb,"farb");
					HX_STACK_LINE(1103)
					{
						HX_STACK_LINE(1103)
						::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1103)
						if (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
							HX_STACK_LINE(1103)
							farb = _this->zpp_inner->fluidarb->outer_zn;
						}
						else{
							HX_STACK_LINE(1103)
							farb = null();
						}
					}
					HX_STACK_LINE(1104)
					int _g101;		HX_STACK_VAR(_g101,"_g101");
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1105)
						int col = (int)255;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(1106)
						int ncol = ~(int)(this->bg_col);		HX_STACK_VAR(ncol,"ncol");
						HX_STACK_LINE(1107)
						Float f = 0.7;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1108)
						int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(1109)
						int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1110)
						int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
						HX_STACK_LINE(1111)
						_g101 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
					}
					HX_STACK_LINE(1104)
					this->graphics->lineStyle(this->outer_zn->thickness,_g101,(int)1,null(),null(),null(),null(),null());
					HX_STACK_LINE(1114)
					if ((xnull)){
						HX_STACK_LINE(1115)
						Float _g102;		HX_STACK_VAR(_g102,"_g102");
						HX_STACK_LINE(1115)
						{
							HX_STACK_LINE(1115)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1115)
							{
								HX_STACK_LINE(1115)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1115)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1115)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1115)
							{
								HX_STACK_LINE(1115)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1115)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1115)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1115)
							_g102 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1115)
						vx = _g102;
						HX_STACK_LINE(1116)
						Float _g103;		HX_STACK_VAR(_g103,"_g103");
						HX_STACK_LINE(1116)
						{
							HX_STACK_LINE(1116)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1116)
							{
								HX_STACK_LINE(1116)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1116)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1116)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1116)
							{
								HX_STACK_LINE(1116)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1116)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1116)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1116)
							_g103 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1116)
						vy = _g103;
						HX_STACK_LINE(1125)
						{
						}
					}
					else{
						HX_STACK_LINE(1135)
						Float _g104;		HX_STACK_VAR(_g104,"_g104");
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1135)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1135)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1135)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1135)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1135)
							_g104 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1135)
						Float _g105 = (xform->a * _g104);		HX_STACK_VAR(_g105,"_g105");
						HX_STACK_LINE(1135)
						Float _g106;		HX_STACK_VAR(_g106,"_g106");
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1135)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1135)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1135)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1135)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1135)
							_g106 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1135)
						Float _g107 = (xform->b * _g106);		HX_STACK_VAR(_g107,"_g107");
						HX_STACK_LINE(1135)
						Float _g108 = (_g105 + _g107);		HX_STACK_VAR(_g108,"_g108");
						HX_STACK_LINE(1135)
						Float _g109 = (_g108 + xform->tx);		HX_STACK_VAR(_g109,"_g109");
						HX_STACK_LINE(1135)
						vx = _g109;
						HX_STACK_LINE(1136)
						Float _g110;		HX_STACK_VAR(_g110,"_g110");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1136)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1136)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1136)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1136)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1136)
							_g110 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1136)
						Float _g111 = (xform->c * _g110);		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(1136)
						Float _g112;		HX_STACK_VAR(_g112,"_g112");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
									HX_STACK_LINE(1136)
									farb->zpp_inner->fluidarb->getposition();
								}
								HX_STACK_LINE(1136)
								_this = farb->zpp_inner->fluidarb->wrap_position;
							}
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1136)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(1136)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1136)
							_g112 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1136)
						Float _g113 = (xform->d * _g112);		HX_STACK_VAR(_g113,"_g113");
						HX_STACK_LINE(1136)
						Float _g114 = (_g111 + _g113);		HX_STACK_VAR(_g114,"_g114");
						HX_STACK_LINE(1136)
						Float _g115 = (_g114 + xform->ty);		HX_STACK_VAR(_g115,"_g115");
						HX_STACK_LINE(1136)
						vy = _g115;
					}
					HX_STACK_LINE(1138)
					this->graphics->drawCircle(vx,vy,0.75);
				}
			}
			else{
				HX_STACK_LINE(1142)
				if ((this->outer->drawCollisionArbiters)){
					HX_STACK_LINE(1143)
					::nape::dynamics::CollisionArbiter carb;		HX_STACK_VAR(carb,"carb");
					HX_STACK_LINE(1143)
					{
						HX_STACK_LINE(1143)
						::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1143)
						if (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
							HX_STACK_LINE(1143)
							carb = _this->zpp_inner->colarb->outer_zn;
						}
						else{
							HX_STACK_LINE(1143)
							carb = null();
						}
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::dynamics::CollisionArbiter &carb){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1144,0xeecbde16)
							{
								HX_STACK_LINE(1144)
								::nape::dynamics::ContactList _this;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1144)
								{
									HX_STACK_LINE(1144)
									if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
										HX_STACK_LINE(1144)
										carb->zpp_inner->colarb->setupcontacts();
									}
									HX_STACK_LINE(1144)
									_this = carb->zpp_inner->colarb->wrap_contacts;
								}
								struct _Function_5_1{
									inline static bool Block( ::nape::dynamics::ContactList _this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1144,0xeecbde16)
										{
											HX_STACK_LINE(1144)
											int _g116;		HX_STACK_VAR(_g116,"_g116");
											HX_STACK_LINE(1144)
											{
												HX_STACK_LINE(1144)
												_this->zpp_inner->valmod();
												HX_STACK_LINE(1144)
												if ((_this->zpp_inner->zip_length)){
													HX_STACK_LINE(1144)
													_this->zpp_inner->zip_length = false;
													HX_STACK_LINE(1144)
													{
														HX_STACK_LINE(1144)
														_this->zpp_inner->user_length = (int)0;
														HX_STACK_LINE(1144)
														{
															HX_STACK_LINE(1144)
															::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1144)
															while((true)){
																HX_STACK_LINE(1144)
																if ((!(((cx_ite != null()))))){
																	HX_STACK_LINE(1144)
																	break;
																}
																HX_STACK_LINE(1144)
																::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(1144)
																if (((bool(i->active) && bool(i->arbiter->active)))){
																	HX_STACK_LINE(1144)
																	(_this->zpp_inner->user_length)++;
																}
																HX_STACK_LINE(1144)
																cx_ite = cx_ite->next;
															}
														}
													}
												}
												HX_STACK_LINE(1144)
												_g116 = _this->zpp_inner->user_length;
											}
											HX_STACK_LINE(1144)
											return (_g116 == (int)0);
										}
										return null();
									}
								};
								HX_STACK_LINE(1144)
								return _Function_5_1::Block(_this);
							}
							return null();
						}
					};
					HX_STACK_LINE(1144)
					if ((!(_Function_4_1::Block(carb)))){
						HX_STACK_LINE(1145)
						Float px = 0.0;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1146)
						Float py = 0.0;		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(1147)
						int _g117;		HX_STACK_VAR(_g117,"_g117");
						HX_STACK_LINE(1147)
						{
							HX_STACK_LINE(1147)
							::nape::dynamics::ContactList _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1147)
							{
								HX_STACK_LINE(1147)
								if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
									HX_STACK_LINE(1147)
									carb->zpp_inner->colarb->setupcontacts();
								}
								HX_STACK_LINE(1147)
								_this = carb->zpp_inner->colarb->wrap_contacts;
							}
							HX_STACK_LINE(1147)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(1147)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(1147)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(1147)
								{
									HX_STACK_LINE(1147)
									_this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(1147)
									{
										HX_STACK_LINE(1147)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(1147)
										while((true)){
											HX_STACK_LINE(1147)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(1147)
												break;
											}
											HX_STACK_LINE(1147)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1147)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(1147)
												(_this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(1147)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(1147)
							_g117 = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(1147)
						if (((_g117 == (int)2))){
							HX_STACK_LINE(1148)
							::nape::geom::Vec2 c1;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(1148)
							{
								struct _Function_7_1{
									inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1148,0xeecbde16)
										{
											HX_STACK_LINE(1148)
											if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
												HX_STACK_LINE(1148)
												carb->zpp_inner->colarb->setupcontacts();
											}
											HX_STACK_LINE(1148)
											return carb->zpp_inner->colarb->wrap_contacts;
										}
										return null();
									}
								};
								HX_STACK_LINE(1148)
								::nape::dynamics::Contact _this = (_Function_7_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1148)
								if (((_this->zpp_inner->wrap_position == null()))){
									HX_STACK_LINE(1148)
									_this->zpp_inner->getposition();
								}
								HX_STACK_LINE(1148)
								c1 = _this->zpp_inner->wrap_position;
							}
							HX_STACK_LINE(1149)
							::nape::geom::Vec2 c2;		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(1149)
							{
								struct _Function_7_1{
									inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1149,0xeecbde16)
										{
											HX_STACK_LINE(1149)
											if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
												HX_STACK_LINE(1149)
												carb->zpp_inner->colarb->setupcontacts();
											}
											HX_STACK_LINE(1149)
											return carb->zpp_inner->colarb->wrap_contacts;
										}
										return null();
									}
								};
								HX_STACK_LINE(1149)
								::nape::dynamics::Contact _this = (_Function_7_1::Block(carb))->at((int)1);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1149)
								if (((_this->zpp_inner->wrap_position == null()))){
									HX_STACK_LINE(1149)
									_this->zpp_inner->getposition();
								}
								HX_STACK_LINE(1149)
								c2 = _this->zpp_inner->wrap_position;
							}
							HX_STACK_LINE(1150)
							::nape::geom::Vec2 n;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1150)
							{
								HX_STACK_LINE(1150)
								if (((carb->zpp_inner->colarb->wrap_normal == null()))){
									HX_STACK_LINE(1150)
									carb->zpp_inner->colarb->getnormal();
								}
								HX_STACK_LINE(1150)
								n = carb->zpp_inner->colarb->wrap_normal;
							}
							HX_STACK_LINE(1151)
							Float x = 0.661437828;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1152)
							Float y = 0.75;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1153)
							Float _g118;		HX_STACK_VAR(_g118,"_g118");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g118 = n->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float _g119;		HX_STACK_VAR(_g119,"_g119");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g119 = c1->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float _g120 = (_g118 * _g119);		HX_STACK_VAR(_g120,"_g120");
							HX_STACK_LINE(1153)
							Float _g121;		HX_STACK_VAR(_g121,"_g121");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g121 = n->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float _g122;		HX_STACK_VAR(_g122,"_g122");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g122 = c1->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float _g123 = (_g121 * _g122);		HX_STACK_VAR(_g123,"_g123");
							HX_STACK_LINE(1153)
							Float _g124 = (_g120 - _g123);		HX_STACK_VAR(_g124,"_g124");
							HX_STACK_LINE(1153)
							Float _g125;		HX_STACK_VAR(_g125,"_g125");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g125 = n->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float _g126;		HX_STACK_VAR(_g126,"_g126");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g126 = c2->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float _g127 = (_g125 * _g126);		HX_STACK_VAR(_g127,"_g127");
							HX_STACK_LINE(1153)
							Float _g128;		HX_STACK_VAR(_g128,"_g128");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g128 = n->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float _g129;		HX_STACK_VAR(_g129,"_g129");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								_g129 = c2->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float _g130 = (_g128 * _g129);		HX_STACK_VAR(_g130,"_g130");
							HX_STACK_LINE(1153)
							Float _g131 = (_g127 - _g130);		HX_STACK_VAR(_g131,"_g131");
							HX_STACK_LINE(1153)
							if (((_g124 < _g131))){
								HX_STACK_LINE(1154)
								x = -(x);
								HX_STACK_LINE(1155)
								y = -(y);
							}
							HX_STACK_LINE(1157)
							int _g132;		HX_STACK_VAR(_g132,"_g132");
							HX_STACK_LINE(1157)
							{
								HX_STACK_LINE(1158)
								int col = (int)255;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1159)
								int ncol = ~(int)(this->bg_col);		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1160)
								Float f = 0.7;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1161)
								int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1162)
								int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1163)
								int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1164)
								_g132 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
							}
							HX_STACK_LINE(1157)
							this->graphics->lineStyle(this->outer_zn->thickness,_g132,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1167)
							{
								HX_STACK_LINE(1168)
								Float _g133;		HX_STACK_VAR(_g133,"_g133");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									_g133 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1168)
								Float _g134;		HX_STACK_VAR(_g134,"_g134");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									_g134 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1168)
								Float _g135 = (_g134 * y);		HX_STACK_VAR(_g135,"_g135");
								HX_STACK_LINE(1168)
								Float _g136 = (_g133 + _g135);		HX_STACK_VAR(_g136,"_g136");
								HX_STACK_LINE(1168)
								Float _g137;		HX_STACK_VAR(_g137,"_g137");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									_g137 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1168)
								Float _g138 = (_g137 * x);		HX_STACK_VAR(_g138,"_g138");
								HX_STACK_LINE(1168)
								Float _g139 = (_g136 - _g138);		HX_STACK_VAR(_g139,"_g139");
								HX_STACK_LINE(1168)
								vx = _g139;
								HX_STACK_LINE(1169)
								Float _g140;		HX_STACK_VAR(_g140,"_g140");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									_g140 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1169)
								Float _g141;		HX_STACK_VAR(_g141,"_g141");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									_g141 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1169)
								Float _g142 = (_g141 * y);		HX_STACK_VAR(_g142,"_g142");
								HX_STACK_LINE(1169)
								Float _g143 = (_g140 + _g142);		HX_STACK_VAR(_g143,"_g143");
								HX_STACK_LINE(1169)
								Float _g144;		HX_STACK_VAR(_g144,"_g144");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									_g144 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1169)
								Float _g145 = (_g144 * x);		HX_STACK_VAR(_g145,"_g145");
								HX_STACK_LINE(1169)
								Float _g146 = (_g143 + _g145);		HX_STACK_VAR(_g146,"_g146");
								HX_STACK_LINE(1169)
								vy = _g146;
								HX_STACK_LINE(1178)
								{
								}
							}
							HX_STACK_LINE(1187)
							if ((!(xnull))){
								HX_STACK_LINE(1188)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1189)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1190)
								vx = t;
							}
							HX_STACK_LINE(1192)
							this->graphics->moveTo(vx,vy);
							HX_STACK_LINE(1193)
							{
								HX_STACK_LINE(1194)
								Float _g147;		HX_STACK_VAR(_g147,"_g147");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									_g147 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1194)
								Float _g148;		HX_STACK_VAR(_g148,"_g148");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									_g148 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1194)
								Float _g149 = (_g148 * y);		HX_STACK_VAR(_g149,"_g149");
								HX_STACK_LINE(1194)
								Float _g150 = (_g147 + _g149);		HX_STACK_VAR(_g150,"_g150");
								HX_STACK_LINE(1194)
								Float _g151;		HX_STACK_VAR(_g151,"_g151");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									_g151 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1194)
								Float _g152 = (_g151 * x);		HX_STACK_VAR(_g152,"_g152");
								HX_STACK_LINE(1194)
								Float _g153 = (_g150 + _g152);		HX_STACK_VAR(_g153,"_g153");
								HX_STACK_LINE(1194)
								vx = _g153;
								HX_STACK_LINE(1195)
								Float _g154;		HX_STACK_VAR(_g154,"_g154");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									_g154 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1195)
								Float _g155;		HX_STACK_VAR(_g155,"_g155");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									_g155 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1195)
								Float _g156 = (_g155 * y);		HX_STACK_VAR(_g156,"_g156");
								HX_STACK_LINE(1195)
								Float _g157 = (_g154 + _g156);		HX_STACK_VAR(_g157,"_g157");
								HX_STACK_LINE(1195)
								Float _g158;		HX_STACK_VAR(_g158,"_g158");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									_g158 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1195)
								Float _g159 = (_g158 * x);		HX_STACK_VAR(_g159,"_g159");
								HX_STACK_LINE(1195)
								Float _g160 = (_g157 - _g159);		HX_STACK_VAR(_g160,"_g160");
								HX_STACK_LINE(1195)
								vy = _g160;
								HX_STACK_LINE(1204)
								{
								}
							}
							HX_STACK_LINE(1213)
							if ((!(xnull))){
								HX_STACK_LINE(1214)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1215)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1216)
								vx = t;
							}
							HX_STACK_LINE(1218)
							this->graphics->lineTo(vx,vy);
							HX_STACK_LINE(1219)
							int _g161;		HX_STACK_VAR(_g161,"_g161");
							HX_STACK_LINE(1219)
							{
								HX_STACK_LINE(1220)
								int col = (int)16711680;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1221)
								int ncol = ~(int)(this->bg_col);		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1222)
								Float f = 0.7;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1223)
								int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1224)
								int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1225)
								int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1226)
								_g161 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
							}
							HX_STACK_LINE(1219)
							this->graphics->lineStyle(this->outer_zn->thickness,_g161,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1229)
							{
								HX_STACK_LINE(1230)
								Float _g162;		HX_STACK_VAR(_g162,"_g162");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									_g162 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1230)
								Float _g163;		HX_STACK_VAR(_g163,"_g163");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									_g163 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1230)
								Float _g164 = (_g163 * y);		HX_STACK_VAR(_g164,"_g164");
								HX_STACK_LINE(1230)
								Float _g165 = (_g162 - _g164);		HX_STACK_VAR(_g165,"_g165");
								HX_STACK_LINE(1230)
								Float _g166;		HX_STACK_VAR(_g166,"_g166");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									_g166 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1230)
								Float _g167 = (_g166 * x);		HX_STACK_VAR(_g167,"_g167");
								HX_STACK_LINE(1230)
								Float _g168 = (_g165 - _g167);		HX_STACK_VAR(_g168,"_g168");
								HX_STACK_LINE(1230)
								vx = _g168;
								HX_STACK_LINE(1231)
								Float _g169;		HX_STACK_VAR(_g169,"_g169");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									_g169 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1231)
								Float _g170;		HX_STACK_VAR(_g170,"_g170");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									_g170 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1231)
								Float _g171 = (_g170 * y);		HX_STACK_VAR(_g171,"_g171");
								HX_STACK_LINE(1231)
								Float _g172 = (_g169 - _g171);		HX_STACK_VAR(_g172,"_g172");
								HX_STACK_LINE(1231)
								Float _g173;		HX_STACK_VAR(_g173,"_g173");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									_g173 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1231)
								Float _g174 = (_g173 * x);		HX_STACK_VAR(_g174,"_g174");
								HX_STACK_LINE(1231)
								Float _g175 = (_g172 + _g174);		HX_STACK_VAR(_g175,"_g175");
								HX_STACK_LINE(1231)
								vy = _g175;
								HX_STACK_LINE(1240)
								{
								}
							}
							HX_STACK_LINE(1249)
							if ((!(xnull))){
								HX_STACK_LINE(1250)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1251)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1252)
								vx = t;
							}
							HX_STACK_LINE(1254)
							this->graphics->moveTo(vx,vy);
							HX_STACK_LINE(1255)
							{
								HX_STACK_LINE(1256)
								Float _g176;		HX_STACK_VAR(_g176,"_g176");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									_g176 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1256)
								Float _g177;		HX_STACK_VAR(_g177,"_g177");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									_g177 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1256)
								Float _g178 = (_g177 * y);		HX_STACK_VAR(_g178,"_g178");
								HX_STACK_LINE(1256)
								Float _g179 = (_g176 - _g178);		HX_STACK_VAR(_g179,"_g179");
								HX_STACK_LINE(1256)
								Float _g180;		HX_STACK_VAR(_g180,"_g180");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									_g180 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1256)
								Float _g181 = (_g180 * x);		HX_STACK_VAR(_g181,"_g181");
								HX_STACK_LINE(1256)
								Float _g182 = (_g179 + _g181);		HX_STACK_VAR(_g182,"_g182");
								HX_STACK_LINE(1256)
								vx = _g182;
								HX_STACK_LINE(1257)
								Float _g183;		HX_STACK_VAR(_g183,"_g183");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									_g183 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1257)
								Float _g184;		HX_STACK_VAR(_g184,"_g184");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									_g184 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1257)
								Float _g185 = (_g184 * y);		HX_STACK_VAR(_g185,"_g185");
								HX_STACK_LINE(1257)
								Float _g186 = (_g183 - _g185);		HX_STACK_VAR(_g186,"_g186");
								HX_STACK_LINE(1257)
								Float _g187;		HX_STACK_VAR(_g187,"_g187");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									_g187 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1257)
								Float _g188 = (_g187 * x);		HX_STACK_VAR(_g188,"_g188");
								HX_STACK_LINE(1257)
								Float _g189 = (_g186 - _g188);		HX_STACK_VAR(_g189,"_g189");
								HX_STACK_LINE(1257)
								vy = _g189;
								HX_STACK_LINE(1266)
								{
								}
							}
							HX_STACK_LINE(1275)
							if ((!(xnull))){
								HX_STACK_LINE(1276)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1277)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1278)
								vx = t;
							}
							HX_STACK_LINE(1280)
							this->graphics->lineTo(vx,vy);
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1282)
								Float _g190;		HX_STACK_VAR(_g190,"_g190");
								HX_STACK_LINE(1282)
								{
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									_g190 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1282)
								Float _g191;		HX_STACK_VAR(_g191,"_g191");
								HX_STACK_LINE(1282)
								{
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									_g191 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1282)
								Float _g192 = (_g190 + _g191);		HX_STACK_VAR(_g192,"_g192");
								HX_STACK_LINE(1282)
								Float _g193 = (0.5 * _g192);		HX_STACK_VAR(_g193,"_g193");
								HX_STACK_LINE(1282)
								px = _g193;
								HX_STACK_LINE(1283)
								Float _g194;		HX_STACK_VAR(_g194,"_g194");
								HX_STACK_LINE(1283)
								{
									HX_STACK_LINE(1283)
									{
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1283)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1283)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1283)
									_g194 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1283)
								Float _g195;		HX_STACK_VAR(_g195,"_g195");
								HX_STACK_LINE(1283)
								{
									HX_STACK_LINE(1283)
									{
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1283)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1283)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1283)
									_g195 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1283)
								Float _g196 = (_g194 + _g195);		HX_STACK_VAR(_g196,"_g196");
								HX_STACK_LINE(1283)
								Float _g197 = (0.5 * _g196);		HX_STACK_VAR(_g197,"_g197");
								HX_STACK_LINE(1283)
								py = _g197;
								HX_STACK_LINE(1292)
								{
								}
							}
							HX_STACK_LINE(1301)
							if ((!(xnull))){
								HX_STACK_LINE(1302)
								Float t = (((xform->a * px) + (xform->b * py)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1303)
								py = (((xform->c * px) + (xform->d * py)) + xform->ty);
								HX_STACK_LINE(1304)
								px = t;
							}
						}
						else{
							HX_STACK_LINE(1308)
							{
								HX_STACK_LINE(1309)
								Float _g198;		HX_STACK_VAR(_g198,"_g198");
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1309)
									{
										struct _Function_9_1{
											inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1309,0xeecbde16)
												{
													HX_STACK_LINE(1309)
													if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
														HX_STACK_LINE(1309)
														carb->zpp_inner->colarb->setupcontacts();
													}
													HX_STACK_LINE(1309)
													return carb->zpp_inner->colarb->wrap_contacts;
												}
												return null();
											}
										};
										HX_STACK_LINE(1309)
										::nape::dynamics::Contact _this1 = (_Function_9_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1309)
										if (((_this1->zpp_inner->wrap_position == null()))){
											HX_STACK_LINE(1309)
											_this1->zpp_inner->getposition();
										}
										HX_STACK_LINE(1309)
										_this = _this1->zpp_inner->wrap_position;
									}
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1309)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(1309)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1309)
									_g198 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(1309)
								px = _g198;
								HX_STACK_LINE(1310)
								Float _g199;		HX_STACK_VAR(_g199,"_g199");
								HX_STACK_LINE(1310)
								{
									HX_STACK_LINE(1310)
									::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1310)
									{
										struct _Function_9_1{
											inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Debug.hx",1310,0xeecbde16)
												{
													HX_STACK_LINE(1310)
													if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
														HX_STACK_LINE(1310)
														carb->zpp_inner->colarb->setupcontacts();
													}
													HX_STACK_LINE(1310)
													return carb->zpp_inner->colarb->wrap_contacts;
												}
												return null();
											}
										};
										HX_STACK_LINE(1310)
										::nape::dynamics::Contact _this1 = (_Function_9_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1310)
										if (((_this1->zpp_inner->wrap_position == null()))){
											HX_STACK_LINE(1310)
											_this1->zpp_inner->getposition();
										}
										HX_STACK_LINE(1310)
										_this = _this1->zpp_inner->wrap_position;
									}
									HX_STACK_LINE(1310)
									{
										HX_STACK_LINE(1310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1310)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(1310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1310)
									_g199 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(1310)
								py = _g199;
								HX_STACK_LINE(1319)
								{
								}
							}
							HX_STACK_LINE(1328)
							if ((!(xnull))){
								HX_STACK_LINE(1329)
								Float t = (((xform->a * px) + (xform->b * py)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1330)
								py = (((xform->c * px) + (xform->d * py)) + xform->ty);
								HX_STACK_LINE(1331)
								px = t;
							}
							HX_STACK_LINE(1333)
							int _g200;		HX_STACK_VAR(_g200,"_g200");
							HX_STACK_LINE(1333)
							{
								HX_STACK_LINE(1334)
								int col = (int)16711935;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1335)
								int ncol = ~(int)(this->bg_col);		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1336)
								Float f = 0.7;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1337)
								int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1338)
								int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1339)
								int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1340)
								_g200 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
							}
							HX_STACK_LINE(1333)
							this->graphics->lineStyle(this->outer_zn->thickness,_g200,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1343)
							this->graphics->drawCircle(px,py,(int)1);
						}
						HX_STACK_LINE(1345)
						int _g201;		HX_STACK_VAR(_g201,"_g201");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1346)
							int col = ~(int)(this->bg_col);		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(1347)
							int ncol = this->bg_col;		HX_STACK_VAR(ncol,"ncol");
							HX_STACK_LINE(1348)
							Float f = 0.7;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1349)
							int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(1350)
							int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1351)
							int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
							HX_STACK_LINE(1352)
							_g201 = (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
						}
						HX_STACK_LINE(1345)
						this->graphics->lineStyle(this->outer_zn->thickness,_g201,(int)1,null(),null(),null(),null(),null());
						HX_STACK_LINE(1355)
						this->graphics->moveTo(px,py);
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1357)
							Float _g202;		HX_STACK_VAR(_g202,"_g202");
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									if (((carb->zpp_inner->colarb->wrap_normal == null()))){
										HX_STACK_LINE(1357)
										carb->zpp_inner->colarb->getnormal();
									}
									HX_STACK_LINE(1357)
									_this = carb->zpp_inner->colarb->wrap_normal;
								}
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1357)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(1357)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1357)
								_g202 = _this->zpp_inner->x;
							}
							HX_STACK_LINE(1357)
							Float _g203 = (_g202 * (int)5);		HX_STACK_VAR(_g203,"_g203");
							HX_STACK_LINE(1357)
							vx = _g203;
							HX_STACK_LINE(1358)
							Float _g204;		HX_STACK_VAR(_g204,"_g204");
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									if (((carb->zpp_inner->colarb->wrap_normal == null()))){
										HX_STACK_LINE(1358)
										carb->zpp_inner->colarb->getnormal();
									}
									HX_STACK_LINE(1358)
									_this = carb->zpp_inner->colarb->wrap_normal;
								}
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1358)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(1358)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1358)
								_g204 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(1358)
							Float _g205 = (_g204 * (int)5);		HX_STACK_VAR(_g205,"_g205");
							HX_STACK_LINE(1358)
							vy = _g205;
							HX_STACK_LINE(1367)
							{
							}
						}
						HX_STACK_LINE(1376)
						if ((!(xnull))){
							HX_STACK_LINE(1377)
							Float t = ((xform->a * vx) + (xform->b * vy));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1378)
							vy = ((xform->c * vx) + (xform->d * vy));
							HX_STACK_LINE(1379)
							vx = t;
						}
						HX_STACK_LINE(1381)
						this->graphics->lineTo((px + vx),(py + vy));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_arbiter,(void))


ZPP_ShapeDebug_obj::ZPP_ShapeDebug_obj()
{
}

void ZPP_ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ShapeDebug);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(compoundstack,"compoundstack");
	HX_MARK_MEMBER_NAME(shapeList,"shapeList");
	HX_MARK_MEMBER_NAME(bodyList,"bodyList");
	::zpp_nape::util::ZPP_Debug_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(compoundstack,"compoundstack");
	HX_VISIT_MEMBER_NAME(shapeList,"shapeList");
	HX_VISIT_MEMBER_NAME(bodyList,"bodyList");
	::zpp_nape::util::ZPP_Debug_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"setbg") ) { return setbg_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"bodyList") ) { return bodyList; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { return shapeList; }
		if (HX_FIELD_EQ(inName,"draw_body") ) { return draw_body_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_space") ) { return draw_space_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_shape") ) { return draw_shape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"draw_arbiter") ) { return draw_arbiter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compoundstack") ) { return compoundstack; }
		if (HX_FIELD_EQ(inName,"draw_compound") ) { return draw_compound_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::_v2::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bodyList") ) { bodyList=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { shapeList=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compoundstack") ) { compoundstack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zn"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("compoundstack"));
	outFields->push(HX_CSTRING("shapeList"));
	outFields->push(HX_CSTRING("bodyList"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(ZPP_ShapeDebug_obj,outer_zn),HX_CSTRING("outer_zn")},
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(ZPP_ShapeDebug_obj,shape),HX_CSTRING("shape")},
	{hx::fsObject /*::openfl::_v2::display::Graphics*/ ,(int)offsetof(ZPP_ShapeDebug_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Compound*/ ,(int)offsetof(ZPP_ShapeDebug_obj,compoundstack),HX_CSTRING("compoundstack")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_ShapeDebug_obj,shapeList),HX_CSTRING("shapeList")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_ShapeDebug_obj,bodyList),HX_CSTRING("bodyList")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zn"),
	HX_CSTRING("shape"),
	HX_CSTRING("graphics"),
	HX_CSTRING("setbg"),
	HX_CSTRING("compoundstack"),
	HX_CSTRING("draw_compound"),
	HX_CSTRING("shapeList"),
	HX_CSTRING("bodyList"),
	HX_CSTRING("draw_space"),
	HX_CSTRING("draw_body"),
	HX_CSTRING("draw_shape"),
	HX_CSTRING("draw_arbiter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

#endif

Class ZPP_ShapeDebug_obj::__mClass;

void ZPP_ShapeDebug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_ShapeDebug"), hx::TCanCast< ZPP_ShapeDebug_obj> ,sStaticFields,sMemberFields,
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

void ZPP_ShapeDebug_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
