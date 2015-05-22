#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace nape{
namespace dynamics{

Void ContactList_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ContactList","new",0x4bb1d6dc,"nape.dynamics.ContactList.new","nape/dynamics/ContactList.hx",234,0xd6cc37f4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ContactList _g = ::zpp_nape::util::ZPP_ContactList_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(696)
	this->zpp_inner = _g;
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ContactList_obj::~ContactList_obj() { }

Dynamic ContactList_obj::__CreateEmpty() { return  new ContactList_obj; }
hx::ObjectPtr< ContactList_obj > ContactList_obj::__new()
{  hx::ObjectPtr< ContactList_obj > result = new ContactList_obj();
	result->__construct();
	return result;}

Dynamic ContactList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactList_obj > result = new ContactList_obj();
	result->__construct();
	return result;}

int ContactList_obj::get_length( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","get_length",0x6f0d05b3,"nape.dynamics.ContactList.get_length","nape/dynamics/ContactList.hx",244,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	this->zpp_inner->valmod();
	HX_STACK_LINE(246)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(247)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(249)
			this->zpp_inner->user_length = (int)0;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(252)
				while((true)){
					HX_STACK_LINE(252)
					if ((!(((cx_ite != null()))))){
						HX_STACK_LINE(252)
						break;
					}
					HX_STACK_LINE(253)
					::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(254)
					if (((bool(i->active) && bool(i->arbiter->active)))){
						HX_STACK_LINE(254)
						(this->zpp_inner->user_length)++;
					}
					HX_STACK_LINE(255)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(261)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,get_length,return )

bool ContactList_obj::has( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","has",0x4bad45d6,"nape.dynamics.ContactList.has","nape/dynamics/ContactList.hx",346,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	this->zpp_inner->valmod();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,has,return )

::nape::dynamics::Contact ContactList_obj::at( int index){
	HX_STACK_FRAME("nape.dynamics.ContactList","at",0x9593b1f7,"nape.dynamics.ContactList.at","nape/dynamics/ContactList.hx",363,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	this->zpp_inner->valmod();
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(370)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			this->zpp_inner->valmod();
			HX_STACK_LINE(370)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(370)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					this->zpp_inner->user_length = (int)0;
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(370)
						while((true)){
							HX_STACK_LINE(370)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(370)
								break;
							}
							HX_STACK_LINE(370)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(370)
							if (((bool(i->active) && bool(i->arbiter->active)))){
								HX_STACK_LINE(370)
								(this->zpp_inner->user_length)++;
							}
							HX_STACK_LINE(370)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(370)
			_g = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(370)
		int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		int _g2 = (_g1 - index);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(370)
		index = _g2;
	}
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(384)
		if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
			HX_STACK_LINE(385)
			this->zpp_inner->at_index = (int)0;
			HX_STACK_LINE(386)
			this->zpp_inner->at_ite = this->zpp_inner->inner->next;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Contact x = this->zpp_inner->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				if (((bool(x->active) && bool(x->arbiter->active)))){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			if ((!(((this->zpp_inner->at_index != index))))){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(395)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Contact x = this->zpp_inner->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				if (((bool(x->active) && bool(x->arbiter->active)))){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,at,return )

bool ContactList_obj::push( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","push",0xf148b7de,"nape.dynamics.ContactList.push","nape/dynamics/ContactList.hx",416,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(421)
	this->zpp_inner->valmod();
	HX_STACK_LINE(424)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(424)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(424)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(424)
		cont = true;
	}
	HX_STACK_LINE(425)
	if ((cont)){
		HX_STACK_LINE(426)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(426)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(428)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(428)
				::zpp_nape::dynamics::ZPP_Contact _g3;		HX_STACK_VAR(_g3,"_g3");
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::ContactList_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",428,0xd6cc37f4)
						{
							HX_STACK_LINE(428)
							int _g;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(428)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(428)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										__this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(428)
											while((true)){
												HX_STACK_LINE(428)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(428)
													break;
												}
												HX_STACK_LINE(428)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(428)
												if (((bool(i->active) && bool(i->arbiter->active)))){
													HX_STACK_LINE(428)
													(__this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(428)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(428)
								_g = __this->zpp_inner->user_length;
							}
							HX_STACK_LINE(428)
							return (_g == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				if ((_Function_4_1::Block(this))){
					HX_STACK_LINE(428)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(428)
					int _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						this->zpp_inner->valmod();
						HX_STACK_LINE(428)
						if ((this->zpp_inner->zip_length)){
							HX_STACK_LINE(428)
							this->zpp_inner->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(428)
									while((true)){
										HX_STACK_LINE(428)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(428)
											break;
										}
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(428)
										if (((bool(i->active) && bool(i->arbiter->active)))){
											HX_STACK_LINE(428)
											(this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(428)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(428)
						_g1 = this->zpp_inner->user_length;
					}
					HX_STACK_LINE(428)
					int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(428)
					_g3 = this->zpp_inner->inner->iterator_at(_g2);
				}
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = _g3;
			}
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact _g4 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = _g4;
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,push,return )

bool ContactList_obj::unshift( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","unshift",0x983cd805,"nape.dynamics.ContactList.unshift","nape/dynamics/ContactList.hx",447,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(452)
	this->zpp_inner->valmod();
	HX_STACK_LINE(455)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(455)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(455)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(455)
		cont = true;
	}
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(458)
				::zpp_nape::dynamics::ZPP_Contact _g3;		HX_STACK_VAR(_g3,"_g3");
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::ContactList_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",458,0xd6cc37f4)
						{
							HX_STACK_LINE(458)
							int _g;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(458)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(458)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(458)
									{
										HX_STACK_LINE(458)
										__this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(458)
										{
											HX_STACK_LINE(458)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(458)
											while((true)){
												HX_STACK_LINE(458)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(458)
													break;
												}
												HX_STACK_LINE(458)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(458)
												if (((bool(i->active) && bool(i->arbiter->active)))){
													HX_STACK_LINE(458)
													(__this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(458)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(458)
								_g = __this->zpp_inner->user_length;
							}
							HX_STACK_LINE(458)
							return (_g == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(458)
				if ((_Function_4_1::Block(this))){
					HX_STACK_LINE(458)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(458)
					int _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						this->zpp_inner->valmod();
						HX_STACK_LINE(458)
						if ((this->zpp_inner->zip_length)){
							HX_STACK_LINE(458)
							this->zpp_inner->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(458)
									while((true)){
										HX_STACK_LINE(458)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(458)
											break;
										}
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(458)
										if (((bool(i->active) && bool(i->arbiter->active)))){
											HX_STACK_LINE(458)
											(this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(458)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(458)
						_g1 = this->zpp_inner->user_length;
					}
					HX_STACK_LINE(458)
					int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(458)
					_g3 = this->zpp_inner->inner->iterator_at(_g2);
				}
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = _g3;
			}
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact _g4 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(459)
			this->zpp_inner->push_ite = _g4;
		}
		else{
			HX_STACK_LINE(461)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(462)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(463)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,unshift,return )

::nape::dynamics::Contact ContactList_obj::pop( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","pop",0x4bb3640d,"nape.dynamics.ContactList.pop","nape/dynamics/ContactList.hx",478,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(486)
	this->zpp_inner->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->next;
		HX_STACK_LINE(492)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(493)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(494)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(494)
			this->zpp_inner->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(497)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(498)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			this->zpp_inner->valmod();
			HX_STACK_LINE(498)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(498)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					this->zpp_inner->user_length = (int)0;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(498)
						while((true)){
							HX_STACK_LINE(498)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(498)
								break;
							}
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(498)
							if (((bool(i->active) && bool(i->arbiter->active)))){
								HX_STACK_LINE(498)
								(this->zpp_inner->user_length)++;
							}
							HX_STACK_LINE(498)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(498)
			_g = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(498)
		if (((_g == (int)1))){
			HX_STACK_LINE(498)
			ite = null();
		}
		else{
			HX_STACK_LINE(498)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				this->zpp_inner->valmod();
				HX_STACK_LINE(498)
				if ((this->zpp_inner->zip_length)){
					HX_STACK_LINE(498)
					this->zpp_inner->zip_length = false;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(498)
							while((true)){
								HX_STACK_LINE(498)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(498)
									break;
								}
								HX_STACK_LINE(498)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(498)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(498)
									(this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(498)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(498)
				_g1 = this->zpp_inner->user_length;
			}
			HX_STACK_LINE(498)
			int _g2 = (_g1 - (int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(498)
			ite = this->zpp_inner->inner->iterator_at(_g2);
		}
		HX_STACK_LINE(499)
		if (((ite == null()))){
			HX_STACK_LINE(499)
			ret = this->zpp_inner->inner->next;
		}
		else{
			HX_STACK_LINE(499)
			ret = ite->next;
		}
		HX_STACK_LINE(500)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(501)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(502)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(502)
			this->zpp_inner->inner->erase(ite);
		}
	}
	HX_STACK_LINE(504)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(505)
	::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,pop,return )

::nape::dynamics::Contact ContactList_obj::shift( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","shift",0xdfec89fe,"nape.dynamics.ContactList.shift","nape/dynamics/ContactList.hx",519,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(527)
	this->zpp_inner->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(533)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			this->zpp_inner->valmod();
			HX_STACK_LINE(533)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(533)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					this->zpp_inner->user_length = (int)0;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(533)
						while((true)){
							HX_STACK_LINE(533)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(533)
								break;
							}
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(533)
							if (((bool(i->active) && bool(i->arbiter->active)))){
								HX_STACK_LINE(533)
								(this->zpp_inner->user_length)++;
							}
							HX_STACK_LINE(533)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(533)
			_g = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(533)
		if (((_g == (int)1))){
			HX_STACK_LINE(533)
			ite = null();
		}
		else{
			HX_STACK_LINE(533)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				this->zpp_inner->valmod();
				HX_STACK_LINE(533)
				if ((this->zpp_inner->zip_length)){
					HX_STACK_LINE(533)
					this->zpp_inner->zip_length = false;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(533)
							while((true)){
								HX_STACK_LINE(533)
								if ((!(((cx_ite != null()))))){
									HX_STACK_LINE(533)
									break;
								}
								HX_STACK_LINE(533)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(533)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(533)
									(this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(533)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(533)
				_g1 = this->zpp_inner->user_length;
			}
			HX_STACK_LINE(533)
			int _g2 = (_g1 - (int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(533)
			ite = this->zpp_inner->inner->iterator_at(_g2);
		}
		HX_STACK_LINE(534)
		if (((ite == null()))){
			HX_STACK_LINE(534)
			ret = this->zpp_inner->inner->next;
		}
		else{
			HX_STACK_LINE(534)
			ret = ite->next;
		}
		HX_STACK_LINE(535)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(536)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(537)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(537)
			this->zpp_inner->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(540)
		ret = this->zpp_inner->inner->next;
		HX_STACK_LINE(541)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(542)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(543)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(543)
			this->zpp_inner->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(546)
	::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,shift,return )

bool ContactList_obj::add( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","add",0x4ba7f89d,"nape.dynamics.ContactList.add","nape/dynamics/ContactList.hx",564,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(564)
		return this->push(obj);
	}
	else{
		HX_STACK_LINE(564)
		return this->unshift(obj);
	}
	HX_STACK_LINE(564)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,add,return )

bool ContactList_obj::remove( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","remove",0xf128cb48,"nape.dynamics.ContactList.remove","nape/dynamics/ContactList.hx",576,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(581)
	this->zpp_inner->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::dynamics::ZPP_Contact x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(592)
				if (((x == obj->zpp_inner))){
					HX_STACK_LINE(593)
					ret = true;
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	if ((ret)){
		HX_STACK_LINE(602)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(602)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(603)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(603)
			this->zpp_inner->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(604)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,remove,return )

Void ContactList_obj::clear( ){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","clear",0xac250f09,"nape.dynamics.ContactList.clear","nape/dynamics/ContactList.hx",618,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(619)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::ContactList_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",619,0xd6cc37f4)
						{
							HX_STACK_LINE(619)
							int _g;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(619)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(619)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(619)
									{
										HX_STACK_LINE(619)
										__this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(619)
										{
											HX_STACK_LINE(619)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(619)
											while((true)){
												HX_STACK_LINE(619)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(619)
													break;
												}
												HX_STACK_LINE(619)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(619)
												if (((bool(i->active) && bool(i->arbiter->active)))){
													HX_STACK_LINE(619)
													(__this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(619)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(619)
								_g = __this->zpp_inner->user_length;
							}
							HX_STACK_LINE(619)
							return (_g == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(619)
				if ((!((!(_Function_3_1::Block(this)))))){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::ContactList_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",622,0xd6cc37f4)
						{
							HX_STACK_LINE(622)
							int _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(622)
							{
								HX_STACK_LINE(622)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(622)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(622)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(622)
									{
										HX_STACK_LINE(622)
										__this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(622)
										{
											HX_STACK_LINE(622)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(622)
											while((true)){
												HX_STACK_LINE(622)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(622)
													break;
												}
												HX_STACK_LINE(622)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(622)
												if (((bool(i->active) && bool(i->arbiter->active)))){
													HX_STACK_LINE(622)
													(__this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(622)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(622)
								_g1 = __this->zpp_inner->user_length;
							}
							HX_STACK_LINE(622)
							return (_g1 == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(622)
				if ((!((!(_Function_3_1::Block(this)))))){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,clear,(void))

bool ContactList_obj::empty( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","empty",0xd3a3d809,"nape.dynamics.ContactList.empty","nape/dynamics/ContactList.hx",632,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(632)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		this->zpp_inner->valmod();
		HX_STACK_LINE(632)
		if ((this->zpp_inner->zip_length)){
			HX_STACK_LINE(632)
			this->zpp_inner->zip_length = false;
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				this->zpp_inner->user_length = (int)0;
				HX_STACK_LINE(632)
				{
					HX_STACK_LINE(632)
					::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(632)
					while((true)){
						HX_STACK_LINE(632)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(632)
							break;
						}
						HX_STACK_LINE(632)
						::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(632)
						if (((bool(i->active) && bool(i->arbiter->active)))){
							HX_STACK_LINE(632)
							(this->zpp_inner->user_length)++;
						}
						HX_STACK_LINE(632)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
		HX_STACK_LINE(632)
		_g = this->zpp_inner->user_length;
	}
	HX_STACK_LINE(632)
	return (_g == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,empty,return )

::nape::dynamics::ContactIterator ContactList_obj::iterator( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","iterator",0x0be741f2,"nape.dynamics.ContactList.iterator","nape/dynamics/ContactList.hx",647,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	this->zpp_inner->valmod();
	HX_STACK_LINE(651)
	return ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,iterator,return )

::nape::dynamics::ContactList ContactList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.dynamics.ContactList","copy",0xe8ac61b9,"nape.dynamics.ContactList.copy","nape/dynamics/ContactList.hx",662,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::dynamics::ContactIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				this->zpp_inner->valmod();
				HX_STACK_LINE(664)
				_g = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::dynamics::ContactIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",664,0xd6cc37f4)
						{
							HX_STACK_LINE(664)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(664)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(664)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(664)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										_this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(664)
											while((true)){
												HX_STACK_LINE(664)
												if ((!(((cx_ite != null()))))){
													HX_STACK_LINE(664)
													break;
												}
												HX_STACK_LINE(664)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(664)
												if (((bool(i->active) && bool(i->arbiter->active)))){
													HX_STACK_LINE(664)
													(_this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(664)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(664)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(664)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::dynamics::ContactIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",664,0xd6cc37f4)
									{
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											_g->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
											HX_STACK_LINE(664)
											::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(664)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(664)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(664)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(664)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Contact i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(664)
					i = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(664)
				ret->push((  ((deep)) ? ::nape::dynamics::Contact(null()) : ::nape::dynamics::Contact(i) ));
			}
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,copy,return )

Void ContactList_obj::merge( ::nape::dynamics::ContactList xs){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","merge",0x69904034,"nape.dynamics.ContactList.merge","nape/dynamics/ContactList.hx",688,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(688)
		::nape::dynamics::ContactIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			xs->zpp_inner->valmod();
			HX_STACK_LINE(688)
			_g = ::nape::dynamics::ContactIterator_obj::get(xs);
		}
		HX_STACK_LINE(688)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( ::nape::dynamics::ContactIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",688,0xd6cc37f4)
					{
						HX_STACK_LINE(688)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(688)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(688)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(688)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(688)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(688)
								{
									HX_STACK_LINE(688)
									_this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(688)
										while((true)){
											HX_STACK_LINE(688)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(688)
												break;
											}
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(688)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(688)
												(_this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(688)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(688)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(688)
						_g->zpp_critical = true;
						struct _Function_3_1{
							inline static bool Block( ::nape::dynamics::ContactIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",688,0xd6cc37f4)
								{
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										_g->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
										HX_STACK_LINE(688)
										::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(688)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(688)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(688)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(688)
			if ((!(_Function_2_1::Block(_g)))){
				HX_STACK_LINE(688)
				break;
			}
			HX_STACK_LINE(688)
			::nape::dynamics::Contact x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				_g->zpp_critical = false;
				HX_STACK_LINE(688)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(688)
				x = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(689)
			if ((!(this->has(x)))){
				HX_STACK_LINE(689)
				if ((this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(689)
					this->push(x);
				}
				else{
					HX_STACK_LINE(689)
					this->unshift(x);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,merge,(void))

::String ContactList_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","toString",0xb0bbc8b0,"nape.dynamics.ContactList.toString","nape/dynamics/ContactList.hx",702,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::dynamics::ContactIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			this->zpp_inner->valmod();
			HX_STACK_LINE(705)
			_g = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::dynamics::ContactIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",705,0xd6cc37f4)
					{
						HX_STACK_LINE(705)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(705)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(705)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(705)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(705)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(705)
								{
									HX_STACK_LINE(705)
									_this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(705)
									{
										HX_STACK_LINE(705)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(705)
										while((true)){
											HX_STACK_LINE(705)
											if ((!(((cx_ite != null()))))){
												HX_STACK_LINE(705)
												break;
											}
											HX_STACK_LINE(705)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(705)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(705)
												(_this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(705)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(705)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(705)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::dynamics::ContactIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",705,0xd6cc37f4)
								{
									HX_STACK_LINE(705)
									{
										HX_STACK_LINE(705)
										_g->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
										HX_STACK_LINE(705)
										::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(705)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(705)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(705)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(705)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Contact i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(705)
				i = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(706)
			if ((!(fst))){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(707)
			::String _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			if (((i == null()))){
				HX_STACK_LINE(707)
				_g1 = HX_CSTRING("NULL");
			}
			else{
				HX_STACK_LINE(707)
				_g1 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,_g1);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,toString,return )

::nape::dynamics::ContactList ContactList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","foreach",0xf96df206,"nape.dynamics.ContactList.foreach","nape/dynamics/ContactList.hx",732,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator it;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		this->zpp_inner->valmod();
		HX_STACK_LINE(736)
		it = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(737)
	while((true)){
		struct _Function_2_1{
			inline static bool Block( ::nape::dynamics::ContactIterator &it){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",737,0xd6cc37f4)
				{
					HX_STACK_LINE(737)
					it->zpp_inner->zpp_inner->valmod();
					HX_STACK_LINE(737)
					int length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(737)
					{
						HX_STACK_LINE(737)
						::nape::dynamics::ContactList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(737)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(737)
						if ((_this->zpp_inner->zip_length)){
							HX_STACK_LINE(737)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(737)
							{
								HX_STACK_LINE(737)
								_this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(737)
									while((true)){
										HX_STACK_LINE(737)
										if ((!(((cx_ite != null()))))){
											HX_STACK_LINE(737)
											break;
										}
										HX_STACK_LINE(737)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(737)
										if (((bool(i->active) && bool(i->arbiter->active)))){
											HX_STACK_LINE(737)
											(_this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(737)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(737)
						length = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(737)
					it->zpp_critical = true;
					struct _Function_3_1{
						inline static bool Block( ::nape::dynamics::ContactIterator &it){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/ContactList.hx",737,0xd6cc37f4)
							{
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									it->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
									HX_STACK_LINE(737)
									::nape::dynamics::ContactIterator_obj::zpp_pool = it;
									HX_STACK_LINE(737)
									it->zpp_inner = null();
								}
								HX_STACK_LINE(737)
								return false;
							}
							return null();
						}
					};
					HX_STACK_LINE(737)
					return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(it)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(737)
		if ((!(_Function_2_1::Block(it)))){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::dynamics::Contact _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int _g = (it->zpp_i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(739)
				_g1 = it->zpp_inner->at(_g);
			}
			HX_STACK_LINE(739)
			lambda(_g1).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::dynamics::ContactIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,foreach,return )

::nape::dynamics::ContactList ContactList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","filter",0x71d54ebc,"nape.dynamics.ContactList.filter","nape/dynamics/ContactList.hx",779,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			this->zpp_inner->valmod();
			HX_STACK_LINE(784)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(784)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					this->zpp_inner->user_length = (int)0;
					HX_STACK_LINE(784)
					{
						HX_STACK_LINE(784)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(784)
						while((true)){
							HX_STACK_LINE(784)
							if ((!(((cx_ite != null()))))){
								HX_STACK_LINE(784)
								break;
							}
							HX_STACK_LINE(784)
							::zpp_nape::dynamics::ZPP_Contact i1 = cx_ite;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(784)
							if (((bool(i1->active) && bool(i1->arbiter->active)))){
								HX_STACK_LINE(784)
								(this->zpp_inner->user_length)++;
							}
							HX_STACK_LINE(784)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(784)
			_g = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(784)
		if ((!(((i < _g))))){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		::nape::dynamics::Contact x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				this->remove(x);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,filter,return )

::nape::dynamics::ContactList ContactList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.dynamics.ContactList","fromArray",0xa524634b,"nape.dynamics.ContactList.fromArray","nape/dynamics/ContactList.hx",304,0xd6cc37f4)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(310)
	::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			if ((!(((_g < array->length))))){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::dynamics::Contact i = array->__get(_g).StaticCast< ::nape::dynamics::Contact >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,fromArray,return )


ContactList_obj::ContactList_obj()
{
}

void ContactList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ContactList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ContactList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ContactList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ContactList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContactList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ContactList*/ ,(int)offsetof(ContactList_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_length"),
	HX_CSTRING("has"),
	HX_CSTRING("at"),
	HX_CSTRING("push"),
	HX_CSTRING("unshift"),
	HX_CSTRING("pop"),
	HX_CSTRING("shift"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("empty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("copy"),
	HX_CSTRING("merge"),
	HX_CSTRING("toString"),
	HX_CSTRING("foreach"),
	HX_CSTRING("filter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#endif

Class ContactList_obj::__mClass;

void ContactList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.ContactList"), hx::TCanCast< ContactList_obj> ,sStaticFields,sMemberFields,
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

void ContactList_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
