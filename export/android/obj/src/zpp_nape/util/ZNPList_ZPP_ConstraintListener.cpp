#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ConstraintListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","new",0xdd87e258,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.new","zpp_nape/util/Lists.hx",5179,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5189)
	this->length = (int)0;
	HX_STACK_LINE(5188)
	this->pushmod = false;
	HX_STACK_LINE(5187)
	this->modified = false;
	HX_STACK_LINE(5180)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_ConstraintListener_obj::~ZNPList_ZPP_ConstraintListener_obj() { }

Dynamic ZNPList_ZPP_ConstraintListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_ConstraintListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > ZNPList_ZPP_ConstraintListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","begin",0x502c6a21,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.begin","zpp_nape/util/Lists.hx",5185,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5185)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,begin,return )

Void ZNPList_ZPP_ConstraintListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","setbegin",0x2b4cae4f,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.setbegin","zpp_nape/util/Lists.hx",5192,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(5193)
		this->head = i;
		HX_STACK_LINE(5194)
		this->modified = true;
		HX_STACK_LINE(5195)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","add",0xdd7e0419,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.add","zpp_nape/util/Lists.hx",5198,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5198)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5198)
	{
		HX_STACK_LINE(5198)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5198)
		{
			HX_STACK_LINE(5198)
			if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(5198)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5198)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5198)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5198)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5198)
				ret->next = null();
			}
			HX_STACK_LINE(5198)
			Dynamic();
		}
		HX_STACK_LINE(5198)
		ret->elt = o;
		HX_STACK_LINE(5198)
		temp = ret;
	}
	HX_STACK_LINE(5198)
	temp->next = this->head;
	HX_STACK_LINE(5198)
	this->head = temp;
	HX_STACK_LINE(5198)
	this->modified = true;
	HX_STACK_LINE(5198)
	(this->length)++;
	HX_STACK_LINE(5198)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,add,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_add",0x95391685,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_add","zpp_nape/util/Lists.hx",5202,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5211)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5211)
	{
		HX_STACK_LINE(5212)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5213)
		{
			HX_STACK_LINE(5214)
			if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(5215)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5215)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5221)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5222)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5223)
				ret->next = null();
			}
			HX_STACK_LINE(5228)
			Dynamic();
		}
		HX_STACK_LINE(5230)
		ret->elt = o;
		HX_STACK_LINE(5231)
		temp = ret;
	}
	HX_STACK_LINE(5233)
	temp->next = this->head;
	HX_STACK_LINE(5234)
	this->head = temp;
	HX_STACK_LINE(5235)
	this->modified = true;
	HX_STACK_LINE(5236)
	(this->length)++;
	HX_STACK_LINE(5237)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_add,return )

Void ZNPList_ZPP_ConstraintListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","addAll",0xdad48288,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.addAll","zpp_nape/util/Lists.hx",5248,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(5249)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(5250)
		while((true)){
			HX_STACK_LINE(5250)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(5250)
				break;
			}
			HX_STACK_LINE(5251)
			::zpp_nape::callbacks::ZPP_ConstraintListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(5252)
			this->add(i);
			HX_STACK_LINE(5253)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","insert",0xd9b6bc41,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.insert","zpp_nape/util/Lists.hx",5258,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5258)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5258)
	{
		HX_STACK_LINE(5258)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5258)
		{
			HX_STACK_LINE(5258)
			if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(5258)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5258)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5258)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5258)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5258)
				ret->next = null();
			}
			HX_STACK_LINE(5258)
			Dynamic();
		}
		HX_STACK_LINE(5258)
		ret->elt = o;
		HX_STACK_LINE(5258)
		temp = ret;
	}
	HX_STACK_LINE(5258)
	if (((cur == null()))){
		HX_STACK_LINE(5258)
		temp->next = this->head;
		HX_STACK_LINE(5258)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5258)
		temp->next = cur->next;
		HX_STACK_LINE(5258)
		cur->next = temp;
	}
	HX_STACK_LINE(5258)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5258)
	this->pushmod = _g1;
	HX_STACK_LINE(5258)
	(this->length)++;
	HX_STACK_LINE(5258)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_insert",0x9615f555,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_insert","zpp_nape/util/Lists.hx",5262,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5271)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5271)
	{
		HX_STACK_LINE(5272)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5273)
		{
			HX_STACK_LINE(5274)
			if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
				HX_STACK_LINE(5275)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener _g = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5275)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5281)
				ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5282)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5283)
				ret->next = null();
			}
			HX_STACK_LINE(5288)
			Dynamic();
		}
		HX_STACK_LINE(5290)
		ret->elt = o;
		HX_STACK_LINE(5291)
		temp = ret;
	}
	HX_STACK_LINE(5293)
	if (((cur == null()))){
		HX_STACK_LINE(5294)
		temp->next = this->head;
		HX_STACK_LINE(5295)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5298)
		temp->next = cur->next;
		HX_STACK_LINE(5299)
		cur->next = temp;
	}
	HX_STACK_LINE(5301)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5301)
	this->pushmod = _g1;
	HX_STACK_LINE(5302)
	(this->length)++;
	HX_STACK_LINE(5303)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,inlined_insert,return )

Void ZNPList_ZPP_ConstraintListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","pop",0xdd896f89,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.pop","zpp_nape/util/Lists.hx",5306,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5306)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5306)
		this->head = ret->next;
		HX_STACK_LINE(5306)
		{
			HX_STACK_LINE(5306)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5306)
			o->elt = null();
			HX_STACK_LINE(5306)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(5306)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5306)
		if (((this->head == null()))){
			HX_STACK_LINE(5306)
			this->pushmod = true;
		}
		HX_STACK_LINE(5306)
		this->modified = true;
		HX_STACK_LINE(5306)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_pop",0x954481f5,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_pop","zpp_nape/util/Lists.hx",5310,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5319)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5320)
		this->head = ret->next;
		HX_STACK_LINE(5322)
		{
			HX_STACK_LINE(5323)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5332)
			o->elt = null();
			HX_STACK_LINE(5333)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(5334)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5339)
		if (((this->head == null()))){
			HX_STACK_LINE(5339)
			this->pushmod = true;
		}
		HX_STACK_LINE(5340)
		this->modified = true;
		HX_STACK_LINE(5341)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","pop_unsafe",0x29ab195c,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.pop_unsafe","zpp_nape/util/Lists.hx",5344,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5344)
	::zpp_nape::callbacks::ZPP_ConstraintListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5344)
	this->pop();
	HX_STACK_LINE(5344)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_pop_unsafe",0x5c9e6c70,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",5348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5357)
	::zpp_nape::callbacks::ZPP_ConstraintListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5358)
	this->pop();
	HX_STACK_LINE(5359)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_ConstraintListener_obj::remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","remove",0x4062154c,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.remove","zpp_nape/util/Lists.hx",5370,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5370)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5370)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5370)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5370)
		while((true)){
			HX_STACK_LINE(5370)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5370)
				break;
			}
			HX_STACK_LINE(5370)
			if (((cur->elt == obj))){
				HX_STACK_LINE(5370)
				{
					HX_STACK_LINE(5370)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5370)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5370)
					if (((pre == null()))){
						HX_STACK_LINE(5370)
						old = this->head;
						HX_STACK_LINE(5370)
						ret1 = old->next;
						HX_STACK_LINE(5370)
						this->head = ret1;
						HX_STACK_LINE(5370)
						if (((this->head == null()))){
							HX_STACK_LINE(5370)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5370)
						old = pre->next;
						HX_STACK_LINE(5370)
						ret1 = old->next;
						HX_STACK_LINE(5370)
						pre->next = ret1;
						HX_STACK_LINE(5370)
						if (((ret1 == null()))){
							HX_STACK_LINE(5370)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5370)
					{
						HX_STACK_LINE(5370)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5370)
						o->elt = null();
						HX_STACK_LINE(5370)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(5370)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5370)
					this->modified = true;
					HX_STACK_LINE(5370)
					(this->length)--;
					HX_STACK_LINE(5370)
					this->pushmod = true;
					HX_STACK_LINE(5370)
					ret1;
				}
				HX_STACK_LINE(5370)
				ret = true;
				HX_STACK_LINE(5370)
				break;
			}
			HX_STACK_LINE(5370)
			pre = cur;
			HX_STACK_LINE(5370)
			cur = cur->next;
		}
		HX_STACK_LINE(5370)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","try_remove",0x40d54f10,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.try_remove","zpp_nape/util/Lists.hx",5372,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5381)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5382)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5383)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5384)
	while((true)){
		HX_STACK_LINE(5384)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5384)
			break;
		}
		HX_STACK_LINE(5385)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5386)
			this->erase(pre);
			HX_STACK_LINE(5387)
			ret = true;
			HX_STACK_LINE(5388)
			break;
		}
		HX_STACK_LINE(5390)
		pre = cur;
		HX_STACK_LINE(5391)
		cur = cur->next;
	}
	HX_STACK_LINE(5393)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_remove",0xfcc14e60,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_remove","zpp_nape/util/Lists.hx",5406,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5406)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5406)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5406)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5406)
		while((true)){
			HX_STACK_LINE(5406)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5406)
				break;
			}
			HX_STACK_LINE(5406)
			if (((cur->elt == obj))){
				HX_STACK_LINE(5406)
				{
					HX_STACK_LINE(5406)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5406)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5406)
					if (((pre == null()))){
						HX_STACK_LINE(5406)
						old = this->head;
						HX_STACK_LINE(5406)
						ret1 = old->next;
						HX_STACK_LINE(5406)
						this->head = ret1;
						HX_STACK_LINE(5406)
						if (((this->head == null()))){
							HX_STACK_LINE(5406)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5406)
						old = pre->next;
						HX_STACK_LINE(5406)
						ret1 = old->next;
						HX_STACK_LINE(5406)
						pre->next = ret1;
						HX_STACK_LINE(5406)
						if (((ret1 == null()))){
							HX_STACK_LINE(5406)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5406)
					{
						HX_STACK_LINE(5406)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5406)
						o->elt = null();
						HX_STACK_LINE(5406)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(5406)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5406)
					this->modified = true;
					HX_STACK_LINE(5406)
					(this->length)--;
					HX_STACK_LINE(5406)
					this->pushmod = true;
					HX_STACK_LINE(5406)
					ret1;
				}
				HX_STACK_LINE(5406)
				ret = true;
				HX_STACK_LINE(5406)
				break;
			}
			HX_STACK_LINE(5406)
			pre = cur;
			HX_STACK_LINE(5406)
			cur = cur->next;
		}
		HX_STACK_LINE(5406)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_try_remove",0x73c8a224,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_try_remove","zpp_nape/util/Lists.hx",5410,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5419)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5420)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5421)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5422)
	while((true)){
		HX_STACK_LINE(5422)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5422)
			break;
		}
		HX_STACK_LINE(5423)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5424)
			{
				HX_STACK_LINE(5424)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5424)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5424)
				if (((pre == null()))){
					HX_STACK_LINE(5424)
					old = this->head;
					HX_STACK_LINE(5424)
					ret1 = old->next;
					HX_STACK_LINE(5424)
					this->head = ret1;
					HX_STACK_LINE(5424)
					if (((this->head == null()))){
						HX_STACK_LINE(5424)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5424)
					old = pre->next;
					HX_STACK_LINE(5424)
					ret1 = old->next;
					HX_STACK_LINE(5424)
					pre->next = ret1;
					HX_STACK_LINE(5424)
					if (((ret1 == null()))){
						HX_STACK_LINE(5424)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5424)
				{
					HX_STACK_LINE(5424)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5424)
					o->elt = null();
					HX_STACK_LINE(5424)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
					HX_STACK_LINE(5424)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5424)
				this->modified = true;
				HX_STACK_LINE(5424)
				(this->length)--;
				HX_STACK_LINE(5424)
				this->pushmod = true;
				HX_STACK_LINE(5424)
				ret1;
			}
			HX_STACK_LINE(5425)
			ret = true;
			HX_STACK_LINE(5426)
			break;
		}
		HX_STACK_LINE(5428)
		pre = cur;
		HX_STACK_LINE(5429)
		cur = cur->next;
	}
	HX_STACK_LINE(5431)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","erase",0x12f368de,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.erase","zpp_nape/util/Lists.hx",5434,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5434)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5434)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5434)
	if (((pre == null()))){
		HX_STACK_LINE(5434)
		old = this->head;
		HX_STACK_LINE(5434)
		ret = old->next;
		HX_STACK_LINE(5434)
		this->head = ret;
		HX_STACK_LINE(5434)
		if (((this->head == null()))){
			HX_STACK_LINE(5434)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5434)
		old = pre->next;
		HX_STACK_LINE(5434)
		ret = old->next;
		HX_STACK_LINE(5434)
		pre->next = ret;
		HX_STACK_LINE(5434)
		if (((ret == null()))){
			HX_STACK_LINE(5434)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5434)
	{
		HX_STACK_LINE(5434)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5434)
		o->elt = null();
		HX_STACK_LINE(5434)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
		HX_STACK_LINE(5434)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5434)
	this->modified = true;
	HX_STACK_LINE(5434)
	(this->length)--;
	HX_STACK_LINE(5434)
	this->pushmod = true;
	HX_STACK_LINE(5434)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_erase",0x7d68ee4a,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_erase","zpp_nape/util/Lists.hx",5438,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5447)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5448)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5449)
	if (((pre == null()))){
		HX_STACK_LINE(5450)
		old = this->head;
		HX_STACK_LINE(5451)
		ret = old->next;
		HX_STACK_LINE(5452)
		this->head = ret;
		HX_STACK_LINE(5453)
		if (((this->head == null()))){
			HX_STACK_LINE(5453)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5456)
		old = pre->next;
		HX_STACK_LINE(5457)
		ret = old->next;
		HX_STACK_LINE(5458)
		pre->next = ret;
		HX_STACK_LINE(5459)
		if (((ret == null()))){
			HX_STACK_LINE(5459)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5462)
	{
		HX_STACK_LINE(5463)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5472)
		o->elt = null();
		HX_STACK_LINE(5473)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
		HX_STACK_LINE(5474)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5479)
	this->modified = true;
	HX_STACK_LINE(5480)
	(this->length)--;
	HX_STACK_LINE(5481)
	this->pushmod = true;
	HX_STACK_LINE(5482)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","splice",0xfb77fe84,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.splice","zpp_nape/util/Lists.hx",5484,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(5485)
	while((true)){
		HX_STACK_LINE(5485)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5485)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(5485)
			break;
		}
		HX_STACK_LINE(5485)
		this->erase(pre);
	}
	HX_STACK_LINE(5486)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,splice,return )

Void ZNPList_ZPP_ConstraintListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","clear",0xe831f185,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.clear","zpp_nape/util/Lists.hx",5489,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5489)
		while((true)){
			HX_STACK_LINE(5489)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5489)
				break;
			}
			HX_STACK_LINE(5489)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5489)
			this->head = ret->next;
			HX_STACK_LINE(5489)
			{
				HX_STACK_LINE(5489)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5489)
				o->elt = null();
				HX_STACK_LINE(5489)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5489)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5489)
			if (((this->head == null()))){
				HX_STACK_LINE(5489)
				this->pushmod = true;
			}
			HX_STACK_LINE(5489)
			this->modified = true;
			HX_STACK_LINE(5489)
			(this->length)--;
		}
		HX_STACK_LINE(5489)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_clear",0x52a776f1,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_clear","zpp_nape/util/Lists.hx",5494,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5495)
		while((true)){
			HX_STACK_LINE(5495)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5495)
				break;
			}
			HX_STACK_LINE(5495)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5495)
			this->head = ret->next;
			HX_STACK_LINE(5495)
			{
				HX_STACK_LINE(5495)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5495)
				o->elt = null();
				HX_STACK_LINE(5495)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5495)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5495)
			if (((this->head == null()))){
				HX_STACK_LINE(5495)
				this->pushmod = true;
			}
			HX_STACK_LINE(5495)
			this->modified = true;
			HX_STACK_LINE(5495)
			(this->length)--;
		}
		HX_STACK_LINE(5496)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","reverse",0x3d6ca71a,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.reverse","zpp_nape/util/Lists.hx",5499,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5500)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5501)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5502)
		while((true)){
			HX_STACK_LINE(5502)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5502)
				break;
			}
			HX_STACK_LINE(5503)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5504)
			cur->next = pre;
			HX_STACK_LINE(5505)
			this->head = cur;
			HX_STACK_LINE(5506)
			pre = cur;
			HX_STACK_LINE(5507)
			cur = nx;
		}
		HX_STACK_LINE(5509)
		this->modified = true;
		HX_STACK_LINE(5510)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,reverse,(void))

bool ZNPList_ZPP_ConstraintListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","empty",0x0fb0ba85,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.empty","zpp_nape/util/Lists.hx",5515,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5515)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,empty,return )

int ZNPList_ZPP_ConstraintListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","size",0xfcaf47c9,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.size","zpp_nape/util/Lists.hx",5520,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5520)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,size,return )

bool ZNPList_ZPP_ConstraintListener_obj::has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","has",0xdd835152,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.has","zpp_nape/util/Lists.hx",5523,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5523)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5523)
	{
		HX_STACK_LINE(5523)
		ret = false;
		HX_STACK_LINE(5523)
		{
			HX_STACK_LINE(5523)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5523)
			while((true)){
				HX_STACK_LINE(5523)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5523)
					break;
				}
				HX_STACK_LINE(5523)
				::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5523)
				if (((npite == obj))){
					HX_STACK_LINE(5523)
					ret = true;
					HX_STACK_LINE(5523)
					break;
				}
				HX_STACK_LINE(5523)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5523)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,has,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_has",0x953e63be,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_has","zpp_nape/util/Lists.hx",5527,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5536)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5537)
	{
		HX_STACK_LINE(5538)
		ret = false;
		HX_STACK_LINE(5539)
		{
			HX_STACK_LINE(5540)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5541)
			while((true)){
				HX_STACK_LINE(5541)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5541)
					break;
				}
				HX_STACK_LINE(5542)
				::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5544)
				if (((npite == obj))){
					HX_STACK_LINE(5545)
					ret = true;
					HX_STACK_LINE(5546)
					break;
				}
				HX_STACK_LINE(5549)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5553)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","front",0xa66498a1,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.front","zpp_nape/util/Lists.hx",5558,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5558)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,front,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","back",0xf16c812f,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.back","zpp_nape/util/Lists.hx",5560,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5561)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5562)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5563)
	while((true)){
		HX_STACK_LINE(5563)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5563)
			break;
		}
		HX_STACK_LINE(5564)
		ret = cur;
		HX_STACK_LINE(5565)
		cur = cur->next;
	}
	HX_STACK_LINE(5567)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","iterator_at",0x99dd53dc,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.iterator_at","zpp_nape/util/Lists.hx",5569,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5578)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5579)
	while((true)){
		HX_STACK_LINE(5579)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5579)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(5579)
			break;
		}
		HX_STACK_LINE(5579)
		ret = ret->next;
	}
	HX_STACK_LINE(5580)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","at",0xae56a9fb,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.at","zpp_nape/util/Lists.hx",5582,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5591)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5592)
	if (((it != null()))){
		HX_STACK_LINE(5592)
		return it->elt;
	}
	else{
		HX_STACK_LINE(5592)
		return null();
	}
	HX_STACK_LINE(5592)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,at,return )


ZNPList_ZPP_ConstraintListener_obj::ZNPList_ZPP_ConstraintListener_obj()
{
}

void ZNPList_ZPP_ConstraintListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ConstraintListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ConstraintListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ConstraintListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener >(); return inValue; }
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

void ZNPList_ZPP_ConstraintListener_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ConstraintListener*/ ,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_ConstraintListener_obj::__mClass;

void ZNPList_ZPP_ConstraintListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ConstraintListener"), hx::TCanCast< ZNPList_ZPP_ConstraintListener_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_ConstraintListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
