#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_MarchPair
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchingSquares_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","new",0x1c7c9df3,"zpp_nape.geom.ZPP_MarchingSquares.new","zpp_nape/geom/MarchingSquares.hx",272,0xc3305538)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ZPP_MarchingSquares_obj::~ZPP_MarchingSquares_obj() { }

Dynamic ZPP_MarchingSquares_obj::__CreateEmpty() { return  new ZPP_MarchingSquares_obj; }
hx::ObjectPtr< ZPP_MarchingSquares_obj > ZPP_MarchingSquares_obj::__new()
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Void ZPP_MarchingSquares_obj::output( ::nape::geom::GeomPolyList ret,::zpp_nape::geom::ZPP_GeomVert poly){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","output",0xdb40bf4e,"zpp_nape.geom.ZPP_MarchingSquares.output","zpp_nape/geom/MarchingSquares.hx",662,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_ARG(poly,"poly")
		struct _Function_1_1{
			inline static bool Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",667,0xc3305538)
				{
					HX_STACK_LINE(668)
					Float a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(668)
					{
						HX_STACK_LINE(693)
						Float area = 0.0;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(694)
						{
							HX_STACK_LINE(695)
							::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
							HX_STACK_LINE(697)
							if (((F != null()))){
								HX_STACK_LINE(698)
								::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
								HX_STACK_LINE(699)
								while((true)){
									HX_STACK_LINE(700)
									::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(703)
									hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
									HX_STACK_LINE(706)
									nite = nite->next;
									HX_STACK_LINE(699)
									if ((!(((nite != L))))){
										HX_STACK_LINE(699)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(711)
						a = (area * 0.5);
					}
					HX_STACK_LINE(713)
					return ((a * a) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon));
				}
				return null();
			}
		};
		HX_STACK_LINE(663)
		if (((  (((bool((bool((poly == null())) || bool((poly->next == poly)))) || bool((poly->next == poly->prev))))) ? bool(true) : bool(_Function_1_1::Block(poly)) ))){
			HX_STACK_LINE(717)
			while((true)){
				HX_STACK_LINE(717)
				if ((!((!(((poly == null()))))))){
					HX_STACK_LINE(717)
					break;
				}
				HX_STACK_LINE(726)
				::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(726)
				if (((bool((poly != null())) && bool((poly->prev == poly))))){
					HX_STACK_LINE(727)
					::zpp_nape::geom::ZPP_GeomVert _g = poly->prev = null();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(727)
					poly->next = _g;
					HX_STACK_LINE(729)
					_g2 = poly = null();
				}
				else{
					HX_STACK_LINE(732)
					::zpp_nape::geom::ZPP_GeomVert retnodes = poly->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(733)
					poly->prev->next = poly->next;
					HX_STACK_LINE(734)
					poly->next->prev = poly->prev;
					HX_STACK_LINE(735)
					::zpp_nape::geom::ZPP_GeomVert _g1 = poly->prev = null();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(735)
					poly->next = _g1;
					HX_STACK_LINE(737)
					poly = null();
					HX_STACK_LINE(738)
					_g2 = retnodes;
				}
				HX_STACK_LINE(717)
				poly = _g2;
			}
			HX_STACK_LINE(742)
			return null();
		}
		HX_STACK_LINE(744)
		::nape::geom::GeomPoly gp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(745)
		gp->zpp_inner->vertices = poly;
		HX_STACK_LINE(746)
		if ((ret->zpp_inner->reverse_flag)){
			HX_STACK_LINE(746)
			ret->push(gp);
		}
		else{
			HX_STACK_LINE(746)
			ret->unshift(gp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,output,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkright( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkright",0x3e698775,"zpp_nape.geom.ZPP_MarchingSquares.linkright","zpp_nape/geom/MarchingSquares.hx",750,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(751)
	int kind = (int(key) & int((int)7));		HX_STACK_VAR(kind,"kind");
	HX_STACK_LINE(752)
	if (((kind == (int)0))){
		HX_STACK_LINE(752)
		return poly;
	}
	else{
		HX_STACK_LINE(753)
		if (((kind == (int)3))){
			HX_STACK_LINE(753)
			return poly->next->next;
		}
		else{
			HX_STACK_LINE(754)
			return poly->next;
		}
	}
	HX_STACK_LINE(752)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkright,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkleft( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkleft",0xd0adc28e,"zpp_nape.geom.ZPP_MarchingSquares.linkleft","zpp_nape/geom/MarchingSquares.hx",759,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(759)
	if (((((int(key) & int((int)1))) == (int)0))){
		HX_STACK_LINE(759)
		return poly->prev;
	}
	else{
		HX_STACK_LINE(759)
		return poly;
	}
	HX_STACK_LINE(759)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkleft,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkdown( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkdown",0xcb6bb2e9,"zpp_nape.geom.ZPP_MarchingSquares.linkdown","zpp_nape/geom/MarchingSquares.hx",764,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(764)
	if (((((int(key) & int((int)128))) == (int)0))){
		HX_STACK_LINE(764)
		return poly->prev;
	}
	else{
		HX_STACK_LINE(764)
		return poly->prev->prev;
	}
	HX_STACK_LINE(764)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkdown,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkup( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkup",0xbb64a122,"zpp_nape.geom.ZPP_MarchingSquares.linkup","zpp_nape/geom/MarchingSquares.hx",769,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(769)
	return poly;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkup,return )

Void ZPP_MarchingSquares_obj::combLR( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combLR",0x95e5ae14,"zpp_nape.geom.ZPP_MarchingSquares.combLR","zpp_nape/geom/MarchingSquares.hx",771,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(772)
		::zpp_nape::geom::ZPP_GeomVert ap;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(772)
			::zpp_nape::geom::ZPP_GeomVert poly = a->pr;		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(772)
			int kind = (int(a->okeyr) & int((int)7));		HX_STACK_VAR(kind,"kind");
			HX_STACK_LINE(772)
			if (((kind == (int)0))){
				HX_STACK_LINE(772)
				ap = poly;
			}
			else{
				HX_STACK_LINE(772)
				if (((kind == (int)3))){
					HX_STACK_LINE(772)
					ap = poly->next->next;
				}
				else{
					HX_STACK_LINE(772)
					ap = poly->next;
				}
			}
		}
		HX_STACK_LINE(773)
		::zpp_nape::geom::ZPP_GeomVert bp;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_GeomVert poly = b->p1;		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(773)
			if (((((int(b->okey1) & int((int)1))) == (int)0))){
				HX_STACK_LINE(773)
				bp = poly->prev;
			}
			else{
				HX_STACK_LINE(773)
				bp = poly;
			}
		}
		HX_STACK_LINE(774)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->next;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(775)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->prev;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(776)
		if (((((int(a->keyr) & int((int)4))) != (int)0))){
			HX_STACK_LINE(777)
			if (((b->pr == b->p1))){
				HX_STACK_LINE(777)
				b->pr = ap->prev;
			}
			HX_STACK_LINE(778)
			b->p1 = ap->prev;
			HX_STACK_LINE(779)
			ap->prev->next = bp->next;
			HX_STACK_LINE(780)
			bp->next->prev = ap->prev;
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(782)
				::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					if (((o->wrap != null()))){
						HX_STACK_LINE(791)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(791)
						{
							HX_STACK_LINE(791)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(791)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(791)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(791)
							_this->zpp_inner = null();
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
								HX_STACK_LINE(791)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								{
									HX_STACK_LINE(791)
									if (((o1->outer != null()))){
										HX_STACK_LINE(791)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(791)
										o1->outer = null();
									}
									HX_STACK_LINE(791)
									o1->_isimmutable = null();
									HX_STACK_LINE(791)
									o1->_validate = null();
									HX_STACK_LINE(791)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(791)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(791)
						o->wrap = null();
					}
					HX_STACK_LINE(791)
					::zpp_nape::geom::ZPP_GeomVert _g = o->next = null();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(791)
					o->prev = _g;
				}
				HX_STACK_LINE(792)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(793)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(800)
			ap->next = bp->next;
			HX_STACK_LINE(801)
			bp->next->prev = ap;
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(804)
			::zpp_nape::geom::ZPP_GeomVert o = bp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(813)
			{
				HX_STACK_LINE(813)
				if (((o->wrap != null()))){
					HX_STACK_LINE(813)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(813)
					{
						HX_STACK_LINE(813)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(813)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(813)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(813)
						_this->zpp_inner = null();
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(813)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							{
								HX_STACK_LINE(813)
								if (((o1->outer != null()))){
									HX_STACK_LINE(813)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(813)
									o1->outer = null();
								}
								HX_STACK_LINE(813)
								o1->_isimmutable = null();
								HX_STACK_LINE(813)
								o1->_validate = null();
								HX_STACK_LINE(813)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(813)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(813)
					o->wrap = null();
				}
				HX_STACK_LINE(813)
				::zpp_nape::geom::ZPP_GeomVert _g1 = o->next = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(813)
				o->prev = _g1;
			}
			HX_STACK_LINE(814)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(815)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(820)
		if (((((int(a->keyr) & int((int)16))) != (int)0))){
			HX_STACK_LINE(821)
			b->pd = ap2->next;
			HX_STACK_LINE(822)
			ap2->next->prev = bp2->prev;
			HX_STACK_LINE(823)
			bp2->prev->next = ap2->next;
			HX_STACK_LINE(824)
			{
				HX_STACK_LINE(825)
				::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(834)
				{
					HX_STACK_LINE(834)
					if (((o->wrap != null()))){
						HX_STACK_LINE(834)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(834)
						{
							HX_STACK_LINE(834)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(834)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(834)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(834)
							_this->zpp_inner = null();
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
								HX_STACK_LINE(834)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								{
									HX_STACK_LINE(834)
									if (((o1->outer != null()))){
										HX_STACK_LINE(834)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(834)
										o1->outer = null();
									}
									HX_STACK_LINE(834)
									o1->_isimmutable = null();
									HX_STACK_LINE(834)
									o1->_validate = null();
									HX_STACK_LINE(834)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(834)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(834)
						o->wrap = null();
					}
					HX_STACK_LINE(834)
					::zpp_nape::geom::ZPP_GeomVert _g2 = o->next = null();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(834)
					o->prev = _g2;
				}
				HX_STACK_LINE(835)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(836)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(843)
			ap2->prev = bp2->prev;
			HX_STACK_LINE(844)
			bp2->prev->next = ap2;
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(847)
			::zpp_nape::geom::ZPP_GeomVert o = bp2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				if (((o->wrap != null()))){
					HX_STACK_LINE(856)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(856)
					{
						HX_STACK_LINE(856)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(856)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(856)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(856)
						_this->zpp_inner = null();
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(856)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							{
								HX_STACK_LINE(856)
								if (((o1->outer != null()))){
									HX_STACK_LINE(856)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(856)
									o1->outer = null();
								}
								HX_STACK_LINE(856)
								o1->_isimmutable = null();
								HX_STACK_LINE(856)
								o1->_validate = null();
								HX_STACK_LINE(856)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(856)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(856)
					o->wrap = null();
				}
				HX_STACK_LINE(856)
				::zpp_nape::geom::ZPP_GeomVert _g3 = o->next = null();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(856)
				o->prev = _g3;
			}
			HX_STACK_LINE(857)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(858)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combLR,(void))

Void ZPP_MarchingSquares_obj::combUD( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUD",0x95e5b5dd,"zpp_nape.geom.ZPP_MarchingSquares.combUD","zpp_nape/geom/MarchingSquares.hx",864,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_GeomVert ad;		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(865)
		if (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))){
			HX_STACK_LINE(865)
			ad = a->p2;
		}
		else{
			HX_STACK_LINE(865)
			ad = a->p1;
		}
		HX_STACK_LINE(866)
		::zpp_nape::geom::ZPP_GeomVert bu;		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(866)
		if (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))){
			HX_STACK_LINE(866)
			bu = b->p2;
		}
		else{
			HX_STACK_LINE(866)
			bu = b->p1;
		}
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(868)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(869)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(870)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(871)
		bp->next = ap->next;
		HX_STACK_LINE(872)
		ap->next->prev = bp;
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(874)
			::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(883)
			{
				HX_STACK_LINE(883)
				if (((o->wrap != null()))){
					HX_STACK_LINE(883)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(883)
					{
						HX_STACK_LINE(883)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(883)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(883)
						_this->zpp_inner = null();
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(883)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								if (((o1->outer != null()))){
									HX_STACK_LINE(883)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(883)
									o1->outer = null();
								}
								HX_STACK_LINE(883)
								o1->_isimmutable = null();
								HX_STACK_LINE(883)
								o1->_validate = null();
								HX_STACK_LINE(883)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(883)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(883)
					o->wrap = null();
				}
				HX_STACK_LINE(883)
				::zpp_nape::geom::ZPP_GeomVert _g = o->next = null();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(883)
				o->prev = _g;
			}
			HX_STACK_LINE(884)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(885)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(890)
		bp2->prev = ap2->prev;
		HX_STACK_LINE(891)
		ap2->prev->next = bp2;
		HX_STACK_LINE(892)
		if (((ap2 == a->p1))){
			HX_STACK_LINE(892)
			a->p1 = bp2;
		}
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(894)
			::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				if (((o->wrap != null()))){
					HX_STACK_LINE(903)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(903)
					{
						HX_STACK_LINE(903)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(903)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(903)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(903)
						_this->zpp_inner = null();
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(903)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							{
								HX_STACK_LINE(903)
								if (((o1->outer != null()))){
									HX_STACK_LINE(903)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(903)
									o1->outer = null();
								}
								HX_STACK_LINE(903)
								o1->_isimmutable = null();
								HX_STACK_LINE(903)
								o1->_validate = null();
								HX_STACK_LINE(903)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(903)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(903)
					o->wrap = null();
				}
				HX_STACK_LINE(903)
				::zpp_nape::geom::ZPP_GeomVert _g1 = o->next = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(903)
				o->prev = _g1;
			}
			HX_STACK_LINE(904)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(905)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD,(void))

Void ZPP_MarchingSquares_obj::combUD_virtual( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUD_virtual",0x9d545269,"zpp_nape.geom.ZPP_MarchingSquares.combUD_virtual","zpp_nape/geom/MarchingSquares.hx",911,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_GeomVert ad;		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(912)
		if (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))){
			HX_STACK_LINE(912)
			ad = a->p2;
		}
		else{
			HX_STACK_LINE(912)
			ad = a->p1;
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_GeomVert bu;		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(913)
		if (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))){
			HX_STACK_LINE(913)
			bu = b->p2;
		}
		else{
			HX_STACK_LINE(913)
			bu = b->p1;
		}
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(915)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(916)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(917)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(918)
		bool _g = bp2->forced = true;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(918)
		bool _g1 = ap2->forced = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(918)
		bool _g2 = bp->forced = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(918)
		ap->forced = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD_virtual,(void))

bool ZPP_MarchingSquares_obj::combLeft( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combLeft",0x1d4b1f35,"zpp_nape.geom.ZPP_MarchingSquares.combLeft","zpp_nape/geom/MarchingSquares.hx",922,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(923)
	int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(924)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(924)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(924)
		(cnt)++;
	}
	HX_STACK_LINE(924)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(924)
		(cnt)++;
	}
	HX_STACK_LINE(924)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(924)
		(cnt)++;
	}
	HX_STACK_LINE(924)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combLeft,return )

bool ZPP_MarchingSquares_obj::combRight( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combRight",0xfb7d3cee,"zpp_nape.geom.ZPP_MarchingSquares.combRight","zpp_nape/geom/MarchingSquares.hx",928,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(929)
	int flag = (int(((int(key) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(930)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(930)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(930)
		(cnt)++;
	}
	HX_STACK_LINE(930)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(930)
		(cnt)++;
	}
	HX_STACK_LINE(930)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(930)
		(cnt)++;
	}
	HX_STACK_LINE(930)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combRight,return )

bool ZPP_MarchingSquares_obj::combUp( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUp",0x95e5b609,"zpp_nape.geom.ZPP_MarchingSquares.combUp","zpp_nape/geom/MarchingSquares.hx",934,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(935)
	int flag = (int(key) & int((int)7));		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(936)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(936)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(936)
		(cnt)++;
	}
	HX_STACK_LINE(936)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(936)
		(cnt)++;
	}
	HX_STACK_LINE(936)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(936)
		(cnt)++;
	}
	HX_STACK_LINE(936)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combUp,return )

bool ZPP_MarchingSquares_obj::combDown( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combDown",0x18090f90,"zpp_nape.geom.ZPP_MarchingSquares.combDown","zpp_nape/geom/MarchingSquares.hx",940,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(941)
	int flag = (int(((int(key) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(942)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(942)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(942)
		(cnt)++;
	}
	HX_STACK_LINE(942)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(942)
		(cnt)++;
	}
	HX_STACK_LINE(942)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(942)
		(cnt)++;
	}
	HX_STACK_LINE(942)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combDown,return )

bool ZPP_MarchingSquares_obj::comb( int flag){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","comb",0xc94fcc0e,"zpp_nape.geom.ZPP_MarchingSquares.comb","zpp_nape/geom/MarchingSquares.hx",946,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_LINE(947)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(948)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(948)
		(cnt)++;
	}
	HX_STACK_LINE(949)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(949)
		(cnt)++;
	}
	HX_STACK_LINE(950)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(950)
		(cnt)++;
	}
	HX_STACK_LINE(951)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,comb,return )

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchingSquares_obj::marchSquare( Dynamic iso,::zpp_nape::util::ZNPArray2_Float isos,::zpp_nape::util::ZNPArray2_ZPP_GeomVert ints,Float x0,Float y0,Float x1,Float y1,int xn,int yn,bool fstx,bool fsty,bool sndx,bool sndy,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","marchSquare",0x3109c653,"zpp_nape.geom.ZPP_MarchingSquares.marchSquare","zpp_nape/geom/MarchingSquares.hx",954,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(isos,"isos")
	HX_STACK_ARG(ints,"ints")
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(xn,"xn")
	HX_STACK_ARG(yn,"yn")
	HX_STACK_ARG(fstx,"fstx")
	HX_STACK_ARG(fsty,"fsty")
	HX_STACK_ARG(sndx,"sndx")
	HX_STACK_ARG(sndy,"sndy")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(955)
	int key = (int)0;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(956)
	Float v0 = isos->list->__get(((yn * isos->width) + xn));		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(957)
	if (((v0 < (int)0))){
		HX_STACK_LINE(957)
		hx::OrEq(key,(int)8);
	}
	HX_STACK_LINE(958)
	Float v1 = isos->list->__get(((yn * isos->width) + ((xn + (int)1))));		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(959)
	if (((v1 < (int)0))){
		HX_STACK_LINE(959)
		hx::OrEq(key,(int)4);
	}
	HX_STACK_LINE(960)
	Float v2 = isos->list->__get(((((yn + (int)1)) * isos->width) + ((xn + (int)1))));		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(961)
	if (((v2 < (int)0))){
		HX_STACK_LINE(961)
		hx::OrEq(key,(int)2);
	}
	HX_STACK_LINE(962)
	Float v3 = isos->list->__get(((((yn + (int)1)) * isos->width) + xn));		HX_STACK_VAR(v3,"v3");
	HX_STACK_LINE(963)
	if (((v3 < (int)0))){
		HX_STACK_LINE(963)
		hx::OrEq(key,(int)1);
	}
	HX_STACK_LINE(964)
	if (((key == (int)0))){
		HX_STACK_LINE(964)
		return null();
	}
	else{
		HX_STACK_LINE(966)
		::zpp_nape::geom::ZPP_MarchPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(968)
			if (((::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(969)
				::zpp_nape::geom::ZPP_MarchPair _g = ::zpp_nape::geom::ZPP_MarchPair_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(969)
				ret = _g;
			}
			else{
				HX_STACK_LINE(975)
				ret = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(977)
				ret->next = null();
			}
			HX_STACK_LINE(982)
			Dynamic();
		}
		HX_STACK_LINE(984)
		if (((bool((key != (int)10)) && bool((key != (int)5))))){
			HX_STACK_LINE(985)
			int val = ::zpp_nape::geom::ZPP_MarchingSquares_obj::look_march->__get(key);		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(986)
			{
				HX_STACK_LINE(987)
				ret->okey1 = val;
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(988)
					while((true)){
						HX_STACK_LINE(988)
						if ((!(((_g < (int)8))))){
							HX_STACK_LINE(988)
							break;
						}
						HX_STACK_LINE(988)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(989)
						if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
							HX_STACK_LINE(990)
							::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(991)
							if (((i == (int)0))){
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(992)
								{
									HX_STACK_LINE(992)
									::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(992)
									{
										HX_STACK_LINE(992)
										if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert _g1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(992)
											ret1 = _g1;
										}
										else{
											HX_STACK_LINE(992)
											ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(992)
											ret1->next = null();
										}
										HX_STACK_LINE(992)
										ret1->forced = false;
									}
									HX_STACK_LINE(992)
									{
										HX_STACK_LINE(992)
										ret1->x = x0;
										HX_STACK_LINE(992)
										ret1->y = y0;
										HX_STACK_LINE(992)
										{
										}
									}
									HX_STACK_LINE(992)
									_g2 = ret1;
								}
								HX_STACK_LINE(992)
								p = _g2;
								HX_STACK_LINE(993)
								if (((bool(fstx) || bool(fsty)))){
									HX_STACK_LINE(993)
									p->forced = true;
								}
							}
							else{
								HX_STACK_LINE(995)
								if (((i == (int)2))){
									HX_STACK_LINE(996)
									::zpp_nape::geom::ZPP_GeomVert _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(996)
									{
										HX_STACK_LINE(996)
										::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(996)
										{
											HX_STACK_LINE(996)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert _g3 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(996)
												ret1 = _g3;
											}
											else{
												HX_STACK_LINE(996)
												ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(996)
												ret1->next = null();
											}
											HX_STACK_LINE(996)
											ret1->forced = false;
										}
										HX_STACK_LINE(996)
										{
											HX_STACK_LINE(996)
											ret1->x = x1;
											HX_STACK_LINE(996)
											ret1->y = y0;
											HX_STACK_LINE(996)
											{
											}
										}
										HX_STACK_LINE(996)
										_g4 = ret1;
									}
									HX_STACK_LINE(996)
									p = _g4;
									HX_STACK_LINE(997)
									if (((bool(sndx) || bool(fsty)))){
										HX_STACK_LINE(997)
										p->forced = true;
									}
								}
								else{
									HX_STACK_LINE(999)
									if (((i == (int)4))){
										HX_STACK_LINE(1000)
										::zpp_nape::geom::ZPP_GeomVert _g6;		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(1000)
										{
											HX_STACK_LINE(1000)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1000)
											{
												HX_STACK_LINE(1000)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert _g5 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(1000)
													ret1 = _g5;
												}
												else{
													HX_STACK_LINE(1000)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1000)
													ret1->next = null();
												}
												HX_STACK_LINE(1000)
												ret1->forced = false;
											}
											HX_STACK_LINE(1000)
											{
												HX_STACK_LINE(1000)
												ret1->x = x1;
												HX_STACK_LINE(1000)
												ret1->y = y1;
												HX_STACK_LINE(1000)
												{
												}
											}
											HX_STACK_LINE(1000)
											_g6 = ret1;
										}
										HX_STACK_LINE(1000)
										p = _g6;
										HX_STACK_LINE(1001)
										if (((bool(sndx) || bool(sndy)))){
											HX_STACK_LINE(1001)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1003)
										if (((i == (int)6))){
											HX_STACK_LINE(1004)
											::zpp_nape::geom::ZPP_GeomVert _g8;		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(1004)
											{
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert _g7 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g7,"_g7");
														HX_STACK_LINE(1004)
														ret1 = _g7;
													}
													else{
														HX_STACK_LINE(1004)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1004)
														ret1->next = null();
													}
													HX_STACK_LINE(1004)
													ret1->forced = false;
												}
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													ret1->x = x0;
													HX_STACK_LINE(1004)
													ret1->y = y1;
													HX_STACK_LINE(1004)
													{
													}
												}
												HX_STACK_LINE(1004)
												_g8 = ret1;
											}
											HX_STACK_LINE(1004)
											p = _g8;
											HX_STACK_LINE(1005)
											if (((bool(fstx) || bool(sndy)))){
												HX_STACK_LINE(1005)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1007)
											if (((i == (int)1))){
												HX_STACK_LINE(1008)
												p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
												HX_STACK_LINE(1009)
												if (((p == null()))){
													HX_STACK_LINE(1010)
													::zpp_nape::geom::ZPP_GeomVert _g10;		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(1010)
													{
														HX_STACK_LINE(1010)
														Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1010)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1010)
														{
															HX_STACK_LINE(1010)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert _g9 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g9,"_g9");
																HX_STACK_LINE(1010)
																ret1 = _g9;
															}
															else{
																HX_STACK_LINE(1010)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1010)
																ret1->next = null();
															}
															HX_STACK_LINE(1010)
															ret1->forced = false;
														}
														HX_STACK_LINE(1010)
														{
															HX_STACK_LINE(1010)
															ret1->x = x;
															HX_STACK_LINE(1010)
															ret1->y = y0;
															HX_STACK_LINE(1010)
															{
															}
														}
														HX_STACK_LINE(1010)
														_g10 = ret1;
													}
													HX_STACK_LINE(1010)
													p = _g10;
													HX_STACK_LINE(1011)
													ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
												}
												else{
													HX_STACK_LINE(1013)
													::zpp_nape::geom::ZPP_GeomVert _g12;		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(1013)
													{
														HX_STACK_LINE(1013)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1013)
														{
															HX_STACK_LINE(1013)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert _g11 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(1013)
																ret1 = _g11;
															}
															else{
																HX_STACK_LINE(1013)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1013)
																ret1->next = null();
															}
															HX_STACK_LINE(1013)
															ret1->forced = false;
														}
														HX_STACK_LINE(1013)
														{
															HX_STACK_LINE(1013)
															ret1->x = p->x;
															HX_STACK_LINE(1013)
															ret1->y = p->y;
															HX_STACK_LINE(1013)
															{
															}
														}
														HX_STACK_LINE(1013)
														_g12 = ret1;
													}
													HX_STACK_LINE(1013)
													p = _g12;
												}
												HX_STACK_LINE(1014)
												if ((fsty)){
													HX_STACK_LINE(1014)
													p->forced = true;
												}
												HX_STACK_LINE(1015)
												if (((bool((p->x == x0)) || bool((p->x == x1))))){
													HX_STACK_LINE(1016)
													if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
														HX_STACK_LINE(1016)
														hx::XorEq(val,(int)2);
													}
												}
											}
											else{
												HX_STACK_LINE(1019)
												if (((i == (int)5))){
													HX_STACK_LINE(1020)
													p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
													HX_STACK_LINE(1021)
													if (((p == null()))){
														HX_STACK_LINE(1022)
														::zpp_nape::geom::ZPP_GeomVert _g14;		HX_STACK_VAR(_g14,"_g14");
														HX_STACK_LINE(1022)
														{
															HX_STACK_LINE(1022)
															Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1022)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1022)
															{
																HX_STACK_LINE(1022)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert _g13 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g13,"_g13");
																	HX_STACK_LINE(1022)
																	ret1 = _g13;
																}
																else{
																	HX_STACK_LINE(1022)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1022)
																	ret1->next = null();
																}
																HX_STACK_LINE(1022)
																ret1->forced = false;
															}
															HX_STACK_LINE(1022)
															{
																HX_STACK_LINE(1022)
																ret1->x = x;
																HX_STACK_LINE(1022)
																ret1->y = y1;
																HX_STACK_LINE(1022)
																{
																}
															}
															HX_STACK_LINE(1022)
															_g14 = ret1;
														}
														HX_STACK_LINE(1022)
														p = _g14;
														HX_STACK_LINE(1023)
														ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
													}
													else{
														HX_STACK_LINE(1025)
														::zpp_nape::geom::ZPP_GeomVert _g16;		HX_STACK_VAR(_g16,"_g16");
														HX_STACK_LINE(1025)
														{
															HX_STACK_LINE(1025)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1025)
															{
																HX_STACK_LINE(1025)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert _g15 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g15,"_g15");
																	HX_STACK_LINE(1025)
																	ret1 = _g15;
																}
																else{
																	HX_STACK_LINE(1025)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1025)
																	ret1->next = null();
																}
																HX_STACK_LINE(1025)
																ret1->forced = false;
															}
															HX_STACK_LINE(1025)
															{
																HX_STACK_LINE(1025)
																ret1->x = p->x;
																HX_STACK_LINE(1025)
																ret1->y = p->y;
																HX_STACK_LINE(1025)
																{
																}
															}
															HX_STACK_LINE(1025)
															_g16 = ret1;
														}
														HX_STACK_LINE(1025)
														p = _g16;
													}
													HX_STACK_LINE(1026)
													if ((sndy)){
														HX_STACK_LINE(1026)
														p->forced = true;
													}
													HX_STACK_LINE(1027)
													if (((bool((p->x == x0)) || bool((p->x == x1))))){
														HX_STACK_LINE(1028)
														if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
															HX_STACK_LINE(1028)
															hx::XorEq(val,(int)32);
														}
													}
												}
												else{
													HX_STACK_LINE(1031)
													if (((i == (int)3))){
														HX_STACK_LINE(1032)
														p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1033)
														if (((p == null()))){
															HX_STACK_LINE(1034)
															::zpp_nape::geom::ZPP_GeomVert _g18;		HX_STACK_VAR(_g18,"_g18");
															HX_STACK_LINE(1034)
															{
																HX_STACK_LINE(1034)
																Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1034)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1034)
																{
																	HX_STACK_LINE(1034)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert _g17 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g17,"_g17");
																		HX_STACK_LINE(1034)
																		ret1 = _g17;
																	}
																	else{
																		HX_STACK_LINE(1034)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1034)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1034)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1034)
																{
																	HX_STACK_LINE(1034)
																	ret1->x = x1;
																	HX_STACK_LINE(1034)
																	ret1->y = y;
																	HX_STACK_LINE(1034)
																	{
																	}
																}
																HX_STACK_LINE(1034)
																_g18 = ret1;
															}
															HX_STACK_LINE(1034)
															p = _g18;
															HX_STACK_LINE(1035)
															ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
														}
														else{
															HX_STACK_LINE(1037)
															::zpp_nape::geom::ZPP_GeomVert _g20;		HX_STACK_VAR(_g20,"_g20");
															HX_STACK_LINE(1037)
															{
																HX_STACK_LINE(1037)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1037)
																{
																	HX_STACK_LINE(1037)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert _g19 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g19,"_g19");
																		HX_STACK_LINE(1037)
																		ret1 = _g19;
																	}
																	else{
																		HX_STACK_LINE(1037)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1037)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1037)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1037)
																{
																	HX_STACK_LINE(1037)
																	ret1->x = p->x;
																	HX_STACK_LINE(1037)
																	ret1->y = p->y;
																	HX_STACK_LINE(1037)
																	{
																	}
																}
																HX_STACK_LINE(1037)
																_g20 = ret1;
															}
															HX_STACK_LINE(1037)
															p = _g20;
														}
														HX_STACK_LINE(1038)
														if ((sndx)){
															HX_STACK_LINE(1038)
															p->forced = true;
														}
														HX_STACK_LINE(1039)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1040)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																HX_STACK_LINE(1040)
																hx::XorEq(val,(int)8);
															}
														}
													}
													else{
														HX_STACK_LINE(1044)
														p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1045)
														if (((p == null()))){
															HX_STACK_LINE(1046)
															::zpp_nape::geom::ZPP_GeomVert _g22;		HX_STACK_VAR(_g22,"_g22");
															HX_STACK_LINE(1046)
															{
																HX_STACK_LINE(1046)
																Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1046)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1046)
																{
																	HX_STACK_LINE(1046)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert _g21 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g21,"_g21");
																		HX_STACK_LINE(1046)
																		ret1 = _g21;
																	}
																	else{
																		HX_STACK_LINE(1046)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1046)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1046)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1046)
																{
																	HX_STACK_LINE(1046)
																	ret1->x = x0;
																	HX_STACK_LINE(1046)
																	ret1->y = y;
																	HX_STACK_LINE(1046)
																	{
																	}
																}
																HX_STACK_LINE(1046)
																_g22 = ret1;
															}
															HX_STACK_LINE(1046)
															p = _g22;
															HX_STACK_LINE(1047)
															ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
														}
														else{
															HX_STACK_LINE(1049)
															::zpp_nape::geom::ZPP_GeomVert _g24;		HX_STACK_VAR(_g24,"_g24");
															HX_STACK_LINE(1049)
															{
																HX_STACK_LINE(1049)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1049)
																{
																	HX_STACK_LINE(1049)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert _g23 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g23,"_g23");
																		HX_STACK_LINE(1049)
																		ret1 = _g23;
																	}
																	else{
																		HX_STACK_LINE(1049)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1049)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1049)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1049)
																{
																	HX_STACK_LINE(1049)
																	ret1->x = p->x;
																	HX_STACK_LINE(1049)
																	ret1->y = p->y;
																	HX_STACK_LINE(1049)
																	{
																	}
																}
																HX_STACK_LINE(1049)
																_g24 = ret1;
															}
															HX_STACK_LINE(1049)
															p = _g24;
														}
														HX_STACK_LINE(1050)
														if ((fstx)){
															HX_STACK_LINE(1050)
															p->forced = true;
														}
														HX_STACK_LINE(1051)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1052)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																HX_STACK_LINE(1052)
																hx::XorEq(val,(int)128);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1055)
							::zpp_nape::geom::ZPP_GeomVert _g27;		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(1055)
							{
								HX_STACK_LINE(1056)
								::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1057)
								if (((ret->p1 == null()))){
									HX_STACK_LINE(1057)
									::zpp_nape::geom::ZPP_GeomVert _g25 = obj->next = obj;		HX_STACK_VAR(_g25,"_g25");
									HX_STACK_LINE(1057)
									::zpp_nape::geom::ZPP_GeomVert _g26 = obj->prev = _g25;		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(1057)
									ret->p1 = _g26;
								}
								else{
									HX_STACK_LINE(1059)
									obj->prev = ret->p1;
									HX_STACK_LINE(1060)
									obj->next = ret->p1->next;
									HX_STACK_LINE(1061)
									ret->p1->next->prev = obj;
									HX_STACK_LINE(1062)
									ret->p1->next = obj;
								}
								HX_STACK_LINE(1064)
								_g27 = obj;
							}
							HX_STACK_LINE(1055)
							ret->p1 = _g27;
						}
					}
				}
				HX_STACK_LINE(1068)
				ret->p1 = ret->p1->next;
				HX_STACK_LINE(1069)
				ret->key1 = val;
				HX_STACK_LINE(1070)
				if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
					HX_STACK_LINE(1071)
					val = (int)0;
					HX_STACK_LINE(1072)
					ret->key1 = (int)0;
					HX_STACK_LINE(1073)
					ret->p1 = null();
				}
			}
			HX_STACK_LINE(1076)
			if (((val == (int)0))){
				HX_STACK_LINE(1076)
				ret = null();
			}
			else{
				HX_STACK_LINE(1078)
				ret->pr = ret->p1;
				HX_STACK_LINE(1079)
				ret->okeyr = ret->okey1;
				HX_STACK_LINE(1080)
				ret->keyr = ret->key1;
			}
		}
		else{
			HX_STACK_LINE(1084)
			Float _g28 = iso((0.5 * ((x0 + x1))),(0.5 * ((y0 + y1)))).Cast< Float >();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(1084)
			bool mid = (_g28 < (int)0);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1085)
			if (((key == (int)10))){
				HX_STACK_LINE(1086)
				if ((mid)){
					HX_STACK_LINE(1087)
					int val = (int)187;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1088)
					{
						HX_STACK_LINE(1089)
						ret->okey1 = val;
						HX_STACK_LINE(1090)
						{
							HX_STACK_LINE(1090)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1090)
							while((true)){
								HX_STACK_LINE(1090)
								if ((!(((_g < (int)8))))){
									HX_STACK_LINE(1090)
									break;
								}
								HX_STACK_LINE(1090)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1091)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1093)
									if (((i == (int)0))){
										HX_STACK_LINE(1094)
										::zpp_nape::geom::ZPP_GeomVert _g30;		HX_STACK_VAR(_g30,"_g30");
										HX_STACK_LINE(1094)
										{
											HX_STACK_LINE(1094)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1094)
											{
												HX_STACK_LINE(1094)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert _g29 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g29,"_g29");
													HX_STACK_LINE(1094)
													ret1 = _g29;
												}
												else{
													HX_STACK_LINE(1094)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1094)
													ret1->next = null();
												}
												HX_STACK_LINE(1094)
												ret1->forced = false;
											}
											HX_STACK_LINE(1094)
											{
												HX_STACK_LINE(1094)
												ret1->x = x0;
												HX_STACK_LINE(1094)
												ret1->y = y0;
												HX_STACK_LINE(1094)
												{
												}
											}
											HX_STACK_LINE(1094)
											_g30 = ret1;
										}
										HX_STACK_LINE(1094)
										p = _g30;
										HX_STACK_LINE(1095)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1095)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1097)
										if (((i == (int)2))){
											HX_STACK_LINE(1098)
											::zpp_nape::geom::ZPP_GeomVert _g32;		HX_STACK_VAR(_g32,"_g32");
											HX_STACK_LINE(1098)
											{
												HX_STACK_LINE(1098)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1098)
												{
													HX_STACK_LINE(1098)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert _g31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g31,"_g31");
														HX_STACK_LINE(1098)
														ret1 = _g31;
													}
													else{
														HX_STACK_LINE(1098)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1098)
														ret1->next = null();
													}
													HX_STACK_LINE(1098)
													ret1->forced = false;
												}
												HX_STACK_LINE(1098)
												{
													HX_STACK_LINE(1098)
													ret1->x = x1;
													HX_STACK_LINE(1098)
													ret1->y = y0;
													HX_STACK_LINE(1098)
													{
													}
												}
												HX_STACK_LINE(1098)
												_g32 = ret1;
											}
											HX_STACK_LINE(1098)
											p = _g32;
											HX_STACK_LINE(1099)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1099)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1101)
											if (((i == (int)4))){
												HX_STACK_LINE(1102)
												::zpp_nape::geom::ZPP_GeomVert _g34;		HX_STACK_VAR(_g34,"_g34");
												HX_STACK_LINE(1102)
												{
													HX_STACK_LINE(1102)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert _g33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g33,"_g33");
															HX_STACK_LINE(1102)
															ret1 = _g33;
														}
														else{
															HX_STACK_LINE(1102)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1102)
															ret1->next = null();
														}
														HX_STACK_LINE(1102)
														ret1->forced = false;
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														ret1->x = x1;
														HX_STACK_LINE(1102)
														ret1->y = y1;
														HX_STACK_LINE(1102)
														{
														}
													}
													HX_STACK_LINE(1102)
													_g34 = ret1;
												}
												HX_STACK_LINE(1102)
												p = _g34;
												HX_STACK_LINE(1103)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1103)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1105)
												if (((i == (int)6))){
													HX_STACK_LINE(1106)
													::zpp_nape::geom::ZPP_GeomVert _g36;		HX_STACK_VAR(_g36,"_g36");
													HX_STACK_LINE(1106)
													{
														HX_STACK_LINE(1106)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1106)
														{
															HX_STACK_LINE(1106)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert _g35 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g35,"_g35");
																HX_STACK_LINE(1106)
																ret1 = _g35;
															}
															else{
																HX_STACK_LINE(1106)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1106)
																ret1->next = null();
															}
															HX_STACK_LINE(1106)
															ret1->forced = false;
														}
														HX_STACK_LINE(1106)
														{
															HX_STACK_LINE(1106)
															ret1->x = x0;
															HX_STACK_LINE(1106)
															ret1->y = y1;
															HX_STACK_LINE(1106)
															{
															}
														}
														HX_STACK_LINE(1106)
														_g36 = ret1;
													}
													HX_STACK_LINE(1106)
													p = _g36;
													HX_STACK_LINE(1107)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1107)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1109)
													if (((i == (int)1))){
														HX_STACK_LINE(1110)
														p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1111)
														if (((p == null()))){
															HX_STACK_LINE(1112)
															::zpp_nape::geom::ZPP_GeomVert _g38;		HX_STACK_VAR(_g38,"_g38");
															HX_STACK_LINE(1112)
															{
																HX_STACK_LINE(1112)
																Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1112)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1112)
																{
																	HX_STACK_LINE(1112)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert _g37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g37,"_g37");
																		HX_STACK_LINE(1112)
																		ret1 = _g37;
																	}
																	else{
																		HX_STACK_LINE(1112)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1112)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1112)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1112)
																{
																	HX_STACK_LINE(1112)
																	ret1->x = x;
																	HX_STACK_LINE(1112)
																	ret1->y = y0;
																	HX_STACK_LINE(1112)
																	{
																	}
																}
																HX_STACK_LINE(1112)
																_g38 = ret1;
															}
															HX_STACK_LINE(1112)
															p = _g38;
															HX_STACK_LINE(1113)
															ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
														}
														else{
															HX_STACK_LINE(1115)
															::zpp_nape::geom::ZPP_GeomVert _g40;		HX_STACK_VAR(_g40,"_g40");
															HX_STACK_LINE(1115)
															{
																HX_STACK_LINE(1115)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1115)
																{
																	HX_STACK_LINE(1115)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert _g39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g39,"_g39");
																		HX_STACK_LINE(1115)
																		ret1 = _g39;
																	}
																	else{
																		HX_STACK_LINE(1115)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1115)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1115)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1115)
																{
																	HX_STACK_LINE(1115)
																	ret1->x = p->x;
																	HX_STACK_LINE(1115)
																	ret1->y = p->y;
																	HX_STACK_LINE(1115)
																	{
																	}
																}
																HX_STACK_LINE(1115)
																_g40 = ret1;
															}
															HX_STACK_LINE(1115)
															p = _g40;
														}
														HX_STACK_LINE(1116)
														if ((fsty)){
															HX_STACK_LINE(1116)
															p->forced = true;
														}
														HX_STACK_LINE(1117)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1118)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1118)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1121)
														if (((i == (int)5))){
															HX_STACK_LINE(1122)
															p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1123)
															if (((p == null()))){
																HX_STACK_LINE(1124)
																::zpp_nape::geom::ZPP_GeomVert _g42;		HX_STACK_VAR(_g42,"_g42");
																HX_STACK_LINE(1124)
																{
																	HX_STACK_LINE(1124)
																	Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1124)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1124)
																	{
																		HX_STACK_LINE(1124)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert _g41 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g41,"_g41");
																			HX_STACK_LINE(1124)
																			ret1 = _g41;
																		}
																		else{
																			HX_STACK_LINE(1124)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1124)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1124)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1124)
																	{
																		HX_STACK_LINE(1124)
																		ret1->x = x;
																		HX_STACK_LINE(1124)
																		ret1->y = y1;
																		HX_STACK_LINE(1124)
																		{
																		}
																	}
																	HX_STACK_LINE(1124)
																	_g42 = ret1;
																}
																HX_STACK_LINE(1124)
																p = _g42;
																HX_STACK_LINE(1125)
																ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1127)
																::zpp_nape::geom::ZPP_GeomVert _g44;		HX_STACK_VAR(_g44,"_g44");
																HX_STACK_LINE(1127)
																{
																	HX_STACK_LINE(1127)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1127)
																	{
																		HX_STACK_LINE(1127)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert _g43 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g43,"_g43");
																			HX_STACK_LINE(1127)
																			ret1 = _g43;
																		}
																		else{
																			HX_STACK_LINE(1127)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1127)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1127)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1127)
																	{
																		HX_STACK_LINE(1127)
																		ret1->x = p->x;
																		HX_STACK_LINE(1127)
																		ret1->y = p->y;
																		HX_STACK_LINE(1127)
																		{
																		}
																	}
																	HX_STACK_LINE(1127)
																	_g44 = ret1;
																}
																HX_STACK_LINE(1127)
																p = _g44;
															}
															HX_STACK_LINE(1128)
															if ((sndy)){
																HX_STACK_LINE(1128)
																p->forced = true;
															}
															HX_STACK_LINE(1129)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1130)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1130)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1133)
															if (((i == (int)3))){
																HX_STACK_LINE(1134)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1135)
																if (((p == null()))){
																	HX_STACK_LINE(1136)
																	::zpp_nape::geom::ZPP_GeomVert _g46;		HX_STACK_VAR(_g46,"_g46");
																	HX_STACK_LINE(1136)
																	{
																		HX_STACK_LINE(1136)
																		Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1136)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1136)
																		{
																			HX_STACK_LINE(1136)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert _g45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g45,"_g45");
																				HX_STACK_LINE(1136)
																				ret1 = _g45;
																			}
																			else{
																				HX_STACK_LINE(1136)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1136)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1136)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1136)
																		{
																			HX_STACK_LINE(1136)
																			ret1->x = x1;
																			HX_STACK_LINE(1136)
																			ret1->y = y;
																			HX_STACK_LINE(1136)
																			{
																			}
																		}
																		HX_STACK_LINE(1136)
																		_g46 = ret1;
																	}
																	HX_STACK_LINE(1136)
																	p = _g46;
																	HX_STACK_LINE(1137)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																}
																else{
																	HX_STACK_LINE(1139)
																	::zpp_nape::geom::ZPP_GeomVert _g48;		HX_STACK_VAR(_g48,"_g48");
																	HX_STACK_LINE(1139)
																	{
																		HX_STACK_LINE(1139)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1139)
																		{
																			HX_STACK_LINE(1139)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert _g47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g47,"_g47");
																				HX_STACK_LINE(1139)
																				ret1 = _g47;
																			}
																			else{
																				HX_STACK_LINE(1139)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1139)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1139)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1139)
																		{
																			HX_STACK_LINE(1139)
																			ret1->x = p->x;
																			HX_STACK_LINE(1139)
																			ret1->y = p->y;
																			HX_STACK_LINE(1139)
																			{
																			}
																		}
																		HX_STACK_LINE(1139)
																		_g48 = ret1;
																	}
																	HX_STACK_LINE(1139)
																	p = _g48;
																}
																HX_STACK_LINE(1140)
																if ((sndx)){
																	HX_STACK_LINE(1140)
																	p->forced = true;
																}
																HX_STACK_LINE(1141)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1142)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1142)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1146)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1147)
																if (((p == null()))){
																	HX_STACK_LINE(1148)
																	::zpp_nape::geom::ZPP_GeomVert _g50;		HX_STACK_VAR(_g50,"_g50");
																	HX_STACK_LINE(1148)
																	{
																		HX_STACK_LINE(1148)
																		Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1148)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1148)
																		{
																			HX_STACK_LINE(1148)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert _g49 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g49,"_g49");
																				HX_STACK_LINE(1148)
																				ret1 = _g49;
																			}
																			else{
																				HX_STACK_LINE(1148)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1148)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1148)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1148)
																		{
																			HX_STACK_LINE(1148)
																			ret1->x = x0;
																			HX_STACK_LINE(1148)
																			ret1->y = y;
																			HX_STACK_LINE(1148)
																			{
																			}
																		}
																		HX_STACK_LINE(1148)
																		_g50 = ret1;
																	}
																	HX_STACK_LINE(1148)
																	p = _g50;
																	HX_STACK_LINE(1149)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1151)
																	::zpp_nape::geom::ZPP_GeomVert _g52;		HX_STACK_VAR(_g52,"_g52");
																	HX_STACK_LINE(1151)
																	{
																		HX_STACK_LINE(1151)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1151)
																		{
																			HX_STACK_LINE(1151)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert _g51 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g51,"_g51");
																				HX_STACK_LINE(1151)
																				ret1 = _g51;
																			}
																			else{
																				HX_STACK_LINE(1151)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1151)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1151)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1151)
																		{
																			HX_STACK_LINE(1151)
																			ret1->x = p->x;
																			HX_STACK_LINE(1151)
																			ret1->y = p->y;
																			HX_STACK_LINE(1151)
																			{
																			}
																		}
																		HX_STACK_LINE(1151)
																		_g52 = ret1;
																	}
																	HX_STACK_LINE(1151)
																	p = _g52;
																}
																HX_STACK_LINE(1152)
																if ((fstx)){
																	HX_STACK_LINE(1152)
																	p->forced = true;
																}
																HX_STACK_LINE(1153)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1154)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1154)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1157)
									::zpp_nape::geom::ZPP_GeomVert _g55;		HX_STACK_VAR(_g55,"_g55");
									HX_STACK_LINE(1157)
									{
										HX_STACK_LINE(1158)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1159)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1159)
											::zpp_nape::geom::ZPP_GeomVert _g53 = obj->next = obj;		HX_STACK_VAR(_g53,"_g53");
											HX_STACK_LINE(1159)
											::zpp_nape::geom::ZPP_GeomVert _g54 = obj->prev = _g53;		HX_STACK_VAR(_g54,"_g54");
											HX_STACK_LINE(1159)
											ret->p1 = _g54;
										}
										else{
											HX_STACK_LINE(1161)
											obj->prev = ret->p1;
											HX_STACK_LINE(1162)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1163)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1164)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1166)
										_g55 = obj;
									}
									HX_STACK_LINE(1157)
									ret->p1 = _g55;
								}
							}
						}
						HX_STACK_LINE(1170)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1171)
						ret->key1 = val;
						HX_STACK_LINE(1172)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1173)
							val = (int)0;
							HX_STACK_LINE(1174)
							ret->key1 = (int)0;
							HX_STACK_LINE(1175)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1178)
					if (((val == (int)0))){
						HX_STACK_LINE(1178)
						ret = null();
					}
					else{
						HX_STACK_LINE(1180)
						ret->pr = ret->p1;
						HX_STACK_LINE(1181)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1182)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1186)
					int val = (int)131;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1187)
					{
						HX_STACK_LINE(1188)
						ret->okey1 = val;
						HX_STACK_LINE(1189)
						{
							HX_STACK_LINE(1189)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1189)
							while((true)){
								HX_STACK_LINE(1189)
								if ((!(((_g < (int)8))))){
									HX_STACK_LINE(1189)
									break;
								}
								HX_STACK_LINE(1189)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1190)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1191)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1192)
									if (((i == (int)0))){
										HX_STACK_LINE(1193)
										::zpp_nape::geom::ZPP_GeomVert _g57;		HX_STACK_VAR(_g57,"_g57");
										HX_STACK_LINE(1193)
										{
											HX_STACK_LINE(1193)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert _g56 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g56,"_g56");
													HX_STACK_LINE(1193)
													ret1 = _g56;
												}
												else{
													HX_STACK_LINE(1193)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1193)
													ret1->next = null();
												}
												HX_STACK_LINE(1193)
												ret1->forced = false;
											}
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												ret1->x = x0;
												HX_STACK_LINE(1193)
												ret1->y = y0;
												HX_STACK_LINE(1193)
												{
												}
											}
											HX_STACK_LINE(1193)
											_g57 = ret1;
										}
										HX_STACK_LINE(1193)
										p = _g57;
										HX_STACK_LINE(1194)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1194)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1196)
										if (((i == (int)2))){
											HX_STACK_LINE(1197)
											::zpp_nape::geom::ZPP_GeomVert _g59;		HX_STACK_VAR(_g59,"_g59");
											HX_STACK_LINE(1197)
											{
												HX_STACK_LINE(1197)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1197)
												{
													HX_STACK_LINE(1197)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert _g58 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g58,"_g58");
														HX_STACK_LINE(1197)
														ret1 = _g58;
													}
													else{
														HX_STACK_LINE(1197)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1197)
														ret1->next = null();
													}
													HX_STACK_LINE(1197)
													ret1->forced = false;
												}
												HX_STACK_LINE(1197)
												{
													HX_STACK_LINE(1197)
													ret1->x = x1;
													HX_STACK_LINE(1197)
													ret1->y = y0;
													HX_STACK_LINE(1197)
													{
													}
												}
												HX_STACK_LINE(1197)
												_g59 = ret1;
											}
											HX_STACK_LINE(1197)
											p = _g59;
											HX_STACK_LINE(1198)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1198)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1200)
											if (((i == (int)4))){
												HX_STACK_LINE(1201)
												::zpp_nape::geom::ZPP_GeomVert _g61;		HX_STACK_VAR(_g61,"_g61");
												HX_STACK_LINE(1201)
												{
													HX_STACK_LINE(1201)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1201)
													{
														HX_STACK_LINE(1201)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert _g60 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g60,"_g60");
															HX_STACK_LINE(1201)
															ret1 = _g60;
														}
														else{
															HX_STACK_LINE(1201)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1201)
															ret1->next = null();
														}
														HX_STACK_LINE(1201)
														ret1->forced = false;
													}
													HX_STACK_LINE(1201)
													{
														HX_STACK_LINE(1201)
														ret1->x = x1;
														HX_STACK_LINE(1201)
														ret1->y = y1;
														HX_STACK_LINE(1201)
														{
														}
													}
													HX_STACK_LINE(1201)
													_g61 = ret1;
												}
												HX_STACK_LINE(1201)
												p = _g61;
												HX_STACK_LINE(1202)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1202)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1204)
												if (((i == (int)6))){
													HX_STACK_LINE(1205)
													::zpp_nape::geom::ZPP_GeomVert _g63;		HX_STACK_VAR(_g63,"_g63");
													HX_STACK_LINE(1205)
													{
														HX_STACK_LINE(1205)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1205)
														{
															HX_STACK_LINE(1205)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert _g62 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g62,"_g62");
																HX_STACK_LINE(1205)
																ret1 = _g62;
															}
															else{
																HX_STACK_LINE(1205)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1205)
																ret1->next = null();
															}
															HX_STACK_LINE(1205)
															ret1->forced = false;
														}
														HX_STACK_LINE(1205)
														{
															HX_STACK_LINE(1205)
															ret1->x = x0;
															HX_STACK_LINE(1205)
															ret1->y = y1;
															HX_STACK_LINE(1205)
															{
															}
														}
														HX_STACK_LINE(1205)
														_g63 = ret1;
													}
													HX_STACK_LINE(1205)
													p = _g63;
													HX_STACK_LINE(1206)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1206)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1208)
													if (((i == (int)1))){
														HX_STACK_LINE(1209)
														p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1210)
														if (((p == null()))){
															HX_STACK_LINE(1211)
															::zpp_nape::geom::ZPP_GeomVert _g65;		HX_STACK_VAR(_g65,"_g65");
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert _g64 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g64,"_g64");
																		HX_STACK_LINE(1211)
																		ret1 = _g64;
																	}
																	else{
																		HX_STACK_LINE(1211)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1211)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1211)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	ret1->x = x;
																	HX_STACK_LINE(1211)
																	ret1->y = y0;
																	HX_STACK_LINE(1211)
																	{
																	}
																}
																HX_STACK_LINE(1211)
																_g65 = ret1;
															}
															HX_STACK_LINE(1211)
															p = _g65;
															HX_STACK_LINE(1212)
															ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
														}
														else{
															HX_STACK_LINE(1214)
															::zpp_nape::geom::ZPP_GeomVert _g67;		HX_STACK_VAR(_g67,"_g67");
															HX_STACK_LINE(1214)
															{
																HX_STACK_LINE(1214)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1214)
																{
																	HX_STACK_LINE(1214)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert _g66 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g66,"_g66");
																		HX_STACK_LINE(1214)
																		ret1 = _g66;
																	}
																	else{
																		HX_STACK_LINE(1214)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1214)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1214)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1214)
																{
																	HX_STACK_LINE(1214)
																	ret1->x = p->x;
																	HX_STACK_LINE(1214)
																	ret1->y = p->y;
																	HX_STACK_LINE(1214)
																	{
																	}
																}
																HX_STACK_LINE(1214)
																_g67 = ret1;
															}
															HX_STACK_LINE(1214)
															p = _g67;
														}
														HX_STACK_LINE(1215)
														if ((fsty)){
															HX_STACK_LINE(1215)
															p->forced = true;
														}
														HX_STACK_LINE(1216)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1217)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1217)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1220)
														if (((i == (int)5))){
															HX_STACK_LINE(1221)
															p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1222)
															if (((p == null()))){
																HX_STACK_LINE(1223)
																::zpp_nape::geom::ZPP_GeomVert _g69;		HX_STACK_VAR(_g69,"_g69");
																HX_STACK_LINE(1223)
																{
																	HX_STACK_LINE(1223)
																	Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1223)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1223)
																	{
																		HX_STACK_LINE(1223)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert _g68 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g68,"_g68");
																			HX_STACK_LINE(1223)
																			ret1 = _g68;
																		}
																		else{
																			HX_STACK_LINE(1223)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1223)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1223)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1223)
																	{
																		HX_STACK_LINE(1223)
																		ret1->x = x;
																		HX_STACK_LINE(1223)
																		ret1->y = y1;
																		HX_STACK_LINE(1223)
																		{
																		}
																	}
																	HX_STACK_LINE(1223)
																	_g69 = ret1;
																}
																HX_STACK_LINE(1223)
																p = _g69;
																HX_STACK_LINE(1224)
																ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1226)
																::zpp_nape::geom::ZPP_GeomVert _g71;		HX_STACK_VAR(_g71,"_g71");
																HX_STACK_LINE(1226)
																{
																	HX_STACK_LINE(1226)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1226)
																	{
																		HX_STACK_LINE(1226)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert _g70 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g70,"_g70");
																			HX_STACK_LINE(1226)
																			ret1 = _g70;
																		}
																		else{
																			HX_STACK_LINE(1226)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1226)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1226)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1226)
																	{
																		HX_STACK_LINE(1226)
																		ret1->x = p->x;
																		HX_STACK_LINE(1226)
																		ret1->y = p->y;
																		HX_STACK_LINE(1226)
																		{
																		}
																	}
																	HX_STACK_LINE(1226)
																	_g71 = ret1;
																}
																HX_STACK_LINE(1226)
																p = _g71;
															}
															HX_STACK_LINE(1227)
															if ((sndy)){
																HX_STACK_LINE(1227)
																p->forced = true;
															}
															HX_STACK_LINE(1228)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1229)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1229)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1232)
															if (((i == (int)3))){
																HX_STACK_LINE(1233)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1234)
																if (((p == null()))){
																	HX_STACK_LINE(1235)
																	::zpp_nape::geom::ZPP_GeomVert _g73;		HX_STACK_VAR(_g73,"_g73");
																	HX_STACK_LINE(1235)
																	{
																		HX_STACK_LINE(1235)
																		Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1235)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1235)
																		{
																			HX_STACK_LINE(1235)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert _g72 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g72,"_g72");
																				HX_STACK_LINE(1235)
																				ret1 = _g72;
																			}
																			else{
																				HX_STACK_LINE(1235)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1235)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1235)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1235)
																		{
																			HX_STACK_LINE(1235)
																			ret1->x = x1;
																			HX_STACK_LINE(1235)
																			ret1->y = y;
																			HX_STACK_LINE(1235)
																			{
																			}
																		}
																		HX_STACK_LINE(1235)
																		_g73 = ret1;
																	}
																	HX_STACK_LINE(1235)
																	p = _g73;
																	HX_STACK_LINE(1236)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																}
																else{
																	HX_STACK_LINE(1238)
																	::zpp_nape::geom::ZPP_GeomVert _g75;		HX_STACK_VAR(_g75,"_g75");
																	HX_STACK_LINE(1238)
																	{
																		HX_STACK_LINE(1238)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1238)
																		{
																			HX_STACK_LINE(1238)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert _g74 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g74,"_g74");
																				HX_STACK_LINE(1238)
																				ret1 = _g74;
																			}
																			else{
																				HX_STACK_LINE(1238)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1238)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1238)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1238)
																		{
																			HX_STACK_LINE(1238)
																			ret1->x = p->x;
																			HX_STACK_LINE(1238)
																			ret1->y = p->y;
																			HX_STACK_LINE(1238)
																			{
																			}
																		}
																		HX_STACK_LINE(1238)
																		_g75 = ret1;
																	}
																	HX_STACK_LINE(1238)
																	p = _g75;
																}
																HX_STACK_LINE(1239)
																if ((sndx)){
																	HX_STACK_LINE(1239)
																	p->forced = true;
																}
																HX_STACK_LINE(1240)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1241)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1241)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1245)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1246)
																if (((p == null()))){
																	HX_STACK_LINE(1247)
																	::zpp_nape::geom::ZPP_GeomVert _g77;		HX_STACK_VAR(_g77,"_g77");
																	HX_STACK_LINE(1247)
																	{
																		HX_STACK_LINE(1247)
																		Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1247)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1247)
																		{
																			HX_STACK_LINE(1247)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert _g76 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g76,"_g76");
																				HX_STACK_LINE(1247)
																				ret1 = _g76;
																			}
																			else{
																				HX_STACK_LINE(1247)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1247)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1247)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1247)
																		{
																			HX_STACK_LINE(1247)
																			ret1->x = x0;
																			HX_STACK_LINE(1247)
																			ret1->y = y;
																			HX_STACK_LINE(1247)
																			{
																			}
																		}
																		HX_STACK_LINE(1247)
																		_g77 = ret1;
																	}
																	HX_STACK_LINE(1247)
																	p = _g77;
																	HX_STACK_LINE(1248)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1250)
																	::zpp_nape::geom::ZPP_GeomVert _g79;		HX_STACK_VAR(_g79,"_g79");
																	HX_STACK_LINE(1250)
																	{
																		HX_STACK_LINE(1250)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert _g78 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g78,"_g78");
																				HX_STACK_LINE(1250)
																				ret1 = _g78;
																			}
																			else{
																				HX_STACK_LINE(1250)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1250)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1250)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			ret1->x = p->x;
																			HX_STACK_LINE(1250)
																			ret1->y = p->y;
																			HX_STACK_LINE(1250)
																			{
																			}
																		}
																		HX_STACK_LINE(1250)
																		_g79 = ret1;
																	}
																	HX_STACK_LINE(1250)
																	p = _g79;
																}
																HX_STACK_LINE(1251)
																if ((fstx)){
																	HX_STACK_LINE(1251)
																	p->forced = true;
																}
																HX_STACK_LINE(1252)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1253)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1253)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1256)
									::zpp_nape::geom::ZPP_GeomVert _g82;		HX_STACK_VAR(_g82,"_g82");
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1258)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1258)
											::zpp_nape::geom::ZPP_GeomVert _g80 = obj->next = obj;		HX_STACK_VAR(_g80,"_g80");
											HX_STACK_LINE(1258)
											::zpp_nape::geom::ZPP_GeomVert _g81 = obj->prev = _g80;		HX_STACK_VAR(_g81,"_g81");
											HX_STACK_LINE(1258)
											ret->p1 = _g81;
										}
										else{
											HX_STACK_LINE(1260)
											obj->prev = ret->p1;
											HX_STACK_LINE(1261)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1262)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1263)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1265)
										_g82 = obj;
									}
									HX_STACK_LINE(1256)
									ret->p1 = _g82;
								}
							}
						}
						HX_STACK_LINE(1269)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1270)
						ret->key1 = val;
						HX_STACK_LINE(1271)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1272)
							val = (int)0;
							HX_STACK_LINE(1273)
							ret->key1 = (int)0;
							HX_STACK_LINE(1274)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1277)
					if (((val != (int)0))){
						HX_STACK_LINE(1278)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1279)
						{
							HX_STACK_LINE(1280)
							ret->okey2 = val1;
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1281)
								while((true)){
									HX_STACK_LINE(1281)
									if ((!(((_g < (int)8))))){
										HX_STACK_LINE(1281)
										break;
									}
									HX_STACK_LINE(1281)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1282)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1284)
										if (((i == (int)0))){
											HX_STACK_LINE(1285)
											::zpp_nape::geom::ZPP_GeomVert _g84;		HX_STACK_VAR(_g84,"_g84");
											HX_STACK_LINE(1285)
											{
												HX_STACK_LINE(1285)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1285)
												{
													HX_STACK_LINE(1285)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert _g83 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g83,"_g83");
														HX_STACK_LINE(1285)
														ret1 = _g83;
													}
													else{
														HX_STACK_LINE(1285)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1285)
														ret1->next = null();
													}
													HX_STACK_LINE(1285)
													ret1->forced = false;
												}
												HX_STACK_LINE(1285)
												{
													HX_STACK_LINE(1285)
													ret1->x = x0;
													HX_STACK_LINE(1285)
													ret1->y = y0;
													HX_STACK_LINE(1285)
													{
													}
												}
												HX_STACK_LINE(1285)
												_g84 = ret1;
											}
											HX_STACK_LINE(1285)
											p = _g84;
											HX_STACK_LINE(1286)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1286)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1288)
											if (((i == (int)2))){
												HX_STACK_LINE(1289)
												::zpp_nape::geom::ZPP_GeomVert _g86;		HX_STACK_VAR(_g86,"_g86");
												HX_STACK_LINE(1289)
												{
													HX_STACK_LINE(1289)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1289)
													{
														HX_STACK_LINE(1289)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert _g85 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g85,"_g85");
															HX_STACK_LINE(1289)
															ret1 = _g85;
														}
														else{
															HX_STACK_LINE(1289)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1289)
															ret1->next = null();
														}
														HX_STACK_LINE(1289)
														ret1->forced = false;
													}
													HX_STACK_LINE(1289)
													{
														HX_STACK_LINE(1289)
														ret1->x = x1;
														HX_STACK_LINE(1289)
														ret1->y = y0;
														HX_STACK_LINE(1289)
														{
														}
													}
													HX_STACK_LINE(1289)
													_g86 = ret1;
												}
												HX_STACK_LINE(1289)
												p = _g86;
												HX_STACK_LINE(1290)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1290)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1292)
												if (((i == (int)4))){
													HX_STACK_LINE(1293)
													::zpp_nape::geom::ZPP_GeomVert _g88;		HX_STACK_VAR(_g88,"_g88");
													HX_STACK_LINE(1293)
													{
														HX_STACK_LINE(1293)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1293)
														{
															HX_STACK_LINE(1293)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert _g87 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g87,"_g87");
																HX_STACK_LINE(1293)
																ret1 = _g87;
															}
															else{
																HX_STACK_LINE(1293)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1293)
																ret1->next = null();
															}
															HX_STACK_LINE(1293)
															ret1->forced = false;
														}
														HX_STACK_LINE(1293)
														{
															HX_STACK_LINE(1293)
															ret1->x = x1;
															HX_STACK_LINE(1293)
															ret1->y = y1;
															HX_STACK_LINE(1293)
															{
															}
														}
														HX_STACK_LINE(1293)
														_g88 = ret1;
													}
													HX_STACK_LINE(1293)
													p = _g88;
													HX_STACK_LINE(1294)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1294)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1296)
													if (((i == (int)6))){
														HX_STACK_LINE(1297)
														::zpp_nape::geom::ZPP_GeomVert _g90;		HX_STACK_VAR(_g90,"_g90");
														HX_STACK_LINE(1297)
														{
															HX_STACK_LINE(1297)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1297)
															{
																HX_STACK_LINE(1297)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert _g89 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g89,"_g89");
																	HX_STACK_LINE(1297)
																	ret1 = _g89;
																}
																else{
																	HX_STACK_LINE(1297)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1297)
																	ret1->next = null();
																}
																HX_STACK_LINE(1297)
																ret1->forced = false;
															}
															HX_STACK_LINE(1297)
															{
																HX_STACK_LINE(1297)
																ret1->x = x0;
																HX_STACK_LINE(1297)
																ret1->y = y1;
																HX_STACK_LINE(1297)
																{
																}
															}
															HX_STACK_LINE(1297)
															_g90 = ret1;
														}
														HX_STACK_LINE(1297)
														p = _g90;
														HX_STACK_LINE(1298)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1298)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1300)
														if (((i == (int)1))){
															HX_STACK_LINE(1301)
															p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1302)
															if (((p == null()))){
																HX_STACK_LINE(1303)
																::zpp_nape::geom::ZPP_GeomVert _g92;		HX_STACK_VAR(_g92,"_g92");
																HX_STACK_LINE(1303)
																{
																	HX_STACK_LINE(1303)
																	Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1303)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1303)
																	{
																		HX_STACK_LINE(1303)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert _g91 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g91,"_g91");
																			HX_STACK_LINE(1303)
																			ret1 = _g91;
																		}
																		else{
																			HX_STACK_LINE(1303)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1303)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1303)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1303)
																	{
																		HX_STACK_LINE(1303)
																		ret1->x = x;
																		HX_STACK_LINE(1303)
																		ret1->y = y0;
																		HX_STACK_LINE(1303)
																		{
																		}
																	}
																	HX_STACK_LINE(1303)
																	_g92 = ret1;
																}
																HX_STACK_LINE(1303)
																p = _g92;
																HX_STACK_LINE(1304)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1306)
																::zpp_nape::geom::ZPP_GeomVert _g94;		HX_STACK_VAR(_g94,"_g94");
																HX_STACK_LINE(1306)
																{
																	HX_STACK_LINE(1306)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1306)
																	{
																		HX_STACK_LINE(1306)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert _g93 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g93,"_g93");
																			HX_STACK_LINE(1306)
																			ret1 = _g93;
																		}
																		else{
																			HX_STACK_LINE(1306)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1306)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1306)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1306)
																	{
																		HX_STACK_LINE(1306)
																		ret1->x = p->x;
																		HX_STACK_LINE(1306)
																		ret1->y = p->y;
																		HX_STACK_LINE(1306)
																		{
																		}
																	}
																	HX_STACK_LINE(1306)
																	_g94 = ret1;
																}
																HX_STACK_LINE(1306)
																p = _g94;
															}
															HX_STACK_LINE(1307)
															if ((fsty)){
																HX_STACK_LINE(1307)
																p->forced = true;
															}
															HX_STACK_LINE(1308)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1309)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1309)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1312)
															if (((i == (int)5))){
																HX_STACK_LINE(1313)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1314)
																if (((p == null()))){
																	HX_STACK_LINE(1315)
																	::zpp_nape::geom::ZPP_GeomVert _g96;		HX_STACK_VAR(_g96,"_g96");
																	HX_STACK_LINE(1315)
																	{
																		HX_STACK_LINE(1315)
																		Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1315)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1315)
																		{
																			HX_STACK_LINE(1315)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert _g95 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g95,"_g95");
																				HX_STACK_LINE(1315)
																				ret1 = _g95;
																			}
																			else{
																				HX_STACK_LINE(1315)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1315)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1315)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1315)
																		{
																			HX_STACK_LINE(1315)
																			ret1->x = x;
																			HX_STACK_LINE(1315)
																			ret1->y = y1;
																			HX_STACK_LINE(1315)
																			{
																			}
																		}
																		HX_STACK_LINE(1315)
																		_g96 = ret1;
																	}
																	HX_STACK_LINE(1315)
																	p = _g96;
																	HX_STACK_LINE(1316)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1318)
																	::zpp_nape::geom::ZPP_GeomVert _g98;		HX_STACK_VAR(_g98,"_g98");
																	HX_STACK_LINE(1318)
																	{
																		HX_STACK_LINE(1318)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1318)
																		{
																			HX_STACK_LINE(1318)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert _g97 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g97,"_g97");
																				HX_STACK_LINE(1318)
																				ret1 = _g97;
																			}
																			else{
																				HX_STACK_LINE(1318)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1318)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1318)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1318)
																		{
																			HX_STACK_LINE(1318)
																			ret1->x = p->x;
																			HX_STACK_LINE(1318)
																			ret1->y = p->y;
																			HX_STACK_LINE(1318)
																			{
																			}
																		}
																		HX_STACK_LINE(1318)
																		_g98 = ret1;
																	}
																	HX_STACK_LINE(1318)
																	p = _g98;
																}
																HX_STACK_LINE(1319)
																if ((sndy)){
																	HX_STACK_LINE(1319)
																	p->forced = true;
																}
																HX_STACK_LINE(1320)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1321)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1321)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1324)
																if (((i == (int)3))){
																	HX_STACK_LINE(1325)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1326)
																	if (((p == null()))){
																		HX_STACK_LINE(1327)
																		::zpp_nape::geom::ZPP_GeomVert _g100;		HX_STACK_VAR(_g100,"_g100");
																		HX_STACK_LINE(1327)
																		{
																			HX_STACK_LINE(1327)
																			Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1327)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1327)
																			{
																				HX_STACK_LINE(1327)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert _g99 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g99,"_g99");
																					HX_STACK_LINE(1327)
																					ret1 = _g99;
																				}
																				else{
																					HX_STACK_LINE(1327)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1327)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1327)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1327)
																			{
																				HX_STACK_LINE(1327)
																				ret1->x = x1;
																				HX_STACK_LINE(1327)
																				ret1->y = y;
																				HX_STACK_LINE(1327)
																				{
																				}
																			}
																			HX_STACK_LINE(1327)
																			_g100 = ret1;
																		}
																		HX_STACK_LINE(1327)
																		p = _g100;
																		HX_STACK_LINE(1328)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																	else{
																		HX_STACK_LINE(1330)
																		::zpp_nape::geom::ZPP_GeomVert _g102;		HX_STACK_VAR(_g102,"_g102");
																		HX_STACK_LINE(1330)
																		{
																			HX_STACK_LINE(1330)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1330)
																			{
																				HX_STACK_LINE(1330)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert _g101 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g101,"_g101");
																					HX_STACK_LINE(1330)
																					ret1 = _g101;
																				}
																				else{
																					HX_STACK_LINE(1330)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1330)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1330)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1330)
																			{
																				HX_STACK_LINE(1330)
																				ret1->x = p->x;
																				HX_STACK_LINE(1330)
																				ret1->y = p->y;
																				HX_STACK_LINE(1330)
																				{
																				}
																			}
																			HX_STACK_LINE(1330)
																			_g102 = ret1;
																		}
																		HX_STACK_LINE(1330)
																		p = _g102;
																	}
																	HX_STACK_LINE(1331)
																	if ((sndx)){
																		HX_STACK_LINE(1331)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1332)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1333)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1333)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1337)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1338)
																	if (((p == null()))){
																		HX_STACK_LINE(1339)
																		::zpp_nape::geom::ZPP_GeomVert _g104;		HX_STACK_VAR(_g104,"_g104");
																		HX_STACK_LINE(1339)
																		{
																			HX_STACK_LINE(1339)
																			Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1339)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1339)
																			{
																				HX_STACK_LINE(1339)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert _g103 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g103,"_g103");
																					HX_STACK_LINE(1339)
																					ret1 = _g103;
																				}
																				else{
																					HX_STACK_LINE(1339)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1339)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1339)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1339)
																			{
																				HX_STACK_LINE(1339)
																				ret1->x = x0;
																				HX_STACK_LINE(1339)
																				ret1->y = y;
																				HX_STACK_LINE(1339)
																				{
																				}
																			}
																			HX_STACK_LINE(1339)
																			_g104 = ret1;
																		}
																		HX_STACK_LINE(1339)
																		p = _g104;
																		HX_STACK_LINE(1340)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																	else{
																		HX_STACK_LINE(1342)
																		::zpp_nape::geom::ZPP_GeomVert _g106;		HX_STACK_VAR(_g106,"_g106");
																		HX_STACK_LINE(1342)
																		{
																			HX_STACK_LINE(1342)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1342)
																			{
																				HX_STACK_LINE(1342)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert _g105 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g105,"_g105");
																					HX_STACK_LINE(1342)
																					ret1 = _g105;
																				}
																				else{
																					HX_STACK_LINE(1342)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1342)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1342)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1342)
																			{
																				HX_STACK_LINE(1342)
																				ret1->x = p->x;
																				HX_STACK_LINE(1342)
																				ret1->y = p->y;
																				HX_STACK_LINE(1342)
																				{
																				}
																			}
																			HX_STACK_LINE(1342)
																			_g106 = ret1;
																		}
																		HX_STACK_LINE(1342)
																		p = _g106;
																	}
																	HX_STACK_LINE(1343)
																	if ((fstx)){
																		HX_STACK_LINE(1343)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1344)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1345)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1345)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_GeomVert _g109;		HX_STACK_VAR(_g109,"_g109");
										HX_STACK_LINE(1348)
										{
											HX_STACK_LINE(1349)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1350)
											if (((ret->p2 == null()))){
												HX_STACK_LINE(1350)
												::zpp_nape::geom::ZPP_GeomVert _g107 = obj->next = obj;		HX_STACK_VAR(_g107,"_g107");
												HX_STACK_LINE(1350)
												::zpp_nape::geom::ZPP_GeomVert _g108 = obj->prev = _g107;		HX_STACK_VAR(_g108,"_g108");
												HX_STACK_LINE(1350)
												ret->p2 = _g108;
											}
											else{
												HX_STACK_LINE(1352)
												obj->prev = ret->p2;
												HX_STACK_LINE(1353)
												obj->next = ret->p2->next;
												HX_STACK_LINE(1354)
												ret->p2->next->prev = obj;
												HX_STACK_LINE(1355)
												ret->p2->next = obj;
											}
											HX_STACK_LINE(1357)
											_g109 = obj;
										}
										HX_STACK_LINE(1348)
										ret->p2 = _g109;
									}
								}
							}
							HX_STACK_LINE(1361)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1362)
							ret->key2 = val1;
							HX_STACK_LINE(1363)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1364)
								val1 = (int)0;
								HX_STACK_LINE(1365)
								ret->key2 = (int)0;
								HX_STACK_LINE(1366)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1369)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1370)
							ret->pr = ret->p1;
							HX_STACK_LINE(1371)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1372)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1375)
							ret->pr = ret->p2;
							HX_STACK_LINE(1376)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1377)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1381)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1382)
						{
							HX_STACK_LINE(1383)
							ret->okey1 = val1;
							HX_STACK_LINE(1384)
							{
								HX_STACK_LINE(1384)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1384)
								while((true)){
									HX_STACK_LINE(1384)
									if ((!(((_g < (int)8))))){
										HX_STACK_LINE(1384)
										break;
									}
									HX_STACK_LINE(1384)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1385)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1386)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1387)
										if (((i == (int)0))){
											HX_STACK_LINE(1388)
											::zpp_nape::geom::ZPP_GeomVert _g111;		HX_STACK_VAR(_g111,"_g111");
											HX_STACK_LINE(1388)
											{
												HX_STACK_LINE(1388)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1388)
												{
													HX_STACK_LINE(1388)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert _g110 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g110,"_g110");
														HX_STACK_LINE(1388)
														ret1 = _g110;
													}
													else{
														HX_STACK_LINE(1388)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1388)
														ret1->next = null();
													}
													HX_STACK_LINE(1388)
													ret1->forced = false;
												}
												HX_STACK_LINE(1388)
												{
													HX_STACK_LINE(1388)
													ret1->x = x0;
													HX_STACK_LINE(1388)
													ret1->y = y0;
													HX_STACK_LINE(1388)
													{
													}
												}
												HX_STACK_LINE(1388)
												_g111 = ret1;
											}
											HX_STACK_LINE(1388)
											p = _g111;
											HX_STACK_LINE(1389)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1389)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1391)
											if (((i == (int)2))){
												HX_STACK_LINE(1392)
												::zpp_nape::geom::ZPP_GeomVert _g113;		HX_STACK_VAR(_g113,"_g113");
												HX_STACK_LINE(1392)
												{
													HX_STACK_LINE(1392)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1392)
													{
														HX_STACK_LINE(1392)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert _g112 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g112,"_g112");
															HX_STACK_LINE(1392)
															ret1 = _g112;
														}
														else{
															HX_STACK_LINE(1392)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1392)
															ret1->next = null();
														}
														HX_STACK_LINE(1392)
														ret1->forced = false;
													}
													HX_STACK_LINE(1392)
													{
														HX_STACK_LINE(1392)
														ret1->x = x1;
														HX_STACK_LINE(1392)
														ret1->y = y0;
														HX_STACK_LINE(1392)
														{
														}
													}
													HX_STACK_LINE(1392)
													_g113 = ret1;
												}
												HX_STACK_LINE(1392)
												p = _g113;
												HX_STACK_LINE(1393)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1393)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1395)
												if (((i == (int)4))){
													HX_STACK_LINE(1396)
													::zpp_nape::geom::ZPP_GeomVert _g115;		HX_STACK_VAR(_g115,"_g115");
													HX_STACK_LINE(1396)
													{
														HX_STACK_LINE(1396)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1396)
														{
															HX_STACK_LINE(1396)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert _g114 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g114,"_g114");
																HX_STACK_LINE(1396)
																ret1 = _g114;
															}
															else{
																HX_STACK_LINE(1396)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1396)
																ret1->next = null();
															}
															HX_STACK_LINE(1396)
															ret1->forced = false;
														}
														HX_STACK_LINE(1396)
														{
															HX_STACK_LINE(1396)
															ret1->x = x1;
															HX_STACK_LINE(1396)
															ret1->y = y1;
															HX_STACK_LINE(1396)
															{
															}
														}
														HX_STACK_LINE(1396)
														_g115 = ret1;
													}
													HX_STACK_LINE(1396)
													p = _g115;
													HX_STACK_LINE(1397)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1397)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1399)
													if (((i == (int)6))){
														HX_STACK_LINE(1400)
														::zpp_nape::geom::ZPP_GeomVert _g117;		HX_STACK_VAR(_g117,"_g117");
														HX_STACK_LINE(1400)
														{
															HX_STACK_LINE(1400)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1400)
															{
																HX_STACK_LINE(1400)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert _g116 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g116,"_g116");
																	HX_STACK_LINE(1400)
																	ret1 = _g116;
																}
																else{
																	HX_STACK_LINE(1400)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1400)
																	ret1->next = null();
																}
																HX_STACK_LINE(1400)
																ret1->forced = false;
															}
															HX_STACK_LINE(1400)
															{
																HX_STACK_LINE(1400)
																ret1->x = x0;
																HX_STACK_LINE(1400)
																ret1->y = y1;
																HX_STACK_LINE(1400)
																{
																}
															}
															HX_STACK_LINE(1400)
															_g117 = ret1;
														}
														HX_STACK_LINE(1400)
														p = _g117;
														HX_STACK_LINE(1401)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1401)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1403)
														if (((i == (int)1))){
															HX_STACK_LINE(1404)
															p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1405)
															if (((p == null()))){
																HX_STACK_LINE(1406)
																::zpp_nape::geom::ZPP_GeomVert _g119;		HX_STACK_VAR(_g119,"_g119");
																HX_STACK_LINE(1406)
																{
																	HX_STACK_LINE(1406)
																	Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1406)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1406)
																	{
																		HX_STACK_LINE(1406)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert _g118 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g118,"_g118");
																			HX_STACK_LINE(1406)
																			ret1 = _g118;
																		}
																		else{
																			HX_STACK_LINE(1406)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1406)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1406)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1406)
																	{
																		HX_STACK_LINE(1406)
																		ret1->x = x;
																		HX_STACK_LINE(1406)
																		ret1->y = y0;
																		HX_STACK_LINE(1406)
																		{
																		}
																	}
																	HX_STACK_LINE(1406)
																	_g119 = ret1;
																}
																HX_STACK_LINE(1406)
																p = _g119;
																HX_STACK_LINE(1407)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1409)
																::zpp_nape::geom::ZPP_GeomVert _g121;		HX_STACK_VAR(_g121,"_g121");
																HX_STACK_LINE(1409)
																{
																	HX_STACK_LINE(1409)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1409)
																	{
																		HX_STACK_LINE(1409)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert _g120 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g120,"_g120");
																			HX_STACK_LINE(1409)
																			ret1 = _g120;
																		}
																		else{
																			HX_STACK_LINE(1409)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1409)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1409)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1409)
																	{
																		HX_STACK_LINE(1409)
																		ret1->x = p->x;
																		HX_STACK_LINE(1409)
																		ret1->y = p->y;
																		HX_STACK_LINE(1409)
																		{
																		}
																	}
																	HX_STACK_LINE(1409)
																	_g121 = ret1;
																}
																HX_STACK_LINE(1409)
																p = _g121;
															}
															HX_STACK_LINE(1410)
															if ((fsty)){
																HX_STACK_LINE(1410)
																p->forced = true;
															}
															HX_STACK_LINE(1411)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1412)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1412)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1415)
															if (((i == (int)5))){
																HX_STACK_LINE(1416)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1417)
																if (((p == null()))){
																	HX_STACK_LINE(1418)
																	::zpp_nape::geom::ZPP_GeomVert _g123;		HX_STACK_VAR(_g123,"_g123");
																	HX_STACK_LINE(1418)
																	{
																		HX_STACK_LINE(1418)
																		Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1418)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1418)
																		{
																			HX_STACK_LINE(1418)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert _g122 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g122,"_g122");
																				HX_STACK_LINE(1418)
																				ret1 = _g122;
																			}
																			else{
																				HX_STACK_LINE(1418)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1418)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1418)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1418)
																		{
																			HX_STACK_LINE(1418)
																			ret1->x = x;
																			HX_STACK_LINE(1418)
																			ret1->y = y1;
																			HX_STACK_LINE(1418)
																			{
																			}
																		}
																		HX_STACK_LINE(1418)
																		_g123 = ret1;
																	}
																	HX_STACK_LINE(1418)
																	p = _g123;
																	HX_STACK_LINE(1419)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1421)
																	::zpp_nape::geom::ZPP_GeomVert _g125;		HX_STACK_VAR(_g125,"_g125");
																	HX_STACK_LINE(1421)
																	{
																		HX_STACK_LINE(1421)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1421)
																		{
																			HX_STACK_LINE(1421)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert _g124 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g124,"_g124");
																				HX_STACK_LINE(1421)
																				ret1 = _g124;
																			}
																			else{
																				HX_STACK_LINE(1421)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1421)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1421)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1421)
																		{
																			HX_STACK_LINE(1421)
																			ret1->x = p->x;
																			HX_STACK_LINE(1421)
																			ret1->y = p->y;
																			HX_STACK_LINE(1421)
																			{
																			}
																		}
																		HX_STACK_LINE(1421)
																		_g125 = ret1;
																	}
																	HX_STACK_LINE(1421)
																	p = _g125;
																}
																HX_STACK_LINE(1422)
																if ((sndy)){
																	HX_STACK_LINE(1422)
																	p->forced = true;
																}
																HX_STACK_LINE(1423)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1424)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1424)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1427)
																if (((i == (int)3))){
																	HX_STACK_LINE(1428)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1429)
																	if (((p == null()))){
																		HX_STACK_LINE(1430)
																		::zpp_nape::geom::ZPP_GeomVert _g127;		HX_STACK_VAR(_g127,"_g127");
																		HX_STACK_LINE(1430)
																		{
																			HX_STACK_LINE(1430)
																			Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1430)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1430)
																			{
																				HX_STACK_LINE(1430)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert _g126 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g126,"_g126");
																					HX_STACK_LINE(1430)
																					ret1 = _g126;
																				}
																				else{
																					HX_STACK_LINE(1430)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1430)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1430)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1430)
																			{
																				HX_STACK_LINE(1430)
																				ret1->x = x1;
																				HX_STACK_LINE(1430)
																				ret1->y = y;
																				HX_STACK_LINE(1430)
																				{
																				}
																			}
																			HX_STACK_LINE(1430)
																			_g127 = ret1;
																		}
																		HX_STACK_LINE(1430)
																		p = _g127;
																		HX_STACK_LINE(1431)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																	else{
																		HX_STACK_LINE(1433)
																		::zpp_nape::geom::ZPP_GeomVert _g129;		HX_STACK_VAR(_g129,"_g129");
																		HX_STACK_LINE(1433)
																		{
																			HX_STACK_LINE(1433)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1433)
																			{
																				HX_STACK_LINE(1433)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert _g128 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g128,"_g128");
																					HX_STACK_LINE(1433)
																					ret1 = _g128;
																				}
																				else{
																					HX_STACK_LINE(1433)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1433)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1433)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1433)
																			{
																				HX_STACK_LINE(1433)
																				ret1->x = p->x;
																				HX_STACK_LINE(1433)
																				ret1->y = p->y;
																				HX_STACK_LINE(1433)
																				{
																				}
																			}
																			HX_STACK_LINE(1433)
																			_g129 = ret1;
																		}
																		HX_STACK_LINE(1433)
																		p = _g129;
																	}
																	HX_STACK_LINE(1434)
																	if ((sndx)){
																		HX_STACK_LINE(1434)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1435)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1436)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1436)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1440)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1441)
																	if (((p == null()))){
																		HX_STACK_LINE(1442)
																		::zpp_nape::geom::ZPP_GeomVert _g131;		HX_STACK_VAR(_g131,"_g131");
																		HX_STACK_LINE(1442)
																		{
																			HX_STACK_LINE(1442)
																			Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1442)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1442)
																			{
																				HX_STACK_LINE(1442)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert _g130 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g130,"_g130");
																					HX_STACK_LINE(1442)
																					ret1 = _g130;
																				}
																				else{
																					HX_STACK_LINE(1442)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1442)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1442)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1442)
																			{
																				HX_STACK_LINE(1442)
																				ret1->x = x0;
																				HX_STACK_LINE(1442)
																				ret1->y = y;
																				HX_STACK_LINE(1442)
																				{
																				}
																			}
																			HX_STACK_LINE(1442)
																			_g131 = ret1;
																		}
																		HX_STACK_LINE(1442)
																		p = _g131;
																		HX_STACK_LINE(1443)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																	else{
																		HX_STACK_LINE(1445)
																		::zpp_nape::geom::ZPP_GeomVert _g133;		HX_STACK_VAR(_g133,"_g133");
																		HX_STACK_LINE(1445)
																		{
																			HX_STACK_LINE(1445)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1445)
																			{
																				HX_STACK_LINE(1445)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert _g132 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g132,"_g132");
																					HX_STACK_LINE(1445)
																					ret1 = _g132;
																				}
																				else{
																					HX_STACK_LINE(1445)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1445)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1445)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1445)
																			{
																				HX_STACK_LINE(1445)
																				ret1->x = p->x;
																				HX_STACK_LINE(1445)
																				ret1->y = p->y;
																				HX_STACK_LINE(1445)
																				{
																				}
																			}
																			HX_STACK_LINE(1445)
																			_g133 = ret1;
																		}
																		HX_STACK_LINE(1445)
																		p = _g133;
																	}
																	HX_STACK_LINE(1446)
																	if ((fstx)){
																		HX_STACK_LINE(1446)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1447)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1448)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1448)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1451)
										::zpp_nape::geom::ZPP_GeomVert _g136;		HX_STACK_VAR(_g136,"_g136");
										HX_STACK_LINE(1451)
										{
											HX_STACK_LINE(1452)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1453)
											if (((ret->p1 == null()))){
												HX_STACK_LINE(1453)
												::zpp_nape::geom::ZPP_GeomVert _g134 = obj->next = obj;		HX_STACK_VAR(_g134,"_g134");
												HX_STACK_LINE(1453)
												::zpp_nape::geom::ZPP_GeomVert _g135 = obj->prev = _g134;		HX_STACK_VAR(_g135,"_g135");
												HX_STACK_LINE(1453)
												ret->p1 = _g135;
											}
											else{
												HX_STACK_LINE(1455)
												obj->prev = ret->p1;
												HX_STACK_LINE(1456)
												obj->next = ret->p1->next;
												HX_STACK_LINE(1457)
												ret->p1->next->prev = obj;
												HX_STACK_LINE(1458)
												ret->p1->next = obj;
											}
											HX_STACK_LINE(1460)
											_g136 = obj;
										}
										HX_STACK_LINE(1451)
										ret->p1 = _g136;
									}
								}
							}
							HX_STACK_LINE(1464)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1465)
							ret->key1 = val1;
							HX_STACK_LINE(1466)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1467)
								val1 = (int)0;
								HX_STACK_LINE(1468)
								ret->key1 = (int)0;
								HX_STACK_LINE(1469)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1472)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1472)
							ret = null();
						}
						else{
							HX_STACK_LINE(1474)
							ret->pr = ret->p1;
							HX_STACK_LINE(1475)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1476)
							ret->keyr = ret->key1;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1482)
				if ((mid)){
					HX_STACK_LINE(1483)
					int val = (int)238;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1484)
					{
						HX_STACK_LINE(1485)
						ret->okey1 = val;
						HX_STACK_LINE(1486)
						{
							HX_STACK_LINE(1486)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1486)
							while((true)){
								HX_STACK_LINE(1486)
								if ((!(((_g < (int)8))))){
									HX_STACK_LINE(1486)
									break;
								}
								HX_STACK_LINE(1486)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1487)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1488)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1489)
									if (((i == (int)0))){
										HX_STACK_LINE(1490)
										::zpp_nape::geom::ZPP_GeomVert _g138;		HX_STACK_VAR(_g138,"_g138");
										HX_STACK_LINE(1490)
										{
											HX_STACK_LINE(1490)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1490)
											{
												HX_STACK_LINE(1490)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert _g137 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g137,"_g137");
													HX_STACK_LINE(1490)
													ret1 = _g137;
												}
												else{
													HX_STACK_LINE(1490)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1490)
													ret1->next = null();
												}
												HX_STACK_LINE(1490)
												ret1->forced = false;
											}
											HX_STACK_LINE(1490)
											{
												HX_STACK_LINE(1490)
												ret1->x = x0;
												HX_STACK_LINE(1490)
												ret1->y = y0;
												HX_STACK_LINE(1490)
												{
												}
											}
											HX_STACK_LINE(1490)
											_g138 = ret1;
										}
										HX_STACK_LINE(1490)
										p = _g138;
										HX_STACK_LINE(1491)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1491)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1493)
										if (((i == (int)2))){
											HX_STACK_LINE(1494)
											::zpp_nape::geom::ZPP_GeomVert _g140;		HX_STACK_VAR(_g140,"_g140");
											HX_STACK_LINE(1494)
											{
												HX_STACK_LINE(1494)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1494)
												{
													HX_STACK_LINE(1494)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert _g139 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g139,"_g139");
														HX_STACK_LINE(1494)
														ret1 = _g139;
													}
													else{
														HX_STACK_LINE(1494)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1494)
														ret1->next = null();
													}
													HX_STACK_LINE(1494)
													ret1->forced = false;
												}
												HX_STACK_LINE(1494)
												{
													HX_STACK_LINE(1494)
													ret1->x = x1;
													HX_STACK_LINE(1494)
													ret1->y = y0;
													HX_STACK_LINE(1494)
													{
													}
												}
												HX_STACK_LINE(1494)
												_g140 = ret1;
											}
											HX_STACK_LINE(1494)
											p = _g140;
											HX_STACK_LINE(1495)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1495)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1497)
											if (((i == (int)4))){
												HX_STACK_LINE(1498)
												::zpp_nape::geom::ZPP_GeomVert _g142;		HX_STACK_VAR(_g142,"_g142");
												HX_STACK_LINE(1498)
												{
													HX_STACK_LINE(1498)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1498)
													{
														HX_STACK_LINE(1498)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert _g141 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g141,"_g141");
															HX_STACK_LINE(1498)
															ret1 = _g141;
														}
														else{
															HX_STACK_LINE(1498)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1498)
															ret1->next = null();
														}
														HX_STACK_LINE(1498)
														ret1->forced = false;
													}
													HX_STACK_LINE(1498)
													{
														HX_STACK_LINE(1498)
														ret1->x = x1;
														HX_STACK_LINE(1498)
														ret1->y = y1;
														HX_STACK_LINE(1498)
														{
														}
													}
													HX_STACK_LINE(1498)
													_g142 = ret1;
												}
												HX_STACK_LINE(1498)
												p = _g142;
												HX_STACK_LINE(1499)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1499)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1501)
												if (((i == (int)6))){
													HX_STACK_LINE(1502)
													::zpp_nape::geom::ZPP_GeomVert _g144;		HX_STACK_VAR(_g144,"_g144");
													HX_STACK_LINE(1502)
													{
														HX_STACK_LINE(1502)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1502)
														{
															HX_STACK_LINE(1502)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert _g143 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g143,"_g143");
																HX_STACK_LINE(1502)
																ret1 = _g143;
															}
															else{
																HX_STACK_LINE(1502)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1502)
																ret1->next = null();
															}
															HX_STACK_LINE(1502)
															ret1->forced = false;
														}
														HX_STACK_LINE(1502)
														{
															HX_STACK_LINE(1502)
															ret1->x = x0;
															HX_STACK_LINE(1502)
															ret1->y = y1;
															HX_STACK_LINE(1502)
															{
															}
														}
														HX_STACK_LINE(1502)
														_g144 = ret1;
													}
													HX_STACK_LINE(1502)
													p = _g144;
													HX_STACK_LINE(1503)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1503)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1505)
													if (((i == (int)1))){
														HX_STACK_LINE(1506)
														p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1507)
														if (((p == null()))){
															HX_STACK_LINE(1508)
															::zpp_nape::geom::ZPP_GeomVert _g146;		HX_STACK_VAR(_g146,"_g146");
															HX_STACK_LINE(1508)
															{
																HX_STACK_LINE(1508)
																Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1508)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1508)
																{
																	HX_STACK_LINE(1508)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert _g145 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g145,"_g145");
																		HX_STACK_LINE(1508)
																		ret1 = _g145;
																	}
																	else{
																		HX_STACK_LINE(1508)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1508)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1508)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1508)
																{
																	HX_STACK_LINE(1508)
																	ret1->x = x;
																	HX_STACK_LINE(1508)
																	ret1->y = y0;
																	HX_STACK_LINE(1508)
																	{
																	}
																}
																HX_STACK_LINE(1508)
																_g146 = ret1;
															}
															HX_STACK_LINE(1508)
															p = _g146;
															HX_STACK_LINE(1509)
															ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
														}
														else{
															HX_STACK_LINE(1511)
															::zpp_nape::geom::ZPP_GeomVert _g148;		HX_STACK_VAR(_g148,"_g148");
															HX_STACK_LINE(1511)
															{
																HX_STACK_LINE(1511)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1511)
																{
																	HX_STACK_LINE(1511)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert _g147 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g147,"_g147");
																		HX_STACK_LINE(1511)
																		ret1 = _g147;
																	}
																	else{
																		HX_STACK_LINE(1511)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1511)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1511)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1511)
																{
																	HX_STACK_LINE(1511)
																	ret1->x = p->x;
																	HX_STACK_LINE(1511)
																	ret1->y = p->y;
																	HX_STACK_LINE(1511)
																	{
																	}
																}
																HX_STACK_LINE(1511)
																_g148 = ret1;
															}
															HX_STACK_LINE(1511)
															p = _g148;
														}
														HX_STACK_LINE(1512)
														if ((fsty)){
															HX_STACK_LINE(1512)
															p->forced = true;
														}
														HX_STACK_LINE(1513)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1514)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1514)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1517)
														if (((i == (int)5))){
															HX_STACK_LINE(1518)
															p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1519)
															if (((p == null()))){
																HX_STACK_LINE(1520)
																::zpp_nape::geom::ZPP_GeomVert _g150;		HX_STACK_VAR(_g150,"_g150");
																HX_STACK_LINE(1520)
																{
																	HX_STACK_LINE(1520)
																	Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1520)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1520)
																	{
																		HX_STACK_LINE(1520)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert _g149 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g149,"_g149");
																			HX_STACK_LINE(1520)
																			ret1 = _g149;
																		}
																		else{
																			HX_STACK_LINE(1520)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1520)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1520)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1520)
																	{
																		HX_STACK_LINE(1520)
																		ret1->x = x;
																		HX_STACK_LINE(1520)
																		ret1->y = y1;
																		HX_STACK_LINE(1520)
																		{
																		}
																	}
																	HX_STACK_LINE(1520)
																	_g150 = ret1;
																}
																HX_STACK_LINE(1520)
																p = _g150;
																HX_STACK_LINE(1521)
																ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1523)
																::zpp_nape::geom::ZPP_GeomVert _g152;		HX_STACK_VAR(_g152,"_g152");
																HX_STACK_LINE(1523)
																{
																	HX_STACK_LINE(1523)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1523)
																	{
																		HX_STACK_LINE(1523)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert _g151 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g151,"_g151");
																			HX_STACK_LINE(1523)
																			ret1 = _g151;
																		}
																		else{
																			HX_STACK_LINE(1523)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1523)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1523)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1523)
																	{
																		HX_STACK_LINE(1523)
																		ret1->x = p->x;
																		HX_STACK_LINE(1523)
																		ret1->y = p->y;
																		HX_STACK_LINE(1523)
																		{
																		}
																	}
																	HX_STACK_LINE(1523)
																	_g152 = ret1;
																}
																HX_STACK_LINE(1523)
																p = _g152;
															}
															HX_STACK_LINE(1524)
															if ((sndy)){
																HX_STACK_LINE(1524)
																p->forced = true;
															}
															HX_STACK_LINE(1525)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1526)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1526)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1529)
															if (((i == (int)3))){
																HX_STACK_LINE(1530)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1531)
																if (((p == null()))){
																	HX_STACK_LINE(1532)
																	::zpp_nape::geom::ZPP_GeomVert _g154;		HX_STACK_VAR(_g154,"_g154");
																	HX_STACK_LINE(1532)
																	{
																		HX_STACK_LINE(1532)
																		Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1532)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1532)
																		{
																			HX_STACK_LINE(1532)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert _g153 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g153,"_g153");
																				HX_STACK_LINE(1532)
																				ret1 = _g153;
																			}
																			else{
																				HX_STACK_LINE(1532)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1532)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1532)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1532)
																		{
																			HX_STACK_LINE(1532)
																			ret1->x = x1;
																			HX_STACK_LINE(1532)
																			ret1->y = y;
																			HX_STACK_LINE(1532)
																			{
																			}
																		}
																		HX_STACK_LINE(1532)
																		_g154 = ret1;
																	}
																	HX_STACK_LINE(1532)
																	p = _g154;
																	HX_STACK_LINE(1533)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																}
																else{
																	HX_STACK_LINE(1535)
																	::zpp_nape::geom::ZPP_GeomVert _g156;		HX_STACK_VAR(_g156,"_g156");
																	HX_STACK_LINE(1535)
																	{
																		HX_STACK_LINE(1535)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1535)
																		{
																			HX_STACK_LINE(1535)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert _g155 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g155,"_g155");
																				HX_STACK_LINE(1535)
																				ret1 = _g155;
																			}
																			else{
																				HX_STACK_LINE(1535)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1535)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1535)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1535)
																		{
																			HX_STACK_LINE(1535)
																			ret1->x = p->x;
																			HX_STACK_LINE(1535)
																			ret1->y = p->y;
																			HX_STACK_LINE(1535)
																			{
																			}
																		}
																		HX_STACK_LINE(1535)
																		_g156 = ret1;
																	}
																	HX_STACK_LINE(1535)
																	p = _g156;
																}
																HX_STACK_LINE(1536)
																if ((sndx)){
																	HX_STACK_LINE(1536)
																	p->forced = true;
																}
																HX_STACK_LINE(1537)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1538)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1538)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1542)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1543)
																if (((p == null()))){
																	HX_STACK_LINE(1544)
																	::zpp_nape::geom::ZPP_GeomVert _g158;		HX_STACK_VAR(_g158,"_g158");
																	HX_STACK_LINE(1544)
																	{
																		HX_STACK_LINE(1544)
																		Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1544)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1544)
																		{
																			HX_STACK_LINE(1544)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert _g157 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g157,"_g157");
																				HX_STACK_LINE(1544)
																				ret1 = _g157;
																			}
																			else{
																				HX_STACK_LINE(1544)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1544)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1544)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1544)
																		{
																			HX_STACK_LINE(1544)
																			ret1->x = x0;
																			HX_STACK_LINE(1544)
																			ret1->y = y;
																			HX_STACK_LINE(1544)
																			{
																			}
																		}
																		HX_STACK_LINE(1544)
																		_g158 = ret1;
																	}
																	HX_STACK_LINE(1544)
																	p = _g158;
																	HX_STACK_LINE(1545)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1547)
																	::zpp_nape::geom::ZPP_GeomVert _g160;		HX_STACK_VAR(_g160,"_g160");
																	HX_STACK_LINE(1547)
																	{
																		HX_STACK_LINE(1547)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1547)
																		{
																			HX_STACK_LINE(1547)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert _g159 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g159,"_g159");
																				HX_STACK_LINE(1547)
																				ret1 = _g159;
																			}
																			else{
																				HX_STACK_LINE(1547)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1547)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1547)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1547)
																		{
																			HX_STACK_LINE(1547)
																			ret1->x = p->x;
																			HX_STACK_LINE(1547)
																			ret1->y = p->y;
																			HX_STACK_LINE(1547)
																			{
																			}
																		}
																		HX_STACK_LINE(1547)
																		_g160 = ret1;
																	}
																	HX_STACK_LINE(1547)
																	p = _g160;
																}
																HX_STACK_LINE(1548)
																if ((fstx)){
																	HX_STACK_LINE(1548)
																	p->forced = true;
																}
																HX_STACK_LINE(1549)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1550)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1550)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1553)
									::zpp_nape::geom::ZPP_GeomVert _g163;		HX_STACK_VAR(_g163,"_g163");
									HX_STACK_LINE(1553)
									{
										HX_STACK_LINE(1554)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1555)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1555)
											::zpp_nape::geom::ZPP_GeomVert _g161 = obj->next = obj;		HX_STACK_VAR(_g161,"_g161");
											HX_STACK_LINE(1555)
											::zpp_nape::geom::ZPP_GeomVert _g162 = obj->prev = _g161;		HX_STACK_VAR(_g162,"_g162");
											HX_STACK_LINE(1555)
											ret->p1 = _g162;
										}
										else{
											HX_STACK_LINE(1557)
											obj->prev = ret->p1;
											HX_STACK_LINE(1558)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1559)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1560)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1562)
										_g163 = obj;
									}
									HX_STACK_LINE(1553)
									ret->p1 = _g163;
								}
							}
						}
						HX_STACK_LINE(1566)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1567)
						ret->key1 = val;
						HX_STACK_LINE(1568)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1569)
							val = (int)0;
							HX_STACK_LINE(1570)
							ret->key1 = (int)0;
							HX_STACK_LINE(1571)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1574)
					if (((val == (int)0))){
						HX_STACK_LINE(1574)
						ret = null();
					}
					else{
						HX_STACK_LINE(1576)
						ret->pr = ret->p1;
						HX_STACK_LINE(1577)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1578)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1582)
					int val = (int)224;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1583)
					{
						HX_STACK_LINE(1584)
						ret->okey1 = val;
						HX_STACK_LINE(1585)
						{
							HX_STACK_LINE(1585)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1585)
							while((true)){
								HX_STACK_LINE(1585)
								if ((!(((_g < (int)8))))){
									HX_STACK_LINE(1585)
									break;
								}
								HX_STACK_LINE(1585)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1586)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1587)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1588)
									if (((i == (int)0))){
										HX_STACK_LINE(1589)
										::zpp_nape::geom::ZPP_GeomVert _g165;		HX_STACK_VAR(_g165,"_g165");
										HX_STACK_LINE(1589)
										{
											HX_STACK_LINE(1589)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1589)
											{
												HX_STACK_LINE(1589)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert _g164 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g164,"_g164");
													HX_STACK_LINE(1589)
													ret1 = _g164;
												}
												else{
													HX_STACK_LINE(1589)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1589)
													ret1->next = null();
												}
												HX_STACK_LINE(1589)
												ret1->forced = false;
											}
											HX_STACK_LINE(1589)
											{
												HX_STACK_LINE(1589)
												ret1->x = x0;
												HX_STACK_LINE(1589)
												ret1->y = y0;
												HX_STACK_LINE(1589)
												{
												}
											}
											HX_STACK_LINE(1589)
											_g165 = ret1;
										}
										HX_STACK_LINE(1589)
										p = _g165;
										HX_STACK_LINE(1590)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1590)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1592)
										if (((i == (int)2))){
											HX_STACK_LINE(1593)
											::zpp_nape::geom::ZPP_GeomVert _g167;		HX_STACK_VAR(_g167,"_g167");
											HX_STACK_LINE(1593)
											{
												HX_STACK_LINE(1593)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1593)
												{
													HX_STACK_LINE(1593)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert _g166 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g166,"_g166");
														HX_STACK_LINE(1593)
														ret1 = _g166;
													}
													else{
														HX_STACK_LINE(1593)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1593)
														ret1->next = null();
													}
													HX_STACK_LINE(1593)
													ret1->forced = false;
												}
												HX_STACK_LINE(1593)
												{
													HX_STACK_LINE(1593)
													ret1->x = x1;
													HX_STACK_LINE(1593)
													ret1->y = y0;
													HX_STACK_LINE(1593)
													{
													}
												}
												HX_STACK_LINE(1593)
												_g167 = ret1;
											}
											HX_STACK_LINE(1593)
											p = _g167;
											HX_STACK_LINE(1594)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1594)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1596)
											if (((i == (int)4))){
												HX_STACK_LINE(1597)
												::zpp_nape::geom::ZPP_GeomVert _g169;		HX_STACK_VAR(_g169,"_g169");
												HX_STACK_LINE(1597)
												{
													HX_STACK_LINE(1597)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1597)
													{
														HX_STACK_LINE(1597)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert _g168 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g168,"_g168");
															HX_STACK_LINE(1597)
															ret1 = _g168;
														}
														else{
															HX_STACK_LINE(1597)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1597)
															ret1->next = null();
														}
														HX_STACK_LINE(1597)
														ret1->forced = false;
													}
													HX_STACK_LINE(1597)
													{
														HX_STACK_LINE(1597)
														ret1->x = x1;
														HX_STACK_LINE(1597)
														ret1->y = y1;
														HX_STACK_LINE(1597)
														{
														}
													}
													HX_STACK_LINE(1597)
													_g169 = ret1;
												}
												HX_STACK_LINE(1597)
												p = _g169;
												HX_STACK_LINE(1598)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1598)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1600)
												if (((i == (int)6))){
													HX_STACK_LINE(1601)
													::zpp_nape::geom::ZPP_GeomVert _g171;		HX_STACK_VAR(_g171,"_g171");
													HX_STACK_LINE(1601)
													{
														HX_STACK_LINE(1601)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1601)
														{
															HX_STACK_LINE(1601)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert _g170 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g170,"_g170");
																HX_STACK_LINE(1601)
																ret1 = _g170;
															}
															else{
																HX_STACK_LINE(1601)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1601)
																ret1->next = null();
															}
															HX_STACK_LINE(1601)
															ret1->forced = false;
														}
														HX_STACK_LINE(1601)
														{
															HX_STACK_LINE(1601)
															ret1->x = x0;
															HX_STACK_LINE(1601)
															ret1->y = y1;
															HX_STACK_LINE(1601)
															{
															}
														}
														HX_STACK_LINE(1601)
														_g171 = ret1;
													}
													HX_STACK_LINE(1601)
													p = _g171;
													HX_STACK_LINE(1602)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1602)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1604)
													if (((i == (int)1))){
														HX_STACK_LINE(1605)
														p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														HX_STACK_LINE(1606)
														if (((p == null()))){
															HX_STACK_LINE(1607)
															::zpp_nape::geom::ZPP_GeomVert _g173;		HX_STACK_VAR(_g173,"_g173");
															HX_STACK_LINE(1607)
															{
																HX_STACK_LINE(1607)
																Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1607)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1607)
																{
																	HX_STACK_LINE(1607)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert _g172 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g172,"_g172");
																		HX_STACK_LINE(1607)
																		ret1 = _g172;
																	}
																	else{
																		HX_STACK_LINE(1607)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1607)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1607)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1607)
																{
																	HX_STACK_LINE(1607)
																	ret1->x = x;
																	HX_STACK_LINE(1607)
																	ret1->y = y0;
																	HX_STACK_LINE(1607)
																	{
																	}
																}
																HX_STACK_LINE(1607)
																_g173 = ret1;
															}
															HX_STACK_LINE(1607)
															p = _g173;
															HX_STACK_LINE(1608)
															ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
														}
														else{
															HX_STACK_LINE(1610)
															::zpp_nape::geom::ZPP_GeomVert _g175;		HX_STACK_VAR(_g175,"_g175");
															HX_STACK_LINE(1610)
															{
																HX_STACK_LINE(1610)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1610)
																{
																	HX_STACK_LINE(1610)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert _g174 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g174,"_g174");
																		HX_STACK_LINE(1610)
																		ret1 = _g174;
																	}
																	else{
																		HX_STACK_LINE(1610)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1610)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1610)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1610)
																{
																	HX_STACK_LINE(1610)
																	ret1->x = p->x;
																	HX_STACK_LINE(1610)
																	ret1->y = p->y;
																	HX_STACK_LINE(1610)
																	{
																	}
																}
																HX_STACK_LINE(1610)
																_g175 = ret1;
															}
															HX_STACK_LINE(1610)
															p = _g175;
														}
														HX_STACK_LINE(1611)
														if ((fsty)){
															HX_STACK_LINE(1611)
															p->forced = true;
														}
														HX_STACK_LINE(1612)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1613)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1613)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1616)
														if (((i == (int)5))){
															HX_STACK_LINE(1617)
															p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1618)
															if (((p == null()))){
																HX_STACK_LINE(1619)
																::zpp_nape::geom::ZPP_GeomVert _g177;		HX_STACK_VAR(_g177,"_g177");
																HX_STACK_LINE(1619)
																{
																	HX_STACK_LINE(1619)
																	Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1619)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1619)
																	{
																		HX_STACK_LINE(1619)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert _g176 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g176,"_g176");
																			HX_STACK_LINE(1619)
																			ret1 = _g176;
																		}
																		else{
																			HX_STACK_LINE(1619)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1619)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1619)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1619)
																	{
																		HX_STACK_LINE(1619)
																		ret1->x = x;
																		HX_STACK_LINE(1619)
																		ret1->y = y1;
																		HX_STACK_LINE(1619)
																		{
																		}
																	}
																	HX_STACK_LINE(1619)
																	_g177 = ret1;
																}
																HX_STACK_LINE(1619)
																p = _g177;
																HX_STACK_LINE(1620)
																ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1622)
																::zpp_nape::geom::ZPP_GeomVert _g179;		HX_STACK_VAR(_g179,"_g179");
																HX_STACK_LINE(1622)
																{
																	HX_STACK_LINE(1622)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1622)
																	{
																		HX_STACK_LINE(1622)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert _g178 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g178,"_g178");
																			HX_STACK_LINE(1622)
																			ret1 = _g178;
																		}
																		else{
																			HX_STACK_LINE(1622)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1622)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1622)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1622)
																	{
																		HX_STACK_LINE(1622)
																		ret1->x = p->x;
																		HX_STACK_LINE(1622)
																		ret1->y = p->y;
																		HX_STACK_LINE(1622)
																		{
																		}
																	}
																	HX_STACK_LINE(1622)
																	_g179 = ret1;
																}
																HX_STACK_LINE(1622)
																p = _g179;
															}
															HX_STACK_LINE(1623)
															if ((sndy)){
																HX_STACK_LINE(1623)
																p->forced = true;
															}
															HX_STACK_LINE(1624)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1625)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1625)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1628)
															if (((i == (int)3))){
																HX_STACK_LINE(1629)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1630)
																if (((p == null()))){
																	HX_STACK_LINE(1631)
																	::zpp_nape::geom::ZPP_GeomVert _g181;		HX_STACK_VAR(_g181,"_g181");
																	HX_STACK_LINE(1631)
																	{
																		HX_STACK_LINE(1631)
																		Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1631)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1631)
																		{
																			HX_STACK_LINE(1631)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert _g180 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g180,"_g180");
																				HX_STACK_LINE(1631)
																				ret1 = _g180;
																			}
																			else{
																				HX_STACK_LINE(1631)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1631)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1631)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1631)
																		{
																			HX_STACK_LINE(1631)
																			ret1->x = x1;
																			HX_STACK_LINE(1631)
																			ret1->y = y;
																			HX_STACK_LINE(1631)
																			{
																			}
																		}
																		HX_STACK_LINE(1631)
																		_g181 = ret1;
																	}
																	HX_STACK_LINE(1631)
																	p = _g181;
																	HX_STACK_LINE(1632)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																}
																else{
																	HX_STACK_LINE(1634)
																	::zpp_nape::geom::ZPP_GeomVert _g183;		HX_STACK_VAR(_g183,"_g183");
																	HX_STACK_LINE(1634)
																	{
																		HX_STACK_LINE(1634)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1634)
																		{
																			HX_STACK_LINE(1634)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert _g182 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g182,"_g182");
																				HX_STACK_LINE(1634)
																				ret1 = _g182;
																			}
																			else{
																				HX_STACK_LINE(1634)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1634)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1634)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1634)
																		{
																			HX_STACK_LINE(1634)
																			ret1->x = p->x;
																			HX_STACK_LINE(1634)
																			ret1->y = p->y;
																			HX_STACK_LINE(1634)
																			{
																			}
																		}
																		HX_STACK_LINE(1634)
																		_g183 = ret1;
																	}
																	HX_STACK_LINE(1634)
																	p = _g183;
																}
																HX_STACK_LINE(1635)
																if ((sndx)){
																	HX_STACK_LINE(1635)
																	p->forced = true;
																}
																HX_STACK_LINE(1636)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1637)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1637)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1641)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1642)
																if (((p == null()))){
																	HX_STACK_LINE(1643)
																	::zpp_nape::geom::ZPP_GeomVert _g185;		HX_STACK_VAR(_g185,"_g185");
																	HX_STACK_LINE(1643)
																	{
																		HX_STACK_LINE(1643)
																		Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1643)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1643)
																		{
																			HX_STACK_LINE(1643)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert _g184 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g184,"_g184");
																				HX_STACK_LINE(1643)
																				ret1 = _g184;
																			}
																			else{
																				HX_STACK_LINE(1643)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1643)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1643)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1643)
																		{
																			HX_STACK_LINE(1643)
																			ret1->x = x0;
																			HX_STACK_LINE(1643)
																			ret1->y = y;
																			HX_STACK_LINE(1643)
																			{
																			}
																		}
																		HX_STACK_LINE(1643)
																		_g185 = ret1;
																	}
																	HX_STACK_LINE(1643)
																	p = _g185;
																	HX_STACK_LINE(1644)
																	ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1646)
																	::zpp_nape::geom::ZPP_GeomVert _g187;		HX_STACK_VAR(_g187,"_g187");
																	HX_STACK_LINE(1646)
																	{
																		HX_STACK_LINE(1646)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1646)
																		{
																			HX_STACK_LINE(1646)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert _g186 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g186,"_g186");
																				HX_STACK_LINE(1646)
																				ret1 = _g186;
																			}
																			else{
																				HX_STACK_LINE(1646)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1646)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1646)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1646)
																		{
																			HX_STACK_LINE(1646)
																			ret1->x = p->x;
																			HX_STACK_LINE(1646)
																			ret1->y = p->y;
																			HX_STACK_LINE(1646)
																			{
																			}
																		}
																		HX_STACK_LINE(1646)
																		_g187 = ret1;
																	}
																	HX_STACK_LINE(1646)
																	p = _g187;
																}
																HX_STACK_LINE(1647)
																if ((fstx)){
																	HX_STACK_LINE(1647)
																	p->forced = true;
																}
																HX_STACK_LINE(1648)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1649)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1649)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1652)
									::zpp_nape::geom::ZPP_GeomVert _g190;		HX_STACK_VAR(_g190,"_g190");
									HX_STACK_LINE(1652)
									{
										HX_STACK_LINE(1653)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1654)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1654)
											::zpp_nape::geom::ZPP_GeomVert _g188 = obj->next = obj;		HX_STACK_VAR(_g188,"_g188");
											HX_STACK_LINE(1654)
											::zpp_nape::geom::ZPP_GeomVert _g189 = obj->prev = _g188;		HX_STACK_VAR(_g189,"_g189");
											HX_STACK_LINE(1654)
											ret->p1 = _g189;
										}
										else{
											HX_STACK_LINE(1656)
											obj->prev = ret->p1;
											HX_STACK_LINE(1657)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1658)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1659)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1661)
										_g190 = obj;
									}
									HX_STACK_LINE(1652)
									ret->p1 = _g190;
								}
							}
						}
						HX_STACK_LINE(1665)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1666)
						ret->key1 = val;
						HX_STACK_LINE(1667)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1668)
							val = (int)0;
							HX_STACK_LINE(1669)
							ret->key1 = (int)0;
							HX_STACK_LINE(1670)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1673)
					if (((val != (int)0))){
						HX_STACK_LINE(1674)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1675)
						{
							HX_STACK_LINE(1676)
							ret->okey2 = val1;
							HX_STACK_LINE(1677)
							{
								HX_STACK_LINE(1677)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1677)
								while((true)){
									HX_STACK_LINE(1677)
									if ((!(((_g < (int)8))))){
										HX_STACK_LINE(1677)
										break;
									}
									HX_STACK_LINE(1677)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1678)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1679)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1680)
										if (((i == (int)0))){
											HX_STACK_LINE(1681)
											::zpp_nape::geom::ZPP_GeomVert _g192;		HX_STACK_VAR(_g192,"_g192");
											HX_STACK_LINE(1681)
											{
												HX_STACK_LINE(1681)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1681)
												{
													HX_STACK_LINE(1681)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert _g191 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g191,"_g191");
														HX_STACK_LINE(1681)
														ret1 = _g191;
													}
													else{
														HX_STACK_LINE(1681)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1681)
														ret1->next = null();
													}
													HX_STACK_LINE(1681)
													ret1->forced = false;
												}
												HX_STACK_LINE(1681)
												{
													HX_STACK_LINE(1681)
													ret1->x = x0;
													HX_STACK_LINE(1681)
													ret1->y = y0;
													HX_STACK_LINE(1681)
													{
													}
												}
												HX_STACK_LINE(1681)
												_g192 = ret1;
											}
											HX_STACK_LINE(1681)
											p = _g192;
											HX_STACK_LINE(1682)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1682)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1684)
											if (((i == (int)2))){
												HX_STACK_LINE(1685)
												::zpp_nape::geom::ZPP_GeomVert _g194;		HX_STACK_VAR(_g194,"_g194");
												HX_STACK_LINE(1685)
												{
													HX_STACK_LINE(1685)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1685)
													{
														HX_STACK_LINE(1685)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert _g193 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g193,"_g193");
															HX_STACK_LINE(1685)
															ret1 = _g193;
														}
														else{
															HX_STACK_LINE(1685)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1685)
															ret1->next = null();
														}
														HX_STACK_LINE(1685)
														ret1->forced = false;
													}
													HX_STACK_LINE(1685)
													{
														HX_STACK_LINE(1685)
														ret1->x = x1;
														HX_STACK_LINE(1685)
														ret1->y = y0;
														HX_STACK_LINE(1685)
														{
														}
													}
													HX_STACK_LINE(1685)
													_g194 = ret1;
												}
												HX_STACK_LINE(1685)
												p = _g194;
												HX_STACK_LINE(1686)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1686)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1688)
												if (((i == (int)4))){
													HX_STACK_LINE(1689)
													::zpp_nape::geom::ZPP_GeomVert _g196;		HX_STACK_VAR(_g196,"_g196");
													HX_STACK_LINE(1689)
													{
														HX_STACK_LINE(1689)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1689)
														{
															HX_STACK_LINE(1689)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert _g195 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g195,"_g195");
																HX_STACK_LINE(1689)
																ret1 = _g195;
															}
															else{
																HX_STACK_LINE(1689)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1689)
																ret1->next = null();
															}
															HX_STACK_LINE(1689)
															ret1->forced = false;
														}
														HX_STACK_LINE(1689)
														{
															HX_STACK_LINE(1689)
															ret1->x = x1;
															HX_STACK_LINE(1689)
															ret1->y = y1;
															HX_STACK_LINE(1689)
															{
															}
														}
														HX_STACK_LINE(1689)
														_g196 = ret1;
													}
													HX_STACK_LINE(1689)
													p = _g196;
													HX_STACK_LINE(1690)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1690)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1692)
													if (((i == (int)6))){
														HX_STACK_LINE(1693)
														::zpp_nape::geom::ZPP_GeomVert _g198;		HX_STACK_VAR(_g198,"_g198");
														HX_STACK_LINE(1693)
														{
															HX_STACK_LINE(1693)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1693)
															{
																HX_STACK_LINE(1693)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert _g197 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g197,"_g197");
																	HX_STACK_LINE(1693)
																	ret1 = _g197;
																}
																else{
																	HX_STACK_LINE(1693)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1693)
																	ret1->next = null();
																}
																HX_STACK_LINE(1693)
																ret1->forced = false;
															}
															HX_STACK_LINE(1693)
															{
																HX_STACK_LINE(1693)
																ret1->x = x0;
																HX_STACK_LINE(1693)
																ret1->y = y1;
																HX_STACK_LINE(1693)
																{
																}
															}
															HX_STACK_LINE(1693)
															_g198 = ret1;
														}
														HX_STACK_LINE(1693)
														p = _g198;
														HX_STACK_LINE(1694)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1694)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1696)
														if (((i == (int)1))){
															HX_STACK_LINE(1697)
															p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1698)
															if (((p == null()))){
																HX_STACK_LINE(1699)
																::zpp_nape::geom::ZPP_GeomVert _g200;		HX_STACK_VAR(_g200,"_g200");
																HX_STACK_LINE(1699)
																{
																	HX_STACK_LINE(1699)
																	Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1699)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1699)
																	{
																		HX_STACK_LINE(1699)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert _g199 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g199,"_g199");
																			HX_STACK_LINE(1699)
																			ret1 = _g199;
																		}
																		else{
																			HX_STACK_LINE(1699)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1699)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1699)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1699)
																	{
																		HX_STACK_LINE(1699)
																		ret1->x = x;
																		HX_STACK_LINE(1699)
																		ret1->y = y0;
																		HX_STACK_LINE(1699)
																		{
																		}
																	}
																	HX_STACK_LINE(1699)
																	_g200 = ret1;
																}
																HX_STACK_LINE(1699)
																p = _g200;
																HX_STACK_LINE(1700)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1702)
																::zpp_nape::geom::ZPP_GeomVert _g202;		HX_STACK_VAR(_g202,"_g202");
																HX_STACK_LINE(1702)
																{
																	HX_STACK_LINE(1702)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1702)
																	{
																		HX_STACK_LINE(1702)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert _g201 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g201,"_g201");
																			HX_STACK_LINE(1702)
																			ret1 = _g201;
																		}
																		else{
																			HX_STACK_LINE(1702)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1702)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1702)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1702)
																	{
																		HX_STACK_LINE(1702)
																		ret1->x = p->x;
																		HX_STACK_LINE(1702)
																		ret1->y = p->y;
																		HX_STACK_LINE(1702)
																		{
																		}
																	}
																	HX_STACK_LINE(1702)
																	_g202 = ret1;
																}
																HX_STACK_LINE(1702)
																p = _g202;
															}
															HX_STACK_LINE(1703)
															if ((fsty)){
																HX_STACK_LINE(1703)
																p->forced = true;
															}
															HX_STACK_LINE(1704)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1705)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1705)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1708)
															if (((i == (int)5))){
																HX_STACK_LINE(1709)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1710)
																if (((p == null()))){
																	HX_STACK_LINE(1711)
																	::zpp_nape::geom::ZPP_GeomVert _g204;		HX_STACK_VAR(_g204,"_g204");
																	HX_STACK_LINE(1711)
																	{
																		HX_STACK_LINE(1711)
																		Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1711)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1711)
																		{
																			HX_STACK_LINE(1711)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert _g203 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g203,"_g203");
																				HX_STACK_LINE(1711)
																				ret1 = _g203;
																			}
																			else{
																				HX_STACK_LINE(1711)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1711)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1711)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1711)
																		{
																			HX_STACK_LINE(1711)
																			ret1->x = x;
																			HX_STACK_LINE(1711)
																			ret1->y = y1;
																			HX_STACK_LINE(1711)
																			{
																			}
																		}
																		HX_STACK_LINE(1711)
																		_g204 = ret1;
																	}
																	HX_STACK_LINE(1711)
																	p = _g204;
																	HX_STACK_LINE(1712)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1714)
																	::zpp_nape::geom::ZPP_GeomVert _g206;		HX_STACK_VAR(_g206,"_g206");
																	HX_STACK_LINE(1714)
																	{
																		HX_STACK_LINE(1714)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1714)
																		{
																			HX_STACK_LINE(1714)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert _g205 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g205,"_g205");
																				HX_STACK_LINE(1714)
																				ret1 = _g205;
																			}
																			else{
																				HX_STACK_LINE(1714)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1714)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1714)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1714)
																		{
																			HX_STACK_LINE(1714)
																			ret1->x = p->x;
																			HX_STACK_LINE(1714)
																			ret1->y = p->y;
																			HX_STACK_LINE(1714)
																			{
																			}
																		}
																		HX_STACK_LINE(1714)
																		_g206 = ret1;
																	}
																	HX_STACK_LINE(1714)
																	p = _g206;
																}
																HX_STACK_LINE(1715)
																if ((sndy)){
																	HX_STACK_LINE(1715)
																	p->forced = true;
																}
																HX_STACK_LINE(1716)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1717)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1717)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1720)
																if (((i == (int)3))){
																	HX_STACK_LINE(1721)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1722)
																	if (((p == null()))){
																		HX_STACK_LINE(1723)
																		::zpp_nape::geom::ZPP_GeomVert _g208;		HX_STACK_VAR(_g208,"_g208");
																		HX_STACK_LINE(1723)
																		{
																			HX_STACK_LINE(1723)
																			Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1723)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1723)
																			{
																				HX_STACK_LINE(1723)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert _g207 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g207,"_g207");
																					HX_STACK_LINE(1723)
																					ret1 = _g207;
																				}
																				else{
																					HX_STACK_LINE(1723)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1723)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1723)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1723)
																			{
																				HX_STACK_LINE(1723)
																				ret1->x = x1;
																				HX_STACK_LINE(1723)
																				ret1->y = y;
																				HX_STACK_LINE(1723)
																				{
																				}
																			}
																			HX_STACK_LINE(1723)
																			_g208 = ret1;
																		}
																		HX_STACK_LINE(1723)
																		p = _g208;
																		HX_STACK_LINE(1724)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																	else{
																		HX_STACK_LINE(1726)
																		::zpp_nape::geom::ZPP_GeomVert _g210;		HX_STACK_VAR(_g210,"_g210");
																		HX_STACK_LINE(1726)
																		{
																			HX_STACK_LINE(1726)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1726)
																			{
																				HX_STACK_LINE(1726)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert _g209 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g209,"_g209");
																					HX_STACK_LINE(1726)
																					ret1 = _g209;
																				}
																				else{
																					HX_STACK_LINE(1726)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1726)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1726)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1726)
																			{
																				HX_STACK_LINE(1726)
																				ret1->x = p->x;
																				HX_STACK_LINE(1726)
																				ret1->y = p->y;
																				HX_STACK_LINE(1726)
																				{
																				}
																			}
																			HX_STACK_LINE(1726)
																			_g210 = ret1;
																		}
																		HX_STACK_LINE(1726)
																		p = _g210;
																	}
																	HX_STACK_LINE(1727)
																	if ((sndx)){
																		HX_STACK_LINE(1727)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1728)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1729)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1729)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1733)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1734)
																	if (((p == null()))){
																		HX_STACK_LINE(1735)
																		::zpp_nape::geom::ZPP_GeomVert _g212;		HX_STACK_VAR(_g212,"_g212");
																		HX_STACK_LINE(1735)
																		{
																			HX_STACK_LINE(1735)
																			Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1735)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1735)
																			{
																				HX_STACK_LINE(1735)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert _g211 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g211,"_g211");
																					HX_STACK_LINE(1735)
																					ret1 = _g211;
																				}
																				else{
																					HX_STACK_LINE(1735)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1735)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1735)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1735)
																			{
																				HX_STACK_LINE(1735)
																				ret1->x = x0;
																				HX_STACK_LINE(1735)
																				ret1->y = y;
																				HX_STACK_LINE(1735)
																				{
																				}
																			}
																			HX_STACK_LINE(1735)
																			_g212 = ret1;
																		}
																		HX_STACK_LINE(1735)
																		p = _g212;
																		HX_STACK_LINE(1736)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																	else{
																		HX_STACK_LINE(1738)
																		::zpp_nape::geom::ZPP_GeomVert _g214;		HX_STACK_VAR(_g214,"_g214");
																		HX_STACK_LINE(1738)
																		{
																			HX_STACK_LINE(1738)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1738)
																			{
																				HX_STACK_LINE(1738)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert _g213 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g213,"_g213");
																					HX_STACK_LINE(1738)
																					ret1 = _g213;
																				}
																				else{
																					HX_STACK_LINE(1738)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1738)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1738)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1738)
																			{
																				HX_STACK_LINE(1738)
																				ret1->x = p->x;
																				HX_STACK_LINE(1738)
																				ret1->y = p->y;
																				HX_STACK_LINE(1738)
																				{
																				}
																			}
																			HX_STACK_LINE(1738)
																			_g214 = ret1;
																		}
																		HX_STACK_LINE(1738)
																		p = _g214;
																	}
																	HX_STACK_LINE(1739)
																	if ((fstx)){
																		HX_STACK_LINE(1739)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1740)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1741)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1741)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1744)
										::zpp_nape::geom::ZPP_GeomVert _g217;		HX_STACK_VAR(_g217,"_g217");
										HX_STACK_LINE(1744)
										{
											HX_STACK_LINE(1745)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1746)
											if (((ret->p2 == null()))){
												HX_STACK_LINE(1746)
												::zpp_nape::geom::ZPP_GeomVert _g215 = obj->next = obj;		HX_STACK_VAR(_g215,"_g215");
												HX_STACK_LINE(1746)
												::zpp_nape::geom::ZPP_GeomVert _g216 = obj->prev = _g215;		HX_STACK_VAR(_g216,"_g216");
												HX_STACK_LINE(1746)
												ret->p2 = _g216;
											}
											else{
												HX_STACK_LINE(1748)
												obj->prev = ret->p2;
												HX_STACK_LINE(1749)
												obj->next = ret->p2->next;
												HX_STACK_LINE(1750)
												ret->p2->next->prev = obj;
												HX_STACK_LINE(1751)
												ret->p2->next = obj;
											}
											HX_STACK_LINE(1753)
											_g217 = obj;
										}
										HX_STACK_LINE(1744)
										ret->p2 = _g217;
									}
								}
							}
							HX_STACK_LINE(1757)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1758)
							ret->key2 = val1;
							HX_STACK_LINE(1759)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1760)
								val1 = (int)0;
								HX_STACK_LINE(1761)
								ret->key2 = (int)0;
								HX_STACK_LINE(1762)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1765)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1766)
							ret->pr = ret->p1;
							HX_STACK_LINE(1767)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1768)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1771)
							ret->pr = ret->p2;
							HX_STACK_LINE(1772)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1773)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1777)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1778)
						{
							HX_STACK_LINE(1779)
							ret->okey1 = val1;
							HX_STACK_LINE(1780)
							{
								HX_STACK_LINE(1780)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1780)
								while((true)){
									HX_STACK_LINE(1780)
									if ((!(((_g < (int)8))))){
										HX_STACK_LINE(1780)
										break;
									}
									HX_STACK_LINE(1780)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1781)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1782)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1783)
										if (((i == (int)0))){
											HX_STACK_LINE(1784)
											::zpp_nape::geom::ZPP_GeomVert _g219;		HX_STACK_VAR(_g219,"_g219");
											HX_STACK_LINE(1784)
											{
												HX_STACK_LINE(1784)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1784)
												{
													HX_STACK_LINE(1784)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert _g218 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g218,"_g218");
														HX_STACK_LINE(1784)
														ret1 = _g218;
													}
													else{
														HX_STACK_LINE(1784)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1784)
														ret1->next = null();
													}
													HX_STACK_LINE(1784)
													ret1->forced = false;
												}
												HX_STACK_LINE(1784)
												{
													HX_STACK_LINE(1784)
													ret1->x = x0;
													HX_STACK_LINE(1784)
													ret1->y = y0;
													HX_STACK_LINE(1784)
													{
													}
												}
												HX_STACK_LINE(1784)
												_g219 = ret1;
											}
											HX_STACK_LINE(1784)
											p = _g219;
											HX_STACK_LINE(1785)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1785)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1787)
											if (((i == (int)2))){
												HX_STACK_LINE(1788)
												::zpp_nape::geom::ZPP_GeomVert _g221;		HX_STACK_VAR(_g221,"_g221");
												HX_STACK_LINE(1788)
												{
													HX_STACK_LINE(1788)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1788)
													{
														HX_STACK_LINE(1788)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert _g220 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g220,"_g220");
															HX_STACK_LINE(1788)
															ret1 = _g220;
														}
														else{
															HX_STACK_LINE(1788)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1788)
															ret1->next = null();
														}
														HX_STACK_LINE(1788)
														ret1->forced = false;
													}
													HX_STACK_LINE(1788)
													{
														HX_STACK_LINE(1788)
														ret1->x = x1;
														HX_STACK_LINE(1788)
														ret1->y = y0;
														HX_STACK_LINE(1788)
														{
														}
													}
													HX_STACK_LINE(1788)
													_g221 = ret1;
												}
												HX_STACK_LINE(1788)
												p = _g221;
												HX_STACK_LINE(1789)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1789)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1791)
												if (((i == (int)4))){
													HX_STACK_LINE(1792)
													::zpp_nape::geom::ZPP_GeomVert _g223;		HX_STACK_VAR(_g223,"_g223");
													HX_STACK_LINE(1792)
													{
														HX_STACK_LINE(1792)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1792)
														{
															HX_STACK_LINE(1792)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert _g222 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g222,"_g222");
																HX_STACK_LINE(1792)
																ret1 = _g222;
															}
															else{
																HX_STACK_LINE(1792)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1792)
																ret1->next = null();
															}
															HX_STACK_LINE(1792)
															ret1->forced = false;
														}
														HX_STACK_LINE(1792)
														{
															HX_STACK_LINE(1792)
															ret1->x = x1;
															HX_STACK_LINE(1792)
															ret1->y = y1;
															HX_STACK_LINE(1792)
															{
															}
														}
														HX_STACK_LINE(1792)
														_g223 = ret1;
													}
													HX_STACK_LINE(1792)
													p = _g223;
													HX_STACK_LINE(1793)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1793)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1795)
													if (((i == (int)6))){
														HX_STACK_LINE(1796)
														::zpp_nape::geom::ZPP_GeomVert _g225;		HX_STACK_VAR(_g225,"_g225");
														HX_STACK_LINE(1796)
														{
															HX_STACK_LINE(1796)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1796)
															{
																HX_STACK_LINE(1796)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert _g224 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g224,"_g224");
																	HX_STACK_LINE(1796)
																	ret1 = _g224;
																}
																else{
																	HX_STACK_LINE(1796)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1796)
																	ret1->next = null();
																}
																HX_STACK_LINE(1796)
																ret1->forced = false;
															}
															HX_STACK_LINE(1796)
															{
																HX_STACK_LINE(1796)
																ret1->x = x0;
																HX_STACK_LINE(1796)
																ret1->y = y1;
																HX_STACK_LINE(1796)
																{
																}
															}
															HX_STACK_LINE(1796)
															_g225 = ret1;
														}
														HX_STACK_LINE(1796)
														p = _g225;
														HX_STACK_LINE(1797)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1797)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1799)
														if (((i == (int)1))){
															HX_STACK_LINE(1800)
															p = ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															HX_STACK_LINE(1801)
															if (((p == null()))){
																HX_STACK_LINE(1802)
																::zpp_nape::geom::ZPP_GeomVert _g227;		HX_STACK_VAR(_g227,"_g227");
																HX_STACK_LINE(1802)
																{
																	HX_STACK_LINE(1802)
																	Float x = this->xlerp(x0,x1,y0,v0,v1,iso,quality);		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1802)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1802)
																	{
																		HX_STACK_LINE(1802)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert _g226 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g226,"_g226");
																			HX_STACK_LINE(1802)
																			ret1 = _g226;
																		}
																		else{
																			HX_STACK_LINE(1802)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1802)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1802)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1802)
																	{
																		HX_STACK_LINE(1802)
																		ret1->x = x;
																		HX_STACK_LINE(1802)
																		ret1->y = y0;
																		HX_STACK_LINE(1802)
																		{
																		}
																	}
																	HX_STACK_LINE(1802)
																	_g227 = ret1;
																}
																HX_STACK_LINE(1802)
																p = _g227;
																HX_STACK_LINE(1803)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
															else{
																HX_STACK_LINE(1805)
																::zpp_nape::geom::ZPP_GeomVert _g229;		HX_STACK_VAR(_g229,"_g229");
																HX_STACK_LINE(1805)
																{
																	HX_STACK_LINE(1805)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1805)
																	{
																		HX_STACK_LINE(1805)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert _g228 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g228,"_g228");
																			HX_STACK_LINE(1805)
																			ret1 = _g228;
																		}
																		else{
																			HX_STACK_LINE(1805)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1805)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1805)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1805)
																	{
																		HX_STACK_LINE(1805)
																		ret1->x = p->x;
																		HX_STACK_LINE(1805)
																		ret1->y = p->y;
																		HX_STACK_LINE(1805)
																		{
																		}
																	}
																	HX_STACK_LINE(1805)
																	_g229 = ret1;
																}
																HX_STACK_LINE(1805)
																p = _g229;
															}
															HX_STACK_LINE(1806)
															if ((fsty)){
																HX_STACK_LINE(1806)
																p->forced = true;
															}
															HX_STACK_LINE(1807)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1808)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1808)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1811)
															if (((i == (int)5))){
																HX_STACK_LINE(1812)
																p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																HX_STACK_LINE(1813)
																if (((p == null()))){
																	HX_STACK_LINE(1814)
																	::zpp_nape::geom::ZPP_GeomVert _g231;		HX_STACK_VAR(_g231,"_g231");
																	HX_STACK_LINE(1814)
																	{
																		HX_STACK_LINE(1814)
																		Float x = this->xlerp(x0,x1,y1,v3,v2,iso,quality);		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1814)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1814)
																		{
																			HX_STACK_LINE(1814)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert _g230 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g230,"_g230");
																				HX_STACK_LINE(1814)
																				ret1 = _g230;
																			}
																			else{
																				HX_STACK_LINE(1814)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1814)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1814)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1814)
																		{
																			HX_STACK_LINE(1814)
																			ret1->x = x;
																			HX_STACK_LINE(1814)
																			ret1->y = y1;
																			HX_STACK_LINE(1814)
																			{
																			}
																		}
																		HX_STACK_LINE(1814)
																		_g231 = ret1;
																	}
																	HX_STACK_LINE(1814)
																	p = _g231;
																	HX_STACK_LINE(1815)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
																else{
																	HX_STACK_LINE(1817)
																	::zpp_nape::geom::ZPP_GeomVert _g233;		HX_STACK_VAR(_g233,"_g233");
																	HX_STACK_LINE(1817)
																	{
																		HX_STACK_LINE(1817)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1817)
																		{
																			HX_STACK_LINE(1817)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert _g232 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g232,"_g232");
																				HX_STACK_LINE(1817)
																				ret1 = _g232;
																			}
																			else{
																				HX_STACK_LINE(1817)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1817)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1817)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1817)
																		{
																			HX_STACK_LINE(1817)
																			ret1->x = p->x;
																			HX_STACK_LINE(1817)
																			ret1->y = p->y;
																			HX_STACK_LINE(1817)
																			{
																			}
																		}
																		HX_STACK_LINE(1817)
																		_g233 = ret1;
																	}
																	HX_STACK_LINE(1817)
																	p = _g233;
																}
																HX_STACK_LINE(1818)
																if ((sndy)){
																	HX_STACK_LINE(1818)
																	p->forced = true;
																}
																HX_STACK_LINE(1819)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1820)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1820)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1823)
																if (((i == (int)3))){
																	HX_STACK_LINE(1824)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1825)
																	if (((p == null()))){
																		HX_STACK_LINE(1826)
																		::zpp_nape::geom::ZPP_GeomVert _g235;		HX_STACK_VAR(_g235,"_g235");
																		HX_STACK_LINE(1826)
																		{
																			HX_STACK_LINE(1826)
																			Float y = this->ylerp(y0,y1,x1,v1,v2,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1826)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1826)
																			{
																				HX_STACK_LINE(1826)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert _g234 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g234,"_g234");
																					HX_STACK_LINE(1826)
																					ret1 = _g234;
																				}
																				else{
																					HX_STACK_LINE(1826)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1826)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1826)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1826)
																			{
																				HX_STACK_LINE(1826)
																				ret1->x = x1;
																				HX_STACK_LINE(1826)
																				ret1->y = y;
																				HX_STACK_LINE(1826)
																				{
																				}
																			}
																			HX_STACK_LINE(1826)
																			_g235 = ret1;
																		}
																		HX_STACK_LINE(1826)
																		p = _g235;
																		HX_STACK_LINE(1827)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																	else{
																		HX_STACK_LINE(1829)
																		::zpp_nape::geom::ZPP_GeomVert _g237;		HX_STACK_VAR(_g237,"_g237");
																		HX_STACK_LINE(1829)
																		{
																			HX_STACK_LINE(1829)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1829)
																			{
																				HX_STACK_LINE(1829)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert _g236 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g236,"_g236");
																					HX_STACK_LINE(1829)
																					ret1 = _g236;
																				}
																				else{
																					HX_STACK_LINE(1829)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1829)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1829)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1829)
																			{
																				HX_STACK_LINE(1829)
																				ret1->x = p->x;
																				HX_STACK_LINE(1829)
																				ret1->y = p->y;
																				HX_STACK_LINE(1829)
																				{
																				}
																			}
																			HX_STACK_LINE(1829)
																			_g237 = ret1;
																		}
																		HX_STACK_LINE(1829)
																		p = _g237;
																	}
																	HX_STACK_LINE(1830)
																	if ((sndx)){
																		HX_STACK_LINE(1830)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1831)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1832)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1832)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1836)
																	p = ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	HX_STACK_LINE(1837)
																	if (((p == null()))){
																		HX_STACK_LINE(1838)
																		::zpp_nape::geom::ZPP_GeomVert _g239;		HX_STACK_VAR(_g239,"_g239");
																		HX_STACK_LINE(1838)
																		{
																			HX_STACK_LINE(1838)
																			Float y = this->ylerp(y0,y1,x0,v0,v3,iso,quality);		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1838)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1838)
																			{
																				HX_STACK_LINE(1838)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert _g238 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g238,"_g238");
																					HX_STACK_LINE(1838)
																					ret1 = _g238;
																				}
																				else{
																					HX_STACK_LINE(1838)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1838)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1838)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1838)
																			{
																				HX_STACK_LINE(1838)
																				ret1->x = x0;
																				HX_STACK_LINE(1838)
																				ret1->y = y;
																				HX_STACK_LINE(1838)
																				{
																				}
																			}
																			HX_STACK_LINE(1838)
																			_g239 = ret1;
																		}
																		HX_STACK_LINE(1838)
																		p = _g239;
																		HX_STACK_LINE(1839)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																	else{
																		HX_STACK_LINE(1841)
																		::zpp_nape::geom::ZPP_GeomVert _g241;		HX_STACK_VAR(_g241,"_g241");
																		HX_STACK_LINE(1841)
																		{
																			HX_STACK_LINE(1841)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1841)
																			{
																				HX_STACK_LINE(1841)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert _g240 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g240,"_g240");
																					HX_STACK_LINE(1841)
																					ret1 = _g240;
																				}
																				else{
																					HX_STACK_LINE(1841)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1841)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1841)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1841)
																			{
																				HX_STACK_LINE(1841)
																				ret1->x = p->x;
																				HX_STACK_LINE(1841)
																				ret1->y = p->y;
																				HX_STACK_LINE(1841)
																				{
																				}
																			}
																			HX_STACK_LINE(1841)
																			_g241 = ret1;
																		}
																		HX_STACK_LINE(1841)
																		p = _g241;
																	}
																	HX_STACK_LINE(1842)
																	if ((fstx)){
																		HX_STACK_LINE(1842)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1843)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1844)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1844)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1847)
										::zpp_nape::geom::ZPP_GeomVert _g244;		HX_STACK_VAR(_g244,"_g244");
										HX_STACK_LINE(1847)
										{
											HX_STACK_LINE(1848)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1849)
											if (((ret->p1 == null()))){
												HX_STACK_LINE(1849)
												::zpp_nape::geom::ZPP_GeomVert _g242 = obj->next = obj;		HX_STACK_VAR(_g242,"_g242");
												HX_STACK_LINE(1849)
												::zpp_nape::geom::ZPP_GeomVert _g243 = obj->prev = _g242;		HX_STACK_VAR(_g243,"_g243");
												HX_STACK_LINE(1849)
												ret->p1 = _g243;
											}
											else{
												HX_STACK_LINE(1851)
												obj->prev = ret->p1;
												HX_STACK_LINE(1852)
												obj->next = ret->p1->next;
												HX_STACK_LINE(1853)
												ret->p1->next->prev = obj;
												HX_STACK_LINE(1854)
												ret->p1->next = obj;
											}
											HX_STACK_LINE(1856)
											_g244 = obj;
										}
										HX_STACK_LINE(1847)
										ret->p1 = _g244;
									}
								}
							}
							HX_STACK_LINE(1860)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1861)
							ret->key1 = val1;
							HX_STACK_LINE(1862)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1863)
								val1 = (int)0;
								HX_STACK_LINE(1864)
								ret->key1 = (int)0;
								HX_STACK_LINE(1865)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1868)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1868)
							ret = null();
						}
						else{
							HX_STACK_LINE(1870)
							ret->pr = ret->p1;
							HX_STACK_LINE(1871)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1872)
							ret->keyr = ret->key1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1878)
		return ret;
	}
	HX_STACK_LINE(964)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC14(ZPP_MarchingSquares_obj,marchSquare,return )

Float ZPP_MarchingSquares_obj::lerp( Float x0,Float x1,Float v0,Float v1){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","lerp",0xcf3b2584,"zpp_nape.geom.ZPP_MarchingSquares.lerp","zpp_nape/geom/MarchingSquares.hx",1883,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_LINE(1883)
	if (((v0 == (int)0))){
		HX_STACK_LINE(1883)
		return x0;
	}
	else{
		HX_STACK_LINE(1884)
		if (((v1 == (int)0))){
			HX_STACK_LINE(1884)
			return x1;
		}
		else{
			HX_STACK_LINE(1886)
			Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1887)
			Float t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1887)
			if ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(1887)
				t = 0.5;
			}
			else{
				HX_STACK_LINE(1887)
				t = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1888)
			if (((t < (int)0))){
				HX_STACK_LINE(1888)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1889)
				if (((t > (int)1))){
					HX_STACK_LINE(1889)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1890)
			return (x0 + (t * ((x1 - x0))));
		}
	}
	HX_STACK_LINE(1883)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_MarchingSquares_obj,lerp,return )

Float ZPP_MarchingSquares_obj::xlerp( Float x0,Float x1,Float y,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","xlerp",0x71eb4742,"zpp_nape.geom.ZPP_MarchingSquares.xlerp","zpp_nape/geom/MarchingSquares.hx",1893,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(1894)
	Float xm;		HX_STACK_VAR(xm,"xm");
	HX_STACK_LINE(1894)
	if (((v0 == (int)0))){
		HX_STACK_LINE(1894)
		xm = x0;
	}
	else{
		HX_STACK_LINE(1894)
		if (((v1 == (int)0))){
			HX_STACK_LINE(1894)
			xm = x1;
		}
		else{
			HX_STACK_LINE(1894)
			Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1894)
			Float t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1894)
			if ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(1894)
				t = 0.5;
			}
			else{
				HX_STACK_LINE(1894)
				t = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1894)
			if (((t < (int)0))){
				HX_STACK_LINE(1894)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1894)
				if (((t > (int)1))){
					HX_STACK_LINE(1894)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1894)
			xm = (x0 + (t * ((x1 - x0))));
		}
	}
	HX_STACK_LINE(1895)
	while((true)){
		HX_STACK_LINE(1895)
		int _g = (quality)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1895)
		if ((!(((  (((  (((_g != (int)0))) ? bool((x0 < xm)) : bool(false) ))) ? bool((xm < x1)) : bool(false) ))))){
			HX_STACK_LINE(1895)
			break;
		}
		HX_STACK_LINE(1896)
		Float vm = iso(xm,y).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1897)
		if (((vm == (int)0))){
			HX_STACK_LINE(1897)
			break;
		}
		HX_STACK_LINE(1898)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1899)
			x1 = xm;
			HX_STACK_LINE(1900)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1903)
			x0 = xm;
			HX_STACK_LINE(1904)
			v0 = vm;
		}
		HX_STACK_LINE(1906)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1906)
		if (((v0 == (int)0))){
			HX_STACK_LINE(1906)
			_g1 = x0;
		}
		else{
			HX_STACK_LINE(1906)
			if (((v1 == (int)0))){
				HX_STACK_LINE(1906)
				_g1 = x1;
			}
			else{
				HX_STACK_LINE(1906)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1906)
				Float t;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1906)
				if ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
					HX_STACK_LINE(1906)
					t = 0.5;
				}
				else{
					HX_STACK_LINE(1906)
					t = (Float(v0) / Float(dv));
				}
				HX_STACK_LINE(1906)
				if (((t < (int)0))){
					HX_STACK_LINE(1906)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1906)
					if (((t > (int)1))){
						HX_STACK_LINE(1906)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1906)
				_g1 = (x0 + (t * ((x1 - x0))));
			}
		}
		HX_STACK_LINE(1906)
		xm = _g1;
	}
	HX_STACK_LINE(1908)
	return xm;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,xlerp,return )

Float ZPP_MarchingSquares_obj::ylerp( Float y0,Float y1,Float x,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","ylerp",0x0551dbc3,"zpp_nape.geom.ZPP_MarchingSquares.ylerp","zpp_nape/geom/MarchingSquares.hx",1910,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(1911)
	Float ym;		HX_STACK_VAR(ym,"ym");
	HX_STACK_LINE(1911)
	if (((v0 == (int)0))){
		HX_STACK_LINE(1911)
		ym = y0;
	}
	else{
		HX_STACK_LINE(1911)
		if (((v1 == (int)0))){
			HX_STACK_LINE(1911)
			ym = y1;
		}
		else{
			HX_STACK_LINE(1911)
			Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1911)
			Float t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1911)
			if ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(1911)
				t = 0.5;
			}
			else{
				HX_STACK_LINE(1911)
				t = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1911)
			if (((t < (int)0))){
				HX_STACK_LINE(1911)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1911)
				if (((t > (int)1))){
					HX_STACK_LINE(1911)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1911)
			ym = (y0 + (t * ((y1 - y0))));
		}
	}
	HX_STACK_LINE(1912)
	while((true)){
		HX_STACK_LINE(1912)
		int _g = (quality)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1912)
		if ((!(((  (((  (((_g != (int)0))) ? bool((y0 < ym)) : bool(false) ))) ? bool((ym < y1)) : bool(false) ))))){
			HX_STACK_LINE(1912)
			break;
		}
		HX_STACK_LINE(1913)
		Float vm = iso(x,ym).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1914)
		if (((vm == (int)0))){
			HX_STACK_LINE(1914)
			break;
		}
		HX_STACK_LINE(1915)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1916)
			y1 = ym;
			HX_STACK_LINE(1917)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1920)
			y0 = ym;
			HX_STACK_LINE(1921)
			v0 = vm;
		}
		HX_STACK_LINE(1923)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1923)
		if (((v0 == (int)0))){
			HX_STACK_LINE(1923)
			_g1 = y0;
		}
		else{
			HX_STACK_LINE(1923)
			if (((v1 == (int)0))){
				HX_STACK_LINE(1923)
				_g1 = y1;
			}
			else{
				HX_STACK_LINE(1923)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1923)
				Float t;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1923)
				if ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
					HX_STACK_LINE(1923)
					t = 0.5;
				}
				else{
					HX_STACK_LINE(1923)
					t = (Float(v0) / Float(dv));
				}
				HX_STACK_LINE(1923)
				if (((t < (int)0))){
					HX_STACK_LINE(1923)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1923)
					if (((t > (int)1))){
						HX_STACK_LINE(1923)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1923)
				_g1 = (y0 + (t * ((y1 - y0))));
			}
		}
		HX_STACK_LINE(1923)
		ym = _g1;
	}
	HX_STACK_LINE(1925)
	return ym;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,ylerp,return )

::zpp_nape::geom::ZPP_MarchingSquares ZPP_MarchingSquares_obj::me;

::zpp_nape::util::ZNPArray2_Float ZPP_MarchingSquares_obj::isos;

::zpp_nape::util::ZNPArray2_ZPP_GeomVert ZPP_MarchingSquares_obj::ints;

::zpp_nape::util::ZNPArray2_ZPP_MarchPair ZPP_MarchingSquares_obj::map;

Void ZPP_MarchingSquares_obj::run( Dynamic iso,Float bx0,Float by0,Float bx1,Float by1,::nape::geom::Vec2 cell,int quality,bool combine,::nape::geom::GeomPolyList ret){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","run",0x1c7fb4de,"zpp_nape.geom.ZPP_MarchingSquares.run","zpp_nape/geom/MarchingSquares.hx",276,0xc3305538)
		HX_STACK_ARG(iso,"iso")
		HX_STACK_ARG(bx0,"bx0")
		HX_STACK_ARG(by0,"by0")
		HX_STACK_ARG(bx1,"bx1")
		HX_STACK_ARG(by1,"by1")
		HX_STACK_ARG(cell,"cell")
		HX_STACK_ARG(quality,"quality")
		HX_STACK_ARG(combine,"combine")
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(277)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(277)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(277)
					_this->_validate();
				}
			}
			HX_STACK_LINE(277)
			_g = cell->zpp_inner->x;
		}
		HX_STACK_LINE(277)
		Float xp = (Float(((bx1 - bx0))) / Float(_g));		HX_STACK_VAR(xp,"xp");
		HX_STACK_LINE(278)
		int xn = ::Std_obj::_int(xp);		HX_STACK_VAR(xn,"xn");
		HX_STACK_LINE(279)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(279)
					_this->_validate();
				}
			}
			HX_STACK_LINE(279)
			_g1 = cell->zpp_inner->y;
		}
		HX_STACK_LINE(279)
		Float yp = (Float(((by1 - by0))) / Float(_g1));		HX_STACK_VAR(yp,"yp");
		HX_STACK_LINE(280)
		int yn = ::Std_obj::_int(yp);		HX_STACK_VAR(yn,"yn");
		HX_STACK_LINE(281)
		if (((xp != xn))){
			HX_STACK_LINE(281)
			(xn)++;
		}
		HX_STACK_LINE(282)
		if (((yp != yn))){
			HX_STACK_LINE(282)
			(yn)++;
		}
		HX_STACK_LINE(283)
		if ((combine)){
			HX_STACK_LINE(284)
			if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::map == null()))){
				HX_STACK_LINE(285)
				::zpp_nape::util::ZNPArray2_ZPP_MarchPair _g2 = ::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__new(xn,yn);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(285)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map = _g2;
			}
			else{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map->resize(xn,yn,null());
			}
		}
		HX_STACK_LINE(291)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::isos == null()))){
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPArray2_Float _g3 = ::zpp_nape::util::ZNPArray2_Float_obj::__new((xn + (int)1),(yn + (int)1));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(292)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos = _g3;
		}
		else{
			HX_STACK_LINE(295)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos->resize((xn + (int)1),(yn + (int)1),(int)0);
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(297)
			int _g2 = (yn + (int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				int y = (_g11)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(298)
				Float yc;		HX_STACK_VAR(yc,"yc");
				HX_STACK_LINE(298)
				if (((y == (int)0))){
					HX_STACK_LINE(298)
					yc = by0;
				}
				else{
					HX_STACK_LINE(298)
					if (((y <= yn))){
						HX_STACK_LINE(298)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(298)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(298)
									_this->_validate();
								}
							}
							HX_STACK_LINE(298)
							_g4 = cell->zpp_inner->y;
						}
						HX_STACK_LINE(298)
						Float _g5 = (_g4 * y);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(298)
						yc = (by0 + _g5);
					}
					else{
						HX_STACK_LINE(298)
						yc = by1;
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(299)
					int _g21 = (xn + (int)1);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(299)
					while((true)){
						HX_STACK_LINE(299)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(299)
							break;
						}
						HX_STACK_LINE(299)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(300)
						Float xc;		HX_STACK_VAR(xc,"xc");
						HX_STACK_LINE(300)
						if (((x == (int)0))){
							HX_STACK_LINE(300)
							xc = bx0;
						}
						else{
							HX_STACK_LINE(300)
							if (((x <= xn))){
								HX_STACK_LINE(300)
								Float _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(300)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(300)
											_this->_validate();
										}
									}
									HX_STACK_LINE(300)
									_g6 = cell->zpp_inner->x;
								}
								HX_STACK_LINE(300)
								Float _g7 = (_g6 * x);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(300)
								xc = (bx0 + _g7);
							}
							else{
								HX_STACK_LINE(300)
								xc = bx1;
							}
						}
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::zpp_nape::util::ZNPArray2_Float _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(301)
							Float obj = iso(xc,yc).Cast< Float >();		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(301)
							_this->list[((y * _this->width) + x)] = obj;
						}
					}
				}
			}
		}
		HX_STACK_LINE(304)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::ints == null()))){
			HX_STACK_LINE(305)
			::zpp_nape::util::ZNPArray2_ZPP_GeomVert _g8 = ::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__new((xn + (int)1),(((int(yn) << int((int)1))) + (int)1));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(305)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints = _g8;
		}
		else{
			HX_STACK_LINE(308)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints->resize((xn + (int)1),(((int(yn) << int((int)1))) + (int)1),null());
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_MarchSpan spans = null();		HX_STACK_VAR(spans,"spans");
		HX_STACK_LINE(311)
		if ((combine)){
			HX_STACK_LINE(313)
			if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
				HX_STACK_LINE(314)
				::zpp_nape::geom::ZPP_MarchSpan _g9 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(314)
				spans = _g9;
			}
			else{
				HX_STACK_LINE(320)
				spans = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(321)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = spans->next;
				HX_STACK_LINE(322)
				spans->next = null();
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				spans->out = false;
				HX_STACK_LINE(327)
				spans->rank = (int)0;
			}
		}
		HX_STACK_LINE(330)
		Float py = by0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				if ((!(((_g2 < yn))))){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(331)
				int y = (_g2)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(332)
				Float y0 = py;		HX_STACK_VAR(y0,"y0");
				HX_STACK_LINE(333)
				Float y1;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(333)
				if (((y == (yn - (int)1)))){
					HX_STACK_LINE(333)
					y1 = by1;
				}
				else{
					HX_STACK_LINE(333)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(333)
					{
						HX_STACK_LINE(333)
						{
							HX_STACK_LINE(333)
							::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(333)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(333)
								_this->_validate();
							}
						}
						HX_STACK_LINE(333)
						_g10 = cell->zpp_inner->y;
					}
					HX_STACK_LINE(333)
					Float _g11 = (_g10 * ((y + (int)1)));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(333)
					y1 = (by0 + _g11);
				}
				HX_STACK_LINE(334)
				py = y1;
				HX_STACK_LINE(335)
				Float px = bx0;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(336)
				::zpp_nape::geom::ZPP_MarchPair pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						if ((!(((_g11 < xn))))){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(337)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(338)
						Float x0 = px;		HX_STACK_VAR(x0,"x0");
						HX_STACK_LINE(339)
						Float x1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(339)
						if (((x == (xn - (int)1)))){
							HX_STACK_LINE(339)
							x1 = bx1;
						}
						else{
							HX_STACK_LINE(339)
							Float _g12;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(339)
							{
								HX_STACK_LINE(339)
								{
									HX_STACK_LINE(339)
									::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(339)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(339)
										_this->_validate();
									}
								}
								HX_STACK_LINE(339)
								_g12 = cell->zpp_inner->x;
							}
							HX_STACK_LINE(339)
							Float _g13 = (_g12 * ((x + (int)1)));		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(339)
							x1 = (bx0 + _g13);
						}
						HX_STACK_LINE(340)
						px = x1;
						HX_STACK_LINE(341)
						bool fstx = (bool((x == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fstx,"fstx");
						HX_STACK_LINE(342)
						bool fsty = (bool((y == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fsty,"fsty");
						HX_STACK_LINE(343)
						bool sndx = (bool((x == (xn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndx,"sndx");
						HX_STACK_LINE(344)
						bool sndy = (bool((y == (yn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndy,"sndy");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchPair pp = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me->marchSquare(iso,::zpp_nape::geom::ZPP_MarchingSquares_obj::isos,::zpp_nape::geom::ZPP_MarchingSquares_obj::ints,x0,y0,x1,y1,x,y,fstx,fsty,sndx,sndy,quality);		HX_STACK_VAR(pp,"pp");
						HX_STACK_LINE(346)
						if (((pp == null()))){
							HX_STACK_LINE(347)
							pre = null();
							HX_STACK_LINE(348)
							continue;
						}
						HX_STACK_LINE(350)
						if ((combine)){
							HX_STACK_LINE(351)
							::zpp_nape::geom::ZPP_GeomVert pd;		HX_STACK_VAR(pd,"pd");
							HX_STACK_LINE(351)
							if (((bool((pp->p2 != null())) && bool((pp->okey2 != (int)14))))){
								HX_STACK_LINE(351)
								pd = pp->p2;
							}
							else{
								HX_STACK_LINE(351)
								pd = pp->p1;
							}
							HX_STACK_LINE(352)
							if (((((int(((  (((pd == pp->p2))) ? int(pp->okey2) : int(pp->okey1) ))) & int((int)128))) == (int)0))){
								HX_STACK_LINE(352)
								pp->pd = pd->prev;
							}
							else{
								HX_STACK_LINE(352)
								pp->pd = pd->prev->prev;
							}
							HX_STACK_LINE(353)
							{
								HX_STACK_LINE(353)
								::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(353)
								_this->list[((y * _this->width) + x)] = pp;
							}
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",354,0xc3305538)
									{
										HX_STACK_LINE(354)
										int key = pp->key1;		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(354)
										int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",354,0xc3305538)
												{
													HX_STACK_LINE(354)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(354)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(354)
							if (((  (((pre != null()))) ? bool(_Function_6_1::Block(pp)) : bool(false) ))){
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combLR(pre,pp);
								HX_STACK_LINE(364)
								pp->span1 = pre->spanr;
							}
							else{
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(377)
										::zpp_nape::geom::ZPP_MarchSpan _g14 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(_g14,"_g14");
										HX_STACK_LINE(377)
										pp->span1 = _g14;
									}
									else{
										HX_STACK_LINE(383)
										pp->span1 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(384)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span1->next;
										HX_STACK_LINE(385)
										pp->span1->next = null();
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span1;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(390)
										_this->out = false;
										HX_STACK_LINE(390)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(392)
								pp->span1->next = spans;
								HX_STACK_LINE(393)
								spans = pp->span1;
							}
							HX_STACK_LINE(395)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(396)
								{
									HX_STACK_LINE(397)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(398)
										::zpp_nape::geom::ZPP_MarchSpan _g15 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(398)
										pp->span2 = _g15;
									}
									else{
										HX_STACK_LINE(404)
										pp->span2 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span2->next;
										HX_STACK_LINE(406)
										pp->span2->next = null();
									}
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span2;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(411)
										_this->out = false;
										HX_STACK_LINE(411)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(413)
								pp->span2->next = spans;
								HX_STACK_LINE(414)
								spans = pp->span2;
								HX_STACK_LINE(415)
								pp->spanr = pp->span2;
							}
							else{
								HX_STACK_LINE(417)
								pp->spanr = pp->span1;
							}
							struct _Function_6_2{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",418,0xc3305538)
									{
										HX_STACK_LINE(418)
										int flag = (int(((int(pp->keyr) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",418,0xc3305538)
												{
													HX_STACK_LINE(418)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							if ((_Function_6_2::Block(pp))){
								HX_STACK_LINE(418)
								pre = pp;
							}
							else{
								HX_STACK_LINE(419)
								pre = null();
							}
						}
						else{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p1);
							HX_STACK_LINE(423)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(423)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p2);
							}
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(425)
								::zpp_nape::geom::ZPP_MarchPair o = pp;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(434)
								{
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert _g16 = o->pd = null();		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert _g17 = o->pr = _g16;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert _g18 = o->p2 = _g17;		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(434)
									o->p1 = _g18;
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_MarchSpan _g19 = o->spanr = null();		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_MarchSpan _g20 = o->span2 = _g19;		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(434)
									o->span1 = _g20;
								}
								HX_STACK_LINE(435)
								o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if ((!(combine))){
			HX_STACK_LINE(445)
			return null();
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(447)
			while((true)){
				HX_STACK_LINE(447)
				if ((!(((_g2 < yn))))){
					HX_STACK_LINE(447)
					break;
				}
				HX_STACK_LINE(447)
				int y = (_g2)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(448)
				::zpp_nape::geom::ZPP_MarchSpan pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(449)
					while((true)){
						HX_STACK_LINE(449)
						if ((!(((_g11 < xn))))){
							HX_STACK_LINE(449)
							break;
						}
						HX_STACK_LINE(449)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(450)
						::zpp_nape::geom::ZPP_MarchPair b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(450)
						{
							HX_STACK_LINE(450)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(450)
							b = _this->list->__get(((y * _this->width) + x)).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(451)
						if (((b == null()))){
							HX_STACK_LINE(452)
							pre = null();
							HX_STACK_LINE(453)
							continue;
						}
						HX_STACK_LINE(455)
						int bkey;		HX_STACK_VAR(bkey,"bkey");
						HX_STACK_LINE(455)
						if (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))){
							HX_STACK_LINE(455)
							bkey = b->okey2;
						}
						else{
							HX_STACK_LINE(455)
							bkey = b->okey1;
						}
						struct _Function_5_1{
							inline static bool Block( int &bkey){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",456,0xc3305538)
								{
									HX_STACK_LINE(456)
									int flag = (int(bkey) & int((int)7));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",456,0xc3305538)
											{
												HX_STACK_LINE(456)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(456)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(456)
						if ((!(_Function_5_1::Block(bkey)))){
							HX_STACK_LINE(457)
							pre = null();
							HX_STACK_LINE(458)
							continue;
						}
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_MarchPair a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(460)
							a = _this->list->__get(((((y - (int)1)) * _this->width) + x)).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(461)
						if (((a == null()))){
							HX_STACK_LINE(462)
							pre = null();
							HX_STACK_LINE(463)
							continue;
						}
						HX_STACK_LINE(465)
						int akey;		HX_STACK_VAR(akey,"akey");
						HX_STACK_LINE(465)
						if (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))){
							HX_STACK_LINE(465)
							akey = a->okey2;
						}
						else{
							HX_STACK_LINE(465)
							akey = a->okey1;
						}
						struct _Function_5_2{
							inline static bool Block( int &akey){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",466,0xc3305538)
								{
									HX_STACK_LINE(466)
									int flag = (int(((int(akey) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/MarchingSquares.hx",466,0xc3305538)
											{
												HX_STACK_LINE(466)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(466)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(466)
						if ((!(_Function_5_2::Block(akey)))){
							HX_STACK_LINE(467)
							pre = null();
							HX_STACK_LINE(468)
							continue;
						}
						HX_STACK_LINE(470)
						::zpp_nape::geom::ZPP_MarchSpan ad;		HX_STACK_VAR(ad,"ad");
						HX_STACK_LINE(470)
						if (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))){
							HX_STACK_LINE(470)
							ad = a->span2;
						}
						else{
							HX_STACK_LINE(470)
							ad = a->span1;
						}
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_MarchSpan bu;		HX_STACK_VAR(bu,"bu");
						HX_STACK_LINE(471)
						if (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))){
							HX_STACK_LINE(471)
							bu = b->span2;
						}
						else{
							HX_STACK_LINE(471)
							bu = b->span1;
						}
						HX_STACK_LINE(472)
						::zpp_nape::geom::ZPP_MarchSpan _g21;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(472)
						if (((ad == ad->parent))){
							HX_STACK_LINE(473)
							_g21 = ad;
						}
						else{
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(476)
							::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(477)
							while((true)){
								HX_STACK_LINE(477)
								if ((!(((obj != obj->parent))))){
									HX_STACK_LINE(477)
									break;
								}
								HX_STACK_LINE(478)
								::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(479)
								obj->parent = stack;
								HX_STACK_LINE(480)
								stack = obj;
								HX_STACK_LINE(481)
								obj = nxt;
							}
							HX_STACK_LINE(483)
							while((true)){
								HX_STACK_LINE(483)
								if ((!(((stack != null()))))){
									HX_STACK_LINE(483)
									break;
								}
								HX_STACK_LINE(484)
								::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(485)
								stack->parent = obj;
								HX_STACK_LINE(486)
								stack = nxt;
							}
							HX_STACK_LINE(488)
							_g21 = obj;
						}
						HX_STACK_LINE(490)
						::zpp_nape::geom::ZPP_MarchSpan _g22;		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(490)
						if (((bu == bu->parent))){
							HX_STACK_LINE(491)
							_g22 = bu;
						}
						else{
							HX_STACK_LINE(493)
							::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(494)
							::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(495)
							while((true)){
								HX_STACK_LINE(495)
								if ((!(((obj != obj->parent))))){
									HX_STACK_LINE(495)
									break;
								}
								HX_STACK_LINE(496)
								::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(497)
								obj->parent = stack;
								HX_STACK_LINE(498)
								stack = obj;
								HX_STACK_LINE(499)
								obj = nxt;
							}
							HX_STACK_LINE(501)
							while((true)){
								HX_STACK_LINE(501)
								if ((!(((stack != null()))))){
									HX_STACK_LINE(501)
									break;
								}
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(503)
								stack->parent = obj;
								HX_STACK_LINE(504)
								stack = nxt;
							}
							HX_STACK_LINE(506)
							_g22 = obj;
						}
						HX_STACK_LINE(472)
						if (((_g21 == _g22))){
							HX_STACK_LINE(509)
							if (((pre != bu))){
								HX_STACK_LINE(510)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD_virtual(a,b);
							}
						}
						else{
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(515)
								::zpp_nape::geom::ZPP_MarchSpan xr;		HX_STACK_VAR(xr,"xr");
								HX_STACK_LINE(515)
								if (((ad == ad->parent))){
									HX_STACK_LINE(516)
									xr = ad;
								}
								else{
									HX_STACK_LINE(518)
									::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(519)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(520)
									while((true)){
										HX_STACK_LINE(520)
										if ((!(((obj != obj->parent))))){
											HX_STACK_LINE(520)
											break;
										}
										HX_STACK_LINE(521)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(522)
										obj->parent = stack;
										HX_STACK_LINE(523)
										stack = obj;
										HX_STACK_LINE(524)
										obj = nxt;
									}
									HX_STACK_LINE(526)
									while((true)){
										HX_STACK_LINE(526)
										if ((!(((stack != null()))))){
											HX_STACK_LINE(526)
											break;
										}
										HX_STACK_LINE(527)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(528)
										stack->parent = obj;
										HX_STACK_LINE(529)
										stack = nxt;
									}
									HX_STACK_LINE(531)
									xr = obj;
								}
								HX_STACK_LINE(534)
								::zpp_nape::geom::ZPP_MarchSpan yr;		HX_STACK_VAR(yr,"yr");
								HX_STACK_LINE(534)
								if (((bu == bu->parent))){
									HX_STACK_LINE(535)
									yr = bu;
								}
								else{
									HX_STACK_LINE(537)
									::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(538)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(539)
									while((true)){
										HX_STACK_LINE(539)
										if ((!(((obj != obj->parent))))){
											HX_STACK_LINE(539)
											break;
										}
										HX_STACK_LINE(540)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(541)
										obj->parent = stack;
										HX_STACK_LINE(542)
										stack = obj;
										HX_STACK_LINE(543)
										obj = nxt;
									}
									HX_STACK_LINE(545)
									while((true)){
										HX_STACK_LINE(545)
										if ((!(((stack != null()))))){
											HX_STACK_LINE(545)
											break;
										}
										HX_STACK_LINE(546)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(547)
										stack->parent = obj;
										HX_STACK_LINE(548)
										stack = nxt;
									}
									HX_STACK_LINE(550)
									yr = obj;
								}
								HX_STACK_LINE(553)
								if (((xr != yr))){
									HX_STACK_LINE(554)
									if (((xr->rank < yr->rank))){
										HX_STACK_LINE(554)
										xr->parent = yr;
									}
									else{
										HX_STACK_LINE(555)
										if (((xr->rank > yr->rank))){
											HX_STACK_LINE(555)
											yr->parent = xr;
										}
										else{
											HX_STACK_LINE(557)
											yr->parent = xr;
											HX_STACK_LINE(558)
											(xr->rank)++;
										}
									}
								}
							}
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD(a,b);
						}
						HX_STACK_LINE(564)
						int key;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(564)
						if (((bu == b->span2))){
							HX_STACK_LINE(564)
							key = b->okey2;
						}
						else{
							HX_STACK_LINE(564)
							key = b->okey1;
						}
						HX_STACK_LINE(565)
						if (((((int(key) & int((int)4))) != (int)0))){
							HX_STACK_LINE(565)
							pre = bu;
						}
						else{
							HX_STACK_LINE(565)
							pre = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(568)
			while((true)){
				HX_STACK_LINE(568)
				if ((!(((_g2 < yn))))){
					HX_STACK_LINE(568)
					break;
				}
				HX_STACK_LINE(568)
				int y = (_g2)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(569)
				{
					HX_STACK_LINE(569)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(569)
					while((true)){
						HX_STACK_LINE(569)
						if ((!(((_g11 < xn))))){
							HX_STACK_LINE(569)
							break;
						}
						HX_STACK_LINE(569)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(570)
						::zpp_nape::geom::ZPP_MarchPair p;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(570)
						{
							HX_STACK_LINE(570)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(570)
							p = _this->list->__get(((y * _this->width) + x)).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(571)
						if (((p == null()))){
							HX_STACK_LINE(571)
							continue;
						}
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_MarchSpan root;		HX_STACK_VAR(root,"root");
						HX_STACK_LINE(572)
						if (((p->span1 == p->span1->parent))){
							HX_STACK_LINE(573)
							root = p->span1;
						}
						else{
							HX_STACK_LINE(575)
							::zpp_nape::geom::ZPP_MarchSpan obj = p->span1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(577)
							while((true)){
								HX_STACK_LINE(577)
								if ((!(((obj != obj->parent))))){
									HX_STACK_LINE(577)
									break;
								}
								HX_STACK_LINE(578)
								::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(579)
								obj->parent = stack;
								HX_STACK_LINE(580)
								stack = obj;
								HX_STACK_LINE(581)
								obj = nxt;
							}
							HX_STACK_LINE(583)
							while((true)){
								HX_STACK_LINE(583)
								if ((!(((stack != null()))))){
									HX_STACK_LINE(583)
									break;
								}
								HX_STACK_LINE(584)
								::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(585)
								stack->parent = obj;
								HX_STACK_LINE(586)
								stack = nxt;
							}
							HX_STACK_LINE(588)
							root = obj;
						}
						HX_STACK_LINE(591)
						if ((!(root->out))){
							HX_STACK_LINE(592)
							root->out = true;
							HX_STACK_LINE(593)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p1);
						}
						HX_STACK_LINE(595)
						if (((p->p2 != null()))){
							HX_STACK_LINE(596)
							::zpp_nape::geom::ZPP_MarchSpan _g23;		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(596)
							if (((p->span2 == p->span2->parent))){
								HX_STACK_LINE(597)
								_g23 = p->span2;
							}
							else{
								HX_STACK_LINE(599)
								::zpp_nape::geom::ZPP_MarchSpan obj = p->span2;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(600)
								::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(601)
								while((true)){
									HX_STACK_LINE(601)
									if ((!(((obj != obj->parent))))){
										HX_STACK_LINE(601)
										break;
									}
									HX_STACK_LINE(602)
									::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(603)
									obj->parent = stack;
									HX_STACK_LINE(604)
									stack = obj;
									HX_STACK_LINE(605)
									obj = nxt;
								}
								HX_STACK_LINE(607)
								while((true)){
									HX_STACK_LINE(607)
									if ((!(((stack != null()))))){
										HX_STACK_LINE(607)
										break;
									}
									HX_STACK_LINE(608)
									::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(609)
									stack->parent = obj;
									HX_STACK_LINE(610)
									stack = nxt;
								}
								HX_STACK_LINE(612)
								_g23 = obj;
							}
							HX_STACK_LINE(596)
							root = _g23;
							HX_STACK_LINE(615)
							if ((!(root->out))){
								HX_STACK_LINE(616)
								root->out = true;
								HX_STACK_LINE(617)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p2);
							}
						}
						HX_STACK_LINE(620)
						{
							HX_STACK_LINE(621)
							::zpp_nape::geom::ZPP_MarchPair o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(630)
							{
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert _g24 = o->pd = null();		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert _g25 = o->pr = _g24;		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert _g26 = o->p2 = _g25;		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(630)
								o->p1 = _g26;
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_MarchSpan _g27 = o->spanr = null();		HX_STACK_VAR(_g27,"_g27");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_MarchSpan _g28 = o->span2 = _g27;		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(630)
								o->span1 = _g28;
							}
							HX_STACK_LINE(631)
							o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
							HX_STACK_LINE(632)
							::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(637)
							_this->list[((y * _this->width) + x)] = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			if ((!(((spans != null()))))){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(641)
			::zpp_nape::geom::ZPP_MarchSpan t = spans;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(642)
			spans = t->next;
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(644)
				::zpp_nape::geom::ZPP_MarchSpan o = t;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(653)
				o->parent = o;
				HX_STACK_LINE(654)
				o->next = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ZPP_MarchingSquares_obj,run,(void))

Array< int > ZPP_MarchingSquares_obj::look_march;

Float ZPP_MarchingSquares_obj::ISO( Dynamic iso,Float x,Float y){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","ISO",0x1c607ab8,"zpp_nape.geom.ZPP_MarchingSquares.ISO","zpp_nape/geom/MarchingSquares.hx",1929,0xc3305538)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1929)
	return iso(x,y).Cast< Float >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_MarchingSquares_obj,ISO,return )


ZPP_MarchingSquares_obj::ZPP_MarchingSquares_obj()
{
}

Dynamic ZPP_MarchingSquares_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { return me; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"ISO") ) { return ISO_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { return isos; }
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		if (HX_FIELD_EQ(inName,"comb") ) { return comb_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xlerp") ) { return xlerp_dyn(); }
		if (HX_FIELD_EQ(inName,"ylerp") ) { return ylerp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output_dyn(); }
		if (HX_FIELD_EQ(inName,"linkup") ) { return linkup_dyn(); }
		if (HX_FIELD_EQ(inName,"combLR") ) { return combLR_dyn(); }
		if (HX_FIELD_EQ(inName,"combUD") ) { return combUD_dyn(); }
		if (HX_FIELD_EQ(inName,"combUp") ) { return combUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linkleft") ) { return linkleft_dyn(); }
		if (HX_FIELD_EQ(inName,"linkdown") ) { return linkdown_dyn(); }
		if (HX_FIELD_EQ(inName,"combLeft") ) { return combLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"combDown") ) { return combDown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"linkright") ) { return linkright_dyn(); }
		if (HX_FIELD_EQ(inName,"combRight") ) { return combRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { return look_march; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marchSquare") ) { return marchSquare_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"combUD_virtual") ) { return combUD_virtual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MarchingSquares_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { me=inValue.Cast< ::zpp_nape::geom::ZPP_MarchingSquares >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::zpp_nape::util::ZNPArray2_ZPP_MarchPair >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { isos=inValue.Cast< ::zpp_nape::util::ZNPArray2_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::ZNPArray2_ZPP_GeomVert >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { look_march=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MarchingSquares_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("me"),
	HX_CSTRING("isos"),
	HX_CSTRING("ints"),
	HX_CSTRING("map"),
	HX_CSTRING("run"),
	HX_CSTRING("look_march"),
	HX_CSTRING("ISO"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("output"),
	HX_CSTRING("linkright"),
	HX_CSTRING("linkleft"),
	HX_CSTRING("linkdown"),
	HX_CSTRING("linkup"),
	HX_CSTRING("combLR"),
	HX_CSTRING("combUD"),
	HX_CSTRING("combUD_virtual"),
	HX_CSTRING("combLeft"),
	HX_CSTRING("combRight"),
	HX_CSTRING("combUp"),
	HX_CSTRING("combDown"),
	HX_CSTRING("comb"),
	HX_CSTRING("marchSquare"),
	HX_CSTRING("lerp"),
	HX_CSTRING("xlerp"),
	HX_CSTRING("ylerp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

#endif

Class ZPP_MarchingSquares_obj::__mClass;

void ZPP_MarchingSquares_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MarchingSquares"), hx::TCanCast< ZPP_MarchingSquares_obj> ,sStaticFields,sMemberFields,
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

void ZPP_MarchingSquares_obj::__boot()
{
	me= ::zpp_nape::geom::ZPP_MarchingSquares_obj::__new();
	look_march= Array_obj< int >::__new().Add((int)-1).Add((int)224).Add((int)56).Add((int)216).Add((int)14).Add((int)-1).Add((int)54).Add((int)214).Add((int)131).Add((int)99).Add((int)-1).Add((int)91).Add((int)141).Add((int)109).Add((int)181).Add((int)85);
}

} // end namespace zpp_nape
} // end namespace geom
