#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Compound_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","new",0x96c0b492,"zpp_nape.util.ZNPList_ZPP_Compound.new","zpp_nape/util/Lists.hx",2260,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2270)
	this->length = (int)0;
	HX_STACK_LINE(2269)
	this->pushmod = false;
	HX_STACK_LINE(2268)
	this->modified = false;
	HX_STACK_LINE(2261)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Compound_obj::~ZNPList_ZPP_Compound_obj() { }

Dynamic ZNPList_ZPP_Compound_obj::__CreateEmpty() { return  new ZNPList_ZPP_Compound_obj; }
hx::ObjectPtr< ZNPList_ZPP_Compound_obj > ZNPList_ZPP_Compound_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > result = new ZNPList_ZPP_Compound_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > result = new ZNPList_ZPP_Compound_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","begin",0x66e9bedb,"zpp_nape.util.ZNPList_ZPP_Compound.begin","zpp_nape/util/Lists.hx",2266,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2266)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,begin,return )

Void ZNPList_ZPP_Compound_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Compound i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","setbegin",0x298d89d5,"zpp_nape.util.ZNPList_ZPP_Compound.setbegin","zpp_nape/util/Lists.hx",2273,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(2274)
		this->head = i;
		HX_STACK_LINE(2275)
		this->modified = true;
		HX_STACK_LINE(2276)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,setbegin,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","add",0x96b6d653,"zpp_nape.util.ZNPList_ZPP_Compound.add","zpp_nape/util/Lists.hx",2279,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2279)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2279)
	{
		HX_STACK_LINE(2279)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2279)
		{
			HX_STACK_LINE(2279)
			if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
				HX_STACK_LINE(2279)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2279)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2279)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2279)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2279)
				ret->next = null();
			}
			HX_STACK_LINE(2279)
			Dynamic();
		}
		HX_STACK_LINE(2279)
		ret->elt = o;
		HX_STACK_LINE(2279)
		temp = ret;
	}
	HX_STACK_LINE(2279)
	temp->next = this->head;
	HX_STACK_LINE(2279)
	this->head = temp;
	HX_STACK_LINE(2279)
	this->modified = true;
	HX_STACK_LINE(2279)
	(this->length)++;
	HX_STACK_LINE(2279)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,add,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_add",0x1945b2bf,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_add","zpp_nape/util/Lists.hx",2283,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2292)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2292)
	{
		HX_STACK_LINE(2293)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2294)
		{
			HX_STACK_LINE(2295)
			if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
				HX_STACK_LINE(2296)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2296)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2302)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2303)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2304)
				ret->next = null();
			}
			HX_STACK_LINE(2309)
			Dynamic();
		}
		HX_STACK_LINE(2311)
		ret->elt = o;
		HX_STACK_LINE(2312)
		temp = ret;
	}
	HX_STACK_LINE(2314)
	temp->next = this->head;
	HX_STACK_LINE(2315)
	this->head = temp;
	HX_STACK_LINE(2316)
	this->modified = true;
	HX_STACK_LINE(2317)
	(this->length)++;
	HX_STACK_LINE(2318)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_add,return )

Void ZNPList_ZPP_Compound_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Compound x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","addAll",0xa9c1508e,"zpp_nape.util.ZNPList_ZPP_Compound.addAll","zpp_nape/util/Lists.hx",2329,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(2330)
		::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2331)
		while((true)){
			HX_STACK_LINE(2331)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(2331)
				break;
			}
			HX_STACK_LINE(2332)
			::zpp_nape::phys::ZPP_Compound i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2333)
			this->add(i);
			HX_STACK_LINE(2334)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","insert",0xa8a38a47,"zpp_nape.util.ZNPList_ZPP_Compound.insert","zpp_nape/util/Lists.hx",2339,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2339)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2339)
	{
		HX_STACK_LINE(2339)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2339)
		{
			HX_STACK_LINE(2339)
			if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
				HX_STACK_LINE(2339)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2339)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2339)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2339)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2339)
				ret->next = null();
			}
			HX_STACK_LINE(2339)
			Dynamic();
		}
		HX_STACK_LINE(2339)
		ret->elt = o;
		HX_STACK_LINE(2339)
		temp = ret;
	}
	HX_STACK_LINE(2339)
	if (((cur == null()))){
		HX_STACK_LINE(2339)
		temp->next = this->head;
		HX_STACK_LINE(2339)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2339)
		temp->next = cur->next;
		HX_STACK_LINE(2339)
		cur->next = temp;
	}
	HX_STACK_LINE(2339)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2339)
	this->pushmod = _g1;
	HX_STACK_LINE(2339)
	(this->length)++;
	HX_STACK_LINE(2339)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_insert",0x6529395b,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_insert","zpp_nape/util/Lists.hx",2343,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2352)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2352)
	{
		HX_STACK_LINE(2353)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2354)
		{
			HX_STACK_LINE(2355)
			if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
				HX_STACK_LINE(2356)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2356)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2362)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2363)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2364)
				ret->next = null();
			}
			HX_STACK_LINE(2369)
			Dynamic();
		}
		HX_STACK_LINE(2371)
		ret->elt = o;
		HX_STACK_LINE(2372)
		temp = ret;
	}
	HX_STACK_LINE(2374)
	if (((cur == null()))){
		HX_STACK_LINE(2375)
		temp->next = this->head;
		HX_STACK_LINE(2376)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2379)
		temp->next = cur->next;
		HX_STACK_LINE(2380)
		cur->next = temp;
	}
	HX_STACK_LINE(2382)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2382)
	this->pushmod = _g1;
	HX_STACK_LINE(2383)
	(this->length)++;
	HX_STACK_LINE(2384)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,inlined_insert,return )

Void ZNPList_ZPP_Compound_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","pop",0x96c241c3,"zpp_nape.util.ZNPList_ZPP_Compound.pop","zpp_nape/util/Lists.hx",2387,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2387)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2387)
		this->head = ret->next;
		HX_STACK_LINE(2387)
		{
			HX_STACK_LINE(2387)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2387)
			o->elt = null();
			HX_STACK_LINE(2387)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
			HX_STACK_LINE(2387)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2387)
		if (((this->head == null()))){
			HX_STACK_LINE(2387)
			this->pushmod = true;
		}
		HX_STACK_LINE(2387)
		this->modified = true;
		HX_STACK_LINE(2387)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop,(void))

Void ZNPList_ZPP_Compound_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_pop",0x19511e2f,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_pop","zpp_nape/util/Lists.hx",2391,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2400)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2401)
		this->head = ret->next;
		HX_STACK_LINE(2403)
		{
			HX_STACK_LINE(2404)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2413)
			o->elt = null();
			HX_STACK_LINE(2414)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
			HX_STACK_LINE(2415)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2420)
		if (((this->head == null()))){
			HX_STACK_LINE(2420)
			this->pushmod = true;
		}
		HX_STACK_LINE(2421)
		this->modified = true;
		HX_STACK_LINE(2422)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","pop_unsafe",0xde7e6262,"zpp_nape.util.ZNPList_ZPP_Compound.pop_unsafe","zpp_nape/util/Lists.hx",2425,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2425)
	::zpp_nape::phys::ZPP_Compound ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2425)
	this->pop();
	HX_STACK_LINE(2425)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop_unsafe,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_pop_unsafe",0x650b2b76,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_pop_unsafe","zpp_nape/util/Lists.hx",2429,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2438)
	::zpp_nape::phys::ZPP_Compound ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2439)
	this->pop();
	HX_STACK_LINE(2440)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Compound_obj::remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","remove",0x0f4ee352,"zpp_nape.util.ZNPList_ZPP_Compound.remove","zpp_nape/util/Lists.hx",2451,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2451)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2451)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2451)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2451)
		while((true)){
			HX_STACK_LINE(2451)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(2451)
				break;
			}
			HX_STACK_LINE(2451)
			if (((cur->elt == obj))){
				HX_STACK_LINE(2451)
				{
					HX_STACK_LINE(2451)
					::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2451)
					::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2451)
					if (((pre == null()))){
						HX_STACK_LINE(2451)
						old = this->head;
						HX_STACK_LINE(2451)
						ret1 = old->next;
						HX_STACK_LINE(2451)
						this->head = ret1;
						HX_STACK_LINE(2451)
						if (((this->head == null()))){
							HX_STACK_LINE(2451)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2451)
						old = pre->next;
						HX_STACK_LINE(2451)
						ret1 = old->next;
						HX_STACK_LINE(2451)
						pre->next = ret1;
						HX_STACK_LINE(2451)
						if (((ret1 == null()))){
							HX_STACK_LINE(2451)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2451)
					{
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2451)
						o->elt = null();
						HX_STACK_LINE(2451)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2451)
					this->modified = true;
					HX_STACK_LINE(2451)
					(this->length)--;
					HX_STACK_LINE(2451)
					this->pushmod = true;
					HX_STACK_LINE(2451)
					ret1;
				}
				HX_STACK_LINE(2451)
				ret = true;
				HX_STACK_LINE(2451)
				break;
			}
			HX_STACK_LINE(2451)
			pre = cur;
			HX_STACK_LINE(2451)
			cur = cur->next;
		}
		HX_STACK_LINE(2451)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,remove,(void))

bool ZNPList_ZPP_Compound_obj::try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","try_remove",0xf5a89816,"zpp_nape.util.ZNPList_ZPP_Compound.try_remove","zpp_nape/util/Lists.hx",2453,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2462)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2463)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2464)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2465)
	while((true)){
		HX_STACK_LINE(2465)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(2465)
			break;
		}
		HX_STACK_LINE(2466)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2467)
			this->erase(pre);
			HX_STACK_LINE(2468)
			ret = true;
			HX_STACK_LINE(2469)
			break;
		}
		HX_STACK_LINE(2471)
		pre = cur;
		HX_STACK_LINE(2472)
		cur = cur->next;
	}
	HX_STACK_LINE(2474)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,try_remove,return )

Void ZNPList_ZPP_Compound_obj::inlined_remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_remove",0xcbd49266,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_remove","zpp_nape/util/Lists.hx",2487,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2487)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2487)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2487)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2487)
		while((true)){
			HX_STACK_LINE(2487)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(2487)
				break;
			}
			HX_STACK_LINE(2487)
			if (((cur->elt == obj))){
				HX_STACK_LINE(2487)
				{
					HX_STACK_LINE(2487)
					::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2487)
					::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2487)
					if (((pre == null()))){
						HX_STACK_LINE(2487)
						old = this->head;
						HX_STACK_LINE(2487)
						ret1 = old->next;
						HX_STACK_LINE(2487)
						this->head = ret1;
						HX_STACK_LINE(2487)
						if (((this->head == null()))){
							HX_STACK_LINE(2487)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2487)
						old = pre->next;
						HX_STACK_LINE(2487)
						ret1 = old->next;
						HX_STACK_LINE(2487)
						pre->next = ret1;
						HX_STACK_LINE(2487)
						if (((ret1 == null()))){
							HX_STACK_LINE(2487)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2487)
					{
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2487)
						o->elt = null();
						HX_STACK_LINE(2487)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2487)
					this->modified = true;
					HX_STACK_LINE(2487)
					(this->length)--;
					HX_STACK_LINE(2487)
					this->pushmod = true;
					HX_STACK_LINE(2487)
					ret1;
				}
				HX_STACK_LINE(2487)
				ret = true;
				HX_STACK_LINE(2487)
				break;
			}
			HX_STACK_LINE(2487)
			pre = cur;
			HX_STACK_LINE(2487)
			cur = cur->next;
		}
		HX_STACK_LINE(2487)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_remove,(void))

bool ZNPList_ZPP_Compound_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_try_remove",0x7c35612a,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_try_remove","zpp_nape/util/Lists.hx",2491,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2500)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2501)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2502)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2503)
	while((true)){
		HX_STACK_LINE(2503)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(2503)
			break;
		}
		HX_STACK_LINE(2504)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2505)
			{
				HX_STACK_LINE(2505)
				::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2505)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2505)
				if (((pre == null()))){
					HX_STACK_LINE(2505)
					old = this->head;
					HX_STACK_LINE(2505)
					ret1 = old->next;
					HX_STACK_LINE(2505)
					this->head = ret1;
					HX_STACK_LINE(2505)
					if (((this->head == null()))){
						HX_STACK_LINE(2505)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2505)
					old = pre->next;
					HX_STACK_LINE(2505)
					ret1 = old->next;
					HX_STACK_LINE(2505)
					pre->next = ret1;
					HX_STACK_LINE(2505)
					if (((ret1 == null()))){
						HX_STACK_LINE(2505)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2505)
				{
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2505)
					o->elt = null();
					HX_STACK_LINE(2505)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2505)
				this->modified = true;
				HX_STACK_LINE(2505)
				(this->length)--;
				HX_STACK_LINE(2505)
				this->pushmod = true;
				HX_STACK_LINE(2505)
				ret1;
			}
			HX_STACK_LINE(2506)
			ret = true;
			HX_STACK_LINE(2507)
			break;
		}
		HX_STACK_LINE(2509)
		pre = cur;
		HX_STACK_LINE(2510)
		cur = cur->next;
	}
	HX_STACK_LINE(2512)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","erase",0x29b0bd98,"zpp_nape.util.ZNPList_ZPP_Compound.erase","zpp_nape/util/Lists.hx",2515,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2515)
	::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2515)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2515)
	if (((pre == null()))){
		HX_STACK_LINE(2515)
		old = this->head;
		HX_STACK_LINE(2515)
		ret = old->next;
		HX_STACK_LINE(2515)
		this->head = ret;
		HX_STACK_LINE(2515)
		if (((this->head == null()))){
			HX_STACK_LINE(2515)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2515)
		old = pre->next;
		HX_STACK_LINE(2515)
		ret = old->next;
		HX_STACK_LINE(2515)
		pre->next = ret;
		HX_STACK_LINE(2515)
		if (((ret == null()))){
			HX_STACK_LINE(2515)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2515)
	{
		HX_STACK_LINE(2515)
		::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2515)
		o->elt = null();
		HX_STACK_LINE(2515)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
		HX_STACK_LINE(2515)
		::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2515)
	this->modified = true;
	HX_STACK_LINE(2515)
	(this->length)--;
	HX_STACK_LINE(2515)
	this->pushmod = true;
	HX_STACK_LINE(2515)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_erase",0x93008d04,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_erase","zpp_nape/util/Lists.hx",2519,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2528)
	::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2529)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2530)
	if (((pre == null()))){
		HX_STACK_LINE(2531)
		old = this->head;
		HX_STACK_LINE(2532)
		ret = old->next;
		HX_STACK_LINE(2533)
		this->head = ret;
		HX_STACK_LINE(2534)
		if (((this->head == null()))){
			HX_STACK_LINE(2534)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2537)
		old = pre->next;
		HX_STACK_LINE(2538)
		ret = old->next;
		HX_STACK_LINE(2539)
		pre->next = ret;
		HX_STACK_LINE(2540)
		if (((ret == null()))){
			HX_STACK_LINE(2540)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2543)
	{
		HX_STACK_LINE(2544)
		::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2553)
		o->elt = null();
		HX_STACK_LINE(2554)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
		HX_STACK_LINE(2555)
		::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2560)
	this->modified = true;
	HX_STACK_LINE(2561)
	(this->length)--;
	HX_STACK_LINE(2562)
	this->pushmod = true;
	HX_STACK_LINE(2563)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Compound pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","splice",0xca64cc8a,"zpp_nape.util.ZNPList_ZPP_Compound.splice","zpp_nape/util/Lists.hx",2565,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(2566)
	while((true)){
		HX_STACK_LINE(2566)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2566)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(2566)
			break;
		}
		HX_STACK_LINE(2566)
		this->erase(pre);
	}
	HX_STACK_LINE(2567)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,splice,return )

Void ZNPList_ZPP_Compound_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","clear",0xfeef463f,"zpp_nape.util.ZNPList_ZPP_Compound.clear","zpp_nape/util/Lists.hx",2570,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2570)
		while((true)){
			HX_STACK_LINE(2570)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(2570)
				break;
			}
			HX_STACK_LINE(2570)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2570)
			this->head = ret->next;
			HX_STACK_LINE(2570)
			{
				HX_STACK_LINE(2570)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2570)
				o->elt = null();
				HX_STACK_LINE(2570)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2570)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2570)
			if (((this->head == null()))){
				HX_STACK_LINE(2570)
				this->pushmod = true;
			}
			HX_STACK_LINE(2570)
			this->modified = true;
			HX_STACK_LINE(2570)
			(this->length)--;
		}
		HX_STACK_LINE(2570)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,clear,(void))

Void ZNPList_ZPP_Compound_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_clear",0x683f15ab,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_clear","zpp_nape/util/Lists.hx",2575,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2576)
		while((true)){
			HX_STACK_LINE(2576)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(2576)
				break;
			}
			HX_STACK_LINE(2576)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2576)
			this->head = ret->next;
			HX_STACK_LINE(2576)
			{
				HX_STACK_LINE(2576)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2576)
				o->elt = null();
				HX_STACK_LINE(2576)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2576)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2576)
			if (((this->head == null()))){
				HX_STACK_LINE(2576)
				this->pushmod = true;
			}
			HX_STACK_LINE(2576)
			this->modified = true;
			HX_STACK_LINE(2576)
			(this->length)--;
		}
		HX_STACK_LINE(2577)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_clear,(void))

Void ZNPList_ZPP_Compound_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","reverse",0x7db41e54,"zpp_nape.util.ZNPList_ZPP_Compound.reverse","zpp_nape/util/Lists.hx",2580,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2581)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2582)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2583)
		while((true)){
			HX_STACK_LINE(2583)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(2583)
				break;
			}
			HX_STACK_LINE(2584)
			::zpp_nape::util::ZNPNode_ZPP_Compound nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2585)
			cur->next = pre;
			HX_STACK_LINE(2586)
			this->head = cur;
			HX_STACK_LINE(2587)
			pre = cur;
			HX_STACK_LINE(2588)
			cur = nx;
		}
		HX_STACK_LINE(2590)
		this->modified = true;
		HX_STACK_LINE(2591)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,reverse,(void))

bool ZNPList_ZPP_Compound_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","empty",0x266e0f3f,"zpp_nape.util.ZNPList_ZPP_Compound.empty","zpp_nape/util/Lists.hx",2596,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2596)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,empty,return )

int ZNPList_ZPP_Compound_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","size",0x552e684f,"zpp_nape.util.ZNPList_ZPP_Compound.size","zpp_nape/util/Lists.hx",2601,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2601)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,size,return )

bool ZNPList_ZPP_Compound_obj::has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","has",0x96bc238c,"zpp_nape.util.ZNPList_ZPP_Compound.has","zpp_nape/util/Lists.hx",2604,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2604)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2604)
	{
		HX_STACK_LINE(2604)
		ret = false;
		HX_STACK_LINE(2604)
		{
			HX_STACK_LINE(2604)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2604)
			while((true)){
				HX_STACK_LINE(2604)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(2604)
					break;
				}
				HX_STACK_LINE(2604)
				::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2604)
				if (((npite == obj))){
					HX_STACK_LINE(2604)
					ret = true;
					HX_STACK_LINE(2604)
					break;
				}
				HX_STACK_LINE(2604)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2604)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,has,return )

bool ZNPList_ZPP_Compound_obj::inlined_has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_has",0x194afff8,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_has","zpp_nape/util/Lists.hx",2608,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2617)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2618)
	{
		HX_STACK_LINE(2619)
		ret = false;
		HX_STACK_LINE(2620)
		{
			HX_STACK_LINE(2621)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2622)
			while((true)){
				HX_STACK_LINE(2622)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(2622)
					break;
				}
				HX_STACK_LINE(2623)
				::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2625)
				if (((npite == obj))){
					HX_STACK_LINE(2626)
					ret = true;
					HX_STACK_LINE(2627)
					break;
				}
				HX_STACK_LINE(2630)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2634)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_has,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","front",0xbd21ed5b,"zpp_nape.util.ZNPList_ZPP_Compound.front","zpp_nape/util/Lists.hx",2639,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2639)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,front,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","back",0x49eba1b5,"zpp_nape.util.ZNPList_ZPP_Compound.back","zpp_nape/util/Lists.hx",2641,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2642)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2643)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2644)
	while((true)){
		HX_STACK_LINE(2644)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(2644)
			break;
		}
		HX_STACK_LINE(2645)
		ret = cur;
		HX_STACK_LINE(2646)
		cur = cur->next;
	}
	HX_STACK_LINE(2648)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","iterator_at",0x1de9f016,"zpp_nape.util.ZNPList_ZPP_Compound.iterator_at","zpp_nape/util/Lists.hx",2650,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2659)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2660)
	while((true)){
		HX_STACK_LINE(2660)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2660)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(2660)
			break;
		}
		HX_STACK_LINE(2660)
		ret = ret->next;
	}
	HX_STACK_LINE(2661)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","at",0x40f67d01,"zpp_nape.util.ZNPList_ZPP_Compound.at","zpp_nape/util/Lists.hx",2663,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2672)
	::zpp_nape::util::ZNPNode_ZPP_Compound it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2673)
	if (((it != null()))){
		HX_STACK_LINE(2673)
		return it->elt;
	}
	else{
		HX_STACK_LINE(2673)
		return null();
	}
	HX_STACK_LINE(2673)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,at,return )


ZNPList_ZPP_Compound_obj::ZNPList_ZPP_Compound_obj()
{
}

void ZNPList_ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Compound);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Compound_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Compound >(); return inValue; }
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

void ZNPList_ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Compound*/ ,(int)offsetof(ZNPList_ZPP_Compound_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Compound_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Compound_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Compound_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_Compound_obj::__mClass;

void ZNPList_ZPP_Compound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Compound"), hx::TCanCast< ZNPList_ZPP_Compound_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_Compound_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
