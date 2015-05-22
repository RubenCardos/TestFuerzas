#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void GeomVertexIterator_obj::__construct()
{
HX_STACK_FRAME("nape.geom.GeomVertexIterator","new",0x2010c04c,"nape.geom.GeomVertexIterator.new","nape/geom/GeomVertexIterator.hx",188,0x93c1d444)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GeomVertexIterator_obj::~GeomVertexIterator_obj() { }

Dynamic GeomVertexIterator_obj::__CreateEmpty() { return  new GeomVertexIterator_obj; }
hx::ObjectPtr< GeomVertexIterator_obj > GeomVertexIterator_obj::__new()
{  hx::ObjectPtr< GeomVertexIterator_obj > result = new GeomVertexIterator_obj();
	result->__construct();
	return result;}

Dynamic GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomVertexIterator_obj > result = new GeomVertexIterator_obj();
	result->__construct();
	return result;}

bool GeomVertexIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.geom.GeomVertexIterator","hasNext",0x6d37fb59,"nape.geom.GeomVertexIterator.hasNext","nape/geom/GeomVertexIterator.hx",200,0x93c1d444)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	bool ret = (bool((this->zpp_inner->ptr != this->zpp_inner->start)) || bool(this->zpp_inner->first));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(207)
	this->zpp_inner->first = false;
	HX_STACK_LINE(208)
	if ((!(ret))){
		HX_STACK_LINE(210)
		::zpp_nape::geom::ZPP_GeomVertexIterator o = this->zpp_inner;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			o->outer->zpp_inner = null();
			HX_STACK_LINE(219)
			::zpp_nape::geom::ZPP_GeomVert _g = o->start = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			o->ptr = _g;
		}
		HX_STACK_LINE(220)
		o->next = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = o;
	}
	HX_STACK_LINE(227)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,hasNext,return )

::nape::geom::Vec2 GeomVertexIterator_obj::next( ){
	HX_STACK_FRAME("nape.geom.GeomVertexIterator","next",0xee978387,"nape.geom.GeomVertexIterator.next","nape/geom/GeomVertexIterator.hx",237,0x93c1d444)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		::zpp_nape::geom::ZPP_GeomVert _this = this->zpp_inner->ptr;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(243)
		if (((_this->wrap == null()))){
			HX_STACK_LINE(243)
			::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				Float x = _this->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(243)
				Float y = _this->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(243)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(243)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(243)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(243)
					::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(243)
					ret1 = _g;
				}
				else{
					HX_STACK_LINE(243)
					ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(243)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
					HX_STACK_LINE(243)
					ret1->zpp_pool = null();
				}
				HX_STACK_LINE(243)
				if (((ret1->zpp_inner == null()))){
					HX_STACK_LINE(243)
					::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(243)
					{
						HX_STACK_LINE(243)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(243)
						::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(243)
								ret2 = _g1;
							}
							else{
								HX_STACK_LINE(243)
								ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
								HX_STACK_LINE(243)
								ret2->next = null();
							}
							HX_STACK_LINE(243)
							ret2->weak = false;
						}
						HX_STACK_LINE(243)
						ret2->_immutable = immutable;
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							ret2->x = x;
							HX_STACK_LINE(243)
							ret2->y = y;
							HX_STACK_LINE(243)
							{
							}
						}
						HX_STACK_LINE(243)
						_g2 = ret2;
					}
					HX_STACK_LINE(243)
					ret1->zpp_inner = _g2;
					HX_STACK_LINE(243)
					ret1->zpp_inner->outer = ret1;
				}
				else{
					HX_STACK_LINE(243)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(243)
					{
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(243)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(243)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(243)
						_g3 = ret1->zpp_inner->x;
					}
					struct _Function_5_1{
						inline static bool Block( ::nape::geom::Vec2 &ret1,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomVertexIterator.hx",243,0x93c1d444)
							{
								HX_STACK_LINE(243)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(243)
								{
									HX_STACK_LINE(243)
									{
										HX_STACK_LINE(243)
										::zpp_nape::geom::ZPP_Vec2 _this1 = ret1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(243)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(243)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(243)
									_g4 = ret1->zpp_inner->y;
								}
								HX_STACK_LINE(243)
								return (_g4 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(243)
					if ((!(((  (((_g3 == x))) ? bool(_Function_5_1::Block(ret1,y)) : bool(false) ))))){
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							ret1->zpp_inner->x = x;
							HX_STACK_LINE(243)
							ret1->zpp_inner->y = y;
							HX_STACK_LINE(243)
							{
							}
						}
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(243)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(243)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(243)
					ret1;
				}
				HX_STACK_LINE(243)
				ret1->zpp_inner->weak = weak;
				HX_STACK_LINE(243)
				_g5 = ret1;
			}
			HX_STACK_LINE(243)
			_this->wrap = _g5;
			HX_STACK_LINE(243)
			_this->wrap->zpp_inner->_inuse = true;
			HX_STACK_LINE(243)
			_this->wrap->zpp_inner->_invalidate = _this->modwrap_dyn();
			HX_STACK_LINE(243)
			_this->wrap->zpp_inner->_validate = _this->getwrap_dyn();
		}
		HX_STACK_LINE(243)
		ret = _this->wrap;
	}
	HX_STACK_LINE(244)
	if ((this->zpp_inner->forward)){
		HX_STACK_LINE(244)
		this->zpp_inner->ptr = this->zpp_inner->ptr->next;
	}
	else{
		HX_STACK_LINE(244)
		this->zpp_inner->ptr = this->zpp_inner->ptr->prev;
	}
	HX_STACK_LINE(245)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,next,return )


GeomVertexIterator_obj::GeomVertexIterator_obj()
{
}

void GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomVertexIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic GeomVertexIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeomVertexIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(int)offsetof(GeomVertexIterator_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

#endif

Class GeomVertexIterator_obj::__mClass;

void GeomVertexIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.GeomVertexIterator"), hx::TCanCast< GeomVertexIterator_obj> ,sStaticFields,sMemberFields,
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

void GeomVertexIterator_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
