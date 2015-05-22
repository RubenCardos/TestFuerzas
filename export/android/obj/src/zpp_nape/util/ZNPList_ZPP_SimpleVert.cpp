#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","new",0xb5465a6a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.new","zpp_nape/util/Lists.hx",8098,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8108)
	this->length = (int)0;
	HX_STACK_LINE(8107)
	this->pushmod = false;
	HX_STACK_LINE(8106)
	this->modified = false;
	HX_STACK_LINE(8099)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SimpleVert_obj::~ZNPList_ZPP_SimpleVert_obj() { }

Dynamic ZNPList_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > ZNPList_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > result = new ZNPList_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > result = new ZNPList_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","begin",0x6e868ab3,"zpp_nape.util.ZNPList_ZPP_SimpleVert.begin","zpp_nape/util/Lists.hx",8104,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8104)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,begin,return )

Void ZNPList_ZPP_SimpleVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","setbegin",0x8887b4fd,"zpp_nape.util.ZNPList_ZPP_SimpleVert.setbegin","zpp_nape/util/Lists.hx",8111,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(8112)
		this->head = i;
		HX_STACK_LINE(8113)
		this->modified = true;
		HX_STACK_LINE(8114)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,setbegin,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","add",0xb53c7c2b,"zpp_nape.util.ZNPList_ZPP_SimpleVert.add","zpp_nape/util/Lists.hx",8117,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8117)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8117)
	{
		HX_STACK_LINE(8117)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8117)
		{
			HX_STACK_LINE(8117)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(8117)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert _g = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8117)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8117)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8117)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8117)
				ret->next = null();
			}
			HX_STACK_LINE(8117)
			Dynamic();
		}
		HX_STACK_LINE(8117)
		ret->elt = o;
		HX_STACK_LINE(8117)
		temp = ret;
	}
	HX_STACK_LINE(8117)
	temp->next = this->head;
	HX_STACK_LINE(8117)
	this->head = temp;
	HX_STACK_LINE(8117)
	this->modified = true;
	HX_STACK_LINE(8117)
	(this->length)++;
	HX_STACK_LINE(8117)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,add,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_add",0x5928f097,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_add","zpp_nape/util/Lists.hx",8121,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8130)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8130)
	{
		HX_STACK_LINE(8131)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8132)
		{
			HX_STACK_LINE(8133)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(8134)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert _g = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8134)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8140)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8141)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8142)
				ret->next = null();
			}
			HX_STACK_LINE(8147)
			Dynamic();
		}
		HX_STACK_LINE(8149)
		ret->elt = o;
		HX_STACK_LINE(8150)
		temp = ret;
	}
	HX_STACK_LINE(8152)
	temp->next = this->head;
	HX_STACK_LINE(8153)
	this->head = temp;
	HX_STACK_LINE(8154)
	this->modified = true;
	HX_STACK_LINE(8155)
	(this->length)++;
	HX_STACK_LINE(8156)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_add,return )

Void ZNPList_ZPP_SimpleVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","addAll",0x4b56e1b6,"zpp_nape.util.ZNPList_ZPP_SimpleVert.addAll","zpp_nape/util/Lists.hx",8167,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(8168)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(8169)
		while((true)){
			HX_STACK_LINE(8169)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(8169)
				break;
			}
			HX_STACK_LINE(8170)
			::zpp_nape::geom::ZPP_SimpleVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(8171)
			this->add(i);
			HX_STACK_LINE(8172)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","insert",0x4a391b6f,"zpp_nape.util.ZNPList_ZPP_SimpleVert.insert","zpp_nape/util/Lists.hx",8177,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8177)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8177)
	{
		HX_STACK_LINE(8177)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8177)
		{
			HX_STACK_LINE(8177)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(8177)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert _g = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8177)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8177)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8177)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8177)
				ret->next = null();
			}
			HX_STACK_LINE(8177)
			Dynamic();
		}
		HX_STACK_LINE(8177)
		ret->elt = o;
		HX_STACK_LINE(8177)
		temp = ret;
	}
	HX_STACK_LINE(8177)
	if (((cur == null()))){
		HX_STACK_LINE(8177)
		temp->next = this->head;
		HX_STACK_LINE(8177)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8177)
		temp->next = cur->next;
		HX_STACK_LINE(8177)
		cur->next = temp;
	}
	HX_STACK_LINE(8177)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(8177)
	this->pushmod = _g1;
	HX_STACK_LINE(8177)
	(this->length)++;
	HX_STACK_LINE(8177)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_insert",0xd5f03283,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_insert","zpp_nape/util/Lists.hx",8181,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8190)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8190)
	{
		HX_STACK_LINE(8191)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8192)
		{
			HX_STACK_LINE(8193)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(8194)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert _g = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(8194)
				ret = _g;
			}
			else{
				HX_STACK_LINE(8200)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8201)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8202)
				ret->next = null();
			}
			HX_STACK_LINE(8207)
			Dynamic();
		}
		HX_STACK_LINE(8209)
		ret->elt = o;
		HX_STACK_LINE(8210)
		temp = ret;
	}
	HX_STACK_LINE(8212)
	if (((cur == null()))){
		HX_STACK_LINE(8213)
		temp->next = this->head;
		HX_STACK_LINE(8214)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8217)
		temp->next = cur->next;
		HX_STACK_LINE(8218)
		cur->next = temp;
	}
	HX_STACK_LINE(8220)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(8220)
	this->pushmod = _g1;
	HX_STACK_LINE(8221)
	(this->length)++;
	HX_STACK_LINE(8222)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,inlined_insert,return )

Void ZNPList_ZPP_SimpleVert_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","pop",0xb547e79b,"zpp_nape.util.ZNPList_ZPP_SimpleVert.pop","zpp_nape/util/Lists.hx",8225,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8225)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8225)
		this->head = ret->next;
		HX_STACK_LINE(8225)
		{
			HX_STACK_LINE(8225)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8225)
			o->elt = null();
			HX_STACK_LINE(8225)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(8225)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8225)
		if (((this->head == null()))){
			HX_STACK_LINE(8225)
			this->pushmod = true;
		}
		HX_STACK_LINE(8225)
		this->modified = true;
		HX_STACK_LINE(8225)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop,(void))

Void ZNPList_ZPP_SimpleVert_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_pop",0x59345c07,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_pop","zpp_nape/util/Lists.hx",8229,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8238)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8239)
		this->head = ret->next;
		HX_STACK_LINE(8241)
		{
			HX_STACK_LINE(8242)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8251)
			o->elt = null();
			HX_STACK_LINE(8252)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(8253)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8258)
		if (((this->head == null()))){
			HX_STACK_LINE(8258)
			this->pushmod = true;
		}
		HX_STACK_LINE(8259)
		this->modified = true;
		HX_STACK_LINE(8260)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","pop_unsafe",0x90b7a78a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.pop_unsafe","zpp_nape/util/Lists.hx",8263,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8263)
	::zpp_nape::geom::ZPP_SimpleVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8263)
	this->pop();
	HX_STACK_LINE(8263)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_pop_unsafe",0x7f49d89e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_pop_unsafe","zpp_nape/util/Lists.hx",8267,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8276)
	::zpp_nape::geom::ZPP_SimpleVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8277)
	this->pop();
	HX_STACK_LINE(8278)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","remove",0xb0e4747a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.remove","zpp_nape/util/Lists.hx",8289,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8289)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8289)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8289)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8289)
		while((true)){
			HX_STACK_LINE(8289)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(8289)
				break;
			}
			HX_STACK_LINE(8289)
			if (((cur->elt == obj))){
				HX_STACK_LINE(8289)
				{
					HX_STACK_LINE(8289)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8289)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8289)
					if (((pre == null()))){
						HX_STACK_LINE(8289)
						old = this->head;
						HX_STACK_LINE(8289)
						ret1 = old->next;
						HX_STACK_LINE(8289)
						this->head = ret1;
						HX_STACK_LINE(8289)
						if (((this->head == null()))){
							HX_STACK_LINE(8289)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8289)
						old = pre->next;
						HX_STACK_LINE(8289)
						ret1 = old->next;
						HX_STACK_LINE(8289)
						pre->next = ret1;
						HX_STACK_LINE(8289)
						if (((ret1 == null()))){
							HX_STACK_LINE(8289)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8289)
					{
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8289)
						o->elt = null();
						HX_STACK_LINE(8289)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8289)
					this->modified = true;
					HX_STACK_LINE(8289)
					(this->length)--;
					HX_STACK_LINE(8289)
					this->pushmod = true;
					HX_STACK_LINE(8289)
					ret1;
				}
				HX_STACK_LINE(8289)
				ret = true;
				HX_STACK_LINE(8289)
				break;
			}
			HX_STACK_LINE(8289)
			pre = cur;
			HX_STACK_LINE(8289)
			cur = cur->next;
		}
		HX_STACK_LINE(8289)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,remove,(void))

bool ZNPList_ZPP_SimpleVert_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","try_remove",0xa7e1dd3e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.try_remove","zpp_nape/util/Lists.hx",8291,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8300)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8301)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8302)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8303)
	while((true)){
		HX_STACK_LINE(8303)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(8303)
			break;
		}
		HX_STACK_LINE(8304)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8305)
			this->erase(pre);
			HX_STACK_LINE(8306)
			ret = true;
			HX_STACK_LINE(8307)
			break;
		}
		HX_STACK_LINE(8309)
		pre = cur;
		HX_STACK_LINE(8310)
		cur = cur->next;
	}
	HX_STACK_LINE(8312)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,try_remove,return )

Void ZNPList_ZPP_SimpleVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_remove",0x3c9b8b8e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_remove","zpp_nape/util/Lists.hx",8325,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8325)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8325)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8325)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8325)
		while((true)){
			HX_STACK_LINE(8325)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(8325)
				break;
			}
			HX_STACK_LINE(8325)
			if (((cur->elt == obj))){
				HX_STACK_LINE(8325)
				{
					HX_STACK_LINE(8325)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8325)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8325)
					if (((pre == null()))){
						HX_STACK_LINE(8325)
						old = this->head;
						HX_STACK_LINE(8325)
						ret1 = old->next;
						HX_STACK_LINE(8325)
						this->head = ret1;
						HX_STACK_LINE(8325)
						if (((this->head == null()))){
							HX_STACK_LINE(8325)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8325)
						old = pre->next;
						HX_STACK_LINE(8325)
						ret1 = old->next;
						HX_STACK_LINE(8325)
						pre->next = ret1;
						HX_STACK_LINE(8325)
						if (((ret1 == null()))){
							HX_STACK_LINE(8325)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8325)
					{
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8325)
						o->elt = null();
						HX_STACK_LINE(8325)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8325)
					this->modified = true;
					HX_STACK_LINE(8325)
					(this->length)--;
					HX_STACK_LINE(8325)
					this->pushmod = true;
					HX_STACK_LINE(8325)
					ret1;
				}
				HX_STACK_LINE(8325)
				ret = true;
				HX_STACK_LINE(8325)
				break;
			}
			HX_STACK_LINE(8325)
			pre = cur;
			HX_STACK_LINE(8325)
			cur = cur->next;
		}
		HX_STACK_LINE(8325)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_try_remove",0x96740e52,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_try_remove","zpp_nape/util/Lists.hx",8329,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8338)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8339)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8340)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8341)
	while((true)){
		HX_STACK_LINE(8341)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(8341)
			break;
		}
		HX_STACK_LINE(8342)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8343)
			{
				HX_STACK_LINE(8343)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8343)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8343)
				if (((pre == null()))){
					HX_STACK_LINE(8343)
					old = this->head;
					HX_STACK_LINE(8343)
					ret1 = old->next;
					HX_STACK_LINE(8343)
					this->head = ret1;
					HX_STACK_LINE(8343)
					if (((this->head == null()))){
						HX_STACK_LINE(8343)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8343)
					old = pre->next;
					HX_STACK_LINE(8343)
					ret1 = old->next;
					HX_STACK_LINE(8343)
					pre->next = ret1;
					HX_STACK_LINE(8343)
					if (((ret1 == null()))){
						HX_STACK_LINE(8343)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8343)
				{
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8343)
					o->elt = null();
					HX_STACK_LINE(8343)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8343)
				this->modified = true;
				HX_STACK_LINE(8343)
				(this->length)--;
				HX_STACK_LINE(8343)
				this->pushmod = true;
				HX_STACK_LINE(8343)
				ret1;
			}
			HX_STACK_LINE(8344)
			ret = true;
			HX_STACK_LINE(8345)
			break;
		}
		HX_STACK_LINE(8347)
		pre = cur;
		HX_STACK_LINE(8348)
		cur = cur->next;
	}
	HX_STACK_LINE(8350)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","erase",0x314d8970,"zpp_nape.util.ZNPList_ZPP_SimpleVert.erase","zpp_nape/util/Lists.hx",8353,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8353)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8353)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8353)
	if (((pre == null()))){
		HX_STACK_LINE(8353)
		old = this->head;
		HX_STACK_LINE(8353)
		ret = old->next;
		HX_STACK_LINE(8353)
		this->head = ret;
		HX_STACK_LINE(8353)
		if (((this->head == null()))){
			HX_STACK_LINE(8353)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8353)
		old = pre->next;
		HX_STACK_LINE(8353)
		ret = old->next;
		HX_STACK_LINE(8353)
		pre->next = ret;
		HX_STACK_LINE(8353)
		if (((ret == null()))){
			HX_STACK_LINE(8353)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8353)
	{
		HX_STACK_LINE(8353)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8353)
		o->elt = null();
		HX_STACK_LINE(8353)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(8353)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8353)
	this->modified = true;
	HX_STACK_LINE(8353)
	(this->length)--;
	HX_STACK_LINE(8353)
	this->pushmod = true;
	HX_STACK_LINE(8353)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_erase",0x0090f0dc,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_erase","zpp_nape/util/Lists.hx",8357,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8366)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8367)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8368)
	if (((pre == null()))){
		HX_STACK_LINE(8369)
		old = this->head;
		HX_STACK_LINE(8370)
		ret = old->next;
		HX_STACK_LINE(8371)
		this->head = ret;
		HX_STACK_LINE(8372)
		if (((this->head == null()))){
			HX_STACK_LINE(8372)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8375)
		old = pre->next;
		HX_STACK_LINE(8376)
		ret = old->next;
		HX_STACK_LINE(8377)
		pre->next = ret;
		HX_STACK_LINE(8378)
		if (((ret == null()))){
			HX_STACK_LINE(8378)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8381)
	{
		HX_STACK_LINE(8382)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8391)
		o->elt = null();
		HX_STACK_LINE(8392)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(8393)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8398)
	this->modified = true;
	HX_STACK_LINE(8399)
	(this->length)--;
	HX_STACK_LINE(8400)
	this->pushmod = true;
	HX_STACK_LINE(8401)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","splice",0x6bfa5db2,"zpp_nape.util.ZNPList_ZPP_SimpleVert.splice","zpp_nape/util/Lists.hx",8403,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(8404)
	while((true)){
		HX_STACK_LINE(8404)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8404)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(8404)
			break;
		}
		HX_STACK_LINE(8404)
		this->erase(pre);
	}
	HX_STACK_LINE(8405)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,splice,return )

Void ZNPList_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","clear",0x068c1217,"zpp_nape.util.ZNPList_ZPP_SimpleVert.clear","zpp_nape/util/Lists.hx",8408,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8408)
		while((true)){
			HX_STACK_LINE(8408)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(8408)
				break;
			}
			HX_STACK_LINE(8408)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8408)
			this->head = ret->next;
			HX_STACK_LINE(8408)
			{
				HX_STACK_LINE(8408)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8408)
				o->elt = null();
				HX_STACK_LINE(8408)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8408)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8408)
			if (((this->head == null()))){
				HX_STACK_LINE(8408)
				this->pushmod = true;
			}
			HX_STACK_LINE(8408)
			this->modified = true;
			HX_STACK_LINE(8408)
			(this->length)--;
		}
		HX_STACK_LINE(8408)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,clear,(void))

Void ZNPList_ZPP_SimpleVert_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_clear",0xd5cf7983,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_clear","zpp_nape/util/Lists.hx",8413,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8414)
		while((true)){
			HX_STACK_LINE(8414)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(8414)
				break;
			}
			HX_STACK_LINE(8414)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8414)
			this->head = ret->next;
			HX_STACK_LINE(8414)
			{
				HX_STACK_LINE(8414)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8414)
				o->elt = null();
				HX_STACK_LINE(8414)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(8414)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8414)
			if (((this->head == null()))){
				HX_STACK_LINE(8414)
				this->pushmod = true;
			}
			HX_STACK_LINE(8414)
			this->modified = true;
			HX_STACK_LINE(8414)
			(this->length)--;
		}
		HX_STACK_LINE(8415)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleVert_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","reverse",0x3efd902c,"zpp_nape.util.ZNPList_ZPP_SimpleVert.reverse","zpp_nape/util/Lists.hx",8418,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8419)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8420)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8421)
		while((true)){
			HX_STACK_LINE(8421)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(8421)
				break;
			}
			HX_STACK_LINE(8422)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8423)
			cur->next = pre;
			HX_STACK_LINE(8424)
			this->head = cur;
			HX_STACK_LINE(8425)
			pre = cur;
			HX_STACK_LINE(8426)
			cur = nx;
		}
		HX_STACK_LINE(8428)
		this->modified = true;
		HX_STACK_LINE(8429)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,reverse,(void))

bool ZNPList_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","empty",0x2e0adb17,"zpp_nape.util.ZNPList_ZPP_SimpleVert.empty","zpp_nape/util/Lists.hx",8434,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8434)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,empty,return )

int ZNPList_ZPP_SimpleVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","size",0xeb99df77,"zpp_nape.util.ZNPList_ZPP_SimpleVert.size","zpp_nape/util/Lists.hx",8439,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8439)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,size,return )

bool ZNPList_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","has",0xb541c964,"zpp_nape.util.ZNPList_ZPP_SimpleVert.has","zpp_nape/util/Lists.hx",8442,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8442)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8442)
	{
		HX_STACK_LINE(8442)
		ret = false;
		HX_STACK_LINE(8442)
		{
			HX_STACK_LINE(8442)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8442)
			while((true)){
				HX_STACK_LINE(8442)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(8442)
					break;
				}
				HX_STACK_LINE(8442)
				::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8442)
				if (((npite == obj))){
					HX_STACK_LINE(8442)
					ret = true;
					HX_STACK_LINE(8442)
					break;
				}
				HX_STACK_LINE(8442)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8442)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,has,return )

bool ZNPList_ZPP_SimpleVert_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_has",0x592e3dd0,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_has","zpp_nape/util/Lists.hx",8446,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8455)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8456)
	{
		HX_STACK_LINE(8457)
		ret = false;
		HX_STACK_LINE(8458)
		{
			HX_STACK_LINE(8459)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8460)
			while((true)){
				HX_STACK_LINE(8460)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(8460)
					break;
				}
				HX_STACK_LINE(8461)
				::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8463)
				if (((npite == obj))){
					HX_STACK_LINE(8464)
					ret = true;
					HX_STACK_LINE(8465)
					break;
				}
				HX_STACK_LINE(8468)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8472)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_has,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","front",0xc4beb933,"zpp_nape.util.ZNPList_ZPP_SimpleVert.front","zpp_nape/util/Lists.hx",8477,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8477)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,front,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","back",0xe05718dd,"zpp_nape.util.ZNPList_ZPP_SimpleVert.back","zpp_nape/util/Lists.hx",8479,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8480)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8481)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8482)
	while((true)){
		HX_STACK_LINE(8482)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(8482)
			break;
		}
		HX_STACK_LINE(8483)
		ret = cur;
		HX_STACK_LINE(8484)
		cur = cur->next;
	}
	HX_STACK_LINE(8486)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","iterator_at",0x5dcd2dee,"zpp_nape.util.ZNPList_ZPP_SimpleVert.iterator_at","zpp_nape/util/Lists.hx",8488,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8497)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8498)
	while((true)){
		HX_STACK_LINE(8498)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8498)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(8498)
			break;
		}
		HX_STACK_LINE(8498)
		ret = ret->next;
	}
	HX_STACK_LINE(8499)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","at",0xc2d25a29,"zpp_nape.util.ZNPList_ZPP_SimpleVert.at","zpp_nape/util/Lists.hx",8501,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8510)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8511)
	if (((it != null()))){
		HX_STACK_LINE(8511)
		return it->elt;
	}
	else{
		HX_STACK_LINE(8511)
		return null();
	}
	HX_STACK_LINE(8511)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,at,return )


ZNPList_ZPP_SimpleVert_obj::ZNPList_ZPP_SimpleVert_obj()
{
}

void ZNPList_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleVert >(); return inValue; }
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

void ZNPList_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimpleVert*/ ,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_SimpleVert_obj::__mClass;

void ZNPList_ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimpleVert"), hx::TCanCast< ZNPList_ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_SimpleVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
