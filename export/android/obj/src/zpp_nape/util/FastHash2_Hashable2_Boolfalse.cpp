#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void FastHash2_Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","new",0x1bb1f814,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.new","zpp_nape/util/FastHash.hx",256,0x5d785189)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(258)
	this->cnt = (int)0;
	HX_STACK_LINE(257)
	this->table = null();
	HX_STACK_LINE(260)
	this->cnt = (int)0;
	HX_STACK_LINE(262)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(262)
	this->table = _g;
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(263)
		int _g2 = (int)1048576;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(263)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			this->table->push(null());
		}
	}
}
;
	return null();
}

//FastHash2_Hashable2_Boolfalse_obj::~FastHash2_Hashable2_Boolfalse_obj() { }

Dynamic FastHash2_Hashable2_Boolfalse_obj::__CreateEmpty() { return  new FastHash2_Hashable2_Boolfalse_obj; }
hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > FastHash2_Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

bool FastHash2_Hashable2_Boolfalse_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","empty",0xbcd8b741,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.empty","zpp_nape/util/FastHash.hx",269,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return (this->cnt == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,empty,return )

Void FastHash2_Hashable2_Boolfalse_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","clear",0x9559ee41,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.clear","zpp_nape/util/FastHash.hx",273,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(273)
		int _g = this->table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		while((true)){
			HX_STACK_LINE(273)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(273)
				break;
			}
			HX_STACK_LINE(273)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(274)
			::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(i).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(275)
			if (((n == null()))){
				HX_STACK_LINE(275)
				continue;
			}
			HX_STACK_LINE(276)
			while((true)){
				HX_STACK_LINE(276)
				if ((!(((n != null()))))){
					HX_STACK_LINE(276)
					break;
				}
				HX_STACK_LINE(277)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(278)
				n->hnext = null();
				HX_STACK_LINE(279)
				n;
				HX_STACK_LINE(280)
				n = t;
			}
			HX_STACK_LINE(282)
			this->table[i] = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,clear,(void))

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::get( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","get",0x1baca84a,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.get","zpp_nape/util/FastHash.hx",288,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(289)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(290)
	if (((n == null()))){
		HX_STACK_LINE(290)
		return null();
	}
	else{
		HX_STACK_LINE(291)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(291)
			return n;
		}
		else{
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				n = n->hnext;
				HX_STACK_LINE(293)
				if ((!(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di)))))))))){
					HX_STACK_LINE(293)
					break;
				}
			}
			HX_STACK_LINE(294)
			return n;
		}
	}
	HX_STACK_LINE(290)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,get,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::ordered_get( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","ordered_get",0xf4af0438,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.ordered_get","zpp_nape/util/FastHash.hx",299,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(300)
	if (((id > di))){
		HX_STACK_LINE(301)
		int t = id;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(302)
		id = di;
		HX_STACK_LINE(303)
		di = t;
	}
	HX_STACK_LINE(305)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(305)
	if (((n == null()))){
		HX_STACK_LINE(305)
		return null();
	}
	else{
		HX_STACK_LINE(305)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(305)
			return n;
		}
		else{
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				n = n->hnext;
				HX_STACK_LINE(305)
				if ((!(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di)))))))))){
					HX_STACK_LINE(305)
					break;
				}
			}
			HX_STACK_LINE(305)
			return n;
		}
	}
	HX_STACK_LINE(305)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,ordered_get,return )

bool FastHash2_Hashable2_Boolfalse_obj::has( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","has",0x1bad670e,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.has","zpp_nape/util/FastHash.hx",307,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(308)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(309)
	if (((n == null()))){
		HX_STACK_LINE(309)
		return false;
	}
	else{
		HX_STACK_LINE(310)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(310)
			return true;
		}
		else{
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				n = n->hnext;
				HX_STACK_LINE(312)
				if ((!(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di)))))))))){
					HX_STACK_LINE(312)
					break;
				}
			}
			HX_STACK_LINE(313)
			return (n != null());
		}
	}
	HX_STACK_LINE(309)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,has,return )

Void FastHash2_Hashable2_Boolfalse_obj::maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","maybeAdd",0x00b5bb25,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.maybeAdd","zpp_nape/util/FastHash.hx",316,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(325)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(326)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(327)
		bool cont = true;		HX_STACK_VAR(cont,"cont");
		HX_STACK_LINE(328)
		if (((n == null()))){
			HX_STACK_LINE(329)
			this->table[h] = arb;
			HX_STACK_LINE(330)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(343)
			if ((cont)){
				HX_STACK_LINE(344)
				arb->hnext = n->hnext;
				HX_STACK_LINE(345)
				n->hnext = arb;
			}
		}
		HX_STACK_LINE(348)
		if ((cont)){
			HX_STACK_LINE(348)
			(this->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,maybeAdd,(void))

Void FastHash2_Hashable2_Boolfalse_obj::add( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","add",0x1ba819d5,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.add","zpp_nape/util/FastHash.hx",350,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(359)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(360)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(361)
		if (((n == null()))){
			HX_STACK_LINE(362)
			this->table[h] = arb;
			HX_STACK_LINE(363)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(373)
			arb->hnext = n->hnext;
			HX_STACK_LINE(374)
			n->hnext = arb;
		}
		HX_STACK_LINE(380)
		(this->cnt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,add,(void))

Void FastHash2_Hashable2_Boolfalse_obj::remove( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","remove",0x16373d10,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.remove","zpp_nape/util/FastHash.hx",382,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(391)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(392)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(393)
		if (((n == arb))){
			HX_STACK_LINE(393)
			this->table[h] = n->hnext;
		}
		else{
			HX_STACK_LINE(394)
			if (((n != null()))){
				HX_STACK_LINE(395)
				::zpp_nape::util::Hashable2_Boolfalse pre;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(396)
				while((true)){
					HX_STACK_LINE(397)
					pre = n;
					HX_STACK_LINE(398)
					n = n->hnext;
					HX_STACK_LINE(396)
					if ((!(((bool((n != null())) && bool((n != arb))))))){
						HX_STACK_LINE(396)
						break;
					}
				}
				HX_STACK_LINE(409)
				pre->hnext = n->hnext;
			}
		}
		HX_STACK_LINE(411)
		arb->hnext = null();
		HX_STACK_LINE(412)
		(this->cnt)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,remove,(void))

int FastHash2_Hashable2_Boolfalse_obj::hash( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","hash",0x1c0cc59a,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.hash","zpp_nape/util/FastHash.hx",417,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(417)
	return (int(((id * (int)106039) + di)) & int((int)1048575));
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,hash,return )


FastHash2_Hashable2_Boolfalse_obj::FastHash2_Hashable2_Boolfalse_obj()
{
}

void FastHash2_Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastHash2_Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(table,"table");
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_END_CLASS();
}

void FastHash2_Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(table,"table");
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { return table; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maybeAdd") ) { return maybeAdd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { return ordered_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastHash2_Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("table"));
	outFields->push(HX_CSTRING("cnt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FastHash2_Hashable2_Boolfalse_obj,table),HX_CSTRING("table")},
	{hx::fsInt,(int)offsetof(FastHash2_Hashable2_Boolfalse_obj,cnt),HX_CSTRING("cnt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("table"),
	HX_CSTRING("cnt"),
	HX_CSTRING("empty"),
	HX_CSTRING("clear"),
	HX_CSTRING("get"),
	HX_CSTRING("ordered_get"),
	HX_CSTRING("has"),
	HX_CSTRING("maybeAdd"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("hash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

#endif

Class FastHash2_Hashable2_Boolfalse_obj::__mClass;

void FastHash2_Hashable2_Boolfalse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.FastHash2_Hashable2_Boolfalse"), hx::TCanCast< FastHash2_Hashable2_Boolfalse_obj> ,sStaticFields,sMemberFields,
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

void FastHash2_Hashable2_Boolfalse_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
