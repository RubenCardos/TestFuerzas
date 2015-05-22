#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
namespace nape{
namespace callbacks{

Void Callback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.Callback","new",0x4c54d17d,"nape.callbacks.Callback.new","nape/callbacks/Callback.hx",180,0x8f946491)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
}
;
	return null();
}

//Callback_obj::~Callback_obj() { }

Dynamic Callback_obj::__CreateEmpty() { return  new Callback_obj; }
hx::ObjectPtr< Callback_obj > Callback_obj::__new()
{  hx::ObjectPtr< Callback_obj > result = new Callback_obj();
	result->__construct();
	return result;}

Dynamic Callback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Callback_obj > result = new Callback_obj();
	result->__construct();
	return result;}

::nape::callbacks::CbEvent Callback_obj::get_event( ){
	HX_STACK_FRAME("nape.callbacks.Callback","get_event",0xc794594e,"nape.callbacks.Callback.get_event","nape/callbacks/Callback.hx",191,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast< ::nape::callbacks::CbEvent >();
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_event,return )

::nape::callbacks::Listener Callback_obj::get_listener( ){
	HX_STACK_FRAME("nape.callbacks.Callback","get_listener",0xac1227c0,"nape.callbacks.Callback.get_listener","nape/callbacks/Callback.hx",199,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	return this->zpp_inner->listener->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_listener,return )

::String Callback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.Callback","toString",0xbc83a66f,"nape.callbacks.Callback.toString","nape/callbacks/Callback.hx",215,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,toString,return )


Callback_obj::Callback_obj()
{
}

void Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Callback);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Callback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return get_event(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return get_listener(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_listener") ) { return get_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Callback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("listener"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(Callback_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_event"),
	HX_CSTRING("get_listener"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

#endif

Class Callback_obj::__mClass;

void Callback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.Callback"), hx::TCanCast< Callback_obj> ,sStaticFields,sMemberFields,
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

void Callback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
