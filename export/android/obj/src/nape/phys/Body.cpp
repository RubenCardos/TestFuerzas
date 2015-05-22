#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
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
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
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
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
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
namespace nape{
namespace phys{

Void Body_obj::__construct(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{
HX_STACK_FRAME("nape.phys.Body","new",0x6578e0ca,"nape.phys.Body.new","nape/phys/Body.hx",177,0xcb2bb586)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(position,"position")
{
	HX_STACK_LINE(189)
	this->debugDraw = true;
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(465)
	super::__construct();
	HX_STACK_LINE(467)
	::zpp_nape::phys::ZPP_Body _g = ::zpp_nape::phys::ZPP_Body_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(467)
	this->zpp_inner = _g;
	HX_STACK_LINE(468)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(469)
	this->zpp_inner->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(470)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(471)
	if (((position != null()))){
		HX_STACK_LINE(478)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		{
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(478)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(478)
					_this->_validate();
				}
			}
			HX_STACK_LINE(478)
			_g1 = position->zpp_inner->x;
		}
		HX_STACK_LINE(478)
		this->zpp_inner->posx = _g1;
		HX_STACK_LINE(479)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			{
				HX_STACK_LINE(479)
				::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(479)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(479)
					_this->_validate();
				}
			}
			HX_STACK_LINE(479)
			_g2 = position->zpp_inner->y;
		}
		HX_STACK_LINE(479)
		this->zpp_inner->posy = _g2;
		HX_STACK_LINE(488)
		{
		}
	}
	else{
		HX_STACK_LINE(499)
		this->zpp_inner->posx = (int)0;
		HX_STACK_LINE(500)
		this->zpp_inner->posy = (int)0;
		HX_STACK_LINE(509)
		{
		}
	}
	HX_STACK_LINE(518)
	{
		HX_STACK_LINE(518)
		::nape::phys::BodyType type1;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(518)
		if (((type == null()))){
			HX_STACK_LINE(518)
			if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
				HX_STACK_LINE(518)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(518)
				::nape::phys::BodyType _g3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(518)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g3;
				HX_STACK_LINE(518)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(518)
			type1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		else{
			HX_STACK_LINE(518)
			type1 = type;
		}
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
			HX_STACK_LINE(518)
			if (((::zpp_nape::phys::ZPP_Body_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >() != type1))){
				HX_STACK_LINE(518)
				::nape::phys::BodyType _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::nape::phys::BodyType _g4 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g4;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					_g5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				HX_STACK_LINE(518)
				int ntype;		HX_STACK_VAR(ntype,"ntype");
				HX_STACK_LINE(518)
				if (((type1 == _g5))){
					HX_STACK_LINE(518)
					ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;
				}
				else{
					HX_STACK_LINE(518)
					::nape::phys::BodyType _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::nape::phys::BodyType _g6 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = _g6;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						_g7 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					HX_STACK_LINE(518)
					if (((type1 == _g7))){
						HX_STACK_LINE(518)
						ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;
					}
					else{
						HX_STACK_LINE(518)
						ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;
					}
				}
				HX_STACK_LINE(518)
				if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						this->zpp_inner->velx = (int)0;
						HX_STACK_LINE(518)
						this->zpp_inner->vely = (int)0;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					this->zpp_inner->angvel = (int)0;
				}
				HX_STACK_LINE(518)
				this->zpp_inner->invalidate_type();
				HX_STACK_LINE(518)
				if (((this->zpp_inner->space != null()))){
					HX_STACK_LINE(518)
					this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
				}
				else{
					HX_STACK_LINE(518)
					this->zpp_inner->type = ntype;
				}
			}
		}
		HX_STACK_LINE(518)
		::zpp_nape::phys::ZPP_Body_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
	}
	HX_STACK_LINE(519)
	if (((position != null()))){
		HX_STACK_LINE(519)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(523)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(523)
				position->zpp_inner = null();
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(523)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(523)
						if (((o->outer != null()))){
							HX_STACK_LINE(523)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(523)
							o->outer = null();
						}
						HX_STACK_LINE(523)
						o->_isimmutable = null();
						HX_STACK_LINE(523)
						o->_validate = null();
						HX_STACK_LINE(523)
						o->_invalidate = null();
					}
					HX_STACK_LINE(523)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(524)
			true;
		}
		else{
			HX_STACK_LINE(527)
			false;
		}
	}
	HX_STACK_LINE(530)
	this->zpp_inner_i->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY->zpp_inner);
}
;
	return null();
}

//Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(type,position);
	return result;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::phys::BodyType Body_obj::get_type( ){
	HX_STACK_FRAME("nape.phys.Body","get_type",0xb918dd99,"nape.phys.Body.get_type","nape/phys/Body.hx",198,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return ::zpp_nape::phys::ZPP_Body_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_type,return )

::nape::phys::BodyType Body_obj::set_type( ::nape::phys::BodyType type){
	HX_STACK_FRAME("nape.phys.Body","set_type",0x6776370d,"nape.phys.Body.set_type","nape/phys/Body.hx",200,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
		HX_STACK_LINE(206)
		if (((::zpp_nape::phys::ZPP_Body_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >() != type))){
			HX_STACK_LINE(210)
			::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			HX_STACK_LINE(210)
			int ntype;		HX_STACK_VAR(ntype,"ntype");
			HX_STACK_LINE(210)
			if (((type == _g1))){
				HX_STACK_LINE(210)
				ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;
			}
			else{
				HX_STACK_LINE(210)
				::nape::phys::BodyType _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(210)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(210)
						::nape::phys::BodyType _g2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = _g2;
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(210)
					_g3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				HX_STACK_LINE(210)
				if (((type == _g3))){
					HX_STACK_LINE(210)
					ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;
				}
				else{
					HX_STACK_LINE(210)
					ntype = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;
				}
			}
			HX_STACK_LINE(211)
			if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(213)
					this->zpp_inner->velx = (int)0;
					HX_STACK_LINE(214)
					this->zpp_inner->vely = (int)0;
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(232)
				this->zpp_inner->angvel = (int)0;
			}
			HX_STACK_LINE(234)
			this->zpp_inner->invalidate_type();
			HX_STACK_LINE(235)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(235)
				this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
			}
			else{
				HX_STACK_LINE(236)
				this->zpp_inner->type = ntype;
			}
		}
	}
	HX_STACK_LINE(239)
	return ::zpp_nape::phys::ZPP_Body_obj::types->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_type,return )

bool Body_obj::get_isBullet( ){
	HX_STACK_FRAME("nape.phys.Body","get_isBullet",0x76a2742b,"nape.phys.Body.get_isBullet","nape/phys/Body.hx",260,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isBullet,return )

bool Body_obj::set_isBullet( bool isBullet){
	HX_STACK_FRAME("nape.phys.Body","set_isBullet",0x8b9b979f,"nape.phys.Body.set_isBullet","nape/phys/Body.hx",262,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(isBullet,"isBullet")
	HX_STACK_LINE(264)
	this->zpp_inner->bulletEnabled = isBullet;
	HX_STACK_LINE(266)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_isBullet,return )

bool Body_obj::get_disableCCD( ){
	HX_STACK_FRAME("nape.phys.Body","get_disableCCD",0xefa9a4db,"nape.phys.Body.get_disableCCD","nape/phys/Body.hx",279,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_disableCCD,return )

bool Body_obj::set_disableCCD( bool disableCCD){
	HX_STACK_FRAME("nape.phys.Body","set_disableCCD",0x0fc98d4f,"nape.phys.Body.set_disableCCD","nape/phys/Body.hx",281,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(disableCCD,"disableCCD")
	HX_STACK_LINE(283)
	this->zpp_inner->disableCCD = disableCCD;
	HX_STACK_LINE(285)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_disableCCD,return )

::nape::phys::Body Body_obj::integrate( Float deltaTime){
	HX_STACK_FRAME("nape.phys.Body","integrate",0xca94aa5b,"nape.phys.Body.integrate","nape/phys/Body.hx",295,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_LINE(299)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
	HX_STACK_LINE(303)
	if (((deltaTime == (int)0))){
		HX_STACK_LINE(303)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body cur = this->zpp_inner;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(305)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(306)
	cur->sweep_angvel = cur->angvel;
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		Float delta = (deltaTime - cur->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(307)
		if (((delta != (int)0))){
			HX_STACK_LINE(307)
			cur->sweepTime = deltaTime;
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(307)
				hx::AddEq(cur->posx,(cur->velx * t));
				HX_STACK_LINE(307)
				hx::AddEq(cur->posy,(cur->vely * t));
			}
			HX_STACK_LINE(307)
			if (((cur->angvel != (int)0))){
				HX_STACK_LINE(307)
				Float dr = (cur->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(307)
				hx::AddEq(cur->rot,dr);
				HX_STACK_LINE(307)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(307)
					Float _g = ::Math_obj::sin(cur->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(307)
					cur->axisx = _g;
					HX_STACK_LINE(307)
					Float _g1 = ::Math_obj::cos(cur->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(307)
					cur->axisy = _g1;
					HX_STACK_LINE(307)
					Dynamic();
				}
				else{
					HX_STACK_LINE(307)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(307)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(307)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(307)
					Float nx = ((((p * cur->axisx) + (dr * cur->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(307)
					cur->axisy = ((((p * cur->axisy) - (dr * cur->axisx))) * m);
					HX_STACK_LINE(307)
					cur->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(308)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(308)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(308)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(308)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(308)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		cur->zip_axis = true;
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(309)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(309)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(309)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(309)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(309)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(310)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(311)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,integrate,return )

bool Body_obj::isStatic( ){
	HX_STACK_FRAME("nape.phys.Body","isStatic",0x4abaa78e,"nape.phys.Body.isStatic","nape/phys/Body.hx",320,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isStatic,return )

bool Body_obj::isDynamic( ){
	HX_STACK_FRAME("nape.phys.Body","isDynamic",0x1848589f,"nape.phys.Body.isDynamic","nape/phys/Body.hx",329,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isDynamic,return )

bool Body_obj::isKinematic( ){
	HX_STACK_FRAME("nape.phys.Body","isKinematic",0xc32aba25,"nape.phys.Body.isKinematic","nape/phys/Body.hx",338,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(338)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isKinematic,return )

::nape::shape::ShapeList Body_obj::get_shapes( ){
	HX_STACK_FRAME("nape.phys.Body","get_shapes",0x9d317ad1,"nape.phys.Body.get_shapes","nape/phys/Body.hx",350,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_shapes,return )

::nape::phys::Compound Body_obj::get_compound( ){
	HX_STACK_FRAME("nape.phys.Body","get_compound",0xcb7809ca,"nape.phys.Body.get_compound","nape/phys/Body.hx",364,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(364)
		return null();
	}
	else{
		HX_STACK_LINE(364)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(364)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_compound,return )

::nape::phys::Compound Body_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.phys.Body","set_compound",0xe0712d3e,"nape.phys.Body.set_compound","nape/phys/Body.hx",366,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(368)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(369)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(369)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(370)
		if (((compound != null()))){
			HX_STACK_LINE(370)
			::nape::phys::BodyList _this = compound->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(370)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(370)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(370)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(373)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(373)
		return null();
	}
	else{
		HX_STACK_LINE(373)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(373)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_compound,return )

::nape::space::Space Body_obj::get_space( ){
	HX_STACK_FRAME("nape.phys.Body","get_space",0xa3442507,"nape.phys.Body.get_space","nape/phys/Body.hx",386,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(386)
		return null();
	}
	else{
		HX_STACK_LINE(386)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(386)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_space,return )

::nape::space::Space Body_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.phys.Body","set_space",0x86951113,"nape.phys.Body.set_space","nape/phys/Body.hx",388,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(393)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
		HX_STACK_LINE(397)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(398)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(398)
				this->zpp_inner->component->woken = false;
			}
			HX_STACK_LINE(399)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(399)
				((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(400)
			if (((space != null()))){
				HX_STACK_LINE(400)
				::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(400)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(400)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(400)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(403)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(403)
		return null();
	}
	else{
		HX_STACK_LINE(403)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(403)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_space,return )

::nape::dynamics::ArbiterList Body_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.phys.Body","get_arbiters",0x6b5a72c9,"nape.phys.Body.get_arbiters","nape/phys/Body.hx",412,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	if (((this->zpp_inner->wrap_arbiters == null()))){
		HX_STACK_LINE(413)
		::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(413)
		this->zpp_inner->wrap_arbiters = _g;
	}
	HX_STACK_LINE(414)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_arbiters,return )

bool Body_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.phys.Body","get_isSleeping",0xc4504654,"nape.phys.Body.get_isSleeping","nape/phys/Body.hx",432,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(432)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isSleeping,return )

::nape::constraint::ConstraintList Body_obj::get_constraints( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraints",0xcac71077,"nape.phys.Body.get_constraints","nape/phys/Body.hx",443,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(444)
	if (((this->zpp_inner->wrap_constraints == null()))){
		HX_STACK_LINE(444)
		::nape::constraint::ConstraintList _g = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(444)
		this->zpp_inner->wrap_constraints = _g;
	}
	HX_STACK_LINE(445)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraints,return )

::nape::phys::Body Body_obj::copy( ){
	HX_STACK_FRAME("nape.phys.Body","copy",0x5d0e080b,"nape.phys.Body.copy","nape/phys/Body.hx",547,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(547)
	return this->zpp_inner->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,copy,return )

::nape::geom::Vec2 Body_obj::get_position( ){
	HX_STACK_FRAME("nape.phys.Body","get_position",0x14a2e708,"nape.phys.Body.get_position","nape/phys/Body.hx",565,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(566)
	if (((this->zpp_inner->wrap_pos == null()))){
		HX_STACK_LINE(566)
		this->zpp_inner->setupPosition();
	}
	HX_STACK_LINE(567)
	return this->zpp_inner->wrap_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_position,return )

::nape::geom::Vec2 Body_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_FRAME("nape.phys.Body","set_position",0x299c0a7c,"nape.phys.Body.set_position","nape/phys/Body.hx",569,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(579)
	{
		HX_STACK_LINE(579)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			if (((this->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(579)
				this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(579)
			_this = this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(579)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(579)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(579)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(579)
				x = position->zpp_inner->x;
			}
			HX_STACK_LINE(579)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(579)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(579)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(579)
				y = position->zpp_inner->y;
			}
			HX_STACK_LINE(579)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(579)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(579)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(579)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",579,0xcb2bb586)
					{
						HX_STACK_LINE(579)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(579)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(579)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(579)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(579)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(579)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(579)
					{
					}
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(579)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(579)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(579)
			ret = _this;
		}
		HX_STACK_LINE(579)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(579)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(579)
				position->zpp_inner = null();
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(579)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(579)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						if (((o->outer != null()))){
							HX_STACK_LINE(579)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(579)
							o->outer = null();
						}
						HX_STACK_LINE(579)
						o->_isimmutable = null();
						HX_STACK_LINE(579)
						o->_validate = null();
						HX_STACK_LINE(579)
						o->_invalidate = null();
					}
					HX_STACK_LINE(579)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(579)
			true;
		}
		else{
			HX_STACK_LINE(579)
			false;
		}
		HX_STACK_LINE(579)
		ret;
	}
	HX_STACK_LINE(581)
	if (((this->zpp_inner->wrap_pos == null()))){
		HX_STACK_LINE(581)
		this->zpp_inner->setupPosition();
	}
	HX_STACK_LINE(581)
	return this->zpp_inner->wrap_pos;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_position,return )

::nape::geom::Vec2 Body_obj::get_velocity( ){
	HX_STACK_FRAME("nape.phys.Body","get_velocity",0x68a6487c,"nape.phys.Body.get_velocity","nape/phys/Body.hx",594,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	if (((this->zpp_inner->wrap_vel == null()))){
		HX_STACK_LINE(595)
		this->zpp_inner->setupVelocity();
	}
	HX_STACK_LINE(596)
	return this->zpp_inner->wrap_vel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_velocity,return )

::nape::geom::Vec2 Body_obj::set_velocity( ::nape::geom::Vec2 velocity){
	HX_STACK_FRAME("nape.phys.Body","set_velocity",0x7d9f6bf0,"nape.phys.Body.set_velocity","nape/phys/Body.hx",598,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(velocity,"velocity")
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(608)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(608)
		{
			HX_STACK_LINE(608)
			if (((this->zpp_inner->wrap_vel == null()))){
				HX_STACK_LINE(608)
				this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(608)
			_this = this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(608)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(608)
		{
			HX_STACK_LINE(608)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(608)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(608)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(608)
				x = velocity->zpp_inner->x;
			}
			HX_STACK_LINE(608)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(608)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(608)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(608)
				y = velocity->zpp_inner->y;
			}
			HX_STACK_LINE(608)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(608)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(608)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(608)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",608,0xcb2bb586)
					{
						HX_STACK_LINE(608)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(608)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(608)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(608)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(608)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(608)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(608)
					{
					}
				}
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(608)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(608)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(608)
			ret = _this;
		}
		HX_STACK_LINE(608)
		if ((velocity->zpp_inner->weak)){
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(608)
				velocity->zpp_inner->outer = null();
				HX_STACK_LINE(608)
				velocity->zpp_inner = null();
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(608)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(608)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						if (((o->outer != null()))){
							HX_STACK_LINE(608)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(608)
							o->outer = null();
						}
						HX_STACK_LINE(608)
						o->_isimmutable = null();
						HX_STACK_LINE(608)
						o->_validate = null();
						HX_STACK_LINE(608)
						o->_invalidate = null();
					}
					HX_STACK_LINE(608)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(608)
			true;
		}
		else{
			HX_STACK_LINE(608)
			false;
		}
		HX_STACK_LINE(608)
		ret;
	}
	HX_STACK_LINE(610)
	if (((this->zpp_inner->wrap_vel == null()))){
		HX_STACK_LINE(610)
		this->zpp_inner->setupVelocity();
	}
	HX_STACK_LINE(610)
	return this->zpp_inner->wrap_vel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_velocity,return )

::nape::phys::Body Body_obj::setVelocityFromTarget( ::nape::geom::Vec2 targetPosition,Float targetRotation,Float deltaTime){
	HX_STACK_FRAME("nape.phys.Body","setVelocityFromTarget",0x4d9f6804,"nape.phys.Body.setVelocityFromTarget","nape/phys/Body.hx",629,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetPosition,"targetPosition")
	HX_STACK_ARG(targetRotation,"targetRotation")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_LINE(639)
	Float idt = (Float((int)1) / Float(deltaTime));		HX_STACK_VAR(idt,"idt");
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(640)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			if (((this->zpp_inner->wrap_vel == null()))){
				HX_STACK_LINE(640)
				this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(640)
			_this = this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(640)
		::nape::geom::Vec2 _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			if (((this->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(640)
				this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(640)
			_g = this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(640)
		::nape::geom::Vec2 vector = targetPosition->sub(_g,true)->muleq(idt);		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(640)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(640)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(640)
				x = vector->zpp_inner->x;
			}
			HX_STACK_LINE(640)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(640)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(640)
				y = vector->zpp_inner->y;
			}
			HX_STACK_LINE(640)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(640)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(640)
				_g1 = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",640,0xcb2bb586)
					{
						HX_STACK_LINE(640)
						Float _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							{
								HX_STACK_LINE(640)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(640)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(640)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(640)
							_g2 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(640)
						return (_g2 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(640)
			if ((!(((  (((_g1 == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(640)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(640)
					{
					}
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(640)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(640)
			ret = _this;
		}
		HX_STACK_LINE(640)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(640)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(640)
				vector->zpp_inner = null();
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(640)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						if (((o->outer != null()))){
							HX_STACK_LINE(640)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(640)
							o->outer = null();
						}
						HX_STACK_LINE(640)
						o->_isimmutable = null();
						HX_STACK_LINE(640)
						o->_validate = null();
						HX_STACK_LINE(640)
						o->_invalidate = null();
					}
					HX_STACK_LINE(640)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(640)
			true;
		}
		else{
			HX_STACK_LINE(640)
			false;
		}
		HX_STACK_LINE(640)
		ret;
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(641)
		Float angularVel = (((targetRotation - this->zpp_inner->rot)) * idt);		HX_STACK_VAR(angularVel,"angularVel");
		HX_STACK_LINE(641)
		if (((this->zpp_inner->angvel != angularVel))){
			HX_STACK_LINE(641)
			this->zpp_inner->angvel = angularVel;
			HX_STACK_LINE(641)
			this->zpp_inner->wake();
		}
		HX_STACK_LINE(641)
		this->zpp_inner->angvel;
	}
	HX_STACK_LINE(642)
	if ((targetPosition->zpp_inner->weak)){
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 inner = targetPosition->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(646)
			targetPosition->zpp_inner->outer = null();
			HX_STACK_LINE(646)
			targetPosition->zpp_inner = null();
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::nape::geom::Vec2 o = targetPosition;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(646)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				{
					HX_STACK_LINE(646)
					if (((o->outer != null()))){
						HX_STACK_LINE(646)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(646)
						o->outer = null();
					}
					HX_STACK_LINE(646)
					o->_isimmutable = null();
					HX_STACK_LINE(646)
					o->_validate = null();
					HX_STACK_LINE(646)
					o->_invalidate = null();
				}
				HX_STACK_LINE(646)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(647)
		true;
	}
	else{
		HX_STACK_LINE(650)
		false;
	}
	HX_STACK_LINE(653)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,setVelocityFromTarget,return )

::nape::geom::Vec2 Body_obj::get_kinematicVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_kinematicVel",0x61163437,"nape.phys.Body.get_kinematicVel","nape/phys/Body.hx",669,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(670)
	if (((this->zpp_inner->wrap_kinvel == null()))){
		HX_STACK_LINE(670)
		this->zpp_inner->setupkinvel();
	}
	HX_STACK_LINE(671)
	return this->zpp_inner->wrap_kinvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinematicVel,return )

::nape::geom::Vec2 Body_obj::set_kinematicVel( ::nape::geom::Vec2 kinematicVel){
	HX_STACK_FRAME("nape.phys.Body","set_kinematicVel",0xb75821ab,"nape.phys.Body.set_kinematicVel","nape/phys/Body.hx",673,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kinematicVel,"kinematicVel")
	HX_STACK_LINE(683)
	{
		HX_STACK_LINE(683)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			if (((this->zpp_inner->wrap_kinvel == null()))){
				HX_STACK_LINE(683)
				this->zpp_inner->setupkinvel();
			}
			HX_STACK_LINE(683)
			_this = this->zpp_inner->wrap_kinvel;
		}
		HX_STACK_LINE(683)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(683)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(683)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(683)
				x = kinematicVel->zpp_inner->x;
			}
			HX_STACK_LINE(683)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(683)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(683)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(683)
				y = kinematicVel->zpp_inner->y;
			}
			HX_STACK_LINE(683)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(683)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(683)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(683)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",683,0xcb2bb586)
					{
						HX_STACK_LINE(683)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(683)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(683)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(683)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(683)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(683)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(683)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(683)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(683)
					{
					}
				}
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(683)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(683)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(683)
			ret = _this;
		}
		HX_STACK_LINE(683)
		if ((kinematicVel->zpp_inner->weak)){
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				::zpp_nape::geom::ZPP_Vec2 inner = kinematicVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(683)
				kinematicVel->zpp_inner->outer = null();
				HX_STACK_LINE(683)
				kinematicVel->zpp_inner = null();
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::nape::geom::Vec2 o = kinematicVel;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(683)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(683)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						if (((o->outer != null()))){
							HX_STACK_LINE(683)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(683)
							o->outer = null();
						}
						HX_STACK_LINE(683)
						o->_isimmutable = null();
						HX_STACK_LINE(683)
						o->_validate = null();
						HX_STACK_LINE(683)
						o->_invalidate = null();
					}
					HX_STACK_LINE(683)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(683)
			true;
		}
		else{
			HX_STACK_LINE(683)
			false;
		}
		HX_STACK_LINE(683)
		ret;
	}
	HX_STACK_LINE(685)
	if (((this->zpp_inner->wrap_kinvel == null()))){
		HX_STACK_LINE(685)
		this->zpp_inner->setupkinvel();
	}
	HX_STACK_LINE(685)
	return this->zpp_inner->wrap_kinvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinematicVel,return )

::nape::geom::Vec2 Body_obj::get_surfaceVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_surfaceVel",0x19286a4f,"nape.phys.Body.get_surfaceVel","nape/phys/Body.hx",701,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(702)
	if (((this->zpp_inner->wrap_svel == null()))){
		HX_STACK_LINE(702)
		this->zpp_inner->setupsvel();
	}
	HX_STACK_LINE(703)
	return this->zpp_inner->wrap_svel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_surfaceVel,return )

::nape::geom::Vec2 Body_obj::set_surfaceVel( ::nape::geom::Vec2 surfaceVel){
	HX_STACK_FRAME("nape.phys.Body","set_surfaceVel",0x394852c3,"nape.phys.Body.set_surfaceVel","nape/phys/Body.hx",705,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(surfaceVel,"surfaceVel")
	HX_STACK_LINE(715)
	{
		HX_STACK_LINE(715)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(715)
		{
			HX_STACK_LINE(715)
			if (((this->zpp_inner->wrap_svel == null()))){
				HX_STACK_LINE(715)
				this->zpp_inner->setupsvel();
			}
			HX_STACK_LINE(715)
			_this = this->zpp_inner->wrap_svel;
		}
		HX_STACK_LINE(715)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(715)
		{
			HX_STACK_LINE(715)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(715)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(715)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(715)
				x = surfaceVel->zpp_inner->x;
			}
			HX_STACK_LINE(715)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(715)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(715)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(715)
				y = surfaceVel->zpp_inner->y;
			}
			HX_STACK_LINE(715)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(715)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(715)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(715)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",715,0xcb2bb586)
					{
						HX_STACK_LINE(715)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(715)
						{
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(715)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(715)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(715)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(715)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(715)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(715)
					{
					}
				}
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(715)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(715)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(715)
			ret = _this;
		}
		HX_STACK_LINE(715)
		if ((surfaceVel->zpp_inner->weak)){
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				::zpp_nape::geom::ZPP_Vec2 inner = surfaceVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(715)
				surfaceVel->zpp_inner->outer = null();
				HX_STACK_LINE(715)
				surfaceVel->zpp_inner = null();
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::nape::geom::Vec2 o = surfaceVel;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(715)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(715)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						if (((o->outer != null()))){
							HX_STACK_LINE(715)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(715)
							o->outer = null();
						}
						HX_STACK_LINE(715)
						o->_isimmutable = null();
						HX_STACK_LINE(715)
						o->_validate = null();
						HX_STACK_LINE(715)
						o->_invalidate = null();
					}
					HX_STACK_LINE(715)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(715)
			true;
		}
		else{
			HX_STACK_LINE(715)
			false;
		}
		HX_STACK_LINE(715)
		ret;
	}
	HX_STACK_LINE(717)
	if (((this->zpp_inner->wrap_svel == null()))){
		HX_STACK_LINE(717)
		this->zpp_inner->setupsvel();
	}
	HX_STACK_LINE(717)
	return this->zpp_inner->wrap_svel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_surfaceVel,return )

::nape::geom::Vec2 Body_obj::get_force( ){
	HX_STACK_FRAME("nape.phys.Body","get_force",0x26724a2c,"nape.phys.Body.get_force","nape/phys/Body.hx",730,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(731)
	if (((this->zpp_inner->wrap_force == null()))){
		HX_STACK_LINE(731)
		this->zpp_inner->setupForce();
	}
	HX_STACK_LINE(732)
	return this->zpp_inner->wrap_force;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_force,return )

::nape::geom::Vec2 Body_obj::set_force( ::nape::geom::Vec2 force){
	HX_STACK_FRAME("nape.phys.Body","set_force",0x09c33638,"nape.phys.Body.set_force","nape/phys/Body.hx",734,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
	HX_STACK_LINE(744)
	{
		HX_STACK_LINE(744)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(744)
		{
			HX_STACK_LINE(744)
			if (((this->zpp_inner->wrap_force == null()))){
				HX_STACK_LINE(744)
				this->zpp_inner->setupForce();
			}
			HX_STACK_LINE(744)
			_this = this->zpp_inner->wrap_force;
		}
		HX_STACK_LINE(744)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(744)
		{
			HX_STACK_LINE(744)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(744)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(744)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(744)
				x = force->zpp_inner->x;
			}
			HX_STACK_LINE(744)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(744)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(744)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(744)
				y = force->zpp_inner->y;
			}
			HX_STACK_LINE(744)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(744)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(744)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(744)
				_g = _this->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",744,0xcb2bb586)
					{
						HX_STACK_LINE(744)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(744)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(744)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(744)
							_g1 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(744)
						return (_g1 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(744)
			if ((!(((  (((_g == x))) ? bool(_Function_3_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(744)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(744)
					{
					}
				}
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(744)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(744)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(744)
			ret = _this;
		}
		HX_STACK_LINE(744)
		if ((force->zpp_inner->weak)){
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				::zpp_nape::geom::ZPP_Vec2 inner = force->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(744)
				force->zpp_inner->outer = null();
				HX_STACK_LINE(744)
				force->zpp_inner = null();
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::nape::geom::Vec2 o = force;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(744)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(744)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(744)
					{
						HX_STACK_LINE(744)
						if (((o->outer != null()))){
							HX_STACK_LINE(744)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(744)
							o->outer = null();
						}
						HX_STACK_LINE(744)
						o->_isimmutable = null();
						HX_STACK_LINE(744)
						o->_validate = null();
						HX_STACK_LINE(744)
						o->_invalidate = null();
					}
					HX_STACK_LINE(744)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(744)
			true;
		}
		else{
			HX_STACK_LINE(744)
			false;
		}
		HX_STACK_LINE(744)
		ret;
	}
	HX_STACK_LINE(746)
	if (((this->zpp_inner->wrap_force == null()))){
		HX_STACK_LINE(746)
		this->zpp_inner->setupForce();
	}
	HX_STACK_LINE(746)
	return this->zpp_inner->wrap_force;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_force,return )

::nape::geom::Vec3 Body_obj::get_constraintVelocity( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintVelocity",0x30b476b9,"nape.phys.Body.get_constraintVelocity","nape/phys/Body.hx",756,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(757)
	if (((this->zpp_inner->wrapcvel == null()))){
		HX_STACK_LINE(757)
		this->zpp_inner->setup_cvel();
	}
	HX_STACK_LINE(758)
	return this->zpp_inner->wrapcvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintVelocity,return )

Float Body_obj::get_rotation( ){
	HX_STACK_FRAME("nape.phys.Body","get_rotation",0x522e839d,"nape.phys.Body.get_rotation","nape/phys/Body.hx",775,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_rotation,return )

Float Body_obj::set_rotation( Float rotation){
	HX_STACK_FRAME("nape.phys.Body","set_rotation",0x6727a711,"nape.phys.Body.set_rotation","nape/phys/Body.hx",777,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(779)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
		HX_STACK_LINE(786)
		if (((this->zpp_inner->rot != rotation))){
			HX_STACK_LINE(790)
			this->zpp_inner->rot = rotation;
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(791)
				_this->zip_axis = true;
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(791)
					while((true)){
						HX_STACK_LINE(791)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(791)
							break;
						}
						HX_STACK_LINE(791)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(791)
						{
							HX_STACK_LINE(791)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(791)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(791)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(791)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(791)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(791)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(792)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(795)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_rotation,return )

Float Body_obj::get_angularVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_angularVel",0x11a0c0ba,"nape.phys.Body.get_angularVel","nape/phys/Body.hx",807,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(807)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_angularVel,return )

Float Body_obj::set_angularVel( Float angularVel){
	HX_STACK_FRAME("nape.phys.Body","set_angularVel",0x31c0a92e,"nape.phys.Body.set_angularVel","nape/phys/Body.hx",809,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angularVel,"angularVel")
	HX_STACK_LINE(814)
	if (((this->zpp_inner->angvel != angularVel))){
		HX_STACK_LINE(821)
		this->zpp_inner->angvel = angularVel;
		HX_STACK_LINE(822)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(825)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_angularVel,return )

Float Body_obj::get_kinAngVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_kinAngVel",0x4002dd94,"nape.phys.Body.get_kinAngVel","nape/phys/Body.hx",842,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(842)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinAngVel,return )

Float Body_obj::set_kinAngVel( Float kinAngVel){
	HX_STACK_FRAME("nape.phys.Body","set_kinAngVel",0x8508bfa0,"nape.phys.Body.set_kinAngVel","nape/phys/Body.hx",844,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kinAngVel,"kinAngVel")
	HX_STACK_LINE(849)
	if (((this->zpp_inner->kinangvel != kinAngVel))){
		HX_STACK_LINE(853)
		this->zpp_inner->kinangvel = kinAngVel;
		HX_STACK_LINE(854)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(857)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinAngVel,return )

Float Body_obj::get_torque( ){
	HX_STACK_FRAME("nape.phys.Body","get_torque",0x16985769,"nape.phys.Body.get_torque","nape/phys/Body.hx",871,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(871)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_torque,return )

Float Body_obj::set_torque( Float torque){
	HX_STACK_FRAME("nape.phys.Body","set_torque",0x1a15f5dd,"nape.phys.Body.set_torque","nape/phys/Body.hx",873,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(torque,"torque")
	HX_STACK_LINE(884)
	if (((this->zpp_inner->torque != torque))){
		HX_STACK_LINE(885)
		this->zpp_inner->torque = torque;
		HX_STACK_LINE(886)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(889)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_torque,return )

::nape::geom::AABB Body_obj::get_bounds( ){
	HX_STACK_FRAME("nape.phys.Body","get_bounds",0xe6252714,"nape.phys.Body.get_bounds","nape/phys/Body.hx",906,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(906)
	return this->zpp_inner->aabb->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_bounds,return )

bool Body_obj::get_allowMovement( ){
	HX_STACK_FRAME("nape.phys.Body","get_allowMovement",0x7d735819,"nape.phys.Body.get_allowMovement","nape/phys/Body.hx",920,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(920)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowMovement,return )

bool Body_obj::set_allowMovement( bool allowMovement){
	HX_STACK_FRAME("nape.phys.Body","set_allowMovement",0xa0e13025,"nape.phys.Body.set_allowMovement","nape/phys/Body.hx",922,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowMovement,"allowMovement")
	HX_STACK_LINE(923)
	{
		HX_STACK_LINE(924)
		::String _g = ::Std_obj::string(allowMovement);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(924)
		::String _g1 = (HX_CSTRING("Body::") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(924)
		this->zpp_inner->immutable_midstep(_g1);
		HX_STACK_LINE(925)
		if (((!(this->zpp_inner->nomove) != allowMovement))){
			HX_STACK_LINE(926)
			this->zpp_inner->nomove = !(allowMovement);
			HX_STACK_LINE(927)
			this->zpp_inner->invalidate_mass();
		}
	}
	HX_STACK_LINE(930)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowMovement,return )

bool Body_obj::get_allowRotation( ){
	HX_STACK_FRAME("nape.phys.Body","get_allowRotation",0x85c21028,"nape.phys.Body.get_allowRotation","nape/phys/Body.hx",944,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(944)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowRotation,return )

bool Body_obj::set_allowRotation( bool allowRotation){
	HX_STACK_FRAME("nape.phys.Body","set_allowRotation",0xa92fe834,"nape.phys.Body.set_allowRotation","nape/phys/Body.hx",946,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowRotation,"allowRotation")
	HX_STACK_LINE(947)
	{
		HX_STACK_LINE(948)
		::String _g = ::Std_obj::string(allowRotation);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(948)
		::String _g1 = (HX_CSTRING("Body::") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(948)
		this->zpp_inner->immutable_midstep(_g1);
		HX_STACK_LINE(949)
		if (((!(this->zpp_inner->norotate) != allowRotation))){
			HX_STACK_LINE(950)
			this->zpp_inner->norotate = !(allowRotation);
			HX_STACK_LINE(951)
			this->zpp_inner->invalidate_inertia();
		}
	}
	HX_STACK_LINE(954)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowRotation,return )

::nape::phys::MassMode Body_obj::get_massMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_massMode",0xcb1e10d6,"nape.phys.Body.get_massMode","nape/phys/Body.hx",967,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(968)
	::nape::phys::MassMode _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(968)
	{
		HX_STACK_LINE(968)
		if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(968)
			::nape::phys::MassMode _g = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = _g;
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(968)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
	}
	HX_STACK_LINE(968)
	::nape::phys::MassMode _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(968)
	{
		HX_STACK_LINE(968)
		if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(968)
			::nape::phys::MassMode _g2 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = _g2;
			HX_STACK_LINE(968)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(968)
		_g3 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
	}
	HX_STACK_LINE(968)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(968)
	return _g4->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::MassMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_massMode,return )

::nape::phys::MassMode Body_obj::set_massMode( ::nape::phys::MassMode massMode){
	HX_STACK_FRAME("nape.phys.Body","set_massMode",0xe017344a,"nape.phys.Body.set_massMode","nape/phys/Body.hx",970,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(massMode,"massMode")
	HX_STACK_LINE(971)
	{
		HX_STACK_LINE(972)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::massMode"));
		HX_STACK_LINE(979)
		::nape::phys::MassMode _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(979)
		{
			HX_STACK_LINE(979)
			if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
				HX_STACK_LINE(979)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(979)
				::nape::phys::MassMode _g = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(979)
				::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = _g;
				HX_STACK_LINE(979)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(979)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
		}
		HX_STACK_LINE(979)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(979)
		if (((massMode == _g1))){
			HX_STACK_LINE(979)
			_g2 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
		}
		else{
			HX_STACK_LINE(979)
			_g2 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;
		}
		HX_STACK_LINE(979)
		this->zpp_inner->massMode = _g2;
		HX_STACK_LINE(980)
		this->zpp_inner->invalidate_mass();
	}
	HX_STACK_LINE(982)
	::nape::phys::MassMode _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(982)
	{
		HX_STACK_LINE(982)
		if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(982)
			::nape::phys::MassMode _g3 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = _g3;
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(982)
		_g4 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
	}
	HX_STACK_LINE(982)
	::nape::phys::MassMode _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(982)
	{
		HX_STACK_LINE(982)
		if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(982)
			::nape::phys::MassMode _g5 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = _g5;
			HX_STACK_LINE(982)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(982)
		_g6 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
	}
	HX_STACK_LINE(982)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new().Add(_g4).Add(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(982)
	return _g7->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::MassMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_massMode,return )

Float Body_obj::get_constraintMass( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintMass",0xb4d73790,"nape.phys.Body.get_constraintMass","nape/phys/Body.hx",993,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(994)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(994)
		this->zpp_inner->validate_mass();
	}
	HX_STACK_LINE(995)
	return this->zpp_inner->smass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintMass,return )

Float Body_obj::get_mass( ){
	HX_STACK_FRAME("nape.phys.Body","get_mass",0xb4662bd3,"nape.phys.Body.get_mass","nape/phys/Body.hx",1011,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1015)
	this->zpp_inner->validate_mass();
	HX_STACK_LINE(1019)
	return this->zpp_inner->cmass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_mass,return )

Float Body_obj::set_mass( Float mass){
	HX_STACK_FRAME("nape.phys.Body","set_mass",0x62c38547,"nape.phys.Body.set_mass","nape/phys/Body.hx",1021,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mass,"mass")
	HX_STACK_LINE(1022)
	{
		HX_STACK_LINE(1023)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::mass"));
		HX_STACK_LINE(1032)
		this->zpp_inner->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;
		HX_STACK_LINE(1033)
		this->zpp_inner->cmass = mass;
		HX_STACK_LINE(1034)
		this->zpp_inner->invalidate_mass();
	}
	HX_STACK_LINE(1036)
	this->zpp_inner->validate_mass();
	HX_STACK_LINE(1036)
	return this->zpp_inner->cmass;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_mass,return )

::nape::phys::GravMassMode Body_obj::get_gravMassMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMassMode",0x470a9856,"nape.phys.Body.get_gravMassMode","nape/phys/Body.hx",1047,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1048)
	::nape::phys::GravMassMode _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1048)
	{
		HX_STACK_LINE(1048)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1048)
			::nape::phys::GravMassMode _g = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = _g;
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1048)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
	}
	HX_STACK_LINE(1048)
	::nape::phys::GravMassMode _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1048)
	{
		HX_STACK_LINE(1048)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1048)
			::nape::phys::GravMassMode _g2 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = _g2;
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1048)
		_g3 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
	}
	HX_STACK_LINE(1048)
	::nape::phys::GravMassMode _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1048)
	{
		HX_STACK_LINE(1048)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1048)
			::nape::phys::GravMassMode _g4 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = _g4;
			HX_STACK_LINE(1048)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1048)
		_g5 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
	}
	HX_STACK_LINE(1048)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1048)
	return _g6->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::GravMassMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassMode,return )

::nape::phys::GravMassMode Body_obj::set_gravMassMode( ::nape::phys::GravMassMode gravMassMode){
	HX_STACK_FRAME("nape.phys.Body","set_gravMassMode",0x9d4c85ca,"nape.phys.Body.set_gravMassMode","nape/phys/Body.hx",1050,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMassMode,"gravMassMode")
	HX_STACK_LINE(1051)
	{
		HX_STACK_LINE(1052)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassMode"));
		HX_STACK_LINE(1059)
		::nape::phys::GravMassMode _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1059)
		{
			HX_STACK_LINE(1059)
			if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
				HX_STACK_LINE(1059)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1059)
				::nape::phys::GravMassMode _g = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1059)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = _g;
				HX_STACK_LINE(1059)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1059)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
		}
		HX_STACK_LINE(1059)
		int _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1059)
		if (((gravMassMode == _g1))){
			HX_STACK_LINE(1059)
			_g4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;
		}
		else{
			HX_STACK_LINE(1059)
			::nape::phys::GravMassMode _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1059)
			{
				HX_STACK_LINE(1059)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(1059)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1059)
					::nape::phys::GravMassMode _g2 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1059)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = _g2;
					HX_STACK_LINE(1059)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1059)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			HX_STACK_LINE(1059)
			if (((gravMassMode == _g3))){
				HX_STACK_LINE(1059)
				_g4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
			}
			else{
				HX_STACK_LINE(1059)
				_g4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;
			}
		}
		HX_STACK_LINE(1059)
		this->zpp_inner->gravMassMode = _g4;
		HX_STACK_LINE(1060)
		this->zpp_inner->invalidate_gravMass();
	}
	HX_STACK_LINE(1062)
	::nape::phys::GravMassMode _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1062)
	{
		HX_STACK_LINE(1062)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1062)
			::nape::phys::GravMassMode _g5 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = _g5;
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1062)
		_g6 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
	}
	HX_STACK_LINE(1062)
	::nape::phys::GravMassMode _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(1062)
	{
		HX_STACK_LINE(1062)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1062)
			::nape::phys::GravMassMode _g7 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = _g7;
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1062)
		_g8 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
	}
	HX_STACK_LINE(1062)
	::nape::phys::GravMassMode _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(1062)
	{
		HX_STACK_LINE(1062)
		if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1062)
			::nape::phys::GravMassMode _g9 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = _g9;
			HX_STACK_LINE(1062)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1062)
		_g10 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
	}
	HX_STACK_LINE(1062)
	Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new().Add(_g6).Add(_g8).Add(_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(1062)
	return _g11->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::GravMassMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassMode,return )

Float Body_obj::get_gravMass( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMass",0xbe98f353,"nape.phys.Body.get_gravMass","nape/phys/Body.hx",1073,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1077)
	this->zpp_inner->validate_gravMass();
	HX_STACK_LINE(1083)
	return this->zpp_inner->gravMass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMass,return )

Float Body_obj::set_gravMass( Float gravMass){
	HX_STACK_FRAME("nape.phys.Body","set_gravMass",0xd39216c7,"nape.phys.Body.set_gravMass","nape/phys/Body.hx",1085,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMass,"gravMass")
	HX_STACK_LINE(1086)
	{
		HX_STACK_LINE(1087)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMass"));
		HX_STACK_LINE(1094)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;
		HX_STACK_LINE(1095)
		this->zpp_inner->gravMass = gravMass;
		HX_STACK_LINE(1096)
		this->zpp_inner->invalidate_gravMass();
	}
	HX_STACK_LINE(1098)
	this->zpp_inner->validate_gravMass();
	HX_STACK_LINE(1098)
	return this->zpp_inner->gravMass;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMass,return )

Float Body_obj::get_gravMassScale( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMassScale",0x4eb15e37,"nape.phys.Body.get_gravMassScale","nape/phys/Body.hx",1110,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1111)
	this->zpp_inner->validate_gravMassScale();
	HX_STACK_LINE(1117)
	return this->zpp_inner->gravMassScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassScale,return )

Float Body_obj::set_gravMassScale( Float gravMassScale){
	HX_STACK_FRAME("nape.phys.Body","set_gravMassScale",0x721f3643,"nape.phys.Body.set_gravMassScale","nape/phys/Body.hx",1119,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMassScale,"gravMassScale")
	HX_STACK_LINE(1120)
	{
		HX_STACK_LINE(1121)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassScale"));
		HX_STACK_LINE(1128)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;
		HX_STACK_LINE(1129)
		this->zpp_inner->gravMassScale = gravMassScale;
		HX_STACK_LINE(1130)
		this->zpp_inner->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1132)
	this->zpp_inner->validate_gravMassScale();
	HX_STACK_LINE(1132)
	return this->zpp_inner->gravMassScale;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassScale,return )

::nape::phys::InertiaMode Body_obj::get_inertiaMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_inertiaMode",0xc04c747e,"nape.phys.Body.get_inertiaMode","nape/phys/Body.hx",1143,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	::nape::phys::InertiaMode _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1144)
	{
		HX_STACK_LINE(1144)
		if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1144)
			::nape::phys::InertiaMode _g = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = _g;
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1144)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
	}
	HX_STACK_LINE(1144)
	::nape::phys::InertiaMode _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1144)
	{
		HX_STACK_LINE(1144)
		if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1144)
			::nape::phys::InertiaMode _g2 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = _g2;
			HX_STACK_LINE(1144)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1144)
		_g3 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
	}
	HX_STACK_LINE(1144)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1144)
	return _g4->__get(this->zpp_inner->inertiaMode).StaticCast< ::nape::phys::InertiaMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertiaMode,return )

::nape::phys::InertiaMode Body_obj::set_inertiaMode( ::nape::phys::InertiaMode inertiaMode){
	HX_STACK_FRAME("nape.phys.Body","set_inertiaMode",0xbc17f18a,"nape.phys.Body.set_inertiaMode","nape/phys/Body.hx",1146,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inertiaMode,"inertiaMode")
	HX_STACK_LINE(1147)
	{
		HX_STACK_LINE(1148)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertiaMode"));
		HX_STACK_LINE(1155)
		::nape::phys::InertiaMode _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
				HX_STACK_LINE(1155)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1155)
				::nape::phys::InertiaMode _g = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1155)
				::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = _g;
				HX_STACK_LINE(1155)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1155)
			_g1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
		}
		HX_STACK_LINE(1155)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1155)
		if (((inertiaMode == _g1))){
			HX_STACK_LINE(1155)
			_g2 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;
		}
		else{
			HX_STACK_LINE(1155)
			_g2 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
		}
		HX_STACK_LINE(1155)
		this->zpp_inner->inertiaMode = _g2;
		HX_STACK_LINE(1156)
		this->zpp_inner->invalidate_inertia();
	}
	HX_STACK_LINE(1158)
	::nape::phys::InertiaMode _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1158)
	{
		HX_STACK_LINE(1158)
		if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1158)
			::nape::phys::InertiaMode _g3 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = _g3;
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1158)
		_g4 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
	}
	HX_STACK_LINE(1158)
	::nape::phys::InertiaMode _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1158)
	{
		HX_STACK_LINE(1158)
		if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1158)
			::nape::phys::InertiaMode _g5 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = _g5;
			HX_STACK_LINE(1158)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1158)
		_g6 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
	}
	HX_STACK_LINE(1158)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new().Add(_g4).Add(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1158)
	return _g7->__get(this->zpp_inner->inertiaMode).StaticCast< ::nape::phys::InertiaMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertiaMode,return )

Float Body_obj::get_constraintInertia( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintInertia",0xe1d4c3de,"nape.phys.Body.get_constraintInertia","nape/phys/Body.hx",1169,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1170)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(1170)
		this->zpp_inner->validate_inertia();
	}
	HX_STACK_LINE(1171)
	return this->zpp_inner->sinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintInertia,return )

Float Body_obj::get_inertia( ){
	HX_STACK_FRAME("nape.phys.Body","get_inertia",0x035f9b7b,"nape.phys.Body.get_inertia","nape/phys/Body.hx",1180,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1184)
	this->zpp_inner->validate_inertia();
	HX_STACK_LINE(1188)
	return this->zpp_inner->cinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertia,return )

Float Body_obj::set_inertia( Float inertia){
	HX_STACK_FRAME("nape.phys.Body","set_inertia",0x0dcca287,"nape.phys.Body.set_inertia","nape/phys/Body.hx",1190,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inertia,"inertia")
	HX_STACK_LINE(1191)
	{
		HX_STACK_LINE(1192)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertia"));
		HX_STACK_LINE(1201)
		this->zpp_inner->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;
		HX_STACK_LINE(1202)
		this->zpp_inner->cinertia = inertia;
		HX_STACK_LINE(1203)
		this->zpp_inner->invalidate_inertia();
	}
	HX_STACK_LINE(1205)
	this->zpp_inner->validate_inertia();
	HX_STACK_LINE(1205)
	return this->zpp_inner->cinertia;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertia,return )

::nape::phys::BodyList Body_obj::connectedBodies( hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_FRAME("nape.phys.Body","connectedBodies",0x5a493693,"nape.phys.Body.connectedBodies","nape/phys/Body.hx",1225,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1225)
		return this->zpp_inner->connectedBodies(depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,connectedBodies,return )

::nape::phys::BodyList Body_obj::interactingBodies( ::nape::callbacks::InteractionType type,hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_FRAME("nape.phys.Body","interactingBodies",0x9771f576,"nape.phys.Body.interactingBodies","nape/phys/Body.hx",1242,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1243)
		int arbiter_type;		HX_STACK_VAR(arbiter_type,"arbiter_type");
		HX_STACK_LINE(1243)
		if (((type == null()))){
			HX_STACK_LINE(1244)
			arbiter_type = (int((int(::zpp_nape::dynamics::ZPP_Arbiter_obj::COL) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID));
		}
		else{
			HX_STACK_LINE(1246)
			::nape::callbacks::InteractionType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(1246)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1246)
					::nape::callbacks::InteractionType _g = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1246)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = _g;
					HX_STACK_LINE(1246)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1246)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(1246)
			if (((type == _g1))){
				HX_STACK_LINE(1246)
				arbiter_type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;
			}
			else{
				HX_STACK_LINE(1246)
				::nape::callbacks::InteractionType _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1246)
						::nape::callbacks::InteractionType _g2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = _g2;
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1246)
					_g3 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				HX_STACK_LINE(1246)
				if (((type == _g3))){
					HX_STACK_LINE(1246)
					arbiter_type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;
				}
				else{
					HX_STACK_LINE(1246)
					arbiter_type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;
				}
			}
		}
		HX_STACK_LINE(1247)
		return this->zpp_inner->interactingBodies(arbiter_type,depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,interactingBodies,return )

Float Body_obj::crushFactor( ){
	HX_STACK_FRAME("nape.phys.Body","crushFactor",0x8f2ff294,"nape.phys.Body.crushFactor","nape/phys/Body.hx",1264,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1268)
	Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
	HX_STACK_LINE(1269)
	::nape::geom::Vec2 jsum;		HX_STACK_VAR(jsum,"jsum");
	HX_STACK_LINE(1269)
	{
		HX_STACK_LINE(1269)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1269)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1269)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(1269)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1269)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1269)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1269)
			ret = _g;
		}
		else{
			HX_STACK_LINE(1269)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1269)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1269)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1269)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1269)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1269)
			{
				HX_STACK_LINE(1269)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1269)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1269)
				{
					HX_STACK_LINE(1269)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1269)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1269)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(1269)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1269)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1269)
						ret1->next = null();
					}
					HX_STACK_LINE(1269)
					ret1->weak = false;
				}
				HX_STACK_LINE(1269)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1269)
				{
					HX_STACK_LINE(1269)
					ret1->x = x;
					HX_STACK_LINE(1269)
					ret1->y = y;
					HX_STACK_LINE(1269)
					{
					}
				}
				HX_STACK_LINE(1269)
				_g2 = ret1;
			}
			HX_STACK_LINE(1269)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(1269)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1269)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1269)
			{
				HX_STACK_LINE(1269)
				{
					HX_STACK_LINE(1269)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1269)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1269)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1269)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1269,0xcb2bb586)
					{
						HX_STACK_LINE(1269)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1269)
						{
							HX_STACK_LINE(1269)
							{
								HX_STACK_LINE(1269)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1269)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1269)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1269)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1269)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1269)
			if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1269)
				{
					HX_STACK_LINE(1269)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1269)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1269)
					{
					}
				}
				HX_STACK_LINE(1269)
				{
					HX_STACK_LINE(1269)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1269)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1269)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1269)
			ret;
		}
		HX_STACK_LINE(1269)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1269)
		jsum = ret;
	}
	HX_STACK_LINE(1270)
	{
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1270,0xcb2bb586)
				{
					HX_STACK_LINE(1270)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(1270)
						::nape::dynamics::ArbiterList _g5 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1270)
						__this->zpp_inner->wrap_arbiters = _g5;
					}
					HX_STACK_LINE(1270)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(1270)
		::nape::dynamics::ArbiterIterator _g = (_Function_2_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1270)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1270,0xcb2bb586)
					{
						HX_STACK_LINE(1270)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(1270)
						int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1270)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1270,0xcb2bb586)
								{
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
										HX_STACK_LINE(1270)
										::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(1270)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(1270)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(1270)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1270)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(1270)
				break;
			}
			HX_STACK_LINE(1270)
			::nape::dynamics::Arbiter arb;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1270)
			{
				HX_STACK_LINE(1270)
				_g->zpp_critical = false;
				HX_STACK_LINE(1270)
				int _g6 = (_g->zpp_i)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1270)
				arb = _g->zpp_inner->at(_g6);
			}
			HX_STACK_LINE(1271)
			::nape::geom::Vec3 imp3 = arb->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1272)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1273)
			jsum->addeq(imp);
			HX_STACK_LINE(1274)
			Float _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1274)
			{
				HX_STACK_LINE(1274)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					{
						HX_STACK_LINE(1274)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1274)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1274)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1274)
					_g7 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1274)
				Float _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					{
						HX_STACK_LINE(1274)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1274)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1274)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1274)
					_g8 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1274)
				Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1274)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					{
						HX_STACK_LINE(1274)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1274)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1274)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1274)
					_g10 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1274)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					{
						HX_STACK_LINE(1274)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1274)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1274)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1274)
					_g11 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1274)
				Float _g12 = (_g10 * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1274)
				Float _g13 = (_g9 + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(1274)
				_g14 = ::Math_obj::sqrt(_g13);
			}
			HX_STACK_LINE(1274)
			hx::AddEq(msum,_g14);
			HX_STACK_LINE(1275)
			{
				HX_STACK_LINE(1275)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1275)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1275)
				imp->zpp_inner = null();
				HX_STACK_LINE(1275)
				{
					HX_STACK_LINE(1275)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1275)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1275)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1275)
				{
					HX_STACK_LINE(1275)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1275)
					{
						HX_STACK_LINE(1275)
						if (((o->outer != null()))){
							HX_STACK_LINE(1275)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1275)
							o->outer = null();
						}
						HX_STACK_LINE(1275)
						o->_isimmutable = null();
						HX_STACK_LINE(1275)
						o->_validate = null();
						HX_STACK_LINE(1275)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1275)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1275)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1276)
			imp3->dispose();
		}
	}
	HX_STACK_LINE(1278)
	{
		HX_STACK_LINE(1278)
		::nape::constraint::ConstraintIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1278)
		{
			HX_STACK_LINE(1278)
			::nape::constraint::ConstraintList _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1278)
				if (((this->zpp_inner->wrap_constraints == null()))){
					HX_STACK_LINE(1278)
					::nape::constraint::ConstraintList _g15 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(1278)
					this->zpp_inner->wrap_constraints = _g15;
				}
				HX_STACK_LINE(1278)
				_this = this->zpp_inner->wrap_constraints;
			}
			HX_STACK_LINE(1278)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(1278)
			_g = ::nape::constraint::ConstraintIterator_obj::get(_this);
		}
		HX_STACK_LINE(1278)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1278,0xcb2bb586)
					{
						HX_STACK_LINE(1278)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(1278)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1278)
						{
							HX_STACK_LINE(1278)
							::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1278)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(1278)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(1278)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(1278)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(1278)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(1278)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1278,0xcb2bb586)
								{
									HX_STACK_LINE(1278)
									{
										HX_STACK_LINE(1278)
										_g->zpp_next = ::nape::constraint::ConstraintIterator_obj::zpp_pool;
										HX_STACK_LINE(1278)
										::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(1278)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(1278)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(1278)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1278)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(1278)
				break;
			}
			HX_STACK_LINE(1278)
			::nape::constraint::Constraint con;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1278)
				_g->zpp_critical = false;
				HX_STACK_LINE(1278)
				int _g16 = (_g->zpp_i)++;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(1278)
				con = _g->zpp_inner->at(_g16);
			}
			HX_STACK_LINE(1279)
			::nape::geom::Vec3 imp3 = con->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1280)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1281)
			jsum->addeq(imp);
			HX_STACK_LINE(1282)
			Float _g24;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(1282)
			{
				HX_STACK_LINE(1282)
				Float _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					{
						HX_STACK_LINE(1282)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1282)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1282)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1282)
					_g17 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1282)
				Float _g18;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					{
						HX_STACK_LINE(1282)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1282)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1282)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1282)
					_g18 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1282)
				Float _g19 = (_g17 * _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(1282)
				Float _g20;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					{
						HX_STACK_LINE(1282)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1282)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1282)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1282)
					_g20 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1282)
				Float _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					{
						HX_STACK_LINE(1282)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1282)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1282)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1282)
					_g21 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1282)
				Float _g22 = (_g20 * _g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(1282)
				Float _g23 = (_g19 + _g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(1282)
				_g24 = ::Math_obj::sqrt(_g23);
			}
			HX_STACK_LINE(1282)
			hx::AddEq(msum,_g24);
			HX_STACK_LINE(1283)
			{
				HX_STACK_LINE(1283)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1283)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1283)
				imp->zpp_inner = null();
				HX_STACK_LINE(1283)
				{
					HX_STACK_LINE(1283)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1283)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1283)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1283)
				{
					HX_STACK_LINE(1283)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1283)
					{
						HX_STACK_LINE(1283)
						if (((o->outer != null()))){
							HX_STACK_LINE(1283)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1283)
							o->outer = null();
						}
						HX_STACK_LINE(1283)
						o->_isimmutable = null();
						HX_STACK_LINE(1283)
						o->_validate = null();
						HX_STACK_LINE(1283)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1283)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1283)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1284)
			imp3->dispose();
		}
	}
	HX_STACK_LINE(1286)
	Float _g32;		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(1286)
	{
		HX_STACK_LINE(1286)
		Float _g25;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			{
				HX_STACK_LINE(1286)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1286)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1286)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1286)
			_g25 = jsum->zpp_inner->x;
		}
		HX_STACK_LINE(1286)
		Float _g26;		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			{
				HX_STACK_LINE(1286)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1286)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1286)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1286)
			_g26 = jsum->zpp_inner->x;
		}
		HX_STACK_LINE(1286)
		Float _g27 = (_g25 * _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(1286)
		Float _g28;		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			{
				HX_STACK_LINE(1286)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1286)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1286)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1286)
			_g28 = jsum->zpp_inner->y;
		}
		HX_STACK_LINE(1286)
		Float _g29;		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			{
				HX_STACK_LINE(1286)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1286)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1286)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1286)
			_g29 = jsum->zpp_inner->y;
		}
		HX_STACK_LINE(1286)
		Float _g30 = (_g28 * _g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(1286)
		Float _g31 = (_g27 + _g30);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(1286)
		_g32 = ::Math_obj::sqrt(_g31);
	}
	HX_STACK_LINE(1286)
	Float _g33 = (msum - _g32);		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(1286)
	Float _g34;		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(1286)
	{
		HX_STACK_LINE(1286)
		this->zpp_inner->validate_mass();
		HX_STACK_LINE(1286)
		_g34 = this->zpp_inner->cmass;
	}
	HX_STACK_LINE(1286)
	Float _g35 = (_g34 * ((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->pre_dt);		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(1286)
	Float ret = (Float(_g33) / Float(_g35));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1287)
	{
		HX_STACK_LINE(1287)
		::zpp_nape::geom::ZPP_Vec2 inner = jsum->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1287)
		jsum->zpp_inner->outer = null();
		HX_STACK_LINE(1287)
		jsum->zpp_inner = null();
		HX_STACK_LINE(1287)
		{
			HX_STACK_LINE(1287)
			::nape::geom::Vec2 o = jsum;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1287)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1287)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(1287)
		{
			HX_STACK_LINE(1287)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1287)
			{
				HX_STACK_LINE(1287)
				if (((o->outer != null()))){
					HX_STACK_LINE(1287)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1287)
					o->outer = null();
				}
				HX_STACK_LINE(1287)
				o->_isimmutable = null();
				HX_STACK_LINE(1287)
				o->_validate = null();
				HX_STACK_LINE(1287)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1287)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1287)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1288)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,crushFactor,return )

::nape::geom::Vec2 Body_obj::localPointToWorld( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","localPointToWorld",0x529ec05c,"nape.phys.Body.localPointToWorld","nape/phys/Body.hx",1301,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1310)
		{
			HX_STACK_LINE(1310)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1310)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1310)
				_this->zip_axis = false;
				HX_STACK_LINE(1310)
				{
					HX_STACK_LINE(1310)
					Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1310)
					_this->axisx = _g;
					HX_STACK_LINE(1310)
					Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1310)
					_this->axisy = _g1;
					HX_STACK_LINE(1310)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1311)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1312)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1313)
		{
			HX_STACK_LINE(1314)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1314)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1314)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1314)
				_g2 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1314)
			Float _g3 = (this->zpp_inner->axisy * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1314)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1314)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1314)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1314)
				_g4 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1314)
			Float _g5 = (this->zpp_inner->axisx * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1314)
			Float _g6 = (_g3 - _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1314)
			tempx = _g6;
			HX_STACK_LINE(1315)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1315)
			{
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1315)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1315)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1315)
				_g7 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1315)
			Float _g8 = (_g7 * this->zpp_inner->axisx);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1315)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1315)
			{
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1315)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1315)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1315)
				_g9 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1315)
			Float _g10 = (_g9 * this->zpp_inner->axisy);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1315)
			Float _g11 = (_g8 + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1315)
			tempy = _g11;
		}
		HX_STACK_LINE(1317)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1321)
			{
				HX_STACK_LINE(1321)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1321)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1321)
				point->zpp_inner = null();
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1321)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1321)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1321)
					{
						HX_STACK_LINE(1321)
						if (((o->outer != null()))){
							HX_STACK_LINE(1321)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1321)
							o->outer = null();
						}
						HX_STACK_LINE(1321)
						o->_isimmutable = null();
						HX_STACK_LINE(1321)
						o->_validate = null();
						HX_STACK_LINE(1321)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1321)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1321)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1322)
			true;
		}
		else{
			HX_STACK_LINE(1325)
			false;
		}
		HX_STACK_LINE(1328)
		Float x = (tempx + this->zpp_inner->posx);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1328)
		Float y = (tempy + this->zpp_inner->posy);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1328)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1328)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1328)
			::nape::geom::Vec2 _g12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1328)
			ret = _g12;
		}
		else{
			HX_STACK_LINE(1328)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1328)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1328)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1328)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1328)
			::zpp_nape::geom::ZPP_Vec2 _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1328)
			{
				HX_STACK_LINE(1328)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1328)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1328)
				{
					HX_STACK_LINE(1328)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1328)
						::zpp_nape::geom::ZPP_Vec2 _g13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1328)
						ret1 = _g13;
					}
					else{
						HX_STACK_LINE(1328)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1328)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1328)
						ret1->next = null();
					}
					HX_STACK_LINE(1328)
					ret1->weak = false;
				}
				HX_STACK_LINE(1328)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1328)
				{
					HX_STACK_LINE(1328)
					ret1->x = x;
					HX_STACK_LINE(1328)
					ret1->y = y;
					HX_STACK_LINE(1328)
					{
					}
				}
				HX_STACK_LINE(1328)
				_g14 = ret1;
			}
			HX_STACK_LINE(1328)
			ret->zpp_inner = _g14;
			HX_STACK_LINE(1328)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1328)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1328)
			{
				HX_STACK_LINE(1328)
				{
					HX_STACK_LINE(1328)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1328)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1328)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1328)
				_g15 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1328,0xcb2bb586)
					{
						HX_STACK_LINE(1328)
						Float _g16;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1328)
						{
							HX_STACK_LINE(1328)
							{
								HX_STACK_LINE(1328)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1328)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1328)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1328)
							_g16 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1328)
						return (_g16 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1328)
			if ((!(((  (((_g15 == x))) ? bool(_Function_2_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1328)
				{
					HX_STACK_LINE(1328)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1328)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1328)
					{
					}
				}
				HX_STACK_LINE(1328)
				{
					HX_STACK_LINE(1328)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1328)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1328)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1328)
			ret;
		}
		HX_STACK_LINE(1328)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1328)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localPointToWorld,return )

::nape::geom::Vec2 Body_obj::worldPointToLocal( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","worldPointToLocal",0x87d1fedc,"nape.phys.Body.worldPointToLocal","nape/phys/Body.hx",1341,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1350)
		{
			HX_STACK_LINE(1350)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1350)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1350)
				_this->zip_axis = false;
				HX_STACK_LINE(1350)
				{
					HX_STACK_LINE(1350)
					Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1350)
					_this->axisx = _g;
					HX_STACK_LINE(1350)
					Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1350)
					_this->axisy = _g1;
					HX_STACK_LINE(1350)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1351)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1352)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1353)
		Float pointx = 0.0;		HX_STACK_VAR(pointx,"pointx");
		HX_STACK_LINE(1354)
		Float pointy = 0.0;		HX_STACK_VAR(pointy,"pointy");
		HX_STACK_LINE(1355)
		{
			HX_STACK_LINE(1356)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1356)
			{
				HX_STACK_LINE(1356)
				{
					HX_STACK_LINE(1356)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1356)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1356)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1356)
				_g2 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1356)
			Float _g3 = (_g2 - this->zpp_inner->posx);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1356)
			pointx = _g3;
			HX_STACK_LINE(1357)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1357)
				{
					HX_STACK_LINE(1357)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1357)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1357)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1357)
				_g4 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1357)
			Float _g5 = (_g4 - this->zpp_inner->posy);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1357)
			pointy = _g5;
		}
		HX_STACK_LINE(1359)
		{
			HX_STACK_LINE(1360)
			tempx = ((pointx * this->zpp_inner->axisy) + (pointy * this->zpp_inner->axisx));
			HX_STACK_LINE(1361)
			tempy = ((pointy * this->zpp_inner->axisy) - (pointx * this->zpp_inner->axisx));
		}
		HX_STACK_LINE(1363)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1367)
			{
				HX_STACK_LINE(1367)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1367)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1367)
				point->zpp_inner = null();
				HX_STACK_LINE(1367)
				{
					HX_STACK_LINE(1367)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1367)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1367)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1367)
				{
					HX_STACK_LINE(1367)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1367)
					{
						HX_STACK_LINE(1367)
						if (((o->outer != null()))){
							HX_STACK_LINE(1367)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1367)
							o->outer = null();
						}
						HX_STACK_LINE(1367)
						o->_isimmutable = null();
						HX_STACK_LINE(1367)
						o->_validate = null();
						HX_STACK_LINE(1367)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1367)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1367)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1368)
			true;
		}
		else{
			HX_STACK_LINE(1371)
			false;
		}
		HX_STACK_LINE(1374)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1374)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1374)
			::nape::geom::Vec2 _g6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1374)
			ret = _g6;
		}
		else{
			HX_STACK_LINE(1374)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1374)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1374)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1374)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1374)
			::zpp_nape::geom::ZPP_Vec2 _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1374)
			{
				HX_STACK_LINE(1374)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1374)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1374)
				{
					HX_STACK_LINE(1374)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1374)
						::zpp_nape::geom::ZPP_Vec2 _g7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1374)
						ret1 = _g7;
					}
					else{
						HX_STACK_LINE(1374)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1374)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1374)
						ret1->next = null();
					}
					HX_STACK_LINE(1374)
					ret1->weak = false;
				}
				HX_STACK_LINE(1374)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1374)
				{
					HX_STACK_LINE(1374)
					ret1->x = tempx;
					HX_STACK_LINE(1374)
					ret1->y = tempy;
					HX_STACK_LINE(1374)
					{
					}
				}
				HX_STACK_LINE(1374)
				_g8 = ret1;
			}
			HX_STACK_LINE(1374)
			ret->zpp_inner = _g8;
			HX_STACK_LINE(1374)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1374)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1374)
			{
				HX_STACK_LINE(1374)
				{
					HX_STACK_LINE(1374)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1374)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1374)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1374)
				_g9 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( Float &tempy,::nape::geom::Vec2 &ret){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1374,0xcb2bb586)
					{
						HX_STACK_LINE(1374)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1374)
						{
							HX_STACK_LINE(1374)
							{
								HX_STACK_LINE(1374)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1374)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1374)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1374)
							_g10 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1374)
						return (_g10 == tempy);
					}
					return null();
				}
			};
			HX_STACK_LINE(1374)
			if ((!(((  (((_g9 == tempx))) ? bool(_Function_2_1::Block(tempy,ret)) : bool(false) ))))){
				HX_STACK_LINE(1374)
				{
					HX_STACK_LINE(1374)
					ret->zpp_inner->x = tempx;
					HX_STACK_LINE(1374)
					ret->zpp_inner->y = tempy;
					HX_STACK_LINE(1374)
					{
					}
				}
				HX_STACK_LINE(1374)
				{
					HX_STACK_LINE(1374)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1374)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1374)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1374)
			ret;
		}
		HX_STACK_LINE(1374)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1374)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldPointToLocal,return )

::nape::geom::Vec2 Body_obj::localVectorToWorld( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","localVectorToWorld",0x7d44febf,"nape.phys.Body.localVectorToWorld","nape/phys/Body.hx",1388,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1397)
		{
			HX_STACK_LINE(1397)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1397)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1397)
				_this->zip_axis = false;
				HX_STACK_LINE(1397)
				{
					HX_STACK_LINE(1397)
					Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1397)
					_this->axisx = _g;
					HX_STACK_LINE(1397)
					Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1397)
					_this->axisy = _g1;
					HX_STACK_LINE(1397)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1398)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1399)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1400)
		{
			HX_STACK_LINE(1401)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1401)
			{
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1401)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1401)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1401)
				_g2 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1401)
			Float _g3 = (this->zpp_inner->axisy * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1401)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1401)
			{
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1401)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1401)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1401)
				_g4 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1401)
			Float _g5 = (this->zpp_inner->axisx * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1401)
			Float _g6 = (_g3 - _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1401)
			tempx = _g6;
			HX_STACK_LINE(1402)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1402)
			{
				HX_STACK_LINE(1402)
				{
					HX_STACK_LINE(1402)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1402)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1402)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1402)
				_g7 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1402)
			Float _g8 = (_g7 * this->zpp_inner->axisx);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1402)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1402)
			{
				HX_STACK_LINE(1402)
				{
					HX_STACK_LINE(1402)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1402)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1402)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1402)
				_g9 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1402)
			Float _g10 = (_g9 * this->zpp_inner->axisy);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1402)
			Float _g11 = (_g8 + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1402)
			tempy = _g11;
		}
		HX_STACK_LINE(1404)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1408)
			{
				HX_STACK_LINE(1408)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1408)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1408)
				vector->zpp_inner = null();
				HX_STACK_LINE(1408)
				{
					HX_STACK_LINE(1408)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1408)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1408)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1408)
				{
					HX_STACK_LINE(1408)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1408)
					{
						HX_STACK_LINE(1408)
						if (((o->outer != null()))){
							HX_STACK_LINE(1408)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1408)
							o->outer = null();
						}
						HX_STACK_LINE(1408)
						o->_isimmutable = null();
						HX_STACK_LINE(1408)
						o->_validate = null();
						HX_STACK_LINE(1408)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1408)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1408)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1409)
			true;
		}
		else{
			HX_STACK_LINE(1412)
			false;
		}
		HX_STACK_LINE(1415)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1415)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1415)
			::nape::geom::Vec2 _g12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1415)
			ret = _g12;
		}
		else{
			HX_STACK_LINE(1415)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1415)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1415)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1415)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1415)
			::zpp_nape::geom::ZPP_Vec2 _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1415)
			{
				HX_STACK_LINE(1415)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1415)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1415)
				{
					HX_STACK_LINE(1415)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1415)
						::zpp_nape::geom::ZPP_Vec2 _g13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1415)
						ret1 = _g13;
					}
					else{
						HX_STACK_LINE(1415)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1415)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1415)
						ret1->next = null();
					}
					HX_STACK_LINE(1415)
					ret1->weak = false;
				}
				HX_STACK_LINE(1415)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1415)
				{
					HX_STACK_LINE(1415)
					ret1->x = tempx;
					HX_STACK_LINE(1415)
					ret1->y = tempy;
					HX_STACK_LINE(1415)
					{
					}
				}
				HX_STACK_LINE(1415)
				_g14 = ret1;
			}
			HX_STACK_LINE(1415)
			ret->zpp_inner = _g14;
			HX_STACK_LINE(1415)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1415)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1415)
			{
				HX_STACK_LINE(1415)
				{
					HX_STACK_LINE(1415)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1415)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1415)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1415)
				_g15 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( Float &tempy,::nape::geom::Vec2 &ret){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1415,0xcb2bb586)
					{
						HX_STACK_LINE(1415)
						Float _g16;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1415)
						{
							HX_STACK_LINE(1415)
							{
								HX_STACK_LINE(1415)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1415)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1415)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1415)
							_g16 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1415)
						return (_g16 == tempy);
					}
					return null();
				}
			};
			HX_STACK_LINE(1415)
			if ((!(((  (((_g15 == tempx))) ? bool(_Function_2_1::Block(tempy,ret)) : bool(false) ))))){
				HX_STACK_LINE(1415)
				{
					HX_STACK_LINE(1415)
					ret->zpp_inner->x = tempx;
					HX_STACK_LINE(1415)
					ret->zpp_inner->y = tempy;
					HX_STACK_LINE(1415)
					{
					}
				}
				HX_STACK_LINE(1415)
				{
					HX_STACK_LINE(1415)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1415)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1415)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1415)
			ret;
		}
		HX_STACK_LINE(1415)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1415)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localVectorToWorld,return )

::nape::geom::Vec2 Body_obj::worldVectorToLocal( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","worldVectorToLocal",0xef542091,"nape.phys.Body.worldVectorToLocal","nape/phys/Body.hx",1429,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1438)
		{
			HX_STACK_LINE(1438)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1438)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1438)
				_this->zip_axis = false;
				HX_STACK_LINE(1438)
				{
					HX_STACK_LINE(1438)
					Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1438)
					_this->axisx = _g;
					HX_STACK_LINE(1438)
					Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1438)
					_this->axisy = _g1;
					HX_STACK_LINE(1438)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1439)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1440)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1441)
		{
			HX_STACK_LINE(1442)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1442)
			{
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1442)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1442)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1442)
				_g2 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1442)
			Float _g3 = (_g2 * this->zpp_inner->axisy);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1442)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1442)
			{
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1442)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1442)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1442)
				_g4 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1442)
			Float _g5 = (_g4 * this->zpp_inner->axisx);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1442)
			Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1442)
			tempx = _g6;
			HX_STACK_LINE(1443)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1443)
			{
				HX_STACK_LINE(1443)
				{
					HX_STACK_LINE(1443)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1443)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1443)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1443)
				_g7 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1443)
			Float _g8 = (_g7 * this->zpp_inner->axisy);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1443)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1443)
			{
				HX_STACK_LINE(1443)
				{
					HX_STACK_LINE(1443)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1443)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1443)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1443)
				_g9 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1443)
			Float _g10 = (_g9 * this->zpp_inner->axisx);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1443)
			Float _g11 = (_g8 - _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1443)
			tempy = _g11;
		}
		HX_STACK_LINE(1445)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1449)
			{
				HX_STACK_LINE(1449)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1449)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1449)
				vector->zpp_inner = null();
				HX_STACK_LINE(1449)
				{
					HX_STACK_LINE(1449)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1449)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1449)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1449)
				{
					HX_STACK_LINE(1449)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1449)
					{
						HX_STACK_LINE(1449)
						if (((o->outer != null()))){
							HX_STACK_LINE(1449)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1449)
							o->outer = null();
						}
						HX_STACK_LINE(1449)
						o->_isimmutable = null();
						HX_STACK_LINE(1449)
						o->_validate = null();
						HX_STACK_LINE(1449)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1449)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1449)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1450)
			true;
		}
		else{
			HX_STACK_LINE(1453)
			false;
		}
		HX_STACK_LINE(1456)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1456)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1456)
			::nape::geom::Vec2 _g12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1456)
			ret = _g12;
		}
		else{
			HX_STACK_LINE(1456)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1456)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1456)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1456)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1456)
			::zpp_nape::geom::ZPP_Vec2 _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1456)
			{
				HX_STACK_LINE(1456)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1456)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1456)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1456)
						::zpp_nape::geom::ZPP_Vec2 _g13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1456)
						ret1 = _g13;
					}
					else{
						HX_STACK_LINE(1456)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1456)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1456)
						ret1->next = null();
					}
					HX_STACK_LINE(1456)
					ret1->weak = false;
				}
				HX_STACK_LINE(1456)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1456)
					ret1->x = tempx;
					HX_STACK_LINE(1456)
					ret1->y = tempy;
					HX_STACK_LINE(1456)
					{
					}
				}
				HX_STACK_LINE(1456)
				_g14 = ret1;
			}
			HX_STACK_LINE(1456)
			ret->zpp_inner = _g14;
			HX_STACK_LINE(1456)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1456)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1456)
			{
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1456)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1456)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1456)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1456)
				_g15 = ret->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( Float &tempy,::nape::geom::Vec2 &ret){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1456,0xcb2bb586)
					{
						HX_STACK_LINE(1456)
						Float _g16;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1456)
						{
							HX_STACK_LINE(1456)
							{
								HX_STACK_LINE(1456)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1456)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1456)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1456)
							_g16 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1456)
						return (_g16 == tempy);
					}
					return null();
				}
			};
			HX_STACK_LINE(1456)
			if ((!(((  (((_g15 == tempx))) ? bool(_Function_2_1::Block(tempy,ret)) : bool(false) ))))){
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1456)
					ret->zpp_inner->x = tempx;
					HX_STACK_LINE(1456)
					ret->zpp_inner->y = tempy;
					HX_STACK_LINE(1456)
					{
					}
				}
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1456)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1456)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1456)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1456)
			ret;
		}
		HX_STACK_LINE(1456)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1456)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldVectorToLocal,return )

::nape::phys::Body Body_obj::applyImpulse( ::nape::geom::Vec2 impulse,::nape::geom::Vec2 pos,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_FRAME("nape.phys.Body","applyImpulse",0x41b92f3d,"nape.phys.Body.applyImpulse","nape/phys/Body.hx",1479,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(impulse,"impulse")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(sleepable,"sleepable")
{
		HX_STACK_LINE(1496)
		if (((bool(sleepable) && bool(this->zpp_inner->component->sleeping)))){
			HX_STACK_LINE(1497)
			if ((impulse->zpp_inner->weak)){
				HX_STACK_LINE(1501)
				{
					HX_STACK_LINE(1501)
					::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1501)
					impulse->zpp_inner->outer = null();
					HX_STACK_LINE(1501)
					impulse->zpp_inner = null();
					HX_STACK_LINE(1501)
					{
						HX_STACK_LINE(1501)
						::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1501)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1501)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1501)
					{
						HX_STACK_LINE(1501)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1501)
						{
							HX_STACK_LINE(1501)
							if (((o->outer != null()))){
								HX_STACK_LINE(1501)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1501)
								o->outer = null();
							}
							HX_STACK_LINE(1501)
							o->_isimmutable = null();
							HX_STACK_LINE(1501)
							o->_validate = null();
							HX_STACK_LINE(1501)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1501)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1501)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1502)
				true;
			}
			else{
				HX_STACK_LINE(1505)
				false;
			}
			HX_STACK_LINE(1508)
			if (((pos != null()))){
				HX_STACK_LINE(1509)
				if ((pos->zpp_inner->weak)){
					HX_STACK_LINE(1513)
					{
						HX_STACK_LINE(1513)
						::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1513)
						pos->zpp_inner->outer = null();
						HX_STACK_LINE(1513)
						pos->zpp_inner = null();
						HX_STACK_LINE(1513)
						{
							HX_STACK_LINE(1513)
							::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1513)
							o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1513)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1513)
						{
							HX_STACK_LINE(1513)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1513)
							{
								HX_STACK_LINE(1513)
								if (((o->outer != null()))){
									HX_STACK_LINE(1513)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1513)
									o->outer = null();
								}
								HX_STACK_LINE(1513)
								o->_isimmutable = null();
								HX_STACK_LINE(1513)
								o->_validate = null();
								HX_STACK_LINE(1513)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1513)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1513)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1514)
					true;
				}
				else{
					HX_STACK_LINE(1517)
					false;
				}
			}
			HX_STACK_LINE(1521)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1523)
		this->zpp_inner->validate_mass();
		HX_STACK_LINE(1524)
		{
			HX_STACK_LINE(1525)
			Float t = this->zpp_inner->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1534)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1534)
			{
				HX_STACK_LINE(1534)
				{
					HX_STACK_LINE(1534)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1534)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1534)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1534)
				_g = impulse->zpp_inner->x;
			}
			HX_STACK_LINE(1534)
			Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1534)
			hx::AddEq(this->zpp_inner->velx,_g1);
			HX_STACK_LINE(1535)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1535)
			{
				HX_STACK_LINE(1535)
				{
					HX_STACK_LINE(1535)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1535)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1535)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1535)
				_g2 = impulse->zpp_inner->y;
			}
			HX_STACK_LINE(1535)
			Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1535)
			hx::AddEq(this->zpp_inner->vely,_g3);
		}
		HX_STACK_LINE(1537)
		if (((pos != null()))){
			HX_STACK_LINE(1538)
			Float rx = 0.0;		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1539)
			Float ry = 0.0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1540)
			{
				HX_STACK_LINE(1541)
				Float _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1541)
				{
					HX_STACK_LINE(1541)
					{
						HX_STACK_LINE(1541)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1541)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1541)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1541)
					_g4 = pos->zpp_inner->x;
				}
				HX_STACK_LINE(1541)
				Float _g5 = (_g4 - this->zpp_inner->posx);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1541)
				rx = _g5;
				HX_STACK_LINE(1542)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1542)
				{
					HX_STACK_LINE(1542)
					{
						HX_STACK_LINE(1542)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1542)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1542)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1542)
					_g6 = pos->zpp_inner->y;
				}
				HX_STACK_LINE(1542)
				Float _g7 = (_g6 - this->zpp_inner->posy);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1542)
				ry = _g7;
			}
			HX_STACK_LINE(1544)
			this->zpp_inner->validate_inertia();
			HX_STACK_LINE(1545)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1545)
			{
				HX_STACK_LINE(1545)
				{
					HX_STACK_LINE(1545)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1545)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1545)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1545)
				_g8 = impulse->zpp_inner->y;
			}
			HX_STACK_LINE(1545)
			Float _g9 = (_g8 * rx);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1545)
			Float _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1545)
			{
				HX_STACK_LINE(1545)
				{
					HX_STACK_LINE(1545)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1545)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1545)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1545)
				_g10 = impulse->zpp_inner->x;
			}
			HX_STACK_LINE(1545)
			Float _g11 = (_g10 * ry);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1545)
			Float _g12 = (_g9 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1545)
			Float _g13 = (_g12 * this->zpp_inner->iinertia);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1545)
			hx::AddEq(this->zpp_inner->angvel,_g13);
			HX_STACK_LINE(1546)
			if ((pos->zpp_inner->weak)){
				HX_STACK_LINE(1550)
				{
					HX_STACK_LINE(1550)
					::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1550)
					pos->zpp_inner->outer = null();
					HX_STACK_LINE(1550)
					pos->zpp_inner = null();
					HX_STACK_LINE(1550)
					{
						HX_STACK_LINE(1550)
						::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1550)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1550)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1550)
					{
						HX_STACK_LINE(1550)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1550)
						{
							HX_STACK_LINE(1550)
							if (((o->outer != null()))){
								HX_STACK_LINE(1550)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1550)
								o->outer = null();
							}
							HX_STACK_LINE(1550)
							o->_isimmutable = null();
							HX_STACK_LINE(1550)
							o->_validate = null();
							HX_STACK_LINE(1550)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1550)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1550)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1551)
				true;
			}
			else{
				HX_STACK_LINE(1554)
				false;
			}
		}
		HX_STACK_LINE(1558)
		if ((!(sleepable))){
			HX_STACK_LINE(1559)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1559)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1561)
		if ((impulse->zpp_inner->weak)){
			HX_STACK_LINE(1565)
			{
				HX_STACK_LINE(1565)
				::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1565)
				impulse->zpp_inner->outer = null();
				HX_STACK_LINE(1565)
				impulse->zpp_inner = null();
				HX_STACK_LINE(1565)
				{
					HX_STACK_LINE(1565)
					::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1565)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1565)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1565)
				{
					HX_STACK_LINE(1565)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1565)
					{
						HX_STACK_LINE(1565)
						if (((o->outer != null()))){
							HX_STACK_LINE(1565)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1565)
							o->outer = null();
						}
						HX_STACK_LINE(1565)
						o->_isimmutable = null();
						HX_STACK_LINE(1565)
						o->_validate = null();
						HX_STACK_LINE(1565)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1565)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1565)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1566)
			true;
		}
		else{
			HX_STACK_LINE(1569)
			false;
		}
		HX_STACK_LINE(1572)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,applyImpulse,return )

::nape::phys::Body Body_obj::applyAngularImpulse( Float impulse,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_FRAME("nape.phys.Body","applyAngularImpulse",0x699fcc6b,"nape.phys.Body.applyAngularImpulse","nape/phys/Body.hx",1588,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(impulse,"impulse")
	HX_STACK_ARG(sleepable,"sleepable")
{
		HX_STACK_LINE(1592)
		if (((bool(sleepable) && bool(this->zpp_inner->component->sleeping)))){
			HX_STACK_LINE(1593)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1595)
		this->zpp_inner->validate_inertia();
		HX_STACK_LINE(1596)
		hx::AddEq(this->zpp_inner->angvel,(impulse * this->zpp_inner->iinertia));
		HX_STACK_LINE(1597)
		if ((!(sleepable))){
			HX_STACK_LINE(1598)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1598)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1600)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,applyAngularImpulse,return )

::nape::phys::Body Body_obj::translateShapes( ::nape::geom::Vec2 translation){
	HX_STACK_FRAME("nape.phys.Body","translateShapes",0x68f49b8a,"nape.phys.Body.translateShapes","nape/phys/Body.hx",1614,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(1615)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::translateShapes()"));
	HX_STACK_LINE(1627)
	bool weak = translation->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1628)
	translation->zpp_inner->weak = false;
	HX_STACK_LINE(1629)
	{
		HX_STACK_LINE(1630)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1631)
		while((true)){
			HX_STACK_LINE(1631)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1631)
				break;
			}
			HX_STACK_LINE(1632)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1633)
			s->outer->translate(translation);
			HX_STACK_LINE(1634)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1637)
	translation->zpp_inner->weak = weak;
	HX_STACK_LINE(1638)
	if ((translation->zpp_inner->weak)){
		HX_STACK_LINE(1642)
		{
			HX_STACK_LINE(1642)
			::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1642)
			translation->zpp_inner->outer = null();
			HX_STACK_LINE(1642)
			translation->zpp_inner = null();
			HX_STACK_LINE(1642)
			{
				HX_STACK_LINE(1642)
				::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1642)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1642)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1642)
			{
				HX_STACK_LINE(1642)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1642)
				{
					HX_STACK_LINE(1642)
					if (((o->outer != null()))){
						HX_STACK_LINE(1642)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1642)
						o->outer = null();
					}
					HX_STACK_LINE(1642)
					o->_isimmutable = null();
					HX_STACK_LINE(1642)
					o->_validate = null();
					HX_STACK_LINE(1642)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1642)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1642)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1643)
		true;
	}
	else{
		HX_STACK_LINE(1646)
		false;
	}
	HX_STACK_LINE(1649)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,translateShapes,return )

::nape::phys::Body Body_obj::rotateShapes( Float angle){
	HX_STACK_FRAME("nape.phys.Body","rotateShapes",0x7006dd43,"nape.phys.Body.rotateShapes","nape/phys/Body.hx",1662,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(1663)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotateShapes()"));
	HX_STACK_LINE(1667)
	{
		HX_STACK_LINE(1668)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1669)
		while((true)){
			HX_STACK_LINE(1669)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1669)
				break;
			}
			HX_STACK_LINE(1670)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1671)
			s->outer->rotate(angle);
			HX_STACK_LINE(1672)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1675)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,rotateShapes,return )

::nape::phys::Body Body_obj::scaleShapes( Float scaleX,Float scaleY){
	HX_STACK_FRAME("nape.phys.Body","scaleShapes",0x09d82ac6,"nape.phys.Body.scaleShapes","nape/phys/Body.hx",1690,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_LINE(1691)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::scaleShapes()"));
	HX_STACK_LINE(1695)
	{
		HX_STACK_LINE(1696)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1697)
		while((true)){
			HX_STACK_LINE(1697)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1697)
				break;
			}
			HX_STACK_LINE(1698)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1699)
			s->outer->scale(scaleX,scaleY);
			HX_STACK_LINE(1700)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1703)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,scaleShapes,return )

::nape::phys::Body Body_obj::transformShapes( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.phys.Body","transformShapes",0x4ab05c28,"nape.phys.Body.transformShapes","nape/phys/Body.hx",1719,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(1720)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::transformShapes()"));
	HX_STACK_LINE(1724)
	{
		HX_STACK_LINE(1725)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1726)
		while((true)){
			HX_STACK_LINE(1726)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1726)
				break;
			}
			HX_STACK_LINE(1727)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1728)
			s->outer->transform(matrix);
			HX_STACK_LINE(1729)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1732)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,transformShapes,return )

::nape::phys::Body Body_obj::align( ){
	HX_STACK_FRAME("nape.phys.Body","align",0xe66ad5af,"nape.phys.Body.align","nape/phys/Body.hx",1750,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1751)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::align()"));
	HX_STACK_LINE(1758)
	this->zpp_inner->validate_localCOM();
	HX_STACK_LINE(1759)
	::nape::geom::Vec2 dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1759)
	{
		HX_STACK_LINE(1759)
		Float x = -(this->zpp_inner->localCOMx);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1759)
		Float y = -(this->zpp_inner->localCOMy);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1759)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(1759)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1759)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(1759)
			::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1759)
			ret = _g;
		}
		else{
			HX_STACK_LINE(1759)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1759)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(1759)
			ret->zpp_pool = null();
		}
		HX_STACK_LINE(1759)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(1759)
			::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1759)
			{
				HX_STACK_LINE(1759)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1759)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1759)
				{
					HX_STACK_LINE(1759)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1759)
						::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1759)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(1759)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1759)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1759)
						ret1->next = null();
					}
					HX_STACK_LINE(1759)
					ret1->weak = false;
				}
				HX_STACK_LINE(1759)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1759)
				{
					HX_STACK_LINE(1759)
					ret1->x = x;
					HX_STACK_LINE(1759)
					ret1->y = y;
					HX_STACK_LINE(1759)
					{
					}
				}
				HX_STACK_LINE(1759)
				_g2 = ret1;
			}
			HX_STACK_LINE(1759)
			ret->zpp_inner = _g2;
			HX_STACK_LINE(1759)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1759)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1759)
			{
				HX_STACK_LINE(1759)
				{
					HX_STACK_LINE(1759)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1759)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1759)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1759)
				_g3 = ret->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1759,0xcb2bb586)
					{
						HX_STACK_LINE(1759)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1759)
						{
							HX_STACK_LINE(1759)
							{
								HX_STACK_LINE(1759)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1759)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1759)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1759)
							_g4 = ret->zpp_inner->y;
						}
						HX_STACK_LINE(1759)
						return (_g4 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(1759)
			if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
				HX_STACK_LINE(1759)
				{
					HX_STACK_LINE(1759)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1759)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1759)
					{
					}
				}
				HX_STACK_LINE(1759)
				{
					HX_STACK_LINE(1759)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1759)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(1759)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(1759)
			ret;
		}
		HX_STACK_LINE(1759)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1759)
		dx = ret;
	}
	HX_STACK_LINE(1760)
	this->translateShapes(dx);
	HX_STACK_LINE(1761)
	::nape::geom::Vec2 dx2 = this->localVectorToWorld(dx,null());		HX_STACK_VAR(dx2,"dx2");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1762,0xcb2bb586)
			{
				HX_STACK_LINE(1762)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1762)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1762)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1762)
	(_Function_1_1::Block(this))->subeq(dx2);
	HX_STACK_LINE(1763)
	if (((this->zpp_inner->pre_posx < ::Math_obj::POSITIVE_INFINITY))){
		HX_STACK_LINE(1764)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1773)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1773)
		{
			HX_STACK_LINE(1773)
			{
				HX_STACK_LINE(1773)
				::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1773)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1773)
			_g5 = dx2->zpp_inner->x;
		}
		HX_STACK_LINE(1773)
		Float _g6 = (_g5 * t);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1773)
		hx::SubEq(this->zpp_inner->pre_posx,_g6);
		HX_STACK_LINE(1774)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1774)
		{
			HX_STACK_LINE(1774)
			{
				HX_STACK_LINE(1774)
				::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1774)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1774)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1774)
			_g7 = dx2->zpp_inner->y;
		}
		HX_STACK_LINE(1774)
		Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1774)
		hx::SubEq(this->zpp_inner->pre_posy,_g8);
	}
	HX_STACK_LINE(1776)
	{
		HX_STACK_LINE(1776)
		::zpp_nape::geom::ZPP_Vec2 inner = dx->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1776)
		dx->zpp_inner->outer = null();
		HX_STACK_LINE(1776)
		dx->zpp_inner = null();
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			::nape::geom::Vec2 o = dx;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1776)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1776)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1776)
			{
				HX_STACK_LINE(1776)
				if (((o->outer != null()))){
					HX_STACK_LINE(1776)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1776)
					o->outer = null();
				}
				HX_STACK_LINE(1776)
				o->_isimmutable = null();
				HX_STACK_LINE(1776)
				o->_validate = null();
				HX_STACK_LINE(1776)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1776)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1777)
	{
		HX_STACK_LINE(1777)
		::zpp_nape::geom::ZPP_Vec2 inner = dx2->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1777)
		dx2->zpp_inner->outer = null();
		HX_STACK_LINE(1777)
		dx2->zpp_inner = null();
		HX_STACK_LINE(1777)
		{
			HX_STACK_LINE(1777)
			::nape::geom::Vec2 o = dx2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1777)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1777)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(1777)
		{
			HX_STACK_LINE(1777)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1777)
			{
				HX_STACK_LINE(1777)
				if (((o->outer != null()))){
					HX_STACK_LINE(1777)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1777)
					o->outer = null();
				}
				HX_STACK_LINE(1777)
				o->_isimmutable = null();
				HX_STACK_LINE(1777)
				o->_validate = null();
				HX_STACK_LINE(1777)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1777)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1777)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1778)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,align,return )

::nape::phys::Body Body_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_FRAME("nape.phys.Body","rotate",0x4495d431,"nape.phys.Body.rotate","nape/phys/Body.hx",1793,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(centre,"centre")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(1805)
	bool weak = centre->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1806)
	centre->zpp_inner->weak = false;
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1807,0xcb2bb586)
			{
				HX_STACK_LINE(1807)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1807)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1807)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1807)
	::nape::geom::Vec2 del = (_Function_1_1::Block(this))->sub(centre,null());		HX_STACK_VAR(del,"del");
	HX_STACK_LINE(1808)
	del->rotate(angle);
	HX_STACK_LINE(1809)
	{
		HX_STACK_LINE(1809)
		::nape::geom::Vec2 position = centre->add(del,true);		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1809)
			{
				HX_STACK_LINE(1809)
				if (((this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1809)
					this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1809)
				_this = this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(1809)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1809)
			{
				HX_STACK_LINE(1809)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1809)
				{
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1809)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1809)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1809)
					x = position->zpp_inner->x;
				}
				HX_STACK_LINE(1809)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1809)
				{
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1809)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1809)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1809)
					y = position->zpp_inner->y;
				}
				HX_STACK_LINE(1809)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1809)
				{
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1809)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1809)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1809)
					_g = _this->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( Float &y,::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1809,0xcb2bb586)
						{
							HX_STACK_LINE(1809)
							Float _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1809)
							{
								HX_STACK_LINE(1809)
								{
									HX_STACK_LINE(1809)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1809)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(1809)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1809)
								_g1 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(1809)
							return (_g1 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1809)
				if ((!(((  (((_g == x))) ? bool(_Function_4_1::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(1809)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(1809)
						{
						}
					}
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1809)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(1809)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(1809)
				ret = _this;
			}
			HX_STACK_LINE(1809)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(1809)
				{
					HX_STACK_LINE(1809)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1809)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(1809)
					position->zpp_inner = null();
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1809)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1809)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1809)
					{
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1809)
						{
							HX_STACK_LINE(1809)
							if (((o->outer != null()))){
								HX_STACK_LINE(1809)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1809)
								o->outer = null();
							}
							HX_STACK_LINE(1809)
							o->_isimmutable = null();
							HX_STACK_LINE(1809)
							o->_validate = null();
							HX_STACK_LINE(1809)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1809)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1809)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1809)
				true;
			}
			else{
				HX_STACK_LINE(1809)
				false;
			}
			HX_STACK_LINE(1809)
			ret;
		}
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			if (((this->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(1809)
				this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(1809)
			this->zpp_inner->wrap_pos;
		}
	}
	HX_STACK_LINE(1810)
	{
		HX_STACK_LINE(1810)
		::zpp_nape::geom::ZPP_Vec2 inner = del->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1810)
		del->zpp_inner->outer = null();
		HX_STACK_LINE(1810)
		del->zpp_inner = null();
		HX_STACK_LINE(1810)
		{
			HX_STACK_LINE(1810)
			::nape::geom::Vec2 o = del;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1810)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(1810)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(1810)
		{
			HX_STACK_LINE(1810)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1810)
			{
				HX_STACK_LINE(1810)
				if (((o->outer != null()))){
					HX_STACK_LINE(1810)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1810)
					o->outer = null();
				}
				HX_STACK_LINE(1810)
				o->_isimmutable = null();
				HX_STACK_LINE(1810)
				o->_validate = null();
				HX_STACK_LINE(1810)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1810)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1810)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1811)
	{
		HX_STACK_LINE(1811)
		::nape::phys::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1811)
		{
			HX_STACK_LINE(1811)
			Float rotation = (_g->zpp_inner->rot + angle);		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(1811)
			{
				HX_STACK_LINE(1811)
				_g->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
				HX_STACK_LINE(1811)
				if (((_g->zpp_inner->rot != rotation))){
					HX_STACK_LINE(1811)
					_g->zpp_inner->rot = rotation;
					HX_STACK_LINE(1811)
					{
						HX_STACK_LINE(1811)
						::zpp_nape::phys::ZPP_Body _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1811)
						_this->zip_axis = true;
						HX_STACK_LINE(1811)
						{
							HX_STACK_LINE(1811)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1811)
							while((true)){
								HX_STACK_LINE(1811)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(1811)
									break;
								}
								HX_STACK_LINE(1811)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1811)
								{
									HX_STACK_LINE(1811)
									if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(1811)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(1811)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(1811)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(1811)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1811)
						_this->zip_worldCOM = true;
					}
					HX_STACK_LINE(1811)
					_g->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(1811)
			_g->zpp_inner->rot;
		}
	}
	HX_STACK_LINE(1812)
	centre->zpp_inner->weak = weak;
	HX_STACK_LINE(1813)
	if ((centre->zpp_inner->weak)){
		HX_STACK_LINE(1817)
		{
			HX_STACK_LINE(1817)
			::zpp_nape::geom::ZPP_Vec2 inner = centre->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1817)
			centre->zpp_inner->outer = null();
			HX_STACK_LINE(1817)
			centre->zpp_inner = null();
			HX_STACK_LINE(1817)
			{
				HX_STACK_LINE(1817)
				::nape::geom::Vec2 o = centre;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1817)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1817)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1817)
			{
				HX_STACK_LINE(1817)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1817)
				{
					HX_STACK_LINE(1817)
					if (((o->outer != null()))){
						HX_STACK_LINE(1817)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1817)
						o->outer = null();
					}
					HX_STACK_LINE(1817)
					o->_isimmutable = null();
					HX_STACK_LINE(1817)
					o->_validate = null();
					HX_STACK_LINE(1817)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1817)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1817)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1818)
		true;
	}
	else{
		HX_STACK_LINE(1821)
		false;
	}
	HX_STACK_LINE(1824)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rotate,return )

::nape::phys::Body Body_obj::setShapeMaterials( ::nape::phys::Material material){
	HX_STACK_FRAME("nape.phys.Body","setShapeMaterials",0x701983b7,"nape.phys.Body.setShapeMaterials","nape/phys/Body.hx",1835,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(material,"material")
	HX_STACK_LINE(1836)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeMaterials()"));
	HX_STACK_LINE(1840)
	{
		HX_STACK_LINE(1841)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1842)
		while((true)){
			HX_STACK_LINE(1842)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1842)
				break;
			}
			HX_STACK_LINE(1843)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1844)
			{
				HX_STACK_LINE(1844)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1844)
				{
					HX_STACK_LINE(1844)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
					HX_STACK_LINE(1844)
					_this->zpp_inner->setMaterial(material->zpp_inner);
				}
				HX_STACK_LINE(1844)
				_this->zpp_inner->material->wrapper();
			}
			HX_STACK_LINE(1845)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1848)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeMaterials,return )

::nape::phys::Body Body_obj::setShapeFilters( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.phys.Body","setShapeFilters",0x8194d6c6,"nape.phys.Body.setShapeFilters","nape/phys/Body.hx",1859,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(1860)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFilters()"));
	HX_STACK_LINE(1864)
	{
		HX_STACK_LINE(1865)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1866)
		while((true)){
			HX_STACK_LINE(1866)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1866)
				break;
			}
			HX_STACK_LINE(1867)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1868)
			{
				HX_STACK_LINE(1868)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1868)
				{
					HX_STACK_LINE(1868)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
					HX_STACK_LINE(1868)
					_this->zpp_inner->setFilter(filter->zpp_inner);
				}
				HX_STACK_LINE(1868)
				_this->zpp_inner->filter->wrapper();
			}
			HX_STACK_LINE(1869)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1872)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFilters,return )

::nape::phys::Body Body_obj::setShapeFluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_FRAME("nape.phys.Body","setShapeFluidProperties",0x85eac2a8,"nape.phys.Body.setShapeFluidProperties","nape/phys/Body.hx",1883,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidProperties,"fluidProperties")
	HX_STACK_LINE(1884)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFluidProperties()"));
	HX_STACK_LINE(1888)
	{
		HX_STACK_LINE(1889)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1890)
		while((true)){
			HX_STACK_LINE(1890)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1890)
				break;
			}
			HX_STACK_LINE(1891)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1892)
			{
				HX_STACK_LINE(1892)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1892)
				_this->zpp_inner->setFluid(fluidProperties->zpp_inner);
				HX_STACK_LINE(1892)
				{
					HX_STACK_LINE(1892)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
					HX_STACK_LINE(1892)
					if (((_this->zpp_inner->fluidProperties == null()))){
						HX_STACK_LINE(1892)
						_this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
					}
					HX_STACK_LINE(1892)
					_this->zpp_inner->fluidProperties->wrapper();
				}
			}
			HX_STACK_LINE(1893)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1896)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFluidProperties,return )

::nape::geom::Vec2 Body_obj::get_localCOM( ){
	HX_STACK_FRAME("nape.phys.Body","get_localCOM",0x29880df5,"nape.phys.Body.get_localCOM","nape/phys/Body.hx",1908,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1912)
	if (((this->zpp_inner->wrap_localCOM == null()))){
		HX_STACK_LINE(1913)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1913)
		{
			HX_STACK_LINE(1913)
			Float x = this->zpp_inner->localCOMx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1913)
			Float y = this->zpp_inner->localCOMy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1913)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1913)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1913)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1913)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1913)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1913)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1913)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1913)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(1913)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(1913)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1913)
				{
					HX_STACK_LINE(1913)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1913)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1913)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1913)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(1913)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1913)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1913)
							ret1->next = null();
						}
						HX_STACK_LINE(1913)
						ret1->weak = false;
					}
					HX_STACK_LINE(1913)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						ret1->x = x;
						HX_STACK_LINE(1913)
						ret1->y = y;
						HX_STACK_LINE(1913)
						{
						}
					}
					HX_STACK_LINE(1913)
					_g2 = ret1;
				}
				HX_STACK_LINE(1913)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(1913)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1913)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1913)
				{
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1913)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1913)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1913)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1913,0xcb2bb586)
						{
							HX_STACK_LINE(1913)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1913)
							{
								HX_STACK_LINE(1913)
								{
									HX_STACK_LINE(1913)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1913)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1913)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1913)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(1913)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1913)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1913)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1913)
						{
						}
					}
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1913)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1913)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1913)
				ret;
			}
			HX_STACK_LINE(1913)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1913)
			_g5 = ret;
		}
		HX_STACK_LINE(1913)
		this->zpp_inner->wrap_localCOM = _g5;
		HX_STACK_LINE(1914)
		this->zpp_inner->wrap_localCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1915)
		this->zpp_inner->wrap_localCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1916)
		this->zpp_inner->wrap_localCOM->zpp_inner->_validate = this->zpp_inner->getlocalCOM_dyn();
	}
	HX_STACK_LINE(1918)
	return this->zpp_inner->wrap_localCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_localCOM,return )

::nape::geom::Vec2 Body_obj::get_worldCOM( ){
	HX_STACK_FRAME("nape.phys.Body","get_worldCOM",0xee2c0b6e,"nape.phys.Body.get_worldCOM","nape/phys/Body.hx",1930,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1934)
	if (((this->zpp_inner->wrap_worldCOM == null()))){
		HX_STACK_LINE(1935)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1935)
		{
			HX_STACK_LINE(1935)
			Float x = this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1935)
			Float y = this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1935)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1935)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1935)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1935)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1935)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1935)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1935)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1935)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(1935)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(1935)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1935)
				{
					HX_STACK_LINE(1935)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1935)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1935)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1935)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(1935)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1935)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1935)
							ret1->next = null();
						}
						HX_STACK_LINE(1935)
						ret1->weak = false;
					}
					HX_STACK_LINE(1935)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						ret1->x = x;
						HX_STACK_LINE(1935)
						ret1->y = y;
						HX_STACK_LINE(1935)
						{
						}
					}
					HX_STACK_LINE(1935)
					_g2 = ret1;
				}
				HX_STACK_LINE(1935)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(1935)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1935)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1935)
				{
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1935)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1935)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1935)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1935,0xcb2bb586)
						{
							HX_STACK_LINE(1935)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1935)
							{
								HX_STACK_LINE(1935)
								{
									HX_STACK_LINE(1935)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1935)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1935)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1935)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(1935)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(1935)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1935)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1935)
						{
						}
					}
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1935)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1935)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1935)
				ret;
			}
			HX_STACK_LINE(1935)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1935)
			_g5 = ret;
		}
		HX_STACK_LINE(1935)
		this->zpp_inner->wrap_worldCOM = _g5;
		HX_STACK_LINE(1936)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1937)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1938)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = this->zpp_inner->getworldCOM_dyn();
	}
	HX_STACK_LINE(1940)
	return this->zpp_inner->wrap_worldCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_worldCOM,return )

::nape::geom::Vec3 Body_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","normalImpulse",0x6f782238,"nape.phys.Body.normalImpulse","nape/phys/Body.hx",1955,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(1956)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(1957)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(1974)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(1975)
		{
			HX_STACK_LINE(1976)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(1977)
			{
				struct _Function_3_1{
					inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1977,0xcb2bb586)
						{
							HX_STACK_LINE(1977)
							if (((__this->zpp_inner->wrap_arbiters == null()))){
								HX_STACK_LINE(1977)
								::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1977)
								__this->zpp_inner->wrap_arbiters = _g;
							}
							HX_STACK_LINE(1977)
							return __this->zpp_inner->wrap_arbiters;
						}
						return null();
					}
				};
				HX_STACK_LINE(1977)
				::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1977)
				while((true)){
					struct _Function_4_1{
						inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1977,0xcb2bb586)
							{
								HX_STACK_LINE(1977)
								_g->zpp_inner->zpp_inner->valmod();
								HX_STACK_LINE(1977)
								int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(1977)
								_g->zpp_critical = true;
								struct _Function_5_1{
									inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1977,0xcb2bb586)
										{
											HX_STACK_LINE(1977)
											{
												HX_STACK_LINE(1977)
												_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
												HX_STACK_LINE(1977)
												::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
												HX_STACK_LINE(1977)
												_g->zpp_inner = null();
											}
											HX_STACK_LINE(1977)
											return false;
										}
										return null();
									}
								};
								HX_STACK_LINE(1977)
								return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1977)
					if ((!(_Function_4_1::Block(_g)))){
						HX_STACK_LINE(1977)
						break;
					}
					HX_STACK_LINE(1977)
					::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(1977)
					{
						HX_STACK_LINE(1977)
						_g->zpp_critical = false;
						HX_STACK_LINE(1977)
						int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1977)
						oarb = _g->zpp_inner->at(_g1);
					}
					HX_STACK_LINE(1978)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(1979)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(1979)
						continue;
					}
					HX_STACK_LINE(1980)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(1980)
						continue;
					}
					HX_STACK_LINE(1981)
					{
						struct _Function_5_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",1982,0xcb2bb586)
								{
									HX_STACK_LINE(1982)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1982)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1982)
						::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->normalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(1983)
						{
							HX_STACK_LINE(1984)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1985)
							{
								HX_STACK_LINE(1986)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1995)
								Float _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1995)
								{
									HX_STACK_LINE(1995)
									{
										HX_STACK_LINE(1995)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1995)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1995)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1995)
									_g2 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(1995)
								Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1995)
								hx::AddEq(retx,_g3);
								HX_STACK_LINE(1996)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(1996)
								{
									HX_STACK_LINE(1996)
									{
										HX_STACK_LINE(1996)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1996)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1996)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1996)
									_g4 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(1996)
								Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(1996)
								hx::AddEq(rety,_g5);
							}
							HX_STACK_LINE(1998)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1998)
							{
								HX_STACK_LINE(1998)
								{
									HX_STACK_LINE(1998)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1998)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1998)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1998)
								_g6 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(1998)
							Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1998)
							hx::AddEq(retz,_g7);
						}
						HX_STACK_LINE(2000)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2004)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,normalImpulse,return )

::nape::geom::Vec3 Body_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","tangentImpulse",0x28568246,"nape.phys.Body.tangentImpulse","nape/phys/Body.hx",2019,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2020)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2021)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2038)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2039)
		{
			HX_STACK_LINE(2040)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2041)
			{
				struct _Function_3_1{
					inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2041,0xcb2bb586)
						{
							HX_STACK_LINE(2041)
							if (((__this->zpp_inner->wrap_arbiters == null()))){
								HX_STACK_LINE(2041)
								::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2041)
								__this->zpp_inner->wrap_arbiters = _g;
							}
							HX_STACK_LINE(2041)
							return __this->zpp_inner->wrap_arbiters;
						}
						return null();
					}
				};
				HX_STACK_LINE(2041)
				::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2041)
				while((true)){
					struct _Function_4_1{
						inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2041,0xcb2bb586)
							{
								HX_STACK_LINE(2041)
								_g->zpp_inner->zpp_inner->valmod();
								HX_STACK_LINE(2041)
								int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2041)
								_g->zpp_critical = true;
								struct _Function_5_1{
									inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2041,0xcb2bb586)
										{
											HX_STACK_LINE(2041)
											{
												HX_STACK_LINE(2041)
												_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
												HX_STACK_LINE(2041)
												::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
												HX_STACK_LINE(2041)
												_g->zpp_inner = null();
											}
											HX_STACK_LINE(2041)
											return false;
										}
										return null();
									}
								};
								HX_STACK_LINE(2041)
								return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2041)
					if ((!(_Function_4_1::Block(_g)))){
						HX_STACK_LINE(2041)
						break;
					}
					HX_STACK_LINE(2041)
					::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2041)
					{
						HX_STACK_LINE(2041)
						_g->zpp_critical = false;
						HX_STACK_LINE(2041)
						int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2041)
						oarb = _g->zpp_inner->at(_g1);
					}
					HX_STACK_LINE(2042)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2043)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2043)
						continue;
					}
					HX_STACK_LINE(2044)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2044)
						continue;
					}
					HX_STACK_LINE(2045)
					{
						struct _Function_5_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2046,0xcb2bb586)
								{
									HX_STACK_LINE(2046)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2046)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2046)
						::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->tangentImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2047)
						{
							HX_STACK_LINE(2048)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2049)
							{
								HX_STACK_LINE(2050)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2059)
								Float _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(2059)
								{
									HX_STACK_LINE(2059)
									{
										HX_STACK_LINE(2059)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2059)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2059)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2059)
									_g2 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(2059)
								Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(2059)
								hx::AddEq(retx,_g3);
								HX_STACK_LINE(2060)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(2060)
								{
									HX_STACK_LINE(2060)
									{
										HX_STACK_LINE(2060)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2060)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2060)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2060)
									_g4 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(2060)
								Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(2060)
								hx::AddEq(rety,_g5);
							}
							HX_STACK_LINE(2062)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(2062)
							{
								HX_STACK_LINE(2062)
								{
									HX_STACK_LINE(2062)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2062)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2062)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2062)
								_g6 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(2062)
							Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(2062)
							hx::AddEq(retz,_g7);
						}
						HX_STACK_LINE(2064)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2068)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,tangentImpulse,return )

::nape::geom::Vec3 Body_obj::totalContactsImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","totalContactsImpulse",0xcd704014,"nape.phys.Body.totalContactsImpulse","nape/phys/Body.hx",2083,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2084)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2085)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2102)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2103)
		{
			HX_STACK_LINE(2104)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2105)
			{
				struct _Function_3_1{
					inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2105,0xcb2bb586)
						{
							HX_STACK_LINE(2105)
							if (((__this->zpp_inner->wrap_arbiters == null()))){
								HX_STACK_LINE(2105)
								::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2105)
								__this->zpp_inner->wrap_arbiters = _g;
							}
							HX_STACK_LINE(2105)
							return __this->zpp_inner->wrap_arbiters;
						}
						return null();
					}
				};
				HX_STACK_LINE(2105)
				::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2105)
				while((true)){
					struct _Function_4_1{
						inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2105,0xcb2bb586)
							{
								HX_STACK_LINE(2105)
								_g->zpp_inner->zpp_inner->valmod();
								HX_STACK_LINE(2105)
								int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2105)
								_g->zpp_critical = true;
								struct _Function_5_1{
									inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2105,0xcb2bb586)
										{
											HX_STACK_LINE(2105)
											{
												HX_STACK_LINE(2105)
												_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
												HX_STACK_LINE(2105)
												::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
												HX_STACK_LINE(2105)
												_g->zpp_inner = null();
											}
											HX_STACK_LINE(2105)
											return false;
										}
										return null();
									}
								};
								HX_STACK_LINE(2105)
								return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2105)
					if ((!(_Function_4_1::Block(_g)))){
						HX_STACK_LINE(2105)
						break;
					}
					HX_STACK_LINE(2105)
					::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2105)
					{
						HX_STACK_LINE(2105)
						_g->zpp_critical = false;
						HX_STACK_LINE(2105)
						int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2105)
						oarb = _g->zpp_inner->at(_g1);
					}
					HX_STACK_LINE(2106)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2107)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2107)
						continue;
					}
					HX_STACK_LINE(2108)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2108)
						continue;
					}
					HX_STACK_LINE(2109)
					{
						struct _Function_5_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2110,0xcb2bb586)
								{
									HX_STACK_LINE(2110)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2110)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2110)
						::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2111)
						{
							HX_STACK_LINE(2112)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2113)
							{
								HX_STACK_LINE(2114)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2123)
								Float _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(2123)
								{
									HX_STACK_LINE(2123)
									{
										HX_STACK_LINE(2123)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2123)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2123)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2123)
									_g2 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(2123)
								Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(2123)
								hx::AddEq(retx,_g3);
								HX_STACK_LINE(2124)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(2124)
								{
									HX_STACK_LINE(2124)
									{
										HX_STACK_LINE(2124)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2124)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2124)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2124)
									_g4 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(2124)
								Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(2124)
								hx::AddEq(rety,_g5);
							}
							HX_STACK_LINE(2126)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(2126)
							{
								HX_STACK_LINE(2126)
								{
									HX_STACK_LINE(2126)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2126)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2126)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2126)
								_g6 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(2126)
							Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(2126)
							hx::AddEq(retz,_g7);
						}
						HX_STACK_LINE(2128)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2132)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalContactsImpulse,return )

Float Body_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","rollingImpulse",0x8df60986,"nape.phys.Body.rollingImpulse","nape/phys/Body.hx",2147,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2148)
		Float ret = 0.0;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2149)
		{
			HX_STACK_LINE(2150)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2151)
			{
				struct _Function_3_1{
					inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2151,0xcb2bb586)
						{
							HX_STACK_LINE(2151)
							if (((__this->zpp_inner->wrap_arbiters == null()))){
								HX_STACK_LINE(2151)
								::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2151)
								__this->zpp_inner->wrap_arbiters = _g;
							}
							HX_STACK_LINE(2151)
							return __this->zpp_inner->wrap_arbiters;
						}
						return null();
					}
				};
				HX_STACK_LINE(2151)
				::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2151)
				while((true)){
					struct _Function_4_1{
						inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2151,0xcb2bb586)
							{
								HX_STACK_LINE(2151)
								_g->zpp_inner->zpp_inner->valmod();
								HX_STACK_LINE(2151)
								int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2151)
								_g->zpp_critical = true;
								struct _Function_5_1{
									inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2151,0xcb2bb586)
										{
											HX_STACK_LINE(2151)
											{
												HX_STACK_LINE(2151)
												_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
												HX_STACK_LINE(2151)
												::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
												HX_STACK_LINE(2151)
												_g->zpp_inner = null();
											}
											HX_STACK_LINE(2151)
											return false;
										}
										return null();
									}
								};
								HX_STACK_LINE(2151)
								return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2151)
					if ((!(_Function_4_1::Block(_g)))){
						HX_STACK_LINE(2151)
						break;
					}
					HX_STACK_LINE(2151)
					::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2151)
					{
						HX_STACK_LINE(2151)
						_g->zpp_critical = false;
						HX_STACK_LINE(2151)
						int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2151)
						oarb = _g->zpp_inner->at(_g1);
					}
					HX_STACK_LINE(2152)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2153)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2153)
						continue;
					}
					HX_STACK_LINE(2154)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2154)
						continue;
					}
					HX_STACK_LINE(2155)
					{
						struct _Function_5_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2156,0xcb2bb586)
								{
									HX_STACK_LINE(2156)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2156)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2156)
						Float _g2 = (_Function_5_1::Block(arb))->rollingImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2156)
						hx::AddEq(ret,_g2);
					}
				}
			}
		}
		HX_STACK_LINE(2160)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rollingImpulse,return )

::nape::geom::Vec3 Body_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","buoyancyImpulse",0x9134aedf,"nape.phys.Body.buoyancyImpulse","nape/phys/Body.hx",2173,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2174)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2175)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2192)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2193)
	{
		HX_STACK_LINE(2194)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2195)
		{
			struct _Function_3_1{
				inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2195,0xcb2bb586)
					{
						HX_STACK_LINE(2195)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2195)
							::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2195)
							__this->zpp_inner->wrap_arbiters = _g;
						}
						HX_STACK_LINE(2195)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2195)
			::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2195)
			while((true)){
				struct _Function_4_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2195,0xcb2bb586)
						{
							HX_STACK_LINE(2195)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(2195)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2195)
							_g->zpp_critical = true;
							struct _Function_5_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2195,0xcb2bb586)
									{
										HX_STACK_LINE(2195)
										{
											HX_STACK_LINE(2195)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(2195)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(2195)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(2195)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(2195)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2195)
				if ((!(_Function_4_1::Block(_g)))){
					HX_STACK_LINE(2195)
					break;
				}
				HX_STACK_LINE(2195)
				::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2195)
				{
					HX_STACK_LINE(2195)
					_g->zpp_critical = false;
					HX_STACK_LINE(2195)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2195)
					oarb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(2196)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2197)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2197)
					continue;
				}
				HX_STACK_LINE(2198)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2198)
					continue;
				}
				HX_STACK_LINE(2199)
				{
					struct _Function_5_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2200,0xcb2bb586)
							{
								HX_STACK_LINE(2200)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2200)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2200)
					::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->buoyancyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2201)
					{
						HX_STACK_LINE(2202)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2203)
						{
							HX_STACK_LINE(2204)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2213)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(2213)
							{
								HX_STACK_LINE(2213)
								{
									HX_STACK_LINE(2213)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2213)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2213)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2213)
								_g2 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2213)
							Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(2213)
							hx::AddEq(retx,_g3);
							HX_STACK_LINE(2214)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2214)
							{
								HX_STACK_LINE(2214)
								{
									HX_STACK_LINE(2214)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2214)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2214)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2214)
								_g4 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2214)
							Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(2214)
							hx::AddEq(rety,_g5);
						}
						HX_STACK_LINE(2216)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(2216)
						{
							HX_STACK_LINE(2216)
							{
								HX_STACK_LINE(2216)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2216)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2216)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2216)
							_g6 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2216)
						Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(2216)
						hx::AddEq(retz,_g7);
					}
					HX_STACK_LINE(2218)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2222)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,buoyancyImpulse,return )

::nape::geom::Vec3 Body_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","dragImpulse",0x2488fd8b,"nape.phys.Body.dragImpulse","nape/phys/Body.hx",2235,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2236)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2237)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2254)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2255)
	{
		HX_STACK_LINE(2256)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2257)
		{
			struct _Function_3_1{
				inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2257,0xcb2bb586)
					{
						HX_STACK_LINE(2257)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2257)
							::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2257)
							__this->zpp_inner->wrap_arbiters = _g;
						}
						HX_STACK_LINE(2257)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2257)
			::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2257)
			while((true)){
				struct _Function_4_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2257,0xcb2bb586)
						{
							HX_STACK_LINE(2257)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(2257)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2257)
							_g->zpp_critical = true;
							struct _Function_5_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2257,0xcb2bb586)
									{
										HX_STACK_LINE(2257)
										{
											HX_STACK_LINE(2257)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(2257)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(2257)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(2257)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(2257)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2257)
				if ((!(_Function_4_1::Block(_g)))){
					HX_STACK_LINE(2257)
					break;
				}
				HX_STACK_LINE(2257)
				::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2257)
				{
					HX_STACK_LINE(2257)
					_g->zpp_critical = false;
					HX_STACK_LINE(2257)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2257)
					oarb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(2258)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2259)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2259)
					continue;
				}
				HX_STACK_LINE(2260)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2260)
					continue;
				}
				HX_STACK_LINE(2261)
				{
					struct _Function_5_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2262,0xcb2bb586)
							{
								HX_STACK_LINE(2262)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2262)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2262)
					::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->dragImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2263)
					{
						HX_STACK_LINE(2264)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2265)
						{
							HX_STACK_LINE(2266)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2275)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(2275)
							{
								HX_STACK_LINE(2275)
								{
									HX_STACK_LINE(2275)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2275)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2275)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2275)
								_g2 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2275)
							Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(2275)
							hx::AddEq(retx,_g3);
							HX_STACK_LINE(2276)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2276)
							{
								HX_STACK_LINE(2276)
								{
									HX_STACK_LINE(2276)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2276)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2276)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2276)
								_g4 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2276)
							Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(2276)
							hx::AddEq(rety,_g5);
						}
						HX_STACK_LINE(2278)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(2278)
						{
							HX_STACK_LINE(2278)
							{
								HX_STACK_LINE(2278)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2278)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2278)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2278)
							_g6 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2278)
						Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(2278)
						hx::AddEq(retz,_g7);
					}
					HX_STACK_LINE(2280)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2284)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,dragImpulse,return )

::nape::geom::Vec3 Body_obj::totalFluidImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","totalFluidImpulse",0x5f513f99,"nape.phys.Body.totalFluidImpulse","nape/phys/Body.hx",2297,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2298)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2299)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2316)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2317)
	{
		HX_STACK_LINE(2318)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2319)
		{
			struct _Function_3_1{
				inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2319,0xcb2bb586)
					{
						HX_STACK_LINE(2319)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2319)
							::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2319)
							__this->zpp_inner->wrap_arbiters = _g;
						}
						HX_STACK_LINE(2319)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2319)
			::nape::dynamics::ArbiterIterator _g = (_Function_3_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2319)
			while((true)){
				struct _Function_4_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2319,0xcb2bb586)
						{
							HX_STACK_LINE(2319)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(2319)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2319)
							_g->zpp_critical = true;
							struct _Function_5_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2319,0xcb2bb586)
									{
										HX_STACK_LINE(2319)
										{
											HX_STACK_LINE(2319)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(2319)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(2319)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(2319)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(2319)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_5_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2319)
				if ((!(_Function_4_1::Block(_g)))){
					HX_STACK_LINE(2319)
					break;
				}
				HX_STACK_LINE(2319)
				::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2319)
				{
					HX_STACK_LINE(2319)
					_g->zpp_critical = false;
					HX_STACK_LINE(2319)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2319)
					oarb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(2320)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2321)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2321)
					continue;
				}
				HX_STACK_LINE(2322)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2322)
					continue;
				}
				HX_STACK_LINE(2323)
				{
					struct _Function_5_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2324,0xcb2bb586)
							{
								HX_STACK_LINE(2324)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2324)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2324)
					::nape::geom::Vec3 imp = (_Function_5_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2325)
					{
						HX_STACK_LINE(2326)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2327)
						{
							HX_STACK_LINE(2328)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2337)
							Float _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(2337)
							{
								HX_STACK_LINE(2337)
								{
									HX_STACK_LINE(2337)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2337)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2337)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2337)
								_g2 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2337)
							Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(2337)
							hx::AddEq(retx,_g3);
							HX_STACK_LINE(2338)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2338)
							{
								HX_STACK_LINE(2338)
								{
									HX_STACK_LINE(2338)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2338)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2338)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2338)
								_g4 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2338)
							Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(2338)
							hx::AddEq(rety,_g5);
						}
						HX_STACK_LINE(2340)
						Float _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(2340)
						{
							HX_STACK_LINE(2340)
							{
								HX_STACK_LINE(2340)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2340)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2340)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2340)
							_g6 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2340)
						Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(2340)
						hx::AddEq(retz,_g7);
					}
					HX_STACK_LINE(2342)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2346)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,totalFluidImpulse,return )

::nape::geom::Vec3 Body_obj::constraintsImpulse( ){
	HX_STACK_FRAME("nape.phys.Body","constraintsImpulse",0x3e34d8b5,"nape.phys.Body.constraintsImpulse","nape/phys/Body.hx",2354,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2355)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2356)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2373)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2374)
	{
		HX_STACK_LINE(2375)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2376)
		while((true)){
			HX_STACK_LINE(2376)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(2376)
				break;
			}
			HX_STACK_LINE(2377)
			::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(2378)
			{
				HX_STACK_LINE(2379)
				::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2380)
				{
					HX_STACK_LINE(2381)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2382)
					{
						HX_STACK_LINE(2383)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2392)
						Float _g;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2392)
						{
							HX_STACK_LINE(2392)
							{
								HX_STACK_LINE(2392)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2392)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2392)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2392)
							_g = imp->zpp_inner->x;
						}
						HX_STACK_LINE(2392)
						Float _g1 = (_g * t1);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2392)
						hx::AddEq(retx,_g1);
						HX_STACK_LINE(2393)
						Float _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2393)
						{
							HX_STACK_LINE(2393)
							{
								HX_STACK_LINE(2393)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2393)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2393)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2393)
							_g2 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(2393)
						Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(2393)
						hx::AddEq(rety,_g3);
					}
					HX_STACK_LINE(2395)
					Float _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2395)
					{
						HX_STACK_LINE(2395)
						{
							HX_STACK_LINE(2395)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2395)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(2395)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2395)
						_g4 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(2395)
					Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2395)
					hx::AddEq(retz,_g5);
				}
				HX_STACK_LINE(2397)
				imp->dispose();
			}
			HX_STACK_LINE(2399)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(2402)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,constraintsImpulse,return )

::nape::geom::Vec3 Body_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","totalImpulse",0xab4a77a7,"nape.phys.Body.totalImpulse","nape/phys/Body.hx",2420,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2421)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2422)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2439)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2440)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2441)
		{
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( hx::ObjectPtr< ::nape::phys::Body_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2441,0xcb2bb586)
					{
						HX_STACK_LINE(2441)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2441)
							::nape::dynamics::ArbiterList _g = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2441)
							__this->zpp_inner->wrap_arbiters = _g;
						}
						HX_STACK_LINE(2441)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2441)
			::nape::dynamics::ArbiterIterator _g = (_Function_2_1::Block(this))->iterator();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2441)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2441,0xcb2bb586)
						{
							HX_STACK_LINE(2441)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(2441)
							int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2441)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::dynamics::ArbiterIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Body.hx",2441,0xcb2bb586)
									{
										HX_STACK_LINE(2441)
										{
											HX_STACK_LINE(2441)
											_g->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
											HX_STACK_LINE(2441)
											::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(2441)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(2441)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(2441)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2441)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(2441)
					break;
				}
				HX_STACK_LINE(2441)
				::nape::dynamics::Arbiter oarb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2441)
				{
					HX_STACK_LINE(2441)
					_g->zpp_critical = false;
					HX_STACK_LINE(2441)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2441)
					oarb = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(2442)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2443)
				if (((arb->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))){
					HX_STACK_LINE(2443)
					continue;
				}
				HX_STACK_LINE(2444)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2444)
					continue;
				}
				HX_STACK_LINE(2445)
				::nape::geom::Vec3 imp = arb->wrapper()->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2446)
				{
					HX_STACK_LINE(2447)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2448)
					{
						HX_STACK_LINE(2449)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2458)
						Float _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2458)
						{
							HX_STACK_LINE(2458)
							{
								HX_STACK_LINE(2458)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2458)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2458)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2458)
							_g2 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(2458)
						Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(2458)
						hx::AddEq(retx,_g3);
						HX_STACK_LINE(2459)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(2459)
						{
							HX_STACK_LINE(2459)
							{
								HX_STACK_LINE(2459)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2459)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2459)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2459)
							_g4 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(2459)
						Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(2459)
						hx::AddEq(rety,_g5);
					}
					HX_STACK_LINE(2461)
					Float _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(2461)
					{
						HX_STACK_LINE(2461)
						{
							HX_STACK_LINE(2461)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2461)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(2461)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2461)
						_g6 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(2461)
					Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2461)
					hx::AddEq(retz,_g7);
				}
				HX_STACK_LINE(2463)
				imp->dispose();
			}
		}
		HX_STACK_LINE(2465)
		{
			HX_STACK_LINE(2466)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2467)
			while((true)){
				HX_STACK_LINE(2467)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(2467)
					break;
				}
				HX_STACK_LINE(2468)
				::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
				HX_STACK_LINE(2470)
				if ((con->active)){
					HX_STACK_LINE(2471)
					::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2472)
					{
						HX_STACK_LINE(2473)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2474)
						{
							HX_STACK_LINE(2475)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2484)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(2484)
							{
								HX_STACK_LINE(2484)
								{
									HX_STACK_LINE(2484)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2484)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2484)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2484)
								_g8 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2484)
							Float _g9 = (_g8 * t1);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(2484)
							hx::AddEq(retx,_g9);
							HX_STACK_LINE(2485)
							Float _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(2485)
							{
								HX_STACK_LINE(2485)
								{
									HX_STACK_LINE(2485)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2485)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2485)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2485)
								_g10 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2485)
							Float _g11 = (_g10 * t1);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(2485)
							hx::AddEq(rety,_g11);
						}
						HX_STACK_LINE(2487)
						Float _g12;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(2487)
						{
							HX_STACK_LINE(2487)
							{
								HX_STACK_LINE(2487)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2487)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(2487)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2487)
							_g12 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2487)
						Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(2487)
						hx::AddEq(retz,_g13);
					}
					HX_STACK_LINE(2489)
					imp->dispose();
				}
				HX_STACK_LINE(2492)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(2495)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalImpulse,return )

bool Body_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_FRAME("nape.phys.Body","contains",0x18d08975,"nape.phys.Body.contains","nape/phys/Body.hx",2505,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(2514)
	bool wasWeak = point->zpp_inner->weak;		HX_STACK_VAR(wasWeak,"wasWeak");
	HX_STACK_LINE(2515)
	point->zpp_inner->weak = false;
	HX_STACK_LINE(2516)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(2517)
	{
		HX_STACK_LINE(2518)
		retvar = false;
		HX_STACK_LINE(2519)
		{
			HX_STACK_LINE(2520)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2521)
			while((true)){
				HX_STACK_LINE(2521)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(2521)
					break;
				}
				HX_STACK_LINE(2522)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(2524)
				if ((s->outer->contains(point))){
					HX_STACK_LINE(2525)
					retvar = true;
					HX_STACK_LINE(2526)
					break;
				}
				HX_STACK_LINE(2529)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2533)
	point->zpp_inner->weak = wasWeak;
	HX_STACK_LINE(2534)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(2538)
		{
			HX_STACK_LINE(2538)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2538)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(2538)
			point->zpp_inner = null();
			HX_STACK_LINE(2538)
			{
				HX_STACK_LINE(2538)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2538)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2538)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(2538)
			{
				HX_STACK_LINE(2538)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2538)
				{
					HX_STACK_LINE(2538)
					if (((o->outer != null()))){
						HX_STACK_LINE(2538)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2538)
						o->outer = null();
					}
					HX_STACK_LINE(2538)
					o->_isimmutable = null();
					HX_STACK_LINE(2538)
					o->_validate = null();
					HX_STACK_LINE(2538)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2538)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2538)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2539)
		true;
	}
	else{
		HX_STACK_LINE(2542)
		false;
	}
	HX_STACK_LINE(2545)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,contains,return )

::String Body_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Body","toString",0x24c40002,"nape.phys.Body.toString","nape/phys/Body.hx",2551,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2551)
	return ((((  ((this->zpp_inner->world)) ? ::String(HX_CSTRING("(space::world")) : ::String((HX_CSTRING("(") + ((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))) ? ::String(HX_CSTRING("dynamic")) : ::String((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? ::String(HX_CSTRING("static")) : ::String(HX_CSTRING("kinematic")) )) )))) )) + HX_CSTRING(")#")) + this->zpp_inner_i->id);
}



Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	::nape::phys::Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	::nape::phys::Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"mass") ) { return get_mass(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		if (HX_FIELD_EQ(inName,"force") ) { return get_force(); }
		if (HX_FIELD_EQ(inName,"align") ) { return align_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return get_shapes(); }
		if (HX_FIELD_EQ(inName,"torque") ) { return get_torque(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return get_inertia(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { return get_isBullet(); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return get_compound(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return get_velocity(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"massMode") ) { return get_massMode(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return get_gravMass(); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { return get_localCOM(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { return get_worldCOM(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"integrate") ) { return integrate_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_force") ) { return get_force_dyn(); }
		if (HX_FIELD_EQ(inName,"set_force") ) { return set_force_dyn(); }
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { return get_kinAngVel(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return get_disableCCD(); }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { return get_surfaceVel(); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { return get_angularVel(); }
		if (HX_FIELD_EQ(inName,"get_torque") ) { return get_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"set_torque") ) { return set_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return get_constraints(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return get_inertiaMode(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertia") ) { return set_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"crushFactor") ) { return crushFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleShapes") ) { return scaleShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isBullet") ) { return get_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isBullet") ) { return set_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_velocity") ) { return set_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { return get_kinematicVel(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_massMode") ) { return get_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_massMode") ) { return set_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return get_gravMassMode(); }
		if (HX_FIELD_EQ(inName,"get_gravMass") ) { return get_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMass") ) { return set_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateShapes") ) { return rotateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_kinAngVel") ) { return get_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinAngVel") ) { return set_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { return get_allowMovement(); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return get_allowRotation(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return get_gravMassScale(); }
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_disableCCD") ) { return get_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disableCCD") ) { return set_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"get_surfaceVel") ) { return get_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_surfaceVel") ) { return set_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angularVel") ) { return get_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angularVel") ) { return set_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintMass") ) { return get_constraintMass(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertiaMode") ) { return get_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertiaMode") ) { return set_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"translateShapes") ) { return translateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"transformShapes") ) { return transformShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeFilters") ) { return setShapeFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_kinematicVel") ) { return get_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinematicVel") ) { return set_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassMode") ) { return get_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMassMode") ) { return set_gravMassMode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_allowMovement") ) { return get_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowMovement") ) { return set_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowRotation") ) { return get_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowRotation") ) { return set_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassScale") ) { return get_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMassScale") ) { return set_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintInertia") ) { return get_constraintInertia(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"localPointToWorld") ) { return localPointToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"worldPointToLocal") ) { return worldPointToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeMaterials") ) { return setShapeMaterials_dyn(); }
		if (HX_FIELD_EQ(inName,"totalFluidImpulse") ) { return totalFluidImpulse_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constraintVelocity") ) { return get_constraintVelocity(); }
		if (HX_FIELD_EQ(inName,"get_constraintMass") ) { return get_constraintMass_dyn(); }
		if (HX_FIELD_EQ(inName,"localVectorToWorld") ) { return localVectorToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"worldVectorToLocal") ) { return worldVectorToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintsImpulse") ) { return constraintsImpulse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyAngularImpulse") ) { return applyAngularImpulse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalContactsImpulse") ) { return totalContactsImpulse_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setVelocityFromTarget") ) { return setVelocityFromTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraintInertia") ) { return get_constraintInertia_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_constraintVelocity") ) { return get_constraintVelocity_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setShapeFluidProperties") ) { return setShapeFluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"mass") ) { return set_mass(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		if (HX_FIELD_EQ(inName,"force") ) { return set_force(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"torque") ) { return set_torque(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return set_inertia(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isBullet") ) { return set_isBullet(inValue); }
		if (HX_FIELD_EQ(inName,"compound") ) { return set_compound(inValue); }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return set_velocity(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"massMode") ) { return set_massMode(inValue); }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return set_gravMass(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { return set_kinAngVel(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return set_disableCCD(inValue); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { return set_surfaceVel(inValue); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { return set_angularVel(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return set_inertiaMode(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { return set_kinematicVel(inValue); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return set_gravMassMode(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMovement") ) { return set_allowMovement(inValue); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return set_allowRotation(inValue); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return set_gravMassScale(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("isBullet"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("kinematicVel"));
	outFields->push(HX_CSTRING("surfaceVel"));
	outFields->push(HX_CSTRING("force"));
	outFields->push(HX_CSTRING("constraintVelocity"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("angularVel"));
	outFields->push(HX_CSTRING("kinAngVel"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("allowMovement"));
	outFields->push(HX_CSTRING("allowRotation"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("constraintMass"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("constraintInertia"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("localCOM"));
	outFields->push(HX_CSTRING("worldCOM"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(Body_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsBool,(int)offsetof(Body_obj,debugDraw),HX_CSTRING("debugDraw")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_type"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_isBullet"),
	HX_CSTRING("set_isBullet"),
	HX_CSTRING("get_disableCCD"),
	HX_CSTRING("set_disableCCD"),
	HX_CSTRING("integrate"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_velocity"),
	HX_CSTRING("set_velocity"),
	HX_CSTRING("setVelocityFromTarget"),
	HX_CSTRING("get_kinematicVel"),
	HX_CSTRING("set_kinematicVel"),
	HX_CSTRING("get_surfaceVel"),
	HX_CSTRING("set_surfaceVel"),
	HX_CSTRING("get_force"),
	HX_CSTRING("set_force"),
	HX_CSTRING("get_constraintVelocity"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_angularVel"),
	HX_CSTRING("set_angularVel"),
	HX_CSTRING("get_kinAngVel"),
	HX_CSTRING("set_kinAngVel"),
	HX_CSTRING("get_torque"),
	HX_CSTRING("set_torque"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("get_allowMovement"),
	HX_CSTRING("set_allowMovement"),
	HX_CSTRING("get_allowRotation"),
	HX_CSTRING("set_allowRotation"),
	HX_CSTRING("get_massMode"),
	HX_CSTRING("set_massMode"),
	HX_CSTRING("get_constraintMass"),
	HX_CSTRING("get_mass"),
	HX_CSTRING("set_mass"),
	HX_CSTRING("get_gravMassMode"),
	HX_CSTRING("set_gravMassMode"),
	HX_CSTRING("get_gravMass"),
	HX_CSTRING("set_gravMass"),
	HX_CSTRING("get_gravMassScale"),
	HX_CSTRING("set_gravMassScale"),
	HX_CSTRING("get_inertiaMode"),
	HX_CSTRING("set_inertiaMode"),
	HX_CSTRING("get_constraintInertia"),
	HX_CSTRING("get_inertia"),
	HX_CSTRING("set_inertia"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("crushFactor"),
	HX_CSTRING("localPointToWorld"),
	HX_CSTRING("worldPointToLocal"),
	HX_CSTRING("localVectorToWorld"),
	HX_CSTRING("worldVectorToLocal"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("applyAngularImpulse"),
	HX_CSTRING("translateShapes"),
	HX_CSTRING("rotateShapes"),
	HX_CSTRING("scaleShapes"),
	HX_CSTRING("transformShapes"),
	HX_CSTRING("align"),
	HX_CSTRING("rotate"),
	HX_CSTRING("setShapeMaterials"),
	HX_CSTRING("setShapeFilters"),
	HX_CSTRING("setShapeFluidProperties"),
	HX_CSTRING("get_localCOM"),
	HX_CSTRING("get_worldCOM"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("totalContactsImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("buoyancyImpulse"),
	HX_CSTRING("dragImpulse"),
	HX_CSTRING("totalFluidImpulse"),
	HX_CSTRING("constraintsImpulse"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("contains"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#endif

Class Body_obj::__mClass;

void Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Body"), hx::TCanCast< Body_obj> ,sStaticFields,sMemberFields,
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

void Body_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
