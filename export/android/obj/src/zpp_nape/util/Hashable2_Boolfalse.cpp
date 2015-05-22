#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","new",0x169bec0b,"zpp_nape.util.Hashable2_Boolfalse.new","zpp_nape/util/FastHash.hx",176,0x5d785189)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(205)
	this->di = (int)0;
	HX_STACK_LINE(204)
	this->id = (int)0;
	HX_STACK_LINE(203)
	this->hnext = null();
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->value = false;
}
;
	return null();
}

//Hashable2_Boolfalse_obj::~Hashable2_Boolfalse_obj() { }

Dynamic Hashable2_Boolfalse_obj::__CreateEmpty() { return  new Hashable2_Boolfalse_obj; }
hx::ObjectPtr< Hashable2_Boolfalse_obj > Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< Hashable2_Boolfalse_obj > result = new Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

Dynamic Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hashable2_Boolfalse_obj > result = new Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

Void Hashable2_Boolfalse_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","free",0xac92b6a1,"zpp_nape.util.Hashable2_Boolfalse.free","zpp_nape/util/FastHash.hx",208,0x5d785189)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,free,(void))

Void Hashable2_Boolfalse_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","alloc",0x6eda40e0,"zpp_nape.util.Hashable2_Boolfalse.alloc","zpp_nape/util/FastHash.hx",211,0x5d785189)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,alloc,(void))

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::zpp_pool;

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::get( int id,int di,bool val){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","get",0x16969c41,"zpp_nape.util.Hashable2_Boolfalse.get","zpp_nape/util/FastHash.hx",214,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(215)
	::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
				HX_STACK_LINE(215)
				::zpp_nape::util::Hashable2_Boolfalse _g = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(215)
				ret1 = _g;
			}
			else{
				HX_STACK_LINE(215)
				ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
				HX_STACK_LINE(215)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
				HX_STACK_LINE(215)
				ret1->next = null();
			}
			HX_STACK_LINE(215)
			Dynamic();
		}
		HX_STACK_LINE(215)
		ret1->id = id;
		HX_STACK_LINE(215)
		ret1->di = di;
		HX_STACK_LINE(215)
		ret = ret1;
	}
	HX_STACK_LINE(216)
	ret->value = val;
	HX_STACK_LINE(217)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,get,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::getpersist( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","getpersist",0x4ef4fff3,"zpp_nape.util.Hashable2_Boolfalse.getpersist","zpp_nape/util/FastHash.hx",220,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(221)
	::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(223)
		if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
			HX_STACK_LINE(224)
			::zpp_nape::util::Hashable2_Boolfalse _g = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			ret = _g;
		}
		else{
			HX_STACK_LINE(230)
			ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
			HX_STACK_LINE(231)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
			HX_STACK_LINE(232)
			ret->next = null();
		}
		HX_STACK_LINE(237)
		Dynamic();
	}
	HX_STACK_LINE(239)
	ret->id = id;
	HX_STACK_LINE(240)
	ret->di = di;
	HX_STACK_LINE(241)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,getpersist,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get( int id,int di,bool val){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","ordered_get",0x2e30472f,"zpp_nape.util.Hashable2_Boolfalse.ordered_get","zpp_nape/util/FastHash.hx",245,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(245)
	if (((id <= di))){
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse _g = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(245)
					ret1 = _g;
				}
				else{
					HX_STACK_LINE(245)
					ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(245)
					ret1->next = null();
				}
				HX_STACK_LINE(245)
				Dynamic();
			}
			HX_STACK_LINE(245)
			ret1->id = id;
			HX_STACK_LINE(245)
			ret1->di = di;
			HX_STACK_LINE(245)
			ret = ret1;
		}
		HX_STACK_LINE(245)
		ret->value = val;
		HX_STACK_LINE(245)
		return ret;
	}
	else{
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse _g1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(245)
					ret1 = _g1;
				}
				else{
					HX_STACK_LINE(245)
					ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(245)
					ret1->next = null();
				}
				HX_STACK_LINE(245)
				Dynamic();
			}
			HX_STACK_LINE(245)
			ret1->id = di;
			HX_STACK_LINE(245)
			ret1->di = id;
			HX_STACK_LINE(245)
			ret = ret1;
		}
		HX_STACK_LINE(245)
		ret->value = val;
		HX_STACK_LINE(245)
		return ret;
	}
	HX_STACK_LINE(245)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,ordered_get,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get_persist( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","ordered_get_persist",0x49cb09c4,"zpp_nape.util.Hashable2_Boolfalse.ordered_get_persist","zpp_nape/util/FastHash.hx",249,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(249)
	if (((id <= di))){
		HX_STACK_LINE(249)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
				HX_STACK_LINE(249)
				::zpp_nape::util::Hashable2_Boolfalse _g = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(249)
				ret = _g;
			}
			else{
				HX_STACK_LINE(249)
				ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
				HX_STACK_LINE(249)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
				HX_STACK_LINE(249)
				ret->next = null();
			}
			HX_STACK_LINE(249)
			Dynamic();
		}
		HX_STACK_LINE(249)
		ret->id = id;
		HX_STACK_LINE(249)
		ret->di = di;
		HX_STACK_LINE(249)
		return ret;
	}
	else{
		HX_STACK_LINE(250)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
				HX_STACK_LINE(250)
				::zpp_nape::util::Hashable2_Boolfalse _g1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(250)
				ret = _g1;
			}
			else{
				HX_STACK_LINE(250)
				ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
				HX_STACK_LINE(250)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
				HX_STACK_LINE(250)
				ret->next = null();
			}
			HX_STACK_LINE(250)
			Dynamic();
		}
		HX_STACK_LINE(250)
		ret->id = di;
		HX_STACK_LINE(250)
		ret->di = id;
		HX_STACK_LINE(250)
		return ret;
	}
	HX_STACK_LINE(249)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,ordered_get_persist,return )


Hashable2_Boolfalse_obj::Hashable2_Boolfalse_obj()
{
}

void Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(hnext,"hnext");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_END_CLASS();
}

void Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(hnext,"hnext");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
}

Dynamic Hashable2_Boolfalse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"hnext") ) { return hnext; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getpersist") ) { return getpersist_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { return ordered_get_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ordered_get_persist") ) { return ordered_get_persist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hnext") ) { hnext=inValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("hnext"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("di"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("getpersist"),
	HX_CSTRING("ordered_get"),
	HX_CSTRING("ordered_get_persist"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Hashable2_Boolfalse_obj,value),HX_CSTRING("value")},
	{hx::fsObject /*::zpp_nape::util::Hashable2_Boolfalse*/ ,(int)offsetof(Hashable2_Boolfalse_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::util::Hashable2_Boolfalse*/ ,(int)offsetof(Hashable2_Boolfalse_obj,hnext),HX_CSTRING("hnext")},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,di),HX_CSTRING("di")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("value"),
	HX_CSTRING("next"),
	HX_CSTRING("hnext"),
	HX_CSTRING("id"),
	HX_CSTRING("di"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hashable2_Boolfalse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hashable2_Boolfalse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#endif

Class Hashable2_Boolfalse_obj::__mClass;

void Hashable2_Boolfalse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.Hashable2_Boolfalse"), hx::TCanCast< Hashable2_Boolfalse_obj> ,sStaticFields,sMemberFields,
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

void Hashable2_Boolfalse_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
