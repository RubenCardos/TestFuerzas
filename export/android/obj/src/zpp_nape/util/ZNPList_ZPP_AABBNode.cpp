#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBNode_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","new",0xf23b0d49,"zpp_nape.util.ZNPList_ZPP_AABBNode.new","zpp_nape/util/Lists.hx",10183,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10193)
	this->length = (int)0;
	HX_STACK_LINE(10192)
	this->pushmod = false;
	HX_STACK_LINE(10191)
	this->modified = false;
	HX_STACK_LINE(10184)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_AABBNode_obj::~ZNPList_ZPP_AABBNode_obj() { }

Dynamic ZNPList_ZPP_AABBNode_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBNode_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > ZNPList_ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","begin",0x5834f352,"zpp_nape.util.ZNPList_ZPP_AABBNode.begin","zpp_nape/util/Lists.hx",10189,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10189)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,begin,return )

Void ZNPList_ZPP_AABBNode_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBNode i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","setbegin",0x86e339be,"zpp_nape.util.ZNPList_ZPP_AABBNode.setbegin","zpp_nape/util/Lists.hx",10196,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(10197)
		this->head = i;
		HX_STACK_LINE(10198)
		this->modified = true;
		HX_STACK_LINE(10199)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,setbegin,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","add",0xf2312f0a,"zpp_nape.util.ZNPList_ZPP_AABBNode.add","zpp_nape/util/Lists.hx",10202,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10202)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10202)
	{
		HX_STACK_LINE(10202)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10202)
		{
			HX_STACK_LINE(10202)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10202)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode _g = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10202)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10202)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10202)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10202)
				ret->next = null();
			}
			HX_STACK_LINE(10202)
			Dynamic();
		}
		HX_STACK_LINE(10202)
		ret->elt = o;
		HX_STACK_LINE(10202)
		temp = ret;
	}
	HX_STACK_LINE(10202)
	temp->next = this->head;
	HX_STACK_LINE(10202)
	this->head = temp;
	HX_STACK_LINE(10202)
	this->modified = true;
	HX_STACK_LINE(10202)
	(this->length)++;
	HX_STACK_LINE(10202)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,add,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_add",0x456a1a76,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_add","zpp_nape/util/Lists.hx",10206,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10215)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10215)
	{
		HX_STACK_LINE(10216)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10217)
		{
			HX_STACK_LINE(10218)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10219)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode _g = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10219)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10225)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10226)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10227)
				ret->next = null();
			}
			HX_STACK_LINE(10232)
			Dynamic();
		}
		HX_STACK_LINE(10234)
		ret->elt = o;
		HX_STACK_LINE(10235)
		temp = ret;
	}
	HX_STACK_LINE(10237)
	temp->next = this->head;
	HX_STACK_LINE(10238)
	this->head = temp;
	HX_STACK_LINE(10239)
	this->modified = true;
	HX_STACK_LINE(10240)
	(this->length)++;
	HX_STACK_LINE(10241)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_add,return )

Void ZNPList_ZPP_AABBNode_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBNode x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","addAll",0xda440437,"zpp_nape.util.ZNPList_ZPP_AABBNode.addAll","zpp_nape/util/Lists.hx",10252,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(10253)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(10254)
		while((true)){
			HX_STACK_LINE(10254)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(10254)
				break;
			}
			HX_STACK_LINE(10255)
			::zpp_nape::space::ZPP_AABBNode i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(10256)
			this->add(i);
			HX_STACK_LINE(10257)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","insert",0xd9263df0,"zpp_nape.util.ZNPList_ZPP_AABBNode.insert","zpp_nape/util/Lists.hx",10262,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10262)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10262)
	{
		HX_STACK_LINE(10262)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10262)
		{
			HX_STACK_LINE(10262)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10262)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode _g = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10262)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10262)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10262)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10262)
				ret->next = null();
			}
			HX_STACK_LINE(10262)
			Dynamic();
		}
		HX_STACK_LINE(10262)
		ret->elt = o;
		HX_STACK_LINE(10262)
		temp = ret;
	}
	HX_STACK_LINE(10262)
	if (((cur == null()))){
		HX_STACK_LINE(10262)
		temp->next = this->head;
		HX_STACK_LINE(10262)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10262)
		temp->next = cur->next;
		HX_STACK_LINE(10262)
		cur->next = temp;
	}
	HX_STACK_LINE(10262)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10262)
	this->pushmod = _g1;
	HX_STACK_LINE(10262)
	(this->length)++;
	HX_STACK_LINE(10262)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_insert",0xf5753e04,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_insert","zpp_nape/util/Lists.hx",10266,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10275)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10275)
	{
		HX_STACK_LINE(10276)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10277)
		{
			HX_STACK_LINE(10278)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10279)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode _g = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(10279)
				ret = _g;
			}
			else{
				HX_STACK_LINE(10285)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10286)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10287)
				ret->next = null();
			}
			HX_STACK_LINE(10292)
			Dynamic();
		}
		HX_STACK_LINE(10294)
		ret->elt = o;
		HX_STACK_LINE(10295)
		temp = ret;
	}
	HX_STACK_LINE(10297)
	if (((cur == null()))){
		HX_STACK_LINE(10298)
		temp->next = this->head;
		HX_STACK_LINE(10299)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10302)
		temp->next = cur->next;
		HX_STACK_LINE(10303)
		cur->next = temp;
	}
	HX_STACK_LINE(10305)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10305)
	this->pushmod = _g1;
	HX_STACK_LINE(10306)
	(this->length)++;
	HX_STACK_LINE(10307)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,inlined_insert,return )

Void ZNPList_ZPP_AABBNode_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","pop",0xf23c9a7a,"zpp_nape.util.ZNPList_ZPP_AABBNode.pop","zpp_nape/util/Lists.hx",10310,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10310)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10310)
		this->head = ret->next;
		HX_STACK_LINE(10310)
		{
			HX_STACK_LINE(10310)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10310)
			o->elt = null();
			HX_STACK_LINE(10310)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(10310)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10310)
		if (((this->head == null()))){
			HX_STACK_LINE(10310)
			this->pushmod = true;
		}
		HX_STACK_LINE(10310)
		this->modified = true;
		HX_STACK_LINE(10310)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_pop",0x457585e6,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_pop","zpp_nape/util/Lists.hx",10314,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10323)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10324)
		this->head = ret->next;
		HX_STACK_LINE(10326)
		{
			HX_STACK_LINE(10327)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10336)
			o->elt = null();
			HX_STACK_LINE(10337)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(10338)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10343)
		if (((this->head == null()))){
			HX_STACK_LINE(10343)
			this->pushmod = true;
		}
		HX_STACK_LINE(10344)
		this->modified = true;
		HX_STACK_LINE(10345)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","pop_unsafe",0x808e9e8b,"zpp_nape.util.ZNPList_ZPP_AABBNode.pop_unsafe","zpp_nape/util/Lists.hx",10348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10348)
	::zpp_nape::space::ZPP_AABBNode ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10348)
	this->pop();
	HX_STACK_LINE(10348)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_pop_unsafe",0xf461389f,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_pop_unsafe","zpp_nape/util/Lists.hx",10352,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10361)
	::zpp_nape::space::ZPP_AABBNode ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10362)
	this->pop();
	HX_STACK_LINE(10363)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_AABBNode_obj::remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","remove",0x3fd196fb,"zpp_nape.util.ZNPList_ZPP_AABBNode.remove","zpp_nape/util/Lists.hx",10374,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10374)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10374)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10374)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10374)
		while((true)){
			HX_STACK_LINE(10374)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10374)
				break;
			}
			HX_STACK_LINE(10374)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10374)
				{
					HX_STACK_LINE(10374)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10374)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10374)
					if (((pre == null()))){
						HX_STACK_LINE(10374)
						old = this->head;
						HX_STACK_LINE(10374)
						ret1 = old->next;
						HX_STACK_LINE(10374)
						this->head = ret1;
						HX_STACK_LINE(10374)
						if (((this->head == null()))){
							HX_STACK_LINE(10374)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10374)
						old = pre->next;
						HX_STACK_LINE(10374)
						ret1 = old->next;
						HX_STACK_LINE(10374)
						pre->next = ret1;
						HX_STACK_LINE(10374)
						if (((ret1 == null()))){
							HX_STACK_LINE(10374)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10374)
					{
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10374)
						o->elt = null();
						HX_STACK_LINE(10374)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10374)
					this->modified = true;
					HX_STACK_LINE(10374)
					(this->length)--;
					HX_STACK_LINE(10374)
					this->pushmod = true;
					HX_STACK_LINE(10374)
					ret1;
				}
				HX_STACK_LINE(10374)
				ret = true;
				HX_STACK_LINE(10374)
				break;
			}
			HX_STACK_LINE(10374)
			pre = cur;
			HX_STACK_LINE(10374)
			cur = cur->next;
		}
		HX_STACK_LINE(10374)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,remove,(void))

bool ZNPList_ZPP_AABBNode_obj::try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","try_remove",0x97b8d43f,"zpp_nape.util.ZNPList_ZPP_AABBNode.try_remove","zpp_nape/util/Lists.hx",10376,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10385)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10386)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10387)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10388)
	while((true)){
		HX_STACK_LINE(10388)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10388)
			break;
		}
		HX_STACK_LINE(10389)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10390)
			this->erase(pre);
			HX_STACK_LINE(10391)
			ret = true;
			HX_STACK_LINE(10392)
			break;
		}
		HX_STACK_LINE(10394)
		pre = cur;
		HX_STACK_LINE(10395)
		cur = cur->next;
	}
	HX_STACK_LINE(10397)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_remove",0x5c20970f,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_remove","zpp_nape/util/Lists.hx",10410,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10410)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10410)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10410)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10410)
		while((true)){
			HX_STACK_LINE(10410)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10410)
				break;
			}
			HX_STACK_LINE(10410)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10410)
				{
					HX_STACK_LINE(10410)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10410)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10410)
					if (((pre == null()))){
						HX_STACK_LINE(10410)
						old = this->head;
						HX_STACK_LINE(10410)
						ret1 = old->next;
						HX_STACK_LINE(10410)
						this->head = ret1;
						HX_STACK_LINE(10410)
						if (((this->head == null()))){
							HX_STACK_LINE(10410)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10410)
						old = pre->next;
						HX_STACK_LINE(10410)
						ret1 = old->next;
						HX_STACK_LINE(10410)
						pre->next = ret1;
						HX_STACK_LINE(10410)
						if (((ret1 == null()))){
							HX_STACK_LINE(10410)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10410)
					{
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10410)
						o->elt = null();
						HX_STACK_LINE(10410)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10410)
					this->modified = true;
					HX_STACK_LINE(10410)
					(this->length)--;
					HX_STACK_LINE(10410)
					this->pushmod = true;
					HX_STACK_LINE(10410)
					ret1;
				}
				HX_STACK_LINE(10410)
				ret = true;
				HX_STACK_LINE(10410)
				break;
			}
			HX_STACK_LINE(10410)
			pre = cur;
			HX_STACK_LINE(10410)
			cur = cur->next;
		}
		HX_STACK_LINE(10410)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBNode_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_try_remove",0x0b8b6e53,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_try_remove","zpp_nape/util/Lists.hx",10414,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10423)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10424)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10425)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10426)
	while((true)){
		HX_STACK_LINE(10426)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10426)
			break;
		}
		HX_STACK_LINE(10427)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10428)
			{
				HX_STACK_LINE(10428)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10428)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10428)
				if (((pre == null()))){
					HX_STACK_LINE(10428)
					old = this->head;
					HX_STACK_LINE(10428)
					ret1 = old->next;
					HX_STACK_LINE(10428)
					this->head = ret1;
					HX_STACK_LINE(10428)
					if (((this->head == null()))){
						HX_STACK_LINE(10428)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10428)
					old = pre->next;
					HX_STACK_LINE(10428)
					ret1 = old->next;
					HX_STACK_LINE(10428)
					pre->next = ret1;
					HX_STACK_LINE(10428)
					if (((ret1 == null()))){
						HX_STACK_LINE(10428)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10428)
				{
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10428)
					o->elt = null();
					HX_STACK_LINE(10428)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10428)
				this->modified = true;
				HX_STACK_LINE(10428)
				(this->length)--;
				HX_STACK_LINE(10428)
				this->pushmod = true;
				HX_STACK_LINE(10428)
				ret1;
			}
			HX_STACK_LINE(10429)
			ret = true;
			HX_STACK_LINE(10430)
			break;
		}
		HX_STACK_LINE(10432)
		pre = cur;
		HX_STACK_LINE(10433)
		cur = cur->next;
	}
	HX_STACK_LINE(10435)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","erase",0x1afbf20f,"zpp_nape.util.ZNPList_ZPP_AABBNode.erase","zpp_nape/util/Lists.hx",10438,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10438)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10438)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10438)
	if (((pre == null()))){
		HX_STACK_LINE(10438)
		old = this->head;
		HX_STACK_LINE(10438)
		ret = old->next;
		HX_STACK_LINE(10438)
		this->head = ret;
		HX_STACK_LINE(10438)
		if (((this->head == null()))){
			HX_STACK_LINE(10438)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10438)
		old = pre->next;
		HX_STACK_LINE(10438)
		ret = old->next;
		HX_STACK_LINE(10438)
		pre->next = ret;
		HX_STACK_LINE(10438)
		if (((ret == null()))){
			HX_STACK_LINE(10438)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10438)
	{
		HX_STACK_LINE(10438)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10438)
		o->elt = null();
		HX_STACK_LINE(10438)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
		HX_STACK_LINE(10438)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10438)
	this->modified = true;
	HX_STACK_LINE(10438)
	(this->length)--;
	HX_STACK_LINE(10438)
	this->pushmod = true;
	HX_STACK_LINE(10438)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_erase",0x5ed7907b,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_erase","zpp_nape/util/Lists.hx",10442,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10451)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10452)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10453)
	if (((pre == null()))){
		HX_STACK_LINE(10454)
		old = this->head;
		HX_STACK_LINE(10455)
		ret = old->next;
		HX_STACK_LINE(10456)
		this->head = ret;
		HX_STACK_LINE(10457)
		if (((this->head == null()))){
			HX_STACK_LINE(10457)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10460)
		old = pre->next;
		HX_STACK_LINE(10461)
		ret = old->next;
		HX_STACK_LINE(10462)
		pre->next = ret;
		HX_STACK_LINE(10463)
		if (((ret == null()))){
			HX_STACK_LINE(10463)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10466)
	{
		HX_STACK_LINE(10467)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10476)
		o->elt = null();
		HX_STACK_LINE(10477)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
		HX_STACK_LINE(10478)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10483)
	this->modified = true;
	HX_STACK_LINE(10484)
	(this->length)--;
	HX_STACK_LINE(10485)
	this->pushmod = true;
	HX_STACK_LINE(10486)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","splice",0xfae78033,"zpp_nape.util.ZNPList_ZPP_AABBNode.splice","zpp_nape/util/Lists.hx",10488,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10489)
	while((true)){
		HX_STACK_LINE(10489)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10489)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(10489)
			break;
		}
		HX_STACK_LINE(10489)
		this->erase(pre);
	}
	HX_STACK_LINE(10490)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,splice,return )

Void ZNPList_ZPP_AABBNode_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","clear",0xf03a7ab6,"zpp_nape.util.ZNPList_ZPP_AABBNode.clear","zpp_nape/util/Lists.hx",10493,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10493)
		while((true)){
			HX_STACK_LINE(10493)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10493)
				break;
			}
			HX_STACK_LINE(10493)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10493)
			this->head = ret->next;
			HX_STACK_LINE(10493)
			{
				HX_STACK_LINE(10493)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10493)
				o->elt = null();
				HX_STACK_LINE(10493)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10493)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10493)
			if (((this->head == null()))){
				HX_STACK_LINE(10493)
				this->pushmod = true;
			}
			HX_STACK_LINE(10493)
			this->modified = true;
			HX_STACK_LINE(10493)
			(this->length)--;
		}
		HX_STACK_LINE(10493)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,clear,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_clear",0x34161922,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_clear","zpp_nape/util/Lists.hx",10498,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10499)
		while((true)){
			HX_STACK_LINE(10499)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(10499)
				break;
			}
			HX_STACK_LINE(10499)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10499)
			this->head = ret->next;
			HX_STACK_LINE(10499)
			{
				HX_STACK_LINE(10499)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10499)
				o->elt = null();
				HX_STACK_LINE(10499)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10499)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10499)
			if (((this->head == null()))){
				HX_STACK_LINE(10499)
				this->pushmod = true;
			}
			HX_STACK_LINE(10499)
			this->modified = true;
			HX_STACK_LINE(10499)
			(this->length)--;
		}
		HX_STACK_LINE(10500)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBNode_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","reverse",0xbf8e9e8b,"zpp_nape.util.ZNPList_ZPP_AABBNode.reverse","zpp_nape/util/Lists.hx",10503,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10504)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10505)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10506)
		while((true)){
			HX_STACK_LINE(10506)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(10506)
				break;
			}
			HX_STACK_LINE(10507)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10508)
			cur->next = pre;
			HX_STACK_LINE(10509)
			this->head = cur;
			HX_STACK_LINE(10510)
			pre = cur;
			HX_STACK_LINE(10511)
			cur = nx;
		}
		HX_STACK_LINE(10513)
		this->modified = true;
		HX_STACK_LINE(10514)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,reverse,(void))

bool ZNPList_ZPP_AABBNode_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","empty",0x17b943b6,"zpp_nape.util.ZNPList_ZPP_AABBNode.empty","zpp_nape/util/Lists.hx",10519,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10519)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,empty,return )

int ZNPList_ZPP_AABBNode_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","size",0x04c1afb8,"zpp_nape.util.ZNPList_ZPP_AABBNode.size","zpp_nape/util/Lists.hx",10524,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10524)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,size,return )

bool ZNPList_ZPP_AABBNode_obj::has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","has",0xf2367c43,"zpp_nape.util.ZNPList_ZPP_AABBNode.has","zpp_nape/util/Lists.hx",10527,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10527)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10527)
	{
		HX_STACK_LINE(10527)
		ret = false;
		HX_STACK_LINE(10527)
		{
			HX_STACK_LINE(10527)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10527)
			while((true)){
				HX_STACK_LINE(10527)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10527)
					break;
				}
				HX_STACK_LINE(10527)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10527)
				if (((npite == obj))){
					HX_STACK_LINE(10527)
					ret = true;
					HX_STACK_LINE(10527)
					break;
				}
				HX_STACK_LINE(10527)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10527)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,has,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_has",0x456f67af,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_has","zpp_nape/util/Lists.hx",10531,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10540)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10541)
	{
		HX_STACK_LINE(10542)
		ret = false;
		HX_STACK_LINE(10543)
		{
			HX_STACK_LINE(10544)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10545)
			while((true)){
				HX_STACK_LINE(10545)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(10545)
					break;
				}
				HX_STACK_LINE(10546)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10548)
				if (((npite == obj))){
					HX_STACK_LINE(10549)
					ret = true;
					HX_STACK_LINE(10550)
					break;
				}
				HX_STACK_LINE(10553)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10557)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_has,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","front",0xae6d21d2,"zpp_nape.util.ZNPList_ZPP_AABBNode.front","zpp_nape/util/Lists.hx",10562,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10562)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,front,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","back",0xf97ee91e,"zpp_nape.util.ZNPList_ZPP_AABBNode.back","zpp_nape/util/Lists.hx",10564,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10565)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10566)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10567)
	while((true)){
		HX_STACK_LINE(10567)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(10567)
			break;
		}
		HX_STACK_LINE(10568)
		ret = cur;
		HX_STACK_LINE(10569)
		cur = cur->next;
	}
	HX_STACK_LINE(10571)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","iterator_at",0x4a0e57cd,"zpp_nape.util.ZNPList_ZPP_AABBNode.iterator_at","zpp_nape/util/Lists.hx",10573,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10582)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10583)
	while((true)){
		HX_STACK_LINE(10583)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10583)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(10583)
			break;
		}
		HX_STACK_LINE(10583)
		ret = ret->next;
	}
	HX_STACK_LINE(10584)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","at",0x7879e82a,"zpp_nape.util.ZNPList_ZPP_AABBNode.at","zpp_nape/util/Lists.hx",10586,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10595)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10596)
	if (((it != null()))){
		HX_STACK_LINE(10596)
		return it->elt;
	}
	else{
		HX_STACK_LINE(10596)
		return null();
	}
	HX_STACK_LINE(10596)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,at,return )


ZNPList_ZPP_AABBNode_obj::ZNPList_ZPP_AABBNode_obj()
{
}

void ZNPList_ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_AABBNode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return inValue; }
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

void ZNPList_ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBNode*/ ,(int)offsetof(ZNPList_ZPP_AABBNode_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBNode_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBNode_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_AABBNode_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_AABBNode_obj::__mClass;

void ZNPList_ZPP_AABBNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBNode"), hx::TCanCast< ZNPList_ZPP_AABBNode_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_AABBNode_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
