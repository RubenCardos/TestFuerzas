#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
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
namespace nape{
namespace space{

Void Space_obj::__construct(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{
HX_STACK_FRAME("nape.space.Space","new",0xca3d1b6a,"nape.space.Space.new","nape/space/Space.hx",177,0x769bc808)
HX_STACK_THIS(this)
HX_STACK_ARG(gravity,"gravity")
HX_STACK_ARG(broadphase,"broadphase")
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(544)
	::zpp_nape::space::ZPP_Space _g = ::zpp_nape::space::ZPP_Space_obj::__new((  (((gravity == null()))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(gravity->zpp_inner) ),broadphase);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(544)
	this->zpp_inner = _g;
	HX_STACK_LINE(545)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(546)
	if (((gravity != null()))){
		HX_STACK_LINE(546)
		if ((gravity->zpp_inner->weak)){
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(550)
				gravity->zpp_inner->outer = null();
				HX_STACK_LINE(550)
				gravity->zpp_inner = null();
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(550)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						if (((o->outer != null()))){
							HX_STACK_LINE(550)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(550)
							o->outer = null();
						}
						HX_STACK_LINE(550)
						o->_isimmutable = null();
						HX_STACK_LINE(550)
						o->_validate = null();
						HX_STACK_LINE(550)
						o->_invalidate = null();
					}
					HX_STACK_LINE(550)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(551)
			true;
		}
		else{
			HX_STACK_LINE(554)
			false;
		}
	}
}
;
	return null();
}

//Space_obj::~Space_obj() { }

Dynamic Space_obj::__CreateEmpty() { return  new Space_obj; }
hx::ObjectPtr< Space_obj > Space_obj::__new(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{  hx::ObjectPtr< Space_obj > result = new Space_obj();
	result->__construct(gravity,broadphase);
	return result;}

Dynamic Space_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Space_obj > result = new Space_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic Space_obj::get_userData( ){
	HX_STACK_FRAME("nape.space.Space","get_userData",0x3f404dd4,"nape.space.Space.get_userData","nape/space/Space.hx",195,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",197,0x769bc808)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_userData,return )

::nape::geom::Vec2 Space_obj::get_gravity( ){
	HX_STACK_FRAME("nape.space.Space","get_gravity",0x5014336f,"nape.space.Space.get_gravity","nape/space/Space.hx",209,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	if (((this->zpp_inner->wrap_gravity == null()))){
		HX_STACK_LINE(210)
		this->zpp_inner->getgravity();
	}
	HX_STACK_LINE(211)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_gravity,return )

::nape::geom::Vec2 Space_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_FRAME("nape.space.Space","set_gravity",0x5a813a7b,"nape.space.Space.set_gravity","nape/space/Space.hx",213,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			if (((this->zpp_inner->wrap_gravity == null()))){
				HX_STACK_LINE(223)
				this->zpp_inner->getgravity();
			}
			HX_STACK_LINE(223)
			_this = this->zpp_inner->wrap_gravity;
		}
		HX_STACK_LINE(223)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				x = gravity->zpp_inner->x;
			}
			HX_STACK_LINE(223)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				y = gravity->zpp_inner->y;
			}
			HX_STACK_LINE(223)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",223,0x769bc808)
					{
						HX_STACK_LINE(223)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							{
								HX_STACK_LINE(223)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(223)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(223)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(223)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(223)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(223)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(223)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(223)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(223)
			ret = _this;
		}
		HX_STACK_LINE(223)
		if ((gravity->zpp_inner->weak)){
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(223)
				gravity->zpp_inner->outer = null();
				HX_STACK_LINE(223)
				gravity->zpp_inner = null();
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(223)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(223)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						if (((o->outer != null()))){
							HX_STACK_LINE(223)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(223)
							o->outer = null();
						}
						HX_STACK_LINE(223)
						o->_isimmutable = null();
						HX_STACK_LINE(223)
						o->_validate = null();
						HX_STACK_LINE(223)
						o->_invalidate = null();
					}
					HX_STACK_LINE(223)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(223)
			true;
		}
		else{
			HX_STACK_LINE(223)
			false;
		}
		HX_STACK_LINE(223)
		ret;
	}
	HX_STACK_LINE(225)
	if (((this->zpp_inner->wrap_gravity == null()))){
		HX_STACK_LINE(225)
		this->zpp_inner->getgravity();
	}
	HX_STACK_LINE(225)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_gravity,return )

::nape::space::Broadphase Space_obj::get_broadphase( ){
	HX_STACK_FRAME("nape.space.Space","get_broadphase",0x9161c338,"nape.space.Space.get_broadphase","nape/space/Space.hx",233,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	if ((this->zpp_inner->bphase->is_sweep)){
		HX_STACK_LINE(233)
		if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(233)
			::nape::space::Broadphase _g = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = _g;
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(233)
		return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
	}
	else{
		HX_STACK_LINE(233)
		if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(233)
			::nape::space::Broadphase _g1 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = _g1;
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(233)
		return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_broadphase,return )

bool Space_obj::get_sortContacts( ){
	HX_STACK_FRAME("nape.space.Space","get_sortContacts",0x856c4690,"nape.space.Space.get_sortContacts","nape/space/Space.hx",254,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	return this->zpp_inner->sortcontacts;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_sortContacts,return )

bool Space_obj::set_sortContacts( bool sortContacts){
	HX_STACK_FRAME("nape.space.Space","set_sortContacts",0xdbae3404,"nape.space.Space.set_sortContacts","nape/space/Space.hx",256,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sortContacts,"sortContacts")
	HX_STACK_LINE(258)
	this->zpp_inner->sortcontacts = sortContacts;
	HX_STACK_LINE(260)
	return this->zpp_inner->sortcontacts;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_sortContacts,return )

Float Space_obj::get_worldAngularDrag( ){
	HX_STACK_FRAME("nape.space.Space","get_worldAngularDrag",0x1b380d83,"nape.space.Space.get_worldAngularDrag","nape/space/Space.hx",273,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	return this->zpp_inner->global_ang_drag;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldAngularDrag,return )

Float Space_obj::set_worldAngularDrag( Float worldAngularDrag){
	HX_STACK_FRAME("nape.space.Space","set_worldAngularDrag",0xe7efc4f7,"nape.space.Space.set_worldAngularDrag","nape/space/Space.hx",275,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(worldAngularDrag,"worldAngularDrag")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(277)
		Float d = worldAngularDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(281)
		this->zpp_inner->global_ang_drag = d;
	}
	HX_STACK_LINE(283)
	return this->zpp_inner->global_ang_drag;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldAngularDrag,return )

Float Space_obj::get_worldLinearDrag( ){
	HX_STACK_FRAME("nape.space.Space","get_worldLinearDrag",0x00d4c38c,"nape.space.Space.get_worldLinearDrag","nape/space/Space.hx",296,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return this->zpp_inner->global_lin_drag;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldLinearDrag,return )

Float Space_obj::set_worldLinearDrag( Float worldLinearDrag){
	HX_STACK_FRAME("nape.space.Space","set_worldLinearDrag",0x3d71b698,"nape.space.Space.set_worldLinearDrag","nape/space/Space.hx",298,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(worldLinearDrag,"worldLinearDrag")
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(300)
		Float d = worldLinearDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(304)
		this->zpp_inner->global_lin_drag = d;
	}
	HX_STACK_LINE(306)
	return this->zpp_inner->global_lin_drag;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldLinearDrag,return )

::nape::phys::CompoundList Space_obj::get_compounds( ){
	HX_STACK_FRAME("nape.space.Space","get_compounds",0xaea44a09,"nape.space.Space.get_compounds","nape/space/Space.hx",320,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	return this->zpp_inner->wrap_compounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_compounds,return )

::nape::phys::BodyList Space_obj::get_bodies( ){
	HX_STACK_FRAME("nape.space.Space","get_bodies",0x8403157f,"nape.space.Space.get_bodies","nape/space/Space.hx",334,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	return this->zpp_inner->wrap_bodies;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_bodies,return )

::nape::phys::BodyList Space_obj::get_liveBodies( ){
	HX_STACK_FRAME("nape.space.Space","get_liveBodies",0xb25d0d0b,"nape.space.Space.get_liveBodies","nape/space/Space.hx",346,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(346)
	return this->zpp_inner->wrap_live;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveBodies,return )

::nape::constraint::ConstraintList Space_obj::get_constraints( ){
	HX_STACK_FRAME("nape.space.Space","get_constraints",0x7a48bb17,"nape.space.Space.get_constraints","nape/space/Space.hx",360,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_constraints,return )

::nape::constraint::ConstraintList Space_obj::get_liveConstraints( ){
	HX_STACK_FRAME("nape.space.Space","get_liveConstraints",0xc965e80b,"nape.space.Space.get_liveConstraints","nape/space/Space.hx",372,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	return this->zpp_inner->wrap_livecon;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveConstraints,return )

Void Space_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitBodies",0x367958b5,"nape.space.Space.visitBodies","nape/space/Space.hx",383,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::nape::phys::BodyIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::nape::phys::BodyList _this = this->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(387)
				_g = ::nape::phys::BodyIterator_obj::get(_this);
			}
			HX_STACK_LINE(387)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::BodyIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",387,0x769bc808)
						{
							HX_STACK_LINE(387)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(387)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(387)
							{
								HX_STACK_LINE(387)
								::nape::phys::BodyList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(387)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(387)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(387)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(387)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(387)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(387)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::BodyIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",387,0x769bc808)
									{
										HX_STACK_LINE(387)
										{
											HX_STACK_LINE(387)
											_g->zpp_next = ::nape::phys::BodyIterator_obj::zpp_pool;
											HX_STACK_LINE(387)
											::nape::phys::BodyIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(387)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(387)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(387)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(387)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(387)
					break;
				}
				HX_STACK_LINE(387)
				::nape::phys::Body b;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					_g->zpp_critical = false;
					HX_STACK_LINE(387)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(387)
					b = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(387)
				lambda(b).Cast< Void >();
			}
		}
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(388)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(388)
				_g = ::nape::phys::CompoundIterator_obj::get(_this);
			}
			HX_STACK_LINE(388)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",388,0x769bc808)
						{
							HX_STACK_LINE(388)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(388)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(388)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(388)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(388)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(388)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(388)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(388)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",388,0x769bc808)
									{
										HX_STACK_LINE(388)
										{
											HX_STACK_LINE(388)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(388)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(388)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(388)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(388)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(388)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(388)
					break;
				}
				HX_STACK_LINE(388)
				::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					_g->zpp_critical = false;
					HX_STACK_LINE(388)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(388)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(388)
				c->visitBodies(lambda);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitBodies,(void))

Void Space_obj::visitConstraints( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitConstraints",0x9c851421,"nape.space.Space.visitConstraints","nape/space/Space.hx",399,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			::nape::constraint::ConstraintIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				::nape::constraint::ConstraintList _this = this->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(403)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(403)
				_g = ::nape::constraint::ConstraintIterator_obj::get(_this);
			}
			HX_STACK_LINE(403)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",403,0x769bc808)
						{
							HX_STACK_LINE(403)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(403)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(403)
							{
								HX_STACK_LINE(403)
								::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(403)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(403)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(403)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(403)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(403)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(403)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",403,0x769bc808)
									{
										HX_STACK_LINE(403)
										{
											HX_STACK_LINE(403)
											_g->zpp_next = ::nape::constraint::ConstraintIterator_obj::zpp_pool;
											HX_STACK_LINE(403)
											::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(403)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(403)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(403)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(403)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(403)
				::nape::constraint::Constraint c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					_g->zpp_critical = false;
					HX_STACK_LINE(403)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(403)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(403)
				lambda(c).Cast< Void >();
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(404)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(404)
				_g = ::nape::phys::CompoundIterator_obj::get(_this);
			}
			HX_STACK_LINE(404)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",404,0x769bc808)
						{
							HX_STACK_LINE(404)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(404)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(404)
							{
								HX_STACK_LINE(404)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(404)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(404)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(404)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(404)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(404)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(404)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",404,0x769bc808)
									{
										HX_STACK_LINE(404)
										{
											HX_STACK_LINE(404)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(404)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(404)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(404)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(404)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(404)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(404)
					break;
				}
				HX_STACK_LINE(404)
				::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					_g->zpp_critical = false;
					HX_STACK_LINE(404)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(404)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(404)
				c->visitConstraints(lambda);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitConstraints,(void))

Void Space_obj::visitCompounds( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitCompounds",0xd6eb6c93,"nape.space.Space.visitCompounds","nape/space/Space.hx",419,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(419)
		::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(419)
			_g = ::nape::phys::CompoundIterator_obj::get(_this);
		}
		HX_STACK_LINE(419)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( ::nape::phys::CompoundIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",419,0x769bc808)
					{
						HX_STACK_LINE(419)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(419)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(419)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(419)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(419)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(419)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(419)
						_g->zpp_critical = true;
						struct _Function_3_1{
							inline static bool Block( ::nape::phys::CompoundIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",419,0x769bc808)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
										HX_STACK_LINE(419)
										::nape::phys::CompoundIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(419)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(419)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			if ((!(_Function_2_1::Block(_g)))){
				HX_STACK_LINE(419)
				break;
			}
			HX_STACK_LINE(419)
			::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				_g->zpp_critical = false;
				HX_STACK_LINE(419)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(419)
				c = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(420)
			lambda(c).Cast< Void >();
			HX_STACK_LINE(421)
			c->visitCompounds(lambda);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitCompounds,(void))

::nape::phys::Body Space_obj::get_world( ){
	HX_STACK_FRAME("nape.space.Space","get_world",0x1a582133,"nape.space.Space.get_world","nape/space/Space.hx",437,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	return this->zpp_inner->__static;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_world,return )

::nape::dynamics::ArbiterList Space_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.space.Space","get_arbiters",0x5bc9e429,"nape.space.Space.get_arbiters","nape/space/Space.hx",446,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(447)
	if (((this->zpp_inner->wrap_arbiters == null()))){
		HX_STACK_LINE(448)
		::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(449)
		ret->space = this->zpp_inner;
		HX_STACK_LINE(450)
		this->zpp_inner->wrap_arbiters = ret;
	}
	HX_STACK_LINE(452)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_arbiters,return )

::nape::callbacks::ListenerList Space_obj::get_listeners( ){
	HX_STACK_FRAME("nape.space.Space","get_listeners",0x8e3774e0,"nape.space.Space.get_listeners","nape/space/Space.hx",463,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	return this->zpp_inner->wrap_listeners;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_listeners,return )

Void Space_obj::clear( ){
{
		HX_STACK_FRAME("nape.space.Space","clear",0x57751317,"nape.space.Space.clear","nape/space/Space.hx",479,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(479)
		this->zpp_inner->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,clear,(void))

Void Space_obj::step( Float deltaTime,hx::Null< int >  __o_velocityIterations,hx::Null< int >  __o_positionIterations){
int velocityIterations = __o_velocityIterations.Default(10);
int positionIterations = __o_positionIterations.Default(10);
	HX_STACK_FRAME("nape.space.Space","step",0x2e944502,"nape.space.Space.step","nape/space/Space.hx",508,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(velocityIterations,"velocityIterations")
	HX_STACK_ARG(positionIterations,"positionIterations")
{
		HX_STACK_LINE(508)
		this->zpp_inner->step(deltaTime,velocityIterations,positionIterations);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,step,(void))

int Space_obj::get_timeStamp( ){
	HX_STACK_FRAME("nape.space.Space","get_timeStamp",0xd3a55417,"nape.space.Space.get_timeStamp","nape/space/Space.hx",518,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	return this->zpp_inner->stamp;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_timeStamp,return )

Float Space_obj::get_elapsedTime( ){
	HX_STACK_FRAME("nape.space.Space","get_elapsedTime",0x2961c80a,"nape.space.Space.get_elapsedTime","nape/space/Space.hx",528,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(528)
	return this->zpp_inner->time;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_elapsedTime,return )

::nape::callbacks::InteractionType Space_obj::interactionType( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_FRAME("nape.space.Space","interactionType",0xaa7b59b6,"nape.space.Space.interactionType","nape/space/Space.hx",578,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(585)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(585)
		return null();
	}
	HX_STACK_LINE(586)
	if (((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == ((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))))){
		HX_STACK_LINE(586)
		return null();
	}
	HX_STACK_LINE(587)
	::zpp_nape::shape::ZPP_Shape s1 = shape1->zpp_inner;		HX_STACK_VAR(s1,"s1");
	HX_STACK_LINE(588)
	::zpp_nape::shape::ZPP_Shape s2 = shape2->zpp_inner;		HX_STACK_VAR(s2,"s2");
	HX_STACK_LINE(589)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(589)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(589)
		bool con_ignore;		HX_STACK_VAR(con_ignore,"con_ignore");
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			con_ignore = false;
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = b1->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(589)
				while((true)){
					HX_STACK_LINE(589)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(589)
						break;
					}
					HX_STACK_LINE(589)
					::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
					HX_STACK_LINE(589)
					if (((  ((con->ignore)) ? bool(con->pair_exists(b1->id,b2->id)) : bool(false) ))){
						HX_STACK_LINE(589)
						con_ignore = true;
						HX_STACK_LINE(589)
						break;
					}
					HX_STACK_LINE(589)
					cx_ite = cx_ite->next;
				}
			}
		}
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
				{
					HX_STACK_LINE(589)
					::zpp_nape::dynamics::ZPP_InteractionGroup g1;		HX_STACK_VAR(g1,"g1");
					HX_STACK_LINE(589)
					{
						HX_STACK_LINE(589)
						::zpp_nape::phys::ZPP_Interactor cur = s1;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(589)
						while((true)){
							HX_STACK_LINE(589)
							if ((!(((bool((cur != null())) && bool((cur->group == null()))))))){
								HX_STACK_LINE(589)
								break;
							}
							HX_STACK_LINE(589)
							if (((cur->ishape != null()))){
								HX_STACK_LINE(589)
								cur = cur->ishape->body;
							}
							else{
								HX_STACK_LINE(589)
								if (((cur->icompound != null()))){
									HX_STACK_LINE(589)
									cur = cur->icompound->compound;
								}
								else{
									HX_STACK_LINE(589)
									cur = cur->ibody->compound;
								}
							}
						}
						HX_STACK_LINE(589)
						if (((cur == null()))){
							HX_STACK_LINE(589)
							g1 = null();
						}
						else{
							HX_STACK_LINE(589)
							g1 = cur->group;
						}
					}
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_InteractionGroup &g1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
							{
								HX_STACK_LINE(589)
								::zpp_nape::dynamics::ZPP_InteractionGroup g2;		HX_STACK_VAR(g2,"g2");
								HX_STACK_LINE(589)
								{
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Interactor cur = s2;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(589)
									while((true)){
										HX_STACK_LINE(589)
										if ((!(((bool((cur != null())) && bool((cur->group == null()))))))){
											HX_STACK_LINE(589)
											break;
										}
										HX_STACK_LINE(589)
										if (((cur->ishape != null()))){
											HX_STACK_LINE(589)
											cur = cur->ishape->body;
										}
										else{
											HX_STACK_LINE(589)
											if (((cur->icompound != null()))){
												HX_STACK_LINE(589)
												cur = cur->icompound->compound;
											}
											else{
												HX_STACK_LINE(589)
												cur = cur->ibody->compound;
											}
										}
									}
									HX_STACK_LINE(589)
									if (((cur == null()))){
										HX_STACK_LINE(589)
										g2 = null();
									}
									else{
										HX_STACK_LINE(589)
										g2 = cur->group;
									}
								}
								struct _Function_4_1{
									inline static bool Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &g1,::zpp_nape::dynamics::ZPP_InteractionGroup &g2){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
										{
											HX_STACK_LINE(589)
											bool ret = false;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(589)
											while((true)){
												HX_STACK_LINE(589)
												if ((!(((bool((g1 != null())) && bool((g2 != null()))))))){
													HX_STACK_LINE(589)
													break;
												}
												HX_STACK_LINE(589)
												if (((g1 == g2))){
													HX_STACK_LINE(589)
													ret = g1->ignore;
													HX_STACK_LINE(589)
													break;
												}
												HX_STACK_LINE(589)
												if (((g1->depth < g2->depth))){
													HX_STACK_LINE(589)
													g2 = g2->group;
												}
												else{
													HX_STACK_LINE(589)
													g1 = g1->group;
												}
											}
											HX_STACK_LINE(589)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(589)
								return (  (((g2 == null()))) ? bool(false) : bool(_Function_4_1::Block(g1,g2)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(589)
					return (  (((g1 == null()))) ? bool(false) : bool(_Function_3_1::Block(s2,g1)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(589)
		if (((  ((!(con_ignore))) ? bool(!(_Function_2_1::Block(s2,s1))) : bool(false) ))){
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
					{
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(589)
						return (bool((((int(_this->sensorMask) & int(x->sensorGroup))) != (int)0)) && bool((((int(x->sensorMask) & int(_this->sensorGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(589)
			if (((bool(((bool(s1->sensorEnabled) || bool(s2->sensorEnabled)))) && bool(_Function_3_1::Block(s2,s1))))){
				HX_STACK_LINE(589)
				_g = (int)2;
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
						{
							HX_STACK_LINE(589)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(589)
							::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(589)
							return (bool((((int(_this->fluidMask) & int(x->fluidGroup))) != (int)0)) && bool((((int(x->fluidMask) & int(_this->fluidGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(589)
				if (((bool((bool(((bool(s1->fluidEnabled) || bool(s2->fluidEnabled)))) && bool(_Function_4_1::Block(s2,s1)))) && bool(!(((bool((bool((bool((b1->imass == (int)0)) && bool((b2->imass == (int)0)))) && bool((b1->iinertia == (int)0)))) && bool((b2->iinertia == (int)0))))))))){
					HX_STACK_LINE(589)
					_g = (int)0;
				}
				else{
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",589,0x769bc808)
							{
								HX_STACK_LINE(589)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(589)
								::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(589)
								return (bool((((int(_this->collisionMask) & int(x->collisionGroup))) != (int)0)) && bool((((int(x->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(589)
					if (((bool(_Function_5_1::Block(s2,s1)) && bool(!(((bool((bool((bool((b1->imass == (int)0)) && bool((b2->imass == (int)0)))) && bool((b1->iinertia == (int)0)))) && bool((b2->iinertia == (int)0))))))))){
						HX_STACK_LINE(589)
						_g = (int)1;
					}
					else{
						HX_STACK_LINE(589)
						_g = (int)-1;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(589)
			_g = (int)-1;
		}
	}
	HX_STACK_LINE(589)
	switch( (int)(_g)){
		case (int)0: {
			HX_STACK_LINE(590)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
				HX_STACK_LINE(590)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(590)
				::nape::callbacks::InteractionType _g1 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(590)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = _g1;
				HX_STACK_LINE(590)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(590)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(591)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
				HX_STACK_LINE(591)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(591)
				::nape::callbacks::InteractionType _g1 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(591)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g1;
				HX_STACK_LINE(591)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(591)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(592)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(592)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(592)
				::nape::callbacks::InteractionType _g2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(592)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g2;
				HX_STACK_LINE(592)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(592)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		;break;
		default: {
			HX_STACK_LINE(593)
			return null();
		}
	}
	HX_STACK_LINE(589)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Space_obj,interactionType,return )

::nape::shape::ShapeList Space_obj::shapesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("nape.space.Space","shapesUnderPoint",0x226603a0,"nape.space.Space.shapesUnderPoint","nape/space/Space.hx",610,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(619)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(619)
				_this->_validate();
			}
		}
		HX_STACK_LINE(619)
		_g = point->zpp_inner->x;
	}
	HX_STACK_LINE(619)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(619)
				_this->_validate();
			}
		}
		HX_STACK_LINE(619)
		_g1 = point->zpp_inner->y;
	}
	HX_STACK_LINE(619)
	::nape::shape::ShapeList ret = this->zpp_inner->shapesUnderPoint(_g,_g1,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(620)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(624)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(624)
			point->zpp_inner = null();
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(624)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(624)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					if (((o->outer != null()))){
						HX_STACK_LINE(624)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(624)
						o->outer = null();
					}
					HX_STACK_LINE(624)
					o->_isimmutable = null();
					HX_STACK_LINE(624)
					o->_validate = null();
					HX_STACK_LINE(624)
					o->_invalidate = null();
				}
				HX_STACK_LINE(624)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(625)
		true;
	}
	else{
		HX_STACK_LINE(628)
		false;
	}
	HX_STACK_LINE(631)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesUnderPoint,return )

::nape::phys::BodyList Space_obj::bodiesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("nape.space.Space","bodiesUnderPoint",0x5ad9326e,"nape.space.Space.bodiesUnderPoint","nape/space/Space.hx",647,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(656)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g = point->zpp_inner->x;
	}
	HX_STACK_LINE(656)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		_g1 = point->zpp_inner->y;
	}
	HX_STACK_LINE(656)
	::nape::phys::BodyList ret = this->zpp_inner->bodiesUnderPoint(_g,_g1,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(657)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(661)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(661)
			point->zpp_inner = null();
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(661)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(661)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					if (((o->outer != null()))){
						HX_STACK_LINE(661)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(661)
						o->outer = null();
					}
					HX_STACK_LINE(661)
					o->_isimmutable = null();
					HX_STACK_LINE(661)
					o->_validate = null();
					HX_STACK_LINE(661)
					o->_invalidate = null();
				}
				HX_STACK_LINE(661)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(662)
		true;
	}
	else{
		HX_STACK_LINE(665)
		false;
	}
	HX_STACK_LINE(668)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesUnderPoint,return )

::nape::shape::ShapeList Space_obj::shapesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_FRAME("nape.space.Space","shapesInAABB",0x7e82208d,"nape.space.Space.shapesInAABB","nape/space/Space.hx",695,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(695)
		return this->zpp_inner->shapesInAABB(aabb,strict,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInAABB,return )

::nape::phys::BodyList Space_obj::bodiesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_FRAME("nape.space.Space","bodiesInAABB",0x2326505b,"nape.space.Space.bodiesInAABB","nape/space/Space.hx",723,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(723)
		return this->zpp_inner->bodiesInAABB(aabb,strict,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInAABB,return )

::nape::shape::ShapeList Space_obj::shapesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","shapesInCircle",0xb046b15d,"nape.space.Space.shapesInCircle","nape/space/Space.hx",744,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(755)
		::nape::shape::ShapeList ret = this->zpp_inner->shapesInCircle(position,radius,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(756)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(760)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(760)
				position->zpp_inner = null();
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(760)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(760)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						if (((o->outer != null()))){
							HX_STACK_LINE(760)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(760)
							o->outer = null();
						}
						HX_STACK_LINE(760)
						o->_isimmutable = null();
						HX_STACK_LINE(760)
						o->_validate = null();
						HX_STACK_LINE(760)
						o->_invalidate = null();
					}
					HX_STACK_LINE(760)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(761)
			true;
		}
		else{
			HX_STACK_LINE(764)
			false;
		}
		HX_STACK_LINE(767)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInCircle,return )

::nape::phys::BodyList Space_obj::bodiesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","bodiesInCircle",0xea30f0ab,"nape.space.Space.bodiesInCircle","nape/space/Space.hx",791,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(802)
		::nape::phys::BodyList ret = this->zpp_inner->bodiesInCircle(position,radius,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(803)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(807)
			{
				HX_STACK_LINE(807)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(807)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(807)
				position->zpp_inner = null();
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(807)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(807)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(807)
					{
						HX_STACK_LINE(807)
						if (((o->outer != null()))){
							HX_STACK_LINE(807)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(807)
							o->outer = null();
						}
						HX_STACK_LINE(807)
						o->_isimmutable = null();
						HX_STACK_LINE(807)
						o->_validate = null();
						HX_STACK_LINE(807)
						o->_invalidate = null();
					}
					HX_STACK_LINE(807)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(808)
			true;
		}
		else{
			HX_STACK_LINE(811)
			false;
		}
		HX_STACK_LINE(814)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInCircle,return )

::nape::shape::ShapeList Space_obj::shapesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","shapesInShape",0xaa6fcc74,"nape.space.Space.shapesInShape","nape/space/Space.hx",847,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(847)
		return this->zpp_inner->shapesInShape(shape->zpp_inner,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,shapesInShape,return )

::nape::phys::BodyList Space_obj::bodiesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","bodiesInShape",0x157570e6,"nape.space.Space.bodiesInShape","nape/space/Space.hx",879,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(879)
		return this->zpp_inner->bodiesInShape(shape->zpp_inner,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,bodiesInShape,return )

::nape::shape::ShapeList Space_obj::shapesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("nape.space.Space","shapesInBody",0x7f4e5caf,"nape.space.Space.shapesInBody","nape/space/Space.hx",898,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(902)
	::nape::shape::ShapeList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(902)
	if (((output == null()))){
		HX_STACK_LINE(902)
		ret = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(902)
		ret = output;
	}
	HX_STACK_LINE(903)
	{
		HX_STACK_LINE(903)
		::nape::shape::ShapeIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(903)
		{
			HX_STACK_LINE(903)
			::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(903)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(903)
			_g = ::nape::shape::ShapeIterator_obj::get(_this);
		}
		HX_STACK_LINE(903)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::shape::ShapeIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",903,0x769bc808)
					{
						HX_STACK_LINE(903)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(903)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(903)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(903)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(903)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(903)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(903)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(903)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::shape::ShapeIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",903,0x769bc808)
								{
									HX_STACK_LINE(903)
									{
										HX_STACK_LINE(903)
										_g->zpp_next = ::nape::shape::ShapeIterator_obj::zpp_pool;
										HX_STACK_LINE(903)
										::nape::shape::ShapeIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(903)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(903)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(903)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(903)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(903)
				break;
			}
			HX_STACK_LINE(903)
			::nape::shape::Shape shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				_g->zpp_critical = false;
				HX_STACK_LINE(903)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(903)
				shape = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(904)
			::nape::shape::ShapeList cur = this->shapesInShape(shape,false,filter,ret);		HX_STACK_VAR(cur,"cur");
		}
	}
	HX_STACK_LINE(906)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesInBody,return )

::nape::phys::BodyList Space_obj::bodiesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("nape.space.Space","bodiesInBody",0x23f28c7d,"nape.space.Space.bodiesInBody","nape/space/Space.hx",924,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(928)
	::nape::phys::BodyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(928)
	if (((output == null()))){
		HX_STACK_LINE(928)
		ret = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(928)
		ret = output;
	}
	HX_STACK_LINE(929)
	{
		HX_STACK_LINE(929)
		::nape::shape::ShapeIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(929)
		{
			HX_STACK_LINE(929)
			::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(929)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(929)
			_g = ::nape::shape::ShapeIterator_obj::get(_this);
		}
		HX_STACK_LINE(929)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::shape::ShapeIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",929,0x769bc808)
					{
						HX_STACK_LINE(929)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(929)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(929)
						{
							HX_STACK_LINE(929)
							::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(929)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(929)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(929)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(929)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(929)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(929)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::shape::ShapeIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",929,0x769bc808)
								{
									HX_STACK_LINE(929)
									{
										HX_STACK_LINE(929)
										_g->zpp_next = ::nape::shape::ShapeIterator_obj::zpp_pool;
										HX_STACK_LINE(929)
										::nape::shape::ShapeIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(929)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(929)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(929)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(929)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(929)
				break;
			}
			HX_STACK_LINE(929)
			::nape::shape::Shape shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(929)
			{
				HX_STACK_LINE(929)
				_g->zpp_critical = false;
				HX_STACK_LINE(929)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(929)
				shape = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(930)
			::nape::phys::BodyList cur = this->bodiesInShape(shape,false,filter,ret);		HX_STACK_VAR(cur,"cur");
		}
	}
	HX_STACK_LINE(932)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesInBody,return )

::nape::geom::ConvexResult Space_obj::convexCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_FRAME("nape.space.Space","convexCast",0x715d8bfc,"nape.space.Space.convexCast","nape/space/Space.hx",967,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(liveSweep,"liveSweep")
	HX_STACK_ARG(filter,"filter")
{
		HX_STACK_LINE(967)
		return this->zpp_inner->convexCast(shape->zpp_inner,deltaTime,filter,liveSweep);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,convexCast,return )

::nape::geom::ConvexResultList Space_obj::convexMultiCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter,::nape::geom::ConvexResultList output){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_FRAME("nape.space.Space","convexMultiCast",0x0e887b7b,"nape.space.Space.convexMultiCast","nape/space/Space.hx",1002,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(liveSweep,"liveSweep")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1002)
		return this->zpp_inner->convexMultiCast(shape->zpp_inner,deltaTime,filter,liveSweep,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,convexMultiCast,return )

::nape::geom::RayResult Space_obj::rayCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter){
bool inner = __o_inner.Default(false);
	HX_STACK_FRAME("nape.space.Space","rayCast",0x6728f5d3,"nape.space.Space.rayCast","nape/space/Space.hx",1027,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
{
		HX_STACK_LINE(1027)
		return this->zpp_inner->rayCast(ray,inner,filter);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,rayCast,return )

::nape::geom::RayResultList Space_obj::rayMultiCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter,::nape::geom::RayResultList output){
bool inner = __o_inner.Default(false);
	HX_STACK_FRAME("nape.space.Space","rayMultiCast",0xa87b0644,"nape.space.Space.rayMultiCast","nape/space/Space.hx",1052,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1052)
		return this->zpp_inner->rayMultiCast(ray,inner,filter,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,rayMultiCast,return )


Space_obj::Space_obj()
{
}

void Space_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Space);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Space_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Space_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return get_bodies(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return get_gravity(); }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return get_arbiters(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"compounds") ) { return get_compounds(); }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return get_listeners(); }
		if (HX_FIELD_EQ(inName,"timeStamp") ) { return get_timeStamp(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return get_broadphase(); }
		if (HX_FIELD_EQ(inName,"get_bodies") ) { return get_bodies_dyn(); }
		if (HX_FIELD_EQ(inName,"liveBodies") ) { return get_liveBodies(); }
		if (HX_FIELD_EQ(inName,"convexCast") ) { return convexCast_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return get_constraints(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return get_elapsedTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		if (HX_FIELD_EQ(inName,"sortContacts") ) { return get_sortContacts(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInBody") ) { return shapesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInBody") ) { return bodiesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_compounds") ) { return get_compounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listeners") ) { return get_listeners_dyn(); }
		if (HX_FIELD_EQ(inName,"get_timeStamp") ) { return get_timeStamp_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_broadphase") ) { return get_broadphase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_liveBodies") ) { return get_liveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"visitCompounds") ) { return visitCompounds_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { return get_worldLinearDrag(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"liveConstraints") ) { return get_liveConstraints(); }
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return get_elapsedTime_dyn(); }
		if (HX_FIELD_EQ(inName,"interactionType") ) { return interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"convexMultiCast") ) { return convexMultiCast_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_sortContacts") ) { return get_sortContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sortContacts") ) { return set_sortContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { return get_worldAngularDrag(); }
		if (HX_FIELD_EQ(inName,"visitConstraints") ) { return visitConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_worldLinearDrag") ) { return get_worldLinearDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_worldLinearDrag") ) { return set_worldLinearDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_liveConstraints") ) { return get_liveConstraints_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_worldAngularDrag") ) { return get_worldAngularDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_worldAngularDrag") ) { return set_worldAngularDrag_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Space_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return set_gravity(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sortContacts") ) { return set_sortContacts(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { return set_worldLinearDrag(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { return set_worldAngularDrag(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Space_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("broadphase"));
	outFields->push(HX_CSTRING("sortContacts"));
	outFields->push(HX_CSTRING("worldAngularDrag"));
	outFields->push(HX_CSTRING("worldLinearDrag"));
	outFields->push(HX_CSTRING("compounds"));
	outFields->push(HX_CSTRING("bodies"));
	outFields->push(HX_CSTRING("liveBodies"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("liveConstraints"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("timeStamp"));
	outFields->push(HX_CSTRING("elapsedTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(Space_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_broadphase"),
	HX_CSTRING("get_sortContacts"),
	HX_CSTRING("set_sortContacts"),
	HX_CSTRING("get_worldAngularDrag"),
	HX_CSTRING("set_worldAngularDrag"),
	HX_CSTRING("get_worldLinearDrag"),
	HX_CSTRING("set_worldLinearDrag"),
	HX_CSTRING("get_compounds"),
	HX_CSTRING("get_bodies"),
	HX_CSTRING("get_liveBodies"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("get_liveConstraints"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("visitConstraints"),
	HX_CSTRING("visitCompounds"),
	HX_CSTRING("get_world"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("get_listeners"),
	HX_CSTRING("clear"),
	HX_CSTRING("step"),
	HX_CSTRING("get_timeStamp"),
	HX_CSTRING("get_elapsedTime"),
	HX_CSTRING("interactionType"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("shapesInBody"),
	HX_CSTRING("bodiesInBody"),
	HX_CSTRING("convexCast"),
	HX_CSTRING("convexMultiCast"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("rayMultiCast"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

#endif

Class Space_obj::__mClass;

void Space_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.space.Space"), hx::TCanCast< Space_obj> ,sStaticFields,sMemberFields,
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

void Space_obj::__boot()
{
}

} // end namespace nape
} // end namespace space
