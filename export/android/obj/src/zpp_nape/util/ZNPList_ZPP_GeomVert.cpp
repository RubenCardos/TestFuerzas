#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","new",0x3d6117b4,"zpp_nape.util.ZNPList_ZPP_GeomVert.new","zpp_nape/util/Lists.hx",7681,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7691)
	this->length = (int)0;
	HX_STACK_LINE(7690)
	this->pushmod = false;
	HX_STACK_LINE(7689)
	this->modified = false;
	HX_STACK_LINE(7682)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_GeomVert_obj::~ZNPList_ZPP_GeomVert_obj() { }

Dynamic ZNPList_ZPP_GeomVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > ZNPList_ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","begin",0x40c2ae7d,"zpp_nape.util.ZNPList_ZPP_GeomVert.begin","zpp_nape/util/Lists.hx",7687,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7687)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,begin,return )

Void ZNPList_ZPP_GeomVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomVert i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","setbegin",0x6bc88b73,"zpp_nape.util.ZNPList_ZPP_GeomVert.setbegin","zpp_nape/util/Lists.hx",7694,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(7695)
		this->head = i;
		HX_STACK_LINE(7696)
		this->modified = true;
		HX_STACK_LINE(7697)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,setbegin,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","add",0x3d573975,"zpp_nape.util.ZNPList_ZPP_GeomVert.add","zpp_nape/util/Lists.hx",7700,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7700)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7700)
	{
		HX_STACK_LINE(7700)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7700)
		{
			HX_STACK_LINE(7700)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(7700)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert _g = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(7700)
				ret = _g;
			}
			else{
				HX_STACK_LINE(7700)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7700)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7700)
				ret->next = null();
			}
			HX_STACK_LINE(7700)
			Dynamic();
		}
		HX_STACK_LINE(7700)
		ret->elt = o;
		HX_STACK_LINE(7700)
		temp = ret;
	}
	HX_STACK_LINE(7700)
	temp->next = this->head;
	HX_STACK_LINE(7700)
	this->head = temp;
	HX_STACK_LINE(7700)
	this->modified = true;
	HX_STACK_LINE(7700)
	(this->length)++;
	HX_STACK_LINE(7700)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,add,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_add",0xbf9107e1,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_add","zpp_nape/util/Lists.hx",7704,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7713)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7713)
	{
		HX_STACK_LINE(7714)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7715)
		{
			HX_STACK_LINE(7716)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(7717)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert _g = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(7717)
				ret = _g;
			}
			else{
				HX_STACK_LINE(7723)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7724)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7725)
				ret->next = null();
			}
			HX_STACK_LINE(7730)
			Dynamic();
		}
		HX_STACK_LINE(7732)
		ret->elt = o;
		HX_STACK_LINE(7733)
		temp = ret;
	}
	HX_STACK_LINE(7735)
	temp->next = this->head;
	HX_STACK_LINE(7736)
	this->head = temp;
	HX_STACK_LINE(7737)
	this->modified = true;
	HX_STACK_LINE(7738)
	(this->length)++;
	HX_STACK_LINE(7739)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_add,return )

Void ZNPList_ZPP_GeomVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","addAll",0x6dba0eac,"zpp_nape.util.ZNPList_ZPP_GeomVert.addAll","zpp_nape/util/Lists.hx",7750,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(7751)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(7752)
		while((true)){
			HX_STACK_LINE(7752)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(7752)
				break;
			}
			HX_STACK_LINE(7753)
			::zpp_nape::geom::ZPP_GeomVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(7754)
			this->add(i);
			HX_STACK_LINE(7755)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","insert",0x6c9c4865,"zpp_nape.util.ZNPList_ZPP_GeomVert.insert","zpp_nape/util/Lists.hx",7760,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7760)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7760)
	{
		HX_STACK_LINE(7760)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7760)
		{
			HX_STACK_LINE(7760)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(7760)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert _g = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(7760)
				ret = _g;
			}
			else{
				HX_STACK_LINE(7760)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7760)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7760)
				ret->next = null();
			}
			HX_STACK_LINE(7760)
			Dynamic();
		}
		HX_STACK_LINE(7760)
		ret->elt = o;
		HX_STACK_LINE(7760)
		temp = ret;
	}
	HX_STACK_LINE(7760)
	if (((cur == null()))){
		HX_STACK_LINE(7760)
		temp->next = this->head;
		HX_STACK_LINE(7760)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7760)
		temp->next = cur->next;
		HX_STACK_LINE(7760)
		cur->next = temp;
	}
	HX_STACK_LINE(7760)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(7760)
	this->pushmod = _g1;
	HX_STACK_LINE(7760)
	(this->length)++;
	HX_STACK_LINE(7760)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_insert",0xc55a4579,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_insert","zpp_nape/util/Lists.hx",7764,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7773)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7773)
	{
		HX_STACK_LINE(7774)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7775)
		{
			HX_STACK_LINE(7776)
			if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(7777)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert _g = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(7777)
				ret = _g;
			}
			else{
				HX_STACK_LINE(7783)
				ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7784)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7785)
				ret->next = null();
			}
			HX_STACK_LINE(7790)
			Dynamic();
		}
		HX_STACK_LINE(7792)
		ret->elt = o;
		HX_STACK_LINE(7793)
		temp = ret;
	}
	HX_STACK_LINE(7795)
	if (((cur == null()))){
		HX_STACK_LINE(7796)
		temp->next = this->head;
		HX_STACK_LINE(7797)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7800)
		temp->next = cur->next;
		HX_STACK_LINE(7801)
		cur->next = temp;
	}
	HX_STACK_LINE(7803)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(7803)
	this->pushmod = _g1;
	HX_STACK_LINE(7804)
	(this->length)++;
	HX_STACK_LINE(7805)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,inlined_insert,return )

Void ZNPList_ZPP_GeomVert_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","pop",0x3d62a4e5,"zpp_nape.util.ZNPList_ZPP_GeomVert.pop","zpp_nape/util/Lists.hx",7808,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7808)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7808)
		this->head = ret->next;
		HX_STACK_LINE(7808)
		{
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7808)
			o->elt = null();
			HX_STACK_LINE(7808)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7808)
		if (((this->head == null()))){
			HX_STACK_LINE(7808)
			this->pushmod = true;
		}
		HX_STACK_LINE(7808)
		this->modified = true;
		HX_STACK_LINE(7808)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_pop",0xbf9c7351,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_pop","zpp_nape/util/Lists.hx",7812,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7821)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7822)
		this->head = ret->next;
		HX_STACK_LINE(7824)
		{
			HX_STACK_LINE(7825)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7834)
			o->elt = null();
			HX_STACK_LINE(7835)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(7836)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7841)
		if (((this->head == null()))){
			HX_STACK_LINE(7841)
			this->pushmod = true;
		}
		HX_STACK_LINE(7842)
		this->modified = true;
		HX_STACK_LINE(7843)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","pop_unsafe",0x66b38780,"zpp_nape.util.ZNPList_ZPP_GeomVert.pop_unsafe","zpp_nape/util/Lists.hx",7846,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7846)
	::zpp_nape::geom::ZPP_GeomVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7846)
	this->pop();
	HX_STACK_LINE(7846)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_pop_unsafe",0x46b79e94,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_pop_unsafe","zpp_nape/util/Lists.hx",7850,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7859)
	::zpp_nape::geom::ZPP_GeomVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7860)
	this->pop();
	HX_STACK_LINE(7861)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_GeomVert_obj::remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","remove",0xd347a170,"zpp_nape.util.ZNPList_ZPP_GeomVert.remove","zpp_nape/util/Lists.hx",7872,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7872)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7872)
		while((true)){
			HX_STACK_LINE(7872)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(7872)
				break;
			}
			HX_STACK_LINE(7872)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7872)
				{
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7872)
					if (((pre == null()))){
						HX_STACK_LINE(7872)
						old = this->head;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						this->head = ret1;
						HX_STACK_LINE(7872)
						if (((this->head == null()))){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7872)
						old = pre->next;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						pre->next = ret1;
						HX_STACK_LINE(7872)
						if (((ret1 == null()))){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7872)
					{
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7872)
						o->elt = null();
						HX_STACK_LINE(7872)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7872)
					this->modified = true;
					HX_STACK_LINE(7872)
					(this->length)--;
					HX_STACK_LINE(7872)
					this->pushmod = true;
					HX_STACK_LINE(7872)
					ret1;
				}
				HX_STACK_LINE(7872)
				ret = true;
				HX_STACK_LINE(7872)
				break;
			}
			HX_STACK_LINE(7872)
			pre = cur;
			HX_STACK_LINE(7872)
			cur = cur->next;
		}
		HX_STACK_LINE(7872)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,remove,(void))

bool ZNPList_ZPP_GeomVert_obj::try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","try_remove",0x7dddbd34,"zpp_nape.util.ZNPList_ZPP_GeomVert.try_remove","zpp_nape/util/Lists.hx",7874,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7883)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7884)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7885)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7886)
	while((true)){
		HX_STACK_LINE(7886)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(7886)
			break;
		}
		HX_STACK_LINE(7887)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7888)
			this->erase(pre);
			HX_STACK_LINE(7889)
			ret = true;
			HX_STACK_LINE(7890)
			break;
		}
		HX_STACK_LINE(7892)
		pre = cur;
		HX_STACK_LINE(7893)
		cur = cur->next;
	}
	HX_STACK_LINE(7895)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_remove",0x2c059e84,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_remove","zpp_nape/util/Lists.hx",7908,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7908)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7908)
		while((true)){
			HX_STACK_LINE(7908)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(7908)
				break;
			}
			HX_STACK_LINE(7908)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7908)
				{
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7908)
					if (((pre == null()))){
						HX_STACK_LINE(7908)
						old = this->head;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						this->head = ret1;
						HX_STACK_LINE(7908)
						if (((this->head == null()))){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7908)
						old = pre->next;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						pre->next = ret1;
						HX_STACK_LINE(7908)
						if (((ret1 == null()))){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7908)
					{
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7908)
						o->elt = null();
						HX_STACK_LINE(7908)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7908)
					this->modified = true;
					HX_STACK_LINE(7908)
					(this->length)--;
					HX_STACK_LINE(7908)
					this->pushmod = true;
					HX_STACK_LINE(7908)
					ret1;
				}
				HX_STACK_LINE(7908)
				ret = true;
				HX_STACK_LINE(7908)
				break;
			}
			HX_STACK_LINE(7908)
			pre = cur;
			HX_STACK_LINE(7908)
			cur = cur->next;
		}
		HX_STACK_LINE(7908)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_try_remove",0x5de1d448,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_try_remove","zpp_nape/util/Lists.hx",7912,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7921)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7922)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7923)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7924)
	while((true)){
		HX_STACK_LINE(7924)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(7924)
			break;
		}
		HX_STACK_LINE(7925)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7926)
			{
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7926)
				if (((pre == null()))){
					HX_STACK_LINE(7926)
					old = this->head;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					this->head = ret1;
					HX_STACK_LINE(7926)
					if (((this->head == null()))){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7926)
					old = pre->next;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					pre->next = ret1;
					HX_STACK_LINE(7926)
					if (((ret1 == null()))){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7926)
				{
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7926)
					o->elt = null();
					HX_STACK_LINE(7926)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7926)
				this->modified = true;
				HX_STACK_LINE(7926)
				(this->length)--;
				HX_STACK_LINE(7926)
				this->pushmod = true;
				HX_STACK_LINE(7926)
				ret1;
			}
			HX_STACK_LINE(7927)
			ret = true;
			HX_STACK_LINE(7928)
			break;
		}
		HX_STACK_LINE(7930)
		pre = cur;
		HX_STACK_LINE(7931)
		cur = cur->next;
	}
	HX_STACK_LINE(7933)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","erase",0x0389ad3a,"zpp_nape.util.ZNPList_ZPP_GeomVert.erase","zpp_nape/util/Lists.hx",7936,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7936)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7936)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7936)
	if (((pre == null()))){
		HX_STACK_LINE(7936)
		old = this->head;
		HX_STACK_LINE(7936)
		ret = old->next;
		HX_STACK_LINE(7936)
		this->head = ret;
		HX_STACK_LINE(7936)
		if (((this->head == null()))){
			HX_STACK_LINE(7936)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7936)
		old = pre->next;
		HX_STACK_LINE(7936)
		ret = old->next;
		HX_STACK_LINE(7936)
		pre->next = ret;
		HX_STACK_LINE(7936)
		if (((ret == null()))){
			HX_STACK_LINE(7936)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7936)
	{
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7936)
		o->elt = null();
		HX_STACK_LINE(7936)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7936)
	this->modified = true;
	HX_STACK_LINE(7936)
	(this->length)--;
	HX_STACK_LINE(7936)
	this->pushmod = true;
	HX_STACK_LINE(7936)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_erase",0xe2a4eea6,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_erase","zpp_nape/util/Lists.hx",7940,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7949)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7950)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7951)
	if (((pre == null()))){
		HX_STACK_LINE(7952)
		old = this->head;
		HX_STACK_LINE(7953)
		ret = old->next;
		HX_STACK_LINE(7954)
		this->head = ret;
		HX_STACK_LINE(7955)
		if (((this->head == null()))){
			HX_STACK_LINE(7955)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7958)
		old = pre->next;
		HX_STACK_LINE(7959)
		ret = old->next;
		HX_STACK_LINE(7960)
		pre->next = ret;
		HX_STACK_LINE(7961)
		if (((ret == null()))){
			HX_STACK_LINE(7961)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7964)
	{
		HX_STACK_LINE(7965)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7974)
		o->elt = null();
		HX_STACK_LINE(7975)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(7976)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7981)
	this->modified = true;
	HX_STACK_LINE(7982)
	(this->length)--;
	HX_STACK_LINE(7983)
	this->pushmod = true;
	HX_STACK_LINE(7984)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","splice",0x8e5d8aa8,"zpp_nape.util.ZNPList_ZPP_GeomVert.splice","zpp_nape/util/Lists.hx",7986,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(7987)
	while((true)){
		HX_STACK_LINE(7987)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(7987)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(7987)
			break;
		}
		HX_STACK_LINE(7987)
		this->erase(pre);
	}
	HX_STACK_LINE(7988)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,splice,return )

Void ZNPList_ZPP_GeomVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","clear",0xd8c835e1,"zpp_nape.util.ZNPList_ZPP_GeomVert.clear","zpp_nape/util/Lists.hx",7991,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7991)
		while((true)){
			HX_STACK_LINE(7991)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(7991)
				break;
			}
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7991)
			this->head = ret->next;
			HX_STACK_LINE(7991)
			{
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7991)
				o->elt = null();
				HX_STACK_LINE(7991)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7991)
			if (((this->head == null()))){
				HX_STACK_LINE(7991)
				this->pushmod = true;
			}
			HX_STACK_LINE(7991)
			this->modified = true;
			HX_STACK_LINE(7991)
			(this->length)--;
		}
		HX_STACK_LINE(7991)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,clear,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_clear",0xb7e3774d,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_clear","zpp_nape/util/Lists.hx",7996,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7997)
		while((true)){
			HX_STACK_LINE(7997)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(7997)
				break;
			}
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7997)
			this->head = ret->next;
			HX_STACK_LINE(7997)
			{
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7997)
				o->elt = null();
				HX_STACK_LINE(7997)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7997)
			if (((this->head == null()))){
				HX_STACK_LINE(7997)
				this->pushmod = true;
			}
			HX_STACK_LINE(7997)
			this->modified = true;
			HX_STACK_LINE(7997)
			(this->length)--;
		}
		HX_STACK_LINE(7998)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomVert_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","reverse",0x3361ba76,"zpp_nape.util.ZNPList_ZPP_GeomVert.reverse","zpp_nape/util/Lists.hx",8001,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8002)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8003)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8004)
		while((true)){
			HX_STACK_LINE(8004)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(8004)
				break;
			}
			HX_STACK_LINE(8005)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8006)
			cur->next = pre;
			HX_STACK_LINE(8007)
			this->head = cur;
			HX_STACK_LINE(8008)
			pre = cur;
			HX_STACK_LINE(8009)
			cur = nx;
		}
		HX_STACK_LINE(8011)
		this->modified = true;
		HX_STACK_LINE(8012)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,reverse,(void))

bool ZNPList_ZPP_GeomVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","empty",0x0046fee1,"zpp_nape.util.ZNPList_ZPP_GeomVert.empty","zpp_nape/util/Lists.hx",8017,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8017)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,empty,return )

int ZNPList_ZPP_GeomVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","size",0x7ae4c2ed,"zpp_nape.util.ZNPList_ZPP_GeomVert.size","zpp_nape/util/Lists.hx",8022,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8022)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,size,return )

bool ZNPList_ZPP_GeomVert_obj::has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","has",0x3d5c86ae,"zpp_nape.util.ZNPList_ZPP_GeomVert.has","zpp_nape/util/Lists.hx",8025,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8025)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8025)
	{
		HX_STACK_LINE(8025)
		ret = false;
		HX_STACK_LINE(8025)
		{
			HX_STACK_LINE(8025)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8025)
			while((true)){
				HX_STACK_LINE(8025)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(8025)
					break;
				}
				HX_STACK_LINE(8025)
				::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8025)
				if (((npite == obj))){
					HX_STACK_LINE(8025)
					ret = true;
					HX_STACK_LINE(8025)
					break;
				}
				HX_STACK_LINE(8025)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8025)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,has,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_has",0xbf96551a,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_has","zpp_nape/util/Lists.hx",8029,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8038)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8039)
	{
		HX_STACK_LINE(8040)
		ret = false;
		HX_STACK_LINE(8041)
		{
			HX_STACK_LINE(8042)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8043)
			while((true)){
				HX_STACK_LINE(8043)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(8043)
					break;
				}
				HX_STACK_LINE(8044)
				::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8046)
				if (((npite == obj))){
					HX_STACK_LINE(8047)
					ret = true;
					HX_STACK_LINE(8048)
					break;
				}
				HX_STACK_LINE(8051)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8055)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_has,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","front",0x96fadcfd,"zpp_nape.util.ZNPList_ZPP_GeomVert.front","zpp_nape/util/Lists.hx",8060,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8060)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,front,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","back",0x6fa1fc53,"zpp_nape.util.ZNPList_ZPP_GeomVert.back","zpp_nape/util/Lists.hx",8062,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8063)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8064)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8065)
	while((true)){
		HX_STACK_LINE(8065)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(8065)
			break;
		}
		HX_STACK_LINE(8066)
		ret = cur;
		HX_STACK_LINE(8067)
		cur = cur->next;
	}
	HX_STACK_LINE(8069)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","iterator_at",0xc4354538,"zpp_nape.util.ZNPList_ZPP_GeomVert.iterator_at","zpp_nape/util/Lists.hx",8071,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8080)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8081)
	while((true)){
		HX_STACK_LINE(8081)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8081)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(8081)
			break;
		}
		HX_STACK_LINE(8081)
		ret = ret->next;
	}
	HX_STACK_LINE(8082)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","at",0x9eb2541f,"zpp_nape.util.ZNPList_ZPP_GeomVert.at","zpp_nape/util/Lists.hx",8084,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8093)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8094)
	if (((it != null()))){
		HX_STACK_LINE(8094)
		return it->elt;
	}
	else{
		HX_STACK_LINE(8094)
		return null();
	}
	HX_STACK_LINE(8094)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,at,return )


ZNPList_ZPP_GeomVert_obj::ZNPList_ZPP_GeomVert_obj()
{
}

void ZNPList_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomVert >(); return inValue; }
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

void ZNPList_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomVert*/ ,(int)offsetof(ZNPList_ZPP_GeomVert_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomVert_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomVert_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_GeomVert_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_GeomVert_obj::__mClass;

void ZNPList_ZPP_GeomVert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomVert"), hx::TCanCast< ZNPList_ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_GeomVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
