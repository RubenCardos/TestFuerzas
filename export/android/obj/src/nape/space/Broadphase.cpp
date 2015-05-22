#include <hxcpp.h>

#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace space{

Void Broadphase_obj::__construct()
{
HX_STACK_FRAME("nape.space.Broadphase","new",0x8323b739,"nape.space.Broadphase.new","nape/space/Broadphase.hx",181,0xebaaca55)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Broadphase_obj::~Broadphase_obj() { }

Dynamic Broadphase_obj::__CreateEmpty() { return  new Broadphase_obj; }
hx::ObjectPtr< Broadphase_obj > Broadphase_obj::__new()
{  hx::ObjectPtr< Broadphase_obj > result = new Broadphase_obj();
	result->__construct();
	return result;}

Dynamic Broadphase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Broadphase_obj > result = new Broadphase_obj();
	result->__construct();
	return result;}

::String Broadphase_obj::toString( ){
	HX_STACK_FRAME("nape.space.Broadphase","toString",0xffae7733,"nape.space.Broadphase.toString","nape/space/Broadphase.hx",192,0xebaaca55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::space::Broadphase _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::space::Broadphase _g = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = _g;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
	}
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DYNAMIC_AABB_TREE");
	}
	else{
		HX_STACK_LINE(193)
		::nape::space::Broadphase _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::space::Broadphase _g2 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = _g2;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
		}
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(193)
			return HX_CSTRING("SWEEP_AND_PRUNE");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,toString,return )

::nape::space::Broadphase Broadphase_obj::get_DYNAMIC_AABB_TREE( ){
	HX_STACK_FRAME("nape.space.Broadphase","get_DYNAMIC_AABB_TREE",0xb10f9e6d,"nape.space.Broadphase.get_DYNAMIC_AABB_TREE","nape/space/Broadphase.hx",210,0xebaaca55)
	HX_STACK_LINE(211)
	if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
		HX_STACK_LINE(212)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(213)
		::nape::space::Broadphase _g = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = _g;
		HX_STACK_LINE(214)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(216)
	return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_DYNAMIC_AABB_TREE,return )

::nape::space::Broadphase Broadphase_obj::get_SWEEP_AND_PRUNE( ){
	HX_STACK_FRAME("nape.space.Broadphase","get_SWEEP_AND_PRUNE",0xd31624bf,"nape.space.Broadphase.get_SWEEP_AND_PRUNE","nape/space/Broadphase.hx",238,0xebaaca55)
	HX_STACK_LINE(239)
	if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
		HX_STACK_LINE(240)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(241)
		::nape::space::Broadphase _g = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = _g;
		HX_STACK_LINE(242)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(244)
	return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_SWEEP_AND_PRUNE,return )


Broadphase_obj::Broadphase_obj()
{
}

Dynamic Broadphase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SWEEP_AND_PRUNE") ) { return get_SWEEP_AND_PRUNE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DYNAMIC_AABB_TREE") ) { return get_DYNAMIC_AABB_TREE(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_SWEEP_AND_PRUNE") ) { return get_SWEEP_AND_PRUNE_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_AABB_TREE") ) { return get_DYNAMIC_AABB_TREE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Broadphase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Broadphase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_DYNAMIC_AABB_TREE"),
	HX_CSTRING("get_SWEEP_AND_PRUNE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

#endif

Class Broadphase_obj::__mClass;

void Broadphase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.space.Broadphase"), hx::TCanCast< Broadphase_obj> ,sStaticFields,sMemberFields,
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

void Broadphase_obj::__boot()
{
}

} // end namespace nape
} // end namespace space
