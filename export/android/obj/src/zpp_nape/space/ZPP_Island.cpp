#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Island_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_Island","new",0x3d045015,"zpp_nape.space.ZPP_Island.new","zpp_nape/space/Space.hx",174,0x2b65ed03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(532)
	this->waket = (int)0;
	HX_STACK_LINE(531)
	this->sleep = false;
	HX_STACK_LINE(530)
	this->comps = null();
	HX_STACK_LINE(189)
	this->length = (int)0;
	HX_STACK_LINE(188)
	this->pushmod = false;
	HX_STACK_LINE(187)
	this->modified = false;
	HX_STACK_LINE(186)
	this->_inuse = false;
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(575)
	::zpp_nape::util::ZNPList_ZPP_Component _g = ::zpp_nape::util::ZNPList_ZPP_Component_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(575)
	this->comps = _g;
}
;
	return null();
}

//ZPP_Island_obj::~ZPP_Island_obj() { }

Dynamic ZPP_Island_obj::__CreateEmpty() { return  new ZPP_Island_obj; }
hx::ObjectPtr< ZPP_Island_obj > ZPP_Island_obj::__new()
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Island_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_Island ZPP_Island_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","elem",0x20d4173a,"zpp_nape.space.ZPP_Island.elem","zpp_nape/space/Space.hx",179,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,elem,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","begin",0xd9ed811e,"zpp_nape.space.ZPP_Island.begin","zpp_nape/space/Space.hx",184,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,begin,return )

Void ZPP_Island_obj::setbegin( ::zpp_nape::space::ZPP_Island i){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","setbegin",0xa2185372,"zpp_nape.space.ZPP_Island.setbegin","zpp_nape/space/Space.hx",192,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(193)
		this->next = i;
		HX_STACK_LINE(194)
		this->modified = true;
		HX_STACK_LINE(195)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,setbegin,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","add",0x3cfa71d6,"zpp_nape.space.ZPP_Island.add","zpp_nape/space/Space.hx",198,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(198)
	::zpp_nape::space::ZPP_Island temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		o->_inuse = true;
		HX_STACK_LINE(198)
		temp = o;
	}
	HX_STACK_LINE(198)
	temp->next = this->next;
	HX_STACK_LINE(198)
	this->next = temp;
	HX_STACK_LINE(198)
	this->modified = true;
	HX_STACK_LINE(198)
	(this->length)++;
	HX_STACK_LINE(198)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,add,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_add",0x56a50942,"zpp_nape.space.ZPP_Island.inlined_add","zpp_nape/space/Space.hx",202,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(211)
	::zpp_nape::space::ZPP_Island temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(212)
		o->_inuse = true;
		HX_STACK_LINE(213)
		temp = o;
	}
	HX_STACK_LINE(215)
	temp->next = this->next;
	HX_STACK_LINE(216)
	this->next = temp;
	HX_STACK_LINE(217)
	this->modified = true;
	HX_STACK_LINE(218)
	(this->length)++;
	HX_STACK_LINE(219)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_add,return )

Void ZPP_Island_obj::addAll( ::zpp_nape::space::ZPP_Island x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","addAll",0xda0788eb,"zpp_nape.space.ZPP_Island.addAll","zpp_nape/space/Space.hx",230,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(231)
		::zpp_nape::space::ZPP_Island cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(233)
			::zpp_nape::space::ZPP_Island i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(234)
			this->add(i);
			HX_STACK_LINE(235)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,addAll,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","insert",0xd8e9c2a4,"zpp_nape.space.ZPP_Island.insert","zpp_nape/space/Space.hx",240,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(240)
	::zpp_nape::space::ZPP_Island temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		o->_inuse = true;
		HX_STACK_LINE(240)
		temp = o;
	}
	HX_STACK_LINE(240)
	if (((cur == null()))){
		HX_STACK_LINE(240)
		temp->next = this->next;
		HX_STACK_LINE(240)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(240)
		temp->next = cur->next;
		HX_STACK_LINE(240)
		cur->next = temp;
	}
	HX_STACK_LINE(240)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(240)
	this->pushmod = _g;
	HX_STACK_LINE(240)
	(this->length)++;
	HX_STACK_LINE(240)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,insert,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_insert",0xbc1a96b8,"zpp_nape.space.ZPP_Island.inlined_insert","zpp_nape/space/Space.hx",244,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(253)
	::zpp_nape::space::ZPP_Island temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		o->_inuse = true;
		HX_STACK_LINE(255)
		temp = o;
	}
	HX_STACK_LINE(257)
	if (((cur == null()))){
		HX_STACK_LINE(258)
		temp->next = this->next;
		HX_STACK_LINE(259)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(262)
		temp->next = cur->next;
		HX_STACK_LINE(263)
		cur->next = temp;
	}
	HX_STACK_LINE(265)
	bool _g = this->modified = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(265)
	this->pushmod = _g;
	HX_STACK_LINE(266)
	(this->length)++;
	HX_STACK_LINE(267)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,inlined_insert,return )

Void ZPP_Island_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","pop",0x3d05dd46,"zpp_nape.space.ZPP_Island.pop","zpp_nape/space/Space.hx",270,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(270)
		this->next = ret->next;
		HX_STACK_LINE(270)
		ret->_inuse = false;
		HX_STACK_LINE(270)
		if (((this->next == null()))){
			HX_STACK_LINE(270)
			this->pushmod = true;
		}
		HX_STACK_LINE(270)
		this->modified = true;
		HX_STACK_LINE(270)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop,(void))

Void ZPP_Island_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_pop",0x56b074b2,"zpp_nape.space.ZPP_Island.inlined_pop","zpp_nape/space/Space.hx",274,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(284)
		this->next = ret->next;
		HX_STACK_LINE(286)
		ret->_inuse = false;
		HX_STACK_LINE(289)
		if (((this->next == null()))){
			HX_STACK_LINE(289)
			this->pushmod = true;
		}
		HX_STACK_LINE(290)
		this->modified = true;
		HX_STACK_LINE(291)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","pop_unsafe",0xa6848d3f,"zpp_nape.space.ZPP_Island.pop_unsafe","zpp_nape/space/Space.hx",294,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(294)
	this->pop();
	HX_STACK_LINE(294)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_pop_unsafe",0x58b2fb53,"zpp_nape.space.ZPP_Island.inlined_pop_unsafe","zpp_nape/space/Space.hx",298,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(308)
	this->pop();
	HX_STACK_LINE(309)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop_unsafe,return )

Void ZPP_Island_obj::remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","remove",0x3f951baf,"zpp_nape.space.ZPP_Island.remove","zpp_nape/space/Space.hx",320,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(320)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			if (((cur == obj))){
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(320)
					if (((pre == null()))){
						HX_STACK_LINE(320)
						old = this->next;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						this->next = ret1;
						HX_STACK_LINE(320)
						if (((this->next == null()))){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(320)
						old = pre->next;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						pre->next = ret1;
						HX_STACK_LINE(320)
						if (((ret1 == null()))){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(320)
					old->_inuse = false;
					HX_STACK_LINE(320)
					this->modified = true;
					HX_STACK_LINE(320)
					(this->length)--;
					HX_STACK_LINE(320)
					this->pushmod = true;
					HX_STACK_LINE(320)
					ret1;
				}
				HX_STACK_LINE(320)
				ret = true;
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			pre = cur;
			HX_STACK_LINE(320)
			cur = cur->next;
		}
		HX_STACK_LINE(320)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,remove,(void))

bool ZPP_Island_obj::try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","try_remove",0xbdaec2f3,"zpp_nape.space.ZPP_Island.try_remove","zpp_nape/space/Space.hx",322,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(331)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(332)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(333)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(334)
	while((true)){
		HX_STACK_LINE(334)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(334)
			break;
		}
		HX_STACK_LINE(335)
		if (((cur == obj))){
			HX_STACK_LINE(336)
			this->erase(pre);
			HX_STACK_LINE(337)
			ret = true;
			HX_STACK_LINE(338)
			break;
		}
		HX_STACK_LINE(340)
		pre = cur;
		HX_STACK_LINE(341)
		cur = cur->next;
	}
	HX_STACK_LINE(343)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,try_remove,return )

Void ZPP_Island_obj::inlined_remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_remove",0x22c5efc3,"zpp_nape.space.ZPP_Island.inlined_remove","zpp_nape/space/Space.hx",356,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(356)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			if (((cur == obj))){
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(356)
					if (((pre == null()))){
						HX_STACK_LINE(356)
						old = this->next;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						this->next = ret1;
						HX_STACK_LINE(356)
						if (((this->next == null()))){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(356)
						old = pre->next;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						pre->next = ret1;
						HX_STACK_LINE(356)
						if (((ret1 == null()))){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(356)
					old->_inuse = false;
					HX_STACK_LINE(356)
					this->modified = true;
					HX_STACK_LINE(356)
					(this->length)--;
					HX_STACK_LINE(356)
					this->pushmod = true;
					HX_STACK_LINE(356)
					ret1;
				}
				HX_STACK_LINE(356)
				ret = true;
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			pre = cur;
			HX_STACK_LINE(356)
			cur = cur->next;
		}
		HX_STACK_LINE(356)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_remove,(void))

bool ZPP_Island_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_try_remove",0x6fdd3107,"zpp_nape.space.ZPP_Island.inlined_try_remove","zpp_nape/space/Space.hx",360,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(369)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(370)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(371)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(372)
	while((true)){
		HX_STACK_LINE(372)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(372)
			break;
		}
		HX_STACK_LINE(373)
		if (((cur == obj))){
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(374)
				if (((pre == null()))){
					HX_STACK_LINE(374)
					old = this->next;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					this->next = ret1;
					HX_STACK_LINE(374)
					if (((this->next == null()))){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(374)
					old = pre->next;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					pre->next = ret1;
					HX_STACK_LINE(374)
					if (((ret1 == null()))){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(374)
				old->_inuse = false;
				HX_STACK_LINE(374)
				this->modified = true;
				HX_STACK_LINE(374)
				(this->length)--;
				HX_STACK_LINE(374)
				this->pushmod = true;
				HX_STACK_LINE(374)
				ret1;
			}
			HX_STACK_LINE(375)
			ret = true;
			HX_STACK_LINE(376)
			break;
		}
		HX_STACK_LINE(378)
		pre = cur;
		HX_STACK_LINE(379)
		cur = cur->next;
	}
	HX_STACK_LINE(381)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_try_remove,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","erase",0x9cb47fdb,"zpp_nape.space.ZPP_Island.erase","zpp_nape/space/Space.hx",384,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(384)
	::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(384)
	::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(384)
	if (((pre == null()))){
		HX_STACK_LINE(384)
		old = this->next;
		HX_STACK_LINE(384)
		ret = old->next;
		HX_STACK_LINE(384)
		this->next = ret;
		HX_STACK_LINE(384)
		if (((this->next == null()))){
			HX_STACK_LINE(384)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(384)
		old = pre->next;
		HX_STACK_LINE(384)
		ret = old->next;
		HX_STACK_LINE(384)
		pre->next = ret;
		HX_STACK_LINE(384)
		if (((ret == null()))){
			HX_STACK_LINE(384)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(384)
	old->_inuse = false;
	HX_STACK_LINE(384)
	this->modified = true;
	HX_STACK_LINE(384)
	(this->length)--;
	HX_STACK_LINE(384)
	this->pushmod = true;
	HX_STACK_LINE(384)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_erase",0x67c4ca47,"zpp_nape.space.ZPP_Island.inlined_erase","zpp_nape/space/Space.hx",388,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(397)
	::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(398)
	::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(399)
	if (((pre == null()))){
		HX_STACK_LINE(400)
		old = this->next;
		HX_STACK_LINE(401)
		ret = old->next;
		HX_STACK_LINE(402)
		this->next = ret;
		HX_STACK_LINE(403)
		if (((this->next == null()))){
			HX_STACK_LINE(403)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(406)
		old = pre->next;
		HX_STACK_LINE(407)
		ret = old->next;
		HX_STACK_LINE(408)
		pre->next = ret;
		HX_STACK_LINE(409)
		if (((ret == null()))){
			HX_STACK_LINE(409)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(412)
	old->_inuse = false;
	HX_STACK_LINE(415)
	this->modified = true;
	HX_STACK_LINE(416)
	(this->length)--;
	HX_STACK_LINE(417)
	this->pushmod = true;
	HX_STACK_LINE(418)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::splice( ::zpp_nape::space::ZPP_Island pre,int n){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","splice",0xfaab04e7,"zpp_nape.space.ZPP_Island.splice","zpp_nape/space/Space.hx",420,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(421)
	while((true)){
		HX_STACK_LINE(421)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(421)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(421)
			break;
		}
		HX_STACK_LINE(421)
		this->erase(pre);
	}
	HX_STACK_LINE(422)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,splice,return )

Void ZPP_Island_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","clear",0x71f30882,"zpp_nape.space.ZPP_Island.clear","zpp_nape/space/Space.hx",425,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,clear,(void))

Void ZPP_Island_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_clear",0x3d0352ee,"zpp_nape.space.ZPP_Island.inlined_clear","zpp_nape/space/Space.hx",430,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_clear,(void))

Void ZPP_Island_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","reverse",0x8adf3757,"zpp_nape.space.ZPP_Island.reverse","zpp_nape/space/Space.hx",435,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(437)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(438)
		while((true)){
			HX_STACK_LINE(438)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(438)
				break;
			}
			HX_STACK_LINE(439)
			::zpp_nape::space::ZPP_Island nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(440)
			cur->next = pre;
			HX_STACK_LINE(441)
			this->next = cur;
			HX_STACK_LINE(442)
			pre = cur;
			HX_STACK_LINE(443)
			cur = nx;
		}
		HX_STACK_LINE(445)
		this->modified = true;
		HX_STACK_LINE(446)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,reverse,(void))

bool ZPP_Island_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","empty",0x9971d182,"zpp_nape.space.ZPP_Island.empty","zpp_nape/space/Space.hx",451,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,empty,return )

int ZPP_Island_obj::size( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","size",0x2a12df6c,"zpp_nape.space.ZPP_Island.size","zpp_nape/space/Space.hx",456,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(456)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,size,return )

bool ZPP_Island_obj::has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","has",0x3cffbf0f,"zpp_nape.space.ZPP_Island.has","zpp_nape/space/Space.hx",459,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(459)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		ret = false;
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			::zpp_nape::space::ZPP_Island cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(459)
			while((true)){
				HX_STACK_LINE(459)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(459)
					break;
				}
				HX_STACK_LINE(459)
				::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(459)
				if (((npite == obj))){
					HX_STACK_LINE(459)
					ret = true;
					HX_STACK_LINE(459)
					break;
				}
				HX_STACK_LINE(459)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(459)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,has,return )

bool ZPP_Island_obj::inlined_has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_has",0x56aa567b,"zpp_nape.space.ZPP_Island.inlined_has","zpp_nape/space/Space.hx",463,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(472)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(473)
	{
		HX_STACK_LINE(474)
		ret = false;
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(476)
			::zpp_nape::space::ZPP_Island cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(477)
			while((true)){
				HX_STACK_LINE(477)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(477)
					break;
				}
				HX_STACK_LINE(478)
				::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(480)
				if (((npite == obj))){
					HX_STACK_LINE(481)
					ret = true;
					HX_STACK_LINE(482)
					break;
				}
				HX_STACK_LINE(485)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(489)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_has,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::front( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","front",0x3025af9e,"zpp_nape.space.ZPP_Island.front","zpp_nape/space/Space.hx",494,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,front,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::back( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","back",0x1ed018d2,"zpp_nape.space.ZPP_Island.back","zpp_nape/space/Space.hx",496,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(498)
	::zpp_nape::space::ZPP_Island cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(499)
	while((true)){
		HX_STACK_LINE(499)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(499)
			break;
		}
		HX_STACK_LINE(500)
		ret = cur;
		HX_STACK_LINE(501)
		cur = cur->next;
	}
	HX_STACK_LINE(503)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,back,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","iterator_at",0x5b494699,"zpp_nape.space.ZPP_Island.iterator_at","zpp_nape/space/Space.hx",505,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(514)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(515)
	while((true)){
		HX_STACK_LINE(515)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(515)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(515)
			break;
		}
		HX_STACK_LINE(515)
		ret = ret->next;
	}
	HX_STACK_LINE(516)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,iterator_at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","at",0x8a0802de,"zpp_nape.space.ZPP_Island.at","zpp_nape/space/Space.hx",518,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(527)
	::zpp_nape::space::ZPP_Island it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(528)
	if (((it != null()))){
		HX_STACK_LINE(528)
		return it;
	}
	else{
		HX_STACK_LINE(528)
		return null();
	}
	HX_STACK_LINE(528)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,at,return )

Void ZPP_Island_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","free",0x2181db57,"zpp_nape.space.ZPP_Island.free","zpp_nape/space/Space.hx",560,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,free,(void))

Void ZPP_Island_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","alloc",0x4b2b3b6a,"zpp_nape.space.ZPP_Island.alloc","zpp_nape/space/Space.hx",572,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(572)
		this->waket = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,alloc,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::zpp_pool;


ZPP_Island_obj::ZPP_Island_obj()
{
}

void ZPP_Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Island);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(comps,"comps");
	HX_MARK_MEMBER_NAME(sleep,"sleep");
	HX_MARK_MEMBER_NAME(waket,"waket");
	HX_MARK_END_CLASS();
}

void ZPP_Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(comps,"comps");
	HX_VISIT_MEMBER_NAME(sleep,"sleep");
	HX_VISIT_MEMBER_NAME(waket,"waket");
}

Dynamic ZPP_Island_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"comps") ) { return comps; }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep; }
		if (HX_FIELD_EQ(inName,"waket") ) { return waket; }
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
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

Dynamic ZPP_Island_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"comps") ) { comps=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep") ) { sleep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waket") ) { waket=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("comps"));
	outFields->push(HX_CSTRING("sleep"));
	outFields->push(HX_CSTRING("waket"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Island*/ ,(int)offsetof(ZPP_Island_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,_inuse),HX_CSTRING("_inuse")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZPP_Island_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Component*/ ,(int)offsetof(ZPP_Island_obj,comps),HX_CSTRING("comps")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,sleep),HX_CSTRING("sleep")},
	{hx::fsInt,(int)offsetof(ZPP_Island_obj,waket),HX_CSTRING("waket")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
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
	HX_CSTRING("comps"),
	HX_CSTRING("sleep"),
	HX_CSTRING("waket"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_Island_obj::__mClass;

void ZPP_Island_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_Island"), hx::TCanCast< ZPP_Island_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Island_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
