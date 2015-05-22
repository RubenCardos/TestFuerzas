#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Component_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","new",0x6e9253da,"zpp_nape.util.ZNPList_ZPP_Component.new","zpp_nape/util/Lists.hx",10600,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10610)
	this->length = (int)0;
	HX_STACK_LINE(10609)
	this->pushmod = false;
	HX_STACK_LINE(10608)
	this->modified = false;
	HX_STACK_LINE(10601)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Component_obj::~ZNPList_ZPP_Component_obj() { }

Dynamic ZNPList_ZPP_Component_obj::__CreateEmpty() { return  new ZNPList_ZPP_Component_obj; }
hx::ObjectPtr< ZNPList_ZPP_Component_obj > ZNPList_ZPP_Component_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > result = new ZNPList_ZPP_Component_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > result = new ZNPList_ZPP_Component_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","begin",0x0dd7c023,"zpp_nape.util.ZNPList_ZPP_Component.begin","zpp_nape/util/Lists.hx",10606,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10606)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,begin,return )

Void ZNPList_ZPP_Component_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Component i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","setbegin",0xe42d858d,"zpp_nape.util.ZNPList_ZPP_Component.setbegin","zpp_nape/util/Lists.hx",10613,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(10614)
		this->head = i;
		HX_STACK_LINE(10615)
		this->modified = true;
		HX_STACK_LINE(10616)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,setbegin,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","add",0x6e88759b,"zpp_nape.util.ZNPList_ZPP_Component.add","zpp_nape/util/Lists.hx",10619,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10619)
	::zpp_nape::util::ZNPNode_ZPP_Component temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10619)
	{
		HX_STACK_LINE(10619)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10619)
		{
			HX_STACK_LINE(10619)
			if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(10619)
				::zpp_nape::util::ZNPNode_ZPP_Component _g = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10619)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10619)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10619)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10619)
				ret->next = null();
			}
			HX_STACK_LINE(10619)
			Dynamic();
		}
		HX_STACK_LINE(10619)
		ret->elt = o;
		HX_STACK_LINE(10619)
		temp = ret;
	}
	HX_STACK_LINE(10619)
	temp->next = this->head;
	HX_STACK_LINE(10619)
	this->head = temp;
	HX_STACK_LINE(10619)
	this->modified = true;
	HX_STACK_LINE(10619)
	(this->length)++;
	HX_STACK_LINE(10619)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,add,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_add",0xee33da07,"zpp_nape.util.ZNPList_ZPP_Component.inlined_add","zpp_nape/util/Lists.hx",10623,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10632)
	::zpp_nape::util::ZNPNode_ZPP_Component temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10632)
	{
		HX_STACK_LINE(10633)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10634)
		{
			HX_STACK_LINE(10635)
			if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(10636)
				::zpp_nape::util::ZNPNode_ZPP_Component _g = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10636)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10642)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10643)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10644)
				ret->next = null();
			}
			HX_STACK_LINE(10649)
			Dynamic();
		}
		HX_STACK_LINE(10651)
		ret->elt = o;
		HX_STACK_LINE(10652)
		temp = ret;
	}
	HX_STACK_LINE(10654)
	temp->next = this->head;
	HX_STACK_LINE(10655)
	this->head = temp;
	HX_STACK_LINE(10656)
	this->modified = true;
	HX_STACK_LINE(10657)
	(this->length)++;
	HX_STACK_LINE(10658)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_add,return )

Void ZNPList_ZPP_Component_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Component x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","addAll",0x13146e46,"zpp_nape.util.ZNPList_ZPP_Component.addAll","zpp_nape/util/Lists.hx",10669,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(10670)
		::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(10671)
		while((true)){
			HX_STACK_LINE(10671)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(10671)
				break;
			}
			HX_STACK_LINE(10672)
			::zpp_nape::space::ZPP_Component i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(10673)
			this->add(i);
			HX_STACK_LINE(10674)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","insert",0x11f6a7ff,"zpp_nape.util.ZNPList_ZPP_Component.insert","zpp_nape/util/Lists.hx",10679,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10679)
	::zpp_nape::util::ZNPNode_ZPP_Component temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10679)
	{
		HX_STACK_LINE(10679)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10679)
		{
			HX_STACK_LINE(10679)
			if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(10679)
				::zpp_nape::util::ZNPNode_ZPP_Component _g = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10679)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10679)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10679)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10679)
				ret->next = null();
			}
			HX_STACK_LINE(10679)
			Dynamic();
		}
		HX_STACK_LINE(10679)
		ret->elt = o;
		HX_STACK_LINE(10679)
		temp = ret;
	}
	HX_STACK_LINE(10679)
	if (((cur == null()))){
		HX_STACK_LINE(10679)
		temp->next = this->head;
		HX_STACK_LINE(10679)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10679)
		temp->next = cur->next;
		HX_STACK_LINE(10679)
		cur->next = temp;
	}
	HX_STACK_LINE(10679)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10679)
	this->pushmod = _g1;
	HX_STACK_LINE(10679)
	(this->length)++;
	HX_STACK_LINE(10679)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_insert",0xcfe4cf13,"zpp_nape.util.ZNPList_ZPP_Component.inlined_insert","zpp_nape/util/Lists.hx",10683,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10692)
	::zpp_nape::util::ZNPNode_ZPP_Component temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10692)
	{
		HX_STACK_LINE(10693)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10694)
		{
			HX_STACK_LINE(10695)
			if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(10696)
				::zpp_nape::util::ZNPNode_ZPP_Component _g = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10696)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10702)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10703)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10704)
				ret->next = null();
			}
			HX_STACK_LINE(10709)
			Dynamic();
		}
		HX_STACK_LINE(10711)
		ret->elt = o;
		HX_STACK_LINE(10712)
		temp = ret;
	}
	HX_STACK_LINE(10714)
	if (((cur == null()))){
		HX_STACK_LINE(10715)
		temp->next = this->head;
		HX_STACK_LINE(10716)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10719)
		temp->next = cur->next;
		HX_STACK_LINE(10720)
		cur->next = temp;
	}
	HX_STACK_LINE(10722)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10722)
	this->pushmod = _g1;
	HX_STACK_LINE(10723)
	(this->length)++;
	HX_STACK_LINE(10724)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,inlined_insert,return )

Void ZNPList_ZPP_Component_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","pop",0x6e93e10b,"zpp_nape.util.ZNPList_ZPP_Component.pop","zpp_nape/util/Lists.hx",10727,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10727)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10727)
		this->head = ret->next;
		HX_STACK_LINE(10727)
		{
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10727)
			o->elt = null();
			HX_STACK_LINE(10727)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10727)
		if (((this->head == null()))){
			HX_STACK_LINE(10727)
			this->pushmod = true;
		}
		HX_STACK_LINE(10727)
		this->modified = true;
		HX_STACK_LINE(10727)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop,(void))

Void ZNPList_ZPP_Component_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_pop",0xee3f4577,"zpp_nape.util.ZNPList_ZPP_Component.inlined_pop","zpp_nape/util/Lists.hx",10731,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10740)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10741)
		this->head = ret->next;
		HX_STACK_LINE(10743)
		{
			HX_STACK_LINE(10744)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10753)
			o->elt = null();
			HX_STACK_LINE(10754)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(10755)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10760)
		if (((this->head == null()))){
			HX_STACK_LINE(10760)
			this->pushmod = true;
		}
		HX_STACK_LINE(10761)
		this->modified = true;
		HX_STACK_LINE(10762)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","pop_unsafe",0x7ddebc1a,"zpp_nape.util.ZNPList_ZPP_Component.pop_unsafe","zpp_nape/util/Lists.hx",10765,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10765)
	::zpp_nape::space::ZPP_Component ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10765)
	this->pop();
	HX_STACK_LINE(10765)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_pop_unsafe",0xef6ffd2e,"zpp_nape.util.ZNPList_ZPP_Component.inlined_pop_unsafe","zpp_nape/util/Lists.hx",10769,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10778)
	::zpp_nape::space::ZPP_Component ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10779)
	this->pop();
	HX_STACK_LINE(10780)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Component_obj::remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","remove",0x78a2010a,"zpp_nape.util.ZNPList_ZPP_Component.remove","zpp_nape/util/Lists.hx",10791,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10791)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10791)
		while((true)){
			HX_STACK_LINE(10791)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10791)
				break;
			}
			HX_STACK_LINE(10791)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10791)
				{
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10791)
					if (((pre == null()))){
						HX_STACK_LINE(10791)
						old = this->head;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						this->head = ret1;
						HX_STACK_LINE(10791)
						if (((this->head == null()))){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10791)
						old = pre->next;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						pre->next = ret1;
						HX_STACK_LINE(10791)
						if (((ret1 == null()))){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10791)
					{
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10791)
						o->elt = null();
						HX_STACK_LINE(10791)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10791)
					this->modified = true;
					HX_STACK_LINE(10791)
					(this->length)--;
					HX_STACK_LINE(10791)
					this->pushmod = true;
					HX_STACK_LINE(10791)
					ret1;
				}
				HX_STACK_LINE(10791)
				ret = true;
				HX_STACK_LINE(10791)
				break;
			}
			HX_STACK_LINE(10791)
			pre = cur;
			HX_STACK_LINE(10791)
			cur = cur->next;
		}
		HX_STACK_LINE(10791)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,remove,(void))

bool ZNPList_ZPP_Component_obj::try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","try_remove",0x9508f1ce,"zpp_nape.util.ZNPList_ZPP_Component.try_remove","zpp_nape/util/Lists.hx",10793,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10802)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10803)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10804)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10805)
	while((true)){
		HX_STACK_LINE(10805)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10805)
			break;
		}
		HX_STACK_LINE(10806)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10807)
			this->erase(pre);
			HX_STACK_LINE(10808)
			ret = true;
			HX_STACK_LINE(10809)
			break;
		}
		HX_STACK_LINE(10811)
		pre = cur;
		HX_STACK_LINE(10812)
		cur = cur->next;
	}
	HX_STACK_LINE(10814)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,try_remove,return )

Void ZNPList_ZPP_Component_obj::inlined_remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_remove",0x3690281e,"zpp_nape.util.ZNPList_ZPP_Component.inlined_remove","zpp_nape/util/Lists.hx",10827,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10827)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10827)
		while((true)){
			HX_STACK_LINE(10827)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10827)
				break;
			}
			HX_STACK_LINE(10827)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10827)
				{
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10827)
					if (((pre == null()))){
						HX_STACK_LINE(10827)
						old = this->head;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						this->head = ret1;
						HX_STACK_LINE(10827)
						if (((this->head == null()))){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10827)
						old = pre->next;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						pre->next = ret1;
						HX_STACK_LINE(10827)
						if (((ret1 == null()))){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10827)
					{
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10827)
						o->elt = null();
						HX_STACK_LINE(10827)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10827)
					this->modified = true;
					HX_STACK_LINE(10827)
					(this->length)--;
					HX_STACK_LINE(10827)
					this->pushmod = true;
					HX_STACK_LINE(10827)
					ret1;
				}
				HX_STACK_LINE(10827)
				ret = true;
				HX_STACK_LINE(10827)
				break;
			}
			HX_STACK_LINE(10827)
			pre = cur;
			HX_STACK_LINE(10827)
			cur = cur->next;
		}
		HX_STACK_LINE(10827)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_remove,(void))

bool ZNPList_ZPP_Component_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_try_remove",0x069a32e2,"zpp_nape.util.ZNPList_ZPP_Component.inlined_try_remove","zpp_nape/util/Lists.hx",10831,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10840)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10841)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10842)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10843)
	while((true)){
		HX_STACK_LINE(10843)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10843)
			break;
		}
		HX_STACK_LINE(10844)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10845)
			{
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10845)
				if (((pre == null()))){
					HX_STACK_LINE(10845)
					old = this->head;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					this->head = ret1;
					HX_STACK_LINE(10845)
					if (((this->head == null()))){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10845)
					old = pre->next;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					pre->next = ret1;
					HX_STACK_LINE(10845)
					if (((ret1 == null()))){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10845)
				{
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10845)
					o->elt = null();
					HX_STACK_LINE(10845)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10845)
				this->modified = true;
				HX_STACK_LINE(10845)
				(this->length)--;
				HX_STACK_LINE(10845)
				this->pushmod = true;
				HX_STACK_LINE(10845)
				ret1;
			}
			HX_STACK_LINE(10846)
			ret = true;
			HX_STACK_LINE(10847)
			break;
		}
		HX_STACK_LINE(10849)
		pre = cur;
		HX_STACK_LINE(10850)
		cur = cur->next;
	}
	HX_STACK_LINE(10852)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","erase",0xd09ebee0,"zpp_nape.util.ZNPList_ZPP_Component.erase","zpp_nape/util/Lists.hx",10855,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10855)
	::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10855)
	::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10855)
	if (((pre == null()))){
		HX_STACK_LINE(10855)
		old = this->head;
		HX_STACK_LINE(10855)
		ret = old->next;
		HX_STACK_LINE(10855)
		this->head = ret;
		HX_STACK_LINE(10855)
		if (((this->head == null()))){
			HX_STACK_LINE(10855)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10855)
		old = pre->next;
		HX_STACK_LINE(10855)
		ret = old->next;
		HX_STACK_LINE(10855)
		pre->next = ret;
		HX_STACK_LINE(10855)
		if (((ret == null()))){
			HX_STACK_LINE(10855)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10855)
	{
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10855)
		o->elt = null();
		HX_STACK_LINE(10855)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10855)
	this->modified = true;
	HX_STACK_LINE(10855)
	(this->length)--;
	HX_STACK_LINE(10855)
	this->pushmod = true;
	HX_STACK_LINE(10855)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_erase",0x1d3d164c,"zpp_nape.util.ZNPList_ZPP_Component.inlined_erase","zpp_nape/util/Lists.hx",10859,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10868)
	::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10869)
	::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10870)
	if (((pre == null()))){
		HX_STACK_LINE(10871)
		old = this->head;
		HX_STACK_LINE(10872)
		ret = old->next;
		HX_STACK_LINE(10873)
		this->head = ret;
		HX_STACK_LINE(10874)
		if (((this->head == null()))){
			HX_STACK_LINE(10874)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10877)
		old = pre->next;
		HX_STACK_LINE(10878)
		ret = old->next;
		HX_STACK_LINE(10879)
		pre->next = ret;
		HX_STACK_LINE(10880)
		if (((ret == null()))){
			HX_STACK_LINE(10880)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10883)
	{
		HX_STACK_LINE(10884)
		::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10893)
		o->elt = null();
		HX_STACK_LINE(10894)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
		HX_STACK_LINE(10895)
		::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10900)
	this->modified = true;
	HX_STACK_LINE(10901)
	(this->length)--;
	HX_STACK_LINE(10902)
	this->pushmod = true;
	HX_STACK_LINE(10903)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Component pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","splice",0x33b7ea42,"zpp_nape.util.ZNPList_ZPP_Component.splice","zpp_nape/util/Lists.hx",10905,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10906)
	while((true)){
		HX_STACK_LINE(10906)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10906)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(10906)
			break;
		}
		HX_STACK_LINE(10906)
		this->erase(pre);
	}
	HX_STACK_LINE(10907)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,splice,return )

Void ZNPList_ZPP_Component_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","clear",0xa5dd4787,"zpp_nape.util.ZNPList_ZPP_Component.clear","zpp_nape/util/Lists.hx",10910,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10910)
		while((true)){
			HX_STACK_LINE(10910)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10910)
				break;
			}
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10910)
			this->head = ret->next;
			HX_STACK_LINE(10910)
			{
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10910)
				o->elt = null();
				HX_STACK_LINE(10910)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10910)
			if (((this->head == null()))){
				HX_STACK_LINE(10910)
				this->pushmod = true;
			}
			HX_STACK_LINE(10910)
			this->modified = true;
			HX_STACK_LINE(10910)
			(this->length)--;
		}
		HX_STACK_LINE(10910)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,clear,(void))

Void ZNPList_ZPP_Component_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_clear",0xf27b9ef3,"zpp_nape.util.ZNPList_ZPP_Component.inlined_clear","zpp_nape/util/Lists.hx",10915,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10916)
		while((true)){
			HX_STACK_LINE(10916)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10916)
				break;
			}
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10916)
			this->head = ret->next;
			HX_STACK_LINE(10916)
			{
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10916)
				o->elt = null();
				HX_STACK_LINE(10916)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10916)
			if (((this->head == null()))){
				HX_STACK_LINE(10916)
				this->pushmod = true;
			}
			HX_STACK_LINE(10916)
			this->modified = true;
			HX_STACK_LINE(10916)
			(this->length)--;
		}
		HX_STACK_LINE(10917)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_clear,(void))

Void ZNPList_ZPP_Component_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","reverse",0x3d1b019c,"zpp_nape.util.ZNPList_ZPP_Component.reverse","zpp_nape/util/Lists.hx",10920,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10921)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10922)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10923)
		while((true)){
			HX_STACK_LINE(10923)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10923)
				break;
			}
			HX_STACK_LINE(10924)
			::zpp_nape::util::ZNPNode_ZPP_Component nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10925)
			cur->next = pre;
			HX_STACK_LINE(10926)
			this->head = cur;
			HX_STACK_LINE(10927)
			pre = cur;
			HX_STACK_LINE(10928)
			cur = nx;
		}
		HX_STACK_LINE(10930)
		this->modified = true;
		HX_STACK_LINE(10931)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,reverse,(void))

bool ZNPList_ZPP_Component_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","empty",0xcd5c1087,"zpp_nape.util.ZNPList_ZPP_Component.empty","zpp_nape/util/Lists.hx",10936,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10936)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,empty,return )

int ZNPList_ZPP_Component_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","size",0x54c82807,"zpp_nape.util.ZNPList_ZPP_Component.size","zpp_nape/util/Lists.hx",10941,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10941)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,size,return )

bool ZNPList_ZPP_Component_obj::has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","has",0x6e8dc2d4,"zpp_nape.util.ZNPList_ZPP_Component.has","zpp_nape/util/Lists.hx",10944,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10944)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10944)
	{
		HX_STACK_LINE(10944)
		ret = false;
		HX_STACK_LINE(10944)
		{
			HX_STACK_LINE(10944)
			::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10944)
			while((true)){
				HX_STACK_LINE(10944)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10944)
					break;
				}
				HX_STACK_LINE(10944)
				::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10944)
				if (((npite == obj))){
					HX_STACK_LINE(10944)
					ret = true;
					HX_STACK_LINE(10944)
					break;
				}
				HX_STACK_LINE(10944)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10944)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,has,return )

bool ZNPList_ZPP_Component_obj::inlined_has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_has",0xee392740,"zpp_nape.util.ZNPList_ZPP_Component.inlined_has","zpp_nape/util/Lists.hx",10948,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10957)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10958)
	{
		HX_STACK_LINE(10959)
		ret = false;
		HX_STACK_LINE(10960)
		{
			HX_STACK_LINE(10961)
			::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10962)
			while((true)){
				HX_STACK_LINE(10962)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10962)
					break;
				}
				HX_STACK_LINE(10963)
				::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10965)
				if (((npite == obj))){
					HX_STACK_LINE(10966)
					ret = true;
					HX_STACK_LINE(10967)
					break;
				}
				HX_STACK_LINE(10970)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10974)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_has,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","front",0x640feea3,"zpp_nape.util.ZNPList_ZPP_Component.front","zpp_nape/util/Lists.hx",10979,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10979)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,front,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","back",0x4985616d,"zpp_nape.util.ZNPList_ZPP_Component.back","zpp_nape/util/Lists.hx",10981,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10982)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10983)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10984)
	while((true)){
		HX_STACK_LINE(10984)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10984)
			break;
		}
		HX_STACK_LINE(10985)
		ret = cur;
		HX_STACK_LINE(10986)
		cur = cur->next;
	}
	HX_STACK_LINE(10988)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","iterator_at",0xf2d8175e,"zpp_nape.util.ZNPList_ZPP_Component.iterator_at","zpp_nape/util/Lists.hx",10990,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10999)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11000)
	while((true)){
		HX_STACK_LINE(11000)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(11000)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(11000)
			break;
		}
		HX_STACK_LINE(11000)
		ret = ret->next;
	}
	HX_STACK_LINE(11001)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,iterator_at,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","at",0xca8a5eb9,"zpp_nape.util.ZNPList_ZPP_Component.at","zpp_nape/util/Lists.hx",11003,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11012)
	::zpp_nape::util::ZNPNode_ZPP_Component it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11013)
	if (((it != null()))){
		HX_STACK_LINE(11013)
		return it->elt;
	}
	else{
		HX_STACK_LINE(11013)
		return null();
	}
	HX_STACK_LINE(11013)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,at,return )


ZNPList_ZPP_Component_obj::ZNPList_ZPP_Component_obj()
{
}

void ZNPList_ZPP_Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Component);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Component_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Component >(); return inValue; }
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

void ZNPList_ZPP_Component_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Component*/ ,(int)offsetof(ZNPList_ZPP_Component_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Component_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Component_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Component_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_Component_obj::__mClass;

void ZNPList_ZPP_Component_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Component"), hx::TCanCast< ZNPList_ZPP_Component_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_Component_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
