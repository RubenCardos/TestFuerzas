#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","new",0x62fb3123,"zpp_nape.dynamics.ZPP_SensorArbiter.new","zpp_nape/dynamics/Arbiter.hx",356,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(357)
	this->next = null();
	HX_STACK_LINE(407)
	super::__construct();
	HX_STACK_LINE(408)
	this->type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;
	HX_STACK_LINE(409)
	this->sensorarb = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_SensorArbiter_obj::~ZPP_SensorArbiter_obj() { }

Dynamic ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZPP_SensorArbiter_obj > ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_SensorArbiter_obj > result = new ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SensorArbiter_obj > result = new ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Void ZPP_SensorArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","alloc",0x0566fbf8,"zpp_nape.dynamics.ZPP_SensorArbiter.alloc","zpp_nape/dynamics/Arbiter.hx",385,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,alloc,(void))

Void ZPP_SensorArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","free",0x338fe689,"zpp_nape.dynamics.ZPP_SensorArbiter.free","zpp_nape/dynamics/Arbiter.hx",397,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,free,(void))

Void ZPP_SensorArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","assign",0xc11f814c,"zpp_nape.dynamics.ZPP_SensorArbiter.assign","zpp_nape/dynamics/Arbiter.hx",414,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(414)
		this->b1 = s1->body;
		HX_STACK_LINE(414)
		this->ws1 = s1;
		HX_STACK_LINE(414)
		this->b2 = s2->body;
		HX_STACK_LINE(414)
		this->ws2 = s2;
		HX_STACK_LINE(414)
		this->id = id;
		HX_STACK_LINE(414)
		this->di = di;
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(414)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(414)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter _g = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(414)
						ret = _g;
					}
					else{
						HX_STACK_LINE(414)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(414)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(414)
						ret->next = null();
					}
					HX_STACK_LINE(414)
					Dynamic();
				}
				HX_STACK_LINE(414)
				ret->elt = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(414)
				temp = ret;
			}
			HX_STACK_LINE(414)
			temp->next = _this->head;
			HX_STACK_LINE(414)
			_this->head = temp;
			HX_STACK_LINE(414)
			_this->modified = true;
			HX_STACK_LINE(414)
			(_this->length)++;
			HX_STACK_LINE(414)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(414)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(414)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter _g1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(414)
						ret = _g1;
					}
					else{
						HX_STACK_LINE(414)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(414)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(414)
						ret->next = null();
					}
					HX_STACK_LINE(414)
					Dynamic();
				}
				HX_STACK_LINE(414)
				ret->elt = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(414)
				temp = ret;
			}
			HX_STACK_LINE(414)
			temp->next = _this->head;
			HX_STACK_LINE(414)
			_this->head = temp;
			HX_STACK_LINE(414)
			_this->modified = true;
			HX_STACK_LINE(414)
			(_this->length)++;
			HX_STACK_LINE(414)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(414)
		this->active = true;
		HX_STACK_LINE(414)
		this->present = (int)0;
		HX_STACK_LINE(414)
		this->cleared = false;
		HX_STACK_LINE(414)
		this->sleeping = false;
		HX_STACK_LINE(414)
		this->fresh = false;
		HX_STACK_LINE(414)
		this->presentable = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_SensorArbiter_obj,assign,(void))

Void ZPP_SensorArbiter_obj::retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","retire",0x7e3dc4b8,"zpp_nape.dynamics.ZPP_SensorArbiter.retire","zpp_nape/dynamics/Arbiter.hx",418,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			if ((!(this->cleared))){
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(419)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(419)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(419)
						while((true)){
							HX_STACK_LINE(419)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(419)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(419)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(419)
									if (((pre == null()))){
										HX_STACK_LINE(419)
										old = _this->head;
										HX_STACK_LINE(419)
										ret1 = old->next;
										HX_STACK_LINE(419)
										_this->head = ret1;
										HX_STACK_LINE(419)
										if (((_this->head == null()))){
											HX_STACK_LINE(419)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(419)
										old = pre->next;
										HX_STACK_LINE(419)
										ret1 = old->next;
										HX_STACK_LINE(419)
										pre->next = ret1;
										HX_STACK_LINE(419)
										if (((ret1 == null()))){
											HX_STACK_LINE(419)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(419)
										o->elt = null();
										HX_STACK_LINE(419)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(419)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(419)
									_this->modified = true;
									HX_STACK_LINE(419)
									(_this->length)--;
									HX_STACK_LINE(419)
									_this->pushmod = true;
									HX_STACK_LINE(419)
									ret1;
								}
								HX_STACK_LINE(419)
								ret = true;
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(419)
							pre = cur;
							HX_STACK_LINE(419)
							cur = cur->next;
						}
						HX_STACK_LINE(419)
						ret;
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(419)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(419)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(419)
						while((true)){
							HX_STACK_LINE(419)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(419)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(419)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(419)
									if (((pre == null()))){
										HX_STACK_LINE(419)
										old = _this->head;
										HX_STACK_LINE(419)
										ret1 = old->next;
										HX_STACK_LINE(419)
										_this->head = ret1;
										HX_STACK_LINE(419)
										if (((_this->head == null()))){
											HX_STACK_LINE(419)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(419)
										old = pre->next;
										HX_STACK_LINE(419)
										ret1 = old->next;
										HX_STACK_LINE(419)
										pre->next = ret1;
										HX_STACK_LINE(419)
										if (((ret1 == null()))){
											HX_STACK_LINE(419)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(419)
										o->elt = null();
										HX_STACK_LINE(419)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(419)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(419)
									_this->modified = true;
									HX_STACK_LINE(419)
									(_this->length)--;
									HX_STACK_LINE(419)
									_this->pushmod = true;
									HX_STACK_LINE(419)
									ret1;
								}
								HX_STACK_LINE(419)
								ret = true;
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(419)
							pre = cur;
							HX_STACK_LINE(419)
							cur = cur->next;
						}
						HX_STACK_LINE(419)
						ret;
					}
				}
				HX_STACK_LINE(419)
				if (((this->pair != null()))){
					HX_STACK_LINE(419)
					this->pair->arb = null();
					HX_STACK_LINE(419)
					this->pair = null();
				}
			}
			HX_STACK_LINE(419)
			::zpp_nape::phys::ZPP_Body _g = this->b2 = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			this->b1 = _g;
			HX_STACK_LINE(419)
			this->active = false;
			HX_STACK_LINE(419)
			this->intchange = false;
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(421)
			::zpp_nape::dynamics::ZPP_SensorArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(431)
			o->next = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(432)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,retire,(void))

Void ZPP_SensorArbiter_obj::makemutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","makemutable",0x14ebdb3b,"zpp_nape.dynamics.ZPP_SensorArbiter.makemutable","zpp_nape/dynamics/Arbiter.hx",440,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,makemutable,(void))

Void ZPP_SensorArbiter_obj::makeimmutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SensorArbiter","makeimmutable",0x28a85317,"zpp_nape.dynamics.ZPP_SensorArbiter.makeimmutable","zpp_nape/dynamics/Arbiter.hx",443,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,makeimmutable,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZPP_SensorArbiter_obj::zpp_pool;


ZPP_SensorArbiter_obj::ZPP_SensorArbiter_obj()
{
}

void ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_SensorArbiter*/ ,(int)offsetof(ZPP_SensorArbiter_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("assign"),
	HX_CSTRING("retire"),
	HX_CSTRING("makemutable"),
	HX_CSTRING("makeimmutable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_SensorArbiter_obj::__mClass;

void ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_SensorArbiter"), hx::TCanCast< ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SensorArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
