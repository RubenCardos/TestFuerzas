#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_InteractionFilter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","new",0xf48737fe,"zpp_nape.dynamics.ZPP_InteractionFilter.new","zpp_nape/dynamics/InteractionFilter.hx",174,0x8f5b39cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(298)
	this->fluidMask = (int)0;
	HX_STACK_LINE(297)
	this->fluidGroup = (int)0;
	HX_STACK_LINE(291)
	this->sensorMask = (int)0;
	HX_STACK_LINE(290)
	this->sensorGroup = (int)0;
	HX_STACK_LINE(284)
	this->collisionMask = (int)0;
	HX_STACK_LINE(283)
	this->collisionGroup = (int)0;
	HX_STACK_LINE(235)
	this->wrap_shapes = null();
	HX_STACK_LINE(234)
	this->shapes = null();
	HX_STACK_LINE(201)
	this->outer = null();
	HX_STACK_LINE(200)
	this->userData = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		this->shapes = _g;
	}
	HX_STACK_LINE(253)
	int _g1 = this->fluidGroup = (int)1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(253)
	int _g2 = this->sensorGroup = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(253)
	this->collisionGroup = _g2;
	HX_STACK_LINE(254)
	int _g3 = this->fluidMask = (int)-1;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(254)
	int _g4 = this->sensorMask = _g3;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(254)
	this->collisionMask = _g4;
}
;
	return null();
}

//ZPP_InteractionFilter_obj::~ZPP_InteractionFilter_obj() { }

Dynamic ZPP_InteractionFilter_obj::__CreateEmpty() { return  new ZPP_InteractionFilter_obj; }
hx::ObjectPtr< ZPP_InteractionFilter_obj > ZPP_InteractionFilter_obj::__new()
{  hx::ObjectPtr< ZPP_InteractionFilter_obj > result = new ZPP_InteractionFilter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_InteractionFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionFilter_obj > result = new ZPP_InteractionFilter_obj();
	result->__construct();
	return result;}

::nape::dynamics::InteractionFilter ZPP_InteractionFilter_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","wrapper",0xd62763f1,"zpp_nape.dynamics.ZPP_InteractionFilter.wrapper","zpp_nape/dynamics/InteractionFilter.hx",202,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	if (((this->outer == null()))){
		HX_STACK_LINE(204)
		::nape::dynamics::InteractionFilter _g = ::nape::dynamics::InteractionFilter_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		this->outer = _g;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::zpp_nape::dynamics::ZPP_InteractionFilter o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			o->next = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(217)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,wrapper,return )

Void ZPP_InteractionFilter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","free",0xfc89df4e,"zpp_nape.dynamics.ZPP_InteractionFilter.free","zpp_nape/dynamics/InteractionFilter.hx",229,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,free,(void))

Void ZPP_InteractionFilter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","alloc",0x1726af93,"zpp_nape.dynamics.ZPP_InteractionFilter.alloc","zpp_nape/dynamics/InteractionFilter.hx",233,0x8f5b39cd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,alloc,(void))

Void ZPP_InteractionFilter_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","feature_cons",0x8cbd03fc,"zpp_nape.dynamics.ZPP_InteractionFilter.feature_cons","zpp_nape/dynamics/InteractionFilter.hx",238,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->shapes = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,feature_cons,(void))

Void ZPP_InteractionFilter_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","addShape",0xd6f444e2,"zpp_nape.dynamics.ZPP_InteractionFilter.addShape","zpp_nape/dynamics/InteractionFilter.hx",244,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(244)
		this->shapes->add(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,addShape,(void))

Void ZPP_InteractionFilter_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","remShape",0x66198f09,"zpp_nape.dynamics.ZPP_InteractionFilter.remShape","zpp_nape/dynamics/InteractionFilter.hx",249,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(249)
		this->shapes->remove(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,remShape,(void))

::zpp_nape::dynamics::ZPP_InteractionFilter ZPP_InteractionFilter_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","copy",0xfa8bfe57,"zpp_nape.dynamics.ZPP_InteractionFilter.copy","zpp_nape/dynamics/InteractionFilter.hx",256,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	::zpp_nape::dynamics::ZPP_InteractionFilter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(259)
		if (((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool == null()))){
			HX_STACK_LINE(260)
			::zpp_nape::dynamics::ZPP_InteractionFilter _g = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			ret = _g;
		}
		else{
			HX_STACK_LINE(266)
			ret = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(267)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = ret->next;
			HX_STACK_LINE(268)
			ret->next = null();
		}
		HX_STACK_LINE(273)
		Dynamic();
	}
	HX_STACK_LINE(275)
	ret->collisionGroup = this->collisionGroup;
	HX_STACK_LINE(276)
	ret->collisionMask = this->collisionMask;
	HX_STACK_LINE(277)
	ret->sensorGroup = this->sensorGroup;
	HX_STACK_LINE(278)
	ret->sensorMask = this->sensorMask;
	HX_STACK_LINE(279)
	ret->fluidGroup = this->fluidGroup;
	HX_STACK_LINE(280)
	ret->fluidMask = this->fluidMask;
	HX_STACK_LINE(281)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,copy,return )

bool ZPP_InteractionFilter_obj::shouldCollide( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldCollide",0x365844a9,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldCollide","zpp_nape/dynamics/InteractionFilter.hx",288,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(288)
	return (bool((((int(this->collisionMask) & int(x->collisionGroup))) != (int)0)) && bool((((int(x->collisionMask) & int(this->collisionGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldCollide,return )

bool ZPP_InteractionFilter_obj::shouldSense( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldSense",0x626d8399,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldSense","zpp_nape/dynamics/InteractionFilter.hx",295,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(295)
	return (bool((((int(this->sensorMask) & int(x->sensorGroup))) != (int)0)) && bool((((int(x->sensorMask) & int(this->sensorGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldSense,return )

bool ZPP_InteractionFilter_obj::shouldFlow( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldFlow",0xb42369e3,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldFlow","zpp_nape/dynamics/InteractionFilter.hx",302,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(302)
	return (bool((((int(this->fluidMask) & int(x->fluidGroup))) != (int)0)) && bool((((int(x->fluidMask) & int(this->fluidGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldFlow,return )

Void ZPP_InteractionFilter_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","invalidate",0x6864019d,"zpp_nape.dynamics.ZPP_InteractionFilter.invalidate","zpp_nape/dynamics/InteractionFilter.hx",305,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(309)
			s->invalidate_filter();
			HX_STACK_LINE(310)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,invalidate,(void))

::zpp_nape::dynamics::ZPP_InteractionFilter ZPP_InteractionFilter_obj::zpp_pool;


ZPP_InteractionFilter_obj::ZPP_InteractionFilter_obj()
{
}

void ZPP_InteractionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionFilter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_MARK_MEMBER_NAME(collisionMask,"collisionMask");
	HX_MARK_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_MARK_MEMBER_NAME(sensorMask,"sensorMask");
	HX_MARK_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_MARK_MEMBER_NAME(fluidMask,"fluidMask");
	HX_MARK_END_CLASS();
}

void ZPP_InteractionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_VISIT_MEMBER_NAME(collisionMask,"collisionMask");
	HX_VISIT_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_VISIT_MEMBER_NAME(sensorMask,"sensorMask");
	HX_VISIT_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_VISIT_MEMBER_NAME(fluidMask,"fluidMask");
}

Dynamic ZPP_InteractionFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { return fluidMask; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { return sensorMask; }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { return fluidGroup; }
		if (HX_FIELD_EQ(inName,"shouldFlow") ) { return shouldFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { return sensorGroup; }
		if (HX_FIELD_EQ(inName,"shouldSense") ) { return shouldSense_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { return collisionMask; }
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return collisionGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_InteractionFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::InteractionFilter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { fluidMask=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { sensorMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { fluidGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { sensorGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { collisionMask=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { collisionGroup=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_InteractionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("collisionGroup"));
	outFields->push(HX_CSTRING("collisionMask"));
	outFields->push(HX_CSTRING("sensorGroup"));
	outFields->push(HX_CSTRING("sensorMask"));
	outFields->push(HX_CSTRING("fluidGroup"));
	outFields->push(HX_CSTRING("fluidMask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(ZPP_InteractionFilter_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionFilter_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::nape::dynamics::InteractionFilter*/ ,(int)offsetof(ZPP_InteractionFilter_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_InteractionFilter_obj,shapes),HX_CSTRING("shapes")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_InteractionFilter_obj,wrap_shapes),HX_CSTRING("wrap_shapes")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,collisionGroup),HX_CSTRING("collisionGroup")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,collisionMask),HX_CSTRING("collisionMask")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,sensorGroup),HX_CSTRING("sensorGroup")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,sensorMask),HX_CSTRING("sensorMask")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,fluidGroup),HX_CSTRING("fluidGroup")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,fluidMask),HX_CSTRING("fluidMask")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("userData"),
	HX_CSTRING("outer"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("shapes"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("feature_cons"),
	HX_CSTRING("addShape"),
	HX_CSTRING("remShape"),
	HX_CSTRING("copy"),
	HX_CSTRING("collisionGroup"),
	HX_CSTRING("collisionMask"),
	HX_CSTRING("shouldCollide"),
	HX_CSTRING("sensorGroup"),
	HX_CSTRING("sensorMask"),
	HX_CSTRING("shouldSense"),
	HX_CSTRING("fluidGroup"),
	HX_CSTRING("fluidMask"),
	HX_CSTRING("shouldFlow"),
	HX_CSTRING("invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionFilter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionFilter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_InteractionFilter_obj::__mClass;

void ZPP_InteractionFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_InteractionFilter"), hx::TCanCast< ZPP_InteractionFilter_obj> ,sStaticFields,sMemberFields,
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

void ZPP_InteractionFilter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
