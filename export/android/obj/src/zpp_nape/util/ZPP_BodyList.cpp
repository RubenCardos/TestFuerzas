#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_BodyList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","new",0x123a7d42,"zpp_nape.util.ZPP_BodyList.new","zpp_nape/util/Lists.hx",16557,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16612)
	this->user_length = (int)0;
	HX_STACK_LINE(16611)
	this->zip_length = false;
	HX_STACK_LINE(16610)
	this->push_ite = null();
	HX_STACK_LINE(16609)
	this->at_ite = null();
	HX_STACK_LINE(16608)
	this->at_index = (int)0;
	HX_STACK_LINE(16570)
	this->reverse_flag = false;
	HX_STACK_LINE(16569)
	this->dontremove = false;
	HX_STACK_LINE(16568)
	this->subber = null();
	HX_STACK_LINE(16567)
	this->post_adder = null();
	HX_STACK_LINE(16566)
	this->adder = null();
	HX_STACK_LINE(16564)
	this->_modifiable = null();
	HX_STACK_LINE(16563)
	this->_validate = null();
	HX_STACK_LINE(16562)
	this->_invalidate = null();
	HX_STACK_LINE(16561)
	this->_invalidated = false;
	HX_STACK_LINE(16560)
	this->immutable = false;
	HX_STACK_LINE(16559)
	this->inner = null();
	HX_STACK_LINE(16558)
	this->outer = null();
	HX_STACK_LINE(16614)
	::zpp_nape::util::ZNPList_ZPP_Body _g = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16614)
	this->inner = _g;
	HX_STACK_LINE(16615)
	this->_invalidated = true;
}
;
	return null();
}

//ZPP_BodyList_obj::~ZPP_BodyList_obj() { }

Dynamic ZPP_BodyList_obj::__CreateEmpty() { return  new ZPP_BodyList_obj; }
hx::ObjectPtr< ZPP_BodyList_obj > ZPP_BodyList_obj::__new()
{  hx::ObjectPtr< ZPP_BodyList_obj > result = new ZPP_BodyList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_BodyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_BodyList_obj > result = new ZPP_BodyList_obj();
	result->__construct();
	return result;}

Void ZPP_BodyList_obj::valmod( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","valmod",0x37a006df,"zpp_nape.util.ZPP_BodyList.valmod","zpp_nape/util/Lists.hx",16578,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16579)
		this->validate();
		HX_STACK_LINE(16580)
		if ((this->inner->modified)){
			HX_STACK_LINE(16581)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(16581)
				this->push_ite = null();
			}
			HX_STACK_LINE(16582)
			this->at_ite = null();
			HX_STACK_LINE(16583)
			this->inner->modified = false;
			HX_STACK_LINE(16584)
			this->inner->pushmod = false;
			HX_STACK_LINE(16585)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyList_obj,valmod,(void))

Void ZPP_BodyList_obj::modified( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","modified",0x21d93b27,"zpp_nape.util.ZPP_BodyList.modified","zpp_nape/util/Lists.hx",16588,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16589)
		this->zip_length = true;
		HX_STACK_LINE(16590)
		this->at_ite = null();
		HX_STACK_LINE(16591)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyList_obj,modified,(void))

Void ZPP_BodyList_obj::modify_test( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","modify_test",0xe153b459,"zpp_nape.util.ZPP_BodyList.modify_test","zpp_nape/util/Lists.hx",16593,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyList_obj,modify_test,(void))

Void ZPP_BodyList_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","validate",0x0ff53074,"zpp_nape.util.ZPP_BodyList.validate","zpp_nape/util/Lists.hx",16599,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16599)
		if ((this->_invalidated)){
			HX_STACK_LINE(16600)
			this->_invalidated = false;
			HX_STACK_LINE(16601)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(16601)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyList_obj,validate,(void))

Void ZPP_BodyList_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","invalidate",0x8139acd9,"zpp_nape.util.ZPP_BodyList.invalidate","zpp_nape/util/Lists.hx",16604,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16605)
		this->_invalidated = true;
		HX_STACK_LINE(16606)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(16606)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyList_obj,invalidate,(void))

bool ZPP_BodyList_obj::internal;

::nape::phys::BodyList ZPP_BodyList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Body list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_BodyList","get",0x12352d78,"zpp_nape.util.ZPP_BodyList.get","zpp_nape/util/Lists.hx",16571,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(imm,"imm")
{
		HX_STACK_LINE(16572)
		::nape::phys::BodyList ret = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16573)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(16574)
		if ((imm)){
			HX_STACK_LINE(16574)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(16575)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(16576)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_BodyList_obj,get,return )


ZPP_BodyList_obj::ZPP_BodyList_obj()
{
}

void ZPP_BodyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_BodyList);
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

void ZPP_BodyList_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic ZPP_BodyList_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_BodyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
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

void ZPP_BodyList_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_BodyList_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Body*/ ,(int)offsetof(ZPP_BodyList_obj,inner),HX_CSTRING("inner")},
	{hx::fsBool,(int)offsetof(ZPP_BodyList_obj,immutable),HX_CSTRING("immutable")},
	{hx::fsBool,(int)offsetof(ZPP_BodyList_obj,_invalidated),HX_CSTRING("_invalidated")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,_invalidate),HX_CSTRING("_invalidate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,_validate),HX_CSTRING("_validate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,_modifiable),HX_CSTRING("_modifiable")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,adder),HX_CSTRING("adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,post_adder),HX_CSTRING("post_adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyList_obj,subber),HX_CSTRING("subber")},
	{hx::fsBool,(int)offsetof(ZPP_BodyList_obj,dontremove),HX_CSTRING("dontremove")},
	{hx::fsBool,(int)offsetof(ZPP_BodyList_obj,reverse_flag),HX_CSTRING("reverse_flag")},
	{hx::fsInt,(int)offsetof(ZPP_BodyList_obj,at_index),HX_CSTRING("at_index")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(int)offsetof(ZPP_BodyList_obj,at_ite),HX_CSTRING("at_ite")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(int)offsetof(ZPP_BodyList_obj,push_ite),HX_CSTRING("push_ite")},
	{hx::fsBool,(int)offsetof(ZPP_BodyList_obj,zip_length),HX_CSTRING("zip_length")},
	{hx::fsInt,(int)offsetof(ZPP_BodyList_obj,user_length),HX_CSTRING("user_length")},
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
	HX_MARK_MEMBER_NAME(ZPP_BodyList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_BodyList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_BodyList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_BodyList_obj::internal,"internal");
};

#endif

Class ZPP_BodyList_obj::__mClass;

void ZPP_BodyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_BodyList"), hx::TCanCast< ZPP_BodyList_obj> ,sStaticFields,sMemberFields,
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

void ZPP_BodyList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
