#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Interactor_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","new",0xed5c9dc0,"zpp_nape.util.ZNPList_ZPP_Interactor.new","zpp_nape/util/Lists.hx",3928,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3938)
	this->length = (int)0;
	HX_STACK_LINE(3937)
	this->pushmod = false;
	HX_STACK_LINE(3936)
	this->modified = false;
	HX_STACK_LINE(3929)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Interactor_obj::~ZNPList_ZPP_Interactor_obj() { }

Dynamic ZNPList_ZPP_Interactor_obj::__CreateEmpty() { return  new ZNPList_ZPP_Interactor_obj; }
hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > ZNPList_ZPP_Interactor_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > result = new ZNPList_ZPP_Interactor_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > result = new ZNPList_ZPP_Interactor_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","begin",0x8b34cf89,"zpp_nape.util.ZNPList_ZPP_Interactor.begin","zpp_nape/util/Lists.hx",3934,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3934)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,begin,return )

Void ZNPList_ZPP_Interactor_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Interactor i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","setbegin",0x8c8f99e7,"zpp_nape.util.ZNPList_ZPP_Interactor.setbegin","zpp_nape/util/Lists.hx",3941,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(3942)
		this->head = i;
		HX_STACK_LINE(3943)
		this->modified = true;
		HX_STACK_LINE(3944)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,setbegin,(void))

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::add( ::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","add",0xed52bf81,"zpp_nape.util.ZNPList_ZPP_Interactor.add","zpp_nape/util/Lists.hx",3947,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3947)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3947)
	{
		HX_STACK_LINE(3947)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3947)
		{
			HX_STACK_LINE(3947)
			if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
				HX_STACK_LINE(3947)
				::zpp_nape::util::ZNPNode_ZPP_Interactor _g = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3947)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3947)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(3947)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3947)
				ret->next = null();
			}
			HX_STACK_LINE(3947)
			Dynamic();
		}
		HX_STACK_LINE(3947)
		ret->elt = o;
		HX_STACK_LINE(3947)
		temp = ret;
	}
	HX_STACK_LINE(3947)
	temp->next = this->head;
	HX_STACK_LINE(3947)
	this->head = temp;
	HX_STACK_LINE(3947)
	this->modified = true;
	HX_STACK_LINE(3947)
	(this->length)++;
	HX_STACK_LINE(3947)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,add,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_add( ::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_add",0xa2d379ed,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_add","zpp_nape/util/Lists.hx",3951,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3960)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3960)
	{
		HX_STACK_LINE(3961)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3962)
		{
			HX_STACK_LINE(3963)
			if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
				HX_STACK_LINE(3964)
				::zpp_nape::util::ZNPNode_ZPP_Interactor _g = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3964)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3970)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(3971)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3972)
				ret->next = null();
			}
			HX_STACK_LINE(3977)
			Dynamic();
		}
		HX_STACK_LINE(3979)
		ret->elt = o;
		HX_STACK_LINE(3980)
		temp = ret;
	}
	HX_STACK_LINE(3982)
	temp->next = this->head;
	HX_STACK_LINE(3983)
	this->head = temp;
	HX_STACK_LINE(3984)
	this->modified = true;
	HX_STACK_LINE(3985)
	(this->length)++;
	HX_STACK_LINE(3986)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_add,return )

Void ZNPList_ZPP_Interactor_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Interactor x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","addAll",0x4724d820,"zpp_nape.util.ZNPList_ZPP_Interactor.addAll","zpp_nape/util/Lists.hx",3997,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3998)
		::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(3999)
		while((true)){
			HX_STACK_LINE(3999)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(3999)
				break;
			}
			HX_STACK_LINE(4000)
			::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4001)
			this->add(i);
			HX_STACK_LINE(4002)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","insert",0x460711d9,"zpp_nape.util.ZNPList_ZPP_Interactor.insert","zpp_nape/util/Lists.hx",4007,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4007)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4007)
	{
		HX_STACK_LINE(4007)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4007)
		{
			HX_STACK_LINE(4007)
			if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
				HX_STACK_LINE(4007)
				::zpp_nape::util::ZNPNode_ZPP_Interactor _g = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4007)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4007)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(4007)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4007)
				ret->next = null();
			}
			HX_STACK_LINE(4007)
			Dynamic();
		}
		HX_STACK_LINE(4007)
		ret->elt = o;
		HX_STACK_LINE(4007)
		temp = ret;
	}
	HX_STACK_LINE(4007)
	if (((cur == null()))){
		HX_STACK_LINE(4007)
		temp->next = this->head;
		HX_STACK_LINE(4007)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4007)
		temp->next = cur->next;
		HX_STACK_LINE(4007)
		cur->next = temp;
	}
	HX_STACK_LINE(4007)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4007)
	this->pushmod = _g1;
	HX_STACK_LINE(4007)
	(this->length)++;
	HX_STACK_LINE(4007)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_insert",0x3999a2ed,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_insert","zpp_nape/util/Lists.hx",4011,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4020)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4020)
	{
		HX_STACK_LINE(4021)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4022)
		{
			HX_STACK_LINE(4023)
			if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
				HX_STACK_LINE(4024)
				::zpp_nape::util::ZNPNode_ZPP_Interactor _g = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4024)
				ret = _g;
			}
			else{
				HX_STACK_LINE(4030)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(4031)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4032)
				ret->next = null();
			}
			HX_STACK_LINE(4037)
			Dynamic();
		}
		HX_STACK_LINE(4039)
		ret->elt = o;
		HX_STACK_LINE(4040)
		temp = ret;
	}
	HX_STACK_LINE(4042)
	if (((cur == null()))){
		HX_STACK_LINE(4043)
		temp->next = this->head;
		HX_STACK_LINE(4044)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4047)
		temp->next = cur->next;
		HX_STACK_LINE(4048)
		cur->next = temp;
	}
	HX_STACK_LINE(4050)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4050)
	this->pushmod = _g1;
	HX_STACK_LINE(4051)
	(this->length)++;
	HX_STACK_LINE(4052)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,inlined_insert,return )

Void ZNPList_ZPP_Interactor_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","pop",0xed5e2af1,"zpp_nape.util.ZNPList_ZPP_Interactor.pop","zpp_nape/util/Lists.hx",4055,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4055)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4055)
		this->head = ret->next;
		HX_STACK_LINE(4055)
		{
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4055)
			o->elt = null();
			HX_STACK_LINE(4055)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4055)
		if (((this->head == null()))){
			HX_STACK_LINE(4055)
			this->pushmod = true;
		}
		HX_STACK_LINE(4055)
		this->modified = true;
		HX_STACK_LINE(4055)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,pop,(void))

Void ZNPList_ZPP_Interactor_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_pop",0xa2dee55d,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_pop","zpp_nape/util/Lists.hx",4059,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4068)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4069)
		this->head = ret->next;
		HX_STACK_LINE(4071)
		{
			HX_STACK_LINE(4072)
			::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4081)
			o->elt = null();
			HX_STACK_LINE(4082)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
			HX_STACK_LINE(4083)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4088)
		if (((this->head == null()))){
			HX_STACK_LINE(4088)
			this->pushmod = true;
		}
		HX_STACK_LINE(4089)
		this->modified = true;
		HX_STACK_LINE(4090)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_pop,(void))

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","pop_unsafe",0x92321af4,"zpp_nape.util.ZNPList_ZPP_Interactor.pop_unsafe","zpp_nape/util/Lists.hx",4093,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4093)
	::zpp_nape::phys::ZPP_Interactor ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4093)
	this->pop();
	HX_STACK_LINE(4093)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,pop_unsafe,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_pop_unsafe",0x54e4c608,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4097,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4106)
	::zpp_nape::phys::ZPP_Interactor ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4107)
	this->pop();
	HX_STACK_LINE(4108)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Interactor_obj::remove( ::zpp_nape::phys::ZPP_Interactor obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","remove",0xacb26ae4,"zpp_nape.util.ZNPList_ZPP_Interactor.remove","zpp_nape/util/Lists.hx",4119,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4119)
		::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4119)
		::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4119)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4119)
		while((true)){
			HX_STACK_LINE(4119)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4119)
				break;
			}
			HX_STACK_LINE(4119)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4119)
				{
					HX_STACK_LINE(4119)
					::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4119)
					::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4119)
					if (((pre == null()))){
						HX_STACK_LINE(4119)
						old = this->head;
						HX_STACK_LINE(4119)
						ret1 = old->next;
						HX_STACK_LINE(4119)
						this->head = ret1;
						HX_STACK_LINE(4119)
						if (((this->head == null()))){
							HX_STACK_LINE(4119)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4119)
						old = pre->next;
						HX_STACK_LINE(4119)
						ret1 = old->next;
						HX_STACK_LINE(4119)
						pre->next = ret1;
						HX_STACK_LINE(4119)
						if (((ret1 == null()))){
							HX_STACK_LINE(4119)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4119)
					{
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4119)
						o->elt = null();
						HX_STACK_LINE(4119)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4119)
					this->modified = true;
					HX_STACK_LINE(4119)
					(this->length)--;
					HX_STACK_LINE(4119)
					this->pushmod = true;
					HX_STACK_LINE(4119)
					ret1;
				}
				HX_STACK_LINE(4119)
				ret = true;
				HX_STACK_LINE(4119)
				break;
			}
			HX_STACK_LINE(4119)
			pre = cur;
			HX_STACK_LINE(4119)
			cur = cur->next;
		}
		HX_STACK_LINE(4119)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,remove,(void))

bool ZNPList_ZPP_Interactor_obj::try_remove( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","try_remove",0xa95c50a8,"zpp_nape.util.ZNPList_ZPP_Interactor.try_remove","zpp_nape/util/Lists.hx",4121,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4130)
	::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4131)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4132)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4133)
	while((true)){
		HX_STACK_LINE(4133)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4133)
			break;
		}
		HX_STACK_LINE(4134)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4135)
			this->erase(pre);
			HX_STACK_LINE(4136)
			ret = true;
			HX_STACK_LINE(4137)
			break;
		}
		HX_STACK_LINE(4139)
		pre = cur;
		HX_STACK_LINE(4140)
		cur = cur->next;
	}
	HX_STACK_LINE(4142)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,try_remove,return )

Void ZNPList_ZPP_Interactor_obj::inlined_remove( ::zpp_nape::phys::ZPP_Interactor obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_remove",0xa044fbf8,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_remove","zpp_nape/util/Lists.hx",4155,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4155)
		::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4155)
		::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4155)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4155)
		while((true)){
			HX_STACK_LINE(4155)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4155)
				break;
			}
			HX_STACK_LINE(4155)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4155)
				{
					HX_STACK_LINE(4155)
					::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4155)
					::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4155)
					if (((pre == null()))){
						HX_STACK_LINE(4155)
						old = this->head;
						HX_STACK_LINE(4155)
						ret1 = old->next;
						HX_STACK_LINE(4155)
						this->head = ret1;
						HX_STACK_LINE(4155)
						if (((this->head == null()))){
							HX_STACK_LINE(4155)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4155)
						old = pre->next;
						HX_STACK_LINE(4155)
						ret1 = old->next;
						HX_STACK_LINE(4155)
						pre->next = ret1;
						HX_STACK_LINE(4155)
						if (((ret1 == null()))){
							HX_STACK_LINE(4155)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4155)
					{
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4155)
						o->elt = null();
						HX_STACK_LINE(4155)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4155)
					this->modified = true;
					HX_STACK_LINE(4155)
					(this->length)--;
					HX_STACK_LINE(4155)
					this->pushmod = true;
					HX_STACK_LINE(4155)
					ret1;
				}
				HX_STACK_LINE(4155)
				ret = true;
				HX_STACK_LINE(4155)
				break;
			}
			HX_STACK_LINE(4155)
			pre = cur;
			HX_STACK_LINE(4155)
			cur = cur->next;
		}
		HX_STACK_LINE(4155)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_remove,(void))

bool ZNPList_ZPP_Interactor_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_try_remove",0x6c0efbbc,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_try_remove","zpp_nape/util/Lists.hx",4159,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4168)
	::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4169)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4170)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4171)
	while((true)){
		HX_STACK_LINE(4171)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4171)
			break;
		}
		HX_STACK_LINE(4172)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4173)
			{
				HX_STACK_LINE(4173)
				::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4173)
				::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4173)
				if (((pre == null()))){
					HX_STACK_LINE(4173)
					old = this->head;
					HX_STACK_LINE(4173)
					ret1 = old->next;
					HX_STACK_LINE(4173)
					this->head = ret1;
					HX_STACK_LINE(4173)
					if (((this->head == null()))){
						HX_STACK_LINE(4173)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4173)
					old = pre->next;
					HX_STACK_LINE(4173)
					ret1 = old->next;
					HX_STACK_LINE(4173)
					pre->next = ret1;
					HX_STACK_LINE(4173)
					if (((ret1 == null()))){
						HX_STACK_LINE(4173)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4173)
				{
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4173)
					o->elt = null();
					HX_STACK_LINE(4173)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4173)
				this->modified = true;
				HX_STACK_LINE(4173)
				(this->length)--;
				HX_STACK_LINE(4173)
				this->pushmod = true;
				HX_STACK_LINE(4173)
				ret1;
			}
			HX_STACK_LINE(4174)
			ret = true;
			HX_STACK_LINE(4175)
			break;
		}
		HX_STACK_LINE(4177)
		pre = cur;
		HX_STACK_LINE(4178)
		cur = cur->next;
	}
	HX_STACK_LINE(4180)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","erase",0x4dfbce46,"zpp_nape.util.ZNPList_ZPP_Interactor.erase","zpp_nape/util/Lists.hx",4183,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4183)
	::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4183)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4183)
	if (((pre == null()))){
		HX_STACK_LINE(4183)
		old = this->head;
		HX_STACK_LINE(4183)
		ret = old->next;
		HX_STACK_LINE(4183)
		this->head = ret;
		HX_STACK_LINE(4183)
		if (((this->head == null()))){
			HX_STACK_LINE(4183)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4183)
		old = pre->next;
		HX_STACK_LINE(4183)
		ret = old->next;
		HX_STACK_LINE(4183)
		pre->next = ret;
		HX_STACK_LINE(4183)
		if (((ret == null()))){
			HX_STACK_LINE(4183)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4183)
	{
		HX_STACK_LINE(4183)
		::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4183)
		o->elt = null();
		HX_STACK_LINE(4183)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
		HX_STACK_LINE(4183)
		::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4183)
	this->modified = true;
	HX_STACK_LINE(4183)
	(this->length)--;
	HX_STACK_LINE(4183)
	this->pushmod = true;
	HX_STACK_LINE(4183)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_erase",0xf0f0fbb2,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_erase","zpp_nape/util/Lists.hx",4187,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4196)
	::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4197)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4198)
	if (((pre == null()))){
		HX_STACK_LINE(4199)
		old = this->head;
		HX_STACK_LINE(4200)
		ret = old->next;
		HX_STACK_LINE(4201)
		this->head = ret;
		HX_STACK_LINE(4202)
		if (((this->head == null()))){
			HX_STACK_LINE(4202)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4205)
		old = pre->next;
		HX_STACK_LINE(4206)
		ret = old->next;
		HX_STACK_LINE(4207)
		pre->next = ret;
		HX_STACK_LINE(4208)
		if (((ret == null()))){
			HX_STACK_LINE(4208)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4211)
	{
		HX_STACK_LINE(4212)
		::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4221)
		o->elt = null();
		HX_STACK_LINE(4222)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
		HX_STACK_LINE(4223)
		::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4228)
	this->modified = true;
	HX_STACK_LINE(4229)
	(this->length)--;
	HX_STACK_LINE(4230)
	this->pushmod = true;
	HX_STACK_LINE(4231)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","splice",0x67c8541c,"zpp_nape.util.ZNPList_ZPP_Interactor.splice","zpp_nape/util/Lists.hx",4233,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(4234)
	while((true)){
		HX_STACK_LINE(4234)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(4234)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(4234)
			break;
		}
		HX_STACK_LINE(4234)
		this->erase(pre);
	}
	HX_STACK_LINE(4235)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,splice,return )

Void ZNPList_ZPP_Interactor_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","clear",0x233a56ed,"zpp_nape.util.ZNPList_ZPP_Interactor.clear","zpp_nape/util/Lists.hx",4238,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4238)
		while((true)){
			HX_STACK_LINE(4238)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(4238)
				break;
			}
			HX_STACK_LINE(4238)
			::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4238)
			this->head = ret->next;
			HX_STACK_LINE(4238)
			{
				HX_STACK_LINE(4238)
				::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4238)
				o->elt = null();
				HX_STACK_LINE(4238)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(4238)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4238)
			if (((this->head == null()))){
				HX_STACK_LINE(4238)
				this->pushmod = true;
			}
			HX_STACK_LINE(4238)
			this->modified = true;
			HX_STACK_LINE(4238)
			(this->length)--;
		}
		HX_STACK_LINE(4238)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,clear,(void))

Void ZNPList_ZPP_Interactor_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_clear",0xc62f8459,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_clear","zpp_nape/util/Lists.hx",4243,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4244)
		while((true)){
			HX_STACK_LINE(4244)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(4244)
				break;
			}
			HX_STACK_LINE(4244)
			::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4244)
			this->head = ret->next;
			HX_STACK_LINE(4244)
			{
				HX_STACK_LINE(4244)
				::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4244)
				o->elt = null();
				HX_STACK_LINE(4244)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(4244)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4244)
			if (((this->head == null()))){
				HX_STACK_LINE(4244)
				this->pushmod = true;
			}
			HX_STACK_LINE(4244)
			this->modified = true;
			HX_STACK_LINE(4244)
			(this->length)--;
		}
		HX_STACK_LINE(4245)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_clear,(void))

Void ZNPList_ZPP_Interactor_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","reverse",0x97673682,"zpp_nape.util.ZNPList_ZPP_Interactor.reverse","zpp_nape/util/Lists.hx",4248,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4249)
		::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4250)
		::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4251)
		while((true)){
			HX_STACK_LINE(4251)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(4251)
				break;
			}
			HX_STACK_LINE(4252)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4253)
			cur->next = pre;
			HX_STACK_LINE(4254)
			this->head = cur;
			HX_STACK_LINE(4255)
			pre = cur;
			HX_STACK_LINE(4256)
			cur = nx;
		}
		HX_STACK_LINE(4258)
		this->modified = true;
		HX_STACK_LINE(4259)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,reverse,(void))

bool ZNPList_ZPP_Interactor_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","empty",0x4ab91fed,"zpp_nape.util.ZNPList_ZPP_Interactor.empty","zpp_nape/util/Lists.hx",4264,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4264)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,empty,return )

int ZNPList_ZPP_Interactor_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","size",0xc6fe8761,"zpp_nape.util.ZNPList_ZPP_Interactor.size","zpp_nape/util/Lists.hx",4269,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4269)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,size,return )

bool ZNPList_ZPP_Interactor_obj::has( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","has",0xed580cba,"zpp_nape.util.ZNPList_ZPP_Interactor.has","zpp_nape/util/Lists.hx",4272,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4272)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4272)
	{
		HX_STACK_LINE(4272)
		ret = false;
		HX_STACK_LINE(4272)
		{
			HX_STACK_LINE(4272)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4272)
			while((true)){
				HX_STACK_LINE(4272)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(4272)
					break;
				}
				HX_STACK_LINE(4272)
				::zpp_nape::phys::ZPP_Interactor npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4272)
				if (((npite == obj))){
					HX_STACK_LINE(4272)
					ret = true;
					HX_STACK_LINE(4272)
					break;
				}
				HX_STACK_LINE(4272)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4272)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,has,return )

bool ZNPList_ZPP_Interactor_obj::inlined_has( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","inlined_has",0xa2d8c726,"zpp_nape.util.ZNPList_ZPP_Interactor.inlined_has","zpp_nape/util/Lists.hx",4276,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4285)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4286)
	{
		HX_STACK_LINE(4287)
		ret = false;
		HX_STACK_LINE(4288)
		{
			HX_STACK_LINE(4289)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4290)
			while((true)){
				HX_STACK_LINE(4290)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(4290)
					break;
				}
				HX_STACK_LINE(4291)
				::zpp_nape::phys::ZPP_Interactor npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4293)
				if (((npite == obj))){
					HX_STACK_LINE(4294)
					ret = true;
					HX_STACK_LINE(4295)
					break;
				}
				HX_STACK_LINE(4298)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4302)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_has,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","front",0xe16cfe09,"zpp_nape.util.ZNPList_ZPP_Interactor.front","zpp_nape/util/Lists.hx",4307,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4307)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,front,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","back",0xbbbbc0c7,"zpp_nape.util.ZNPList_ZPP_Interactor.back","zpp_nape/util/Lists.hx",4309,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4310)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4311)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4312)
	while((true)){
		HX_STACK_LINE(4312)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(4312)
			break;
		}
		HX_STACK_LINE(4313)
		ret = cur;
		HX_STACK_LINE(4314)
		cur = cur->next;
	}
	HX_STACK_LINE(4316)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","iterator_at",0xa777b744,"zpp_nape.util.ZNPList_ZPP_Interactor.iterator_at","zpp_nape/util/Lists.hx",4318,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4327)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4328)
	while((true)){
		HX_STACK_LINE(4328)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(4328)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(4328)
			break;
		}
		HX_STACK_LINE(4328)
		ret = ret->next;
	}
	HX_STACK_LINE(4329)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Interactor","at",0x02365393,"zpp_nape.util.ZNPList_ZPP_Interactor.at","zpp_nape/util/Lists.hx",4331,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4340)
	::zpp_nape::util::ZNPNode_ZPP_Interactor it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4341)
	if (((it != null()))){
		HX_STACK_LINE(4341)
		return it->elt;
	}
	else{
		HX_STACK_LINE(4341)
		return null();
	}
	HX_STACK_LINE(4341)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,at,return )


ZNPList_ZPP_Interactor_obj::ZNPList_ZPP_Interactor_obj()
{
}

void ZNPList_ZPP_Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Interactor);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Interactor_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Interactor >(); return inValue; }
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

void ZNPList_ZPP_Interactor_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Interactor*/ ,(int)offsetof(ZNPList_ZPP_Interactor_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Interactor_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Interactor_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Interactor_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Interactor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Interactor_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_Interactor_obj::__mClass;

void ZNPList_ZPP_Interactor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Interactor"), hx::TCanCast< ZNPList_ZPP_Interactor_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_Interactor_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
