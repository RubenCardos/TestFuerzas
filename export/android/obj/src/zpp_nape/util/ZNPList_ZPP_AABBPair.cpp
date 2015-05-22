#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","new",0x9a71cb61,"zpp_nape.util.ZNPList_ZPP_AABBPair.new","zpp_nape/util/Lists.hx",8932,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8942)
	this->length = (int)0;
	HX_STACK_LINE(8941)
	this->pushmod = false;
	HX_STACK_LINE(8940)
	this->modified = false;
	HX_STACK_LINE(8933)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_AABBPair_obj::~ZNPList_ZPP_AABBPair_obj() { }

Dynamic ZNPList_ZPP_AABBPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > ZNPList_ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","begin",0x8a29676a,"zpp_nape.util.ZNPList_ZPP_AABBPair.begin","zpp_nape/util/Lists.hx",8938,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8938)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,begin,return )

Void ZNPList_ZPP_AABBPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBPair i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","setbegin",0xc20c64a6,"zpp_nape.util.ZNPList_ZPP_AABBPair.setbegin","zpp_nape/util/Lists.hx",8945,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(8946)
		this->head = i;
		HX_STACK_LINE(8947)
		this->modified = true;
		HX_STACK_LINE(8948)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,setbegin,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","add",0x9a67ed22,"zpp_nape.util.ZNPList_ZPP_AABBPair.add","zpp_nape/util/Lists.hx",8951,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8951)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8951)
	{
		HX_STACK_LINE(8951)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8951)
		{
			HX_STACK_LINE(8951)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(8951)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair _g = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8951)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8951)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(8951)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8951)
				ret->next = null();
			}
			HX_STACK_LINE(8951)
			Dynamic();
		}
		HX_STACK_LINE(8951)
		ret->elt = o;
		HX_STACK_LINE(8951)
		temp = ret;
	}
	HX_STACK_LINE(8951)
	temp->next = this->head;
	HX_STACK_LINE(8951)
	this->head = temp;
	HX_STACK_LINE(8951)
	this->modified = true;
	HX_STACK_LINE(8951)
	(this->length)++;
	HX_STACK_LINE(8951)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,add,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_add",0x0630b08e,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_add","zpp_nape/util/Lists.hx",8955,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8964)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8964)
	{
		HX_STACK_LINE(8965)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8966)
		{
			HX_STACK_LINE(8967)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(8968)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair _g = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8968)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8974)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(8975)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8976)
				ret->next = null();
			}
			HX_STACK_LINE(8981)
			Dynamic();
		}
		HX_STACK_LINE(8983)
		ret->elt = o;
		HX_STACK_LINE(8984)
		temp = ret;
	}
	HX_STACK_LINE(8986)
	temp->next = this->head;
	HX_STACK_LINE(8987)
	this->head = temp;
	HX_STACK_LINE(8988)
	this->modified = true;
	HX_STACK_LINE(8989)
	(this->length)++;
	HX_STACK_LINE(8990)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_add,return )

Void ZNPList_ZPP_AABBPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBPair x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","addAll",0x5e35251f,"zpp_nape.util.ZNPList_ZPP_AABBPair.addAll","zpp_nape/util/Lists.hx",9001,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(9002)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9003)
		while((true)){
			HX_STACK_LINE(9003)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(9003)
				break;
			}
			HX_STACK_LINE(9004)
			::zpp_nape::space::ZPP_AABBPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9005)
			this->add(i);
			HX_STACK_LINE(9006)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","insert",0x5d175ed8,"zpp_nape.util.ZNPList_ZPP_AABBPair.insert","zpp_nape/util/Lists.hx",9011,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9011)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9011)
	{
		HX_STACK_LINE(9011)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9011)
		{
			HX_STACK_LINE(9011)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(9011)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair _g = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9011)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9011)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9011)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9011)
				ret->next = null();
			}
			HX_STACK_LINE(9011)
			Dynamic();
		}
		HX_STACK_LINE(9011)
		ret->elt = o;
		HX_STACK_LINE(9011)
		temp = ret;
	}
	HX_STACK_LINE(9011)
	if (((cur == null()))){
		HX_STACK_LINE(9011)
		temp->next = this->head;
		HX_STACK_LINE(9011)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9011)
		temp->next = cur->next;
		HX_STACK_LINE(9011)
		cur->next = temp;
	}
	HX_STACK_LINE(9011)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(9011)
	this->pushmod = _g1;
	HX_STACK_LINE(9011)
	(this->length)++;
	HX_STACK_LINE(9011)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_insert",0xaa4d86ec,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_insert","zpp_nape/util/Lists.hx",9015,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9024)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9024)
	{
		HX_STACK_LINE(9025)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9026)
		{
			HX_STACK_LINE(9027)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(9028)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair _g = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9028)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9034)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9035)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9036)
				ret->next = null();
			}
			HX_STACK_LINE(9041)
			Dynamic();
		}
		HX_STACK_LINE(9043)
		ret->elt = o;
		HX_STACK_LINE(9044)
		temp = ret;
	}
	HX_STACK_LINE(9046)
	if (((cur == null()))){
		HX_STACK_LINE(9047)
		temp->next = this->head;
		HX_STACK_LINE(9048)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9051)
		temp->next = cur->next;
		HX_STACK_LINE(9052)
		cur->next = temp;
	}
	HX_STACK_LINE(9054)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(9054)
	this->pushmod = _g1;
	HX_STACK_LINE(9055)
	(this->length)++;
	HX_STACK_LINE(9056)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,inlined_insert,return )

Void ZNPList_ZPP_AABBPair_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","pop",0x9a735892,"zpp_nape.util.ZNPList_ZPP_AABBPair.pop","zpp_nape/util/Lists.hx",9059,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9059)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9059)
		this->head = ret->next;
		HX_STACK_LINE(9059)
		{
			HX_STACK_LINE(9059)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9059)
			o->elt = null();
			HX_STACK_LINE(9059)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(9059)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9059)
		if (((this->head == null()))){
			HX_STACK_LINE(9059)
			this->pushmod = true;
		}
		HX_STACK_LINE(9059)
		this->modified = true;
		HX_STACK_LINE(9059)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_pop",0x063c1bfe,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_pop","zpp_nape/util/Lists.hx",9063,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9072)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9073)
		this->head = ret->next;
		HX_STACK_LINE(9075)
		{
			HX_STACK_LINE(9076)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9085)
			o->elt = null();
			HX_STACK_LINE(9086)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(9087)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9092)
		if (((this->head == null()))){
			HX_STACK_LINE(9092)
			this->pushmod = true;
		}
		HX_STACK_LINE(9093)
		this->modified = true;
		HX_STACK_LINE(9094)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","pop_unsafe",0xb8865373,"zpp_nape.util.ZNPList_ZPP_AABBPair.pop_unsafe","zpp_nape/util/Lists.hx",9097,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9097)
	::zpp_nape::space::ZPP_AABBPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9097)
	this->pop();
	HX_STACK_LINE(9097)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_pop_unsafe",0x63f41587,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_pop_unsafe","zpp_nape/util/Lists.hx",9101,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9110)
	::zpp_nape::space::ZPP_AABBPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9111)
	this->pop();
	HX_STACK_LINE(9112)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_AABBPair_obj::remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","remove",0xc3c2b7e3,"zpp_nape.util.ZNPList_ZPP_AABBPair.remove","zpp_nape/util/Lists.hx",9123,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9123)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9123)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9123)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9123)
		while((true)){
			HX_STACK_LINE(9123)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(9123)
				break;
			}
			HX_STACK_LINE(9123)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9123)
				{
					HX_STACK_LINE(9123)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9123)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9123)
					if (((pre == null()))){
						HX_STACK_LINE(9123)
						old = this->head;
						HX_STACK_LINE(9123)
						ret1 = old->next;
						HX_STACK_LINE(9123)
						this->head = ret1;
						HX_STACK_LINE(9123)
						if (((this->head == null()))){
							HX_STACK_LINE(9123)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9123)
						old = pre->next;
						HX_STACK_LINE(9123)
						ret1 = old->next;
						HX_STACK_LINE(9123)
						pre->next = ret1;
						HX_STACK_LINE(9123)
						if (((ret1 == null()))){
							HX_STACK_LINE(9123)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9123)
					{
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9123)
						o->elt = null();
						HX_STACK_LINE(9123)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9123)
					this->modified = true;
					HX_STACK_LINE(9123)
					(this->length)--;
					HX_STACK_LINE(9123)
					this->pushmod = true;
					HX_STACK_LINE(9123)
					ret1;
				}
				HX_STACK_LINE(9123)
				ret = true;
				HX_STACK_LINE(9123)
				break;
			}
			HX_STACK_LINE(9123)
			pre = cur;
			HX_STACK_LINE(9123)
			cur = cur->next;
		}
		HX_STACK_LINE(9123)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,remove,(void))

bool ZNPList_ZPP_AABBPair_obj::try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","try_remove",0xcfb08927,"zpp_nape.util.ZNPList_ZPP_AABBPair.try_remove","zpp_nape/util/Lists.hx",9125,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9134)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9135)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9136)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9137)
	while((true)){
		HX_STACK_LINE(9137)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(9137)
			break;
		}
		HX_STACK_LINE(9138)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9139)
			this->erase(pre);
			HX_STACK_LINE(9140)
			ret = true;
			HX_STACK_LINE(9141)
			break;
		}
		HX_STACK_LINE(9143)
		pre = cur;
		HX_STACK_LINE(9144)
		cur = cur->next;
	}
	HX_STACK_LINE(9146)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_remove",0x10f8dff7,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_remove","zpp_nape/util/Lists.hx",9159,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9159)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9159)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9159)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9159)
		while((true)){
			HX_STACK_LINE(9159)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(9159)
				break;
			}
			HX_STACK_LINE(9159)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9159)
				{
					HX_STACK_LINE(9159)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9159)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9159)
					if (((pre == null()))){
						HX_STACK_LINE(9159)
						old = this->head;
						HX_STACK_LINE(9159)
						ret1 = old->next;
						HX_STACK_LINE(9159)
						this->head = ret1;
						HX_STACK_LINE(9159)
						if (((this->head == null()))){
							HX_STACK_LINE(9159)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9159)
						old = pre->next;
						HX_STACK_LINE(9159)
						ret1 = old->next;
						HX_STACK_LINE(9159)
						pre->next = ret1;
						HX_STACK_LINE(9159)
						if (((ret1 == null()))){
							HX_STACK_LINE(9159)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9159)
					{
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9159)
						o->elt = null();
						HX_STACK_LINE(9159)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9159)
					this->modified = true;
					HX_STACK_LINE(9159)
					(this->length)--;
					HX_STACK_LINE(9159)
					this->pushmod = true;
					HX_STACK_LINE(9159)
					ret1;
				}
				HX_STACK_LINE(9159)
				ret = true;
				HX_STACK_LINE(9159)
				break;
			}
			HX_STACK_LINE(9159)
			pre = cur;
			HX_STACK_LINE(9159)
			cur = cur->next;
		}
		HX_STACK_LINE(9159)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBPair_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_try_remove",0x7b1e4b3b,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_try_remove","zpp_nape/util/Lists.hx",9163,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9172)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9173)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9174)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9175)
	while((true)){
		HX_STACK_LINE(9175)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(9175)
			break;
		}
		HX_STACK_LINE(9176)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9177)
			{
				HX_STACK_LINE(9177)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9177)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9177)
				if (((pre == null()))){
					HX_STACK_LINE(9177)
					old = this->head;
					HX_STACK_LINE(9177)
					ret1 = old->next;
					HX_STACK_LINE(9177)
					this->head = ret1;
					HX_STACK_LINE(9177)
					if (((this->head == null()))){
						HX_STACK_LINE(9177)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9177)
					old = pre->next;
					HX_STACK_LINE(9177)
					ret1 = old->next;
					HX_STACK_LINE(9177)
					pre->next = ret1;
					HX_STACK_LINE(9177)
					if (((ret1 == null()))){
						HX_STACK_LINE(9177)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9177)
				{
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9177)
					o->elt = null();
					HX_STACK_LINE(9177)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9177)
				this->modified = true;
				HX_STACK_LINE(9177)
				(this->length)--;
				HX_STACK_LINE(9177)
				this->pushmod = true;
				HX_STACK_LINE(9177)
				ret1;
			}
			HX_STACK_LINE(9178)
			ret = true;
			HX_STACK_LINE(9179)
			break;
		}
		HX_STACK_LINE(9181)
		pre = cur;
		HX_STACK_LINE(9182)
		cur = cur->next;
	}
	HX_STACK_LINE(9184)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","erase",0x4cf06627,"zpp_nape.util.ZNPList_ZPP_AABBPair.erase","zpp_nape/util/Lists.hx",9187,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9187)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9187)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9187)
	if (((pre == null()))){
		HX_STACK_LINE(9187)
		old = this->head;
		HX_STACK_LINE(9187)
		ret = old->next;
		HX_STACK_LINE(9187)
		this->head = ret;
		HX_STACK_LINE(9187)
		if (((this->head == null()))){
			HX_STACK_LINE(9187)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9187)
		old = pre->next;
		HX_STACK_LINE(9187)
		ret = old->next;
		HX_STACK_LINE(9187)
		pre->next = ret;
		HX_STACK_LINE(9187)
		if (((ret == null()))){
			HX_STACK_LINE(9187)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9187)
	{
		HX_STACK_LINE(9187)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9187)
		o->elt = null();
		HX_STACK_LINE(9187)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
		HX_STACK_LINE(9187)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9187)
	this->modified = true;
	HX_STACK_LINE(9187)
	(this->length)--;
	HX_STACK_LINE(9187)
	this->pushmod = true;
	HX_STACK_LINE(9187)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_erase",0xcf01dc93,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_erase","zpp_nape/util/Lists.hx",9191,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9200)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9201)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9202)
	if (((pre == null()))){
		HX_STACK_LINE(9203)
		old = this->head;
		HX_STACK_LINE(9204)
		ret = old->next;
		HX_STACK_LINE(9205)
		this->head = ret;
		HX_STACK_LINE(9206)
		if (((this->head == null()))){
			HX_STACK_LINE(9206)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9209)
		old = pre->next;
		HX_STACK_LINE(9210)
		ret = old->next;
		HX_STACK_LINE(9211)
		pre->next = ret;
		HX_STACK_LINE(9212)
		if (((ret == null()))){
			HX_STACK_LINE(9212)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9215)
	{
		HX_STACK_LINE(9216)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9225)
		o->elt = null();
		HX_STACK_LINE(9226)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
		HX_STACK_LINE(9227)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9232)
	this->modified = true;
	HX_STACK_LINE(9233)
	(this->length)--;
	HX_STACK_LINE(9234)
	this->pushmod = true;
	HX_STACK_LINE(9235)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","splice",0x7ed8a11b,"zpp_nape.util.ZNPList_ZPP_AABBPair.splice","zpp_nape/util/Lists.hx",9237,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(9238)
	while((true)){
		HX_STACK_LINE(9238)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(9238)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(9238)
			break;
		}
		HX_STACK_LINE(9238)
		this->erase(pre);
	}
	HX_STACK_LINE(9239)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,splice,return )

Void ZNPList_ZPP_AABBPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","clear",0x222eeece,"zpp_nape.util.ZNPList_ZPP_AABBPair.clear","zpp_nape/util/Lists.hx",9242,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9242)
		while((true)){
			HX_STACK_LINE(9242)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(9242)
				break;
			}
			HX_STACK_LINE(9242)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9242)
			this->head = ret->next;
			HX_STACK_LINE(9242)
			{
				HX_STACK_LINE(9242)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9242)
				o->elt = null();
				HX_STACK_LINE(9242)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9242)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9242)
			if (((this->head == null()))){
				HX_STACK_LINE(9242)
				this->pushmod = true;
			}
			HX_STACK_LINE(9242)
			this->modified = true;
			HX_STACK_LINE(9242)
			(this->length)--;
		}
		HX_STACK_LINE(9242)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,clear,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_clear",0xa440653a,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_clear","zpp_nape/util/Lists.hx",9247,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9248)
		while((true)){
			HX_STACK_LINE(9248)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(9248)
				break;
			}
			HX_STACK_LINE(9248)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9248)
			this->head = ret->next;
			HX_STACK_LINE(9248)
			{
				HX_STACK_LINE(9248)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9248)
				o->elt = null();
				HX_STACK_LINE(9248)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9248)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9248)
			if (((this->head == null()))){
				HX_STACK_LINE(9248)
				this->pushmod = true;
			}
			HX_STACK_LINE(9248)
			this->modified = true;
			HX_STACK_LINE(9248)
			(this->length)--;
		}
		HX_STACK_LINE(9249)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBPair_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","reverse",0xae9a48a3,"zpp_nape.util.ZNPList_ZPP_AABBPair.reverse","zpp_nape/util/Lists.hx",9252,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9253)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9254)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9255)
		while((true)){
			HX_STACK_LINE(9255)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(9255)
				break;
			}
			HX_STACK_LINE(9256)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9257)
			cur->next = pre;
			HX_STACK_LINE(9258)
			this->head = cur;
			HX_STACK_LINE(9259)
			pre = cur;
			HX_STACK_LINE(9260)
			cur = nx;
		}
		HX_STACK_LINE(9262)
		this->modified = true;
		HX_STACK_LINE(9263)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,reverse,(void))

bool ZNPList_ZPP_AABBPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","empty",0x49adb7ce,"zpp_nape.util.ZNPList_ZPP_AABBPair.empty","zpp_nape/util/Lists.hx",9268,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9268)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,empty,return )

int ZNPList_ZPP_AABBPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","size",0x8c7146a0,"zpp_nape.util.ZNPList_ZPP_AABBPair.size","zpp_nape/util/Lists.hx",9273,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9273)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,size,return )

bool ZNPList_ZPP_AABBPair_obj::has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","has",0x9a6d3a5b,"zpp_nape.util.ZNPList_ZPP_AABBPair.has","zpp_nape/util/Lists.hx",9276,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9276)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9276)
	{
		HX_STACK_LINE(9276)
		ret = false;
		HX_STACK_LINE(9276)
		{
			HX_STACK_LINE(9276)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9276)
			while((true)){
				HX_STACK_LINE(9276)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(9276)
					break;
				}
				HX_STACK_LINE(9276)
				::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9276)
				if (((npite == obj))){
					HX_STACK_LINE(9276)
					ret = true;
					HX_STACK_LINE(9276)
					break;
				}
				HX_STACK_LINE(9276)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9276)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,has,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_has",0x0635fdc7,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_has","zpp_nape/util/Lists.hx",9280,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9289)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9290)
	{
		HX_STACK_LINE(9291)
		ret = false;
		HX_STACK_LINE(9292)
		{
			HX_STACK_LINE(9293)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9294)
			while((true)){
				HX_STACK_LINE(9294)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(9294)
					break;
				}
				HX_STACK_LINE(9295)
				::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9297)
				if (((npite == obj))){
					HX_STACK_LINE(9298)
					ret = true;
					HX_STACK_LINE(9299)
					break;
				}
				HX_STACK_LINE(9302)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9306)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_has,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","front",0xe06195ea,"zpp_nape.util.ZNPList_ZPP_AABBPair.front","zpp_nape/util/Lists.hx",9311,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9311)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,front,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","back",0x812e8006,"zpp_nape.util.ZNPList_ZPP_AABBPair.back","zpp_nape/util/Lists.hx",9313,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9314)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9315)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9316)
	while((true)){
		HX_STACK_LINE(9316)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(9316)
			break;
		}
		HX_STACK_LINE(9317)
		ret = cur;
		HX_STACK_LINE(9318)
		cur = cur->next;
	}
	HX_STACK_LINE(9320)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","iterator_at",0x0ad4ede5,"zpp_nape.util.ZNPList_ZPP_AABBPair.iterator_at","zpp_nape/util/Lists.hx",9322,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9331)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9332)
	while((true)){
		HX_STACK_LINE(9332)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(9332)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(9332)
			break;
		}
		HX_STACK_LINE(9332)
		ret = ret->next;
	}
	HX_STACK_LINE(9333)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","at",0x1c3e7512,"zpp_nape.util.ZNPList_ZPP_AABBPair.at","zpp_nape/util/Lists.hx",9335,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9344)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9345)
	if (((it != null()))){
		HX_STACK_LINE(9345)
		return it->elt;
	}
	else{
		HX_STACK_LINE(9345)
		return null();
	}
	HX_STACK_LINE(9345)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,at,return )


ZNPList_ZPP_AABBPair_obj::ZNPList_ZPP_AABBPair_obj()
{
}

void ZNPList_ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_AABBPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
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

void ZNPList_ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBPair*/ ,(int)offsetof(ZNPList_ZPP_AABBPair_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBPair_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBPair_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_AABBPair_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_AABBPair_obj::__mClass;

void ZNPList_ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBPair"), hx::TCanCast< ZNPList_ZPP_AABBPair_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_AABBPair_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
