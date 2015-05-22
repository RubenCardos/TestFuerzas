#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CbSetManager_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","new",0x664c1caa,"zpp_nape.space.ZPP_CbSetManager.new","zpp_nape/space/Space.hx",1191,0x2b65ed03)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
{
	HX_STACK_LINE(1193)
	this->space = null();
	HX_STACK_LINE(1192)
	this->cbsets = null();
	HX_STACK_LINE(1296)
	{
		HX_STACK_LINE(1297)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1298)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet _g = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1298)
			this->cbsets = _g;
		}
		else{
			HX_STACK_LINE(1304)
			this->cbsets = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1305)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = this->cbsets->next;
			HX_STACK_LINE(1306)
			this->cbsets->next = null();
		}
		HX_STACK_LINE(1311)
		Dynamic();
	}
	HX_STACK_LINE(1313)
	this->cbsets->lt = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt_dyn();
	HX_STACK_LINE(1314)
	this->space = space;
}
;
	return null();
}

//ZPP_CbSetManager_obj::~ZPP_CbSetManager_obj() { }

Dynamic ZPP_CbSetManager_obj::__CreateEmpty() { return  new ZPP_CbSetManager_obj; }
hx::ObjectPtr< ZPP_CbSetManager_obj > ZPP_CbSetManager_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_CbSetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(inArgs[0]);
	return result;}

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSetManager_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","get",0x6646cce0,"zpp_nape.space.ZPP_CbSetManager.get","zpp_nape/space/Space.hx",1194,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cbTypes,"cbTypes")
	HX_STACK_LINE(1195)
	if (((cbTypes->head == null()))){
		HX_STACK_LINE(1195)
		return null();
	}
	HX_STACK_LINE(1198)
	::zpp_nape::callbacks::ZPP_CbSet fake;		HX_STACK_VAR(fake,"fake");
	HX_STACK_LINE(1199)
	{
		HX_STACK_LINE(1200)
		if (((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1201)
			::zpp_nape::callbacks::ZPP_CbSet _g = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1201)
			fake = _g;
		}
		else{
			HX_STACK_LINE(1207)
			fake = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1208)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = fake->next;
			HX_STACK_LINE(1209)
			fake->next = null();
		}
		HX_STACK_LINE(1214)
		Dynamic();
	}
	HX_STACK_LINE(1216)
	::zpp_nape::util::ZNPList_ZPP_CbType faketypes = fake->cbTypes;		HX_STACK_VAR(faketypes,"faketypes");
	HX_STACK_LINE(1217)
	fake->cbTypes = cbTypes;
	HX_STACK_LINE(1218)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet res = this->cbsets->find_weak(fake);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1219)
	::zpp_nape::callbacks::ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1219)
	if (((res != null()))){
		HX_STACK_LINE(1219)
		ret = res->data;
	}
	else{
		HX_STACK_LINE(1220)
		::zpp_nape::callbacks::ZPP_CbSet set = ::zpp_nape::callbacks::ZPP_CbSet_obj::get(cbTypes);		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(1229)
		this->cbsets->insert(set);
		HX_STACK_LINE(1230)
		set->manager = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1231)
		ret = set;
	}
	HX_STACK_LINE(1233)
	fake->cbTypes = faketypes;
	HX_STACK_LINE(1234)
	{
		HX_STACK_LINE(1235)
		::zpp_nape::callbacks::ZPP_CbSet o = fake;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1244)
		{
			HX_STACK_LINE(1244)
			o->listeners->clear();
			HX_STACK_LINE(1244)
			o->zip_listeners = true;
			HX_STACK_LINE(1244)
			o->bodylisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_bodylisteners = true;
			HX_STACK_LINE(1244)
			o->conlisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_conlisteners = true;
			HX_STACK_LINE(1244)
			while((true)){
				HX_STACK_LINE(1244)
				if ((!((!(((o->cbTypes->head == null()))))))){
					HX_STACK_LINE(1244)
					break;
				}
				HX_STACK_LINE(1244)
				::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1244)
				cb->cbsets->remove(o);
			}
			HX_STACK_LINE(1244)
			Dynamic();
		}
		HX_STACK_LINE(1245)
		o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(1246)
		::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1251)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,get,return )

Void ZPP_CbSetManager_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet set){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","remove",0x16b19a3a,"zpp_nape.space.ZPP_CbSetManager.remove","zpp_nape/space/Space.hx",1253,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(set,"set")
		HX_STACK_LINE(1254)
		this->cbsets->remove(set);
		HX_STACK_LINE(1256)
		while((true)){
			HX_STACK_LINE(1256)
			if ((!((!(((set->cbpairs->head == null()))))))){
				HX_STACK_LINE(1256)
				break;
			}
			HX_STACK_LINE(1257)
			::zpp_nape::callbacks::ZPP_CbSetPair pair = set->cbpairs->pop_unsafe();		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(1258)
			{
				HX_STACK_LINE(1259)
				if (((pair->a != pair->b))){
					HX_STACK_LINE(1260)
					if (((set == pair->a))){
						HX_STACK_LINE(1260)
						pair->b->cbpairs->remove(pair);
					}
					else{
						HX_STACK_LINE(1261)
						pair->a->cbpairs->remove(pair);
					}
				}
				HX_STACK_LINE(1263)
				{
					HX_STACK_LINE(1264)
					::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::callbacks::ZPP_CbSet _g = o->b = null();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1273)
						o->a = _g;
						HX_STACK_LINE(1273)
						o->listeners->clear();
					}
					HX_STACK_LINE(1274)
					o->next = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(1275)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1283)
		set->manager = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,remove,(void))

Void ZPP_CbSetManager_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","clear",0x5636e457,"zpp_nape.space.ZPP_CbSetManager.clear","zpp_nape/space/Space.hx",1286,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,clear,(void))

Void ZPP_CbSetManager_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","validate",0xb1c0b80c,"zpp_nape.space.ZPP_CbSetManager.validate","zpp_nape/space/Space.hx",1328,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1328)
		if ((!(this->cbsets->empty()))){
			HX_STACK_LINE(1329)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->cbsets->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1330)
			while((true)){
				HX_STACK_LINE(1330)
				if ((!(((set_ite->prev != null()))))){
					HX_STACK_LINE(1330)
					break;
				}
				HX_STACK_LINE(1330)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1331)
			while((true)){
				HX_STACK_LINE(1331)
				if ((!(((set_ite != null()))))){
					HX_STACK_LINE(1331)
					break;
				}
				HX_STACK_LINE(1332)
				::zpp_nape::callbacks::ZPP_CbSet cb = set_ite->data;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1333)
				cb->validate();
				HX_STACK_LINE(1334)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(1335)
					set_ite = set_ite->next;
					HX_STACK_LINE(1336)
					while((true)){
						HX_STACK_LINE(1336)
						if ((!(((set_ite->prev != null()))))){
							HX_STACK_LINE(1336)
							break;
						}
						HX_STACK_LINE(1336)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1339)
					while((true)){
						HX_STACK_LINE(1339)
						if ((!(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))))){
							HX_STACK_LINE(1339)
							break;
						}
						HX_STACK_LINE(1339)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1340)
					set_ite = set_ite->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,validate,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetManager_obj::pair( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","pair",0x1d9c5090,"zpp_nape.space.ZPP_CbSetManager.pair","zpp_nape/space/Space.hx",1348,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1349)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1350)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs;		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(1350)
	if (((a->cbpairs->length < b->cbpairs->length))){
		HX_STACK_LINE(1350)
		pairs = a->cbpairs;
	}
	else{
		HX_STACK_LINE(1350)
		pairs = b->cbpairs;
	}
	HX_STACK_LINE(1351)
	{
		HX_STACK_LINE(1352)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1353)
		while((true)){
			HX_STACK_LINE(1353)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1353)
				break;
			}
			HX_STACK_LINE(1354)
			::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1356)
			if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
				HX_STACK_LINE(1357)
				ret = p;
				HX_STACK_LINE(1358)
				break;
			}
			HX_STACK_LINE(1361)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1364)
	if (((ret == null()))){
		HX_STACK_LINE(1365)
		::zpp_nape::callbacks::ZPP_CbSetPair _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1365)
		{
			HX_STACK_LINE(1365)
			::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair _g = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1365)
					ret1 = _g;
				}
				else{
					HX_STACK_LINE(1365)
					ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(1365)
					ret1->next = null();
				}
				HX_STACK_LINE(1365)
				ret1->zip_listeners = true;
			}
			HX_STACK_LINE(1365)
			if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
				HX_STACK_LINE(1365)
				ret1->a = a;
				HX_STACK_LINE(1365)
				ret1->b = b;
			}
			else{
				HX_STACK_LINE(1365)
				ret1->a = b;
				HX_STACK_LINE(1365)
				ret1->b = a;
			}
			HX_STACK_LINE(1365)
			_g1 = ret1;
		}
		HX_STACK_LINE(1365)
		ret = _g1;
		HX_STACK_LINE(1366)
		a->cbpairs->add(ret);
		HX_STACK_LINE(1367)
		if (((b != a))){
			HX_STACK_LINE(1367)
			b->cbpairs->add(ret);
		}
	}
	HX_STACK_LINE(1369)
	if ((ret->zip_listeners)){
		HX_STACK_LINE(1369)
		ret->zip_listeners = false;
		HX_STACK_LINE(1369)
		ret->__validate();
	}
	HX_STACK_LINE(1370)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetManager_obj,pair,return )

bool ZPP_CbSetManager_obj::valid_listener( ::zpp_nape::callbacks::ZPP_Listener i){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","valid_listener",0x2197e74d,"zpp_nape.space.ZPP_CbSetManager.valid_listener","zpp_nape/space/Space.hx",1375,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(1375)
	return (i->space == this->space);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,valid_listener,return )


ZPP_CbSetManager_obj::ZPP_CbSetManager_obj()
{
}

void ZPP_CbSetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetManager);
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(space,"space");
}

Dynamic ZPP_CbSetManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"valid_listener") ) { return valid_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbSetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cbsets"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSetManager_obj,cbsets),HX_CSTRING("cbsets")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_CbSetManager_obj,space),HX_CSTRING("space")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cbsets"),
	HX_CSTRING("space"),
	HX_CSTRING("get"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("validate"),
	HX_CSTRING("pair"),
	HX_CSTRING("valid_listener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

#endif

Class ZPP_CbSetManager_obj::__mClass;

void ZPP_CbSetManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CbSetManager"), hx::TCanCast< ZPP_CbSetManager_obj> ,sStaticFields,sMemberFields,
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

void ZPP_CbSetManager_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace space
