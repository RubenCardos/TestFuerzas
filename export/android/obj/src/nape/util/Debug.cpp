#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#include <nape/dynamics/InteractionGroupIterator.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
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
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace util{

Void Debug_obj::__construct()
{
HX_STACK_FRAME("nape.util.Debug","new",0xf98ab5ff,"nape.util.Debug.new","nape/util/Debug.hx",179,0xfa9d0ab1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1259)
	this->cullingEnabled = false;
	HX_STACK_LINE(1213)
	this->colour = null();
	HX_STACK_LINE(1181)
	this->drawConstraints = false;
	HX_STACK_LINE(1176)
	this->drawShapeAngleIndicators = false;
	HX_STACK_LINE(1169)
	this->drawShapeDetail = false;
	HX_STACK_LINE(1162)
	this->drawBodyDetail = false;
	HX_STACK_LINE(1155)
	this->drawBodies = false;
	HX_STACK_LINE(1150)
	this->drawSensorArbiters = false;
	HX_STACK_LINE(1143)
	this->drawFluidArbiters = false;
	HX_STACK_LINE(1136)
	this->drawCollisionArbiters = false;
	HX_STACK_LINE(1129)
	this->zpp_inner = null();
	HX_STACK_LINE(1221)
	this->drawCollisionArbiters = false;
	HX_STACK_LINE(1222)
	this->drawFluidArbiters = false;
	HX_STACK_LINE(1223)
	this->drawSensorArbiters = false;
	HX_STACK_LINE(1224)
	this->drawBodies = true;
	HX_STACK_LINE(1225)
	this->drawShapeAngleIndicators = true;
	HX_STACK_LINE(1226)
	this->drawBodyDetail = false;
	HX_STACK_LINE(1227)
	this->drawShapeDetail = false;
	HX_STACK_LINE(1228)
	this->drawConstraints = false;
	HX_STACK_LINE(1229)
	this->cullingEnabled = false;
	HX_STACK_LINE(1230)
	this->colour = null();
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

int Debug_obj::get_bgColour( ){
	HX_STACK_FRAME("nape.util.Debug","get_bgColour",0x8c2c567b,"nape.util.Debug.get_bgColour","nape/util/Debug.hx",1192,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1192)
	return this->zpp_inner->bg_col;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_bgColour,return )

int Debug_obj::set_bgColour( int bgColour){
	HX_STACK_FRAME("nape.util.Debug","set_bgColour",0xa12579ef,"nape.util.Debug.set_bgColour","nape/util/Debug.hx",1194,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bgColour,"bgColour")
	HX_STACK_LINE(1198)
	this->zpp_inner->d_shape->setbg(bgColour);
	HX_STACK_LINE(1201)
	return this->zpp_inner->bg_col;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_bgColour,return )

::openfl::_v2::display::DisplayObject Debug_obj::get_display( ){
	HX_STACK_FRAME("nape.util.Debug","get_display",0x5758a6f8,"nape.util.Debug.get_display","nape/util/Debug.hx",1244,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1244)
	return this->zpp_inner->d_shape->shape;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_display,return )

::nape::geom::Mat23 Debug_obj::get_transform( ){
	HX_STACK_FRAME("nape.util.Debug","get_transform",0xdfc2c3a2,"nape.util.Debug.get_transform","nape/util/Debug.hx",1273,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1274)
	if (((this->zpp_inner->xform == null()))){
		HX_STACK_LINE(1274)
		this->zpp_inner->setform();
	}
	HX_STACK_LINE(1275)
	return this->zpp_inner->xform->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_transform,return )

::nape::geom::Mat23 Debug_obj::set_transform( ::nape::geom::Mat23 transform){
	HX_STACK_FRAME("nape.util.Debug","set_transform",0x24c8a5ae,"nape.util.Debug.set_transform","nape/util/Debug.hx",1277,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transform,"transform")
	struct _Function_1_1{
		inline static ::nape::geom::Mat23 Block( hx::ObjectPtr< ::nape::util::Debug_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/Debug.hx",1282,0xfa9d0ab1)
			{
				HX_STACK_LINE(1282)
				if (((__this->zpp_inner->xform == null()))){
					HX_STACK_LINE(1282)
					__this->zpp_inner->setform();
				}
				HX_STACK_LINE(1282)
				return __this->zpp_inner->xform->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(1282)
	(_Function_1_1::Block(this))->set(transform);
	HX_STACK_LINE(1284)
	if (((this->zpp_inner->xform == null()))){
		HX_STACK_LINE(1284)
		this->zpp_inner->setform();
	}
	HX_STACK_LINE(1284)
	return this->zpp_inner->xform->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_transform,return )

Void Debug_obj::clear( ){
{
		HX_STACK_FRAME("nape.util.Debug","clear",0x294e3cec,"nape.util.Debug.clear","nape/util/Debug.hx",1289,0xfa9d0ab1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clear,(void))

Void Debug_obj::flush( ){
{
		HX_STACK_FRAME("nape.util.Debug","flush",0xe38e2e23,"nape.util.Debug.flush","nape/util/Debug.hx",1295,0xfa9d0ab1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,flush,(void))

Void Debug_obj::draw( Dynamic object){
{
		HX_STACK_FRAME("nape.util.Debug","draw",0x59423185,"nape.util.Debug.draw","nape/util/Debug.hx",1310,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,draw,(void))

Void Debug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawLine",0x8b861c19,"nape.util.Debug.drawLine","nape/util/Debug.hx",1321,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawLine,(void))

Void Debug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawCurve",0x6328e8ea,"nape.util.Debug.drawCurve","nape/util/Debug.hx",1333,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Debug_obj,drawCurve,(void))

Void Debug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawCircle",0x77c58975,"nape.util.Debug.drawCircle","nape/util/Debug.hx",1346,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawCircle,(void))

Void Debug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawAABB",0x842242a5,"nape.util.Debug.drawAABB","nape/util/Debug.hx",1356,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawAABB,(void))

Void Debug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledTriangle",0x76257eef,"nape.util.Debug.drawFilledTriangle","nape/util/Debug.hx",1368,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p0,"p0")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Debug_obj,drawFilledTriangle,(void))

Void Debug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledCircle",0x96090a77,"nape.util.Debug.drawFilledCircle","nape/util/Debug.hx",1381,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawFilledCircle,(void))

Void Debug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawPolygon",0x71ed6375,"nape.util.Debug.drawPolygon","nape/util/Debug.hx",1395,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawPolygon,(void))

Void Debug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledPolygon",0xcebac433,"nape.util.Debug.drawFilledPolygon","nape/util/Debug.hx",1409,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawFilledPolygon,(void))

Void Debug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(3.0);
	HX_STACK_FRAME("nape.util.Debug","drawSpring",0xe54dee32,"nape.util.Debug.drawSpring","nape/util/Debug.hx",1423,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(colour,"colour")
	HX_STACK_ARG(coils,"coils")
	HX_STACK_ARG(radius,"radius")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Debug_obj,drawSpring,(void))

::String Debug_obj::version( ){
	HX_STACK_FRAME("nape.util.Debug","version",0x98b58837,"nape.util.Debug.version","nape/util/Debug.hx",184,0xfa9d0ab1)
	HX_STACK_LINE(184)
	return HX_CSTRING("Nape 2.0.16");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,version,return )

Void Debug_obj::clearObjectPools( ){
{
		HX_STACK_FRAME("nape.util.Debug","clearObjectPools",0x7192474c,"nape.util.Debug.clearObjectPools","nape/util/Debug.hx",189,0xfa9d0ab1)
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			if ((!(((::nape::constraint::ConstraintIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator nxt = ::nape::constraint::ConstraintIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(194)
			::nape::constraint::ConstraintIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(195)
			::nape::constraint::ConstraintIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			if ((!(((::nape::phys::InteractorIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator nxt = ::nape::phys::InteractorIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(201)
			::nape::phys::InteractorIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(202)
			::nape::phys::InteractorIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(206)
		while((true)){
			HX_STACK_LINE(206)
			if ((!(((::nape::phys::BodyIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(206)
				break;
			}
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator nxt = ::nape::phys::BodyIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(208)
			::nape::phys::BodyIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(209)
			::nape::phys::BodyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			if ((!(((::nape::phys::CompoundIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator nxt = ::nape::phys::CompoundIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(215)
			::nape::phys::CompoundIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(216)
			::nape::phys::CompoundIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(220)
		while((true)){
			HX_STACK_LINE(220)
			if ((!(((::nape::callbacks::ListenerIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(220)
				break;
			}
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator nxt = ::nape::callbacks::ListenerIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(222)
			::nape::callbacks::ListenerIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(223)
			::nape::callbacks::ListenerIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			if ((!(((::nape::callbacks::CbTypeIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator nxt = ::nape::callbacks::CbTypeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(229)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(230)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(((::nape::geom::ConvexResultIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator nxt = ::nape::geom::ConvexResultIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(236)
			::nape::geom::ConvexResultIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(237)
			::nape::geom::ConvexResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			if ((!(((::nape::geom::GeomPolyIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator nxt = ::nape::geom::GeomPolyIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(243)
			::nape::geom::GeomPolyIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(244)
			::nape::geom::GeomPolyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			if ((!(((::nape::geom::Vec2Iterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator nxt = ::nape::geom::Vec2Iterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(250)
			::nape::geom::Vec2Iterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(251)
			::nape::geom::Vec2Iterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(255)
		while((true)){
			HX_STACK_LINE(255)
			if ((!(((::nape::geom::RayResultIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(255)
				break;
			}
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator nxt = ::nape::geom::RayResultIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(257)
			::nape::geom::RayResultIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(258)
			::nape::geom::RayResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			if ((!(((::nape::shape::ShapeIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator nxt = ::nape::shape::ShapeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(264)
			::nape::shape::ShapeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(265)
			::nape::shape::ShapeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			if ((!(((::nape::shape::EdgeIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator nxt = ::nape::shape::EdgeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(271)
			::nape::shape::EdgeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(272)
			::nape::shape::EdgeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			if ((!(((::nape::dynamics::ContactIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator nxt = ::nape::dynamics::ContactIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(278)
			::nape::dynamics::ContactIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(279)
			::nape::dynamics::ContactIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			if ((!(((::nape::dynamics::ArbiterIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator nxt = ::nape::dynamics::ArbiterIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(285)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(286)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(290)
		while((true)){
			HX_STACK_LINE(290)
			if ((!(((::nape::dynamics::InteractionGroupIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator nxt = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(292)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(293)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool != null()))))){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType nxt = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(300)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool->next = null();
			HX_STACK_LINE(301)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool != null()))))){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nxt = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(310)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(316)
		while((true)){
			HX_STACK_LINE(316)
			if ((!(((::zpp_nape::phys::ZPP_Material_obj::zpp_pool != null()))))){
				HX_STACK_LINE(316)
				break;
			}
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material nxt = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(318)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool->next = null();
			HX_STACK_LINE(319)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool != null()))))){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape nxt = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(327)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool->next = null();
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			if ((!(((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool != null()))))){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties nxt = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(336)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool->next = null();
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool != null()))))){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body nxt = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool->next = null();
			HX_STACK_LINE(346)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool != null()))))){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nxt = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(354)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool->next = null();
			HX_STACK_LINE(355)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool != null()))))){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound nxt = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(363)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool->next = null();
			HX_STACK_LINE(364)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(373)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(379)
		while((true)){
			HX_STACK_LINE(379)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool != null()))))){
				HX_STACK_LINE(379)
				break;
			}
			HX_STACK_LINE(380)
			::zpp_nape::util::ZPP_Set_ZPP_Body nxt = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(381)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool->next = null();
			HX_STACK_LINE(382)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(388)
		while((true)){
			HX_STACK_LINE(388)
			if ((!(((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(388)
				break;
			}
			HX_STACK_LINE(389)
			::zpp_nape::callbacks::ZPP_CbSetPair nxt = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(390)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(391)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool != null()))))){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nxt = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(399)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(400)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool != null()))))){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(407)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nxt = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(408)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(409)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool != null()))))){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nxt = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(417)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool->next = null();
			HX_STACK_LINE(418)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(424)
		while((true)){
			HX_STACK_LINE(424)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool != null()))))){
				HX_STACK_LINE(424)
				break;
			}
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nxt = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(426)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(427)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			if ((!(((::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool != null()))))){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(434)
			::zpp_nape::callbacks::ZPP_Callback nxt = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(435)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool->next = null();
			HX_STACK_LINE(436)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			if ((!(((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool != null()))))){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_CbSet nxt = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(444)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(445)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(451)
		while((true)){
			HX_STACK_LINE(451)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(451)
				break;
			}
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nxt = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(453)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(454)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(460)
		while((true)){
			HX_STACK_LINE(460)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool != null()))))){
				HX_STACK_LINE(460)
				break;
			}
			HX_STACK_LINE(461)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nxt = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(462)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(463)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			if ((!(((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(470)
			::zpp_nape::geom::ZPP_GeomVert nxt = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(471)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(472)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(479)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nxt = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(480)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(481)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(487)
		while((true)){
			HX_STACK_LINE(487)
			if ((!(((::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool != null()))))){
				HX_STACK_LINE(487)
				break;
			}
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_GeomVertexIterator nxt = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(489)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool->next = null();
			HX_STACK_LINE(490)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(496)
		while((true)){
			HX_STACK_LINE(496)
			if ((!(((::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool != null()))))){
				HX_STACK_LINE(496)
				break;
			}
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Mat23 nxt = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool->next = null();
			HX_STACK_LINE(499)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			if ((!(((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_CutVert nxt = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(507)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(508)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			if ((!(((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool != null()))))){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutInt nxt = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(516)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool->next = null();
			HX_STACK_LINE(517)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(523)
		while((true)){
			HX_STACK_LINE(523)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool != null()))))){
				HX_STACK_LINE(523)
				break;
			}
			HX_STACK_LINE(524)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(525)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool->next = null();
			HX_STACK_LINE(526)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nxt = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(535)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(541)
		while((true)){
			HX_STACK_LINE(541)
			if ((!(((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool != null()))))){
				HX_STACK_LINE(541)
				break;
			}
			HX_STACK_LINE(542)
			::zpp_nape::geom::ZPP_Vec2 nxt = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(543)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool->next = null();
			HX_STACK_LINE(544)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			if ((!(((::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(551)
			::zpp_nape::geom::ZPP_PartitionPair nxt = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(552)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(553)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(559)
		while((true)){
			HX_STACK_LINE(559)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(559)
				break;
			}
			HX_STACK_LINE(560)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nxt = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(562)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool != null()))))){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(569)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(570)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(571)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			if ((!(((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool != null()))))){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionVertex nxt = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(586)
		while((true)){
			HX_STACK_LINE(586)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool != null()))))){
				HX_STACK_LINE(586)
				break;
			}
			HX_STACK_LINE(587)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nxt = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(589)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(595)
		while((true)){
			HX_STACK_LINE(595)
			if ((!(((::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool != null()))))){
				HX_STACK_LINE(595)
				break;
			}
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionedPoly nxt = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(604)
		while((true)){
			HX_STACK_LINE(604)
			if ((!(((::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool != null()))))){
				HX_STACK_LINE(604)
				break;
			}
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_SimplifyV nxt = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(606)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool->next = null();
			HX_STACK_LINE(607)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(613)
		while((true)){
			HX_STACK_LINE(613)
			if ((!(((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool != null()))))){
				HX_STACK_LINE(613)
				break;
			}
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_SimplifyP nxt = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(615)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool->next = null();
			HX_STACK_LINE(616)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(622)
		while((true)){
			HX_STACK_LINE(622)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool != null()))))){
				HX_STACK_LINE(622)
				break;
			}
			HX_STACK_LINE(623)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nxt = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(624)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(625)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(631)
		while((true)){
			HX_STACK_LINE(631)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool != null()))))){
				HX_STACK_LINE(631)
				break;
			}
			HX_STACK_LINE(632)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nxt = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(633)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool->next = null();
			HX_STACK_LINE(634)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			if ((!(((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool != null()))))){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(641)
			::zpp_nape::geom::ZPP_AABB nxt = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(642)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool->next = null();
			HX_STACK_LINE(643)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(649)
		while((true)){
			HX_STACK_LINE(649)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(649)
				break;
			}
			HX_STACK_LINE(650)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nxt = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(651)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(652)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(658)
		while((true)){
			HX_STACK_LINE(658)
			if ((!(((::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool != null()))))){
				HX_STACK_LINE(658)
				break;
			}
			HX_STACK_LINE(659)
			::zpp_nape::geom::ZPP_ToiEvent nxt = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(660)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(661)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(667)
		while((true)){
			HX_STACK_LINE(667)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(667)
				break;
			}
			HX_STACK_LINE(668)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(669)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(670)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(676)
		while((true)){
			HX_STACK_LINE(676)
			if ((!(((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(676)
				break;
			}
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleVert nxt = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(678)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(679)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			if ((!(((::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool != null()))))){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_SimpleSeg nxt = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(687)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool->next = null();
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(694)
		while((true)){
			HX_STACK_LINE(694)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool != null()))))){
				HX_STACK_LINE(694)
				break;
			}
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(696)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool->next = null();
			HX_STACK_LINE(697)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(703)
		while((true)){
			HX_STACK_LINE(703)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool != null()))))){
				HX_STACK_LINE(703)
				break;
			}
			HX_STACK_LINE(704)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(705)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(706)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(712)
		while((true)){
			HX_STACK_LINE(712)
			if ((!(((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool != null()))))){
				HX_STACK_LINE(712)
				break;
			}
			HX_STACK_LINE(713)
			::zpp_nape::geom::ZPP_SimpleEvent nxt = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(714)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(721)
		while((true)){
			HX_STACK_LINE(721)
			if ((!(((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool != null()))))){
				HX_STACK_LINE(721)
				break;
			}
			HX_STACK_LINE(722)
			::zpp_nape::util::Hashable2_Boolfalse nxt = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(723)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool->next = null();
			HX_STACK_LINE(724)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(730)
		while((true)){
			HX_STACK_LINE(730)
			if ((!(((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool != null()))))){
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_MarchSpan nxt = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool->next = null();
			HX_STACK_LINE(733)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(739)
		while((true)){
			HX_STACK_LINE(739)
			if ((!(((::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(739)
				break;
			}
			HX_STACK_LINE(740)
			::zpp_nape::geom::ZPP_MarchPair nxt = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(741)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(742)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(748)
		while((true)){
			HX_STACK_LINE(748)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool != null()))))){
				HX_STACK_LINE(748)
				break;
			}
			HX_STACK_LINE(749)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nxt = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(750)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(751)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(757)
		while((true)){
			HX_STACK_LINE(757)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool != null()))))){
				HX_STACK_LINE(757)
				break;
			}
			HX_STACK_LINE(758)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(759)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(760)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nxt = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(768)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(769)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(775)
		while((true)){
			HX_STACK_LINE(775)
			if ((!(((::zpp_nape::shape::ZPP_Edge_obj::zpp_pool != null()))))){
				HX_STACK_LINE(775)
				break;
			}
			HX_STACK_LINE(776)
			::zpp_nape::shape::ZPP_Edge nxt = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(777)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool->next = null();
			HX_STACK_LINE(778)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(784)
		while((true)){
			HX_STACK_LINE(784)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool != null()))))){
				HX_STACK_LINE(784)
				break;
			}
			HX_STACK_LINE(785)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nxt = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(786)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool->next = null();
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(793)
		while((true)){
			HX_STACK_LINE(793)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool != null()))))){
				HX_STACK_LINE(793)
				break;
			}
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Edge nxt = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(795)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool->next = null();
			HX_STACK_LINE(796)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(802)
		while((true)){
			HX_STACK_LINE(802)
			if ((!(((::zpp_nape::space::ZPP_SweepData_obj::zpp_pool != null()))))){
				HX_STACK_LINE(802)
				break;
			}
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData nxt = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(804)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool->next = null();
			HX_STACK_LINE(805)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(811)
		while((true)){
			HX_STACK_LINE(811)
			if ((!(((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool != null()))))){
				HX_STACK_LINE(811)
				break;
			}
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode nxt = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(813)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool->next = null();
			HX_STACK_LINE(814)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(820)
		while((true)){
			HX_STACK_LINE(820)
			if ((!(((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool != null()))))){
				HX_STACK_LINE(820)
				break;
			}
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair nxt = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(822)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(823)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool != null()))))){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(830)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nxt = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(831)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool->next = null();
			HX_STACK_LINE(832)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(838)
		while((true)){
			HX_STACK_LINE(838)
			if ((!(((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool != null()))))){
				HX_STACK_LINE(838)
				break;
			}
			HX_STACK_LINE(839)
			::zpp_nape::dynamics::ZPP_Contact nxt = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(840)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool->next = null();
			HX_STACK_LINE(841)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(847)
		while((true)){
			HX_STACK_LINE(847)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool != null()))))){
				HX_STACK_LINE(847)
				break;
			}
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_Component nxt = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(849)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool->next = null();
			HX_STACK_LINE(850)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(856)
		while((true)){
			HX_STACK_LINE(856)
			if ((!(((::zpp_nape::space::ZPP_Island_obj::zpp_pool != null()))))){
				HX_STACK_LINE(856)
				break;
			}
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island nxt = ::zpp_nape::space::ZPP_Island_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(858)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool->next = null();
			HX_STACK_LINE(859)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(865)
		while((true)){
			HX_STACK_LINE(865)
			if ((!(((::zpp_nape::space::ZPP_Component_obj::zpp_pool != null()))))){
				HX_STACK_LINE(865)
				break;
			}
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component nxt = ::zpp_nape::space::ZPP_Component_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(867)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool->next = null();
			HX_STACK_LINE(868)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(874)
		while((true)){
			HX_STACK_LINE(874)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool != null()))))){
				HX_STACK_LINE(874)
				break;
			}
			HX_STACK_LINE(875)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nxt = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(876)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool->next = null();
			HX_STACK_LINE(877)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(883)
		while((true)){
			HX_STACK_LINE(883)
			if ((!(((::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool != null()))))){
				HX_STACK_LINE(883)
				break;
			}
			HX_STACK_LINE(884)
			::zpp_nape::space::ZPP_CallbackSet nxt = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(885)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(886)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(892)
		while((true)){
			HX_STACK_LINE(892)
			if ((!(((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool != null()))))){
				HX_STACK_LINE(892)
				break;
			}
			HX_STACK_LINE(893)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nxt = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(894)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(895)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(901)
		while((true)){
			HX_STACK_LINE(901)
			if ((!(((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(901)
				break;
			}
			HX_STACK_LINE(902)
			::zpp_nape::dynamics::ZPP_InteractionFilter nxt = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(903)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool->next = null();
			HX_STACK_LINE(904)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(910)
		while((true)){
			HX_STACK_LINE(910)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(910)
				break;
			}
			HX_STACK_LINE(911)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(912)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(913)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(919)
		while((true)){
			HX_STACK_LINE(919)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(919)
				break;
			}
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(921)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(922)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(928)
		while((true)){
			HX_STACK_LINE(928)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(928)
				break;
			}
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(930)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(931)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(937)
		while((true)){
			HX_STACK_LINE(937)
			if ((!(((::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(937)
				break;
			}
			HX_STACK_LINE(938)
			::zpp_nape::dynamics::ZPP_SensorArbiter nxt = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(939)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(940)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(946)
		while((true)){
			HX_STACK_LINE(946)
			if ((!(((::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(946)
				break;
			}
			HX_STACK_LINE(947)
			::zpp_nape::dynamics::ZPP_FluidArbiter nxt = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(948)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(949)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(955)
		while((true)){
			HX_STACK_LINE(955)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool != null()))))){
				HX_STACK_LINE(955)
				break;
			}
			HX_STACK_LINE(956)
			::zpp_nape::util::ZNPNode_ZPP_Listener nxt = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool->next = null();
			HX_STACK_LINE(958)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(964)
		while((true)){
			HX_STACK_LINE(964)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool != null()))))){
				HX_STACK_LINE(964)
				break;
			}
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nxt = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(966)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(967)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(973)
		while((true)){
			HX_STACK_LINE(973)
			if ((!(((::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool != null()))))){
				HX_STACK_LINE(973)
				break;
			}
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_ColArbiter nxt = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(975)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(976)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(982)
		while((true)){
			HX_STACK_LINE(982)
			if ((!(((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool != null()))))){
				HX_STACK_LINE(982)
				break;
			}
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult nxt = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(984)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool->next = null();
			HX_STACK_LINE(985)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(991)
		while((true)){
			HX_STACK_LINE(991)
			if ((!(((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool != null()))))){
				HX_STACK_LINE(991)
				break;
			}
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nxt = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(993)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(994)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1000)
		while((true)){
			HX_STACK_LINE(1000)
			if ((!(((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool != null()))))){
				HX_STACK_LINE(1000)
				break;
			}
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult nxt = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1002)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool->next = null();
			HX_STACK_LINE(1003)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1010)
		while((true)){
			HX_STACK_LINE(1010)
			if ((!(((::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly != null()))))){
				HX_STACK_LINE(1010)
				break;
			}
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1012)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly->zpp_pool = null();
			HX_STACK_LINE(1013)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = nxt;
		}
		HX_STACK_LINE(1019)
		while((true)){
			HX_STACK_LINE(1019)
			if ((!(((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 != null()))))){
				HX_STACK_LINE(1019)
				break;
			}
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1021)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2->zpp_pool = null();
			HX_STACK_LINE(1022)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = nxt;
		}
		HX_STACK_LINE(1028)
		while((true)){
			HX_STACK_LINE(1028)
			if ((!(((::zpp_nape::util::ZPP_PubPool_obj::poolVec3 != null()))))){
				HX_STACK_LINE(1028)
				break;
			}
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1030)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3->zpp_pool = null();
			HX_STACK_LINE(1031)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = nxt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clearObjectPools,(void))

::openfl::_v2::display::Shape Debug_obj::createGraphic( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.util.Debug","createGraphic",0x3515f56b,"nape.util.Debug.createGraphic","nape/util/Debug.hx",1091,0xfa9d0ab1)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(1095)
	::openfl::_v2::display::Shape ret = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1096)
	::openfl::_v2::display::Graphics graphics = ret->get_graphics();		HX_STACK_VAR(graphics,"graphics");
	HX_STACK_LINE(1097)
	Float _g = ::Math_obj::exp((Float(-(body->zpp_inner_i->id)) / Float((int)1500)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1097)
	Float _g1 = ((int)16777215 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1097)
	int idc = ::Std_obj::_int(_g1);		HX_STACK_VAR(idc,"idc");
	HX_STACK_LINE(1098)
	Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(1099)
	Float _g2 = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1100)
	Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
	HX_STACK_LINE(1101)
	int _g21 = ::Std_obj::_int(_r);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(1101)
	int _g3 = (int(_g21) << int((int)16));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1101)
	int _g4 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1101)
	int _g5 = (int(_g4) << int((int)8));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1101)
	int _g6 = (int(_g3) | int(_g5));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1101)
	int _g7 = ::Std_obj::_int(_b);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1101)
	int col = (int(_g6) | int(_g7));		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(1102)
	graphics->lineStyle(0.1,col,(int)1,null(),null(),null(),null(),null());
	HX_STACK_LINE(1103)
	{
		HX_STACK_LINE(1103)
		::nape::shape::ShapeIterator _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1103)
			::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1103)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(1103)
			_g8 = ::nape::shape::ShapeIterator_obj::get(_this);
		}
		HX_STACK_LINE(1103)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::shape::ShapeIterator &_g8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/Debug.hx",1103,0xfa9d0ab1)
					{
						HX_STACK_LINE(1103)
						_g8->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(1103)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1103)
						{
							HX_STACK_LINE(1103)
							::nape::shape::ShapeList _this = _g8->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1103)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(1103)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(1103)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(1103)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(1103)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(1103)
						_g8->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::shape::ShapeIterator &_g8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/Debug.hx",1103,0xfa9d0ab1)
								{
									HX_STACK_LINE(1103)
									{
										HX_STACK_LINE(1103)
										_g8->zpp_next = ::nape::shape::ShapeIterator_obj::zpp_pool;
										HX_STACK_LINE(1103)
										::nape::shape::ShapeIterator_obj::zpp_pool = _g8;
										HX_STACK_LINE(1103)
										_g8->zpp_inner = null();
									}
									HX_STACK_LINE(1103)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(1103)
						return (  (((_g8->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g8)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1103)
			if ((!(_Function_3_1::Block(_g8)))){
				HX_STACK_LINE(1103)
				break;
			}
			HX_STACK_LINE(1103)
			::nape::shape::Shape s;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				_g8->zpp_critical = false;
				HX_STACK_LINE(1103)
				int _g81 = (_g8->zpp_i)++;		HX_STACK_VAR(_g81,"_g81");
				HX_STACK_LINE(1103)
				s = _g8->zpp_inner->at(_g81);
			}
			HX_STACK_LINE(1104)
			if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(1105)
				::nape::shape::Circle c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1105)
				if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(1105)
					c = s->zpp_inner->circle->outer_zn;
				}
				else{
					HX_STACK_LINE(1105)
					c = null();
				}
				HX_STACK_LINE(1106)
				Float _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1106)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1106)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1106)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1106)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1106)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1106)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1106)
					_g9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1106)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1106)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1106)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1106)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1106)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1106)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1106)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1106)
					_g10 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1106)
				graphics->drawCircle(_g9,_g10,c->zpp_inner_zn->radius);
			}
			else{
				HX_STACK_LINE(1109)
				::nape::shape::Polygon p;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1109)
				if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
					HX_STACK_LINE(1109)
					p = s->zpp_inner->polygon->outer_zn;
				}
				else{
					HX_STACK_LINE(1109)
					p = null();
				}
				HX_STACK_LINE(1110)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1110)
				{
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						if (((s->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1110)
							if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1110)
								s->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1110)
								s->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1110)
						_this = s->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1110)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1110)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1110)
					_g11 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1110)
				Float _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1110)
				{
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						if (((s->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1110)
							if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1110)
								s->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1110)
								s->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1110)
						_this = s->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1110)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1110)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1110)
					_g12 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1110)
				graphics->moveTo(_g11,_g12);
				HX_STACK_LINE(1111)
				{
					HX_STACK_LINE(1111)
					int _g13 = (int)0;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(1111)
					int _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1111)
					{
						HX_STACK_LINE(1111)
						::nape::geom::Vec2List _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1111)
						{
							HX_STACK_LINE(1111)
							if (((p->zpp_inner_zn->wrap_gverts == null()))){
								HX_STACK_LINE(1111)
								p->zpp_inner_zn->getgverts();
							}
							HX_STACK_LINE(1111)
							_this = p->zpp_inner_zn->wrap_gverts;
						}
						HX_STACK_LINE(1111)
						_g9 = _this->zpp_gl();
					}
					HX_STACK_LINE(1111)
					while((true)){
						HX_STACK_LINE(1111)
						if ((!(((_g13 < _g9))))){
							HX_STACK_LINE(1111)
							break;
						}
						HX_STACK_LINE(1111)
						int i = (_g13)++;		HX_STACK_VAR(i,"i");
						struct _Function_6_1{
							inline static ::nape::geom::Vec2List Block( ::nape::shape::Polygon &p){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/Debug.hx",1112,0xfa9d0ab1)
								{
									HX_STACK_LINE(1112)
									if (((p->zpp_inner_zn->wrap_lverts == null()))){
										HX_STACK_LINE(1112)
										p->zpp_inner_zn->getlverts();
									}
									HX_STACK_LINE(1112)
									return p->zpp_inner_zn->wrap_lverts;
								}
								return null();
							}
						};
						HX_STACK_LINE(1112)
						::nape::geom::Vec2 px = (_Function_6_1::Block(p))->at(i);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1113)
						Float _g131;		HX_STACK_VAR(_g131,"_g131");
						HX_STACK_LINE(1113)
						{
							HX_STACK_LINE(1113)
							{
								HX_STACK_LINE(1113)
								::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1113)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1113)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1113)
							_g131 = px->zpp_inner->x;
						}
						HX_STACK_LINE(1113)
						Float _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(1113)
						{
							HX_STACK_LINE(1113)
							{
								HX_STACK_LINE(1113)
								::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1113)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1113)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1113)
							_g14 = px->zpp_inner->y;
						}
						HX_STACK_LINE(1113)
						graphics->lineTo(_g131,_g14);
					}
				}
				struct _Function_4_1{
					inline static ::nape::geom::Vec2List Block( ::nape::shape::Polygon &p){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/Debug.hx",1115,0xfa9d0ab1)
						{
							HX_STACK_LINE(1115)
							if (((p->zpp_inner_zn->wrap_lverts == null()))){
								HX_STACK_LINE(1115)
								p->zpp_inner_zn->getlverts();
							}
							HX_STACK_LINE(1115)
							return p->zpp_inner_zn->wrap_lverts;
						}
						return null();
					}
				};
				HX_STACK_LINE(1115)
				::nape::geom::Vec2 px = (_Function_4_1::Block(p))->at((int)0);		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1116)
				Float _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(1116)
				{
					HX_STACK_LINE(1116)
					{
						HX_STACK_LINE(1116)
						::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1116)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1116)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1116)
					_g15 = px->zpp_inner->x;
				}
				HX_STACK_LINE(1116)
				Float _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(1116)
				{
					HX_STACK_LINE(1116)
					{
						HX_STACK_LINE(1116)
						::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1116)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1116)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1116)
					_g16 = px->zpp_inner->y;
				}
				HX_STACK_LINE(1116)
				graphics->lineTo(_g15,_g16);
			}
			HX_STACK_LINE(1118)
			if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(1119)
				::nape::shape::Circle c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1119)
				if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(1119)
					c = s->zpp_inner->circle->outer_zn;
				}
				else{
					HX_STACK_LINE(1119)
					c = null();
				}
				HX_STACK_LINE(1120)
				Float _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1120)
				{
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1120)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1120)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1120)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1120)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1120)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1120)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1120)
					_g17 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1120)
				Float _g18 = (_g17 + (c->zpp_inner_zn->radius * 0.3));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(1120)
				Float _g19;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(1120)
				{
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1120)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1120)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1120)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1120)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1120)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1120)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1120)
					_g19 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1120)
				graphics->moveTo(_g18,_g19);
				HX_STACK_LINE(1121)
				Float _g20;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1121)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1121)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1121)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1121)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1121)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1121)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1121)
					_g20 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1121)
				Float _g211 = (_g20 + c->zpp_inner_zn->radius);		HX_STACK_VAR(_g211,"_g211");
				HX_STACK_LINE(1121)
				Float _g22;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						if (((c->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(1121)
							if (((c->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1121)
								c->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1121)
								c->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1121)
						_this = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1121)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(1121)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1121)
					_g22 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1121)
				graphics->lineTo(_g211,_g22);
			}
		}
	}
	HX_STACK_LINE(1124)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,createGraphic,return )


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(drawCollisionArbiters,"drawCollisionArbiters");
	HX_MARK_MEMBER_NAME(drawFluidArbiters,"drawFluidArbiters");
	HX_MARK_MEMBER_NAME(drawSensorArbiters,"drawSensorArbiters");
	HX_MARK_MEMBER_NAME(drawBodies,"drawBodies");
	HX_MARK_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_MARK_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_MARK_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_MARK_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(cullingEnabled,"cullingEnabled");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(drawCollisionArbiters,"drawCollisionArbiters");
	HX_VISIT_MEMBER_NAME(drawFluidArbiters,"drawFluidArbiters");
	HX_VISIT_MEMBER_NAME(drawSensorArbiters,"drawSensorArbiters");
	HX_VISIT_MEMBER_NAME(drawBodies,"drawBodies");
	HX_VISIT_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_VISIT_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_VISIT_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_VISIT_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(cullingEnabled,"cullingEnabled");
}

Dynamic Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version_dyn(); }
		if (HX_FIELD_EQ(inName,"display") ) { return get_display(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColour") ) { return get_bgColour(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transform") ) { return get_transform(); }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { return drawBodies; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_display") ) { return get_display_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_bgColour") ) { return get_bgColour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColour") ) { return set_bgColour_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createGraphic") ) { return createGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { return drawBodyDetail; }
		if (HX_FIELD_EQ(inName,"cullingEnabled") ) { return cullingEnabled; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { return drawShapeDetail; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { return drawConstraints; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearObjectPools") ) { return clearObjectPools_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFluidArbiters") ) { return drawFluidArbiters; }
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawSensorArbiters") ) { return drawSensorArbiters; }
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawCollisionArbiters") ) { return drawCollisionArbiters; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { return drawShapeAngleIndicators; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColour") ) { return set_bgColour(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { return set_transform(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { drawBodies=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { drawBodyDetail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cullingEnabled") ) { cullingEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { drawShapeDetail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { drawConstraints=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFluidArbiters") ) { drawFluidArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawSensorArbiters") ) { drawSensorArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawCollisionArbiters") ) { drawCollisionArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { drawShapeAngleIndicators=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("drawCollisionArbiters"));
	outFields->push(HX_CSTRING("drawFluidArbiters"));
	outFields->push(HX_CSTRING("drawSensorArbiters"));
	outFields->push(HX_CSTRING("drawBodies"));
	outFields->push(HX_CSTRING("drawBodyDetail"));
	outFields->push(HX_CSTRING("drawShapeDetail"));
	outFields->push(HX_CSTRING("drawShapeAngleIndicators"));
	outFields->push(HX_CSTRING("drawConstraints"));
	outFields->push(HX_CSTRING("bgColour"));
	outFields->push(HX_CSTRING("display"));
	outFields->push(HX_CSTRING("cullingEnabled"));
	outFields->push(HX_CSTRING("transform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("version"),
	HX_CSTRING("clearObjectPools"),
	HX_CSTRING("createGraphic"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Debug*/ ,(int)offsetof(Debug_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawCollisionArbiters),HX_CSTRING("drawCollisionArbiters")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawFluidArbiters),HX_CSTRING("drawFluidArbiters")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawSensorArbiters),HX_CSTRING("drawSensorArbiters")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawBodies),HX_CSTRING("drawBodies")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawBodyDetail),HX_CSTRING("drawBodyDetail")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawShapeDetail),HX_CSTRING("drawShapeDetail")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawShapeAngleIndicators),HX_CSTRING("drawShapeAngleIndicators")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawConstraints),HX_CSTRING("drawConstraints")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Debug_obj,colour),HX_CSTRING("colour")},
	{hx::fsBool,(int)offsetof(Debug_obj,cullingEnabled),HX_CSTRING("cullingEnabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("drawCollisionArbiters"),
	HX_CSTRING("drawFluidArbiters"),
	HX_CSTRING("drawSensorArbiters"),
	HX_CSTRING("drawBodies"),
	HX_CSTRING("drawBodyDetail"),
	HX_CSTRING("drawShapeDetail"),
	HX_CSTRING("drawShapeAngleIndicators"),
	HX_CSTRING("drawConstraints"),
	HX_CSTRING("get_bgColour"),
	HX_CSTRING("set_bgColour"),
	HX_CSTRING("colour"),
	HX_CSTRING("get_display"),
	HX_CSTRING("cullingEnabled"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("set_transform"),
	HX_CSTRING("clear"),
	HX_CSTRING("flush"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawAABB"),
	HX_CSTRING("drawFilledTriangle"),
	HX_CSTRING("drawFilledCircle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawFilledPolygon"),
	HX_CSTRING("drawSpring"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#endif

Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.Debug"), hx::TCanCast< Debug_obj> ,sStaticFields,sMemberFields,
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

void Debug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
