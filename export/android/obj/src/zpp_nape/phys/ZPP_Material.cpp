#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
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
namespace phys{

Void ZPP_Material_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","new",0x1f6d8179,"zpp_nape.phys.ZPP_Material.new","zpp_nape/phys/Material.hx",174,0x3ab51b5c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(255)
	this->rollingFriction = 0.0;
	HX_STACK_LINE(254)
	this->elasticity = 0.0;
	HX_STACK_LINE(253)
	this->density = 0.0;
	HX_STACK_LINE(252)
	this->staticFriction = 0.0;
	HX_STACK_LINE(251)
	this->dynamicFriction = 0.0;
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
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		this->shapes = _g;
	}
	HX_STACK_LINE(258)
	this->elasticity = (int)0;
	HX_STACK_LINE(259)
	this->dynamicFriction = (int)1;
	HX_STACK_LINE(260)
	this->staticFriction = (int)2;
	HX_STACK_LINE(261)
	this->density = 0.001;
	HX_STACK_LINE(262)
	this->rollingFriction = 0.01;
}
;
	return null();
}

//ZPP_Material_obj::~ZPP_Material_obj() { }

Dynamic ZPP_Material_obj::__CreateEmpty() { return  new ZPP_Material_obj; }
hx::ObjectPtr< ZPP_Material_obj > ZPP_Material_obj::__new()
{  hx::ObjectPtr< ZPP_Material_obj > result = new ZPP_Material_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Material_obj > result = new ZPP_Material_obj();
	result->__construct();
	return result;}

::nape::phys::Material ZPP_Material_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","wrapper",0x7eaf86ec,"zpp_nape.phys.ZPP_Material.wrapper","zpp_nape/phys/Material.hx",202,0x3ab51b5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	if (((this->outer == null()))){
		HX_STACK_LINE(204)
		::nape::phys::Material _g = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		this->outer = _g;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::zpp_nape::phys::ZPP_Material o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			o->next = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
			HX_STACK_LINE(217)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,wrapper,return )

Void ZPP_Material_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","free",0x5b23e173,"zpp_nape.phys.ZPP_Material.free","zpp_nape/phys/Material.hx",229,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,free,(void))

Void ZPP_Material_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","alloc",0x7f4e8dce,"zpp_nape.phys.ZPP_Material.alloc","zpp_nape/phys/Material.hx",233,0x3ab51b5c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,alloc,(void))

Void ZPP_Material_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","feature_cons",0x750d3321,"zpp_nape.phys.ZPP_Material.feature_cons","zpp_nape/phys/Material.hx",238,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape _g = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->shapes = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,feature_cons,(void))

Void ZPP_Material_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","addShape",0xa58abd87,"zpp_nape.phys.ZPP_Material.addShape","zpp_nape/phys/Material.hx",244,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(244)
		this->shapes->add(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,addShape,(void))

Void ZPP_Material_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","remShape",0x34b007ae,"zpp_nape.phys.ZPP_Material.remShape","zpp_nape/phys/Material.hx",249,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(249)
		this->shapes->remove(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,remShape,(void))

::zpp_nape::phys::ZPP_Material ZPP_Material_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","copy",0x5926007c,"zpp_nape.phys.ZPP_Material.copy","zpp_nape/phys/Material.hx",264,0x3ab51b5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material ret = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(266)
	ret->dynamicFriction = this->dynamicFriction;
	HX_STACK_LINE(267)
	ret->staticFriction = this->staticFriction;
	HX_STACK_LINE(268)
	ret->density = this->density;
	HX_STACK_LINE(269)
	ret->elasticity = this->elasticity;
	HX_STACK_LINE(270)
	ret->rollingFriction = this->rollingFriction;
	HX_STACK_LINE(271)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,copy,return )

Void ZPP_Material_obj::set( ::zpp_nape::phys::ZPP_Material x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","set",0x1f714cbb,"zpp_nape.phys.ZPP_Material.set","zpp_nape/phys/Material.hx",273,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(274)
		this->dynamicFriction = x->dynamicFriction;
		HX_STACK_LINE(275)
		this->staticFriction = x->staticFriction;
		HX_STACK_LINE(276)
		this->density = x->density;
		HX_STACK_LINE(277)
		this->elasticity = x->elasticity;
		HX_STACK_LINE(278)
		this->rollingFriction = x->rollingFriction;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,set,(void))

Void ZPP_Material_obj::invalidate( int x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","invalidate",0xe405ad82,"zpp_nape.phys.ZPP_Material.invalidate","zpp_nape/phys/Material.hx",285,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(286)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(288)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(289)
			s->invalidate_material(x);
			HX_STACK_LINE(290)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,invalidate,(void))

::zpp_nape::phys::ZPP_Material ZPP_Material_obj::zpp_pool;

int ZPP_Material_obj::WAKE;

int ZPP_Material_obj::PROPS;

int ZPP_Material_obj::ANGDRAG;

int ZPP_Material_obj::ARBITERS;


ZPP_Material_obj::ZPP_Material_obj()
{
}

void ZPP_Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Material);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_MARK_MEMBER_NAME(staticFriction,"staticFriction");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(rollingFriction,"rollingFriction");
	HX_MARK_END_CLASS();
}

void ZPP_Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_VISIT_MEMBER_NAME(staticFriction,"staticFriction");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(rollingFriction,"rollingFriction");
}

Dynamic ZPP_Material_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { return WAKE; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"PROPS") ) { return PROPS; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ANGDRAG") ) { return ANGDRAG; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"ARBITERS") ) { return ARBITERS; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return staticFriction; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return dynamicFriction; }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return rollingFriction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { WAKE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"PROPS") ) { PROPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Material >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ANGDRAG") ) { ANGDRAG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARBITERS") ) { ARBITERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { staticFriction=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { dynamicFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { rollingFriction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("dynamicFriction"));
	outFields->push(HX_CSTRING("staticFriction"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("rollingFriction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("WAKE"),
	HX_CSTRING("PROPS"),
	HX_CSTRING("ANGDRAG"),
	HX_CSTRING("ARBITERS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Material_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Material_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::nape::phys::Material*/ ,(int)offsetof(ZPP_Material_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_Material_obj,shapes),HX_CSTRING("shapes")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_Material_obj,wrap_shapes),HX_CSTRING("wrap_shapes")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,dynamicFriction),HX_CSTRING("dynamicFriction")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,staticFriction),HX_CSTRING("staticFriction")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,density),HX_CSTRING("density")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,elasticity),HX_CSTRING("elasticity")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,rollingFriction),HX_CSTRING("rollingFriction")},
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
	HX_CSTRING("dynamicFriction"),
	HX_CSTRING("staticFriction"),
	HX_CSTRING("density"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("rollingFriction"),
	HX_CSTRING("copy"),
	HX_CSTRING("set"),
	HX_CSTRING("invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::WAKE,"WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::PROPS,"PROPS");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::ANGDRAG,"ANGDRAG");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::ARBITERS,"ARBITERS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::WAKE,"WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::PROPS,"PROPS");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::ANGDRAG,"ANGDRAG");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::ARBITERS,"ARBITERS");
};

#endif

Class ZPP_Material_obj::__mClass;

void ZPP_Material_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Material"), hx::TCanCast< ZPP_Material_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Material_obj::__boot()
{
	zpp_pool= null();
	WAKE= (int)1;
	PROPS= (int)2;
	ANGDRAG= (int)4;
	ARBITERS= (int)8;
}

} // end namespace zpp_nape
} // end namespace phys
