#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_BodyListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","new",0x6caada5d,"zpp_nape.util.ZNPList_ZPP_BodyListener.new","zpp_nape/util/Lists.hx",4345,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4355)
	this->length = (int)0;
	HX_STACK_LINE(4354)
	this->pushmod = false;
	HX_STACK_LINE(4353)
	this->modified = false;
	HX_STACK_LINE(4346)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_BodyListener_obj::~ZNPList_ZPP_BodyListener_obj() { }

Dynamic ZNPList_ZPP_BodyListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_BodyListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > ZNPList_ZPP_BodyListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > result = new ZNPList_ZPP_BodyListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > result = new ZNPList_ZPP_BodyListener_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","begin",0x28012d66,"zpp_nape.util.ZNPList_ZPP_BodyListener.begin","zpp_nape/util/Lists.hx",4351,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4351)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,begin,return )

Void ZNPList_ZPP_BodyListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_BodyListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","setbegin",0x022f842a,"zpp_nape.util.ZNPList_ZPP_BodyListener.setbegin","zpp_nape/util/Lists.hx",4358,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(4359)
		this->head = i;
		HX_STACK_LINE(4360)
		this->modified = true;
		HX_STACK_LINE(4361)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","add",0x6ca0fc1e,"zpp_nape.util.ZNPList_ZPP_BodyListener.add","zpp_nape/util/Lists.hx",4364,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4364)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4364)
	{
		HX_STACK_LINE(4364)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4364)
		{
			HX_STACK_LINE(4364)
			if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(4364)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener _g = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4364)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4364)
				ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4364)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4364)
				ret->next = null();
			}
			HX_STACK_LINE(4364)
			Dynamic();
		}
		HX_STACK_LINE(4364)
		ret->elt = o;
		HX_STACK_LINE(4364)
		temp = ret;
	}
	HX_STACK_LINE(4364)
	temp->next = this->head;
	HX_STACK_LINE(4364)
	this->head = temp;
	HX_STACK_LINE(4364)
	this->modified = true;
	HX_STACK_LINE(4364)
	(this->length)++;
	HX_STACK_LINE(4364)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,add,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_add",0x12cb1b8a,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_add","zpp_nape/util/Lists.hx",4368,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4377)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4377)
	{
		HX_STACK_LINE(4378)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4379)
		{
			HX_STACK_LINE(4380)
			if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(4381)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener _g = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4381)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4387)
				ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4388)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4389)
				ret->next = null();
			}
			HX_STACK_LINE(4394)
			Dynamic();
		}
		HX_STACK_LINE(4396)
		ret->elt = o;
		HX_STACK_LINE(4397)
		temp = ret;
	}
	HX_STACK_LINE(4399)
	temp->next = this->head;
	HX_STACK_LINE(4400)
	this->head = temp;
	HX_STACK_LINE(4401)
	this->modified = true;
	HX_STACK_LINE(4402)
	(this->length)++;
	HX_STACK_LINE(4403)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_add,return )

Void ZNPList_ZPP_BodyListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_BodyListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","addAll",0xdd2a9ba3,"zpp_nape.util.ZNPList_ZPP_BodyListener.addAll","zpp_nape/util/Lists.hx",4414,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(4415)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(4416)
		while((true)){
			HX_STACK_LINE(4416)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(4416)
				break;
			}
			HX_STACK_LINE(4417)
			::zpp_nape::callbacks::ZPP_BodyListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4418)
			this->add(i);
			HX_STACK_LINE(4419)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","insert",0xdc0cd55c,"zpp_nape.util.ZNPList_ZPP_BodyListener.insert","zpp_nape/util/Lists.hx",4424,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4424)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4424)
	{
		HX_STACK_LINE(4424)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4424)
		{
			HX_STACK_LINE(4424)
			if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(4424)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener _g = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4424)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4424)
				ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4424)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4424)
				ret->next = null();
			}
			HX_STACK_LINE(4424)
			Dynamic();
		}
		HX_STACK_LINE(4424)
		ret->elt = o;
		HX_STACK_LINE(4424)
		temp = ret;
	}
	HX_STACK_LINE(4424)
	if (((cur == null()))){
		HX_STACK_LINE(4424)
		temp->next = this->head;
		HX_STACK_LINE(4424)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4424)
		temp->next = cur->next;
		HX_STACK_LINE(4424)
		cur->next = temp;
	}
	HX_STACK_LINE(4424)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4424)
	this->pushmod = _g1;
	HX_STACK_LINE(4424)
	(this->length)++;
	HX_STACK_LINE(4424)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_insert",0xb1232170,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_insert","zpp_nape/util/Lists.hx",4428,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4437)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4437)
	{
		HX_STACK_LINE(4438)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4439)
		{
			HX_STACK_LINE(4440)
			if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(4441)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener _g = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4441)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4447)
				ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4448)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4449)
				ret->next = null();
			}
			HX_STACK_LINE(4454)
			Dynamic();
		}
		HX_STACK_LINE(4456)
		ret->elt = o;
		HX_STACK_LINE(4457)
		temp = ret;
	}
	HX_STACK_LINE(4459)
	if (((cur == null()))){
		HX_STACK_LINE(4460)
		temp->next = this->head;
		HX_STACK_LINE(4461)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4464)
		temp->next = cur->next;
		HX_STACK_LINE(4465)
		cur->next = temp;
	}
	HX_STACK_LINE(4467)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4467)
	this->pushmod = _g1;
	HX_STACK_LINE(4468)
	(this->length)++;
	HX_STACK_LINE(4469)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,inlined_insert,return )

Void ZNPList_ZPP_BodyListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","pop",0x6cac678e,"zpp_nape.util.ZNPList_ZPP_BodyListener.pop","zpp_nape/util/Lists.hx",4472,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4472)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4472)
		this->head = ret->next;
		HX_STACK_LINE(4472)
		{
			HX_STACK_LINE(4472)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4472)
			o->elt = null();
			HX_STACK_LINE(4472)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
			HX_STACK_LINE(4472)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4472)
		if (((this->head == null()))){
			HX_STACK_LINE(4472)
			this->pushmod = true;
		}
		HX_STACK_LINE(4472)
		this->modified = true;
		HX_STACK_LINE(4472)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop,(void))

Void ZNPList_ZPP_BodyListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_pop",0x12d686fa,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_pop","zpp_nape/util/Lists.hx",4476,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4485)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4486)
		this->head = ret->next;
		HX_STACK_LINE(4488)
		{
			HX_STACK_LINE(4489)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4498)
			o->elt = null();
			HX_STACK_LINE(4499)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
			HX_STACK_LINE(4500)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4505)
		if (((this->head == null()))){
			HX_STACK_LINE(4505)
			this->pushmod = true;
		}
		HX_STACK_LINE(4506)
		this->modified = true;
		HX_STACK_LINE(4507)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","pop_unsafe",0x9f535bf7,"zpp_nape.util.ZNPList_ZPP_BodyListener.pop_unsafe","zpp_nape/util/Lists.hx",4510,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4510)
	::zpp_nape::callbacks::ZPP_BodyListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4510)
	this->pop();
	HX_STACK_LINE(4510)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_pop_unsafe",0xaf83420b,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4514,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4523)
	::zpp_nape::callbacks::ZPP_BodyListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4524)
	this->pop();
	HX_STACK_LINE(4525)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_BodyListener_obj::remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","remove",0x42b82e67,"zpp_nape.util.ZNPList_ZPP_BodyListener.remove","zpp_nape/util/Lists.hx",4536,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4536)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4536)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4536)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4536)
		while((true)){
			HX_STACK_LINE(4536)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4536)
				break;
			}
			HX_STACK_LINE(4536)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4536)
				{
					HX_STACK_LINE(4536)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4536)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4536)
					if (((pre == null()))){
						HX_STACK_LINE(4536)
						old = this->head;
						HX_STACK_LINE(4536)
						ret1 = old->next;
						HX_STACK_LINE(4536)
						this->head = ret1;
						HX_STACK_LINE(4536)
						if (((this->head == null()))){
							HX_STACK_LINE(4536)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4536)
						old = pre->next;
						HX_STACK_LINE(4536)
						ret1 = old->next;
						HX_STACK_LINE(4536)
						pre->next = ret1;
						HX_STACK_LINE(4536)
						if (((ret1 == null()))){
							HX_STACK_LINE(4536)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4536)
					{
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4536)
						o->elt = null();
						HX_STACK_LINE(4536)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4536)
					this->modified = true;
					HX_STACK_LINE(4536)
					(this->length)--;
					HX_STACK_LINE(4536)
					this->pushmod = true;
					HX_STACK_LINE(4536)
					ret1;
				}
				HX_STACK_LINE(4536)
				ret = true;
				HX_STACK_LINE(4536)
				break;
			}
			HX_STACK_LINE(4536)
			pre = cur;
			HX_STACK_LINE(4536)
			cur = cur->next;
		}
		HX_STACK_LINE(4536)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,remove,(void))

bool ZNPList_ZPP_BodyListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","try_remove",0xb67d91ab,"zpp_nape.util.ZNPList_ZPP_BodyListener.try_remove","zpp_nape/util/Lists.hx",4538,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4547)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4548)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4549)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4550)
	while((true)){
		HX_STACK_LINE(4550)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4550)
			break;
		}
		HX_STACK_LINE(4551)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4552)
			this->erase(pre);
			HX_STACK_LINE(4553)
			ret = true;
			HX_STACK_LINE(4554)
			break;
		}
		HX_STACK_LINE(4556)
		pre = cur;
		HX_STACK_LINE(4557)
		cur = cur->next;
	}
	HX_STACK_LINE(4559)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,try_remove,return )

Void ZNPList_ZPP_BodyListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_remove",0x17ce7a7b,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_remove","zpp_nape/util/Lists.hx",4572,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4572)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4572)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4572)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4572)
		while((true)){
			HX_STACK_LINE(4572)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4572)
				break;
			}
			HX_STACK_LINE(4572)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4572)
				{
					HX_STACK_LINE(4572)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4572)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4572)
					if (((pre == null()))){
						HX_STACK_LINE(4572)
						old = this->head;
						HX_STACK_LINE(4572)
						ret1 = old->next;
						HX_STACK_LINE(4572)
						this->head = ret1;
						HX_STACK_LINE(4572)
						if (((this->head == null()))){
							HX_STACK_LINE(4572)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4572)
						old = pre->next;
						HX_STACK_LINE(4572)
						ret1 = old->next;
						HX_STACK_LINE(4572)
						pre->next = ret1;
						HX_STACK_LINE(4572)
						if (((ret1 == null()))){
							HX_STACK_LINE(4572)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4572)
					{
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4572)
						o->elt = null();
						HX_STACK_LINE(4572)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4572)
					this->modified = true;
					HX_STACK_LINE(4572)
					(this->length)--;
					HX_STACK_LINE(4572)
					this->pushmod = true;
					HX_STACK_LINE(4572)
					ret1;
				}
				HX_STACK_LINE(4572)
				ret = true;
				HX_STACK_LINE(4572)
				break;
			}
			HX_STACK_LINE(4572)
			pre = cur;
			HX_STACK_LINE(4572)
			cur = cur->next;
		}
		HX_STACK_LINE(4572)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_BodyListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_try_remove",0xc6ad77bf,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_try_remove","zpp_nape/util/Lists.hx",4576,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4585)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4586)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4587)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4588)
	while((true)){
		HX_STACK_LINE(4588)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4588)
			break;
		}
		HX_STACK_LINE(4589)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4590)
			{
				HX_STACK_LINE(4590)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4590)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4590)
				if (((pre == null()))){
					HX_STACK_LINE(4590)
					old = this->head;
					HX_STACK_LINE(4590)
					ret1 = old->next;
					HX_STACK_LINE(4590)
					this->head = ret1;
					HX_STACK_LINE(4590)
					if (((this->head == null()))){
						HX_STACK_LINE(4590)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4590)
					old = pre->next;
					HX_STACK_LINE(4590)
					ret1 = old->next;
					HX_STACK_LINE(4590)
					pre->next = ret1;
					HX_STACK_LINE(4590)
					if (((ret1 == null()))){
						HX_STACK_LINE(4590)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4590)
				{
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4590)
					o->elt = null();
					HX_STACK_LINE(4590)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4590)
				this->modified = true;
				HX_STACK_LINE(4590)
				(this->length)--;
				HX_STACK_LINE(4590)
				this->pushmod = true;
				HX_STACK_LINE(4590)
				ret1;
			}
			HX_STACK_LINE(4591)
			ret = true;
			HX_STACK_LINE(4592)
			break;
		}
		HX_STACK_LINE(4594)
		pre = cur;
		HX_STACK_LINE(4595)
		cur = cur->next;
	}
	HX_STACK_LINE(4597)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","erase",0xeac82c23,"zpp_nape.util.ZNPList_ZPP_BodyListener.erase","zpp_nape/util/Lists.hx",4600,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4600)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4600)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4600)
	if (((pre == null()))){
		HX_STACK_LINE(4600)
		old = this->head;
		HX_STACK_LINE(4600)
		ret = old->next;
		HX_STACK_LINE(4600)
		this->head = ret;
		HX_STACK_LINE(4600)
		if (((this->head == null()))){
			HX_STACK_LINE(4600)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4600)
		old = pre->next;
		HX_STACK_LINE(4600)
		ret = old->next;
		HX_STACK_LINE(4600)
		pre->next = ret;
		HX_STACK_LINE(4600)
		if (((ret == null()))){
			HX_STACK_LINE(4600)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4600)
	{
		HX_STACK_LINE(4600)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4600)
		o->elt = null();
		HX_STACK_LINE(4600)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
		HX_STACK_LINE(4600)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4600)
	this->modified = true;
	HX_STACK_LINE(4600)
	(this->length)--;
	HX_STACK_LINE(4600)
	this->pushmod = true;
	HX_STACK_LINE(4600)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_erase",0x0749fe8f,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_erase","zpp_nape/util/Lists.hx",4604,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4613)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4614)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4615)
	if (((pre == null()))){
		HX_STACK_LINE(4616)
		old = this->head;
		HX_STACK_LINE(4617)
		ret = old->next;
		HX_STACK_LINE(4618)
		this->head = ret;
		HX_STACK_LINE(4619)
		if (((this->head == null()))){
			HX_STACK_LINE(4619)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4622)
		old = pre->next;
		HX_STACK_LINE(4623)
		ret = old->next;
		HX_STACK_LINE(4624)
		pre->next = ret;
		HX_STACK_LINE(4625)
		if (((ret == null()))){
			HX_STACK_LINE(4625)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4628)
	{
		HX_STACK_LINE(4629)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4638)
		o->elt = null();
		HX_STACK_LINE(4639)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
		HX_STACK_LINE(4640)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4645)
	this->modified = true;
	HX_STACK_LINE(4646)
	(this->length)--;
	HX_STACK_LINE(4647)
	this->pushmod = true;
	HX_STACK_LINE(4648)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","splice",0xfdce179f,"zpp_nape.util.ZNPList_ZPP_BodyListener.splice","zpp_nape/util/Lists.hx",4650,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(4651)
	while((true)){
		HX_STACK_LINE(4651)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(4651)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(4651)
			break;
		}
		HX_STACK_LINE(4651)
		this->erase(pre);
	}
	HX_STACK_LINE(4652)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,splice,return )

Void ZNPList_ZPP_BodyListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","clear",0xc006b4ca,"zpp_nape.util.ZNPList_ZPP_BodyListener.clear","zpp_nape/util/Lists.hx",4655,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4655)
		while((true)){
			HX_STACK_LINE(4655)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(4655)
				break;
			}
			HX_STACK_LINE(4655)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4655)
			this->head = ret->next;
			HX_STACK_LINE(4655)
			{
				HX_STACK_LINE(4655)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4655)
				o->elt = null();
				HX_STACK_LINE(4655)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4655)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4655)
			if (((this->head == null()))){
				HX_STACK_LINE(4655)
				this->pushmod = true;
			}
			HX_STACK_LINE(4655)
			this->modified = true;
			HX_STACK_LINE(4655)
			(this->length)--;
		}
		HX_STACK_LINE(4655)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,clear,(void))

Void ZNPList_ZPP_BodyListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_clear",0xdc888736,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_clear","zpp_nape/util/Lists.hx",4660,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4661)
		while((true)){
			HX_STACK_LINE(4661)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(4661)
				break;
			}
			HX_STACK_LINE(4661)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4661)
			this->head = ret->next;
			HX_STACK_LINE(4661)
			{
				HX_STACK_LINE(4661)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4661)
				o->elt = null();
				HX_STACK_LINE(4661)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4661)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4661)
			if (((this->head == null()))){
				HX_STACK_LINE(4661)
				this->pushmod = true;
			}
			HX_STACK_LINE(4661)
			this->modified = true;
			HX_STACK_LINE(4661)
			(this->length)--;
		}
		HX_STACK_LINE(4662)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_BodyListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","reverse",0x466c859f,"zpp_nape.util.ZNPList_ZPP_BodyListener.reverse","zpp_nape/util/Lists.hx",4665,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4666)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4667)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4668)
		while((true)){
			HX_STACK_LINE(4668)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4668)
				break;
			}
			HX_STACK_LINE(4669)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4670)
			cur->next = pre;
			HX_STACK_LINE(4671)
			this->head = cur;
			HX_STACK_LINE(4672)
			pre = cur;
			HX_STACK_LINE(4673)
			cur = nx;
		}
		HX_STACK_LINE(4675)
		this->modified = true;
		HX_STACK_LINE(4676)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,reverse,(void))

bool ZNPList_ZPP_BodyListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","empty",0xe7857dca,"zpp_nape.util.ZNPList_ZPP_BodyListener.empty","zpp_nape/util/Lists.hx",4681,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4681)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,empty,return )

int ZNPList_ZPP_BodyListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","size",0xac255424,"zpp_nape.util.ZNPList_ZPP_BodyListener.size","zpp_nape/util/Lists.hx",4686,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4686)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,size,return )

bool ZNPList_ZPP_BodyListener_obj::has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","has",0x6ca64957,"zpp_nape.util.ZNPList_ZPP_BodyListener.has","zpp_nape/util/Lists.hx",4689,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4689)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4689)
	{
		HX_STACK_LINE(4689)
		ret = false;
		HX_STACK_LINE(4689)
		{
			HX_STACK_LINE(4689)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4689)
			while((true)){
				HX_STACK_LINE(4689)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(4689)
					break;
				}
				HX_STACK_LINE(4689)
				::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4689)
				if (((npite == obj))){
					HX_STACK_LINE(4689)
					ret = true;
					HX_STACK_LINE(4689)
					break;
				}
				HX_STACK_LINE(4689)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4689)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,has,return )

bool ZNPList_ZPP_BodyListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_has",0x12d068c3,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_has","zpp_nape/util/Lists.hx",4693,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4702)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4703)
	{
		HX_STACK_LINE(4704)
		ret = false;
		HX_STACK_LINE(4705)
		{
			HX_STACK_LINE(4706)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4707)
			while((true)){
				HX_STACK_LINE(4707)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(4707)
					break;
				}
				HX_STACK_LINE(4708)
				::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4710)
				if (((npite == obj))){
					HX_STACK_LINE(4711)
					ret = true;
					HX_STACK_LINE(4712)
					break;
				}
				HX_STACK_LINE(4715)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4719)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","front",0x7e395be6,"zpp_nape.util.ZNPList_ZPP_BodyListener.front","zpp_nape/util/Lists.hx",4724,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4724)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,front,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","back",0xa0e28d8a,"zpp_nape.util.ZNPList_ZPP_BodyListener.back","zpp_nape/util/Lists.hx",4726,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4727)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4728)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4729)
	while((true)){
		HX_STACK_LINE(4729)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4729)
			break;
		}
		HX_STACK_LINE(4730)
		ret = cur;
		HX_STACK_LINE(4731)
		cur = cur->next;
	}
	HX_STACK_LINE(4733)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","iterator_at",0x176f58e1,"zpp_nape.util.ZNPList_ZPP_BodyListener.iterator_at","zpp_nape/util/Lists.hx",4735,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4744)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4745)
	while((true)){
		HX_STACK_LINE(4745)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(4745)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(4745)
			break;
		}
		HX_STACK_LINE(4745)
		ret = ret->next;
	}
	HX_STACK_LINE(4746)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","at",0xbf0d5996,"zpp_nape.util.ZNPList_ZPP_BodyListener.at","zpp_nape/util/Lists.hx",4748,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4757)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4758)
	if (((it != null()))){
		HX_STACK_LINE(4758)
		return it->elt;
	}
	else{
		HX_STACK_LINE(4758)
		return null();
	}
	HX_STACK_LINE(4758)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,at,return )


ZNPList_ZPP_BodyListener_obj::ZNPList_ZPP_BodyListener_obj()
{
}

void ZNPList_ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_BodyListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_BodyListener >(); return inValue; }
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

void ZNPList_ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_BodyListener*/ ,(int)offsetof(ZNPList_ZPP_BodyListener_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_BodyListener_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_BodyListener_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_BodyListener_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_BodyListener_obj::__mClass;

void ZNPList_ZPP_BodyListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_BodyListener"), hx::TCanCast< ZNPList_ZPP_BodyListener_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_BodyListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
