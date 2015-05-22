#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace geom{

Void Winding_obj::__construct()
{
HX_STACK_FRAME("nape.geom.Winding","new",0x17093480,"nape.geom.Winding.new","nape/geom/Winding.hx",188,0x1c896f50)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Winding_obj::~Winding_obj() { }

Dynamic Winding_obj::__CreateEmpty() { return  new Winding_obj; }
hx::ObjectPtr< Winding_obj > Winding_obj::__new()
{  hx::ObjectPtr< Winding_obj > result = new Winding_obj();
	result->__construct();
	return result;}

Dynamic Winding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Winding_obj > result = new Winding_obj();
	result->__construct();
	return result;}

::String Winding_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Winding","toString",0x2d1a788c,"nape.geom.Winding.toString","nape/geom/Winding.hx",199,0x1c896f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::nape::geom::Winding _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		if (((::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED == null()))){
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(199)
			::nape::geom::Winding _g = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = _g;
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(199)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
	}
	HX_STACK_LINE(199)
	if (((hx::ObjectPtr<OBJ_>(this) == _g1))){
		HX_STACK_LINE(199)
		return HX_CSTRING("UNDEFINED");
	}
	else{
		HX_STACK_LINE(200)
		::nape::geom::Winding _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			if (((::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE == null()))){
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(200)
				::nape::geom::Winding _g2 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = _g2;
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(200)
			_g3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
		}
		HX_STACK_LINE(200)
		if (((hx::ObjectPtr<OBJ_>(this) == _g3))){
			HX_STACK_LINE(200)
			return HX_CSTRING("CLOCKWISE");
		}
		else{
			HX_STACK_LINE(201)
			::nape::geom::Winding _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				if (((::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE == null()))){
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(201)
					::nape::geom::Winding _g4 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = _g4;
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(201)
				_g5 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;
			}
			HX_STACK_LINE(201)
			if (((hx::ObjectPtr<OBJ_>(this) == _g5))){
				HX_STACK_LINE(201)
				return HX_CSTRING("ANTICLOCKWISE");
			}
			else{
				HX_STACK_LINE(202)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(199)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,toString,return )

::nape::geom::Winding Winding_obj::get_UNDEFINED( ){
	HX_STACK_FRAME("nape.geom.Winding","get_UNDEFINED",0xc26e4e67,"nape.geom.Winding.get_UNDEFINED","nape/geom/Winding.hx",213,0x1c896f50)
	HX_STACK_LINE(214)
	if (((::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED == null()))){
		HX_STACK_LINE(215)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(216)
		::nape::geom::Winding _g = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = _g;
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(219)
	return ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_UNDEFINED,return )

::nape::geom::Winding Winding_obj::get_CLOCKWISE( ){
	HX_STACK_FRAME("nape.geom.Winding","get_CLOCKWISE",0x62038dc9,"nape.geom.Winding.get_CLOCKWISE","nape/geom/Winding.hx",226,0x1c896f50)
	HX_STACK_LINE(227)
	if (((::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE == null()))){
		HX_STACK_LINE(228)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(229)
		::nape::geom::Winding _g = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = _g;
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(232)
	return ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_CLOCKWISE,return )

::nape::geom::Winding Winding_obj::get_ANTICLOCKWISE( ){
	HX_STACK_FRAME("nape.geom.Winding","get_ANTICLOCKWISE",0x8e22f967,"nape.geom.Winding.get_ANTICLOCKWISE","nape/geom/Winding.hx",239,0x1c896f50)
	HX_STACK_LINE(240)
	if (((::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE == null()))){
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(242)
		::nape::geom::Winding _g = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = _g;
		HX_STACK_LINE(243)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(245)
	return ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_ANTICLOCKWISE,return )


Winding_obj::Winding_obj()
{
}

Dynamic Winding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"UNDEFINED") ) { return get_UNDEFINED(); }
		if (HX_FIELD_EQ(inName,"CLOCKWISE") ) { return get_CLOCKWISE(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_UNDEFINED") ) { return get_UNDEFINED_dyn(); }
		if (HX_FIELD_EQ(inName,"get_CLOCKWISE") ) { return get_CLOCKWISE_dyn(); }
		if (HX_FIELD_EQ(inName,"ANTICLOCKWISE") ) { return get_ANTICLOCKWISE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_ANTICLOCKWISE") ) { return get_ANTICLOCKWISE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Winding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Winding_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_UNDEFINED"),
	HX_CSTRING("get_CLOCKWISE"),
	HX_CSTRING("get_ANTICLOCKWISE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Winding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Winding_obj::__mClass,"__mClass");
};

#endif

Class Winding_obj::__mClass;

void Winding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Winding"), hx::TCanCast< Winding_obj> ,sStaticFields,sMemberFields,
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

void Winding_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
