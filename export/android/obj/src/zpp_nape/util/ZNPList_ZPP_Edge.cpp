#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Edge_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","new",0x4a3acbe4,"zpp_nape.util.ZNPList_ZPP_Edge.new","zpp_nape/util/Lists.hx",9766,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9776)
	this->length = (int)0;
	HX_STACK_LINE(9775)
	this->pushmod = false;
	HX_STACK_LINE(9774)
	this->modified = false;
	HX_STACK_LINE(9767)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Edge_obj::~ZNPList_ZPP_Edge_obj() { }

Dynamic ZNPList_ZPP_Edge_obj::__CreateEmpty() { return  new ZNPList_ZPP_Edge_obj; }
hx::ObjectPtr< ZNPList_ZPP_Edge_obj > ZNPList_ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > result = new ZNPList_ZPP_Edge_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > result = new ZNPList_ZPP_Edge_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","begin",0x7e95cead,"zpp_nape.util.ZNPList_ZPP_Edge.begin","zpp_nape/util/Lists.hx",9772,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9772)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,begin,return )

Void ZNPList_ZPP_Edge_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Edge i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","setbegin",0x9a63a943,"zpp_nape.util.ZNPList_ZPP_Edge.setbegin","zpp_nape/util/Lists.hx",9779,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(9780)
		this->head = i;
		HX_STACK_LINE(9781)
		this->modified = true;
		HX_STACK_LINE(9782)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,setbegin,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","add",0x4a30eda5,"zpp_nape.util.ZNPList_ZPP_Edge.add","zpp_nape/util/Lists.hx",9785,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9785)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9785)
	{
		HX_STACK_LINE(9785)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9785)
		{
			HX_STACK_LINE(9785)
			if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
				HX_STACK_LINE(9785)
				::zpp_nape::util::ZNPNode_ZPP_Edge _g = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9785)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9785)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(9785)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9785)
				ret->next = null();
			}
			HX_STACK_LINE(9785)
			Dynamic();
		}
		HX_STACK_LINE(9785)
		ret->elt = o;
		HX_STACK_LINE(9785)
		temp = ret;
	}
	HX_STACK_LINE(9785)
	temp->next = this->head;
	HX_STACK_LINE(9785)
	this->head = temp;
	HX_STACK_LINE(9785)
	this->modified = true;
	HX_STACK_LINE(9785)
	(this->length)++;
	HX_STACK_LINE(9785)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,add,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_add",0x18826c11,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_add","zpp_nape/util/Lists.hx",9789,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9798)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9798)
	{
		HX_STACK_LINE(9799)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9800)
		{
			HX_STACK_LINE(9801)
			if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
				HX_STACK_LINE(9802)
				::zpp_nape::util::ZNPNode_ZPP_Edge _g = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9802)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9808)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(9809)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9810)
				ret->next = null();
			}
			HX_STACK_LINE(9815)
			Dynamic();
		}
		HX_STACK_LINE(9817)
		ret->elt = o;
		HX_STACK_LINE(9818)
		temp = ret;
	}
	HX_STACK_LINE(9820)
	temp->next = this->head;
	HX_STACK_LINE(9821)
	this->head = temp;
	HX_STACK_LINE(9822)
	this->modified = true;
	HX_STACK_LINE(9823)
	(this->length)++;
	HX_STACK_LINE(9824)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_add,return )

Void ZNPList_ZPP_Edge_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Edge x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","addAll",0x48a3187c,"zpp_nape.util.ZNPList_ZPP_Edge.addAll","zpp_nape/util/Lists.hx",9835,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(9836)
		::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9837)
		while((true)){
			HX_STACK_LINE(9837)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(9837)
				break;
			}
			HX_STACK_LINE(9838)
			::zpp_nape::shape::ZPP_Edge i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9839)
			this->add(i);
			HX_STACK_LINE(9840)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","insert",0x47855235,"zpp_nape.util.ZNPList_ZPP_Edge.insert","zpp_nape/util/Lists.hx",9845,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9845)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9845)
	{
		HX_STACK_LINE(9845)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9845)
		{
			HX_STACK_LINE(9845)
			if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
				HX_STACK_LINE(9845)
				::zpp_nape::util::ZNPNode_ZPP_Edge _g = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9845)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9845)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(9845)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9845)
				ret->next = null();
			}
			HX_STACK_LINE(9845)
			Dynamic();
		}
		HX_STACK_LINE(9845)
		ret->elt = o;
		HX_STACK_LINE(9845)
		temp = ret;
	}
	HX_STACK_LINE(9845)
	if (((cur == null()))){
		HX_STACK_LINE(9845)
		temp->next = this->head;
		HX_STACK_LINE(9845)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9845)
		temp->next = cur->next;
		HX_STACK_LINE(9845)
		cur->next = temp;
	}
	HX_STACK_LINE(9845)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(9845)
	this->pushmod = _g1;
	HX_STACK_LINE(9845)
	(this->length)++;
	HX_STACK_LINE(9845)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_insert",0x12199f49,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_insert","zpp_nape/util/Lists.hx",9849,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9858)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9858)
	{
		HX_STACK_LINE(9859)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9860)
		{
			HX_STACK_LINE(9861)
			if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
				HX_STACK_LINE(9862)
				::zpp_nape::util::ZNPNode_ZPP_Edge _g = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(9862)
				ret = _g;
			}
			else{
				HX_STACK_LINE(9868)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(9869)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9870)
				ret->next = null();
			}
			HX_STACK_LINE(9875)
			Dynamic();
		}
		HX_STACK_LINE(9877)
		ret->elt = o;
		HX_STACK_LINE(9878)
		temp = ret;
	}
	HX_STACK_LINE(9880)
	if (((cur == null()))){
		HX_STACK_LINE(9881)
		temp->next = this->head;
		HX_STACK_LINE(9882)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9885)
		temp->next = cur->next;
		HX_STACK_LINE(9886)
		cur->next = temp;
	}
	HX_STACK_LINE(9888)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(9888)
	this->pushmod = _g1;
	HX_STACK_LINE(9889)
	(this->length)++;
	HX_STACK_LINE(9890)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,inlined_insert,return )

Void ZNPList_ZPP_Edge_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","pop",0x4a3c5915,"zpp_nape.util.ZNPList_ZPP_Edge.pop","zpp_nape/util/Lists.hx",9893,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9893)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9893)
		this->head = ret->next;
		HX_STACK_LINE(9893)
		{
			HX_STACK_LINE(9893)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9893)
			o->elt = null();
			HX_STACK_LINE(9893)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
			HX_STACK_LINE(9893)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9893)
		if (((this->head == null()))){
			HX_STACK_LINE(9893)
			this->pushmod = true;
		}
		HX_STACK_LINE(9893)
		this->modified = true;
		HX_STACK_LINE(9893)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop,(void))

Void ZNPList_ZPP_Edge_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_pop",0x188dd781,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_pop","zpp_nape/util/Lists.hx",9897,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9906)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9907)
		this->head = ret->next;
		HX_STACK_LINE(9909)
		{
			HX_STACK_LINE(9910)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9919)
			o->elt = null();
			HX_STACK_LINE(9920)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
			HX_STACK_LINE(9921)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9926)
		if (((this->head == null()))){
			HX_STACK_LINE(9926)
			this->pushmod = true;
		}
		HX_STACK_LINE(9927)
		this->modified = true;
		HX_STACK_LINE(9928)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","pop_unsafe",0xc8adb950,"zpp_nape.util.ZNPList_ZPP_Edge.pop_unsafe","zpp_nape/util/Lists.hx",9931,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9931)
	::zpp_nape::shape::ZPP_Edge ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9931)
	this->pop();
	HX_STACK_LINE(9931)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop_unsafe,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_pop_unsafe",0xcbf02064,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_pop_unsafe","zpp_nape/util/Lists.hx",9935,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9944)
	::zpp_nape::shape::ZPP_Edge ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9945)
	this->pop();
	HX_STACK_LINE(9946)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Edge_obj::remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","remove",0xae30ab40,"zpp_nape.util.ZNPList_ZPP_Edge.remove","zpp_nape/util/Lists.hx",9957,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9957)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9957)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9957)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9957)
		while((true)){
			HX_STACK_LINE(9957)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(9957)
				break;
			}
			HX_STACK_LINE(9957)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9957)
				{
					HX_STACK_LINE(9957)
					::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9957)
					::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9957)
					if (((pre == null()))){
						HX_STACK_LINE(9957)
						old = this->head;
						HX_STACK_LINE(9957)
						ret1 = old->next;
						HX_STACK_LINE(9957)
						this->head = ret1;
						HX_STACK_LINE(9957)
						if (((this->head == null()))){
							HX_STACK_LINE(9957)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9957)
						old = pre->next;
						HX_STACK_LINE(9957)
						ret1 = old->next;
						HX_STACK_LINE(9957)
						pre->next = ret1;
						HX_STACK_LINE(9957)
						if (((ret1 == null()))){
							HX_STACK_LINE(9957)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9957)
					{
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9957)
						o->elt = null();
						HX_STACK_LINE(9957)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9957)
					this->modified = true;
					HX_STACK_LINE(9957)
					(this->length)--;
					HX_STACK_LINE(9957)
					this->pushmod = true;
					HX_STACK_LINE(9957)
					ret1;
				}
				HX_STACK_LINE(9957)
				ret = true;
				HX_STACK_LINE(9957)
				break;
			}
			HX_STACK_LINE(9957)
			pre = cur;
			HX_STACK_LINE(9957)
			cur = cur->next;
		}
		HX_STACK_LINE(9957)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,remove,(void))

bool ZNPList_ZPP_Edge_obj::try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","try_remove",0xdfd7ef04,"zpp_nape.util.ZNPList_ZPP_Edge.try_remove","zpp_nape/util/Lists.hx",9959,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9968)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9969)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9970)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9971)
	while((true)){
		HX_STACK_LINE(9971)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(9971)
			break;
		}
		HX_STACK_LINE(9972)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9973)
			this->erase(pre);
			HX_STACK_LINE(9974)
			ret = true;
			HX_STACK_LINE(9975)
			break;
		}
		HX_STACK_LINE(9977)
		pre = cur;
		HX_STACK_LINE(9978)
		cur = cur->next;
	}
	HX_STACK_LINE(9980)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,try_remove,return )

Void ZNPList_ZPP_Edge_obj::inlined_remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_remove",0x78c4f854,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_remove","zpp_nape/util/Lists.hx",9993,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9993)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9993)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9993)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9993)
		while((true)){
			HX_STACK_LINE(9993)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(9993)
				break;
			}
			HX_STACK_LINE(9993)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9993)
				{
					HX_STACK_LINE(9993)
					::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9993)
					::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9993)
					if (((pre == null()))){
						HX_STACK_LINE(9993)
						old = this->head;
						HX_STACK_LINE(9993)
						ret1 = old->next;
						HX_STACK_LINE(9993)
						this->head = ret1;
						HX_STACK_LINE(9993)
						if (((this->head == null()))){
							HX_STACK_LINE(9993)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9993)
						old = pre->next;
						HX_STACK_LINE(9993)
						ret1 = old->next;
						HX_STACK_LINE(9993)
						pre->next = ret1;
						HX_STACK_LINE(9993)
						if (((ret1 == null()))){
							HX_STACK_LINE(9993)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9993)
					{
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9993)
						o->elt = null();
						HX_STACK_LINE(9993)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9993)
					this->modified = true;
					HX_STACK_LINE(9993)
					(this->length)--;
					HX_STACK_LINE(9993)
					this->pushmod = true;
					HX_STACK_LINE(9993)
					ret1;
				}
				HX_STACK_LINE(9993)
				ret = true;
				HX_STACK_LINE(9993)
				break;
			}
			HX_STACK_LINE(9993)
			pre = cur;
			HX_STACK_LINE(9993)
			cur = cur->next;
		}
		HX_STACK_LINE(9993)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_remove,(void))

bool ZNPList_ZPP_Edge_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_try_remove",0xe31a5618,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_try_remove","zpp_nape/util/Lists.hx",9997,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10006)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10007)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10008)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10009)
	while((true)){
		HX_STACK_LINE(10009)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10009)
			break;
		}
		HX_STACK_LINE(10010)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10011)
			{
				HX_STACK_LINE(10011)
				::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10011)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10011)
				if (((pre == null()))){
					HX_STACK_LINE(10011)
					old = this->head;
					HX_STACK_LINE(10011)
					ret1 = old->next;
					HX_STACK_LINE(10011)
					this->head = ret1;
					HX_STACK_LINE(10011)
					if (((this->head == null()))){
						HX_STACK_LINE(10011)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10011)
					old = pre->next;
					HX_STACK_LINE(10011)
					ret1 = old->next;
					HX_STACK_LINE(10011)
					pre->next = ret1;
					HX_STACK_LINE(10011)
					if (((ret1 == null()))){
						HX_STACK_LINE(10011)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10011)
				{
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10011)
					o->elt = null();
					HX_STACK_LINE(10011)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10011)
				this->modified = true;
				HX_STACK_LINE(10011)
				(this->length)--;
				HX_STACK_LINE(10011)
				this->pushmod = true;
				HX_STACK_LINE(10011)
				ret1;
			}
			HX_STACK_LINE(10012)
			ret = true;
			HX_STACK_LINE(10013)
			break;
		}
		HX_STACK_LINE(10015)
		pre = cur;
		HX_STACK_LINE(10016)
		cur = cur->next;
	}
	HX_STACK_LINE(10018)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","erase",0x415ccd6a,"zpp_nape.util.ZNPList_ZPP_Edge.erase","zpp_nape/util/Lists.hx",10021,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10021)
	::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10021)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10021)
	if (((pre == null()))){
		HX_STACK_LINE(10021)
		old = this->head;
		HX_STACK_LINE(10021)
		ret = old->next;
		HX_STACK_LINE(10021)
		this->head = ret;
		HX_STACK_LINE(10021)
		if (((this->head == null()))){
			HX_STACK_LINE(10021)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10021)
		old = pre->next;
		HX_STACK_LINE(10021)
		ret = old->next;
		HX_STACK_LINE(10021)
		pre->next = ret;
		HX_STACK_LINE(10021)
		if (((ret == null()))){
			HX_STACK_LINE(10021)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10021)
	{
		HX_STACK_LINE(10021)
		::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10021)
		o->elt = null();
		HX_STACK_LINE(10021)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
		HX_STACK_LINE(10021)
		::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10021)
	this->modified = true;
	HX_STACK_LINE(10021)
	(this->length)--;
	HX_STACK_LINE(10021)
	this->pushmod = true;
	HX_STACK_LINE(10021)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_erase",0x65dbbed6,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_erase","zpp_nape/util/Lists.hx",10025,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10034)
	::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10035)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10036)
	if (((pre == null()))){
		HX_STACK_LINE(10037)
		old = this->head;
		HX_STACK_LINE(10038)
		ret = old->next;
		HX_STACK_LINE(10039)
		this->head = ret;
		HX_STACK_LINE(10040)
		if (((this->head == null()))){
			HX_STACK_LINE(10040)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10043)
		old = pre->next;
		HX_STACK_LINE(10044)
		ret = old->next;
		HX_STACK_LINE(10045)
		pre->next = ret;
		HX_STACK_LINE(10046)
		if (((ret == null()))){
			HX_STACK_LINE(10046)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10049)
	{
		HX_STACK_LINE(10050)
		::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10059)
		o->elt = null();
		HX_STACK_LINE(10060)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
		HX_STACK_LINE(10061)
		::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10066)
	this->modified = true;
	HX_STACK_LINE(10067)
	(this->length)--;
	HX_STACK_LINE(10068)
	this->pushmod = true;
	HX_STACK_LINE(10069)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Edge pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","splice",0x69469478,"zpp_nape.util.ZNPList_ZPP_Edge.splice","zpp_nape/util/Lists.hx",10071,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10072)
	while((true)){
		HX_STACK_LINE(10072)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10072)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(10072)
			break;
		}
		HX_STACK_LINE(10072)
		this->erase(pre);
	}
	HX_STACK_LINE(10073)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,splice,return )

Void ZNPList_ZPP_Edge_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","clear",0x169b5611,"zpp_nape.util.ZNPList_ZPP_Edge.clear","zpp_nape/util/Lists.hx",10076,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10076)
		while((true)){
			HX_STACK_LINE(10076)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10076)
				break;
			}
			HX_STACK_LINE(10076)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10076)
			this->head = ret->next;
			HX_STACK_LINE(10076)
			{
				HX_STACK_LINE(10076)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10076)
				o->elt = null();
				HX_STACK_LINE(10076)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(10076)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10076)
			if (((this->head == null()))){
				HX_STACK_LINE(10076)
				this->pushmod = true;
			}
			HX_STACK_LINE(10076)
			this->modified = true;
			HX_STACK_LINE(10076)
			(this->length)--;
		}
		HX_STACK_LINE(10076)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,clear,(void))

Void ZNPList_ZPP_Edge_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_clear",0x3b1a477d,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_clear","zpp_nape/util/Lists.hx",10081,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10082)
		while((true)){
			HX_STACK_LINE(10082)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10082)
				break;
			}
			HX_STACK_LINE(10082)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10082)
			this->head = ret->next;
			HX_STACK_LINE(10082)
			{
				HX_STACK_LINE(10082)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10082)
				o->elt = null();
				HX_STACK_LINE(10082)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(10082)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10082)
			if (((this->head == null()))){
				HX_STACK_LINE(10082)
				this->pushmod = true;
			}
			HX_STACK_LINE(10082)
			this->modified = true;
			HX_STACK_LINE(10082)
			(this->length)--;
		}
		HX_STACK_LINE(10083)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_clear,(void))

Void ZNPList_ZPP_Edge_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","reverse",0xe46146a6,"zpp_nape.util.ZNPList_ZPP_Edge.reverse","zpp_nape/util/Lists.hx",10086,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10087)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10088)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10089)
		while((true)){
			HX_STACK_LINE(10089)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10089)
				break;
			}
			HX_STACK_LINE(10090)
			::zpp_nape::util::ZNPNode_ZPP_Edge nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10091)
			cur->next = pre;
			HX_STACK_LINE(10092)
			this->head = cur;
			HX_STACK_LINE(10093)
			pre = cur;
			HX_STACK_LINE(10094)
			cur = nx;
		}
		HX_STACK_LINE(10096)
		this->modified = true;
		HX_STACK_LINE(10097)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,reverse,(void))

bool ZNPList_ZPP_Edge_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","empty",0x3e1a1f11,"zpp_nape.util.ZNPList_ZPP_Edge.empty","zpp_nape/util/Lists.hx",10102,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10102)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,empty,return )

int ZNPList_ZPP_Edge_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","size",0xac88b8bd,"zpp_nape.util.ZNPList_ZPP_Edge.size","zpp_nape/util/Lists.hx",10107,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10107)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,size,return )

bool ZNPList_ZPP_Edge_obj::has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","has",0x4a363ade,"zpp_nape.util.ZNPList_ZPP_Edge.has","zpp_nape/util/Lists.hx",10110,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10110)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10110)
	{
		HX_STACK_LINE(10110)
		ret = false;
		HX_STACK_LINE(10110)
		{
			HX_STACK_LINE(10110)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10110)
			while((true)){
				HX_STACK_LINE(10110)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10110)
					break;
				}
				HX_STACK_LINE(10110)
				::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10110)
				if (((npite == obj))){
					HX_STACK_LINE(10110)
					ret = true;
					HX_STACK_LINE(10110)
					break;
				}
				HX_STACK_LINE(10110)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10110)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,has,return )

bool ZNPList_ZPP_Edge_obj::inlined_has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_has",0x1887b94a,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_has","zpp_nape/util/Lists.hx",10114,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10123)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10124)
	{
		HX_STACK_LINE(10125)
		ret = false;
		HX_STACK_LINE(10126)
		{
			HX_STACK_LINE(10127)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10128)
			while((true)){
				HX_STACK_LINE(10128)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10128)
					break;
				}
				HX_STACK_LINE(10129)
				::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10131)
				if (((npite == obj))){
					HX_STACK_LINE(10132)
					ret = true;
					HX_STACK_LINE(10133)
					break;
				}
				HX_STACK_LINE(10136)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10140)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_has,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","front",0xd4cdfd2d,"zpp_nape.util.ZNPList_ZPP_Edge.front","zpp_nape/util/Lists.hx",10145,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10145)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,front,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","back",0xa145f223,"zpp_nape.util.ZNPList_ZPP_Edge.back","zpp_nape/util/Lists.hx",10147,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10148)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10149)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10150)
	while((true)){
		HX_STACK_LINE(10150)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10150)
			break;
		}
		HX_STACK_LINE(10151)
		ret = cur;
		HX_STACK_LINE(10152)
		cur = cur->next;
	}
	HX_STACK_LINE(10154)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","iterator_at",0x1d26a968,"zpp_nape.util.ZNPList_ZPP_Edge.iterator_at","zpp_nape/util/Lists.hx",10156,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10165)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10166)
	while((true)){
		HX_STACK_LINE(10166)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10166)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(10166)
			break;
		}
		HX_STACK_LINE(10166)
		ret = ret->next;
	}
	HX_STACK_LINE(10167)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","at",0x6c3e35ef,"zpp_nape.util.ZNPList_ZPP_Edge.at","zpp_nape/util/Lists.hx",10169,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10178)
	::zpp_nape::util::ZNPNode_ZPP_Edge it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10179)
	if (((it != null()))){
		HX_STACK_LINE(10179)
		return it->elt;
	}
	else{
		HX_STACK_LINE(10179)
		return null();
	}
	HX_STACK_LINE(10179)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,at,return )


ZNPList_ZPP_Edge_obj::ZNPList_ZPP_Edge_obj()
{
}

void ZNPList_ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Edge);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Edge_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Edge >(); return inValue; }
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

void ZNPList_ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Edge*/ ,(int)offsetof(ZNPList_ZPP_Edge_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Edge_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Edge_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Edge_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_Edge_obj::__mClass;

void ZNPList_ZPP_Edge_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Edge"), hx::TCanCast< ZNPList_ZPP_Edge_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_Edge_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
