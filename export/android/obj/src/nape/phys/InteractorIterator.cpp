#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace phys{

Void InteractorIterator_obj::__construct()
{
HX_STACK_FRAME("nape.phys.InteractorIterator","new",0x705eac8f,"nape.phys.InteractorIterator.new","nape/phys/InteractorIterator.hx",178,0x5f4f6161)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(198)
	this->zpp_next = null();
	HX_STACK_LINE(190)
	this->zpp_critical = false;
	HX_STACK_LINE(186)
	this->zpp_i = (int)0;
	HX_STACK_LINE(182)
	this->zpp_inner = null();
}
;
	return null();
}

//InteractorIterator_obj::~InteractorIterator_obj() { }

Dynamic InteractorIterator_obj::__CreateEmpty() { return  new InteractorIterator_obj; }
hx::ObjectPtr< InteractorIterator_obj > InteractorIterator_obj::__new()
{  hx::ObjectPtr< InteractorIterator_obj > result = new InteractorIterator_obj();
	result->__construct();
	return result;}

Dynamic InteractorIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractorIterator_obj > result = new InteractorIterator_obj();
	result->__construct();
	return result;}

bool InteractorIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.phys.InteractorIterator","hasNext",0x8cc4c51c,"nape.phys.InteractorIterator.hasNext","nape/phys/InteractorIterator.hx",240,0x5f4f6161)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::nape::phys::InteractorList _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(244)
		_this->zpp_inner->valmod();
		HX_STACK_LINE(244)
		if ((_this->zpp_inner->zip_length)){
			HX_STACK_LINE(244)
			_this->zpp_inner->zip_length = false;
			HX_STACK_LINE(244)
			_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
		}
		HX_STACK_LINE(244)
		length = _this->zpp_inner->user_length;
	}
	HX_STACK_LINE(245)
	this->zpp_critical = true;
	HX_STACK_LINE(246)
	if (((this->zpp_i < length))){
		HX_STACK_LINE(247)
		return true;
	}
	else{
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(251)
			this->zpp_next = ::nape::phys::InteractorIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::phys::InteractorIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractorIterator_obj,hasNext,return )

::nape::phys::Interactor InteractorIterator_obj::next( ){
	HX_STACK_FRAME("nape.phys.InteractorIterator","next",0xe27851e4,"nape.phys.InteractorIterator.next","nape/phys/InteractorIterator.hx",264,0x5f4f6161)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	int _g = (this->zpp_i)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	return this->zpp_inner->at(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractorIterator_obj,next,return )

::nape::phys::InteractorIterator InteractorIterator_obj::zpp_pool;

::nape::phys::InteractorIterator InteractorIterator_obj::get( ::nape::phys::InteractorList list){
	HX_STACK_FRAME("nape.phys.InteractorIterator","get",0x70595cc5,"nape.phys.InteractorIterator.get","nape/phys/InteractorIterator.hx",217,0x5f4f6161)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::phys::InteractorIterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(218)
	if (((::nape::phys::InteractorIterator_obj::zpp_pool == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_InteractorList_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::phys::InteractorIterator ret1 = ::nape::phys::InteractorIterator_obj::__new();		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_InteractorList_obj::internal = false;
		HX_STACK_LINE(222)
		ret = ret1;
	}
	else{
		HX_STACK_LINE(225)
		::nape::phys::InteractorIterator r = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::phys::InteractorIterator_obj::zpp_pool = r->zpp_next;
		HX_STACK_LINE(227)
		ret = r;
	}
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InteractorIterator_obj,get,return )


InteractorIterator_obj::InteractorIterator_obj()
{
}

void InteractorIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractorIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void InteractorIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic InteractorIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { return zpp_i; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { return zpp_next; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { return zpp_critical; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractorIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::phys::InteractorIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::phys::InteractorIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractorIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("zpp_i"));
	outFields->push(HX_CSTRING("zpp_critical"));
	outFields->push(HX_CSTRING("zpp_next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::InteractorList*/ ,(int)offsetof(InteractorIterator_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{hx::fsInt,(int)offsetof(InteractorIterator_obj,zpp_i),HX_CSTRING("zpp_i")},
	{hx::fsBool,(int)offsetof(InteractorIterator_obj,zpp_critical),HX_CSTRING("zpp_critical")},
	{hx::fsObject /*::nape::phys::InteractorIterator*/ ,(int)offsetof(InteractorIterator_obj,zpp_next),HX_CSTRING("zpp_next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("zpp_i"),
	HX_CSTRING("zpp_critical"),
	HX_CSTRING("zpp_next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractorIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InteractorIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractorIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractorIterator_obj::zpp_pool,"zpp_pool");
};

#endif

Class InteractorIterator_obj::__mClass;

void InteractorIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.InteractorIterator"), hx::TCanCast< InteractorIterator_obj> ,sStaticFields,sMemberFields,
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

void InteractorIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace phys
