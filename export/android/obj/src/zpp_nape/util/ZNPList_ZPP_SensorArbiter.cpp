#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","new",0xa534566c,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.new","zpp_nape/util/Lists.hx",12268,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12278)
	this->length = (int)0;
	HX_STACK_LINE(12277)
	this->pushmod = false;
	HX_STACK_LINE(12276)
	this->modified = false;
	HX_STACK_LINE(12269)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SensorArbiter_obj::~ZNPList_ZPP_SensorArbiter_obj() { }

Dynamic ZNPList_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > ZNPList_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","begin",0xb2ed0b35,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.begin","zpp_nape/util/Lists.hx",12274,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12274)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,begin,return )

Void ZNPList_ZPP_SensorArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","setbegin",0x791ef1bb,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.setbegin","zpp_nape/util/Lists.hx",12281,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(12282)
		this->head = i;
		HX_STACK_LINE(12283)
		this->modified = true;
		HX_STACK_LINE(12284)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","add",0xa52a782d,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.add","zpp_nape/util/Lists.hx",12287,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12287)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12287)
	{
		HX_STACK_LINE(12287)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12287)
		{
			HX_STACK_LINE(12287)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(12287)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(12287)
				ret = _g;
			}
			else{
				HX_STACK_LINE(12287)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12287)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12287)
				ret->next = null();
			}
			HX_STACK_LINE(12287)
			Dynamic();
		}
		HX_STACK_LINE(12287)
		ret->elt = o;
		HX_STACK_LINE(12287)
		temp = ret;
	}
	HX_STACK_LINE(12287)
	temp->next = this->head;
	HX_STACK_LINE(12287)
	this->head = temp;
	HX_STACK_LINE(12287)
	this->modified = true;
	HX_STACK_LINE(12287)
	(this->length)++;
	HX_STACK_LINE(12287)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_add",0xc755be99,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_add","zpp_nape/util/Lists.hx",12291,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12300)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12300)
	{
		HX_STACK_LINE(12301)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12302)
		{
			HX_STACK_LINE(12303)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(12304)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(12304)
				ret = _g;
			}
			else{
				HX_STACK_LINE(12310)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12311)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12312)
				ret->next = null();
			}
			HX_STACK_LINE(12317)
			Dynamic();
		}
		HX_STACK_LINE(12319)
		ret->elt = o;
		HX_STACK_LINE(12320)
		temp = ret;
	}
	HX_STACK_LINE(12322)
	temp->next = this->head;
	HX_STACK_LINE(12323)
	this->head = temp;
	HX_STACK_LINE(12324)
	this->modified = true;
	HX_STACK_LINE(12325)
	(this->length)++;
	HX_STACK_LINE(12326)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_add,return )

Void ZNPList_ZPP_SensorArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","addAll",0xe0a0d2f4,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.addAll","zpp_nape/util/Lists.hx",12337,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(12338)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(12339)
		while((true)){
			HX_STACK_LINE(12339)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(12339)
				break;
			}
			HX_STACK_LINE(12340)
			::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(12341)
			this->add(i);
			HX_STACK_LINE(12342)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","insert",0xdf830cad,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.insert","zpp_nape/util/Lists.hx",12347,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12347)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12347)
	{
		HX_STACK_LINE(12347)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12347)
		{
			HX_STACK_LINE(12347)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(12347)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(12347)
				ret = _g;
			}
			else{
				HX_STACK_LINE(12347)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12347)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12347)
				ret->next = null();
			}
			HX_STACK_LINE(12347)
			Dynamic();
		}
		HX_STACK_LINE(12347)
		ret->elt = o;
		HX_STACK_LINE(12347)
		temp = ret;
	}
	HX_STACK_LINE(12347)
	if (((cur == null()))){
		HX_STACK_LINE(12347)
		temp->next = this->head;
		HX_STACK_LINE(12347)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12347)
		temp->next = cur->next;
		HX_STACK_LINE(12347)
		cur->next = temp;
	}
	HX_STACK_LINE(12347)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(12347)
	this->pushmod = _g1;
	HX_STACK_LINE(12347)
	(this->length)++;
	HX_STACK_LINE(12347)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_insert",0xb68a91c1,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_insert","zpp_nape/util/Lists.hx",12351,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12360)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12360)
	{
		HX_STACK_LINE(12361)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12362)
		{
			HX_STACK_LINE(12363)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(12364)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(12364)
				ret = _g;
			}
			else{
				HX_STACK_LINE(12370)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12371)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12372)
				ret->next = null();
			}
			HX_STACK_LINE(12377)
			Dynamic();
		}
		HX_STACK_LINE(12379)
		ret->elt = o;
		HX_STACK_LINE(12380)
		temp = ret;
	}
	HX_STACK_LINE(12382)
	if (((cur == null()))){
		HX_STACK_LINE(12383)
		temp->next = this->head;
		HX_STACK_LINE(12384)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12387)
		temp->next = cur->next;
		HX_STACK_LINE(12388)
		cur->next = temp;
	}
	HX_STACK_LINE(12390)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(12390)
	this->pushmod = _g1;
	HX_STACK_LINE(12391)
	(this->length)++;
	HX_STACK_LINE(12392)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_SensorArbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","pop",0xa535e39d,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.pop","zpp_nape/util/Lists.hx",12395,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12395)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12395)
		this->head = ret->next;
		HX_STACK_LINE(12395)
		{
			HX_STACK_LINE(12395)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12395)
			o->elt = null();
			HX_STACK_LINE(12395)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(12395)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12395)
		if (((this->head == null()))){
			HX_STACK_LINE(12395)
			this->pushmod = true;
		}
		HX_STACK_LINE(12395)
		this->modified = true;
		HX_STACK_LINE(12395)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_pop",0xc7612a09,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_pop","zpp_nape/util/Lists.hx",12399,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12408)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12409)
		this->head = ret->next;
		HX_STACK_LINE(12411)
		{
			HX_STACK_LINE(12412)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12421)
			o->elt = null();
			HX_STACK_LINE(12422)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(12423)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12428)
		if (((this->head == null()))){
			HX_STACK_LINE(12428)
			this->pushmod = true;
		}
		HX_STACK_LINE(12429)
		this->modified = true;
		HX_STACK_LINE(12430)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","pop_unsafe",0x43260fc8,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.pop_unsafe","zpp_nape/util/Lists.hx",12433,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12433)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12433)
	this->pop();
	HX_STACK_LINE(12433)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_pop_unsafe",0x78d7aedc,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",12437,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12446)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12447)
	this->pop();
	HX_STACK_LINE(12448)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SensorArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","remove",0x462e65b8,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.remove","zpp_nape/util/Lists.hx",12459,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12459)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12459)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12459)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12459)
		while((true)){
			HX_STACK_LINE(12459)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(12459)
				break;
			}
			HX_STACK_LINE(12459)
			if (((cur->elt == obj))){
				HX_STACK_LINE(12459)
				{
					HX_STACK_LINE(12459)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12459)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12459)
					if (((pre == null()))){
						HX_STACK_LINE(12459)
						old = this->head;
						HX_STACK_LINE(12459)
						ret1 = old->next;
						HX_STACK_LINE(12459)
						this->head = ret1;
						HX_STACK_LINE(12459)
						if (((this->head == null()))){
							HX_STACK_LINE(12459)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12459)
						old = pre->next;
						HX_STACK_LINE(12459)
						ret1 = old->next;
						HX_STACK_LINE(12459)
						pre->next = ret1;
						HX_STACK_LINE(12459)
						if (((ret1 == null()))){
							HX_STACK_LINE(12459)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12459)
					{
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12459)
						o->elt = null();
						HX_STACK_LINE(12459)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12459)
					this->modified = true;
					HX_STACK_LINE(12459)
					(this->length)--;
					HX_STACK_LINE(12459)
					this->pushmod = true;
					HX_STACK_LINE(12459)
					ret1;
				}
				HX_STACK_LINE(12459)
				ret = true;
				HX_STACK_LINE(12459)
				break;
			}
			HX_STACK_LINE(12459)
			pre = cur;
			HX_STACK_LINE(12459)
			cur = cur->next;
		}
		HX_STACK_LINE(12459)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","try_remove",0x5a50457c,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.try_remove","zpp_nape/util/Lists.hx",12461,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12470)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12471)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12472)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12473)
	while((true)){
		HX_STACK_LINE(12473)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(12473)
			break;
		}
		HX_STACK_LINE(12474)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12475)
			this->erase(pre);
			HX_STACK_LINE(12476)
			ret = true;
			HX_STACK_LINE(12477)
			break;
		}
		HX_STACK_LINE(12479)
		pre = cur;
		HX_STACK_LINE(12480)
		cur = cur->next;
	}
	HX_STACK_LINE(12482)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_remove",0x1d35eacc,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_remove","zpp_nape/util/Lists.hx",12495,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12495)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12495)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12495)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12495)
		while((true)){
			HX_STACK_LINE(12495)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(12495)
				break;
			}
			HX_STACK_LINE(12495)
			if (((cur->elt == obj))){
				HX_STACK_LINE(12495)
				{
					HX_STACK_LINE(12495)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12495)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12495)
					if (((pre == null()))){
						HX_STACK_LINE(12495)
						old = this->head;
						HX_STACK_LINE(12495)
						ret1 = old->next;
						HX_STACK_LINE(12495)
						this->head = ret1;
						HX_STACK_LINE(12495)
						if (((this->head == null()))){
							HX_STACK_LINE(12495)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12495)
						old = pre->next;
						HX_STACK_LINE(12495)
						ret1 = old->next;
						HX_STACK_LINE(12495)
						pre->next = ret1;
						HX_STACK_LINE(12495)
						if (((ret1 == null()))){
							HX_STACK_LINE(12495)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12495)
					{
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12495)
						o->elt = null();
						HX_STACK_LINE(12495)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12495)
					this->modified = true;
					HX_STACK_LINE(12495)
					(this->length)--;
					HX_STACK_LINE(12495)
					this->pushmod = true;
					HX_STACK_LINE(12495)
					ret1;
				}
				HX_STACK_LINE(12495)
				ret = true;
				HX_STACK_LINE(12495)
				break;
			}
			HX_STACK_LINE(12495)
			pre = cur;
			HX_STACK_LINE(12495)
			cur = cur->next;
		}
		HX_STACK_LINE(12495)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_try_remove",0x9001e490,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",12499,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12508)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12509)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12510)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12511)
	while((true)){
		HX_STACK_LINE(12511)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(12511)
			break;
		}
		HX_STACK_LINE(12512)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12513)
			{
				HX_STACK_LINE(12513)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12513)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12513)
				if (((pre == null()))){
					HX_STACK_LINE(12513)
					old = this->head;
					HX_STACK_LINE(12513)
					ret1 = old->next;
					HX_STACK_LINE(12513)
					this->head = ret1;
					HX_STACK_LINE(12513)
					if (((this->head == null()))){
						HX_STACK_LINE(12513)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12513)
					old = pre->next;
					HX_STACK_LINE(12513)
					ret1 = old->next;
					HX_STACK_LINE(12513)
					pre->next = ret1;
					HX_STACK_LINE(12513)
					if (((ret1 == null()))){
						HX_STACK_LINE(12513)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12513)
				{
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12513)
					o->elt = null();
					HX_STACK_LINE(12513)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12513)
				this->modified = true;
				HX_STACK_LINE(12513)
				(this->length)--;
				HX_STACK_LINE(12513)
				this->pushmod = true;
				HX_STACK_LINE(12513)
				ret1;
			}
			HX_STACK_LINE(12514)
			ret = true;
			HX_STACK_LINE(12515)
			break;
		}
		HX_STACK_LINE(12517)
		pre = cur;
		HX_STACK_LINE(12518)
		cur = cur->next;
	}
	HX_STACK_LINE(12520)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","erase",0x75b409f2,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.erase","zpp_nape/util/Lists.hx",12523,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12523)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12523)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12523)
	if (((pre == null()))){
		HX_STACK_LINE(12523)
		old = this->head;
		HX_STACK_LINE(12523)
		ret = old->next;
		HX_STACK_LINE(12523)
		this->head = ret;
		HX_STACK_LINE(12523)
		if (((this->head == null()))){
			HX_STACK_LINE(12523)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12523)
		old = pre->next;
		HX_STACK_LINE(12523)
		ret = old->next;
		HX_STACK_LINE(12523)
		pre->next = ret;
		HX_STACK_LINE(12523)
		if (((ret == null()))){
			HX_STACK_LINE(12523)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12523)
	{
		HX_STACK_LINE(12523)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12523)
		o->elt = null();
		HX_STACK_LINE(12523)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(12523)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12523)
	this->modified = true;
	HX_STACK_LINE(12523)
	(this->length)--;
	HX_STACK_LINE(12523)
	this->pushmod = true;
	HX_STACK_LINE(12523)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_erase",0xee0ec35e,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_erase","zpp_nape/util/Lists.hx",12527,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12536)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12537)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12538)
	if (((pre == null()))){
		HX_STACK_LINE(12539)
		old = this->head;
		HX_STACK_LINE(12540)
		ret = old->next;
		HX_STACK_LINE(12541)
		this->head = ret;
		HX_STACK_LINE(12542)
		if (((this->head == null()))){
			HX_STACK_LINE(12542)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12545)
		old = pre->next;
		HX_STACK_LINE(12546)
		ret = old->next;
		HX_STACK_LINE(12547)
		pre->next = ret;
		HX_STACK_LINE(12548)
		if (((ret == null()))){
			HX_STACK_LINE(12548)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12551)
	{
		HX_STACK_LINE(12552)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12561)
		o->elt = null();
		HX_STACK_LINE(12562)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(12563)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12568)
	this->modified = true;
	HX_STACK_LINE(12569)
	(this->length)--;
	HX_STACK_LINE(12570)
	this->pushmod = true;
	HX_STACK_LINE(12571)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","splice",0x01444ef0,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.splice","zpp_nape/util/Lists.hx",12573,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(12574)
	while((true)){
		HX_STACK_LINE(12574)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(12574)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(12574)
			break;
		}
		HX_STACK_LINE(12574)
		this->erase(pre);
	}
	HX_STACK_LINE(12575)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,splice,return )

Void ZNPList_ZPP_SensorArbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","clear",0x4af29299,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.clear","zpp_nape/util/Lists.hx",12578,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12578)
		while((true)){
			HX_STACK_LINE(12578)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(12578)
				break;
			}
			HX_STACK_LINE(12578)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12578)
			this->head = ret->next;
			HX_STACK_LINE(12578)
			{
				HX_STACK_LINE(12578)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12578)
				o->elt = null();
				HX_STACK_LINE(12578)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12578)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12578)
			if (((this->head == null()))){
				HX_STACK_LINE(12578)
				this->pushmod = true;
			}
			HX_STACK_LINE(12578)
			this->modified = true;
			HX_STACK_LINE(12578)
			(this->length)--;
		}
		HX_STACK_LINE(12578)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_clear",0xc34d4c05,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_clear","zpp_nape/util/Lists.hx",12583,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12584)
		while((true)){
			HX_STACK_LINE(12584)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(12584)
				break;
			}
			HX_STACK_LINE(12584)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12584)
			this->head = ret->next;
			HX_STACK_LINE(12584)
			{
				HX_STACK_LINE(12584)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12584)
				o->elt = null();
				HX_STACK_LINE(12584)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12584)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12584)
			if (((this->head == null()))){
				HX_STACK_LINE(12584)
				this->pushmod = true;
			}
			HX_STACK_LINE(12584)
			this->modified = true;
			HX_STACK_LINE(12584)
			(this->length)--;
		}
		HX_STACK_LINE(12585)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","reverse",0x4a66b52e,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.reverse","zpp_nape/util/Lists.hx",12588,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12589)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12590)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12591)
		while((true)){
			HX_STACK_LINE(12591)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(12591)
				break;
			}
			HX_STACK_LINE(12592)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12593)
			cur->next = pre;
			HX_STACK_LINE(12594)
			this->head = cur;
			HX_STACK_LINE(12595)
			pre = cur;
			HX_STACK_LINE(12596)
			cur = nx;
		}
		HX_STACK_LINE(12598)
		this->modified = true;
		HX_STACK_LINE(12599)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,reverse,(void))

bool ZNPList_ZPP_SensorArbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","empty",0x72715b99,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.empty","zpp_nape/util/Lists.hx",12604,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12604)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,empty,return )

int ZNPList_ZPP_SensorArbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","size",0xebe86535,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.size","zpp_nape/util/Lists.hx",12609,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12609)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,size,return )

bool ZNPList_ZPP_SensorArbiter_obj::has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","has",0xa52fc566,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.has","zpp_nape/util/Lists.hx",12612,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12612)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12612)
	{
		HX_STACK_LINE(12612)
		ret = false;
		HX_STACK_LINE(12612)
		{
			HX_STACK_LINE(12612)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12612)
			while((true)){
				HX_STACK_LINE(12612)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(12612)
					break;
				}
				HX_STACK_LINE(12612)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12612)
				if (((npite == obj))){
					HX_STACK_LINE(12612)
					ret = true;
					HX_STACK_LINE(12612)
					break;
				}
				HX_STACK_LINE(12612)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12612)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,has,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_has",0xc75b0bd2,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_has","zpp_nape/util/Lists.hx",12616,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12625)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12626)
	{
		HX_STACK_LINE(12627)
		ret = false;
		HX_STACK_LINE(12628)
		{
			HX_STACK_LINE(12629)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12630)
			while((true)){
				HX_STACK_LINE(12630)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(12630)
					break;
				}
				HX_STACK_LINE(12631)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12633)
				if (((npite == obj))){
					HX_STACK_LINE(12634)
					ret = true;
					HX_STACK_LINE(12635)
					break;
				}
				HX_STACK_LINE(12638)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12642)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","front",0x092539b5,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.front","zpp_nape/util/Lists.hx",12647,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12647)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","back",0xe0a59e9b,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.back","zpp_nape/util/Lists.hx",12649,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12650)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12651)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12652)
	while((true)){
		HX_STACK_LINE(12652)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(12652)
			break;
		}
		HX_STACK_LINE(12653)
		ret = cur;
		HX_STACK_LINE(12654)
		cur = cur->next;
	}
	HX_STACK_LINE(12656)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","iterator_at",0xcbf9fbf0,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.iterator_at","zpp_nape/util/Lists.hx",12658,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12667)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12668)
	while((true)){
		HX_STACK_LINE(12668)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(12668)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(12668)
			break;
		}
		HX_STACK_LINE(12668)
		ret = ret->next;
	}
	HX_STACK_LINE(12669)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","at",0x523f5467,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.at","zpp_nape/util/Lists.hx",12671,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12680)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12681)
	if (((it != null()))){
		HX_STACK_LINE(12681)
		return it->elt;
	}
	else{
		HX_STACK_LINE(12681)
		return null();
	}
	HX_STACK_LINE(12681)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,at,return )


ZNPList_ZPP_SensorArbiter_obj::ZNPList_ZPP_SensorArbiter_obj()
{
}

void ZNPList_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("head"),
	HX_CSTRING("begin"),
	HX_CSTRING("modified"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("length"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("add"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("insert"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("splice"),
	HX_CSTRING("clear"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("reverse"),
	HX_CSTRING("empty"),
	HX_CSTRING("size"),
	HX_CSTRING("has"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("front"),
	HX_CSTRING("back"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("at"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_SensorArbiter_obj::__mClass;

void ZNPList_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SensorArbiter"), hx::TCanCast< ZNPList_ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_SensorArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
