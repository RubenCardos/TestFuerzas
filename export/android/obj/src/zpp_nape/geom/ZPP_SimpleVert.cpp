#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","new",0xe715762b,"zpp_nape.geom.ZPP_SimpleVert.new","zpp_nape/geom/Simple.hx",174,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(205)
	this->node = null();
	HX_STACK_LINE(180)
	this->next = null();
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(178)
	this->links = null();
	HX_STACK_LINE(177)
	this->y = 0.0;
	HX_STACK_LINE(176)
	this->x = 0.0;
	HX_STACK_LINE(175)
	this->forced = false;
	HX_STACK_LINE(217)
	int _g = ::zpp_nape::ZPP_ID_obj::ZPP_SimpleVert();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(217)
	this->id = _g;
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(219)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(220)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g1 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(220)
			this->links = _g1;
		}
		else{
			HX_STACK_LINE(226)
			this->links = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(227)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = this->links->next;
			HX_STACK_LINE(228)
			this->links->next = null();
		}
		HX_STACK_LINE(233)
		Dynamic();
	}
	HX_STACK_LINE(235)
	this->links->lt = ::zpp_nape::geom::ZPP_SimpleVert_obj::less_xy_dyn();
}
;
	return null();
}

//ZPP_SimpleVert_obj::~ZPP_SimpleVert_obj() { }

Dynamic ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_SimpleVert_obj > ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleVert_obj > result = new ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleVert_obj > result = new ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Void ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","free",0x46720881,"zpp_nape.geom.ZPP_SimpleVert.free","zpp_nape/geom/Simple.hx",208,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		this->links->clear();
		HX_STACK_LINE(210)
		this->node = null();
		HX_STACK_LINE(211)
		this->forced = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,free,(void))

Void ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","alloc",0x78629300,"zpp_nape.geom.ZPP_SimpleVert.alloc","zpp_nape/geom/Simple.hx",215,0x62f156db)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,alloc,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::zpp_pool;

bool ZPP_SimpleVert_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","less_xy",0x4bca30b2,"zpp_nape.geom.ZPP_SimpleVert.less_xy","zpp_nape/geom/Simple.hx",238,0x62f156db)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(238)
	return (bool((p->y < q->y)) || bool((bool((p->y == q->y)) && bool((p->x < q->x)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,less_xy,return )

Void ZPP_SimpleVert_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","swap_nodes",0xaac053da,"zpp_nape.geom.ZPP_SimpleVert.swap_nodes","zpp_nape/geom/Simple.hx",240,0x62f156db)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(242)
		p->node = q->node;
		HX_STACK_LINE(243)
		q->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,swap_nodes,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::get( Float x,Float y){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","get",0xe7102661,"zpp_nape.geom.ZPP_SimpleVert.get","zpp_nape/geom/Simple.hx",246,0x62f156db)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(247)
	::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_SimpleVert _g = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			ret = _g;
		}
		else{
			HX_STACK_LINE(256)
			ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(258)
			ret->next = null();
		}
		HX_STACK_LINE(263)
		Dynamic();
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(266)
		ret->x = x;
		HX_STACK_LINE(267)
		ret->y = y;
		HX_STACK_LINE(276)
		{
		}
	}
	HX_STACK_LINE(285)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,get,return )


ZPP_SimpleVert_obj::ZPP_SimpleVert_obj()
{
}

void ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(links,"links");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(links,"links");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"links") ) { return links; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { return less_xy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"links") ) { links=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forced"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("links"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("node"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("less_xy"),
	HX_CSTRING("swap_nodes"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ZPP_SimpleVert_obj,forced),HX_CSTRING("forced")},
	{hx::fsFloat,(int)offsetof(ZPP_SimpleVert_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(ZPP_SimpleVert_obj,y),HX_CSTRING("y")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,links),HX_CSTRING("links")},
	{hx::fsInt,(int)offsetof(ZPP_SimpleVert_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,node),HX_CSTRING("node")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("forced"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("links"),
	HX_CSTRING("id"),
	HX_CSTRING("next"),
	HX_CSTRING("node"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_SimpleVert_obj::__mClass;

void ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleVert"), hx::TCanCast< ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
