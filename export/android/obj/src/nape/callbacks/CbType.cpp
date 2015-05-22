#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace callbacks{

Void CbType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.CbType","new",0x0178d531,"nape.callbacks.CbType.new","nape/callbacks/CbType.hx",179,0x6262b7dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(198)
	::zpp_nape::callbacks::ZPP_CbType _g = ::zpp_nape::callbacks::ZPP_CbType_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(198)
	this->zpp_inner = _g;
	HX_STACK_LINE(199)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//CbType_obj::~CbType_obj() { }

Dynamic CbType_obj::__CreateEmpty() { return  new CbType_obj; }
hx::ObjectPtr< CbType_obj > CbType_obj::__new()
{  hx::ObjectPtr< CbType_obj > result = new CbType_obj();
	result->__construct();
	return result;}

Dynamic CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbType_obj > result = new CbType_obj();
	result->__construct();
	return result;}

int CbType_obj::get_id( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_id",0x562b06f3,"nape.callbacks.CbType.get_id","nape/callbacks/CbType.hx",190,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->zpp_inner->id;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_id,return )

::nape::callbacks::OptionType CbType_obj::including( Dynamic includes){
	HX_STACK_FRAME("nape.callbacks.CbType","including",0x301a38f6,"nape.callbacks.CbType.including","nape/callbacks/CbType.hx",268,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(includes,"includes")
	HX_STACK_LINE(268)
	return ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null())->including(includes);
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,including,return )

::nape::callbacks::OptionType CbType_obj::excluding( Dynamic excludes){
	HX_STACK_FRAME("nape.callbacks.CbType","excluding",0x204d0a28,"nape.callbacks.CbType.excluding","nape/callbacks/CbType.hx",284,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(excludes,"excludes")
	HX_STACK_LINE(284)
	return ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null())->excluding(excludes);
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,excluding,return )

Dynamic CbType_obj::get_userData( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_userData",0x1328a32d,"nape.callbacks.CbType.get_userData","nape/callbacks/CbType.hx",299,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/CbType.hx",301,0x6262b7dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(301)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(303)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_userData,return )

::nape::phys::InteractorList CbType_obj::get_interactors( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_interactors",0x9600f9e2,"nape.callbacks.CbType.get_interactors","nape/callbacks/CbType.hx",314,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	if (((this->zpp_inner->wrap_interactors == null()))){
		HX_STACK_LINE(316)
		::nape::phys::InteractorList _g = ::zpp_nape::util::ZPP_InteractorList_obj::get(this->zpp_inner->interactors,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(316)
		this->zpp_inner->wrap_interactors = _g;
	}
	HX_STACK_LINE(318)
	return this->zpp_inner->wrap_interactors;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_interactors,return )

::nape::constraint::ConstraintList CbType_obj::get_constraints( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_constraints",0x7157835e,"nape.callbacks.CbType.get_constraints","nape/callbacks/CbType.hx",329,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	if (((this->zpp_inner->wrap_constraints == null()))){
		HX_STACK_LINE(331)
		::nape::constraint::ConstraintList _g = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(331)
		this->zpp_inner->wrap_constraints = _g;
	}
	HX_STACK_LINE(333)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_constraints,return )

::String CbType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.CbType","toString",0xef31b63b,"nape.callbacks.CbType.toString","nape/callbacks/CbType.hx",339,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(339)
	if (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY))){
		HX_STACK_LINE(339)
		return HX_CSTRING("ANY_BODY");
	}
	else{
		HX_STACK_LINE(340)
		if (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE))){
			HX_STACK_LINE(340)
			return HX_CSTRING("ANY_SHAPE");
		}
		else{
			HX_STACK_LINE(341)
			if (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND))){
				HX_STACK_LINE(341)
				return HX_CSTRING("ANY_COMPOUND");
			}
			else{
				HX_STACK_LINE(342)
				if (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT))){
					HX_STACK_LINE(342)
					return HX_CSTRING("ANY_CONSTRAINT");
				}
				else{
					HX_STACK_LINE(343)
					return (HX_CSTRING("CbType#") + this->zpp_inner->id);
				}
			}
		}
	}
	HX_STACK_LINE(339)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,toString,return )

::nape::callbacks::CbType CbType_obj::get_ANY_BODY( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_BODY",0xb409b14d,"nape.callbacks.CbType.get_ANY_BODY","nape/callbacks/CbType.hx",213,0x6262b7dd)
	HX_STACK_LINE(213)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_BODY,return )

::nape::callbacks::CbType CbType_obj::get_ANY_CONSTRAINT( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_CONSTRAINT",0xb49fb548,"nape.callbacks.CbType.get_ANY_CONSTRAINT","nape/callbacks/CbType.hx",226,0x6262b7dd)
	HX_STACK_LINE(226)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_CONSTRAINT,return )

::nape::callbacks::CbType CbType_obj::get_ANY_SHAPE( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_SHAPE",0x999e81f6,"nape.callbacks.CbType.get_ANY_SHAPE","nape/callbacks/CbType.hx",239,0x6262b7dd)
	HX_STACK_LINE(239)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_SHAPE,return )

::nape::callbacks::CbType CbType_obj::get_ANY_COMPOUND( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_COMPOUND",0x0756f396,"nape.callbacks.CbType.get_ANY_COMPOUND","nape/callbacks/CbType.hx",252,0x6262b7dd)
	HX_STACK_LINE(252)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_COMPOUND,return )


CbType_obj::CbType_obj()
{
}

void CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbType);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic CbType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { return get_ANY_BODY(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { return get_ANY_SHAPE(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"including") ) { return including_dyn(); }
		if (HX_FIELD_EQ(inName,"excluding") ) { return excluding_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return get_interactors(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return get_constraints(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_ANY_BODY") ) { return get_ANY_BODY_dyn(); }
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { return get_ANY_COMPOUND(); }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_ANY_SHAPE") ) { return get_ANY_SHAPE_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { return get_ANY_CONSTRAINT(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return get_interactors_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ANY_COMPOUND") ) { return get_ANY_COMPOUND_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_ANY_CONSTRAINT") ) { return get_ANY_CONSTRAINT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("constraints"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_ANY_BODY"),
	HX_CSTRING("get_ANY_CONSTRAINT"),
	HX_CSTRING("get_ANY_SHAPE"),
	HX_CSTRING("get_ANY_COMPOUND"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbType*/ ,(int)offsetof(CbType_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_id"),
	HX_CSTRING("including"),
	HX_CSTRING("excluding"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_interactors"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#endif

Class CbType_obj::__mClass;

void CbType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.CbType"), hx::TCanCast< CbType_obj> ,sStaticFields,sMemberFields,
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

void CbType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
