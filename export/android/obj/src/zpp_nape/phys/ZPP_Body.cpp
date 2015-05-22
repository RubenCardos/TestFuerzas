#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","new",0x86c808f4,"zpp_nape.phys.ZPP_Body.new","zpp_nape/phys/Body.hx",174,0x4bb115c1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1050)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(1049)
	this->wrap_localCOM = null();
	HX_STACK_LINE(1048)
	this->zip_worldCOM = false;
	HX_STACK_LINE(1047)
	this->worldCOMy = 0.0;
	HX_STACK_LINE(1046)
	this->worldCOMx = 0.0;
	HX_STACK_LINE(1045)
	this->zip_localCOM = false;
	HX_STACK_LINE(1044)
	this->localCOMy = 0.0;
	HX_STACK_LINE(1043)
	this->localCOMx = 0.0;
	HX_STACK_LINE(977)
	this->zip_aabb = false;
	HX_STACK_LINE(976)
	this->aabb = null();
	HX_STACK_LINE(936)
	this->norotate = false;
	HX_STACK_LINE(935)
	this->sinertia = 0.0;
	HX_STACK_LINE(934)
	this->iinertia = 0.0;
	HX_STACK_LINE(933)
	this->cinertia = 0.0;
	HX_STACK_LINE(932)
	this->zip_inertia = false;
	HX_STACK_LINE(931)
	this->inertia = 0.0;
	HX_STACK_LINE(930)
	this->inertiaMode = (int)0;
	HX_STACK_LINE(896)
	this->zip_gravMassScale = false;
	HX_STACK_LINE(895)
	this->gravMassScale = 0.0;
	HX_STACK_LINE(894)
	this->gravMassMode = (int)0;
	HX_STACK_LINE(893)
	this->zip_gravMass = false;
	HX_STACK_LINE(892)
	this->gravMass = 0.0;
	HX_STACK_LINE(857)
	this->nomove = false;
	HX_STACK_LINE(856)
	this->cmass = 0.0;
	HX_STACK_LINE(855)
	this->smass = 0.0;
	HX_STACK_LINE(854)
	this->imass = 0.0;
	HX_STACK_LINE(853)
	this->massMode = (int)0;
	HX_STACK_LINE(852)
	this->zip_mass = false;
	HX_STACK_LINE(851)
	this->mass = 0.0;
	HX_STACK_LINE(804)
	this->zip_axis = false;
	HX_STACK_LINE(803)
	this->axisy = 0.0;
	HX_STACK_LINE(802)
	this->axisx = 0.0;
	HX_STACK_LINE(781)
	this->rot = 0.0;
	HX_STACK_LINE(780)
	this->pre_rot = 0.0;
	HX_STACK_LINE(779)
	this->kinangvel = 0.0;
	HX_STACK_LINE(778)
	this->torque = 0.0;
	HX_STACK_LINE(777)
	this->angvel = 0.0;
	HX_STACK_LINE(770)
	this->wrapcvel = null();
	HX_STACK_LINE(464)
	this->wrap_svel = null();
	HX_STACK_LINE(463)
	this->svely = 0.0;
	HX_STACK_LINE(462)
	this->svelx = 0.0;
	HX_STACK_LINE(461)
	this->wrap_kinvel = null();
	HX_STACK_LINE(460)
	this->kinvely = 0.0;
	HX_STACK_LINE(459)
	this->kinvelx = 0.0;
	HX_STACK_LINE(458)
	this->wrap_force = null();
	HX_STACK_LINE(457)
	this->forcey = 0.0;
	HX_STACK_LINE(456)
	this->forcex = 0.0;
	HX_STACK_LINE(455)
	this->wrap_vel = null();
	HX_STACK_LINE(454)
	this->vely = 0.0;
	HX_STACK_LINE(453)
	this->velx = 0.0;
	HX_STACK_LINE(452)
	this->wrap_pos = null();
	HX_STACK_LINE(451)
	this->posy = 0.0;
	HX_STACK_LINE(450)
	this->posx = 0.0;
	HX_STACK_LINE(449)
	this->pre_posy = 0.0;
	HX_STACK_LINE(448)
	this->pre_posx = 0.0;
	HX_STACK_LINE(346)
	this->disableCCD = false;
	HX_STACK_LINE(345)
	this->bulletEnabled = false;
	HX_STACK_LINE(344)
	this->bullet = false;
	HX_STACK_LINE(343)
	this->sweepRadius = 0.0;
	HX_STACK_LINE(342)
	this->sweepFrozen = false;
	HX_STACK_LINE(341)
	this->sweep_angvel = 0.0;
	HX_STACK_LINE(340)
	this->sweepTime = 0.0;
	HX_STACK_LINE(218)
	this->graph_depth = (int)0;
	HX_STACK_LINE(212)
	this->component = null();
	HX_STACK_LINE(211)
	this->wrap_constraints = null();
	HX_STACK_LINE(210)
	this->constraints = null();
	HX_STACK_LINE(209)
	this->wrap_arbiters = null();
	HX_STACK_LINE(208)
	this->arbiters = null();
	HX_STACK_LINE(207)
	this->space = null();
	HX_STACK_LINE(200)
	this->wrap_shapes = null();
	HX_STACK_LINE(199)
	this->shapes = null();
	HX_STACK_LINE(198)
	this->compound = null();
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->world = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(1421)
	super::__construct();
	HX_STACK_LINE(1422)
	this->ibody = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1423)
	this->world = false;
	HX_STACK_LINE(1424)
	this->bulletEnabled = false;
	HX_STACK_LINE(1425)
	this->sweepTime = (int)0;
	HX_STACK_LINE(1426)
	this->sweep_angvel = (int)0;
	HX_STACK_LINE(1427)
	bool _g = this->nomove = false;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1427)
	this->norotate = _g;
	HX_STACK_LINE(1428)
	this->disableCCD = false;
	HX_STACK_LINE(1429)
	{
		HX_STACK_LINE(1430)
		this->posx = (int)0;
		HX_STACK_LINE(1431)
		this->posy = (int)0;
		HX_STACK_LINE(1440)
		{
		}
	}
	HX_STACK_LINE(1449)
	this->rot = (int)0;
	HX_STACK_LINE(1450)
	{
		HX_STACK_LINE(1451)
		this->axisx = (int)0;
		HX_STACK_LINE(1452)
		this->axisy = (int)1;
		HX_STACK_LINE(1461)
		{
		}
	}
	HX_STACK_LINE(1470)
	{
		HX_STACK_LINE(1471)
		this->svelx = (int)0;
		HX_STACK_LINE(1472)
		this->svely = (int)0;
		HX_STACK_LINE(1481)
		{
		}
	}
	HX_STACK_LINE(1490)
	{
		HX_STACK_LINE(1491)
		this->velx = (int)0;
		HX_STACK_LINE(1492)
		this->vely = (int)0;
		HX_STACK_LINE(1501)
		{
		}
	}
	HX_STACK_LINE(1510)
	{
		HX_STACK_LINE(1511)
		this->kinvelx = (int)0;
		HX_STACK_LINE(1512)
		this->kinvely = (int)0;
		HX_STACK_LINE(1521)
		{
		}
	}
	HX_STACK_LINE(1530)
	{
		HX_STACK_LINE(1531)
		this->forcex = (int)0;
		HX_STACK_LINE(1532)
		this->forcey = (int)0;
		HX_STACK_LINE(1541)
		{
		}
	}
	HX_STACK_LINE(1550)
	Float _g1 = this->kinangvel = (int)0;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1550)
	Float _g2 = this->angvel = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1550)
	this->torque = _g2;
	HX_STACK_LINE(1551)
	{
		HX_STACK_LINE(1552)
		this->pre_posx = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1553)
		this->pre_posy = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1562)
		{
		}
	}
	HX_STACK_LINE(1571)
	this->pre_rot = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(1572)
	{
		HX_STACK_LINE(1573)
		this->localCOMx = (int)0;
		HX_STACK_LINE(1574)
		this->localCOMy = (int)0;
		HX_STACK_LINE(1583)
		{
		}
	}
	HX_STACK_LINE(1592)
	{
		HX_STACK_LINE(1593)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(1594)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(1603)
		{
		}
	}
	HX_STACK_LINE(1612)
	this->zip_aabb = true;
	HX_STACK_LINE(1613)
	::zpp_nape::geom::ZPP_AABB _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1613)
	{
		HX_STACK_LINE(1613)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(1613)
				::zpp_nape::geom::ZPP_AABB _g3 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1613)
				ret = _g3;
			}
			else{
				HX_STACK_LINE(1613)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(1613)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1613)
				ret->next = null();
			}
			HX_STACK_LINE(1613)
			Dynamic();
		}
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			ret->minx = (int)0;
			HX_STACK_LINE(1613)
			ret->miny = (int)0;
			HX_STACK_LINE(1613)
			{
			}
		}
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			ret->maxx = (int)0;
			HX_STACK_LINE(1613)
			ret->maxy = (int)0;
			HX_STACK_LINE(1613)
			{
			}
		}
		HX_STACK_LINE(1613)
		_g4 = ret;
	}
	HX_STACK_LINE(1613)
	this->aabb = _g4;
	HX_STACK_LINE(1614)
	this->aabb->_immutable = true;
	HX_STACK_LINE(1615)
	::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(1616)
	this->aabb->_validate = this->aabb_validate_dyn();
	HX_STACK_LINE(1617)
	this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
	HX_STACK_LINE(1618)
	this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
	HX_STACK_LINE(1619)
	this->gravMassScale = 1.0;
	HX_STACK_LINE(1620)
	this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
	HX_STACK_LINE(1621)
	::zpp_nape::util::ZNPList_ZPP_Arbiter _g5 = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1621)
	this->arbiters = _g5;
	HX_STACK_LINE(1622)
	::zpp_nape::util::ZNPList_ZPP_Constraint _g6 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1622)
	this->constraints = _g6;
	HX_STACK_LINE(1623)
	::zpp_nape::util::ZNPList_ZPP_Shape _g7 = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1623)
	this->shapes = _g7;
	HX_STACK_LINE(1624)
	::nape::shape::ShapeList _g8 = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->shapes,null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(1624)
	this->wrap_shapes = _g8;
	HX_STACK_LINE(1625)
	this->wrap_shapes->zpp_inner->adder = this->shapes_adder_dyn();
	HX_STACK_LINE(1626)
	this->wrap_shapes->zpp_inner->subber = this->shapes_subber_dyn();
	HX_STACK_LINE(1627)
	this->wrap_shapes->zpp_inner->_invalidate = this->shapes_invalidate_dyn();
	HX_STACK_LINE(1631)
	this->kinematicDelaySleep = false;
}
;
	return null();
}

//ZPP_Body_obj::~ZPP_Body_obj() { }

Dynamic ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Body_obj > ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

bool ZPP_Body_obj::isStatic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isStatic",0x1c77a724,"zpp_nape.phys.ZPP_Body.isStatic","zpp_nape/phys/Body.hx",181,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isStatic,return )

bool ZPP_Body_obj::isDynamic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isDynamic",0xcbeafc49,"zpp_nape.phys.ZPP_Body.isDynamic","zpp_nape/phys/Body.hx",186,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isDynamic,return )

bool ZPP_Body_obj::isKinematic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isKinematic",0x9f7d1c4f,"zpp_nape.phys.ZPP_Body.isKinematic","zpp_nape/phys/Body.hx",191,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isKinematic,return )

Void ZPP_Body_obj::invalidate_type( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_type",0x2dcb7dd2,"zpp_nape.phys.ZPP_Body.invalidate_type","zpp_nape/phys/Body.hx",194,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		this->invalidate_mass();
		HX_STACK_LINE(196)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_type,(void))

Void ZPP_Body_obj::invalidate_shapes( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_shapes",0x9bf75b4a,"zpp_nape.phys.ZPP_Body.invalidate_shapes","zpp_nape/phys/Body.hx",201,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		this->zip_aabb = true;
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			this->zip_localCOM = true;
			HX_STACK_LINE(203)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(204)
		this->invalidate_mass();
		HX_STACK_LINE(205)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_shapes,(void))

Void ZPP_Body_obj::init_bodysetlist( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","init_bodysetlist",0xcfa86a9b,"zpp_nape.phys.ZPP_Body.init_bodysetlist","zpp_nape/phys/Body.hx",220,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(222)
			::zpp_nape::util::ZPP_Set_ZPP_Body _g = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = _g;
			HX_STACK_LINE(223)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(224)
			::zpp_nape::util::ZNPList_ZPP_Body _g1 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = _g1;
		}
		HX_STACK_LINE(234)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,init_bodysetlist,(void))

Void ZPP_Body_obj::connectedBodies_cont( ::nape::phys::Body b){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","connectedBodies_cont",0xd567f2f4,"zpp_nape.phys.ZPP_Body.connectedBodies_cont","zpp_nape/phys/Body.hx",245,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(245)
		if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(b->zpp_inner))){
			HX_STACK_LINE(246)
			::zpp_nape::phys::ZPP_Body_obj::bodystack->add(b->zpp_inner);
			HX_STACK_LINE(247)
			b->zpp_inner->graph_depth = (::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth + (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,connectedBodies_cont,(void))

::nape::phys::BodyList ZPP_Body_obj::connectedBodies( int depth,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","connectedBodies",0x3b48f5bd,"zpp_nape.phys.ZPP_Body.connectedBodies","zpp_nape/phys/Body.hx",250,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(250)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Set_ZPP_Body _g1 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = _g1;
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(251)
			::zpp_nape::util::ZNPList_ZPP_Body _g11 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = _g11;
		}
		HX_STACK_LINE(251)
		Dynamic();
	}
	HX_STACK_LINE(252)
	::nape::phys::BodyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(252)
	if (((output == null()))){
		HX_STACK_LINE(252)
		ret = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(252)
		ret = output;
	}
	HX_STACK_LINE(253)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(254)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(255)
	this->graph_depth = (int)0;
	HX_STACK_LINE(256)
	while((true)){
		HX_STACK_LINE(256)
		if ((!((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))))){
			HX_STACK_LINE(256)
			break;
		}
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(258)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(258)
			continue;
		}
		HX_STACK_LINE(259)
		::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth = cur->graph_depth;
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = cur->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(262)
			while((true)){
				HX_STACK_LINE(262)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(262)
					break;
				}
				HX_STACK_LINE(263)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(264)
				c->outer->visitBodies(this->connectedBodies_cont_dyn());
				HX_STACK_LINE(265)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(269)
		if (((_this->parent == null()))){
			HX_STACK_LINE(269)
			Dynamic();
		}
		else{
			HX_STACK_LINE(269)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Set_ZPP_Body _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(269)
				if (((cur->prev != null()))){
					HX_STACK_LINE(269)
					_g2 = cur->prev;
				}
				else{
					HX_STACK_LINE(269)
					if (((cur->next != null()))){
						HX_STACK_LINE(269)
						_g2 = cur->next;
					}
					else{
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(269)
							::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(270)
							if (((b != _g))){
								HX_STACK_LINE(270)
								::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(270)
								if ((ret->zpp_inner->reverse_flag)){
									HX_STACK_LINE(270)
									ret->push(obj);
								}
								else{
									HX_STACK_LINE(270)
									ret->unshift(obj);
								}
							}
						}
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(269)
						if (((ret1 != null()))){
							HX_STACK_LINE(269)
							if (((cur == ret1->prev))){
								HX_STACK_LINE(269)
								ret1->prev = null();
							}
							else{
								HX_STACK_LINE(269)
								ret1->next = null();
							}
							HX_STACK_LINE(269)
							cur->parent = null();
						}
						HX_STACK_LINE(269)
						{
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								o->data = null();
								HX_STACK_LINE(269)
								o->lt = null();
								HX_STACK_LINE(269)
								o->swapped = null();
							}
							HX_STACK_LINE(269)
							o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(269)
						_g2 = ret1;
					}
				}
				HX_STACK_LINE(269)
				cur = _g2;
			}
			HX_STACK_LINE(269)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(272)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,connectedBodies,return )

::nape::phys::BodyList ZPP_Body_obj::interactingBodies( int arbiter_type,int depth,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","interactingBodies",0x873f5320,"zpp_nape.phys.ZPP_Body.interactingBodies","zpp_nape/phys/Body.hx",274,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(arbiter_type,"arbiter_type")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(274)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(275)
			::zpp_nape::util::ZPP_Set_ZPP_Body _g1 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = _g1;
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(275)
			::zpp_nape::util::ZNPList_ZPP_Body _g11 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = _g11;
		}
		HX_STACK_LINE(275)
		Dynamic();
	}
	HX_STACK_LINE(276)
	::nape::phys::BodyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	if (((output == null()))){
		HX_STACK_LINE(276)
		ret = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(276)
		ret = output;
	}
	HX_STACK_LINE(277)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(278)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(279)
	this->graph_depth = (int)0;
	HX_STACK_LINE(280)
	while((true)){
		HX_STACK_LINE(280)
		if ((!((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))))){
			HX_STACK_LINE(280)
			break;
		}
		HX_STACK_LINE(281)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(282)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(282)
			continue;
		}
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(284)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = cur->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(286)
				::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(288)
				if (((((int(arb->type) & int(arbiter_type))) != (int)0))){
					HX_STACK_LINE(289)
					::zpp_nape::phys::ZPP_Body other;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(289)
					if (((arb->b1 == cur))){
						HX_STACK_LINE(289)
						other = arb->b2;
					}
					else{
						HX_STACK_LINE(289)
						other = arb->b1;
					}
					HX_STACK_LINE(290)
					if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(other))){
						HX_STACK_LINE(291)
						::zpp_nape::phys::ZPP_Body_obj::bodystack->add(other);
						HX_STACK_LINE(292)
						other->graph_depth = (cur->graph_depth + (int)1);
					}
				}
				HX_STACK_LINE(296)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(300)
		if (((_this->parent == null()))){
			HX_STACK_LINE(300)
			Dynamic();
		}
		else{
			HX_STACK_LINE(300)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(300)
			while((true)){
				HX_STACK_LINE(300)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(300)
					break;
				}
				HX_STACK_LINE(300)
				::zpp_nape::util::ZPP_Set_ZPP_Body _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(300)
				if (((cur->prev != null()))){
					HX_STACK_LINE(300)
					_g2 = cur->prev;
				}
				else{
					HX_STACK_LINE(300)
					if (((cur->next != null()))){
						HX_STACK_LINE(300)
						_g2 = cur->next;
					}
					else{
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(300)
							::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(301)
							if (((b != _g))){
								HX_STACK_LINE(301)
								::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(301)
								if ((ret->zpp_inner->reverse_flag)){
									HX_STACK_LINE(301)
									ret->push(obj);
								}
								else{
									HX_STACK_LINE(301)
									ret->unshift(obj);
								}
							}
						}
						HX_STACK_LINE(300)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(300)
						if (((ret1 != null()))){
							HX_STACK_LINE(300)
							if (((cur == ret1->prev))){
								HX_STACK_LINE(300)
								ret1->prev = null();
							}
							else{
								HX_STACK_LINE(300)
								ret1->next = null();
							}
							HX_STACK_LINE(300)
							cur->parent = null();
						}
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								o->data = null();
								HX_STACK_LINE(300)
								o->lt = null();
								HX_STACK_LINE(300)
								o->swapped = null();
							}
							HX_STACK_LINE(300)
							o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(300)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(300)
						_g2 = ret1;
					}
				}
				HX_STACK_LINE(300)
				cur = _g2;
			}
			HX_STACK_LINE(300)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(303)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Body_obj,interactingBodies,return )

bool ZPP_Body_obj::atRest( Float dt){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","atRest",0x296c2d93,"zpp_nape.phys.ZPP_Body.atRest","zpp_nape/phys/Body.hx",306,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(306)
	if ((!(((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
		HX_STACK_LINE(306)
		return this->component->sleeping;
	}
	else{
		HX_STACK_LINE(308)
		Float linSq = ::nape::Config_obj::linearSleepThreshold;		HX_STACK_VAR(linSq,"linSq");
		HX_STACK_LINE(309)
		hx::MultEq(linSq,linSq);
		HX_STACK_LINE(310)
		bool cansleep;		HX_STACK_VAR(cansleep,"cansleep");
		HX_STACK_LINE(310)
		if (((((this->velx * this->velx) + (this->vely * this->vely)) > linSq))){
			HX_STACK_LINE(310)
			cansleep = false;
		}
		else{
			HX_STACK_LINE(311)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(311)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					dx = (this->posx - this->pre_posx);
					HX_STACK_LINE(311)
					dy = (this->posy - this->pre_posy);
				}
				HX_STACK_LINE(311)
				_g = ((dx * dx) + (dy * dy));
			}
			HX_STACK_LINE(311)
			if (((_g > (((0.25 * linSq) * dt) * dt)))){
				HX_STACK_LINE(311)
				cansleep = false;
			}
			else{
				HX_STACK_LINE(312)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(313)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(315)
					dx = (this->aabb->maxx - this->aabb->minx);
					HX_STACK_LINE(316)
					dy = (this->aabb->maxy - this->aabb->miny);
				}
				HX_STACK_LINE(318)
				Float idl = ((dx * dx) + (dy * dy));		HX_STACK_VAR(idl,"idl");
				HX_STACK_LINE(319)
				Float angSq = ::nape::Config_obj::angularSleepThreshold;		HX_STACK_VAR(angSq,"angSq");
				HX_STACK_LINE(320)
				hx::MultEq(angSq,angSq);
				HX_STACK_LINE(321)
				if (((((((int)4 * this->angvel) * this->angvel) * idl) > angSq))){
					HX_STACK_LINE(321)
					cansleep = false;
				}
				else{
					HX_STACK_LINE(322)
					Float dr = (this->rot - this->pre_rot);		HX_STACK_VAR(dr,"dr");
					HX_STACK_LINE(323)
					if (((((dr * dr) * idl) > ((angSq * dt) * dt)))){
						HX_STACK_LINE(323)
						cansleep = false;
					}
					else{
						HX_STACK_LINE(323)
						cansleep = true;
					}
				}
			}
		}
		HX_STACK_LINE(326)
		if ((!(cansleep))){
			HX_STACK_LINE(326)
			this->component->waket = this->space->stamp;
		}
		HX_STACK_LINE(327)
		return ((this->component->waket + ::nape::Config_obj::sleepDelay) < this->space->stamp);
	}
	HX_STACK_LINE(306)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,atRest,return )

Void ZPP_Body_obj::refreshArbiters( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","refreshArbiters",0xf23b5bf9,"zpp_nape.phys.ZPP_Body.refreshArbiters","zpp_nape/phys/Body.hx",331,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(333)
		while((true)){
			HX_STACK_LINE(333)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(333)
				break;
			}
			HX_STACK_LINE(334)
			::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(335)
			arb->invalidated = true;
			HX_STACK_LINE(336)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,refreshArbiters,(void))

Void ZPP_Body_obj::sweepIntegrate( Float dt){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","sweepIntegrate",0x201742d1,"zpp_nape.phys.ZPP_Body.sweepIntegrate","zpp_nape/phys/Body.hx",349,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(350)
		Float delta = (dt - this->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(351)
		if (((delta != (int)0))){
			HX_STACK_LINE(360)
			this->sweepTime = dt;
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(362)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(371)
				hx::AddEq(this->posx,(this->velx * t));
				HX_STACK_LINE(372)
				hx::AddEq(this->posy,(this->vely * t));
			}
			HX_STACK_LINE(374)
			if (((this->angvel != (int)0))){
				HX_STACK_LINE(374)
				Float dr = (this->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(374)
				hx::AddEq(this->rot,dr);
				HX_STACK_LINE(374)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(374)
					Float _g = ::Math_obj::sin(this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(374)
					this->axisx = _g;
					HX_STACK_LINE(374)
					Float _g1 = ::Math_obj::cos(this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(374)
					this->axisy = _g1;
					HX_STACK_LINE(374)
					Dynamic();
				}
				else{
					HX_STACK_LINE(374)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(374)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(374)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(374)
					Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(374)
					this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
					HX_STACK_LINE(374)
					this->axisx = nx;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepIntegrate,(void))

Void ZPP_Body_obj::sweepValidate( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","sweepValidate",0x8a49a836,"zpp_nape.phys.ZPP_Body.sweepValidate","zpp_nape/phys/Body.hx",388,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(388)
		if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(390)
			s->worldCOMx = (this->posx + (((this->axisy * s->localCOMx) - (this->axisx * s->localCOMy))));
			HX_STACK_LINE(391)
			s->worldCOMy = (this->posy + (((s->localCOMx * this->axisx) + (s->localCOMy * this->axisy))));
		}
		else{
			HX_STACK_LINE(395)
			::zpp_nape::shape::ZPP_Polygon p = s->polygon;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(399)
				while((true)){
					HX_STACK_LINE(399)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(399)
						break;
					}
					HX_STACK_LINE(400)
					::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(402)
						::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(403)
						li = li->next;
						HX_STACK_LINE(404)
						{
							HX_STACK_LINE(405)
							g->x = (this->posx + (((this->axisy * l->x) - (this->axisx * l->y))));
							HX_STACK_LINE(406)
							g->y = (this->posy + (((l->x * this->axisx) + (l->y * this->axisy))));
						}
					}
					HX_STACK_LINE(409)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(412)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(414)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(415)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(416)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(417)
				while((true)){
					HX_STACK_LINE(417)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(417)
						break;
					}
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(420)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(421)
						ite = ite->next;
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(423)
							e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
							HX_STACK_LINE(424)
							e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
						}
						HX_STACK_LINE(426)
						e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(427)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(428)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
					HX_STACK_LINE(430)
					u = v;
					HX_STACK_LINE(431)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(435)
					::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(436)
					ite = ite->next;
					HX_STACK_LINE(437)
					{
						HX_STACK_LINE(438)
						e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
						HX_STACK_LINE(439)
						e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
					}
					HX_STACK_LINE(441)
					e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
					HX_STACK_LINE(442)
					e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
					HX_STACK_LINE(443)
					e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepValidate,(void))

Void ZPP_Body_obj::invalidate_pos( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_pos",0x42c6bd7c,"zpp_nape.phys.ZPP_Body.invalidate_pos","zpp_nape/phys/Body.hx",467,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(469)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(470)
			while((true)){
				HX_STACK_LINE(470)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(470)
					break;
				}
				HX_STACK_LINE(471)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(473)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(474)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(475)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(477)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(479)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(482)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_pos,(void))

Void ZPP_Body_obj::pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","pos_invalidate",0x15af3172,"zpp_nape.phys.ZPP_Body.pos_invalidate","zpp_nape/phys/Body.hx",484,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(485)
		this->immutable_midstep(HX_CSTRING("Body::position"));
		HX_STACK_LINE(489)
		if ((!(((bool((this->posx == pos->x)) && bool((this->posy == pos->y))))))){
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(491)
				this->posx = pos->x;
				HX_STACK_LINE(492)
				this->posy = pos->y;
				HX_STACK_LINE(501)
				{
				}
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(510)
					while((true)){
						HX_STACK_LINE(510)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(510)
							break;
						}
						HX_STACK_LINE(510)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(510)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(510)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(510)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(510)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(510)
				this->zip_worldCOM = true;
			}
			HX_STACK_LINE(511)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,pos_invalidate,(void))

Void ZPP_Body_obj::pos_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","pos_validate",0xd2702ccd,"zpp_nape.phys.ZPP_Body.pos_validate","zpp_nape/phys/Body.hx",515,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		this->wrap_pos->zpp_inner->x = this->posx;
		HX_STACK_LINE(517)
		this->wrap_pos->zpp_inner->y = this->posy;
		HX_STACK_LINE(526)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,pos_validate,(void))

Void ZPP_Body_obj::vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","vel_invalidate",0x1ffe3f49,"zpp_nape.phys.ZPP_Body.vel_invalidate","zpp_nape/phys/Body.hx",536,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(541)
			this->velx = vel->x;
			HX_STACK_LINE(542)
			this->vely = vel->y;
			HX_STACK_LINE(551)
			{
			}
		}
		HX_STACK_LINE(560)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,vel_invalidate,(void))

Void ZPP_Body_obj::vel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","vel_validate",0x123346e4,"zpp_nape.phys.ZPP_Body.vel_validate","zpp_nape/phys/Body.hx",563,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		this->wrap_vel->zpp_inner->x = this->velx;
		HX_STACK_LINE(565)
		this->wrap_vel->zpp_inner->y = this->vely;
		HX_STACK_LINE(574)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,vel_validate,(void))

Void ZPP_Body_obj::kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","kinvel_invalidate",0x5ff2f401,"zpp_nape.phys.ZPP_Body.kinvel_invalidate","zpp_nape/phys/Body.hx",584,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(586)
			this->kinvelx = vel->x;
			HX_STACK_LINE(587)
			this->kinvely = vel->y;
			HX_STACK_LINE(596)
			{
			}
		}
		HX_STACK_LINE(605)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,kinvel_invalidate,(void))

Void ZPP_Body_obj::kinvel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","kinvel_validate",0x7c0add9c,"zpp_nape.phys.ZPP_Body.kinvel_validate","zpp_nape/phys/Body.hx",608,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		this->wrap_kinvel->zpp_inner->x = this->kinvelx;
		HX_STACK_LINE(610)
		this->wrap_kinvel->zpp_inner->y = this->kinvely;
		HX_STACK_LINE(619)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,kinvel_validate,(void))

Void ZPP_Body_obj::svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","svel_invalidate",0x1785a1a4,"zpp_nape.phys.ZPP_Body.svel_invalidate","zpp_nape/phys/Body.hx",629,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(631)
			this->svelx = vel->x;
			HX_STACK_LINE(632)
			this->svely = vel->y;
			HX_STACK_LINE(641)
			{
			}
		}
		HX_STACK_LINE(650)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,svel_invalidate,(void))

Void ZPP_Body_obj::svel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","svel_validate",0xaed9cc7f,"zpp_nape.phys.ZPP_Body.svel_validate","zpp_nape/phys/Body.hx",653,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(654)
		this->wrap_svel->zpp_inner->x = this->svelx;
		HX_STACK_LINE(655)
		this->wrap_svel->zpp_inner->y = this->svely;
		HX_STACK_LINE(664)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,svel_validate,(void))

Void ZPP_Body_obj::force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","force_invalidate",0xe2a1717b,"zpp_nape.phys.ZPP_Body.force_invalidate","zpp_nape/phys/Body.hx",674,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(679)
			this->forcex = force->x;
			HX_STACK_LINE(680)
			this->forcey = force->y;
			HX_STACK_LINE(689)
			{
			}
		}
		HX_STACK_LINE(698)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,force_invalidate,(void))

Void ZPP_Body_obj::force_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","force_validate",0xdf552896,"zpp_nape.phys.ZPP_Body.force_validate","zpp_nape/phys/Body.hx",700,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(701)
		this->wrap_force->zpp_inner->x = this->forcex;
		HX_STACK_LINE(702)
		this->wrap_force->zpp_inner->y = this->forcey;
		HX_STACK_LINE(711)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,force_validate,(void))

Void ZPP_Body_obj::setupPosition( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupPosition",0x429a89da,"zpp_nape.phys.ZPP_Body.setupPosition","zpp_nape/phys/Body.hx",720,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(721)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(721)
		{
			HX_STACK_LINE(721)
			Float x = this->posx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(721)
			Float y = this->posy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(721)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(721)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(721)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(721)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(721)
				ret = _g;
			}
			else{
				HX_STACK_LINE(721)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(721)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(721)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(721)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(721)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(721)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(721)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(721)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(721)
							ret1->next = null();
						}
						HX_STACK_LINE(721)
						ret1->weak = false;
					}
					HX_STACK_LINE(721)
					ret1->_immutable = immutable;
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						ret1->x = x;
						HX_STACK_LINE(721)
						ret1->y = y;
						HX_STACK_LINE(721)
						{
						}
					}
					HX_STACK_LINE(721)
					_g2 = ret1;
				}
				HX_STACK_LINE(721)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(721)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(721)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(721)
							_this->_validate();
						}
					}
					HX_STACK_LINE(721)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",721,0x4bb115c1)
						{
							HX_STACK_LINE(721)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(721)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(721)
										_this->_validate();
									}
								}
								HX_STACK_LINE(721)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(721)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(721)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(721)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(721)
						{
						}
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(721)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(721)
				ret;
			}
			HX_STACK_LINE(721)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(721)
			_g5 = ret;
		}
		HX_STACK_LINE(721)
		this->wrap_pos = _g5;
		HX_STACK_LINE(722)
		this->wrap_pos->zpp_inner->_inuse = true;
		HX_STACK_LINE(723)
		if ((this->world)){
			HX_STACK_LINE(723)
			this->wrap_pos->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(725)
			this->wrap_pos->zpp_inner->_invalidate = this->pos_invalidate_dyn();
			HX_STACK_LINE(726)
			this->wrap_pos->zpp_inner->_validate = this->pos_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupPosition,(void))

Void ZPP_Body_obj::setupVelocity( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupVelocity",0x969deb4e,"zpp_nape.phys.ZPP_Body.setupVelocity","zpp_nape/phys/Body.hx",729,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(730)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			Float x = this->velx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(730)
			Float y = this->vely;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(730)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(730)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(730)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(730)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(730)
				ret = _g;
			}
			else{
				HX_STACK_LINE(730)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(730)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(730)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(730)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(730)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(730)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(730)
							ret1->next = null();
						}
						HX_STACK_LINE(730)
						ret1->weak = false;
					}
					HX_STACK_LINE(730)
					ret1->_immutable = immutable;
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						ret1->x = x;
						HX_STACK_LINE(730)
						ret1->y = y;
						HX_STACK_LINE(730)
						{
						}
					}
					HX_STACK_LINE(730)
					_g2 = ret1;
				}
				HX_STACK_LINE(730)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(730)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(730)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(730)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(730)
							_this->_validate();
						}
					}
					HX_STACK_LINE(730)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",730,0x4bb115c1)
						{
							HX_STACK_LINE(730)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(730)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(730)
										_this->_validate();
									}
								}
								HX_STACK_LINE(730)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(730)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(730)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(730)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(730)
						{
						}
					}
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(730)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(730)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(730)
				ret;
			}
			HX_STACK_LINE(730)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(730)
			_g5 = ret;
		}
		HX_STACK_LINE(730)
		this->wrap_vel = _g5;
		HX_STACK_LINE(731)
		this->wrap_vel->zpp_inner->_inuse = true;
		HX_STACK_LINE(732)
		if ((this->world)){
			HX_STACK_LINE(732)
			this->wrap_vel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(734)
			this->wrap_vel->zpp_inner->_invalidate = this->vel_invalidate_dyn();
			HX_STACK_LINE(735)
			this->wrap_vel->zpp_inner->_validate = this->vel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupVelocity,(void))

Void ZPP_Body_obj::setupkinvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupkinvel",0x0f6ff61e,"zpp_nape.phys.ZPP_Body.setupkinvel","zpp_nape/phys/Body.hx",738,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(739)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			Float x = this->kinvelx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(739)
			Float y = this->kinvely;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(739)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(739)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(739)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(739)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(739)
				ret = _g;
			}
			else{
				HX_STACK_LINE(739)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(739)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(739)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(739)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(739)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(739)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(739)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(739)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(739)
							ret1->next = null();
						}
						HX_STACK_LINE(739)
						ret1->weak = false;
					}
					HX_STACK_LINE(739)
					ret1->_immutable = immutable;
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						ret1->x = x;
						HX_STACK_LINE(739)
						ret1->y = y;
						HX_STACK_LINE(739)
						{
						}
					}
					HX_STACK_LINE(739)
					_g2 = ret1;
				}
				HX_STACK_LINE(739)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(739)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(739)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(739)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(739)
							_this->_validate();
						}
					}
					HX_STACK_LINE(739)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",739,0x4bb115c1)
						{
							HX_STACK_LINE(739)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(739)
							{
								HX_STACK_LINE(739)
								{
									HX_STACK_LINE(739)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(739)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(739)
										_this->_validate();
									}
								}
								HX_STACK_LINE(739)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(739)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(739)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(739)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(739)
						{
						}
					}
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(739)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(739)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(739)
				ret;
			}
			HX_STACK_LINE(739)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(739)
			_g5 = ret;
		}
		HX_STACK_LINE(739)
		this->wrap_kinvel = _g5;
		HX_STACK_LINE(740)
		this->wrap_kinvel->zpp_inner->_inuse = true;
		HX_STACK_LINE(741)
		if ((this->world)){
			HX_STACK_LINE(741)
			this->wrap_kinvel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(743)
			this->wrap_kinvel->zpp_inner->_invalidate = this->kinvel_invalidate_dyn();
			HX_STACK_LINE(744)
			this->wrap_kinvel->zpp_inner->_validate = this->kinvel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupkinvel,(void))

Void ZPP_Body_obj::setupsvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupsvel",0x4de97c5b,"zpp_nape.phys.ZPP_Body.setupsvel","zpp_nape/phys/Body.hx",747,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(748)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			Float x = this->svelx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(748)
			Float y = this->svely;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(748)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(748)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(748)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(748)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(748)
				ret = _g;
			}
			else{
				HX_STACK_LINE(748)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(748)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(748)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(748)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(748)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(748)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(748)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(748)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(748)
							ret1->next = null();
						}
						HX_STACK_LINE(748)
						ret1->weak = false;
					}
					HX_STACK_LINE(748)
					ret1->_immutable = immutable;
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						ret1->x = x;
						HX_STACK_LINE(748)
						ret1->y = y;
						HX_STACK_LINE(748)
						{
						}
					}
					HX_STACK_LINE(748)
					_g2 = ret1;
				}
				HX_STACK_LINE(748)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(748)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(748)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(748)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(748)
							_this->_validate();
						}
					}
					HX_STACK_LINE(748)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",748,0x4bb115c1)
						{
							HX_STACK_LINE(748)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(748)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(748)
										_this->_validate();
									}
								}
								HX_STACK_LINE(748)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(748)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(748)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(748)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(748)
						{
						}
					}
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(748)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(748)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(748)
				ret;
			}
			HX_STACK_LINE(748)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(748)
			_g5 = ret;
		}
		HX_STACK_LINE(748)
		this->wrap_svel = _g5;
		HX_STACK_LINE(749)
		this->wrap_svel->zpp_inner->_inuse = true;
		HX_STACK_LINE(750)
		if ((this->world)){
			HX_STACK_LINE(750)
			this->wrap_svel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(752)
			this->wrap_svel->zpp_inner->_invalidate = this->svel_invalidate_dyn();
			HX_STACK_LINE(753)
			this->wrap_svel->zpp_inner->_validate = this->svel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupsvel,(void))

Void ZPP_Body_obj::setupForce( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupForce",0xf0c4901a,"zpp_nape.phys.ZPP_Body.setupForce","zpp_nape/phys/Body.hx",756,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(757)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			Float x = this->forcex;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(757)
			Float y = this->forcey;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(757)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(757)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(757)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(757)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(757)
				ret = _g;
			}
			else{
				HX_STACK_LINE(757)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(757)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(757)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(757)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(757)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(757)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(757)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(757)
							ret1->next = null();
						}
						HX_STACK_LINE(757)
						ret1->weak = false;
					}
					HX_STACK_LINE(757)
					ret1->_immutable = immutable;
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret1->x = x;
						HX_STACK_LINE(757)
						ret1->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					_g2 = ret1;
				}
				HX_STACK_LINE(757)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(757)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(757)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(757)
							_this->_validate();
						}
					}
					HX_STACK_LINE(757)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",757,0x4bb115c1)
						{
							HX_STACK_LINE(757)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(757)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(757)
										_this->_validate();
									}
								}
								HX_STACK_LINE(757)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(757)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(757)
				if ((!(((  (((_g3 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(757)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(757)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(757)
				ret;
			}
			HX_STACK_LINE(757)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(757)
			_g5 = ret;
		}
		HX_STACK_LINE(757)
		this->wrap_force = _g5;
		HX_STACK_LINE(758)
		this->wrap_force->zpp_inner->_inuse = true;
		HX_STACK_LINE(759)
		if ((this->world)){
			HX_STACK_LINE(759)
			this->wrap_force->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(761)
			this->wrap_force->zpp_inner->_invalidate = this->force_invalidate_dyn();
			HX_STACK_LINE(762)
			this->wrap_force->zpp_inner->_validate = this->force_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupForce,(void))

Void ZPP_Body_obj::cvel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","cvel_validate",0x52d1f46f,"zpp_nape.phys.ZPP_Body.cvel_validate","zpp_nape/phys/Body.hx",765,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(766)
		this->wrapcvel->zpp_inner->x = (this->velx + this->kinvelx);
		HX_STACK_LINE(767)
		this->wrapcvel->zpp_inner->y = (this->vely + this->kinvely);
		HX_STACK_LINE(768)
		this->wrapcvel->zpp_inner->z = (this->angvel + this->kinangvel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,cvel_validate,(void))

Void ZPP_Body_obj::setup_cvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setup_cvel",0x4ddd8c08,"zpp_nape.phys.ZPP_Body.setup_cvel","zpp_nape/phys/Body.hx",771,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(772)
		::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(773)
		::nape::geom::Vec3 _g = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(773)
		this->wrapcvel = _g;
		HX_STACK_LINE(774)
		this->wrapcvel->zpp_inner->immutable = true;
		HX_STACK_LINE(775)
		this->wrapcvel->zpp_inner->_validate = this->cvel_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setup_cvel,(void))

Void ZPP_Body_obj::invalidate_rot( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_rot",0x42c841ff,"zpp_nape.phys.ZPP_Body.invalidate_rot","zpp_nape/phys/Body.hx",784,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		this->zip_axis = true;
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(788)
			while((true)){
				HX_STACK_LINE(788)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(788)
					break;
				}
				HX_STACK_LINE(789)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(790)
				{
					HX_STACK_LINE(791)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(792)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(793)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(795)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(797)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(800)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_rot,(void))

Void ZPP_Body_obj::validate_axis( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_axis",0x53dcc1be,"zpp_nape.phys.ZPP_Body.validate_axis","zpp_nape/phys/Body.hx",807,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(807)
		if ((this->zip_axis)){
			HX_STACK_LINE(808)
			this->zip_axis = false;
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				Float _g = ::Math_obj::sin(this->rot);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(809)
				this->axisx = _g;
				HX_STACK_LINE(809)
				Float _g1 = ::Math_obj::cos(this->rot);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(809)
				this->axisy = _g1;
				HX_STACK_LINE(809)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_axis,(void))

Void ZPP_Body_obj::quick_validate_axis( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","quick_validate_axis",0x294704ac,"zpp_nape.phys.ZPP_Body.quick_validate_axis","zpp_nape/phys/Body.hx",815,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		Float _g = ::Math_obj::sin(this->rot);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(816)
		this->axisx = _g;
		HX_STACK_LINE(817)
		Float _g1 = ::Math_obj::cos(this->rot);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(817)
		this->axisy = _g1;
		HX_STACK_LINE(826)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,quick_validate_axis,(void))

Void ZPP_Body_obj::delta_rot( Float dr){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","delta_rot",0x8e7f4aa4,"zpp_nape.phys.ZPP_Body.delta_rot","zpp_nape/phys/Body.hx",838,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dr,"dr")
		HX_STACK_LINE(839)
		hx::AddEq(this->rot,dr);
		HX_STACK_LINE(840)
		if ((((dr * dr) > 0.0001))){
			HX_STACK_LINE(840)
			Float _g = ::Math_obj::sin(this->rot);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(840)
			this->axisx = _g;
			HX_STACK_LINE(840)
			Float _g1 = ::Math_obj::cos(this->rot);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(840)
			this->axisy = _g1;
			HX_STACK_LINE(840)
			Dynamic();
		}
		else{
			HX_STACK_LINE(842)
			Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(843)
			Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(844)
			Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(845)
			Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(846)
			this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
			HX_STACK_LINE(847)
			this->axisx = nx;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,delta_rot,(void))

Void ZPP_Body_obj::invalidate_mass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_mass",0x2918cc0c,"zpp_nape.phys.ZPP_Body.invalidate_mass","zpp_nape/phys/Body.hx",858,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(859)
		this->zip_mass = true;
		HX_STACK_LINE(860)
		this->invalidate_gravMass();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_mass,(void))

Void ZPP_Body_obj::validate_mass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_mass",0x5bb9e611,"zpp_nape.phys.ZPP_Body.validate_mass","zpp_nape/phys/Body.hx",862,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(863)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(864)
		if (((bool(this->zip_mass) || bool((bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(865)
			this->zip_mass = false;
			HX_STACK_LINE(866)
			if (((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))){
				HX_STACK_LINE(867)
				this->cmass = (int)0;
				HX_STACK_LINE(868)
				{
					HX_STACK_LINE(869)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(870)
					while((true)){
						HX_STACK_LINE(870)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(870)
							break;
						}
						HX_STACK_LINE(871)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(872)
						{
							HX_STACK_LINE(873)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(874)
							s->validate_area_inertia();
							HX_STACK_LINE(875)
							hx::AddEq(this->cmass,(s->area * s->material->density));
						}
						HX_STACK_LINE(877)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(881)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->nomove))))){
				HX_STACK_LINE(882)
				this->mass = this->cmass;
				HX_STACK_LINE(883)
				Float _g = this->smass = (Float(1.0) / Float(this->mass));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(883)
				this->imass = _g;
			}
			else{
				HX_STACK_LINE(886)
				this->mass = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(887)
				Float _g1 = this->smass = 0.0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(887)
				this->imass = _g1;
			}
			HX_STACK_LINE(889)
			if ((exist)){
				HX_STACK_LINE(889)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_mass,(void))

Void ZPP_Body_obj::invalidate_gravMass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_gravMass",0x62f2a40c,"zpp_nape.phys.ZPP_Body.invalidate_gravMass","zpp_nape/phys/Body.hx",897,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(898)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
			HX_STACK_LINE(898)
			this->zip_gravMass = true;
		}
		HX_STACK_LINE(899)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(899)
			this->zip_gravMassScale = true;
		}
		HX_STACK_LINE(900)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMass,(void))

Void ZPP_Body_obj::validate_gravMass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_gravMass",0x4629a491,"zpp_nape.phys.ZPP_Body.validate_gravMass","zpp_nape/phys/Body.hx",903,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(903)
		if ((this->zip_gravMass)){
			HX_STACK_LINE(904)
			this->zip_gravMass = false;
			HX_STACK_LINE(905)
			this->validate_mass();
			HX_STACK_LINE(906)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(907)
				this->validate_mass();
				HX_STACK_LINE(908)
				this->gravMass = this->cmass;
			}
			else{
				HX_STACK_LINE(910)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
					HX_STACK_LINE(911)
					this->validate_mass();
					HX_STACK_LINE(912)
					this->gravMass = (this->cmass * this->gravMassScale);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMass,(void))

Void ZPP_Body_obj::invalidate_gravMassScale( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_gravMassScale",0x0f3f6ede,"zpp_nape.phys.ZPP_Body.invalidate_gravMassScale","zpp_nape/phys/Body.hx",917,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(917)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(917)
			this->zip_gravMassScale = true;
		}
		else{
			HX_STACK_LINE(918)
			this->invalidate_gravMass();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMassScale,(void))

Void ZPP_Body_obj::validate_gravMassScale( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_gravMassScale",0x521f6c39,"zpp_nape.phys.ZPP_Body.validate_gravMassScale","zpp_nape/phys/Body.hx",921,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(921)
		if ((this->zip_gravMassScale)){
			HX_STACK_LINE(922)
			this->zip_gravMassScale = false;
			HX_STACK_LINE(923)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(923)
				this->gravMassScale = 1.0;
			}
			else{
				HX_STACK_LINE(924)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
					HX_STACK_LINE(925)
					this->validate_mass();
					HX_STACK_LINE(926)
					this->gravMassScale = (Float(this->gravMass) / Float(this->cmass));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMassScale,(void))

Void ZPP_Body_obj::invalidate_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_inertia",0xf1be24e2,"zpp_nape.phys.ZPP_Body.invalidate_inertia","zpp_nape/phys/Body.hx",937,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(938)
		this->zip_inertia = true;
		HX_STACK_LINE(939)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_inertia,(void))

Void ZPP_Body_obj::validate_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_inertia",0x8c975bfd,"zpp_nape.phys.ZPP_Body.validate_inertia","zpp_nape/phys/Body.hx",941,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(942)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(943)
		if (((bool(this->zip_inertia) || bool((bool((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(944)
			this->zip_inertia = false;
			HX_STACK_LINE(945)
			if (((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT))){
				HX_STACK_LINE(946)
				this->cinertia = (int)0;
				HX_STACK_LINE(947)
				{
					HX_STACK_LINE(948)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(949)
					while((true)){
						HX_STACK_LINE(949)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(949)
							break;
						}
						HX_STACK_LINE(950)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(951)
						{
							HX_STACK_LINE(952)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(953)
							s->validate_area_inertia();
							HX_STACK_LINE(954)
							hx::AddEq(this->cinertia,((s->inertia * s->area) * s->material->density));
						}
						HX_STACK_LINE(956)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(960)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->norotate))))){
				HX_STACK_LINE(961)
				this->inertia = this->cinertia;
				HX_STACK_LINE(962)
				Float _g = this->iinertia = (Float(1.0) / Float(this->inertia));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(962)
				this->sinertia = _g;
			}
			else{
				HX_STACK_LINE(965)
				this->inertia = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(966)
				Float _g1 = this->iinertia = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(966)
				this->sinertia = _g1;
			}
			HX_STACK_LINE(968)
			if ((exist)){
				HX_STACK_LINE(968)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_inertia,(void))

Void ZPP_Body_obj::invalidate_wake( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_wake",0x2fb4e73c,"zpp_nape.phys.ZPP_Body.invalidate_wake","zpp_nape/phys/Body.hx",974,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(974)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_wake,(void))

Void ZPP_Body_obj::validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_aabb",0x53cb47bd,"zpp_nape.phys.ZPP_Body.validate_aabb","zpp_nape/phys/Body.hx",983,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(983)
		if ((this->zip_aabb)){
			HX_STACK_LINE(984)
			this->zip_aabb = false;
			HX_STACK_LINE(985)
			{
				HX_STACK_LINE(986)
				this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(987)
				this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(996)
				{
				}
			}
			HX_STACK_LINE(1005)
			{
				HX_STACK_LINE(1006)
				this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1007)
				this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1016)
				{
				}
			}
			HX_STACK_LINE(1025)
			{
				HX_STACK_LINE(1026)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1027)
				while((true)){
					HX_STACK_LINE(1027)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(1027)
						break;
					}
					HX_STACK_LINE(1028)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1029)
					{
						HX_STACK_LINE(1030)
						if ((s->zip_aabb)){
							HX_STACK_LINE(1030)
							if (((s->body != null()))){
								HX_STACK_LINE(1030)
								s->zip_aabb = false;
								HX_STACK_LINE(1030)
								if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
									HX_STACK_LINE(1030)
									::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1030)
									if ((_this->zip_worldCOM)){
										HX_STACK_LINE(1030)
										if (((_this->body != null()))){
											HX_STACK_LINE(1030)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1030)
											if ((_this->zip_localCOM)){
												HX_STACK_LINE(1030)
												_this->zip_localCOM = false;
												HX_STACK_LINE(1030)
												if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
													HX_STACK_LINE(1030)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1030)
													if (((_this1->lverts->next->next == null()))){
														HX_STACK_LINE(1030)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(1030)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(1030)
														Dynamic();
													}
													else{
														HX_STACK_LINE(1030)
														if (((_this1->lverts->next->next->next == null()))){
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(1030)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(1030)
																{
																}
															}
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																Float t = 1.0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1030)
																hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																HX_STACK_LINE(1030)
																hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
															}
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																Float t = 0.5;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1030)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1030)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(1030)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(1030)
																{
																}
															}
															HX_STACK_LINE(1030)
															Float area = 0.0;		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1030)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1030)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1030)
																while((true)){
																	HX_STACK_LINE(1030)
																	if ((!(((cx_ite1 != null()))))){
																		HX_STACK_LINE(1030)
																		break;
																	}
																	HX_STACK_LINE(1030)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1030)
																	{
																		HX_STACK_LINE(1030)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1030)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1030)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1030)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1030)
																	u = v;
																	HX_STACK_LINE(1030)
																	v = w;
																	HX_STACK_LINE(1030)
																	cx_ite1 = cx_ite1->next;
																}
																HX_STACK_LINE(1030)
																cx_ite1 = _this1->lverts->next;
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1030)
																{
																	HX_STACK_LINE(1030)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1030)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1030)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1030)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1030)
																u = v;
																HX_STACK_LINE(1030)
																v = w;
																HX_STACK_LINE(1030)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(1030)
																{
																	HX_STACK_LINE(1030)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(1030)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1030)
																	hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(1030)
																	hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(1030)
															area = (Float((int)1) / Float((((int)3 * area))));
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1030)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1030)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
												HX_STACK_LINE(1030)
												if (((_this->wrap_localCOM != null()))){
													HX_STACK_LINE(1030)
													_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
													HX_STACK_LINE(1030)
													_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
													HX_STACK_LINE(1030)
													{
													}
												}
											}
											HX_STACK_LINE(1030)
											{
												HX_STACK_LINE(1030)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1030)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1030)
													_this1->zip_axis = false;
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(1030)
														_this1->axisx = _g;
														HX_STACK_LINE(1030)
														Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(1030)
														_this1->axisy = _g1;
														HX_STACK_LINE(1030)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1030)
											{
												HX_STACK_LINE(1030)
												_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
												HX_STACK_LINE(1030)
												_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
											}
										}
									}
									HX_STACK_LINE(1030)
									Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
									HX_STACK_LINE(1030)
									Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1030)
										_this->aabb->minx = (_this->worldCOMx - rx);
										HX_STACK_LINE(1030)
										_this->aabb->miny = (_this->worldCOMy - ry);
									}
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1030)
										_this->aabb->maxx = (_this->worldCOMx + rx);
										HX_STACK_LINE(1030)
										_this->aabb->maxy = (_this->worldCOMy + ry);
									}
								}
								else{
									HX_STACK_LINE(1030)
									::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1030)
									if ((_this->zip_gverts)){
										HX_STACK_LINE(1030)
										if (((_this->body != null()))){
											HX_STACK_LINE(1030)
											_this->zip_gverts = false;
											HX_STACK_LINE(1030)
											_this->validate_lverts();
											HX_STACK_LINE(1030)
											{
												HX_STACK_LINE(1030)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1030)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1030)
													_this1->zip_axis = false;
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(1030)
														_this1->axisx = _g2;
														HX_STACK_LINE(1030)
														Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(1030)
														_this1->axisy = _g3;
														HX_STACK_LINE(1030)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1030)
											::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(1030)
											{
												HX_STACK_LINE(1030)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1030)
												while((true)){
													HX_STACK_LINE(1030)
													if ((!(((cx_ite1 != null()))))){
														HX_STACK_LINE(1030)
														break;
													}
													HX_STACK_LINE(1030)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(1030)
														li = li->next;
														HX_STACK_LINE(1030)
														{
															HX_STACK_LINE(1030)
															g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
															HX_STACK_LINE(1030)
															g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
														}
													}
													HX_STACK_LINE(1030)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
									HX_STACK_LINE(1030)
									::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1030)
										_this->aabb->minx = p0->x;
										HX_STACK_LINE(1030)
										_this->aabb->miny = p0->y;
										HX_STACK_LINE(1030)
										{
										}
									}
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1030)
										_this->aabb->maxx = p0->x;
										HX_STACK_LINE(1030)
										_this->aabb->maxy = p0->y;
										HX_STACK_LINE(1030)
										{
										}
									}
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(1030)
										while((true)){
											HX_STACK_LINE(1030)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(1030)
												break;
											}
											HX_STACK_LINE(1030)
											::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
											HX_STACK_LINE(1030)
											{
												HX_STACK_LINE(1030)
												if (((p->x < _this->aabb->minx))){
													HX_STACK_LINE(1030)
													_this->aabb->minx = p->x;
												}
												HX_STACK_LINE(1030)
												if (((p->x > _this->aabb->maxx))){
													HX_STACK_LINE(1030)
													_this->aabb->maxx = p->x;
												}
												HX_STACK_LINE(1030)
												if (((p->y < _this->aabb->miny))){
													HX_STACK_LINE(1030)
													_this->aabb->miny = p->y;
												}
												HX_STACK_LINE(1030)
												if (((p->y > _this->aabb->maxy))){
													HX_STACK_LINE(1030)
													_this->aabb->maxy = p->y;
												}
											}
											HX_STACK_LINE(1030)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1031)
						{
							HX_STACK_LINE(1031)
							::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1031)
							::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1031)
							if (((x->minx < _this->minx))){
								HX_STACK_LINE(1031)
								_this->minx = x->minx;
							}
							HX_STACK_LINE(1031)
							if (((x->maxx > _this->maxx))){
								HX_STACK_LINE(1031)
								_this->maxx = x->maxx;
							}
							HX_STACK_LINE(1031)
							if (((x->miny < _this->miny))){
								HX_STACK_LINE(1031)
								_this->miny = x->miny;
							}
							HX_STACK_LINE(1031)
							if (((x->maxy > _this->maxy))){
								HX_STACK_LINE(1031)
								_this->maxy = x->maxy;
							}
						}
					}
					HX_STACK_LINE(1033)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_aabb,(void))

Void ZPP_Body_obj::invalidate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_aabb",0x212a2db8,"zpp_nape.phys.ZPP_Body.invalidate_aabb","zpp_nape/phys/Body.hx",1041,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1041)
		this->zip_aabb = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_aabb,(void))

Void ZPP_Body_obj::invalidate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_localCOM",0xcde1beae,"zpp_nape.phys.ZPP_Body.invalidate_localCOM","zpp_nape/phys/Body.hx",1053,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1054)
		this->zip_localCOM = true;
		HX_STACK_LINE(1055)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_localCOM,(void))

Void ZPP_Body_obj::invalidate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_worldCOM",0x9285bc27,"zpp_nape.phys.ZPP_Body.invalidate_worldCOM","zpp_nape/phys/Body.hx",1060,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1060)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_worldCOM,(void))

Void ZPP_Body_obj::validate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_localCOM",0xb118bf33,"zpp_nape.phys.ZPP_Body.validate_localCOM","zpp_nape/phys/Body.hx",1063,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1063)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(1064)
			this->zip_localCOM = false;
			HX_STACK_LINE(1065)
			Float tempx = (int)0;		HX_STACK_VAR(tempx,"tempx");
			HX_STACK_LINE(1066)
			Float tempy = (int)0;		HX_STACK_VAR(tempy,"tempy");
			HX_STACK_LINE(1083)
			Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
			HX_STACK_LINE(1084)
			{
				HX_STACK_LINE(1085)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1086)
				while((true)){
					HX_STACK_LINE(1086)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(1086)
						break;
					}
					HX_STACK_LINE(1087)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1088)
					{
						HX_STACK_LINE(1089)
						if ((s->zip_localCOM)){
							HX_STACK_LINE(1089)
							s->zip_localCOM = false;
							HX_STACK_LINE(1089)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(1089)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1089)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(1089)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(1089)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(1089)
									Dynamic();
								}
								else{
									HX_STACK_LINE(1089)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(1089)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(1089)
											{
											}
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1089)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(1089)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1089)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1089)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(1089)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(1089)
											{
											}
										}
										HX_STACK_LINE(1089)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(1089)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1089)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1089)
											while((true)){
												HX_STACK_LINE(1089)
												if ((!(((cx_ite1 != null()))))){
													HX_STACK_LINE(1089)
													break;
												}
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(1089)
												{
													HX_STACK_LINE(1089)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(1089)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(1089)
												u = v;
												HX_STACK_LINE(1089)
												v = w;
												HX_STACK_LINE(1089)
												cx_ite1 = cx_ite1->next;
											}
											HX_STACK_LINE(1089)
											cx_ite1 = _this->lverts->next;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(1089)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(1089)
											u = v;
											HX_STACK_LINE(1089)
											v = w;
											HX_STACK_LINE(1089)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(1089)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(1089)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1089)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1089)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(1089)
							if (((s->wrap_localCOM != null()))){
								HX_STACK_LINE(1089)
								s->wrap_localCOM->zpp_inner->x = s->localCOMx;
								HX_STACK_LINE(1089)
								s->wrap_localCOM->zpp_inner->y = s->localCOMy;
								HX_STACK_LINE(1089)
								{
								}
							}
						}
						HX_STACK_LINE(1090)
						s->validate_area_inertia();
						HX_STACK_LINE(1091)
						{
							HX_STACK_LINE(1092)
							Float t = (s->area * s->material->density);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1101)
							hx::AddEq(tempx,(s->localCOMx * t));
							HX_STACK_LINE(1102)
							hx::AddEq(tempy,(s->localCOMy * t));
						}
						HX_STACK_LINE(1104)
						hx::AddEq(msum,(s->area * s->material->density));
					}
					HX_STACK_LINE(1106)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1109)
			if (((msum != (int)0))){
				HX_STACK_LINE(1111)
				Float t = (Float(1.0) / Float(msum));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1120)
				this->localCOMx = (tempx * t);
				HX_STACK_LINE(1121)
				this->localCOMy = (tempy * t);
			}
			HX_STACK_LINE(1124)
			if (((this->wrap_localCOM != null()))){
				HX_STACK_LINE(1125)
				this->wrap_localCOM->zpp_inner->x = this->localCOMx;
				HX_STACK_LINE(1126)
				this->wrap_localCOM->zpp_inner->y = this->localCOMy;
				HX_STACK_LINE(1135)
				{
				}
			}
			HX_STACK_LINE(1144)
			if (((bool(this->zip_mass) && bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))))){
				HX_STACK_LINE(1145)
				this->zip_mass = false;
				HX_STACK_LINE(1146)
				this->cmass = msum;
				HX_STACK_LINE(1147)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
					HX_STACK_LINE(1148)
					this->mass = this->cmass;
					HX_STACK_LINE(1149)
					Float _g = this->smass = (Float(1.0) / Float(this->mass));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1149)
					this->imass = _g;
				}
				else{
					HX_STACK_LINE(1152)
					this->mass = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1153)
					Float _g1 = this->smass = 0.0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1153)
					this->imass = _g1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_localCOM,(void))

Void ZPP_Body_obj::validate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_worldCOM",0x75bcbcac,"zpp_nape.phys.ZPP_Body.validate_worldCOM","zpp_nape/phys/Body.hx",1159,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1159)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(1160)
			this->zip_worldCOM = false;
			HX_STACK_LINE(1161)
			this->validate_localCOM();
			HX_STACK_LINE(1162)
			if ((this->zip_axis)){
				HX_STACK_LINE(1162)
				this->zip_axis = false;
				HX_STACK_LINE(1162)
				{
					HX_STACK_LINE(1162)
					Float _g = ::Math_obj::sin(this->rot);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1162)
					this->axisx = _g;
					HX_STACK_LINE(1162)
					Float _g1 = ::Math_obj::cos(this->rot);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1162)
					this->axisy = _g1;
					HX_STACK_LINE(1162)
					Dynamic();
				}
			}
			HX_STACK_LINE(1163)
			{
				HX_STACK_LINE(1164)
				this->worldCOMx = (this->posx + (((this->axisy * this->localCOMx) - (this->axisx * this->localCOMy))));
				HX_STACK_LINE(1165)
				this->worldCOMy = (this->posy + (((this->localCOMx * this->axisx) + (this->localCOMy * this->axisy))));
			}
			HX_STACK_LINE(1167)
			if (((this->wrap_worldCOM != null()))){
				HX_STACK_LINE(1168)
				this->wrap_worldCOM->zpp_inner->x = this->worldCOMx;
				HX_STACK_LINE(1169)
				this->wrap_worldCOM->zpp_inner->y = this->worldCOMy;
				HX_STACK_LINE(1178)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_worldCOM,(void))

Void ZPP_Body_obj::getlocalCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","getlocalCOM",0x091ebac0,"zpp_nape.phys.ZPP_Body.getlocalCOM","zpp_nape/phys/Body.hx",1193,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1193)
		this->validate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getlocalCOM,(void))

Void ZPP_Body_obj::getworldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","getworldCOM",0xcdc2b839,"zpp_nape.phys.ZPP_Body.getworldCOM","zpp_nape/phys/Body.hx",1199,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1199)
		this->validate_worldCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getworldCOM,(void))

Void ZPP_Body_obj::__immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","__immutable_midstep",0x56f8ba0b,"zpp_nape.phys.ZPP_Body.__immutable_midstep","zpp_nape/phys/Body.hx",1203,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,__immutable_midstep,(void))

Void ZPP_Body_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","clear",0x7ebdf721,"zpp_nape.phys.ZPP_Body.clear","zpp_nape/phys/Body.hx",1208,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1216)
		while((true)){
			HX_STACK_LINE(1216)
			if ((!((!(((this->shapes->head == null()))))))){
				HX_STACK_LINE(1216)
				break;
			}
			HX_STACK_LINE(1217)
			::zpp_nape::shape::ZPP_Shape s = this->shapes->pop_unsafe();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1218)
			{
				HX_STACK_LINE(1219)
				s->removedFromBody();
				HX_STACK_LINE(1220)
				s->body = null();
			}
		}
		HX_STACK_LINE(1224)
		this->invalidate_shapes();
		HX_STACK_LINE(1225)
		{
			HX_STACK_LINE(1226)
			this->pre_posx = (int)0;
			HX_STACK_LINE(1227)
			this->pre_posy = (int)0;
			HX_STACK_LINE(1236)
			{
			}
		}
		HX_STACK_LINE(1245)
		{
			HX_STACK_LINE(1246)
			this->posx = (int)0;
			HX_STACK_LINE(1247)
			this->posy = (int)0;
			HX_STACK_LINE(1256)
			{
			}
		}
		HX_STACK_LINE(1265)
		{
			HX_STACK_LINE(1266)
			this->velx = (int)0;
			HX_STACK_LINE(1267)
			this->vely = (int)0;
			HX_STACK_LINE(1276)
			{
			}
		}
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1286)
			this->forcex = (int)0;
			HX_STACK_LINE(1287)
			this->forcey = (int)0;
			HX_STACK_LINE(1296)
			{
			}
		}
		HX_STACK_LINE(1305)
		{
			HX_STACK_LINE(1306)
			this->kinvelx = (int)0;
			HX_STACK_LINE(1307)
			this->kinvely = (int)0;
			HX_STACK_LINE(1316)
			{
			}
		}
		HX_STACK_LINE(1325)
		{
			HX_STACK_LINE(1326)
			this->svelx = (int)0;
			HX_STACK_LINE(1327)
			this->svely = (int)0;
			HX_STACK_LINE(1336)
			{
			}
		}
		HX_STACK_LINE(1345)
		Float _g = this->rot = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1345)
		Float _g1 = this->pre_rot = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1345)
		Float _g2 = this->kinangvel = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1345)
		Float _g3 = this->torque = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1345)
		this->angvel = _g3;
		HX_STACK_LINE(1346)
		{
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1346)
				while((true)){
					HX_STACK_LINE(1346)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(1346)
						break;
					}
					HX_STACK_LINE(1346)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1346)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1346)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1346)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1347)
		{
			HX_STACK_LINE(1347)
			this->zip_axis = true;
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1347)
				while((true)){
					HX_STACK_LINE(1347)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(1347)
						break;
					}
					HX_STACK_LINE(1347)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1347)
					{
						HX_STACK_LINE(1347)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1347)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1347)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1347)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1347)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1347)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1348)
		{
			HX_STACK_LINE(1349)
			this->axisx = (int)0;
			HX_STACK_LINE(1350)
			this->axisy = (int)1;
			HX_STACK_LINE(1359)
			{
			}
		}
		HX_STACK_LINE(1368)
		this->zip_axis = false;
		HX_STACK_LINE(1369)
		this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
		HX_STACK_LINE(1370)
		this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
		HX_STACK_LINE(1371)
		this->gravMassScale = 1.0;
		HX_STACK_LINE(1372)
		this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
		HX_STACK_LINE(1373)
		this->norotate = false;
		HX_STACK_LINE(1374)
		this->nomove = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,clear,(void))

Void ZPP_Body_obj::aabb_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","aabb_validate",0x5d190ae9,"zpp_nape.phys.ZPP_Body.aabb_validate","zpp_nape/phys/Body.hx",1390,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1390)
		if ((this->zip_aabb)){
			HX_STACK_LINE(1390)
			this->zip_aabb = false;
			HX_STACK_LINE(1390)
			{
				HX_STACK_LINE(1390)
				this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(1390)
				this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(1390)
				{
				}
			}
			HX_STACK_LINE(1390)
			{
				HX_STACK_LINE(1390)
				this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1390)
				this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1390)
				{
				}
			}
			HX_STACK_LINE(1390)
			{
				HX_STACK_LINE(1390)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1390)
				while((true)){
					HX_STACK_LINE(1390)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(1390)
						break;
					}
					HX_STACK_LINE(1390)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1390)
					{
						HX_STACK_LINE(1390)
						if ((s->zip_aabb)){
							HX_STACK_LINE(1390)
							if (((s->body != null()))){
								HX_STACK_LINE(1390)
								s->zip_aabb = false;
								HX_STACK_LINE(1390)
								if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
									HX_STACK_LINE(1390)
									::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1390)
									if ((_this->zip_worldCOM)){
										HX_STACK_LINE(1390)
										if (((_this->body != null()))){
											HX_STACK_LINE(1390)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1390)
											if ((_this->zip_localCOM)){
												HX_STACK_LINE(1390)
												_this->zip_localCOM = false;
												HX_STACK_LINE(1390)
												if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
													HX_STACK_LINE(1390)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1390)
													if (((_this1->lverts->next->next == null()))){
														HX_STACK_LINE(1390)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(1390)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(1390)
														Dynamic();
													}
													else{
														HX_STACK_LINE(1390)
														if (((_this1->lverts->next->next->next == null()))){
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(1390)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(1390)
																{
																}
															}
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																Float t = 1.0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1390)
																hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																HX_STACK_LINE(1390)
																hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
															}
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																Float t = 0.5;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1390)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1390)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(1390)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(1390)
																{
																}
															}
															HX_STACK_LINE(1390)
															Float area = 0.0;		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1390)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1390)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1390)
																while((true)){
																	HX_STACK_LINE(1390)
																	if ((!(((cx_ite1 != null()))))){
																		HX_STACK_LINE(1390)
																		break;
																	}
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1390)
																	{
																		HX_STACK_LINE(1390)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1390)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1390)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1390)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1390)
																	u = v;
																	HX_STACK_LINE(1390)
																	v = w;
																	HX_STACK_LINE(1390)
																	cx_ite1 = cx_ite1->next;
																}
																HX_STACK_LINE(1390)
																cx_ite1 = _this1->lverts->next;
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1390)
																{
																	HX_STACK_LINE(1390)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1390)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1390)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1390)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1390)
																u = v;
																HX_STACK_LINE(1390)
																v = w;
																HX_STACK_LINE(1390)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(1390)
																{
																	HX_STACK_LINE(1390)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(1390)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1390)
																	hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(1390)
																	hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(1390)
															area = (Float((int)1) / Float((((int)3 * area))));
															HX_STACK_LINE(1390)
															{
																HX_STACK_LINE(1390)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1390)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1390)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
												HX_STACK_LINE(1390)
												if (((_this->wrap_localCOM != null()))){
													HX_STACK_LINE(1390)
													_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
													HX_STACK_LINE(1390)
													_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
													HX_STACK_LINE(1390)
													{
													}
												}
											}
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1390)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1390)
													_this1->zip_axis = false;
													HX_STACK_LINE(1390)
													{
														HX_STACK_LINE(1390)
														Float _g = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(1390)
														_this1->axisx = _g;
														HX_STACK_LINE(1390)
														Float _g1 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(1390)
														_this1->axisy = _g1;
														HX_STACK_LINE(1390)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
												HX_STACK_LINE(1390)
												_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
											}
										}
									}
									HX_STACK_LINE(1390)
									Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
									HX_STACK_LINE(1390)
									Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
									HX_STACK_LINE(1390)
									{
										HX_STACK_LINE(1390)
										_this->aabb->minx = (_this->worldCOMx - rx);
										HX_STACK_LINE(1390)
										_this->aabb->miny = (_this->worldCOMy - ry);
									}
									HX_STACK_LINE(1390)
									{
										HX_STACK_LINE(1390)
										_this->aabb->maxx = (_this->worldCOMx + rx);
										HX_STACK_LINE(1390)
										_this->aabb->maxy = (_this->worldCOMy + ry);
									}
								}
								else{
									HX_STACK_LINE(1390)
									::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1390)
									if ((_this->zip_gverts)){
										HX_STACK_LINE(1390)
										if (((_this->body != null()))){
											HX_STACK_LINE(1390)
											_this->zip_gverts = false;
											HX_STACK_LINE(1390)
											_this->validate_lverts();
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1390)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1390)
													_this1->zip_axis = false;
													HX_STACK_LINE(1390)
													{
														HX_STACK_LINE(1390)
														Float _g2 = ::Math_obj::sin(_this1->rot);		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(1390)
														_this1->axisx = _g2;
														HX_STACK_LINE(1390)
														Float _g3 = ::Math_obj::cos(_this1->rot);		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(1390)
														_this1->axisy = _g3;
														HX_STACK_LINE(1390)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1390)
											::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1390)
												while((true)){
													HX_STACK_LINE(1390)
													if ((!(((cx_ite1 != null()))))){
														HX_STACK_LINE(1390)
														break;
													}
													HX_STACK_LINE(1390)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1390)
													{
														HX_STACK_LINE(1390)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(1390)
														li = li->next;
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
															HX_STACK_LINE(1390)
															g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
														}
													}
													HX_STACK_LINE(1390)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
									HX_STACK_LINE(1390)
									::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
									HX_STACK_LINE(1390)
									{
										HX_STACK_LINE(1390)
										_this->aabb->minx = p0->x;
										HX_STACK_LINE(1390)
										_this->aabb->miny = p0->y;
										HX_STACK_LINE(1390)
										{
										}
									}
									HX_STACK_LINE(1390)
									{
										HX_STACK_LINE(1390)
										_this->aabb->maxx = p0->x;
										HX_STACK_LINE(1390)
										_this->aabb->maxy = p0->y;
										HX_STACK_LINE(1390)
										{
										}
									}
									HX_STACK_LINE(1390)
									{
										HX_STACK_LINE(1390)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(1390)
										while((true)){
											HX_STACK_LINE(1390)
											if ((!(((cx_ite1 != null()))))){
												HX_STACK_LINE(1390)
												break;
											}
											HX_STACK_LINE(1390)
											::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												if (((p->x < _this->aabb->minx))){
													HX_STACK_LINE(1390)
													_this->aabb->minx = p->x;
												}
												HX_STACK_LINE(1390)
												if (((p->x > _this->aabb->maxx))){
													HX_STACK_LINE(1390)
													_this->aabb->maxx = p->x;
												}
												HX_STACK_LINE(1390)
												if (((p->y < _this->aabb->miny))){
													HX_STACK_LINE(1390)
													_this->aabb->miny = p->y;
												}
												HX_STACK_LINE(1390)
												if (((p->y > _this->aabb->maxy))){
													HX_STACK_LINE(1390)
													_this->aabb->maxy = p->y;
												}
											}
											HX_STACK_LINE(1390)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1390)
						{
							HX_STACK_LINE(1390)
							::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1390)
							::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1390)
							if (((x->minx < _this->minx))){
								HX_STACK_LINE(1390)
								_this->minx = x->minx;
							}
							HX_STACK_LINE(1390)
							if (((x->maxx > _this->maxx))){
								HX_STACK_LINE(1390)
								_this->maxx = x->maxx;
							}
							HX_STACK_LINE(1390)
							if (((x->miny < _this->miny))){
								HX_STACK_LINE(1390)
								_this->miny = x->miny;
							}
							HX_STACK_LINE(1390)
							if (((x->maxy > _this->maxy))){
								HX_STACK_LINE(1390)
								_this->maxy = x->maxy;
							}
						}
					}
					HX_STACK_LINE(1390)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,aabb_validate,(void))

bool ZPP_Body_obj::shapes_adder( ::nape::shape::Shape s){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_adder",0xe0b7bcad,"zpp_nape.phys.ZPP_Body.shapes_adder","zpp_nape/phys/Body.hx",1393,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(1393)
	if (((s->zpp_inner->body != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(1394)
		if (((s->zpp_inner->body != null()))){
			HX_STACK_LINE(1394)
			s->zpp_inner->body->wrap_shapes->remove(s);
		}
		HX_STACK_LINE(1395)
		s->zpp_inner->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1396)
		s->zpp_inner->addedToBody();
		HX_STACK_LINE(1397)
		if (((this->space != null()))){
			HX_STACK_LINE(1397)
			::zpp_nape::space::ZPP_Space _this = this->space;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1397)
			::zpp_nape::shape::ZPP_Shape s1 = s->zpp_inner;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1397)
			bool dontwake = false;		HX_STACK_VAR(dontwake,"dontwake");
			HX_STACK_LINE(1397)
			if ((!(dontwake))){
				HX_STACK_LINE(1397)
				::zpp_nape::phys::ZPP_Body o = s1->body;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1397)
				if ((!(o->world))){
					HX_STACK_LINE(1397)
					o->component->waket = (_this->stamp + ((  ((_this->midstep)) ? int((int)0) : int((int)1) )));
					HX_STACK_LINE(1397)
					if (((o->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC))){
						HX_STACK_LINE(1397)
						o->kinematicDelaySleep = true;
					}
					HX_STACK_LINE(1397)
					if ((o->component->sleeping)){
						HX_STACK_LINE(1397)
						_this->really_wake(o,false);
					}
				}
			}
			HX_STACK_LINE(1397)
			_this->bphase->insert(s1);
			HX_STACK_LINE(1397)
			s1->addedToSpace();
		}
		HX_STACK_LINE(1398)
		if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(1399)
			s->zpp_inner->polygon->invalidate_gaxi();
			HX_STACK_LINE(1400)
			s->zpp_inner->polygon->invalidate_gverts();
		}
		HX_STACK_LINE(1402)
		return true;
	}
	else{
		HX_STACK_LINE(1404)
		return false;
	}
	HX_STACK_LINE(1393)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_adder,return )

Void ZPP_Body_obj::shapes_subber( ::nape::shape::Shape s){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_subber",0xbaf4f710,"zpp_nape.phys.ZPP_Body.shapes_subber","zpp_nape/phys/Body.hx",1406,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(1407)
		if (((this->space != null()))){
			HX_STACK_LINE(1407)
			this->space->removed_shape(s->zpp_inner,null());
		}
		HX_STACK_LINE(1408)
		s->zpp_inner->body = null();
		HX_STACK_LINE(1409)
		s->zpp_inner->removedFromBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_subber,(void))

Void ZPP_Body_obj::shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_invalidate",0x5bc6493c,"zpp_nape.phys.ZPP_Body.shapes_invalidate","zpp_nape/phys/Body.hx",1412,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(1412)
		this->invalidate_shapes();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_invalidate,(void))

Void ZPP_Body_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","addedToSpace",0x8a025957,"zpp_nape.phys.ZPP_Body.addedToSpace","zpp_nape/phys/Body.hx",1633,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1642)
		{
			HX_STACK_LINE(1643)
			if (((::zpp_nape::space::ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(1644)
				::zpp_nape::space::ZPP_Component _g = ::zpp_nape::space::ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1644)
				this->component = _g;
			}
			else{
				HX_STACK_LINE(1650)
				this->component = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(1651)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = this->component->next;
				HX_STACK_LINE(1652)
				this->component->next = null();
			}
			HX_STACK_LINE(1657)
			Dynamic();
		}
		HX_STACK_LINE(1659)
		this->component->isBody = true;
		HX_STACK_LINE(1660)
		this->component->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1661)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,addedToSpace,(void))

Void ZPP_Body_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","removedFromSpace",0xaf4e3e28,"zpp_nape.phys.ZPP_Body.removedFromSpace","zpp_nape/phys/Body.hx",1663,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1664)
		while((true)){
			HX_STACK_LINE(1664)
			if ((!((!(((this->arbiters->head == null()))))))){
				HX_STACK_LINE(1664)
				break;
			}
			HX_STACK_LINE(1665)
			::zpp_nape::dynamics::ZPP_Arbiter arb = this->arbiters->pop_unsafe();		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1666)
			{
				HX_STACK_LINE(1666)
				arb->cleared = true;
				HX_STACK_LINE(1666)
				if (((arb->b2 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1666)
					{
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1666)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1666)
						while((true)){
							HX_STACK_LINE(1666)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1666)
								{
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1666)
									if (((pre == null()))){
										HX_STACK_LINE(1666)
										old = _this->head;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										_this->head = ret1;
										HX_STACK_LINE(1666)
										if (((_this->head == null()))){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1666)
										old = pre->next;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										pre->next = ret1;
										HX_STACK_LINE(1666)
										if (((ret1 == null()))){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1666)
									{
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1666)
										o->elt = null();
										HX_STACK_LINE(1666)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1666)
									_this->modified = true;
									HX_STACK_LINE(1666)
									(_this->length)--;
									HX_STACK_LINE(1666)
									_this->pushmod = true;
									HX_STACK_LINE(1666)
									ret1;
								}
								HX_STACK_LINE(1666)
								ret = true;
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							pre = cur;
							HX_STACK_LINE(1666)
							cur = cur->next;
						}
						HX_STACK_LINE(1666)
						ret;
					}
				}
				HX_STACK_LINE(1666)
				if (((arb->b1 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1666)
					{
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1666)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1666)
						while((true)){
							HX_STACK_LINE(1666)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1666)
								{
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1666)
									if (((pre == null()))){
										HX_STACK_LINE(1666)
										old = _this->head;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										_this->head = ret1;
										HX_STACK_LINE(1666)
										if (((_this->head == null()))){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1666)
										old = pre->next;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										pre->next = ret1;
										HX_STACK_LINE(1666)
										if (((ret1 == null()))){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1666)
									{
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1666)
										o->elt = null();
										HX_STACK_LINE(1666)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1666)
									_this->modified = true;
									HX_STACK_LINE(1666)
									(_this->length)--;
									HX_STACK_LINE(1666)
									_this->pushmod = true;
									HX_STACK_LINE(1666)
									ret1;
								}
								HX_STACK_LINE(1666)
								ret = true;
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							pre = cur;
							HX_STACK_LINE(1666)
							cur = cur->next;
						}
						HX_STACK_LINE(1666)
						ret;
					}
				}
				HX_STACK_LINE(1666)
				if (((arb->pair != null()))){
					HX_STACK_LINE(1666)
					arb->pair->arb = null();
					HX_STACK_LINE(1666)
					arb->pair = null();
				}
				HX_STACK_LINE(1666)
				arb->active = false;
				HX_STACK_LINE(1666)
				this->space->f_arbiters->modified = true;
			}
		}
		HX_STACK_LINE(1668)
		{
			HX_STACK_LINE(1669)
			::zpp_nape::space::ZPP_Component o = this->component;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1678)
			{
				HX_STACK_LINE(1678)
				o->body = null();
				HX_STACK_LINE(1678)
				o->constraint = null();
				HX_STACK_LINE(1678)
				Dynamic();
			}
			HX_STACK_LINE(1679)
			o->next = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(1680)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1685)
		this->component = null();
		HX_STACK_LINE(1686)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,removedFromSpace,(void))

::nape::phys::Body ZPP_Body_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","copy",0x610204a1,"zpp_nape.phys.ZPP_Body.copy","zpp_nape/phys/Body.hx",1688,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1689)
	::zpp_nape::phys::ZPP_Body ret = ::nape::phys::Body_obj::__new(null(),null())->zpp_inner;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1690)
	ret->type = this->type;
	HX_STACK_LINE(1691)
	ret->bulletEnabled = this->bulletEnabled;
	HX_STACK_LINE(1692)
	ret->disableCCD = this->disableCCD;
	HX_STACK_LINE(1693)
	{
		HX_STACK_LINE(1694)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1695)
		while((true)){
			HX_STACK_LINE(1695)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1695)
				break;
			}
			HX_STACK_LINE(1696)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1698)
			{
				HX_STACK_LINE(1698)
				::nape::shape::ShapeList _this = ret->outer->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1698)
				::nape::shape::Shape obj = s->outer->copy();		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1698)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(1698)
					_this->push(obj);
				}
				else{
					HX_STACK_LINE(1698)
					_this->unshift(obj);
				}
			}
			HX_STACK_LINE(1700)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1703)
	{
		HX_STACK_LINE(1704)
		ret->posx = this->posx;
		HX_STACK_LINE(1705)
		ret->posy = this->posy;
		HX_STACK_LINE(1714)
		{
		}
	}
	HX_STACK_LINE(1723)
	{
		HX_STACK_LINE(1724)
		ret->velx = this->velx;
		HX_STACK_LINE(1725)
		ret->vely = this->vely;
		HX_STACK_LINE(1734)
		{
		}
	}
	HX_STACK_LINE(1743)
	{
		HX_STACK_LINE(1744)
		ret->forcex = this->forcex;
		HX_STACK_LINE(1745)
		ret->forcey = this->forcey;
		HX_STACK_LINE(1754)
		{
		}
	}
	HX_STACK_LINE(1763)
	ret->rot = this->rot;
	HX_STACK_LINE(1764)
	ret->angvel = this->angvel;
	HX_STACK_LINE(1765)
	ret->torque = this->torque;
	HX_STACK_LINE(1766)
	{
		HX_STACK_LINE(1767)
		ret->kinvelx = this->kinvelx;
		HX_STACK_LINE(1768)
		ret->kinvely = this->kinvely;
		HX_STACK_LINE(1777)
		{
		}
	}
	HX_STACK_LINE(1786)
	ret->kinangvel = this->kinangvel;
	HX_STACK_LINE(1787)
	{
		HX_STACK_LINE(1788)
		ret->svelx = this->svelx;
		HX_STACK_LINE(1789)
		ret->svely = this->svely;
		HX_STACK_LINE(1798)
		{
		}
	}
	HX_STACK_LINE(1807)
	if ((!(this->zip_axis))){
		HX_STACK_LINE(1808)
		ret->axisx = this->axisx;
		HX_STACK_LINE(1809)
		ret->axisy = this->axisy;
		HX_STACK_LINE(1818)
		{
		}
	}
	else{
		HX_STACK_LINE(1827)
		ret->zip_axis = true;
		HX_STACK_LINE(1827)
		{
			HX_STACK_LINE(1827)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = ret->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1827)
			while((true)){
				HX_STACK_LINE(1827)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1827)
					break;
				}
				HX_STACK_LINE(1827)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1827)
				{
					HX_STACK_LINE(1827)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(1827)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(1827)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(1827)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(1827)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1827)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1828)
	ret->rot = this->rot;
	HX_STACK_LINE(1829)
	ret->massMode = this->massMode;
	HX_STACK_LINE(1830)
	ret->gravMassMode = this->gravMassMode;
	HX_STACK_LINE(1831)
	ret->inertiaMode = this->inertiaMode;
	HX_STACK_LINE(1832)
	ret->norotate = this->norotate;
	HX_STACK_LINE(1833)
	ret->nomove = this->nomove;
	HX_STACK_LINE(1834)
	ret->cmass = this->cmass;
	HX_STACK_LINE(1835)
	ret->cinertia = this->cinertia;
	HX_STACK_LINE(1836)
	if ((!(this->zip_mass))){
		HX_STACK_LINE(1836)
		ret->mass = this->mass;
	}
	else{
		HX_STACK_LINE(1837)
		ret->invalidate_mass();
	}
	HX_STACK_LINE(1838)
	if ((!(this->zip_gravMass))){
		HX_STACK_LINE(1838)
		ret->gravMass = this->gravMass;
	}
	else{
		HX_STACK_LINE(1839)
		ret->invalidate_gravMass();
	}
	HX_STACK_LINE(1840)
	if ((!(this->zip_gravMassScale))){
		HX_STACK_LINE(1840)
		ret->gravMassScale = this->gravMassScale;
	}
	else{
		HX_STACK_LINE(1841)
		ret->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1842)
	if ((!(this->zip_inertia))){
		HX_STACK_LINE(1842)
		ret->inertia = this->inertia;
	}
	else{
		HX_STACK_LINE(1843)
		ret->invalidate_inertia();
	}
	HX_STACK_LINE(1844)
	if ((!(this->zip_aabb))){
		HX_STACK_LINE(1845)
		{
			HX_STACK_LINE(1846)
			ret->aabb->minx = this->aabb->minx;
			HX_STACK_LINE(1847)
			ret->aabb->miny = this->aabb->miny;
			HX_STACK_LINE(1856)
			{
			}
		}
		HX_STACK_LINE(1865)
		{
			HX_STACK_LINE(1866)
			ret->aabb->maxx = this->aabb->maxx;
			HX_STACK_LINE(1867)
			ret->aabb->maxy = this->aabb->maxy;
			HX_STACK_LINE(1876)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(1886)
		ret->zip_aabb = true;
	}
	HX_STACK_LINE(1887)
	if ((!(this->zip_localCOM))){
		HX_STACK_LINE(1888)
		ret->localCOMx = this->localCOMx;
		HX_STACK_LINE(1889)
		ret->localCOMy = this->localCOMy;
		HX_STACK_LINE(1898)
		{
		}
	}
	else{
		HX_STACK_LINE(1907)
		ret->zip_localCOM = true;
		HX_STACK_LINE(1907)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1908)
	if ((!(this->zip_worldCOM))){
		HX_STACK_LINE(1909)
		ret->worldCOMx = this->worldCOMx;
		HX_STACK_LINE(1910)
		ret->worldCOMy = this->worldCOMy;
		HX_STACK_LINE(1919)
		{
		}
	}
	else{
		HX_STACK_LINE(1928)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1929)
	this->copyto(ret->outer);
	HX_STACK_LINE(1930)
	return ret->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,copy,return )

Array< ::Dynamic > ZPP_Body_obj::types;

::zpp_nape::util::ZNPList_ZPP_Body ZPP_Body_obj::bodystack;

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Body_obj::bodyset;

bool ZPP_Body_obj::bodysetlt( ::zpp_nape::phys::ZPP_Body a,::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","bodysetlt",0x38e1405c,"zpp_nape.phys.ZPP_Body.bodysetlt","zpp_nape/phys/Body.hx",216,0x4bb115c1)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(216)
	return (a->id < b->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,bodysetlt,return )

int ZPP_Body_obj::cur_graph_depth;

::nape::phys::Body ZPP_Body_obj::__static( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","__static",0x6c3d76ba,"zpp_nape.phys.ZPP_Body.__static","zpp_nape/phys/Body.hx",1376,0x4bb115c1)
	HX_STACK_LINE(1377)
	::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1377)
	{
		HX_STACK_LINE(1377)
		if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1377)
			::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1377)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(1377)
	::nape::phys::Body ret = ::nape::phys::Body_obj::__new(_g1,null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1378)
	::zpp_nape::phys::ZPP_Body si = ret->zpp_inner;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(1379)
	si->world = true;
	HX_STACK_LINE(1380)
	si->wrap_shapes->zpp_inner->immutable = true;
	HX_STACK_LINE(1381)
	Float _g2 = si->gravMass = 0.0;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1381)
	Float _g3 = si->mass = _g2;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1381)
	Float _g4 = si->cmass = _g3;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1381)
	Float _g5 = si->imass = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1381)
	si->smass = _g5;
	HX_STACK_LINE(1382)
	Float _g6 = si->inertia = 0.0;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1382)
	Float _g7 = si->cinertia = _g6;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1382)
	Float _g8 = si->iinertia = _g7;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(1382)
	si->sinertia = _g8;
	HX_STACK_LINE(1383)
	si->cbTypes->clear();
	HX_STACK_LINE(1384)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,__static,return )


ZPP_Body_obj::ZPP_Body_obj()
{
}

void ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Body);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(graph_depth,"graph_depth");
	HX_MARK_MEMBER_NAME(sweepTime,"sweepTime");
	HX_MARK_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_MARK_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_MARK_MEMBER_NAME(disableCCD,"disableCCD");
	HX_MARK_MEMBER_NAME(pre_posx,"pre_posx");
	HX_MARK_MEMBER_NAME(pre_posy,"pre_posy");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_MARK_MEMBER_NAME(velx,"velx");
	HX_MARK_MEMBER_NAME(vely,"vely");
	HX_MARK_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_MARK_MEMBER_NAME(forcex,"forcex");
	HX_MARK_MEMBER_NAME(forcey,"forcey");
	HX_MARK_MEMBER_NAME(wrap_force,"wrap_force");
	HX_MARK_MEMBER_NAME(kinvelx,"kinvelx");
	HX_MARK_MEMBER_NAME(kinvely,"kinvely");
	HX_MARK_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_MARK_MEMBER_NAME(svelx,"svelx");
	HX_MARK_MEMBER_NAME(svely,"svely");
	HX_MARK_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_MARK_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_MARK_MEMBER_NAME(angvel,"angvel");
	HX_MARK_MEMBER_NAME(torque,"torque");
	HX_MARK_MEMBER_NAME(kinangvel,"kinangvel");
	HX_MARK_MEMBER_NAME(pre_rot,"pre_rot");
	HX_MARK_MEMBER_NAME(rot,"rot");
	HX_MARK_MEMBER_NAME(axisx,"axisx");
	HX_MARK_MEMBER_NAME(axisy,"axisy");
	HX_MARK_MEMBER_NAME(zip_axis,"zip_axis");
	HX_MARK_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(zip_mass,"zip_mass");
	HX_MARK_MEMBER_NAME(massMode,"massMode");
	HX_MARK_MEMBER_NAME(imass,"imass");
	HX_MARK_MEMBER_NAME(smass,"smass");
	HX_MARK_MEMBER_NAME(cmass,"cmass");
	HX_MARK_MEMBER_NAME(nomove,"nomove");
	HX_MARK_MEMBER_NAME(gravMass,"gravMass");
	HX_MARK_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_MARK_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_MARK_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_MARK_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_MARK_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_MARK_MEMBER_NAME(cinertia,"cinertia");
	HX_MARK_MEMBER_NAME(iinertia,"iinertia");
	HX_MARK_MEMBER_NAME(sinertia,"sinertia");
	HX_MARK_MEMBER_NAME(norotate,"norotate");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(graph_depth,"graph_depth");
	HX_VISIT_MEMBER_NAME(sweepTime,"sweepTime");
	HX_VISIT_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_VISIT_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_VISIT_MEMBER_NAME(disableCCD,"disableCCD");
	HX_VISIT_MEMBER_NAME(pre_posx,"pre_posx");
	HX_VISIT_MEMBER_NAME(pre_posy,"pre_posy");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_VISIT_MEMBER_NAME(velx,"velx");
	HX_VISIT_MEMBER_NAME(vely,"vely");
	HX_VISIT_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_VISIT_MEMBER_NAME(forcex,"forcex");
	HX_VISIT_MEMBER_NAME(forcey,"forcey");
	HX_VISIT_MEMBER_NAME(wrap_force,"wrap_force");
	HX_VISIT_MEMBER_NAME(kinvelx,"kinvelx");
	HX_VISIT_MEMBER_NAME(kinvely,"kinvely");
	HX_VISIT_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_VISIT_MEMBER_NAME(svelx,"svelx");
	HX_VISIT_MEMBER_NAME(svely,"svely");
	HX_VISIT_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_VISIT_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_VISIT_MEMBER_NAME(angvel,"angvel");
	HX_VISIT_MEMBER_NAME(torque,"torque");
	HX_VISIT_MEMBER_NAME(kinangvel,"kinangvel");
	HX_VISIT_MEMBER_NAME(pre_rot,"pre_rot");
	HX_VISIT_MEMBER_NAME(rot,"rot");
	HX_VISIT_MEMBER_NAME(axisx,"axisx");
	HX_VISIT_MEMBER_NAME(axisy,"axisy");
	HX_VISIT_MEMBER_NAME(zip_axis,"zip_axis");
	HX_VISIT_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(zip_mass,"zip_mass");
	HX_VISIT_MEMBER_NAME(massMode,"massMode");
	HX_VISIT_MEMBER_NAME(imass,"imass");
	HX_VISIT_MEMBER_NAME(smass,"smass");
	HX_VISIT_MEMBER_NAME(cmass,"cmass");
	HX_VISIT_MEMBER_NAME(nomove,"nomove");
	HX_VISIT_MEMBER_NAME(gravMass,"gravMass");
	HX_VISIT_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_VISIT_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_VISIT_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_VISIT_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_VISIT_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_VISIT_MEMBER_NAME(cinertia,"cinertia");
	HX_VISIT_MEMBER_NAME(iinertia,"iinertia");
	HX_VISIT_MEMBER_NAME(sinertia,"sinertia");
	HX_VISIT_MEMBER_NAME(norotate,"norotate");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { return rot; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"velx") ) { return velx; }
		if (HX_FIELD_EQ(inName,"vely") ) { return vely; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"svelx") ) { return svelx; }
		if (HX_FIELD_EQ(inName,"svely") ) { return svely; }
		if (HX_FIELD_EQ(inName,"axisx") ) { return axisx; }
		if (HX_FIELD_EQ(inName,"axisy") ) { return axisy; }
		if (HX_FIELD_EQ(inName,"imass") ) { return imass; }
		if (HX_FIELD_EQ(inName,"smass") ) { return smass; }
		if (HX_FIELD_EQ(inName,"cmass") ) { return cmass; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		if (HX_FIELD_EQ(inName,"atRest") ) { return atRest_dyn(); }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"forcex") ) { return forcex; }
		if (HX_FIELD_EQ(inName,"forcey") ) { return forcey; }
		if (HX_FIELD_EQ(inName,"angvel") ) { return angvel; }
		if (HX_FIELD_EQ(inName,"torque") ) { return torque; }
		if (HX_FIELD_EQ(inName,"nomove") ) { return nomove; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { return bodyset; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { return kinvelx; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { return kinvely; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { return pre_rot; }
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__static") ) { return __static_dyn(); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { return pre_posx; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { return pre_posy; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { return wrap_pos; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { return wrap_vel; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { return wrapcvel; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { return zip_axis; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { return zip_mass; }
		if (HX_FIELD_EQ(inName,"massMode") ) { return massMode; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return gravMass; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { return cinertia; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { return iinertia; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { return sinertia; }
		if (HX_FIELD_EQ(inName,"norotate") ) { return norotate; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { return bodystack; }
		if (HX_FIELD_EQ(inName,"bodysetlt") ) { return bodysetlt_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { return sweepTime; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { return wrap_svel; }
		if (HX_FIELD_EQ(inName,"setupsvel") ) { return setupsvel_dyn(); }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { return kinangvel; }
		if (HX_FIELD_EQ(inName,"delta_rot") ) { return delta_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return disableCCD; }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { return wrap_force; }
		if (HX_FIELD_EQ(inName,"setupForce") ) { return setupForce_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_cvel") ) { return setup_cvel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { return graph_depth; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { return sweepFrozen; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { return wrap_kinvel; }
		if (HX_FIELD_EQ(inName,"setupkinvel") ) { return setupkinvel_dyn(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return inertiaMode; }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { return zip_inertia; }
		if (HX_FIELD_EQ(inName,"getlocalCOM") ) { return getlocalCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { return sweep_angvel; }
		if (HX_FIELD_EQ(inName,"pos_validate") ) { return pos_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_validate") ) { return vel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { return zip_gravMass; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return gravMassMode; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"shapes_adder") ) { return shapes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { return bulletEnabled; }
		if (HX_FIELD_EQ(inName,"sweepValidate") ) { return sweepValidate_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_validate") ) { return svel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setupPosition") ) { return setupPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setupVelocity") ) { return setupVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"cvel_validate") ) { return cvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_axis") ) { return validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_mass") ) { return validate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_subber") ) { return shapes_subber_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sweepIntegrate") ) { return sweepIntegrate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_pos") ) { return invalidate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_invalidate") ) { return pos_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_invalidate") ) { return vel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"force_validate") ) { return force_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_rot") ) { return invalidate_rot_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { return cur_graph_depth; }
		if (HX_FIELD_EQ(inName,"invalidate_type") ) { return invalidate_type_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshArbiters") ) { return refreshArbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_validate") ) { return kinvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_invalidate") ) { return svel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_mass") ) { return invalidate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_wake") ) { return invalidate_wake_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"init_bodysetlist") ) { return init_bodysetlist_dyn(); }
		if (HX_FIELD_EQ(inName,"force_invalidate") ) { return force_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_inertia") ) { return validate_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidate_shapes") ) { return invalidate_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_invalidate") ) { return kinvel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { return zip_gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_gravMass") ) { return validate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_invalidate") ) { return shapes_invalidate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_inertia") ) { return invalidate_inertia_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"quick_validate_axis") ) { return quick_validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { return kinematicDelaySleep; }
		if (HX_FIELD_EQ(inName,"invalidate_gravMass") ) { return invalidate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"connectedBodies_cont") ) { return connectedBodies_cont_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validate_gravMassScale") ) { return validate_gravMassScale_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_gravMassScale") ) { return invalidate_gravMassScale_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { rot=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velx") ) { velx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vely") ) { vely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svelx") ) { svelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svely") ) { svely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisx") ) { axisx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisy") ) { axisy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imass") ) { imass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smass") ) { smass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmass") ) { cmass=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcex") ) { forcex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcey") ) { forcey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angvel") ) { angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"torque") ) { torque=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nomove") ) { nomove=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { bodyset=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { kinvelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { kinvely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { pre_rot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { pre_posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { pre_posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { wrap_pos=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { wrap_vel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { wrapcvel=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { zip_axis=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { zip_mass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"massMode") ) { massMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { gravMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { cinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { iinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { sinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"norotate") ) { norotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { bodystack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { sweepTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { wrap_svel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { kinangvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { disableCCD=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { wrap_force=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { graph_depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { sweepFrozen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { wrap_kinvel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { inertiaMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { zip_inertia=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { sweep_angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { zip_gravMass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { gravMassMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { bulletEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { gravMassScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { cur_graph_depth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { zip_gravMassScale=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { kinematicDelaySleep=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("wrap_arbiters"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	outFields->push(HX_CSTRING("component"));
	outFields->push(HX_CSTRING("graph_depth"));
	outFields->push(HX_CSTRING("sweepTime"));
	outFields->push(HX_CSTRING("sweep_angvel"));
	outFields->push(HX_CSTRING("sweepFrozen"));
	outFields->push(HX_CSTRING("sweepRadius"));
	outFields->push(HX_CSTRING("bullet"));
	outFields->push(HX_CSTRING("bulletEnabled"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("pre_posx"));
	outFields->push(HX_CSTRING("pre_posy"));
	outFields->push(HX_CSTRING("posx"));
	outFields->push(HX_CSTRING("posy"));
	outFields->push(HX_CSTRING("wrap_pos"));
	outFields->push(HX_CSTRING("velx"));
	outFields->push(HX_CSTRING("vely"));
	outFields->push(HX_CSTRING("wrap_vel"));
	outFields->push(HX_CSTRING("forcex"));
	outFields->push(HX_CSTRING("forcey"));
	outFields->push(HX_CSTRING("wrap_force"));
	outFields->push(HX_CSTRING("kinvelx"));
	outFields->push(HX_CSTRING("kinvely"));
	outFields->push(HX_CSTRING("wrap_kinvel"));
	outFields->push(HX_CSTRING("svelx"));
	outFields->push(HX_CSTRING("svely"));
	outFields->push(HX_CSTRING("wrap_svel"));
	outFields->push(HX_CSTRING("wrapcvel"));
	outFields->push(HX_CSTRING("angvel"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("kinangvel"));
	outFields->push(HX_CSTRING("pre_rot"));
	outFields->push(HX_CSTRING("rot"));
	outFields->push(HX_CSTRING("axisx"));
	outFields->push(HX_CSTRING("axisy"));
	outFields->push(HX_CSTRING("zip_axis"));
	outFields->push(HX_CSTRING("kinematicDelaySleep"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("zip_mass"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("imass"));
	outFields->push(HX_CSTRING("smass"));
	outFields->push(HX_CSTRING("cmass"));
	outFields->push(HX_CSTRING("nomove"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("zip_gravMass"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("zip_gravMassScale"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("zip_inertia"));
	outFields->push(HX_CSTRING("cinertia"));
	outFields->push(HX_CSTRING("iinertia"));
	outFields->push(HX_CSTRING("sinertia"));
	outFields->push(HX_CSTRING("norotate"));
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("zip_aabb"));
	outFields->push(HX_CSTRING("localCOMx"));
	outFields->push(HX_CSTRING("localCOMy"));
	outFields->push(HX_CSTRING("zip_localCOM"));
	outFields->push(HX_CSTRING("worldCOMx"));
	outFields->push(HX_CSTRING("worldCOMy"));
	outFields->push(HX_CSTRING("zip_worldCOM"));
	outFields->push(HX_CSTRING("wrap_localCOM"));
	outFields->push(HX_CSTRING("wrap_worldCOM"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("types"),
	HX_CSTRING("bodystack"),
	HX_CSTRING("bodyset"),
	HX_CSTRING("bodysetlt"),
	HX_CSTRING("cur_graph_depth"),
	HX_CSTRING("__static"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(ZPP_Body_obj,outer),HX_CSTRING("outer")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,world),HX_CSTRING("world")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Body_obj,compound),HX_CSTRING("compound")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_Body_obj,shapes),HX_CSTRING("shapes")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_Body_obj,wrap_shapes),HX_CSTRING("wrap_shapes")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Body_obj,space),HX_CSTRING("space")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Arbiter*/ ,(int)offsetof(ZPP_Body_obj,arbiters),HX_CSTRING("arbiters")},
	{hx::fsObject /*::nape::dynamics::ArbiterList*/ ,(int)offsetof(ZPP_Body_obj,wrap_arbiters),HX_CSTRING("wrap_arbiters")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_Body_obj,constraints),HX_CSTRING("constraints")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_Body_obj,wrap_constraints),HX_CSTRING("wrap_constraints")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Body_obj,component),HX_CSTRING("component")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,graph_depth),HX_CSTRING("graph_depth")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweepTime),HX_CSTRING("sweepTime")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweep_angvel),HX_CSTRING("sweep_angvel")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,sweepFrozen),HX_CSTRING("sweepFrozen")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweepRadius),HX_CSTRING("sweepRadius")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,bullet),HX_CSTRING("bullet")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,bulletEnabled),HX_CSTRING("bulletEnabled")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,disableCCD),HX_CSTRING("disableCCD")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_posx),HX_CSTRING("pre_posx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_posy),HX_CSTRING("pre_posy")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,posx),HX_CSTRING("posx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,posy),HX_CSTRING("posy")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_pos),HX_CSTRING("wrap_pos")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,velx),HX_CSTRING("velx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,vely),HX_CSTRING("vely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_vel),HX_CSTRING("wrap_vel")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,forcex),HX_CSTRING("forcex")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,forcey),HX_CSTRING("forcey")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_force),HX_CSTRING("wrap_force")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinvelx),HX_CSTRING("kinvelx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinvely),HX_CSTRING("kinvely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_kinvel),HX_CSTRING("wrap_kinvel")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,svelx),HX_CSTRING("svelx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,svely),HX_CSTRING("svely")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_svel),HX_CSTRING("wrap_svel")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(ZPP_Body_obj,wrapcvel),HX_CSTRING("wrapcvel")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,angvel),HX_CSTRING("angvel")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,torque),HX_CSTRING("torque")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinangvel),HX_CSTRING("kinangvel")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_rot),HX_CSTRING("pre_rot")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,rot),HX_CSTRING("rot")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,axisx),HX_CSTRING("axisx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,axisy),HX_CSTRING("axisy")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_axis),HX_CSTRING("zip_axis")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,kinematicDelaySleep),HX_CSTRING("kinematicDelaySleep")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,mass),HX_CSTRING("mass")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_mass),HX_CSTRING("zip_mass")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,massMode),HX_CSTRING("massMode")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,imass),HX_CSTRING("imass")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,smass),HX_CSTRING("smass")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,cmass),HX_CSTRING("cmass")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,nomove),HX_CSTRING("nomove")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,gravMass),HX_CSTRING("gravMass")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_gravMass),HX_CSTRING("zip_gravMass")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,gravMassMode),HX_CSTRING("gravMassMode")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,gravMassScale),HX_CSTRING("gravMassScale")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_gravMassScale),HX_CSTRING("zip_gravMassScale")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,inertiaMode),HX_CSTRING("inertiaMode")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,inertia),HX_CSTRING("inertia")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_inertia),HX_CSTRING("zip_inertia")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,cinertia),HX_CSTRING("cinertia")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,iinertia),HX_CSTRING("iinertia")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sinertia),HX_CSTRING("sinertia")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,norotate),HX_CSTRING("norotate")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Body_obj,aabb),HX_CSTRING("aabb")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_aabb),HX_CSTRING("zip_aabb")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,localCOMx),HX_CSTRING("localCOMx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,localCOMy),HX_CSTRING("localCOMy")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_localCOM),HX_CSTRING("zip_localCOM")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,worldCOMx),HX_CSTRING("worldCOMx")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,worldCOMy),HX_CSTRING("worldCOMy")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_worldCOM),HX_CSTRING("zip_worldCOM")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_localCOM),HX_CSTRING("wrap_localCOM")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_worldCOM),HX_CSTRING("wrap_worldCOM")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("world"),
	HX_CSTRING("type"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("invalidate_type"),
	HX_CSTRING("compound"),
	HX_CSTRING("shapes"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("invalidate_shapes"),
	HX_CSTRING("space"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("wrap_arbiters"),
	HX_CSTRING("constraints"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("component"),
	HX_CSTRING("graph_depth"),
	HX_CSTRING("init_bodysetlist"),
	HX_CSTRING("connectedBodies_cont"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("atRest"),
	HX_CSTRING("refreshArbiters"),
	HX_CSTRING("sweepTime"),
	HX_CSTRING("sweep_angvel"),
	HX_CSTRING("sweepFrozen"),
	HX_CSTRING("sweepRadius"),
	HX_CSTRING("bullet"),
	HX_CSTRING("bulletEnabled"),
	HX_CSTRING("disableCCD"),
	HX_CSTRING("sweepIntegrate"),
	HX_CSTRING("sweepValidate"),
	HX_CSTRING("pre_posx"),
	HX_CSTRING("pre_posy"),
	HX_CSTRING("posx"),
	HX_CSTRING("posy"),
	HX_CSTRING("wrap_pos"),
	HX_CSTRING("velx"),
	HX_CSTRING("vely"),
	HX_CSTRING("wrap_vel"),
	HX_CSTRING("forcex"),
	HX_CSTRING("forcey"),
	HX_CSTRING("wrap_force"),
	HX_CSTRING("kinvelx"),
	HX_CSTRING("kinvely"),
	HX_CSTRING("wrap_kinvel"),
	HX_CSTRING("svelx"),
	HX_CSTRING("svely"),
	HX_CSTRING("wrap_svel"),
	HX_CSTRING("invalidate_pos"),
	HX_CSTRING("pos_invalidate"),
	HX_CSTRING("pos_validate"),
	HX_CSTRING("vel_invalidate"),
	HX_CSTRING("vel_validate"),
	HX_CSTRING("kinvel_invalidate"),
	HX_CSTRING("kinvel_validate"),
	HX_CSTRING("svel_invalidate"),
	HX_CSTRING("svel_validate"),
	HX_CSTRING("force_invalidate"),
	HX_CSTRING("force_validate"),
	HX_CSTRING("setupPosition"),
	HX_CSTRING("setupVelocity"),
	HX_CSTRING("setupkinvel"),
	HX_CSTRING("setupsvel"),
	HX_CSTRING("setupForce"),
	HX_CSTRING("cvel_validate"),
	HX_CSTRING("wrapcvel"),
	HX_CSTRING("setup_cvel"),
	HX_CSTRING("angvel"),
	HX_CSTRING("torque"),
	HX_CSTRING("kinangvel"),
	HX_CSTRING("pre_rot"),
	HX_CSTRING("rot"),
	HX_CSTRING("invalidate_rot"),
	HX_CSTRING("axisx"),
	HX_CSTRING("axisy"),
	HX_CSTRING("zip_axis"),
	HX_CSTRING("validate_axis"),
	HX_CSTRING("quick_validate_axis"),
	HX_CSTRING("delta_rot"),
	HX_CSTRING("kinematicDelaySleep"),
	HX_CSTRING("mass"),
	HX_CSTRING("zip_mass"),
	HX_CSTRING("massMode"),
	HX_CSTRING("imass"),
	HX_CSTRING("smass"),
	HX_CSTRING("cmass"),
	HX_CSTRING("nomove"),
	HX_CSTRING("invalidate_mass"),
	HX_CSTRING("validate_mass"),
	HX_CSTRING("gravMass"),
	HX_CSTRING("zip_gravMass"),
	HX_CSTRING("gravMassMode"),
	HX_CSTRING("gravMassScale"),
	HX_CSTRING("zip_gravMassScale"),
	HX_CSTRING("invalidate_gravMass"),
	HX_CSTRING("validate_gravMass"),
	HX_CSTRING("invalidate_gravMassScale"),
	HX_CSTRING("validate_gravMassScale"),
	HX_CSTRING("inertiaMode"),
	HX_CSTRING("inertia"),
	HX_CSTRING("zip_inertia"),
	HX_CSTRING("cinertia"),
	HX_CSTRING("iinertia"),
	HX_CSTRING("sinertia"),
	HX_CSTRING("norotate"),
	HX_CSTRING("invalidate_inertia"),
	HX_CSTRING("validate_inertia"),
	HX_CSTRING("invalidate_wake"),
	HX_CSTRING("aabb"),
	HX_CSTRING("zip_aabb"),
	HX_CSTRING("validate_aabb"),
	HX_CSTRING("invalidate_aabb"),
	HX_CSTRING("localCOMx"),
	HX_CSTRING("localCOMy"),
	HX_CSTRING("zip_localCOM"),
	HX_CSTRING("worldCOMx"),
	HX_CSTRING("worldCOMy"),
	HX_CSTRING("zip_worldCOM"),
	HX_CSTRING("wrap_localCOM"),
	HX_CSTRING("wrap_worldCOM"),
	HX_CSTRING("invalidate_localCOM"),
	HX_CSTRING("invalidate_worldCOM"),
	HX_CSTRING("validate_localCOM"),
	HX_CSTRING("validate_worldCOM"),
	HX_CSTRING("getlocalCOM"),
	HX_CSTRING("getworldCOM"),
	HX_CSTRING("__immutable_midstep"),
	HX_CSTRING("clear"),
	HX_CSTRING("aabb_validate"),
	HX_CSTRING("shapes_adder"),
	HX_CSTRING("shapes_subber"),
	HX_CSTRING("shapes_invalidate"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::types,"types");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::types,"types");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

#endif

Class ZPP_Body_obj::__mClass;

void ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Body"), hx::TCanCast< ZPP_Body_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Body_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",193,0x4bb115c1)
		{
			HX_STACK_LINE(193)
			::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(193)
			::nape::phys::BodyType _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType _g2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = _g2;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				_g3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			HX_STACK_LINE(193)
			::nape::phys::BodyType _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType _g4 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = _g4;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			HX_STACK_LINE(193)
			return Array_obj< ::Dynamic >::__new().Add(null()).Add(_g1).Add(_g3).Add(_g5);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
	bodystack= null();
	bodyset= null();
	cur_graph_depth= (int)0;
}

} // end namespace zpp_nape
} // end namespace phys
