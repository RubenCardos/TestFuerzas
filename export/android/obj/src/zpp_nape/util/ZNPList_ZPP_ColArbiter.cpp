#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ColArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","new",0xa0591ef0,"zpp_nape.util.ZNPList_ZPP_ColArbiter.new","zpp_nape/util/Lists.hx",11434,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11444)
	this->length = (int)0;
	HX_STACK_LINE(11443)
	this->pushmod = false;
	HX_STACK_LINE(11442)
	this->modified = false;
	HX_STACK_LINE(11435)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_ColArbiter_obj::~ZNPList_ZPP_ColArbiter_obj() { }

Dynamic ZNPList_ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > ZNPList_ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > result = new ZNPList_ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > result = new ZNPList_ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","begin",0x5737fcb9,"zpp_nape.util.ZNPList_ZPP_ColArbiter.begin","zpp_nape/util/Lists.hx",11440,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11440)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,begin,return )

Void ZNPList_ZPP_ColArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","setbegin",0xc2c0cab7,"zpp_nape.util.ZNPList_ZPP_ColArbiter.setbegin","zpp_nape/util/Lists.hx",11447,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11448)
		this->head = i;
		HX_STACK_LINE(11449)
		this->modified = true;
		HX_STACK_LINE(11450)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","add",0xa04f40b1,"zpp_nape.util.ZNPList_ZPP_ColArbiter.add","zpp_nape/util/Lists.hx",11453,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11453)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11453)
	{
		HX_STACK_LINE(11453)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11453)
		{
			HX_STACK_LINE(11453)
			if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11453)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(11453)
				ret = _g;
			}
			else{
				HX_STACK_LINE(11453)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11453)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11453)
				ret->next = null();
			}
			HX_STACK_LINE(11453)
			Dynamic();
		}
		HX_STACK_LINE(11453)
		ret->elt = o;
		HX_STACK_LINE(11453)
		temp = ret;
	}
	HX_STACK_LINE(11453)
	temp->next = this->head;
	HX_STACK_LINE(11453)
	this->head = temp;
	HX_STACK_LINE(11453)
	this->modified = true;
	HX_STACK_LINE(11453)
	(this->length)++;
	HX_STACK_LINE(11453)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_add",0xe4fcab1d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_add","zpp_nape/util/Lists.hx",11457,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11466)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11466)
	{
		HX_STACK_LINE(11467)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11468)
		{
			HX_STACK_LINE(11469)
			if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11470)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(11470)
				ret = _g;
			}
			else{
				HX_STACK_LINE(11476)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11477)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11478)
				ret->next = null();
			}
			HX_STACK_LINE(11483)
			Dynamic();
		}
		HX_STACK_LINE(11485)
		ret->elt = o;
		HX_STACK_LINE(11486)
		temp = ret;
	}
	HX_STACK_LINE(11488)
	temp->next = this->head;
	HX_STACK_LINE(11489)
	this->head = temp;
	HX_STACK_LINE(11490)
	this->modified = true;
	HX_STACK_LINE(11491)
	(this->length)++;
	HX_STACK_LINE(11492)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_add,return )

Void ZNPList_ZPP_ColArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ColArbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","addAll",0xfde934f0,"zpp_nape.util.ZNPList_ZPP_ColArbiter.addAll","zpp_nape/util/Lists.hx",11503,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11504)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11505)
		while((true)){
			HX_STACK_LINE(11505)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(11505)
				break;
			}
			HX_STACK_LINE(11506)
			::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11507)
			this->add(i);
			HX_STACK_LINE(11508)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","insert",0xfccb6ea9,"zpp_nape.util.ZNPList_ZPP_ColArbiter.insert","zpp_nape/util/Lists.hx",11513,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11513)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11513)
	{
		HX_STACK_LINE(11513)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11513)
		{
			HX_STACK_LINE(11513)
			if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11513)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(11513)
				ret = _g;
			}
			else{
				HX_STACK_LINE(11513)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11513)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11513)
				ret->next = null();
			}
			HX_STACK_LINE(11513)
			Dynamic();
		}
		HX_STACK_LINE(11513)
		ret->elt = o;
		HX_STACK_LINE(11513)
		temp = ret;
	}
	HX_STACK_LINE(11513)
	if (((cur == null()))){
		HX_STACK_LINE(11513)
		temp->next = this->head;
		HX_STACK_LINE(11513)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11513)
		temp->next = cur->next;
		HX_STACK_LINE(11513)
		cur->next = temp;
	}
	HX_STACK_LINE(11513)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(11513)
	this->pushmod = _g1;
	HX_STACK_LINE(11513)
	(this->length)++;
	HX_STACK_LINE(11513)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_insert",0x7a3f4fbd,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_insert","zpp_nape/util/Lists.hx",11517,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11526)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11526)
	{
		HX_STACK_LINE(11527)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11528)
		{
			HX_STACK_LINE(11529)
			if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11530)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter _g = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(11530)
				ret = _g;
			}
			else{
				HX_STACK_LINE(11536)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11537)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11538)
				ret->next = null();
			}
			HX_STACK_LINE(11543)
			Dynamic();
		}
		HX_STACK_LINE(11545)
		ret->elt = o;
		HX_STACK_LINE(11546)
		temp = ret;
	}
	HX_STACK_LINE(11548)
	if (((cur == null()))){
		HX_STACK_LINE(11549)
		temp->next = this->head;
		HX_STACK_LINE(11550)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11553)
		temp->next = cur->next;
		HX_STACK_LINE(11554)
		cur->next = temp;
	}
	HX_STACK_LINE(11556)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(11556)
	this->pushmod = _g1;
	HX_STACK_LINE(11557)
	(this->length)++;
	HX_STACK_LINE(11558)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_ColArbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","pop",0xa05aac21,"zpp_nape.util.ZNPList_ZPP_ColArbiter.pop","zpp_nape/util/Lists.hx",11561,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11561)
		this->head = ret->next;
		HX_STACK_LINE(11561)
		{
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11561)
			o->elt = null();
			HX_STACK_LINE(11561)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11561)
		if (((this->head == null()))){
			HX_STACK_LINE(11561)
			this->pushmod = true;
		}
		HX_STACK_LINE(11561)
		this->modified = true;
		HX_STACK_LINE(11561)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop,(void))

Void ZNPList_ZPP_ColArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_pop",0xe508168d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_pop","zpp_nape/util/Lists.hx",11565,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11574)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11575)
		this->head = ret->next;
		HX_STACK_LINE(11577)
		{
			HX_STACK_LINE(11578)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11587)
			o->elt = null();
			HX_STACK_LINE(11588)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(11589)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11594)
		if (((this->head == null()))){
			HX_STACK_LINE(11594)
			this->pushmod = true;
		}
		HX_STACK_LINE(11595)
		this->modified = true;
		HX_STACK_LINE(11596)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","pop_unsafe",0x9bad1fc4,"zpp_nape.util.ZNPList_ZPP_ColArbiter.pop_unsafe","zpp_nape/util/Lists.hx",11599,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11599)
	::zpp_nape::dynamics::ZPP_ColArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11599)
	this->pop();
	HX_STACK_LINE(11599)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_pop_unsafe",0xfb291ad8,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",11603,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11612)
	::zpp_nape::dynamics::ZPP_ColArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11613)
	this->pop();
	HX_STACK_LINE(11614)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_ColArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","remove",0x6376c7b4,"zpp_nape.util.ZNPList_ZPP_ColArbiter.remove","zpp_nape/util/Lists.hx",11625,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11625)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11625)
		while((true)){
			HX_STACK_LINE(11625)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11625)
				{
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11625)
					if (((pre == null()))){
						HX_STACK_LINE(11625)
						old = this->head;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						this->head = ret1;
						HX_STACK_LINE(11625)
						if (((this->head == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11625)
						old = pre->next;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						pre->next = ret1;
						HX_STACK_LINE(11625)
						if (((ret1 == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11625)
					{
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11625)
						o->elt = null();
						HX_STACK_LINE(11625)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11625)
					this->modified = true;
					HX_STACK_LINE(11625)
					(this->length)--;
					HX_STACK_LINE(11625)
					this->pushmod = true;
					HX_STACK_LINE(11625)
					ret1;
				}
				HX_STACK_LINE(11625)
				ret = true;
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			pre = cur;
			HX_STACK_LINE(11625)
			cur = cur->next;
		}
		HX_STACK_LINE(11625)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,remove,(void))

bool ZNPList_ZPP_ColArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","try_remove",0xb2d75578,"zpp_nape.util.ZNPList_ZPP_ColArbiter.try_remove","zpp_nape/util/Lists.hx",11627,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11636)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11637)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11638)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11639)
	while((true)){
		HX_STACK_LINE(11639)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(11639)
			break;
		}
		HX_STACK_LINE(11640)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11641)
			this->erase(pre);
			HX_STACK_LINE(11642)
			ret = true;
			HX_STACK_LINE(11643)
			break;
		}
		HX_STACK_LINE(11645)
		pre = cur;
		HX_STACK_LINE(11646)
		cur = cur->next;
	}
	HX_STACK_LINE(11648)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,try_remove,return )

Void ZNPList_ZPP_ColArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_remove",0xe0eaa8c8,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_remove","zpp_nape/util/Lists.hx",11661,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11661)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11661)
		while((true)){
			HX_STACK_LINE(11661)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11661)
				{
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11661)
					if (((pre == null()))){
						HX_STACK_LINE(11661)
						old = this->head;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						this->head = ret1;
						HX_STACK_LINE(11661)
						if (((this->head == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11661)
						old = pre->next;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						pre->next = ret1;
						HX_STACK_LINE(11661)
						if (((ret1 == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11661)
					{
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11661)
						o->elt = null();
						HX_STACK_LINE(11661)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11661)
					this->modified = true;
					HX_STACK_LINE(11661)
					(this->length)--;
					HX_STACK_LINE(11661)
					this->pushmod = true;
					HX_STACK_LINE(11661)
					ret1;
				}
				HX_STACK_LINE(11661)
				ret = true;
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			pre = cur;
			HX_STACK_LINE(11661)
			cur = cur->next;
		}
		HX_STACK_LINE(11661)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_ColArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_try_remove",0x1253508c,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",11665,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11674)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11675)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11676)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11677)
	while((true)){
		HX_STACK_LINE(11677)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(11677)
			break;
		}
		HX_STACK_LINE(11678)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11679)
			{
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11679)
				if (((pre == null()))){
					HX_STACK_LINE(11679)
					old = this->head;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					this->head = ret1;
					HX_STACK_LINE(11679)
					if (((this->head == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11679)
					old = pre->next;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					pre->next = ret1;
					HX_STACK_LINE(11679)
					if (((ret1 == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11679)
				{
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11679)
					o->elt = null();
					HX_STACK_LINE(11679)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11679)
				this->modified = true;
				HX_STACK_LINE(11679)
				(this->length)--;
				HX_STACK_LINE(11679)
				this->pushmod = true;
				HX_STACK_LINE(11679)
				ret1;
			}
			HX_STACK_LINE(11680)
			ret = true;
			HX_STACK_LINE(11681)
			break;
		}
		HX_STACK_LINE(11683)
		pre = cur;
		HX_STACK_LINE(11684)
		cur = cur->next;
	}
	HX_STACK_LINE(11686)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","erase",0x19fefb76,"zpp_nape.util.ZNPList_ZPP_ColArbiter.erase","zpp_nape/util/Lists.hx",11689,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11689)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11689)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11689)
	if (((pre == null()))){
		HX_STACK_LINE(11689)
		old = this->head;
		HX_STACK_LINE(11689)
		ret = old->next;
		HX_STACK_LINE(11689)
		this->head = ret;
		HX_STACK_LINE(11689)
		if (((this->head == null()))){
			HX_STACK_LINE(11689)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11689)
		old = pre->next;
		HX_STACK_LINE(11689)
		ret = old->next;
		HX_STACK_LINE(11689)
		pre->next = ret;
		HX_STACK_LINE(11689)
		if (((ret == null()))){
			HX_STACK_LINE(11689)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11689)
	{
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11689)
		o->elt = null();
		HX_STACK_LINE(11689)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11689)
	this->modified = true;
	HX_STACK_LINE(11689)
	(this->length)--;
	HX_STACK_LINE(11689)
	this->pushmod = true;
	HX_STACK_LINE(11689)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_erase",0xf4acd8e2,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_erase","zpp_nape/util/Lists.hx",11693,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11702)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11703)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11704)
	if (((pre == null()))){
		HX_STACK_LINE(11705)
		old = this->head;
		HX_STACK_LINE(11706)
		ret = old->next;
		HX_STACK_LINE(11707)
		this->head = ret;
		HX_STACK_LINE(11708)
		if (((this->head == null()))){
			HX_STACK_LINE(11708)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11711)
		old = pre->next;
		HX_STACK_LINE(11712)
		ret = old->next;
		HX_STACK_LINE(11713)
		pre->next = ret;
		HX_STACK_LINE(11714)
		if (((ret == null()))){
			HX_STACK_LINE(11714)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11717)
	{
		HX_STACK_LINE(11718)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11727)
		o->elt = null();
		HX_STACK_LINE(11728)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
		HX_STACK_LINE(11729)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11734)
	this->modified = true;
	HX_STACK_LINE(11735)
	(this->length)--;
	HX_STACK_LINE(11736)
	this->pushmod = true;
	HX_STACK_LINE(11737)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","splice",0x1e8cb0ec,"zpp_nape.util.ZNPList_ZPP_ColArbiter.splice","zpp_nape/util/Lists.hx",11739,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11740)
	while((true)){
		HX_STACK_LINE(11740)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(11740)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(11740)
			break;
		}
		HX_STACK_LINE(11740)
		this->erase(pre);
	}
	HX_STACK_LINE(11741)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,splice,return )

Void ZNPList_ZPP_ColArbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","clear",0xef3d841d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.clear","zpp_nape/util/Lists.hx",11744,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11744)
		while((true)){
			HX_STACK_LINE(11744)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(11744)
				break;
			}
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11744)
			this->head = ret->next;
			HX_STACK_LINE(11744)
			{
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11744)
				o->elt = null();
				HX_STACK_LINE(11744)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11744)
			if (((this->head == null()))){
				HX_STACK_LINE(11744)
				this->pushmod = true;
			}
			HX_STACK_LINE(11744)
			this->modified = true;
			HX_STACK_LINE(11744)
			(this->length)--;
		}
		HX_STACK_LINE(11744)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,clear,(void))

Void ZNPList_ZPP_ColArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_clear",0xc9eb6189,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_clear","zpp_nape/util/Lists.hx",11749,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11750)
		while((true)){
			HX_STACK_LINE(11750)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(11750)
				break;
			}
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11750)
			this->head = ret->next;
			HX_STACK_LINE(11750)
			{
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11750)
				o->elt = null();
				HX_STACK_LINE(11750)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11750)
			if (((this->head == null()))){
				HX_STACK_LINE(11750)
				this->pushmod = true;
			}
			HX_STACK_LINE(11750)
			this->modified = true;
			HX_STACK_LINE(11750)
			(this->length)--;
		}
		HX_STACK_LINE(11751)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_ColArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","reverse",0xcc740fb2,"zpp_nape.util.ZNPList_ZPP_ColArbiter.reverse","zpp_nape/util/Lists.hx",11754,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11755)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11756)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11757)
		while((true)){
			HX_STACK_LINE(11757)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(11757)
				break;
			}
			HX_STACK_LINE(11758)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11759)
			cur->next = pre;
			HX_STACK_LINE(11760)
			this->head = cur;
			HX_STACK_LINE(11761)
			pre = cur;
			HX_STACK_LINE(11762)
			cur = nx;
		}
		HX_STACK_LINE(11764)
		this->modified = true;
		HX_STACK_LINE(11765)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,reverse,(void))

bool ZNPList_ZPP_ColArbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","empty",0x16bc4d1d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.empty","zpp_nape/util/Lists.hx",11770,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11770)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,empty,return )

int ZNPList_ZPP_ColArbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","size",0xb0f31031,"zpp_nape.util.ZNPList_ZPP_ColArbiter.size","zpp_nape/util/Lists.hx",11775,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11775)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,size,return )

bool ZNPList_ZPP_ColArbiter_obj::has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","has",0xa0548dea,"zpp_nape.util.ZNPList_ZPP_ColArbiter.has","zpp_nape/util/Lists.hx",11778,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11778)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11778)
	{
		HX_STACK_LINE(11778)
		ret = false;
		HX_STACK_LINE(11778)
		{
			HX_STACK_LINE(11778)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11778)
			while((true)){
				HX_STACK_LINE(11778)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(11778)
					break;
				}
				HX_STACK_LINE(11778)
				::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11778)
				if (((npite == obj))){
					HX_STACK_LINE(11778)
					ret = true;
					HX_STACK_LINE(11778)
					break;
				}
				HX_STACK_LINE(11778)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11778)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,has,return )

bool ZNPList_ZPP_ColArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_has",0xe501f856,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_has","zpp_nape/util/Lists.hx",11782,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11791)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11792)
	{
		HX_STACK_LINE(11793)
		ret = false;
		HX_STACK_LINE(11794)
		{
			HX_STACK_LINE(11795)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11796)
			while((true)){
				HX_STACK_LINE(11796)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(11796)
					break;
				}
				HX_STACK_LINE(11797)
				::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11799)
				if (((npite == obj))){
					HX_STACK_LINE(11800)
					ret = true;
					HX_STACK_LINE(11801)
					break;
				}
				HX_STACK_LINE(11804)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11808)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","front",0xad702b39,"zpp_nape.util.ZNPList_ZPP_ColArbiter.front","zpp_nape/util/Lists.hx",11813,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11813)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","back",0xa5b04997,"zpp_nape.util.ZNPList_ZPP_ColArbiter.back","zpp_nape/util/Lists.hx",11815,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11816)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11817)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11818)
	while((true)){
		HX_STACK_LINE(11818)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(11818)
			break;
		}
		HX_STACK_LINE(11819)
		ret = cur;
		HX_STACK_LINE(11820)
		cur = cur->next;
	}
	HX_STACK_LINE(11822)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","iterator_at",0xe9a0e874,"zpp_nape.util.ZNPList_ZPP_ColArbiter.iterator_at","zpp_nape/util/Lists.hx",11824,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11833)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11834)
	while((true)){
		HX_STACK_LINE(11834)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(11834)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(11834)
			break;
		}
		HX_STACK_LINE(11834)
		ret = ret->next;
	}
	HX_STACK_LINE(11835)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","at",0x00b80863,"zpp_nape.util.ZNPList_ZPP_ColArbiter.at","zpp_nape/util/Lists.hx",11837,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11846)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11847)
	if (((it != null()))){
		HX_STACK_LINE(11847)
		return it->elt;
	}
	else{
		HX_STACK_LINE(11847)
		return null();
	}
	HX_STACK_LINE(11847)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,at,return )


ZNPList_ZPP_ColArbiter_obj::ZNPList_ZPP_ColArbiter_obj()
{
}

void ZNPList_ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
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

void ZNPList_ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_ColArbiter_obj::__mClass;

void ZNPList_ZPP_ColArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ColArbiter"), hx::TCanCast< ZNPList_ZPP_ColArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_ColArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
