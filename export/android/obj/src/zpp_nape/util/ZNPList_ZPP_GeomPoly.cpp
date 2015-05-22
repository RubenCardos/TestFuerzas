#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomPoly_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","new",0x00e5cacf,"zpp_nape.util.ZNPList_ZPP_GeomPoly.new","zpp_nape/util/Lists.hx",13936,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13946)
	this->length = (int)0;
	HX_STACK_LINE(13945)
	this->pushmod = false;
	HX_STACK_LINE(13944)
	this->modified = false;
	HX_STACK_LINE(13937)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_GeomPoly_obj::~ZNPList_ZPP_GeomPoly_obj() { }

Dynamic ZNPList_ZPP_GeomPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > ZNPList_ZPP_GeomPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","begin",0x752e9e58,"zpp_nape.util.ZNPList_ZPP_GeomPoly.begin","zpp_nape/util/Lists.hx",13942,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13942)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,begin,return )

Void ZNPList_ZPP_GeomPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","setbegin",0x16fdb678,"zpp_nape.util.ZNPList_ZPP_GeomPoly.setbegin","zpp_nape/util/Lists.hx",13949,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(13950)
		this->head = i;
		HX_STACK_LINE(13951)
		this->modified = true;
		HX_STACK_LINE(13952)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,setbegin,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","add",0x00dbec90,"zpp_nape.util.ZNPList_ZPP_GeomPoly.add","zpp_nape/util/Lists.hx",13955,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13955)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13955)
	{
		HX_STACK_LINE(13955)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13955)
		{
			HX_STACK_LINE(13955)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
				HX_STACK_LINE(13955)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly _g = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(13955)
				ret = _g;
			}
			else{
				HX_STACK_LINE(13955)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(13955)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13955)
				ret->next = null();
			}
			HX_STACK_LINE(13955)
			Dynamic();
		}
		HX_STACK_LINE(13955)
		ret->elt = o;
		HX_STACK_LINE(13955)
		temp = ret;
	}
	HX_STACK_LINE(13955)
	temp->next = this->head;
	HX_STACK_LINE(13955)
	this->head = temp;
	HX_STACK_LINE(13955)
	this->modified = true;
	HX_STACK_LINE(13955)
	(this->length)++;
	HX_STACK_LINE(13955)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,add,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_add",0xb2f6cdfc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_add","zpp_nape/util/Lists.hx",13959,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13968)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13968)
	{
		HX_STACK_LINE(13969)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13970)
		{
			HX_STACK_LINE(13971)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
				HX_STACK_LINE(13972)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly _g = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(13972)
				ret = _g;
			}
			else{
				HX_STACK_LINE(13978)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(13979)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13980)
				ret->next = null();
			}
			HX_STACK_LINE(13985)
			Dynamic();
		}
		HX_STACK_LINE(13987)
		ret->elt = o;
		HX_STACK_LINE(13988)
		temp = ret;
	}
	HX_STACK_LINE(13990)
	temp->next = this->head;
	HX_STACK_LINE(13991)
	this->head = temp;
	HX_STACK_LINE(13992)
	this->modified = true;
	HX_STACK_LINE(13993)
	(this->length)++;
	HX_STACK_LINE(13994)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_add,return )

Void ZNPList_ZPP_GeomPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomPoly x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","addAll",0x17bffe71,"zpp_nape.util.ZNPList_ZPP_GeomPoly.addAll","zpp_nape/util/Lists.hx",14005,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(14006)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(14007)
		while((true)){
			HX_STACK_LINE(14007)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(14007)
				break;
			}
			HX_STACK_LINE(14008)
			::zpp_nape::geom::ZPP_GeomPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(14009)
			this->add(i);
			HX_STACK_LINE(14010)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","insert",0x16a2382a,"zpp_nape.util.ZNPList_ZPP_GeomPoly.insert","zpp_nape/util/Lists.hx",14015,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14015)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14015)
	{
		HX_STACK_LINE(14015)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14015)
		{
			HX_STACK_LINE(14015)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
				HX_STACK_LINE(14015)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly _g = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14015)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14015)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14015)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14015)
				ret->next = null();
			}
			HX_STACK_LINE(14015)
			Dynamic();
		}
		HX_STACK_LINE(14015)
		ret->elt = o;
		HX_STACK_LINE(14015)
		temp = ret;
	}
	HX_STACK_LINE(14015)
	if (((cur == null()))){
		HX_STACK_LINE(14015)
		temp->next = this->head;
		HX_STACK_LINE(14015)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14015)
		temp->next = cur->next;
		HX_STACK_LINE(14015)
		cur->next = temp;
	}
	HX_STACK_LINE(14015)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14015)
	this->pushmod = _g1;
	HX_STACK_LINE(14015)
	(this->length)++;
	HX_STACK_LINE(14015)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_insert",0x312d023e,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_insert","zpp_nape/util/Lists.hx",14019,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14028)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14028)
	{
		HX_STACK_LINE(14029)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14030)
		{
			HX_STACK_LINE(14031)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
				HX_STACK_LINE(14032)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly _g = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14032)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14038)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14039)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14040)
				ret->next = null();
			}
			HX_STACK_LINE(14045)
			Dynamic();
		}
		HX_STACK_LINE(14047)
		ret->elt = o;
		HX_STACK_LINE(14048)
		temp = ret;
	}
	HX_STACK_LINE(14050)
	if (((cur == null()))){
		HX_STACK_LINE(14051)
		temp->next = this->head;
		HX_STACK_LINE(14052)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14055)
		temp->next = cur->next;
		HX_STACK_LINE(14056)
		cur->next = temp;
	}
	HX_STACK_LINE(14058)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14058)
	this->pushmod = _g1;
	HX_STACK_LINE(14059)
	(this->length)++;
	HX_STACK_LINE(14060)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,inlined_insert,return )

Void ZNPList_ZPP_GeomPoly_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","pop",0x00e75800,"zpp_nape.util.ZNPList_ZPP_GeomPoly.pop","zpp_nape/util/Lists.hx",14063,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14063)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14063)
		this->head = ret->next;
		HX_STACK_LINE(14063)
		{
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14063)
			o->elt = null();
			HX_STACK_LINE(14063)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14063)
		if (((this->head == null()))){
			HX_STACK_LINE(14063)
			this->pushmod = true;
		}
		HX_STACK_LINE(14063)
		this->modified = true;
		HX_STACK_LINE(14063)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_pop",0xb302396c,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_pop","zpp_nape/util/Lists.hx",14067,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14076)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14077)
		this->head = ret->next;
		HX_STACK_LINE(14079)
		{
			HX_STACK_LINE(14080)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14089)
			o->elt = null();
			HX_STACK_LINE(14090)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(14091)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14096)
		if (((this->head == null()))){
			HX_STACK_LINE(14096)
			this->pushmod = true;
		}
		HX_STACK_LINE(14097)
		this->modified = true;
		HX_STACK_LINE(14098)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","pop_unsafe",0x29cd3dc5,"zpp_nape.util.ZNPList_ZPP_GeomPoly.pop_unsafe","zpp_nape/util/Lists.hx",14101,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14101)
	::zpp_nape::geom::ZPP_GeomPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14101)
	this->pop();
	HX_STACK_LINE(14101)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_pop_unsafe",0xc688a1d9,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_pop_unsafe","zpp_nape/util/Lists.hx",14105,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14114)
	::zpp_nape::geom::ZPP_GeomPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14115)
	this->pop();
	HX_STACK_LINE(14116)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_GeomPoly_obj::remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","remove",0x7d4d9135,"zpp_nape.util.ZNPList_ZPP_GeomPoly.remove","zpp_nape/util/Lists.hx",14127,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14127)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14127)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14127)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14127)
		while((true)){
			HX_STACK_LINE(14127)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14127)
				break;
			}
			HX_STACK_LINE(14127)
			if (((cur->elt == obj))){
				HX_STACK_LINE(14127)
				{
					HX_STACK_LINE(14127)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14127)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14127)
					if (((pre == null()))){
						HX_STACK_LINE(14127)
						old = this->head;
						HX_STACK_LINE(14127)
						ret1 = old->next;
						HX_STACK_LINE(14127)
						this->head = ret1;
						HX_STACK_LINE(14127)
						if (((this->head == null()))){
							HX_STACK_LINE(14127)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14127)
						old = pre->next;
						HX_STACK_LINE(14127)
						ret1 = old->next;
						HX_STACK_LINE(14127)
						pre->next = ret1;
						HX_STACK_LINE(14127)
						if (((ret1 == null()))){
							HX_STACK_LINE(14127)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14127)
					{
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14127)
						o->elt = null();
						HX_STACK_LINE(14127)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14127)
					this->modified = true;
					HX_STACK_LINE(14127)
					(this->length)--;
					HX_STACK_LINE(14127)
					this->pushmod = true;
					HX_STACK_LINE(14127)
					ret1;
				}
				HX_STACK_LINE(14127)
				ret = true;
				HX_STACK_LINE(14127)
				break;
			}
			HX_STACK_LINE(14127)
			pre = cur;
			HX_STACK_LINE(14127)
			cur = cur->next;
		}
		HX_STACK_LINE(14127)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","try_remove",0x40f77379,"zpp_nape.util.ZNPList_ZPP_GeomPoly.try_remove","zpp_nape/util/Lists.hx",14129,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14138)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14139)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14140)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14141)
	while((true)){
		HX_STACK_LINE(14141)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14141)
			break;
		}
		HX_STACK_LINE(14142)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14143)
			this->erase(pre);
			HX_STACK_LINE(14144)
			ret = true;
			HX_STACK_LINE(14145)
			break;
		}
		HX_STACK_LINE(14147)
		pre = cur;
		HX_STACK_LINE(14148)
		cur = cur->next;
	}
	HX_STACK_LINE(14150)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_remove",0x97d85b49,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_remove","zpp_nape/util/Lists.hx",14163,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14163)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14163)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14163)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14163)
		while((true)){
			HX_STACK_LINE(14163)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14163)
				break;
			}
			HX_STACK_LINE(14163)
			if (((cur->elt == obj))){
				HX_STACK_LINE(14163)
				{
					HX_STACK_LINE(14163)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14163)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14163)
					if (((pre == null()))){
						HX_STACK_LINE(14163)
						old = this->head;
						HX_STACK_LINE(14163)
						ret1 = old->next;
						HX_STACK_LINE(14163)
						this->head = ret1;
						HX_STACK_LINE(14163)
						if (((this->head == null()))){
							HX_STACK_LINE(14163)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14163)
						old = pre->next;
						HX_STACK_LINE(14163)
						ret1 = old->next;
						HX_STACK_LINE(14163)
						pre->next = ret1;
						HX_STACK_LINE(14163)
						if (((ret1 == null()))){
							HX_STACK_LINE(14163)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14163)
					{
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14163)
						o->elt = null();
						HX_STACK_LINE(14163)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14163)
					this->modified = true;
					HX_STACK_LINE(14163)
					(this->length)--;
					HX_STACK_LINE(14163)
					this->pushmod = true;
					HX_STACK_LINE(14163)
					ret1;
				}
				HX_STACK_LINE(14163)
				ret = true;
				HX_STACK_LINE(14163)
				break;
			}
			HX_STACK_LINE(14163)
			pre = cur;
			HX_STACK_LINE(14163)
			cur = cur->next;
		}
		HX_STACK_LINE(14163)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_try_remove",0xddb2d78d,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_try_remove","zpp_nape/util/Lists.hx",14167,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14176)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14177)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14178)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14179)
	while((true)){
		HX_STACK_LINE(14179)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14179)
			break;
		}
		HX_STACK_LINE(14180)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14181)
			{
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(14181)
				if (((pre == null()))){
					HX_STACK_LINE(14181)
					old = this->head;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					this->head = ret1;
					HX_STACK_LINE(14181)
					if (((this->head == null()))){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(14181)
					old = pre->next;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					pre->next = ret1;
					HX_STACK_LINE(14181)
					if (((ret1 == null()))){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(14181)
				{
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(14181)
					o->elt = null();
					HX_STACK_LINE(14181)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(14181)
				this->modified = true;
				HX_STACK_LINE(14181)
				(this->length)--;
				HX_STACK_LINE(14181)
				this->pushmod = true;
				HX_STACK_LINE(14181)
				ret1;
			}
			HX_STACK_LINE(14182)
			ret = true;
			HX_STACK_LINE(14183)
			break;
		}
		HX_STACK_LINE(14185)
		pre = cur;
		HX_STACK_LINE(14186)
		cur = cur->next;
	}
	HX_STACK_LINE(14188)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","erase",0x37f59d15,"zpp_nape.util.ZNPList_ZPP_GeomPoly.erase","zpp_nape/util/Lists.hx",14191,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14191)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14191)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14191)
	if (((pre == null()))){
		HX_STACK_LINE(14191)
		old = this->head;
		HX_STACK_LINE(14191)
		ret = old->next;
		HX_STACK_LINE(14191)
		this->head = ret;
		HX_STACK_LINE(14191)
		if (((this->head == null()))){
			HX_STACK_LINE(14191)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14191)
		old = pre->next;
		HX_STACK_LINE(14191)
		ret = old->next;
		HX_STACK_LINE(14191)
		pre->next = ret;
		HX_STACK_LINE(14191)
		if (((ret == null()))){
			HX_STACK_LINE(14191)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14191)
	{
		HX_STACK_LINE(14191)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14191)
		o->elt = null();
		HX_STACK_LINE(14191)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
		HX_STACK_LINE(14191)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14191)
	this->modified = true;
	HX_STACK_LINE(14191)
	(this->length)--;
	HX_STACK_LINE(14191)
	this->pushmod = true;
	HX_STACK_LINE(14191)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_erase",0xcf9cb181,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_erase","zpp_nape/util/Lists.hx",14195,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14204)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14205)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14206)
	if (((pre == null()))){
		HX_STACK_LINE(14207)
		old = this->head;
		HX_STACK_LINE(14208)
		ret = old->next;
		HX_STACK_LINE(14209)
		this->head = ret;
		HX_STACK_LINE(14210)
		if (((this->head == null()))){
			HX_STACK_LINE(14210)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14213)
		old = pre->next;
		HX_STACK_LINE(14214)
		ret = old->next;
		HX_STACK_LINE(14215)
		pre->next = ret;
		HX_STACK_LINE(14216)
		if (((ret == null()))){
			HX_STACK_LINE(14216)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14219)
	{
		HX_STACK_LINE(14220)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14229)
		o->elt = null();
		HX_STACK_LINE(14230)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
		HX_STACK_LINE(14231)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14236)
	this->modified = true;
	HX_STACK_LINE(14237)
	(this->length)--;
	HX_STACK_LINE(14238)
	this->pushmod = true;
	HX_STACK_LINE(14239)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","splice",0x38637a6d,"zpp_nape.util.ZNPList_ZPP_GeomPoly.splice","zpp_nape/util/Lists.hx",14241,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(14242)
	while((true)){
		HX_STACK_LINE(14242)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14242)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(14242)
			break;
		}
		HX_STACK_LINE(14242)
		this->erase(pre);
	}
	HX_STACK_LINE(14243)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,splice,return )

Void ZNPList_ZPP_GeomPoly_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","clear",0x0d3425bc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.clear","zpp_nape/util/Lists.hx",14246,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14246)
		while((true)){
			HX_STACK_LINE(14246)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(14246)
				break;
			}
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14246)
			this->head = ret->next;
			HX_STACK_LINE(14246)
			{
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14246)
				o->elt = null();
				HX_STACK_LINE(14246)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14246)
			if (((this->head == null()))){
				HX_STACK_LINE(14246)
				this->pushmod = true;
			}
			HX_STACK_LINE(14246)
			this->modified = true;
			HX_STACK_LINE(14246)
			(this->length)--;
		}
		HX_STACK_LINE(14246)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_clear",0xa4db3a28,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_clear","zpp_nape/util/Lists.hx",14251,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14252)
		while((true)){
			HX_STACK_LINE(14252)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(14252)
				break;
			}
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14252)
			this->head = ret->next;
			HX_STACK_LINE(14252)
			{
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14252)
				o->elt = null();
				HX_STACK_LINE(14252)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14252)
			if (((this->head == null()))){
				HX_STACK_LINE(14252)
				this->pushmod = true;
			}
			HX_STACK_LINE(14252)
			this->modified = true;
			HX_STACK_LINE(14252)
			(this->length)--;
		}
		HX_STACK_LINE(14253)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","reverse",0x4e8d9711,"zpp_nape.util.ZNPList_ZPP_GeomPoly.reverse","zpp_nape/util/Lists.hx",14256,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14257)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14258)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14259)
		while((true)){
			HX_STACK_LINE(14259)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14259)
				break;
			}
			HX_STACK_LINE(14260)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(14261)
			cur->next = pre;
			HX_STACK_LINE(14262)
			this->head = cur;
			HX_STACK_LINE(14263)
			pre = cur;
			HX_STACK_LINE(14264)
			cur = nx;
		}
		HX_STACK_LINE(14266)
		this->modified = true;
		HX_STACK_LINE(14267)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,reverse,(void))

bool ZNPList_ZPP_GeomPoly_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","empty",0x34b2eebc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.empty","zpp_nape/util/Lists.hx",14272,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14272)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,empty,return )

int ZNPList_ZPP_GeomPoly_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","size",0xcb7cc772,"zpp_nape.util.ZNPList_ZPP_GeomPoly.size","zpp_nape/util/Lists.hx",14277,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14277)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,size,return )

bool ZNPList_ZPP_GeomPoly_obj::has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","has",0x00e139c9,"zpp_nape.util.ZNPList_ZPP_GeomPoly.has","zpp_nape/util/Lists.hx",14280,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14280)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14280)
	{
		HX_STACK_LINE(14280)
		ret = false;
		HX_STACK_LINE(14280)
		{
			HX_STACK_LINE(14280)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14280)
			while((true)){
				HX_STACK_LINE(14280)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(14280)
					break;
				}
				HX_STACK_LINE(14280)
				::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14280)
				if (((npite == obj))){
					HX_STACK_LINE(14280)
					ret = true;
					HX_STACK_LINE(14280)
					break;
				}
				HX_STACK_LINE(14280)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14280)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,has,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_has",0xb2fc1b35,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_has","zpp_nape/util/Lists.hx",14284,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14293)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14294)
	{
		HX_STACK_LINE(14295)
		ret = false;
		HX_STACK_LINE(14296)
		{
			HX_STACK_LINE(14297)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14298)
			while((true)){
				HX_STACK_LINE(14298)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(14298)
					break;
				}
				HX_STACK_LINE(14299)
				::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14301)
				if (((npite == obj))){
					HX_STACK_LINE(14302)
					ret = true;
					HX_STACK_LINE(14303)
					break;
				}
				HX_STACK_LINE(14306)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14310)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_has,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","front",0xcb66ccd8,"zpp_nape.util.ZNPList_ZPP_GeomPoly.front","zpp_nape/util/Lists.hx",14315,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14315)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,front,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","back",0xc03a00d8,"zpp_nape.util.ZNPList_ZPP_GeomPoly.back","zpp_nape/util/Lists.hx",14317,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14318)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14319)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14320)
	while((true)){
		HX_STACK_LINE(14320)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14320)
			break;
		}
		HX_STACK_LINE(14321)
		ret = cur;
		HX_STACK_LINE(14322)
		cur = cur->next;
	}
	HX_STACK_LINE(14324)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","iterator_at",0xb79b0b53,"zpp_nape.util.ZNPList_ZPP_GeomPoly.iterator_at","zpp_nape/util/Lists.hx",14326,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14335)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14336)
	while((true)){
		HX_STACK_LINE(14336)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14336)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(14336)
			break;
		}
		HX_STACK_LINE(14336)
		ret = ret->next;
	}
	HX_STACK_LINE(14337)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","at",0x33a9bd64,"zpp_nape.util.ZNPList_ZPP_GeomPoly.at","zpp_nape/util/Lists.hx",14339,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14348)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(14349)
	if (((it != null()))){
		HX_STACK_LINE(14349)
		return it->elt;
	}
	else{
		HX_STACK_LINE(14349)
		return null();
	}
	HX_STACK_LINE(14349)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,at,return )


ZNPList_ZPP_GeomPoly_obj::ZNPList_ZPP_GeomPoly_obj()
{
}

void ZNPList_ZPP_GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomPoly);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
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

void ZNPList_ZPP_GeomPoly_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomPoly*/ ,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_GeomPoly_obj::__mClass;

void ZNPList_ZPP_GeomPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomPoly"), hx::TCanCast< ZNPList_ZPP_GeomPoly_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_GeomPoly_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
