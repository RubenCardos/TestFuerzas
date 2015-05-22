#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","new",0x750856e0,"zpp_nape.util.ZNPList_ZPP_CbSet.new","zpp_nape/util/Lists.hx",3511,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3521)
	this->length = (int)0;
	HX_STACK_LINE(3520)
	this->pushmod = false;
	HX_STACK_LINE(3519)
	this->modified = false;
	HX_STACK_LINE(3512)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CbSet_obj::~ZNPList_ZPP_CbSet_obj() { }

Dynamic ZNPList_ZPP_CbSet_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbSet_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > ZNPList_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","begin",0x201910a9,"zpp_nape.util.ZNPList_ZPP_CbSet.begin","zpp_nape/util/Lists.hx",3517,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3517)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,begin,return )

Void ZNPList_ZPP_CbSet_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbSet i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","setbegin",0x2a30ccc7,"zpp_nape.util.ZNPList_ZPP_CbSet.setbegin","zpp_nape/util/Lists.hx",3524,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(3525)
		this->head = i;
		HX_STACK_LINE(3526)
		this->modified = true;
		HX_STACK_LINE(3527)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","add",0x74fe78a1,"zpp_nape.util.ZNPList_ZPP_CbSet.add","zpp_nape/util/Lists.hx",3530,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3530)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3530)
	{
		HX_STACK_LINE(3530)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3530)
		{
			HX_STACK_LINE(3530)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(3530)
				::zpp_nape::util::ZNPNode_ZPP_CbSet _g = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3530)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3530)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3530)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3530)
				ret->next = null();
			}
			HX_STACK_LINE(3530)
			Dynamic();
		}
		HX_STACK_LINE(3530)
		ret->elt = o;
		HX_STACK_LINE(3530)
		temp = ret;
	}
	HX_STACK_LINE(3530)
	temp->next = this->head;
	HX_STACK_LINE(3530)
	this->head = temp;
	HX_STACK_LINE(3530)
	this->modified = true;
	HX_STACK_LINE(3530)
	(this->length)++;
	HX_STACK_LINE(3530)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,add,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_add",0x208d530d,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_add","zpp_nape/util/Lists.hx",3534,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3543)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3543)
	{
		HX_STACK_LINE(3544)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3545)
		{
			HX_STACK_LINE(3546)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(3547)
				::zpp_nape::util::ZNPNode_ZPP_CbSet _g = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3547)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3553)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3554)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3555)
				ret->next = null();
			}
			HX_STACK_LINE(3560)
			Dynamic();
		}
		HX_STACK_LINE(3562)
		ret->elt = o;
		HX_STACK_LINE(3563)
		temp = ret;
	}
	HX_STACK_LINE(3565)
	temp->next = this->head;
	HX_STACK_LINE(3566)
	this->head = temp;
	HX_STACK_LINE(3567)
	this->modified = true;
	HX_STACK_LINE(3568)
	(this->length)++;
	HX_STACK_LINE(3569)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_add,return )

Void ZNPList_ZPP_CbSet_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbSet x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","addAll",0xf9f99300,"zpp_nape.util.ZNPList_ZPP_CbSet.addAll","zpp_nape/util/Lists.hx",3580,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3581)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(3582)
		while((true)){
			HX_STACK_LINE(3582)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(3582)
				break;
			}
			HX_STACK_LINE(3583)
			::zpp_nape::callbacks::ZPP_CbSet i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3584)
			this->add(i);
			HX_STACK_LINE(3585)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","insert",0xf8dbccb9,"zpp_nape.util.ZNPList_ZPP_CbSet.insert","zpp_nape/util/Lists.hx",3590,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3590)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3590)
	{
		HX_STACK_LINE(3590)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3590)
		{
			HX_STACK_LINE(3590)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(3590)
				::zpp_nape::util::ZNPNode_ZPP_CbSet _g = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3590)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3590)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3590)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3590)
				ret->next = null();
			}
			HX_STACK_LINE(3590)
			Dynamic();
		}
		HX_STACK_LINE(3590)
		ret->elt = o;
		HX_STACK_LINE(3590)
		temp = ret;
	}
	HX_STACK_LINE(3590)
	if (((cur == null()))){
		HX_STACK_LINE(3590)
		temp->next = this->head;
		HX_STACK_LINE(3590)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3590)
		temp->next = cur->next;
		HX_STACK_LINE(3590)
		cur->next = temp;
	}
	HX_STACK_LINE(3590)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(3590)
	this->pushmod = _g1;
	HX_STACK_LINE(3590)
	(this->length)++;
	HX_STACK_LINE(3590)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_insert",0xd9f43dcd,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_insert","zpp_nape/util/Lists.hx",3594,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3603)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3603)
	{
		HX_STACK_LINE(3604)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3605)
		{
			HX_STACK_LINE(3606)
			if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(3607)
				::zpp_nape::util::ZNPNode_ZPP_CbSet _g = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3607)
				ret = _g;
			}
			else{
				HX_STACK_LINE(3613)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3614)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3615)
				ret->next = null();
			}
			HX_STACK_LINE(3620)
			Dynamic();
		}
		HX_STACK_LINE(3622)
		ret->elt = o;
		HX_STACK_LINE(3623)
		temp = ret;
	}
	HX_STACK_LINE(3625)
	if (((cur == null()))){
		HX_STACK_LINE(3626)
		temp->next = this->head;
		HX_STACK_LINE(3627)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3630)
		temp->next = cur->next;
		HX_STACK_LINE(3631)
		cur->next = temp;
	}
	HX_STACK_LINE(3633)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(3633)
	this->pushmod = _g1;
	HX_STACK_LINE(3634)
	(this->length)++;
	HX_STACK_LINE(3635)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,inlined_insert,return )

Void ZNPList_ZPP_CbSet_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","pop",0x7509e411,"zpp_nape.util.ZNPList_ZPP_CbSet.pop","zpp_nape/util/Lists.hx",3638,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3638)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3638)
		this->head = ret->next;
		HX_STACK_LINE(3638)
		{
			HX_STACK_LINE(3638)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3638)
			o->elt = null();
			HX_STACK_LINE(3638)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(3638)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3638)
		if (((this->head == null()))){
			HX_STACK_LINE(3638)
			this->pushmod = true;
		}
		HX_STACK_LINE(3638)
		this->modified = true;
		HX_STACK_LINE(3638)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop,(void))

Void ZNPList_ZPP_CbSet_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_pop",0x2098be7d,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_pop","zpp_nape/util/Lists.hx",3642,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3651)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3652)
		this->head = ret->next;
		HX_STACK_LINE(3654)
		{
			HX_STACK_LINE(3655)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3664)
			o->elt = null();
			HX_STACK_LINE(3665)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(3666)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3671)
		if (((this->head == null()))){
			HX_STACK_LINE(3671)
			this->pushmod = true;
		}
		HX_STACK_LINE(3672)
		this->modified = true;
		HX_STACK_LINE(3673)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","pop_unsafe",0xc0adc5d4,"zpp_nape.util.ZNPList_ZPP_CbSet.pop_unsafe","zpp_nape/util/Lists.hx",3676,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3676)
	::zpp_nape::callbacks::ZPP_CbSet ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3676)
	this->pop();
	HX_STACK_LINE(3676)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_pop_unsafe",0xd95650e8,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_pop_unsafe","zpp_nape/util/Lists.hx",3680,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3689)
	::zpp_nape::callbacks::ZPP_CbSet ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3690)
	this->pop();
	HX_STACK_LINE(3691)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","remove",0x5f8725c4,"zpp_nape.util.ZNPList_ZPP_CbSet.remove","zpp_nape/util/Lists.hx",3702,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3702)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3702)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3702)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3702)
		while((true)){
			HX_STACK_LINE(3702)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(3702)
				break;
			}
			HX_STACK_LINE(3702)
			if (((cur->elt == obj))){
				HX_STACK_LINE(3702)
				{
					HX_STACK_LINE(3702)
					::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3702)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3702)
					if (((pre == null()))){
						HX_STACK_LINE(3702)
						old = this->head;
						HX_STACK_LINE(3702)
						ret1 = old->next;
						HX_STACK_LINE(3702)
						this->head = ret1;
						HX_STACK_LINE(3702)
						if (((this->head == null()))){
							HX_STACK_LINE(3702)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3702)
						old = pre->next;
						HX_STACK_LINE(3702)
						ret1 = old->next;
						HX_STACK_LINE(3702)
						pre->next = ret1;
						HX_STACK_LINE(3702)
						if (((ret1 == null()))){
							HX_STACK_LINE(3702)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3702)
					{
						HX_STACK_LINE(3702)
						::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3702)
						o->elt = null();
						HX_STACK_LINE(3702)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3702)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3702)
					this->modified = true;
					HX_STACK_LINE(3702)
					(this->length)--;
					HX_STACK_LINE(3702)
					this->pushmod = true;
					HX_STACK_LINE(3702)
					ret1;
				}
				HX_STACK_LINE(3702)
				ret = true;
				HX_STACK_LINE(3702)
				break;
			}
			HX_STACK_LINE(3702)
			pre = cur;
			HX_STACK_LINE(3702)
			cur = cur->next;
		}
		HX_STACK_LINE(3702)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,remove,(void))

bool ZNPList_ZPP_CbSet_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","try_remove",0xd7d7fb88,"zpp_nape.util.ZNPList_ZPP_CbSet.try_remove","zpp_nape/util/Lists.hx",3704,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3713)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3714)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3715)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3716)
	while((true)){
		HX_STACK_LINE(3716)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(3716)
			break;
		}
		HX_STACK_LINE(3717)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3718)
			this->erase(pre);
			HX_STACK_LINE(3719)
			ret = true;
			HX_STACK_LINE(3720)
			break;
		}
		HX_STACK_LINE(3722)
		pre = cur;
		HX_STACK_LINE(3723)
		cur = cur->next;
	}
	HX_STACK_LINE(3725)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,try_remove,return )

Void ZNPList_ZPP_CbSet_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_remove",0x409f96d8,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_remove","zpp_nape/util/Lists.hx",3738,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3738)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3738)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3738)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3738)
		while((true)){
			HX_STACK_LINE(3738)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(3738)
				break;
			}
			HX_STACK_LINE(3738)
			if (((cur->elt == obj))){
				HX_STACK_LINE(3738)
				{
					HX_STACK_LINE(3738)
					::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3738)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3738)
					if (((pre == null()))){
						HX_STACK_LINE(3738)
						old = this->head;
						HX_STACK_LINE(3738)
						ret1 = old->next;
						HX_STACK_LINE(3738)
						this->head = ret1;
						HX_STACK_LINE(3738)
						if (((this->head == null()))){
							HX_STACK_LINE(3738)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3738)
						old = pre->next;
						HX_STACK_LINE(3738)
						ret1 = old->next;
						HX_STACK_LINE(3738)
						pre->next = ret1;
						HX_STACK_LINE(3738)
						if (((ret1 == null()))){
							HX_STACK_LINE(3738)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3738)
					{
						HX_STACK_LINE(3738)
						::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3738)
						o->elt = null();
						HX_STACK_LINE(3738)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3738)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3738)
					this->modified = true;
					HX_STACK_LINE(3738)
					(this->length)--;
					HX_STACK_LINE(3738)
					this->pushmod = true;
					HX_STACK_LINE(3738)
					ret1;
				}
				HX_STACK_LINE(3738)
				ret = true;
				HX_STACK_LINE(3738)
				break;
			}
			HX_STACK_LINE(3738)
			pre = cur;
			HX_STACK_LINE(3738)
			cur = cur->next;
		}
		HX_STACK_LINE(3738)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbSet_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_try_remove",0xf080869c,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_try_remove","zpp_nape/util/Lists.hx",3742,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3751)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3752)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3753)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3754)
	while((true)){
		HX_STACK_LINE(3754)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(3754)
			break;
		}
		HX_STACK_LINE(3755)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3756)
			{
				HX_STACK_LINE(3756)
				::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3756)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3756)
				if (((pre == null()))){
					HX_STACK_LINE(3756)
					old = this->head;
					HX_STACK_LINE(3756)
					ret1 = old->next;
					HX_STACK_LINE(3756)
					this->head = ret1;
					HX_STACK_LINE(3756)
					if (((this->head == null()))){
						HX_STACK_LINE(3756)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3756)
					old = pre->next;
					HX_STACK_LINE(3756)
					ret1 = old->next;
					HX_STACK_LINE(3756)
					pre->next = ret1;
					HX_STACK_LINE(3756)
					if (((ret1 == null()))){
						HX_STACK_LINE(3756)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3756)
				{
					HX_STACK_LINE(3756)
					::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3756)
					o->elt = null();
					HX_STACK_LINE(3756)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(3756)
					::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3756)
				this->modified = true;
				HX_STACK_LINE(3756)
				(this->length)--;
				HX_STACK_LINE(3756)
				this->pushmod = true;
				HX_STACK_LINE(3756)
				ret1;
			}
			HX_STACK_LINE(3757)
			ret = true;
			HX_STACK_LINE(3758)
			break;
		}
		HX_STACK_LINE(3760)
		pre = cur;
		HX_STACK_LINE(3761)
		cur = cur->next;
	}
	HX_STACK_LINE(3763)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","erase",0xe2e00f66,"zpp_nape.util.ZNPList_ZPP_CbSet.erase","zpp_nape/util/Lists.hx",3766,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(3766)
	::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3766)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3766)
	if (((pre == null()))){
		HX_STACK_LINE(3766)
		old = this->head;
		HX_STACK_LINE(3766)
		ret = old->next;
		HX_STACK_LINE(3766)
		this->head = ret;
		HX_STACK_LINE(3766)
		if (((this->head == null()))){
			HX_STACK_LINE(3766)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3766)
		old = pre->next;
		HX_STACK_LINE(3766)
		ret = old->next;
		HX_STACK_LINE(3766)
		pre->next = ret;
		HX_STACK_LINE(3766)
		if (((ret == null()))){
			HX_STACK_LINE(3766)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3766)
	{
		HX_STACK_LINE(3766)
		::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3766)
		o->elt = null();
		HX_STACK_LINE(3766)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(3766)
		::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3766)
	this->modified = true;
	HX_STACK_LINE(3766)
	(this->length)--;
	HX_STACK_LINE(3766)
	this->pushmod = true;
	HX_STACK_LINE(3766)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_erase",0xb3ab5cd2,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_erase","zpp_nape/util/Lists.hx",3770,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(3779)
	::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3780)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3781)
	if (((pre == null()))){
		HX_STACK_LINE(3782)
		old = this->head;
		HX_STACK_LINE(3783)
		ret = old->next;
		HX_STACK_LINE(3784)
		this->head = ret;
		HX_STACK_LINE(3785)
		if (((this->head == null()))){
			HX_STACK_LINE(3785)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3788)
		old = pre->next;
		HX_STACK_LINE(3789)
		ret = old->next;
		HX_STACK_LINE(3790)
		pre->next = ret;
		HX_STACK_LINE(3791)
		if (((ret == null()))){
			HX_STACK_LINE(3791)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3794)
	{
		HX_STACK_LINE(3795)
		::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3804)
		o->elt = null();
		HX_STACK_LINE(3805)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(3806)
		::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3811)
	this->modified = true;
	HX_STACK_LINE(3812)
	(this->length)--;
	HX_STACK_LINE(3813)
	this->pushmod = true;
	HX_STACK_LINE(3814)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","splice",0x1a9d0efc,"zpp_nape.util.ZNPList_ZPP_CbSet.splice","zpp_nape/util/Lists.hx",3816,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(3817)
	while((true)){
		HX_STACK_LINE(3817)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3817)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(3817)
			break;
		}
		HX_STACK_LINE(3817)
		this->erase(pre);
	}
	HX_STACK_LINE(3818)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,splice,return )

Void ZNPList_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","clear",0xb81e980d,"zpp_nape.util.ZNPList_ZPP_CbSet.clear","zpp_nape/util/Lists.hx",3821,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3821)
		while((true)){
			HX_STACK_LINE(3821)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(3821)
				break;
			}
			HX_STACK_LINE(3821)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3821)
			this->head = ret->next;
			HX_STACK_LINE(3821)
			{
				HX_STACK_LINE(3821)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3821)
				o->elt = null();
				HX_STACK_LINE(3821)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3821)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3821)
			if (((this->head == null()))){
				HX_STACK_LINE(3821)
				this->pushmod = true;
			}
			HX_STACK_LINE(3821)
			this->modified = true;
			HX_STACK_LINE(3821)
			(this->length)--;
		}
		HX_STACK_LINE(3821)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,clear,(void))

Void ZNPList_ZPP_CbSet_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_clear",0x88e9e579,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_clear","zpp_nape/util/Lists.hx",3826,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3827)
		while((true)){
			HX_STACK_LINE(3827)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(3827)
				break;
			}
			HX_STACK_LINE(3827)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3827)
			this->head = ret->next;
			HX_STACK_LINE(3827)
			{
				HX_STACK_LINE(3827)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3827)
				o->elt = null();
				HX_STACK_LINE(3827)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3827)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3827)
			if (((this->head == null()))){
				HX_STACK_LINE(3827)
				this->pushmod = true;
			}
			HX_STACK_LINE(3827)
			this->modified = true;
			HX_STACK_LINE(3827)
			(this->length)--;
		}
		HX_STACK_LINE(3828)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbSet_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","reverse",0x5eb5ffa2,"zpp_nape.util.ZNPList_ZPP_CbSet.reverse","zpp_nape/util/Lists.hx",3831,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3832)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3833)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3834)
		while((true)){
			HX_STACK_LINE(3834)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(3834)
				break;
			}
			HX_STACK_LINE(3835)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3836)
			cur->next = pre;
			HX_STACK_LINE(3837)
			this->head = cur;
			HX_STACK_LINE(3838)
			pre = cur;
			HX_STACK_LINE(3839)
			cur = nx;
		}
		HX_STACK_LINE(3841)
		this->modified = true;
		HX_STACK_LINE(3842)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,reverse,(void))

bool ZNPList_ZPP_CbSet_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","empty",0xdf9d610d,"zpp_nape.util.ZNPList_ZPP_CbSet.empty","zpp_nape/util/Lists.hx",3847,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3847)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,empty,return )

int ZNPList_ZPP_CbSet_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","size",0xf594ca41,"zpp_nape.util.ZNPList_ZPP_CbSet.size","zpp_nape/util/Lists.hx",3852,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3852)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,size,return )

bool ZNPList_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","has",0x7503c5da,"zpp_nape.util.ZNPList_ZPP_CbSet.has","zpp_nape/util/Lists.hx",3855,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3855)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3855)
	{
		HX_STACK_LINE(3855)
		ret = false;
		HX_STACK_LINE(3855)
		{
			HX_STACK_LINE(3855)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3855)
			while((true)){
				HX_STACK_LINE(3855)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(3855)
					break;
				}
				HX_STACK_LINE(3855)
				::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3855)
				if (((npite == obj))){
					HX_STACK_LINE(3855)
					ret = true;
					HX_STACK_LINE(3855)
					break;
				}
				HX_STACK_LINE(3855)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3855)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,has,return )

bool ZNPList_ZPP_CbSet_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","inlined_has",0x2092a046,"zpp_nape.util.ZNPList_ZPP_CbSet.inlined_has","zpp_nape/util/Lists.hx",3859,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3868)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3869)
	{
		HX_STACK_LINE(3870)
		ret = false;
		HX_STACK_LINE(3871)
		{
			HX_STACK_LINE(3872)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3873)
			while((true)){
				HX_STACK_LINE(3873)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(3873)
					break;
				}
				HX_STACK_LINE(3874)
				::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3876)
				if (((npite == obj))){
					HX_STACK_LINE(3877)
					ret = true;
					HX_STACK_LINE(3878)
					break;
				}
				HX_STACK_LINE(3881)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3885)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","front",0x76513f29,"zpp_nape.util.ZNPList_ZPP_CbSet.front","zpp_nape/util/Lists.hx",3890,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3890)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,front,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","back",0xea5203a7,"zpp_nape.util.ZNPList_ZPP_CbSet.back","zpp_nape/util/Lists.hx",3892,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3893)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3894)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3895)
	while((true)){
		HX_STACK_LINE(3895)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(3895)
			break;
		}
		HX_STACK_LINE(3896)
		ret = cur;
		HX_STACK_LINE(3897)
		cur = cur->next;
	}
	HX_STACK_LINE(3899)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","iterator_at",0x25319064,"zpp_nape.util.ZNPList_ZPP_CbSet.iterator_at","zpp_nape/util/Lists.hx",3901,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3910)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3911)
	while((true)){
		HX_STACK_LINE(3911)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3911)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(3911)
			break;
		}
		HX_STACK_LINE(3911)
		ret = ret->next;
	}
	HX_STACK_LINE(3912)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbSet","at",0xb39c1e73,"zpp_nape.util.ZNPList_ZPP_CbSet.at","zpp_nape/util/Lists.hx",3914,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3923)
	::zpp_nape::util::ZNPNode_ZPP_CbSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3924)
	if (((it != null()))){
		HX_STACK_LINE(3924)
		return it->elt;
	}
	else{
		HX_STACK_LINE(3924)
		return null();
	}
	HX_STACK_LINE(3924)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,at,return )


ZNPList_ZPP_CbSet_obj::ZNPList_ZPP_CbSet_obj()
{
}

void ZNPList_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbSet >(); return inValue; }
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

void ZNPList_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CbSet*/ ,(int)offsetof(ZNPList_ZPP_CbSet_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbSet_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbSet_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CbSet_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_CbSet_obj::__mClass;

void ZNPList_ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbSet"), hx::TCanCast< ZNPList_ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_CbSet_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
