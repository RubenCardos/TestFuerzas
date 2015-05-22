#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_GeomPolyList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","new",0xc31f87c8,"zpp_nape.util.ZPP_GeomPolyList.new","zpp_nape/util/Lists.hx",16929,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16984)
	this->user_length = (int)0;
	HX_STACK_LINE(16983)
	this->zip_length = false;
	HX_STACK_LINE(16982)
	this->push_ite = null();
	HX_STACK_LINE(16981)
	this->at_ite = null();
	HX_STACK_LINE(16980)
	this->at_index = (int)0;
	HX_STACK_LINE(16942)
	this->reverse_flag = false;
	HX_STACK_LINE(16941)
	this->dontremove = false;
	HX_STACK_LINE(16940)
	this->subber = null();
	HX_STACK_LINE(16939)
	this->post_adder = null();
	HX_STACK_LINE(16938)
	this->adder = null();
	HX_STACK_LINE(16936)
	this->_modifiable = null();
	HX_STACK_LINE(16935)
	this->_validate = null();
	HX_STACK_LINE(16934)
	this->_invalidate = null();
	HX_STACK_LINE(16933)
	this->_invalidated = false;
	HX_STACK_LINE(16932)
	this->immutable = false;
	HX_STACK_LINE(16931)
	this->inner = null();
	HX_STACK_LINE(16930)
	this->outer = null();
	HX_STACK_LINE(16986)
	::zpp_nape::util::ZNPList_ZPP_GeomPoly _g = ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16986)
	this->inner = _g;
	HX_STACK_LINE(16987)
	this->_invalidated = true;
}
;
	return null();
}

//ZPP_GeomPolyList_obj::~ZPP_GeomPolyList_obj() { }

Dynamic ZPP_GeomPolyList_obj::__CreateEmpty() { return  new ZPP_GeomPolyList_obj; }
hx::ObjectPtr< ZPP_GeomPolyList_obj > ZPP_GeomPolyList_obj::__new()
{  hx::ObjectPtr< ZPP_GeomPolyList_obj > result = new ZPP_GeomPolyList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_GeomPolyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomPolyList_obj > result = new ZPP_GeomPolyList_obj();
	result->__construct();
	return result;}

Void ZPP_GeomPolyList_obj::valmod( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","valmod",0x588fd419,"zpp_nape.util.ZPP_GeomPolyList.valmod","zpp_nape/util/Lists.hx",16950,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16951)
		this->validate();
		HX_STACK_LINE(16952)
		if ((this->inner->modified)){
			HX_STACK_LINE(16953)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(16953)
				this->push_ite = null();
			}
			HX_STACK_LINE(16954)
			this->at_ite = null();
			HX_STACK_LINE(16955)
			this->inner->modified = false;
			HX_STACK_LINE(16956)
			this->inner->pushmod = false;
			HX_STACK_LINE(16957)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomPolyList_obj,valmod,(void))

Void ZPP_GeomPolyList_obj::modified( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","modified",0x38424ae1,"zpp_nape.util.ZPP_GeomPolyList.modified","zpp_nape/util/Lists.hx",16960,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16961)
		this->zip_length = true;
		HX_STACK_LINE(16962)
		this->at_ite = null();
		HX_STACK_LINE(16963)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomPolyList_obj,modified,(void))

Void ZPP_GeomPolyList_obj::modify_test( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","modify_test",0x57afb4df,"zpp_nape.util.ZPP_GeomPolyList.modify_test","zpp_nape/util/Lists.hx",16965,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomPolyList_obj,modify_test,(void))

Void ZPP_GeomPolyList_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","validate",0x265e402e,"zpp_nape.util.ZPP_GeomPolyList.validate","zpp_nape/util/Lists.hx",16971,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16971)
		if ((this->_invalidated)){
			HX_STACK_LINE(16972)
			this->_invalidated = false;
			HX_STACK_LINE(16973)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(16973)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomPolyList_obj,validate,(void))

Void ZPP_GeomPolyList_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","invalidate",0xcfd19f13,"zpp_nape.util.ZPP_GeomPolyList.invalidate","zpp_nape/util/Lists.hx",16976,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16977)
		this->_invalidated = true;
		HX_STACK_LINE(16978)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(16978)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomPolyList_obj,invalidate,(void))

bool ZPP_GeomPolyList_obj::internal;

::nape::geom::GeomPolyList ZPP_GeomPolyList_obj::get( ::zpp_nape::util::ZNPList_ZPP_GeomPoly list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_GeomPolyList","get",0xc31a37fe,"zpp_nape.util.ZPP_GeomPolyList.get","zpp_nape/util/Lists.hx",16943,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(imm,"imm")
{
		HX_STACK_LINE(16944)
		::nape::geom::GeomPolyList ret = ::nape::geom::GeomPolyList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16945)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(16946)
		if ((imm)){
			HX_STACK_LINE(16946)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(16947)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(16948)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomPolyList_obj,get,return )


ZPP_GeomPolyList_obj::ZPP_GeomPolyList_obj()
{
}

void ZPP_GeomPolyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomPolyList);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(_invalidated,"_invalidated");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_modifiable,"_modifiable");
	HX_MARK_MEMBER_NAME(adder,"adder");
	HX_MARK_MEMBER_NAME(post_adder,"post_adder");
	HX_MARK_MEMBER_NAME(subber,"subber");
	HX_MARK_MEMBER_NAME(dontremove,"dontremove");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(push_ite,"push_ite");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(user_length,"user_length");
	HX_MARK_END_CLASS();
}

void ZPP_GeomPolyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(_invalidated,"_invalidated");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_modifiable,"_modifiable");
	HX_VISIT_MEMBER_NAME(adder,"adder");
	HX_VISIT_MEMBER_NAME(post_adder,"post_adder");
	HX_VISIT_MEMBER_NAME(subber,"subber");
	HX_VISIT_MEMBER_NAME(dontremove,"dontremove");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(push_ite,"push_ite");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(user_length,"user_length");
}

Dynamic ZPP_GeomPolyList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"adder") ) { return adder; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { return subber; }
		if (HX_FIELD_EQ(inName,"valmod") ) { return valmod_dyn(); }
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { return push_ite; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable; }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { return post_adder; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { return dontremove; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { return _modifiable; }
		if (HX_FIELD_EQ(inName,"modify_test") ) { return modify_test_dyn(); }
		if (HX_FIELD_EQ(inName,"user_length") ) { return user_length; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { return _invalidated; }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return reverse_flag; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_GeomPolyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::GeomPolyList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_GeomPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { post_adder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { dontremove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { _modifiable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"user_length") ) { user_length=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { _invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_GeomPolyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("immutable"));
	outFields->push(HX_CSTRING("_invalidated"));
	outFields->push(HX_CSTRING("dontremove"));
	outFields->push(HX_CSTRING("reverse_flag"));
	outFields->push(HX_CSTRING("at_index"));
	outFields->push(HX_CSTRING("at_ite"));
	outFields->push(HX_CSTRING("push_ite"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("user_length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::GeomPolyList*/ ,(int)offsetof(ZPP_GeomPolyList_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_GeomPoly*/ ,(int)offsetof(ZPP_GeomPolyList_obj,inner),HX_CSTRING("inner")},
	{hx::fsBool,(int)offsetof(ZPP_GeomPolyList_obj,immutable),HX_CSTRING("immutable")},
	{hx::fsBool,(int)offsetof(ZPP_GeomPolyList_obj,_invalidated),HX_CSTRING("_invalidated")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,_invalidate),HX_CSTRING("_invalidate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,_validate),HX_CSTRING("_validate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,_modifiable),HX_CSTRING("_modifiable")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,adder),HX_CSTRING("adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,post_adder),HX_CSTRING("post_adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_GeomPolyList_obj,subber),HX_CSTRING("subber")},
	{hx::fsBool,(int)offsetof(ZPP_GeomPolyList_obj,dontremove),HX_CSTRING("dontremove")},
	{hx::fsBool,(int)offsetof(ZPP_GeomPolyList_obj,reverse_flag),HX_CSTRING("reverse_flag")},
	{hx::fsInt,(int)offsetof(ZPP_GeomPolyList_obj,at_index),HX_CSTRING("at_index")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomPoly*/ ,(int)offsetof(ZPP_GeomPolyList_obj,at_ite),HX_CSTRING("at_ite")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomPoly*/ ,(int)offsetof(ZPP_GeomPolyList_obj,push_ite),HX_CSTRING("push_ite")},
	{hx::fsBool,(int)offsetof(ZPP_GeomPolyList_obj,zip_length),HX_CSTRING("zip_length")},
	{hx::fsInt,(int)offsetof(ZPP_GeomPolyList_obj,user_length),HX_CSTRING("user_length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("inner"),
	HX_CSTRING("immutable"),
	HX_CSTRING("_invalidated"),
	HX_CSTRING("_invalidate"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_modifiable"),
	HX_CSTRING("adder"),
	HX_CSTRING("post_adder"),
	HX_CSTRING("subber"),
	HX_CSTRING("dontremove"),
	HX_CSTRING("reverse_flag"),
	HX_CSTRING("valmod"),
	HX_CSTRING("modified"),
	HX_CSTRING("modify_test"),
	HX_CSTRING("validate"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("at_index"),
	HX_CSTRING("at_ite"),
	HX_CSTRING("push_ite"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("user_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomPolyList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomPolyList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomPolyList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomPolyList_obj::internal,"internal");
};

#endif

Class ZPP_GeomPolyList_obj::__mClass;

void ZPP_GeomPolyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_GeomPolyList"), hx::TCanCast< ZPP_GeomPolyList_obj> ,sStaticFields,sMemberFields,
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

void ZPP_GeomPolyList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
