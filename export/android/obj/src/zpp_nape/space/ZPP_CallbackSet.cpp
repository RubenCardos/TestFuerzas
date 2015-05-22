#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CallbackSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","new",0x2b5b69c1,"zpp_nape.space.ZPP_CallbackSet.new","zpp_nape/space/Space.hx",645,0x2b65ed03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1084)
	this->lazydel = false;
	HX_STACK_LINE(1083)
	this->freed = false;
	HX_STACK_LINE(718)
	this->length = (int)0;
	HX_STACK_LINE(717)
	this->pushmod = false;
	HX_STACK_LINE(716)
	this->modified = false;
	HX_STACK_LINE(715)
	this->_inuse = false;
	HX_STACK_LINE(704)
	this->next = null();
	HX_STACK_LINE(649)
	this->int2 = null();
	HX_STACK_LINE(648)
	this->int1 = null();
	HX_STACK_LINE(647)
	this->di = (int)0;
	HX_STACK_LINE(646)
	this->id = (int)0;
	HX_STACK_LINE(1114)
	::zpp_nape::util::ZNPList_ZPP_Arbiter _g = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1114)
	this->arbiters = _g;
}
;
	return null();
}

//ZPP_CallbackSet_obj::~ZPP_CallbackSet_obj() { }

Dynamic ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZPP_CallbackSet_obj > ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","elem",0xbeb3740e,"zpp_nape.space.ZPP_CallbackSet.elem","zpp_nape/space/Space.hx",708,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,elem,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","begin",0x5f7f5dca,"zpp_nape.space.ZPP_CallbackSet.begin","zpp_nape/space/Space.hx",713,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,begin,return )

Void ZPP_CallbackSet_obj::setbegin( ::zpp_nape::space::ZPP_CallbackSet i){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","setbegin",0x09c8aa46,"zpp_nape.space.ZPP_CallbackSet.setbegin","zpp_nape/space/Space.hx",721,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(722)
		this->next = i;
		HX_STACK_LINE(723)
		this->modified = true;
		HX_STACK_LINE(724)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","add",0x2b518b82,"zpp_nape.space.ZPP_CallbackSet.add","zpp_nape/space/Space.hx",727,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(727)
	::zpp_nape::space::ZPP_CallbackSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(727)
	{
		HX_STACK_LINE(727)
		o->_inuse = true;
		HX_STACK_LINE(727)
		temp = o;
	}
	HX_STACK_LINE(727)
	temp->next = this->next;
	HX_STACK_LINE(727)
	this->next = temp;
	HX_STACK_LINE(727)
	this->modified = true;
	HX_STACK_LINE(727)
	(this->length)++;
	HX_STACK_LINE(727)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_add",0x416faeee,"zpp_nape.space.ZPP_CallbackSet.inlined_add","zpp_nape/space/Space.hx",731,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(740)
	::zpp_nape::space::ZPP_CallbackSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(740)
	{
		HX_STACK_LINE(741)
		o->_inuse = true;
		HX_STACK_LINE(742)
		temp = o;
	}
	HX_STACK_LINE(744)
	temp->next = this->next;
	HX_STACK_LINE(745)
	this->next = temp;
	HX_STACK_LINE(746)
	this->modified = true;
	HX_STACK_LINE(747)
	(this->length)++;
	HX_STACK_LINE(748)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_add,return )

Void ZPP_CallbackSet_obj::addAll( ::zpp_nape::space::ZPP_CallbackSet x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","addAll",0x3416c2bf,"zpp_nape.space.ZPP_CallbackSet.addAll","zpp_nape/space/Space.hx",759,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(760)
		::zpp_nape::space::ZPP_CallbackSet cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(761)
		while((true)){
			HX_STACK_LINE(761)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(761)
				break;
			}
			HX_STACK_LINE(762)
			::zpp_nape::space::ZPP_CallbackSet i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(763)
			this->add(i);
			HX_STACK_LINE(764)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","insert",0x32f8fc78,"zpp_nape.space.ZPP_CallbackSet.insert","zpp_nape/space/Space.hx",769,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(769)
	::zpp_nape::space::ZPP_CallbackSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(769)
	{
		HX_STACK_LINE(769)
		o->_inuse = true;
		HX_STACK_LINE(769)
		temp = o;
	}
	HX_STACK_LINE(769)
	if (((cur == null()))){
		HX_STACK_LINE(769)
		temp->next = this->next;
		HX_STACK_LINE(769)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(769)
		temp->next = cur->next;
		HX_STACK_LINE(769)
		cur->next = temp;
	}
	HX_STACK_LINE(769)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(769)
	this->pushmod = _g;
	HX_STACK_LINE(769)
	(this->length)++;
	HX_STACK_LINE(769)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,insert,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_insert",0xad75c48c,"zpp_nape.space.ZPP_CallbackSet.inlined_insert","zpp_nape/space/Space.hx",773,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(782)
	::zpp_nape::space::ZPP_CallbackSet temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(782)
	{
		HX_STACK_LINE(783)
		o->_inuse = true;
		HX_STACK_LINE(784)
		temp = o;
	}
	HX_STACK_LINE(786)
	if (((cur == null()))){
		HX_STACK_LINE(787)
		temp->next = this->next;
		HX_STACK_LINE(788)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(791)
		temp->next = cur->next;
		HX_STACK_LINE(792)
		cur->next = temp;
	}
	HX_STACK_LINE(794)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(794)
	this->pushmod = _g;
	HX_STACK_LINE(795)
	(this->length)++;
	HX_STACK_LINE(796)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,inlined_insert,return )

Void ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","pop",0x2b5cf6f2,"zpp_nape.space.ZPP_CallbackSet.pop","zpp_nape/space/Space.hx",799,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(799)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(799)
		this->next = ret->next;
		HX_STACK_LINE(799)
		ret->_inuse = false;
		HX_STACK_LINE(799)
		if (((this->next == null()))){
			HX_STACK_LINE(799)
			this->pushmod = true;
		}
		HX_STACK_LINE(799)
		this->modified = true;
		HX_STACK_LINE(799)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop,(void))

Void ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_pop",0x417b1a5e,"zpp_nape.space.ZPP_CallbackSet.inlined_pop","zpp_nape/space/Space.hx",803,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(812)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(813)
		this->next = ret->next;
		HX_STACK_LINE(815)
		ret->_inuse = false;
		HX_STACK_LINE(818)
		if (((this->next == null()))){
			HX_STACK_LINE(818)
			this->pushmod = true;
		}
		HX_STACK_LINE(819)
		this->modified = true;
		HX_STACK_LINE(820)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","pop_unsafe",0x9c174113,"zpp_nape.space.ZPP_CallbackSet.pop_unsafe","zpp_nape/space/Space.hx",823,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(823)
	this->pop();
	HX_STACK_LINE(823)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_pop_unsafe",0xac9ba327,"zpp_nape.space.ZPP_CallbackSet.inlined_pop_unsafe","zpp_nape/space/Space.hx",827,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(836)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(837)
	this->pop();
	HX_STACK_LINE(838)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

Void ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","remove",0x99a45583,"zpp_nape.space.ZPP_CallbackSet.remove","zpp_nape/space/Space.hx",849,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(849)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(849)
		while((true)){
			HX_STACK_LINE(849)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(849)
				break;
			}
			HX_STACK_LINE(849)
			if (((cur == obj))){
				HX_STACK_LINE(849)
				{
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(849)
					if (((pre == null()))){
						HX_STACK_LINE(849)
						old = this->next;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						this->next = ret1;
						HX_STACK_LINE(849)
						if (((this->next == null()))){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(849)
						old = pre->next;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						pre->next = ret1;
						HX_STACK_LINE(849)
						if (((ret1 == null()))){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(849)
					old->_inuse = false;
					HX_STACK_LINE(849)
					this->modified = true;
					HX_STACK_LINE(849)
					(this->length)--;
					HX_STACK_LINE(849)
					this->pushmod = true;
					HX_STACK_LINE(849)
					ret1;
				}
				HX_STACK_LINE(849)
				ret = true;
				HX_STACK_LINE(849)
				break;
			}
			HX_STACK_LINE(849)
			pre = cur;
			HX_STACK_LINE(849)
			cur = cur->next;
		}
		HX_STACK_LINE(849)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove,(void))

bool ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","try_remove",0xb34176c7,"zpp_nape.space.ZPP_CallbackSet.try_remove","zpp_nape/space/Space.hx",851,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(860)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(861)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(862)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(863)
	while((true)){
		HX_STACK_LINE(863)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(863)
			break;
		}
		HX_STACK_LINE(864)
		if (((cur == obj))){
			HX_STACK_LINE(865)
			this->erase(pre);
			HX_STACK_LINE(866)
			ret = true;
			HX_STACK_LINE(867)
			break;
		}
		HX_STACK_LINE(869)
		pre = cur;
		HX_STACK_LINE(870)
		cur = cur->next;
	}
	HX_STACK_LINE(872)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove,return )

Void ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_remove",0x14211d97,"zpp_nape.space.ZPP_CallbackSet.inlined_remove","zpp_nape/space/Space.hx",885,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(885)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(885)
		while((true)){
			HX_STACK_LINE(885)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(885)
				break;
			}
			HX_STACK_LINE(885)
			if (((cur == obj))){
				HX_STACK_LINE(885)
				{
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(885)
					if (((pre == null()))){
						HX_STACK_LINE(885)
						old = this->next;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						this->next = ret1;
						HX_STACK_LINE(885)
						if (((this->next == null()))){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(885)
						old = pre->next;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						pre->next = ret1;
						HX_STACK_LINE(885)
						if (((ret1 == null()))){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(885)
					old->_inuse = false;
					HX_STACK_LINE(885)
					this->modified = true;
					HX_STACK_LINE(885)
					(this->length)--;
					HX_STACK_LINE(885)
					this->pushmod = true;
					HX_STACK_LINE(885)
					ret1;
				}
				HX_STACK_LINE(885)
				ret = true;
				HX_STACK_LINE(885)
				break;
			}
			HX_STACK_LINE(885)
			pre = cur;
			HX_STACK_LINE(885)
			cur = cur->next;
		}
		HX_STACK_LINE(885)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_try_remove",0xc3c5d8db,"zpp_nape.space.ZPP_CallbackSet.inlined_try_remove","zpp_nape/space/Space.hx",889,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(898)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(899)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(900)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(901)
	while((true)){
		HX_STACK_LINE(901)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(901)
			break;
		}
		HX_STACK_LINE(902)
		if (((cur == obj))){
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(903)
				if (((pre == null()))){
					HX_STACK_LINE(903)
					old = this->next;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					this->next = ret1;
					HX_STACK_LINE(903)
					if (((this->next == null()))){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(903)
					old = pre->next;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					pre->next = ret1;
					HX_STACK_LINE(903)
					if (((ret1 == null()))){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(903)
				old->_inuse = false;
				HX_STACK_LINE(903)
				this->modified = true;
				HX_STACK_LINE(903)
				(this->length)--;
				HX_STACK_LINE(903)
				this->pushmod = true;
				HX_STACK_LINE(903)
				ret1;
			}
			HX_STACK_LINE(904)
			ret = true;
			HX_STACK_LINE(905)
			break;
		}
		HX_STACK_LINE(907)
		pre = cur;
		HX_STACK_LINE(908)
		cur = cur->next;
	}
	HX_STACK_LINE(910)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_try_remove,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","erase",0x22465c87,"zpp_nape.space.ZPP_CallbackSet.erase","zpp_nape/space/Space.hx",913,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(913)
	::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(913)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(913)
	if (((pre == null()))){
		HX_STACK_LINE(913)
		old = this->next;
		HX_STACK_LINE(913)
		ret = old->next;
		HX_STACK_LINE(913)
		this->next = ret;
		HX_STACK_LINE(913)
		if (((this->next == null()))){
			HX_STACK_LINE(913)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(913)
		old = pre->next;
		HX_STACK_LINE(913)
		ret = old->next;
		HX_STACK_LINE(913)
		pre->next = ret;
		HX_STACK_LINE(913)
		if (((ret == null()))){
			HX_STACK_LINE(913)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(913)
	old->_inuse = false;
	HX_STACK_LINE(913)
	this->modified = true;
	HX_STACK_LINE(913)
	(this->length)--;
	HX_STACK_LINE(913)
	this->pushmod = true;
	HX_STACK_LINE(913)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_erase",0x96c532f3,"zpp_nape.space.ZPP_CallbackSet.inlined_erase","zpp_nape/space/Space.hx",917,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(926)
	::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(927)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(928)
	if (((pre == null()))){
		HX_STACK_LINE(929)
		old = this->next;
		HX_STACK_LINE(930)
		ret = old->next;
		HX_STACK_LINE(931)
		this->next = ret;
		HX_STACK_LINE(932)
		if (((this->next == null()))){
			HX_STACK_LINE(932)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(935)
		old = pre->next;
		HX_STACK_LINE(936)
		ret = old->next;
		HX_STACK_LINE(937)
		pre->next = ret;
		HX_STACK_LINE(938)
		if (((ret == null()))){
			HX_STACK_LINE(938)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(941)
	old->_inuse = false;
	HX_STACK_LINE(944)
	this->modified = true;
	HX_STACK_LINE(945)
	(this->length)--;
	HX_STACK_LINE(946)
	this->pushmod = true;
	HX_STACK_LINE(947)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::splice( ::zpp_nape::space::ZPP_CallbackSet pre,int n){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","splice",0x54ba3ebb,"zpp_nape.space.ZPP_CallbackSet.splice","zpp_nape/space/Space.hx",949,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(950)
	while((true)){
		HX_STACK_LINE(950)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(950)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(950)
			break;
		}
		HX_STACK_LINE(950)
		this->erase(pre);
	}
	HX_STACK_LINE(951)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,splice,return )

Void ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","clear",0xf784e52e,"zpp_nape.space.ZPP_CallbackSet.clear","zpp_nape/space/Space.hx",954,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,clear,(void))

Void ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_clear",0x6c03bb9a,"zpp_nape.space.ZPP_CallbackSet.inlined_clear","zpp_nape/space/Space.hx",959,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","reverse",0xfe229703,"zpp_nape.space.ZPP_CallbackSet.reverse","zpp_nape/space/Space.hx",964,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(965)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(966)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(967)
		while((true)){
			HX_STACK_LINE(967)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(967)
				break;
			}
			HX_STACK_LINE(968)
			::zpp_nape::space::ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(969)
			cur->next = pre;
			HX_STACK_LINE(970)
			this->next = cur;
			HX_STACK_LINE(971)
			pre = cur;
			HX_STACK_LINE(972)
			cur = nx;
		}
		HX_STACK_LINE(974)
		this->modified = true;
		HX_STACK_LINE(975)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,reverse,(void))

bool ZPP_CallbackSet_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","empty",0x1f03ae2e,"zpp_nape.space.ZPP_CallbackSet.empty","zpp_nape/space/Space.hx",980,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(980)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,empty,return )

int ZPP_CallbackSet_obj::size( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","size",0xc7f23c40,"zpp_nape.space.ZPP_CallbackSet.size","zpp_nape/space/Space.hx",985,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(985)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,size,return )

bool ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","has",0x2b56d8bb,"zpp_nape.space.ZPP_CallbackSet.has","zpp_nape/space/Space.hx",988,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(988)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(988)
	{
		HX_STACK_LINE(988)
		ret = false;
		HX_STACK_LINE(988)
		{
			HX_STACK_LINE(988)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(988)
			while((true)){
				HX_STACK_LINE(988)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(988)
					break;
				}
				HX_STACK_LINE(988)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(988)
				if (((npite == obj))){
					HX_STACK_LINE(988)
					ret = true;
					HX_STACK_LINE(988)
					break;
				}
				HX_STACK_LINE(988)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(988)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,has,return )

bool ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_has",0x4174fc27,"zpp_nape.space.ZPP_CallbackSet.inlined_has","zpp_nape/space/Space.hx",992,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1001)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1002)
	{
		HX_STACK_LINE(1003)
		ret = false;
		HX_STACK_LINE(1004)
		{
			HX_STACK_LINE(1005)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1006)
			while((true)){
				HX_STACK_LINE(1006)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1006)
					break;
				}
				HX_STACK_LINE(1007)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1009)
				if (((npite == obj))){
					HX_STACK_LINE(1010)
					ret = true;
					HX_STACK_LINE(1011)
					break;
				}
				HX_STACK_LINE(1014)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1018)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_has,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::front( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","front",0xb5b78c4a,"zpp_nape.space.ZPP_CallbackSet.front","zpp_nape/space/Space.hx",1023,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1023)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,front,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::back( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","back",0xbcaf75a6,"zpp_nape.space.ZPP_CallbackSet.back","zpp_nape/space/Space.hx",1025,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1026)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1027)
	::zpp_nape::space::ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1028)
	while((true)){
		HX_STACK_LINE(1028)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(1028)
			break;
		}
		HX_STACK_LINE(1029)
		ret = cur;
		HX_STACK_LINE(1030)
		cur = cur->next;
	}
	HX_STACK_LINE(1032)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,back,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","iterator_at",0x4613ec45,"zpp_nape.space.ZPP_CallbackSet.iterator_at","zpp_nape/space/Space.hx",1034,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1043)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1044)
	while((true)){
		HX_STACK_LINE(1044)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1044)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(1044)
			break;
		}
		HX_STACK_LINE(1044)
		ret = ret->next;
	}
	HX_STACK_LINE(1045)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","at",0xe258c2b2,"zpp_nape.space.ZPP_CallbackSet.at","zpp_nape/space/Space.hx",1047,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1056)
	::zpp_nape::space::ZPP_CallbackSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1057)
	if (((it != null()))){
		HX_STACK_LINE(1057)
		return it;
	}
	else{
		HX_STACK_LINE(1057)
		return null();
	}
	HX_STACK_LINE(1057)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,at,return )

Void ZPP_CallbackSet_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","free",0xbf61382b,"zpp_nape.space.ZPP_CallbackSet.free","zpp_nape/space/Space.hx",1087,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Interactor _g = this->int2 = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1088)
		this->int1 = _g;
		HX_STACK_LINE(1089)
		int _g1 = this->di = (int)-1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1089)
		this->id = _g1;
		HX_STACK_LINE(1090)
		this->freed = true;
		HX_STACK_LINE(1091)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,free,(void))

Void ZPP_CallbackSet_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","alloc",0xd0bd1816,"zpp_nape.space.ZPP_CallbackSet.alloc","zpp_nape/space/Space.hx",1102,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1103)
		this->freed = false;
		HX_STACK_LINE(1104)
		this->lazydel = false;
		HX_STACK_LINE(1106)
		this->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1107)
		this->COLLISIONstamp = (int)0;
		HX_STACK_LINE(1108)
		this->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1109)
		this->SENSORstamp = (int)0;
		HX_STACK_LINE(1110)
		this->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1111)
		this->FLUIDstamp = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,alloc,(void))

bool ZPP_CallbackSet_obj::add_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","add_arb",0x739fb7d4,"zpp_nape.space.ZPP_CallbackSet.add_arb","zpp_nape/space/Space.hx",1118,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::zpp_nape::space::ZPP_CallbackSet_obj > __this,::zpp_nape::dynamics::ZPP_Arbiter &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/space/Space.hx",1118,0x2b65ed03)
			{
				HX_STACK_LINE(1118)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1118)
				{
					HX_STACK_LINE(1118)
					ret = false;
					HX_STACK_LINE(1118)
					{
						HX_STACK_LINE(1118)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = __this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1118)
						while((true)){
							HX_STACK_LINE(1118)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(1118)
								break;
							}
							HX_STACK_LINE(1118)
							::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1118)
							if (((npite == x))){
								HX_STACK_LINE(1118)
								ret = true;
								HX_STACK_LINE(1118)
								break;
							}
							HX_STACK_LINE(1118)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1118)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1118)
	if ((!(_Function_1_1::Block(this,x)))){
		HX_STACK_LINE(1119)
		{
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1119)
			{
				HX_STACK_LINE(1119)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1119)
				{
					HX_STACK_LINE(1119)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter _g = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1119)
						ret = _g;
					}
					else{
						HX_STACK_LINE(1119)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1119)
						ret->next = null();
					}
					HX_STACK_LINE(1119)
					Dynamic();
				}
				HX_STACK_LINE(1119)
				ret->elt = x;
				HX_STACK_LINE(1119)
				temp = ret;
			}
			HX_STACK_LINE(1119)
			temp->next = _this->head;
			HX_STACK_LINE(1119)
			_this->head = temp;
			HX_STACK_LINE(1119)
			_this->modified = true;
			HX_STACK_LINE(1119)
			(_this->length)++;
			HX_STACK_LINE(1119)
			x;
		}
		HX_STACK_LINE(1120)
		return true;
	}
	else{
		HX_STACK_LINE(1122)
		return false;
	}
	HX_STACK_LINE(1118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add_arb,return )

bool ZPP_CallbackSet_obj::try_remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","try_remove_arb",0x04072999,"zpp_nape.space.ZPP_CallbackSet.try_remove_arb","zpp_nape/space/Space.hx",1125,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1125)
	::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(1125)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1125)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1125)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1125)
	while((true)){
		HX_STACK_LINE(1125)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(1125)
			break;
		}
		HX_STACK_LINE(1125)
		if (((cur->elt == x))){
			HX_STACK_LINE(1125)
			{
				HX_STACK_LINE(1125)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1125)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1125)
				if (((pre == null()))){
					HX_STACK_LINE(1125)
					old = _this->head;
					HX_STACK_LINE(1125)
					ret1 = old->next;
					HX_STACK_LINE(1125)
					_this->head = ret1;
					HX_STACK_LINE(1125)
					if (((_this->head == null()))){
						HX_STACK_LINE(1125)
						_this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1125)
					old = pre->next;
					HX_STACK_LINE(1125)
					ret1 = old->next;
					HX_STACK_LINE(1125)
					pre->next = ret1;
					HX_STACK_LINE(1125)
					if (((ret1 == null()))){
						HX_STACK_LINE(1125)
						_this->pushmod = true;
					}
				}
				HX_STACK_LINE(1125)
				{
					HX_STACK_LINE(1125)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1125)
					o->elt = null();
					HX_STACK_LINE(1125)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
					HX_STACK_LINE(1125)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1125)
				_this->modified = true;
				HX_STACK_LINE(1125)
				(_this->length)--;
				HX_STACK_LINE(1125)
				_this->pushmod = true;
				HX_STACK_LINE(1125)
				ret1;
			}
			HX_STACK_LINE(1125)
			ret = true;
			HX_STACK_LINE(1125)
			break;
		}
		HX_STACK_LINE(1125)
		pre = cur;
		HX_STACK_LINE(1125)
		cur = cur->next;
	}
	HX_STACK_LINE(1125)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove_arb,return )

Void ZPP_CallbackSet_obj::remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","remove_arb",0xf7861655,"zpp_nape.space.ZPP_CallbackSet.remove_arb","zpp_nape/space/Space.hx",1128,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1128)
		::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1128)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1128)
			while((true)){
				HX_STACK_LINE(1128)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				if (((cur->elt == x))){
					HX_STACK_LINE(1128)
					{
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1128)
						if (((pre == null()))){
							HX_STACK_LINE(1128)
							old = _this->head;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							_this->head = ret1;
							HX_STACK_LINE(1128)
							if (((_this->head == null()))){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1128)
							old = pre->next;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							pre->next = ret1;
							HX_STACK_LINE(1128)
							if (((ret1 == null()))){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1128)
							o->elt = null();
							HX_STACK_LINE(1128)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1128)
						_this->modified = true;
						HX_STACK_LINE(1128)
						(_this->length)--;
						HX_STACK_LINE(1128)
						_this->pushmod = true;
						HX_STACK_LINE(1128)
						ret1;
					}
					HX_STACK_LINE(1128)
					ret = true;
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				pre = cur;
				HX_STACK_LINE(1128)
				cur = cur->next;
			}
			HX_STACK_LINE(1128)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove_arb,(void))

bool ZPP_CallbackSet_obj::empty_arb( int type){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","empty_arb",0xd0f6a080,"zpp_nape.space.ZPP_CallbackSet.empty_arb","zpp_nape/space/Space.hx",1130,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1131)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(1132)
	{
		HX_STACK_LINE(1133)
		retvar = true;
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1135)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1136)
			while((true)){
				HX_STACK_LINE(1136)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1136)
					break;
				}
				HX_STACK_LINE(1137)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1139)
				if (((((int(x->type) & int(type))) == (int)0))){
					HX_STACK_LINE(1141)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1142)
					continue;
				}
				else{
					HX_STACK_LINE(1146)
					retvar = false;
					HX_STACK_LINE(1147)
					break;
				}
				HX_STACK_LINE(1150)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1154)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,empty_arb,return )

bool ZPP_CallbackSet_obj::really_empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","really_empty",0x47b253f8,"zpp_nape.space.ZPP_CallbackSet.really_empty","zpp_nape/space/Space.hx",1159,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	return (this->arbiters->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,really_empty,return )

bool ZPP_CallbackSet_obj::sleeping( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","sleeping",0xeeff1f2a,"zpp_nape.space.ZPP_CallbackSet.sleeping","zpp_nape/space/Space.hx",1163,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1164)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1165)
	{
		HX_STACK_LINE(1166)
		ret = true;
		HX_STACK_LINE(1167)
		{
			HX_STACK_LINE(1168)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1169)
			while((true)){
				HX_STACK_LINE(1169)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1169)
					break;
				}
				HX_STACK_LINE(1170)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1172)
				if ((x->sleeping)){
					HX_STACK_LINE(1174)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1175)
					continue;
				}
				else{
					HX_STACK_LINE(1179)
					ret = false;
					HX_STACK_LINE(1180)
					break;
				}
				HX_STACK_LINE(1183)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1187)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,sleeping,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","get",0x2b5619f7,"zpp_nape.space.ZPP_CallbackSet.get","zpp_nape/space/Space.hx",650,0x2b65ed03)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(651)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(652)
	{
		HX_STACK_LINE(653)
		if (((::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(654)
			::zpp_nape::space::ZPP_CallbackSet _g = ::zpp_nape::space::ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(654)
			ret = _g;
		}
		else{
			HX_STACK_LINE(660)
			ret = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;
			HX_STACK_LINE(661)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(662)
			ret->next = null();
		}
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			ret->freed = false;
			HX_STACK_LINE(667)
			ret->lazydel = false;
			HX_STACK_LINE(667)
			ret->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->COLLISIONstamp = (int)0;
			HX_STACK_LINE(667)
			ret->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->SENSORstamp = (int)0;
			HX_STACK_LINE(667)
			ret->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->FLUIDstamp = (int)0;
		}
	}
	HX_STACK_LINE(677)
	if (((i1->id < i2->id))){
		HX_STACK_LINE(678)
		ret->int1 = i1;
		HX_STACK_LINE(679)
		ret->int2 = i2;
	}
	else{
		HX_STACK_LINE(682)
		ret->int1 = i2;
		HX_STACK_LINE(683)
		ret->int2 = i1;
	}
	HX_STACK_LINE(685)
	ret->id = ret->int1->id;
	HX_STACK_LINE(686)
	ret->di = ret->int2->id;
	HX_STACK_LINE(695)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,get,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::zpp_pool;


ZPP_CallbackSet_obj::ZPP_CallbackSet_obj()
{
}

void ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_MARK_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_MARK_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_MARK_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_MARK_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_MARK_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(freed,"freed");
	HX_MARK_MEMBER_NAME(lazydel,"lazydel");
	HX_MARK_END_CLASS();
}

void ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_VISIT_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_VISIT_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_VISIT_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_VISIT_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_VISIT_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(freed,"freed");
	HX_VISIT_MEMBER_NAME(lazydel,"lazydel");
}

Dynamic ZPP_CallbackSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"freed") ) { return freed; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"lazydel") ) { return lazydel; }
		if (HX_FIELD_EQ(inName,"add_arb") ) { return add_arb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"empty_arb") ) { return empty_arb_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { return FLUIDstate; }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { return FLUIDstamp; }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_arb") ) { return remove_arb_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { return SENSORstate; }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { return SENSORstamp; }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"really_empty") ) { return really_empty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { return COLLISIONstate; }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { return COLLISIONstamp; }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove_arb") ) { return try_remove_arb_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"freed") ) { freed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lazydel") ) { lazydel=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { FLUIDstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { FLUIDstamp=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { SENSORstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { SENSORstamp=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { COLLISIONstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { COLLISIONstamp=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("COLLISIONstate"));
	outFields->push(HX_CSTRING("COLLISIONstamp"));
	outFields->push(HX_CSTRING("SENSORstate"));
	outFields->push(HX_CSTRING("SENSORstamp"));
	outFields->push(HX_CSTRING("FLUIDstate"));
	outFields->push(HX_CSTRING("FLUIDstamp"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("freed"));
	outFields->push(HX_CSTRING("lazydel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,di),HX_CSTRING("di")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_CallbackSet_obj,int1),HX_CSTRING("int1")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_CallbackSet_obj,int2),HX_CSTRING("int2")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Arbiter*/ ,(int)offsetof(ZPP_CallbackSet_obj,arbiters),HX_CSTRING("arbiters")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,COLLISIONstate),HX_CSTRING("COLLISIONstate")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,COLLISIONstamp),HX_CSTRING("COLLISIONstamp")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,SENSORstate),HX_CSTRING("SENSORstate")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,SENSORstamp),HX_CSTRING("SENSORstamp")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,FLUIDstate),HX_CSTRING("FLUIDstate")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,FLUIDstamp),HX_CSTRING("FLUIDstamp")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CallbackSet*/ ,(int)offsetof(ZPP_CallbackSet_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,_inuse),HX_CSTRING("_inuse")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,length),HX_CSTRING("length")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,freed),HX_CSTRING("freed")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,lazydel),HX_CSTRING("lazydel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("di"),
	HX_CSTRING("int1"),
	HX_CSTRING("int2"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("COLLISIONstate"),
	HX_CSTRING("COLLISIONstamp"),
	HX_CSTRING("SENSORstate"),
	HX_CSTRING("SENSORstamp"),
	HX_CSTRING("FLUIDstate"),
	HX_CSTRING("FLUIDstamp"),
	HX_CSTRING("next"),
	HX_CSTRING("elem"),
	HX_CSTRING("begin"),
	HX_CSTRING("_inuse"),
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
	HX_CSTRING("freed"),
	HX_CSTRING("lazydel"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("add_arb"),
	HX_CSTRING("try_remove_arb"),
	HX_CSTRING("remove_arb"),
	HX_CSTRING("empty_arb"),
	HX_CSTRING("really_empty"),
	HX_CSTRING("sleeping"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_CallbackSet_obj::__mClass;

void ZPP_CallbackSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CallbackSet"), hx::TCanCast< ZPP_CallbackSet_obj> ,sStaticFields,sMemberFields,
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

void ZPP_CallbackSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
