#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ListenerList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","new",0xcb29fd14,"zpp_nape.util.ZPP_ListenerList.new","zpp_nape/util/Lists.hx",16743,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16798)
	this->user_length = (int)0;
	HX_STACK_LINE(16797)
	this->zip_length = false;
	HX_STACK_LINE(16796)
	this->push_ite = null();
	HX_STACK_LINE(16795)
	this->at_ite = null();
	HX_STACK_LINE(16794)
	this->at_index = (int)0;
	HX_STACK_LINE(16756)
	this->reverse_flag = false;
	HX_STACK_LINE(16755)
	this->dontremove = false;
	HX_STACK_LINE(16754)
	this->subber = null();
	HX_STACK_LINE(16753)
	this->post_adder = null();
	HX_STACK_LINE(16752)
	this->adder = null();
	HX_STACK_LINE(16750)
	this->_modifiable = null();
	HX_STACK_LINE(16749)
	this->_validate = null();
	HX_STACK_LINE(16748)
	this->_invalidate = null();
	HX_STACK_LINE(16747)
	this->_invalidated = false;
	HX_STACK_LINE(16746)
	this->immutable = false;
	HX_STACK_LINE(16745)
	this->inner = null();
	HX_STACK_LINE(16744)
	this->outer = null();
	HX_STACK_LINE(16800)
	::zpp_nape::util::ZNPList_ZPP_Listener _g = ::zpp_nape::util::ZNPList_ZPP_Listener_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16800)
	this->inner = _g;
	HX_STACK_LINE(16801)
	this->_invalidated = true;
}
;
	return null();
}

//ZPP_ListenerList_obj::~ZPP_ListenerList_obj() { }

Dynamic ZPP_ListenerList_obj::__CreateEmpty() { return  new ZPP_ListenerList_obj; }
hx::ObjectPtr< ZPP_ListenerList_obj > ZPP_ListenerList_obj::__new()
{  hx::ObjectPtr< ZPP_ListenerList_obj > result = new ZPP_ListenerList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ListenerList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ListenerList_obj > result = new ZPP_ListenerList_obj();
	result->__construct();
	return result;}

Void ZPP_ListenerList_obj::valmod( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","valmod",0xfaf8b64d,"zpp_nape.util.ZPP_ListenerList.valmod","zpp_nape/util/Lists.hx",16764,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16765)
		this->validate();
		HX_STACK_LINE(16766)
		if ((this->inner->modified)){
			HX_STACK_LINE(16767)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(16767)
				this->push_ite = null();
			}
			HX_STACK_LINE(16768)
			this->at_ite = null();
			HX_STACK_LINE(16769)
			this->inner->modified = false;
			HX_STACK_LINE(16770)
			this->inner->pushmod = false;
			HX_STACK_LINE(16771)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,valmod,(void))

Void ZPP_ListenerList_obj::modified( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","modified",0xf04f2215,"zpp_nape.util.ZPP_ListenerList.modified","zpp_nape/util/Lists.hx",16774,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16775)
		this->zip_length = true;
		HX_STACK_LINE(16776)
		this->at_ite = null();
		HX_STACK_LINE(16777)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,modified,(void))

Void ZPP_ListenerList_obj::modify_test( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","modify_test",0x6e62562b,"zpp_nape.util.ZPP_ListenerList.modify_test","zpp_nape/util/Lists.hx",16779,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,modify_test,(void))

Void ZPP_ListenerList_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","validate",0xde6b1762,"zpp_nape.util.ZPP_ListenerList.validate","zpp_nape/util/Lists.hx",16785,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16785)
		if ((this->_invalidated)){
			HX_STACK_LINE(16786)
			this->_invalidated = false;
			HX_STACK_LINE(16787)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(16787)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,validate,(void))

Void ZPP_ListenerList_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","invalidate",0x4629ab47,"zpp_nape.util.ZPP_ListenerList.invalidate","zpp_nape/util/Lists.hx",16790,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16791)
		this->_invalidated = true;
		HX_STACK_LINE(16792)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(16792)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,invalidate,(void))

bool ZPP_ListenerList_obj::internal;

::nape::callbacks::ListenerList ZPP_ListenerList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Listener list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_ListenerList","get",0xcb24ad4a,"zpp_nape.util.ZPP_ListenerList.get","zpp_nape/util/Lists.hx",16757,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(imm,"imm")
{
		HX_STACK_LINE(16758)
		::nape::callbacks::ListenerList ret = ::nape::callbacks::ListenerList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16759)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(16760)
		if ((imm)){
			HX_STACK_LINE(16760)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(16761)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(16762)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ListenerList_obj,get,return )


ZPP_ListenerList_obj::ZPP_ListenerList_obj()
{
}

void ZPP_ListenerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ListenerList);
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

void ZPP_ListenerList_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic ZPP_ListenerList_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_ListenerList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::ListenerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Listener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
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

void ZPP_ListenerList_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::nape::callbacks::ListenerList*/ ,(int)offsetof(ZPP_ListenerList_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Listener*/ ,(int)offsetof(ZPP_ListenerList_obj,inner),HX_CSTRING("inner")},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,immutable),HX_CSTRING("immutable")},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,_invalidated),HX_CSTRING("_invalidated")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,_invalidate),HX_CSTRING("_invalidate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,_validate),HX_CSTRING("_validate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,_modifiable),HX_CSTRING("_modifiable")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,adder),HX_CSTRING("adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,post_adder),HX_CSTRING("post_adder")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ListenerList_obj,subber),HX_CSTRING("subber")},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,dontremove),HX_CSTRING("dontremove")},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,reverse_flag),HX_CSTRING("reverse_flag")},
	{hx::fsInt,(int)offsetof(ZPP_ListenerList_obj,at_index),HX_CSTRING("at_index")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Listener*/ ,(int)offsetof(ZPP_ListenerList_obj,at_ite),HX_CSTRING("at_ite")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Listener*/ ,(int)offsetof(ZPP_ListenerList_obj,push_ite),HX_CSTRING("push_ite")},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,zip_length),HX_CSTRING("zip_length")},
	{hx::fsInt,(int)offsetof(ZPP_ListenerList_obj,user_length),HX_CSTRING("user_length")},
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
	HX_MARK_MEMBER_NAME(ZPP_ListenerList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ListenerList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ListenerList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ListenerList_obj::internal,"internal");
};

#endif

Class ZPP_ListenerList_obj::__mClass;

void ZPP_ListenerList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_ListenerList"), hx::TCanCast< ZPP_ListenerList_obj> ,sStaticFields,sMemberFields,
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

void ZPP_ListenerList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
