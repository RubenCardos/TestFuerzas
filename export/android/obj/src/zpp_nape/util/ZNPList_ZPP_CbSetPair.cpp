#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbSetPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","new",0x5bf1931a,"zpp_nape.util.ZNPList_ZPP_CbSetPair.new","zpp_nape/util/Lists.hx",4762,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4772)
	this->length = (int)0;
	HX_STACK_LINE(4771)
	this->pushmod = false;
	HX_STACK_LINE(4770)
	this->modified = false;
	HX_STACK_LINE(4763)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CbSetPair_obj::~ZNPList_ZPP_CbSetPair_obj() { }

Dynamic ZNPList_ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > ZNPList_ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > result = new ZNPList_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > result = new ZNPList_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","begin",0x80f54f63,"zpp_nape.util.ZNPList_ZPP_CbSetPair.begin","zpp_nape/util/Lists.hx",4768,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4768)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,begin,return )

Void ZNPList_ZPP_CbSetPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","setbegin",0x3100fe4d,"zpp_nape.util.ZNPList_ZPP_CbSetPair.setbegin","zpp_nape/util/Lists.hx",4775,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(4776)
		this->head = i;
		HX_STACK_LINE(4777)
		this->modified = true;
		HX_STACK_LINE(4778)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::add( ::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","add",0x5be7b4db,"zpp_nape.util.ZNPList_ZPP_CbSetPair.add","zpp_nape/util/Lists.hx",4781,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4781)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4781)
	{
		HX_STACK_LINE(4781)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4781)
		{
			HX_STACK_LINE(4781)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(4781)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair _g = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4781)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4781)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(4781)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4781)
				ret->next = null();
			}
			HX_STACK_LINE(4781)
			Dynamic();
		}
		HX_STACK_LINE(4781)
		ret->elt = o;
		HX_STACK_LINE(4781)
		temp = ret;
	}
	HX_STACK_LINE(4781)
	temp->next = this->head;
	HX_STACK_LINE(4781)
	this->head = temp;
	HX_STACK_LINE(4781)
	this->modified = true;
	HX_STACK_LINE(4781)
	(this->length)++;
	HX_STACK_LINE(4781)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,add,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_add",0xf7c45947,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_add","zpp_nape/util/Lists.hx",4785,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4794)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4794)
	{
		HX_STACK_LINE(4795)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4796)
		{
			HX_STACK_LINE(4797)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(4798)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair _g = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4798)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4804)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(4805)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4806)
				ret->next = null();
			}
			HX_STACK_LINE(4811)
			Dynamic();
		}
		HX_STACK_LINE(4813)
		ret->elt = o;
		HX_STACK_LINE(4814)
		temp = ret;
	}
	HX_STACK_LINE(4816)
	temp->next = this->head;
	HX_STACK_LINE(4817)
	this->head = temp;
	HX_STACK_LINE(4818)
	this->modified = true;
	HX_STACK_LINE(4819)
	(this->length)++;
	HX_STACK_LINE(4820)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_add,return )

Void ZNPList_ZPP_CbSetPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbSetPair x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","addAll",0x59d43706,"zpp_nape.util.ZNPList_ZPP_CbSetPair.addAll","zpp_nape/util/Lists.hx",4831,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(4832)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(4833)
		while((true)){
			HX_STACK_LINE(4833)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(4833)
				break;
			}
			HX_STACK_LINE(4834)
			::zpp_nape::callbacks::ZPP_CbSetPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4835)
			this->add(i);
			HX_STACK_LINE(4836)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur,::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","insert",0x58b670bf,"zpp_nape.util.ZNPList_ZPP_CbSetPair.insert","zpp_nape/util/Lists.hx",4841,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4841)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4841)
	{
		HX_STACK_LINE(4841)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4841)
		{
			HX_STACK_LINE(4841)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(4841)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair _g = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4841)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4841)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(4841)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4841)
				ret->next = null();
			}
			HX_STACK_LINE(4841)
			Dynamic();
		}
		HX_STACK_LINE(4841)
		ret->elt = o;
		HX_STACK_LINE(4841)
		temp = ret;
	}
	HX_STACK_LINE(4841)
	if (((cur == null()))){
		HX_STACK_LINE(4841)
		temp->next = this->head;
		HX_STACK_LINE(4841)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4841)
		temp->next = cur->next;
		HX_STACK_LINE(4841)
		cur->next = temp;
	}
	HX_STACK_LINE(4841)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4841)
	this->pushmod = _g1;
	HX_STACK_LINE(4841)
	(this->length)++;
	HX_STACK_LINE(4841)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur,::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_insert",0x3cbb57d3,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_insert","zpp_nape/util/Lists.hx",4845,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4854)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4854)
	{
		HX_STACK_LINE(4855)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4856)
		{
			HX_STACK_LINE(4857)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(4858)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair _g = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4858)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4864)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(4865)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4866)
				ret->next = null();
			}
			HX_STACK_LINE(4871)
			Dynamic();
		}
		HX_STACK_LINE(4873)
		ret->elt = o;
		HX_STACK_LINE(4874)
		temp = ret;
	}
	HX_STACK_LINE(4876)
	if (((cur == null()))){
		HX_STACK_LINE(4877)
		temp->next = this->head;
		HX_STACK_LINE(4878)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4881)
		temp->next = cur->next;
		HX_STACK_LINE(4882)
		cur->next = temp;
	}
	HX_STACK_LINE(4884)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4884)
	this->pushmod = _g1;
	HX_STACK_LINE(4885)
	(this->length)++;
	HX_STACK_LINE(4886)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,inlined_insert,return )

Void ZNPList_ZPP_CbSetPair_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","pop",0x5bf3204b,"zpp_nape.util.ZNPList_ZPP_CbSetPair.pop","zpp_nape/util/Lists.hx",4889,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4889)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4889)
		this->head = ret->next;
		HX_STACK_LINE(4889)
		{
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4889)
			o->elt = null();
			HX_STACK_LINE(4889)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4889)
		if (((this->head == null()))){
			HX_STACK_LINE(4889)
			this->pushmod = true;
		}
		HX_STACK_LINE(4889)
		this->modified = true;
		HX_STACK_LINE(4889)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,pop,(void))

Void ZNPList_ZPP_CbSetPair_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_pop",0xf7cfc4b7,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_pop","zpp_nape/util/Lists.hx",4893,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4902)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4903)
		this->head = ret->next;
		HX_STACK_LINE(4905)
		{
			HX_STACK_LINE(4906)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4915)
			o->elt = null();
			HX_STACK_LINE(4916)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(4917)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4922)
		if (((this->head == null()))){
			HX_STACK_LINE(4922)
			this->pushmod = true;
		}
		HX_STACK_LINE(4923)
		this->modified = true;
		HX_STACK_LINE(4924)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","pop_unsafe",0x4111e4da,"zpp_nape.util.ZNPList_ZPP_CbSetPair.pop_unsafe","zpp_nape/util/Lists.hx",4927,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4927)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4927)
	this->pop();
	HX_STACK_LINE(4927)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_pop_unsafe",0x8b19e5ee,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4931,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4940)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4941)
	this->pop();
	HX_STACK_LINE(4942)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CbSetPair_obj::remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","remove",0xbf61c9ca,"zpp_nape.util.ZNPList_ZPP_CbSetPair.remove","zpp_nape/util/Lists.hx",4953,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4953)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4953)
		while((true)){
			HX_STACK_LINE(4953)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4953)
				break;
			}
			HX_STACK_LINE(4953)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4953)
				{
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4953)
					if (((pre == null()))){
						HX_STACK_LINE(4953)
						old = this->head;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						this->head = ret1;
						HX_STACK_LINE(4953)
						if (((this->head == null()))){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4953)
						old = pre->next;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						pre->next = ret1;
						HX_STACK_LINE(4953)
						if (((ret1 == null()))){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4953)
					{
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4953)
						o->elt = null();
						HX_STACK_LINE(4953)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4953)
					this->modified = true;
					HX_STACK_LINE(4953)
					(this->length)--;
					HX_STACK_LINE(4953)
					this->pushmod = true;
					HX_STACK_LINE(4953)
					ret1;
				}
				HX_STACK_LINE(4953)
				ret = true;
				HX_STACK_LINE(4953)
				break;
			}
			HX_STACK_LINE(4953)
			pre = cur;
			HX_STACK_LINE(4953)
			cur = cur->next;
		}
		HX_STACK_LINE(4953)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,remove,(void))

bool ZNPList_ZPP_CbSetPair_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","try_remove",0x583c1a8e,"zpp_nape.util.ZNPList_ZPP_CbSetPair.try_remove","zpp_nape/util/Lists.hx",4955,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4964)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4965)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4966)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4967)
	while((true)){
		HX_STACK_LINE(4967)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4967)
			break;
		}
		HX_STACK_LINE(4968)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4969)
			this->erase(pre);
			HX_STACK_LINE(4970)
			ret = true;
			HX_STACK_LINE(4971)
			break;
		}
		HX_STACK_LINE(4973)
		pre = cur;
		HX_STACK_LINE(4974)
		cur = cur->next;
	}
	HX_STACK_LINE(4976)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,try_remove,return )

Void ZNPList_ZPP_CbSetPair_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_remove",0xa366b0de,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_remove","zpp_nape/util/Lists.hx",4989,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4989)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4989)
		while((true)){
			HX_STACK_LINE(4989)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4989)
				break;
			}
			HX_STACK_LINE(4989)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4989)
				{
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4989)
					if (((pre == null()))){
						HX_STACK_LINE(4989)
						old = this->head;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						this->head = ret1;
						HX_STACK_LINE(4989)
						if (((this->head == null()))){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4989)
						old = pre->next;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						pre->next = ret1;
						HX_STACK_LINE(4989)
						if (((ret1 == null()))){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4989)
					{
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4989)
						o->elt = null();
						HX_STACK_LINE(4989)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4989)
					this->modified = true;
					HX_STACK_LINE(4989)
					(this->length)--;
					HX_STACK_LINE(4989)
					this->pushmod = true;
					HX_STACK_LINE(4989)
					ret1;
				}
				HX_STACK_LINE(4989)
				ret = true;
				HX_STACK_LINE(4989)
				break;
			}
			HX_STACK_LINE(4989)
			pre = cur;
			HX_STACK_LINE(4989)
			cur = cur->next;
		}
		HX_STACK_LINE(4989)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbSetPair_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_try_remove",0xa2441ba2,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_try_remove","zpp_nape/util/Lists.hx",4993,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5002)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5003)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5004)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5005)
	while((true)){
		HX_STACK_LINE(5005)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5005)
			break;
		}
		HX_STACK_LINE(5006)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5007)
			{
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5007)
				if (((pre == null()))){
					HX_STACK_LINE(5007)
					old = this->head;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					this->head = ret1;
					HX_STACK_LINE(5007)
					if (((this->head == null()))){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5007)
					old = pre->next;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					pre->next = ret1;
					HX_STACK_LINE(5007)
					if (((ret1 == null()))){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5007)
				{
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5007)
					o->elt = null();
					HX_STACK_LINE(5007)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5007)
				this->modified = true;
				HX_STACK_LINE(5007)
				(this->length)--;
				HX_STACK_LINE(5007)
				this->pushmod = true;
				HX_STACK_LINE(5007)
				ret1;
			}
			HX_STACK_LINE(5008)
			ret = true;
			HX_STACK_LINE(5009)
			break;
		}
		HX_STACK_LINE(5011)
		pre = cur;
		HX_STACK_LINE(5012)
		cur = cur->next;
	}
	HX_STACK_LINE(5014)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","erase",0x43bc4e20,"zpp_nape.util.ZNPList_ZPP_CbSetPair.erase","zpp_nape/util/Lists.hx",5017,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5017)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5017)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5017)
	if (((pre == null()))){
		HX_STACK_LINE(5017)
		old = this->head;
		HX_STACK_LINE(5017)
		ret = old->next;
		HX_STACK_LINE(5017)
		this->head = ret;
		HX_STACK_LINE(5017)
		if (((this->head == null()))){
			HX_STACK_LINE(5017)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5017)
		old = pre->next;
		HX_STACK_LINE(5017)
		ret = old->next;
		HX_STACK_LINE(5017)
		pre->next = ret;
		HX_STACK_LINE(5017)
		if (((ret == null()))){
			HX_STACK_LINE(5017)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5017)
	{
		HX_STACK_LINE(5017)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5017)
		o->elt = null();
		HX_STACK_LINE(5017)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
		HX_STACK_LINE(5017)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5017)
	this->modified = true;
	HX_STACK_LINE(5017)
	(this->length)--;
	HX_STACK_LINE(5017)
	this->pushmod = true;
	HX_STACK_LINE(5017)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_erase",0x0b5be58c,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_erase","zpp_nape/util/Lists.hx",5021,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5030)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5031)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5032)
	if (((pre == null()))){
		HX_STACK_LINE(5033)
		old = this->head;
		HX_STACK_LINE(5034)
		ret = old->next;
		HX_STACK_LINE(5035)
		this->head = ret;
		HX_STACK_LINE(5036)
		if (((this->head == null()))){
			HX_STACK_LINE(5036)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5039)
		old = pre->next;
		HX_STACK_LINE(5040)
		ret = old->next;
		HX_STACK_LINE(5041)
		pre->next = ret;
		HX_STACK_LINE(5042)
		if (((ret == null()))){
			HX_STACK_LINE(5042)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5045)
	{
		HX_STACK_LINE(5046)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5055)
		o->elt = null();
		HX_STACK_LINE(5056)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
		HX_STACK_LINE(5057)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5062)
	this->modified = true;
	HX_STACK_LINE(5063)
	(this->length)--;
	HX_STACK_LINE(5064)
	this->pushmod = true;
	HX_STACK_LINE(5065)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","splice",0x7a77b302,"zpp_nape.util.ZNPList_ZPP_CbSetPair.splice","zpp_nape/util/Lists.hx",5067,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(5068)
	while((true)){
		HX_STACK_LINE(5068)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5068)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(5068)
			break;
		}
		HX_STACK_LINE(5068)
		this->erase(pre);
	}
	HX_STACK_LINE(5069)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,splice,return )

Void ZNPList_ZPP_CbSetPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","clear",0x18fad6c7,"zpp_nape.util.ZNPList_ZPP_CbSetPair.clear","zpp_nape/util/Lists.hx",5072,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5072)
		while((true)){
			HX_STACK_LINE(5072)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5072)
				break;
			}
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5072)
			this->head = ret->next;
			HX_STACK_LINE(5072)
			{
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5072)
				o->elt = null();
				HX_STACK_LINE(5072)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5072)
			if (((this->head == null()))){
				HX_STACK_LINE(5072)
				this->pushmod = true;
			}
			HX_STACK_LINE(5072)
			this->modified = true;
			HX_STACK_LINE(5072)
			(this->length)--;
		}
		HX_STACK_LINE(5072)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,clear,(void))

Void ZNPList_ZPP_CbSetPair_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_clear",0xe09a6e33,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_clear","zpp_nape/util/Lists.hx",5077,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5078)
		while((true)){
			HX_STACK_LINE(5078)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5078)
				break;
			}
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5078)
			this->head = ret->next;
			HX_STACK_LINE(5078)
			{
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5078)
				o->elt = null();
				HX_STACK_LINE(5078)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5078)
			if (((this->head == null()))){
				HX_STACK_LINE(5078)
				this->pushmod = true;
			}
			HX_STACK_LINE(5078)
			this->modified = true;
			HX_STACK_LINE(5078)
			(this->length)--;
		}
		HX_STACK_LINE(5079)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbSetPair_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","reverse",0xde2ae0dc,"zpp_nape.util.ZNPList_ZPP_CbSetPair.reverse","zpp_nape/util/Lists.hx",5082,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5083)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5085)
		while((true)){
			HX_STACK_LINE(5085)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5085)
				break;
			}
			HX_STACK_LINE(5086)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5087)
			cur->next = pre;
			HX_STACK_LINE(5088)
			this->head = cur;
			HX_STACK_LINE(5089)
			pre = cur;
			HX_STACK_LINE(5090)
			cur = nx;
		}
		HX_STACK_LINE(5092)
		this->modified = true;
		HX_STACK_LINE(5093)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,reverse,(void))

bool ZNPList_ZPP_CbSetPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","empty",0x40799fc7,"zpp_nape.util.ZNPList_ZPP_CbSetPair.empty","zpp_nape/util/Lists.hx",5098,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5098)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,empty,return )

int ZNPList_ZPP_CbSetPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","size",0x1ac040c7,"zpp_nape.util.ZNPList_ZPP_CbSetPair.size","zpp_nape/util/Lists.hx",5103,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5103)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,size,return )

bool ZNPList_ZPP_CbSetPair_obj::has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","has",0x5bed0214,"zpp_nape.util.ZNPList_ZPP_CbSetPair.has","zpp_nape/util/Lists.hx",5106,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5106)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5106)
	{
		HX_STACK_LINE(5106)
		ret = false;
		HX_STACK_LINE(5106)
		{
			HX_STACK_LINE(5106)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5106)
			while((true)){
				HX_STACK_LINE(5106)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5106)
					break;
				}
				HX_STACK_LINE(5106)
				::zpp_nape::callbacks::ZPP_CbSetPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5106)
				if (((npite == obj))){
					HX_STACK_LINE(5106)
					ret = true;
					HX_STACK_LINE(5106)
					break;
				}
				HX_STACK_LINE(5106)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5106)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,has,return )

bool ZNPList_ZPP_CbSetPair_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","inlined_has",0xf7c9a680,"zpp_nape.util.ZNPList_ZPP_CbSetPair.inlined_has","zpp_nape/util/Lists.hx",5110,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5119)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5120)
	{
		HX_STACK_LINE(5121)
		ret = false;
		HX_STACK_LINE(5122)
		{
			HX_STACK_LINE(5123)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5124)
			while((true)){
				HX_STACK_LINE(5124)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5124)
					break;
				}
				HX_STACK_LINE(5125)
				::zpp_nape::callbacks::ZPP_CbSetPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5127)
				if (((npite == obj))){
					HX_STACK_LINE(5128)
					ret = true;
					HX_STACK_LINE(5129)
					break;
				}
				HX_STACK_LINE(5132)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5136)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","front",0xd72d7de3,"zpp_nape.util.ZNPList_ZPP_CbSetPair.front","zpp_nape/util/Lists.hx",5141,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5141)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,front,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","back",0x0f7d7a2d,"zpp_nape.util.ZNPList_ZPP_CbSetPair.back","zpp_nape/util/Lists.hx",5143,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5144)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5145)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5146)
	while((true)){
		HX_STACK_LINE(5146)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5146)
			break;
		}
		HX_STACK_LINE(5147)
		ret = cur;
		HX_STACK_LINE(5148)
		cur = cur->next;
	}
	HX_STACK_LINE(5150)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","iterator_at",0xfc68969e,"zpp_nape.util.ZNPList_ZPP_CbSetPair.iterator_at","zpp_nape/util/Lists.hx",5152,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5161)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5162)
	while((true)){
		HX_STACK_LINE(5162)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5162)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(5162)
			break;
		}
		HX_STACK_LINE(5162)
		ret = ret->next;
	}
	HX_STACK_LINE(5163)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSetPair","at",0x6a06c779,"zpp_nape.util.ZNPList_ZPP_CbSetPair.at","zpp_nape/util/Lists.hx",5165,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5174)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5175)
	if (((it != null()))){
		HX_STACK_LINE(5175)
		return it->elt;
	}
	else{
		HX_STACK_LINE(5175)
		return null();
	}
	HX_STACK_LINE(5175)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,at,return )


ZNPList_ZPP_CbSetPair_obj::ZNPList_ZPP_CbSetPair_obj()
{
}

void ZNPList_ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CbSetPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbSetPair >(); return inValue; }
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

void ZNPList_ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CbSetPair*/ ,(int)offsetof(ZNPList_ZPP_CbSetPair_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbSetPair_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbSetPair_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CbSetPair_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbSetPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbSetPair_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_CbSetPair_obj::__mClass;

void ZNPList_ZPP_CbSetPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbSetPair"), hx::TCanCast< ZNPList_ZPP_CbSetPair_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_CbSetPair_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
