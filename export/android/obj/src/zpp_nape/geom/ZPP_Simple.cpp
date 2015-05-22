#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#include <zpp_nape/geom/ZPP_Simple.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Simple_obj::__construct()
{
	return null();
}

//ZPP_Simple_obj::~ZPP_Simple_obj() { }

Dynamic ZPP_Simple_obj::__CreateEmpty() { return  new ZPP_Simple_obj; }
hx::ObjectPtr< ZPP_Simple_obj > ZPP_Simple_obj::__new()
{  hx::ObjectPtr< ZPP_Simple_obj > result = new ZPP_Simple_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Simple_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Simple_obj > result = new ZPP_Simple_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimpleSweep ZPP_Simple_obj::sweep;

::zpp_nape::util::FastHash2_Hashable2_Boolfalse ZPP_Simple_obj::inthash;

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Simple_obj::vertices;

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Simple_obj::queue;

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Simple_obj::ints;

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_Simple_obj::decompose( ::zpp_nape::geom::ZPP_GeomVert poly,::zpp_nape::util::ZNPList_ZPP_GeomVert rets){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","decompose",0xd7fa4fab,"zpp_nape.geom.ZPP_Simple.decompose","zpp_nape/geom/Simple.hx",793,0x62f156db)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(rets,"rets")
	HX_STACK_LINE(794)
	if (((::zpp_nape::geom::ZPP_Simple_obj::sweep == null()))){
		HX_STACK_LINE(795)
		::zpp_nape::geom::ZPP_SimpleSweep _g = ::zpp_nape::geom::ZPP_SimpleSweep_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(795)
		::zpp_nape::geom::ZPP_Simple_obj::sweep = _g;
		HX_STACK_LINE(796)
		::zpp_nape::util::FastHash2_Hashable2_Boolfalse _g1 = ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(796)
		::zpp_nape::geom::ZPP_Simple_obj::inthash = _g1;
	}
	HX_STACK_LINE(798)
	if (((::zpp_nape::geom::ZPP_Simple_obj::vertices == null()))){
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(800)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(801)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(801)
				::zpp_nape::geom::ZPP_Simple_obj::vertices = _g2;
			}
			else{
				HX_STACK_LINE(807)
				::zpp_nape::geom::ZPP_Simple_obj::vertices = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(808)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = ::zpp_nape::geom::ZPP_Simple_obj::vertices->next;
				HX_STACK_LINE(809)
				::zpp_nape::geom::ZPP_Simple_obj::vertices->next = null();
			}
			HX_STACK_LINE(814)
			Dynamic();
		}
		HX_STACK_LINE(816)
		::zpp_nape::geom::ZPP_Simple_obj::vertices->lt = ::zpp_nape::geom::ZPP_SimpleVert_obj::less_xy_dyn();
		HX_STACK_LINE(817)
		::zpp_nape::geom::ZPP_Simple_obj::vertices->swapped = ::zpp_nape::geom::ZPP_SimpleVert_obj::swap_nodes_dyn();
	}
	HX_STACK_LINE(819)
	if (((::zpp_nape::geom::ZPP_Simple_obj::queue == null()))){
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(821)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(822)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent _g3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(822)
				::zpp_nape::geom::ZPP_Simple_obj::queue = _g3;
			}
			else{
				HX_STACK_LINE(828)
				::zpp_nape::geom::ZPP_Simple_obj::queue = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(829)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = ::zpp_nape::geom::ZPP_Simple_obj::queue->next;
				HX_STACK_LINE(830)
				::zpp_nape::geom::ZPP_Simple_obj::queue->next = null();
			}
			HX_STACK_LINE(835)
			Dynamic();
		}
		HX_STACK_LINE(837)
		::zpp_nape::geom::ZPP_Simple_obj::queue->lt = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy_dyn();
		HX_STACK_LINE(838)
		::zpp_nape::geom::ZPP_Simple_obj::queue->swapped = ::zpp_nape::geom::ZPP_SimpleEvent_obj::swap_nodes_dyn();
	}
	HX_STACK_LINE(840)
	::zpp_nape::geom::ZPP_SimpleVert fst = null();		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(841)
	::zpp_nape::geom::ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(842)
	{
		HX_STACK_LINE(843)
		::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(844)
		::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(845)
		if (((F != null()))){
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(847)
			while((true)){
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(850)
				{
					HX_STACK_LINE(851)
					::zpp_nape::geom::ZPP_SimpleVert vert;		HX_STACK_VAR(vert,"vert");
					HX_STACK_LINE(851)
					{
						HX_STACK_LINE(851)
						::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(851)
								::zpp_nape::geom::ZPP_SimpleVert _g4 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(851)
								ret = _g4;
							}
							else{
								HX_STACK_LINE(851)
								ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(851)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(851)
								ret->next = null();
							}
							HX_STACK_LINE(851)
							Dynamic();
						}
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							ret->x = v->x;
							HX_STACK_LINE(851)
							ret->y = v->y;
							HX_STACK_LINE(851)
							{
							}
						}
						HX_STACK_LINE(851)
						vert = ret;
					}
					HX_STACK_LINE(852)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vx;		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(852)
					{
						HX_STACK_LINE(853)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = ::zpp_nape::geom::ZPP_Simple_obj::vertices->parent;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(854)
						while((true)){
							HX_STACK_LINE(854)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(854)
								break;
							}
							HX_STACK_LINE(855)
							if ((::zpp_nape::geom::ZPP_Simple_obj::vertices->lt(vert,cur->data))){
								HX_STACK_LINE(855)
								cur = cur->prev;
							}
							else{
								HX_STACK_LINE(856)
								if ((::zpp_nape::geom::ZPP_Simple_obj::vertices->lt(cur->data,vert))){
									HX_STACK_LINE(856)
									cur = cur->next;
								}
								else{
									HX_STACK_LINE(857)
									break;
								}
							}
						}
						HX_STACK_LINE(859)
						vx = cur;
					}
					HX_STACK_LINE(861)
					if (((vx != null()))){
						HX_STACK_LINE(862)
						{
							HX_STACK_LINE(863)
							::zpp_nape::geom::ZPP_SimpleVert o = vert;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(872)
							{
								HX_STACK_LINE(872)
								o->links->clear();
								HX_STACK_LINE(872)
								o->node = null();
								HX_STACK_LINE(872)
								o->forced = false;
							}
							HX_STACK_LINE(873)
							o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(874)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(879)
						vert = vx->data;
					}
					else{
						HX_STACK_LINE(881)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g5 = ::zpp_nape::geom::ZPP_Simple_obj::vertices->insert(vert);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(881)
						vert->node = _g5;
					}
					HX_STACK_LINE(882)
					if (((pre != null()))){
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_SimpleEvent e1;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(883)
									::zpp_nape::geom::ZPP_SimpleEvent _g6 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(883)
									ret = _g6;
								}
								else{
									HX_STACK_LINE(883)
									ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(883)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(883)
									ret->next = null();
								}
								HX_STACK_LINE(883)
								Dynamic();
							}
							HX_STACK_LINE(883)
							ret->vertex = pre;
							HX_STACK_LINE(883)
							e1 = ret;
						}
						HX_STACK_LINE(884)
						::zpp_nape::geom::ZPP_SimpleEvent e2;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(884)
						{
							HX_STACK_LINE(884)
							::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(884)
							{
								HX_STACK_LINE(884)
								if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(884)
									::zpp_nape::geom::ZPP_SimpleEvent _g7 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(884)
									ret = _g7;
								}
								else{
									HX_STACK_LINE(884)
									ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(884)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(884)
									ret->next = null();
								}
								HX_STACK_LINE(884)
								Dynamic();
							}
							HX_STACK_LINE(884)
							ret->vertex = vert;
							HX_STACK_LINE(884)
							e2 = ret;
						}
						HX_STACK_LINE(885)
						::zpp_nape::geom::ZPP_SimpleSeg seg;		HX_STACK_VAR(seg,"seg");
						HX_STACK_LINE(886)
						if ((::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(e1,e2))){
							HX_STACK_LINE(887)
							e1->type = (int)1;
							HX_STACK_LINE(888)
							e2->type = (int)2;
							HX_STACK_LINE(889)
							::zpp_nape::geom::ZPP_SimpleSeg _g8 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(pre,vert);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(889)
							seg = _g8;
						}
						else{
							HX_STACK_LINE(892)
							e1->type = (int)2;
							HX_STACK_LINE(893)
							e2->type = (int)1;
							HX_STACK_LINE(894)
							::zpp_nape::geom::ZPP_SimpleSeg _g9 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(vert,pre);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(894)
							seg = _g9;
						}
						HX_STACK_LINE(896)
						::zpp_nape::geom::ZPP_SimpleSeg _g10 = e2->segment = seg;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(896)
						e1->segment = _g10;
						HX_STACK_LINE(897)
						::zpp_nape::geom::ZPP_Simple_obj::queue->insert(e1);
						HX_STACK_LINE(898)
						::zpp_nape::geom::ZPP_Simple_obj::queue->insert(e2);
						HX_STACK_LINE(899)
						pre->links->insert(vert);
						HX_STACK_LINE(900)
						vert->links->insert(pre);
					}
					HX_STACK_LINE(902)
					pre = vert;
					HX_STACK_LINE(903)
					if (((fst == null()))){
						HX_STACK_LINE(903)
						fst = vert;
					}
				}
				HX_STACK_LINE(906)
				nite = nite->next;
				HX_STACK_LINE(847)
				if ((!(((nite != L))))){
					HX_STACK_LINE(847)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(911)
	{
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_SimpleEvent e1;		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(912)
			{
				HX_STACK_LINE(912)
				if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
					HX_STACK_LINE(912)
					::zpp_nape::geom::ZPP_SimpleEvent _g11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(912)
					ret = _g11;
				}
				else{
					HX_STACK_LINE(912)
					ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(912)
					::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(912)
					ret->next = null();
				}
				HX_STACK_LINE(912)
				Dynamic();
			}
			HX_STACK_LINE(912)
			ret->vertex = pre;
			HX_STACK_LINE(912)
			e1 = ret;
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_SimpleEvent e2;		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(913)
			{
				HX_STACK_LINE(913)
				if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
					HX_STACK_LINE(913)
					::zpp_nape::geom::ZPP_SimpleEvent _g12 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(913)
					ret = _g12;
				}
				else{
					HX_STACK_LINE(913)
					ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(913)
					::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(913)
					ret->next = null();
				}
				HX_STACK_LINE(913)
				Dynamic();
			}
			HX_STACK_LINE(913)
			ret->vertex = fst;
			HX_STACK_LINE(913)
			e2 = ret;
		}
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_SimpleSeg seg;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(915)
		if ((::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(e1,e2))){
			HX_STACK_LINE(916)
			e1->type = (int)1;
			HX_STACK_LINE(917)
			e2->type = (int)2;
			HX_STACK_LINE(918)
			::zpp_nape::geom::ZPP_SimpleSeg _g13 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(pre,fst);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(918)
			seg = _g13;
		}
		else{
			HX_STACK_LINE(921)
			e1->type = (int)2;
			HX_STACK_LINE(922)
			e2->type = (int)1;
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_SimpleSeg _g14 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(fst,pre);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(923)
			seg = _g14;
		}
		HX_STACK_LINE(925)
		::zpp_nape::geom::ZPP_SimpleSeg _g15 = e2->segment = seg;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(925)
		e1->segment = _g15;
		HX_STACK_LINE(926)
		::zpp_nape::geom::ZPP_Simple_obj::queue->insert(e1);
		HX_STACK_LINE(927)
		::zpp_nape::geom::ZPP_Simple_obj::queue->insert(e2);
		HX_STACK_LINE(928)
		pre->links->insert(fst);
		HX_STACK_LINE(929)
		fst->links->insert(pre);
	}
	HX_STACK_LINE(931)
	if (((::zpp_nape::geom::ZPP_Simple_obj::ints == null()))){
		HX_STACK_LINE(932)
		{
			HX_STACK_LINE(933)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(934)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent _g16 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(934)
				::zpp_nape::geom::ZPP_Simple_obj::ints = _g16;
			}
			else{
				HX_STACK_LINE(940)
				::zpp_nape::geom::ZPP_Simple_obj::ints = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(941)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = ::zpp_nape::geom::ZPP_Simple_obj::ints->next;
				HX_STACK_LINE(942)
				::zpp_nape::geom::ZPP_Simple_obj::ints->next = null();
			}
			HX_STACK_LINE(947)
			Dynamic();
		}
		HX_STACK_LINE(949)
		::zpp_nape::geom::ZPP_Simple_obj::ints->lt = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy_dyn();
	}
	HX_STACK_LINE(951)
	while((true)){
		HX_STACK_LINE(951)
		if ((!((!(::zpp_nape::geom::ZPP_Simple_obj::queue->empty()))))){
			HX_STACK_LINE(951)
			break;
		}
		HX_STACK_LINE(952)
		::zpp_nape::geom::ZPP_SimpleEvent e = ::zpp_nape::geom::ZPP_Simple_obj::queue->pop_front();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(953)
		::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx = e->vertex->x;
		HX_STACK_LINE(954)
		if (((e->type == (int)1))){
			HX_STACK_LINE(955)
			::zpp_nape::geom::ZPP_SimpleSeg s = e->segment;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(956)
			::zpp_nape::geom::ZPP_Simple_obj::sweep->add(s);
			HX_STACK_LINE(958)
			if (((  (((bool((s->next != null())) && bool((s != null()))))) ? bool(!(((  (((s->next->id < s->id))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(s->next->id,s->id)) : bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(s->id,s->next->id)) )))) : bool(false) ))){
				HX_STACK_LINE(959)
				::zpp_nape::geom::ZPP_SimpleEvent intx = ::zpp_nape::geom::ZPP_Simple_obj::sweep->intersection(s->next,s);		HX_STACK_VAR(intx,"intx");
				HX_STACK_LINE(960)
				if (((intx != null()))){
					HX_STACK_LINE(961)
					if (((intx->vertex->x >= ::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx))){
						HX_STACK_LINE(962)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex;		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(962)
						{
							HX_STACK_LINE(963)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::queue->parent;		HX_STACK_VAR(cur,"cur");
							HX_STACK_LINE(964)
							while((true)){
								HX_STACK_LINE(964)
								if ((!(((cur != null()))))){
									HX_STACK_LINE(964)
									break;
								}
								HX_STACK_LINE(965)
								if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(intx,cur->data))){
									HX_STACK_LINE(965)
									cur = cur->prev;
								}
								else{
									HX_STACK_LINE(966)
									if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(cur->data,intx))){
										HX_STACK_LINE(966)
										cur = cur->next;
									}
									else{
										HX_STACK_LINE(967)
										break;
									}
								}
							}
							HX_STACK_LINE(969)
							ex = cur;
						}
						HX_STACK_LINE(971)
						if (((ex == null()))){
							HX_STACK_LINE(972)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(972)
							{
								HX_STACK_LINE(973)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::ints->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(974)
								while((true)){
									HX_STACK_LINE(974)
									if ((!(((cur != null()))))){
										HX_STACK_LINE(974)
										break;
									}
									HX_STACK_LINE(975)
									if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(intx,cur->data))){
										HX_STACK_LINE(975)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(976)
										if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(cur->data,intx))){
											HX_STACK_LINE(976)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(977)
											break;
										}
									}
								}
								HX_STACK_LINE(979)
								vx = cur;
							}
							HX_STACK_LINE(981)
							if (((vx != null()))){
								HX_STACK_LINE(982)
								{
									HX_STACK_LINE(983)
									::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(992)
									{
										HX_STACK_LINE(992)
										o->links->clear();
										HX_STACK_LINE(992)
										o->node = null();
										HX_STACK_LINE(992)
										o->forced = false;
									}
									HX_STACK_LINE(993)
									o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(994)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(999)
								intx->vertex = vx->data->vertex;
								HX_STACK_LINE(1000)
								vx->data = intx;
								HX_STACK_LINE(1001)
								::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
							}
							else{
								HX_STACK_LINE(1004)
								::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
								HX_STACK_LINE(1005)
								::zpp_nape::geom::ZPP_Simple_obj::ints->insert(intx);
							}
							HX_STACK_LINE(1007)
							if (((s->next->id < s->id))){
								HX_STACK_LINE(1007)
								::zpp_nape::util::Hashable2_Boolfalse _g18;		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(1007)
								{
									HX_STACK_LINE(1007)
									::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1007)
										{
											HX_STACK_LINE(1007)
											if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
												HX_STACK_LINE(1007)
												::zpp_nape::util::Hashable2_Boolfalse _g17 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g17,"_g17");
												HX_STACK_LINE(1007)
												ret1 = _g17;
											}
											else{
												HX_STACK_LINE(1007)
												ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
												HX_STACK_LINE(1007)
												::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1007)
												ret1->next = null();
											}
											HX_STACK_LINE(1007)
											Dynamic();
										}
										HX_STACK_LINE(1007)
										ret1->id = s->next->id;
										HX_STACK_LINE(1007)
										ret1->di = s->id;
										HX_STACK_LINE(1007)
										ret = ret1;
									}
									HX_STACK_LINE(1007)
									ret->value = true;
									HX_STACK_LINE(1007)
									_g18 = ret;
								}
								HX_STACK_LINE(1007)
								::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g18);
							}
							else{
								HX_STACK_LINE(1008)
								::zpp_nape::util::Hashable2_Boolfalse _g20;		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(1008)
								{
									HX_STACK_LINE(1008)
									::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1008)
									{
										HX_STACK_LINE(1008)
										::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
												HX_STACK_LINE(1008)
												::zpp_nape::util::Hashable2_Boolfalse _g19 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(1008)
												ret1 = _g19;
											}
											else{
												HX_STACK_LINE(1008)
												ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
												HX_STACK_LINE(1008)
												::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1008)
												ret1->next = null();
											}
											HX_STACK_LINE(1008)
											Dynamic();
										}
										HX_STACK_LINE(1008)
										ret1->id = s->id;
										HX_STACK_LINE(1008)
										ret1->di = s->next->id;
										HX_STACK_LINE(1008)
										ret = ret1;
									}
									HX_STACK_LINE(1008)
									ret->value = true;
									HX_STACK_LINE(1008)
									_g20 = ret;
								}
								HX_STACK_LINE(1008)
								::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g20);
							}
						}
						else{
							HX_STACK_LINE(1011)
							::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1015)
							{
								HX_STACK_LINE(1016)
								::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1025)
								{
									HX_STACK_LINE(1025)
									o->links->clear();
									HX_STACK_LINE(1025)
									o->node = null();
									HX_STACK_LINE(1025)
									o->forced = false;
								}
								HX_STACK_LINE(1026)
								o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(1027)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1032)
							{
								HX_STACK_LINE(1033)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1042)
								{
									HX_STACK_LINE(1042)
									o->vertex = null();
									HX_STACK_LINE(1042)
									::zpp_nape::geom::ZPP_SimpleSeg _g21 = o->segment2 = null();		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(1042)
									o->segment = _g21;
									HX_STACK_LINE(1042)
									o->node = null();
								}
								HX_STACK_LINE(1043)
								o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
					else{
						HX_STACK_LINE(1052)
						{
							HX_STACK_LINE(1053)
							::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1062)
							{
								HX_STACK_LINE(1062)
								o->links->clear();
								HX_STACK_LINE(1062)
								o->node = null();
								HX_STACK_LINE(1062)
								o->forced = false;
							}
							HX_STACK_LINE(1063)
							o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(1064)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1069)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1079)
							{
								HX_STACK_LINE(1079)
								o->vertex = null();
								HX_STACK_LINE(1079)
								::zpp_nape::geom::ZPP_SimpleSeg _g22 = o->segment2 = null();		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(1079)
								o->segment = _g22;
								HX_STACK_LINE(1079)
								o->node = null();
							}
							HX_STACK_LINE(1080)
							o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(1081)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
						}
					}
				}
			}
			HX_STACK_LINE(1091)
			if (((  (((bool((s != null())) && bool((s->prev != null()))))) ? bool(!(((  (((s->id < s->prev->id))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(s->id,s->prev->id)) : bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(s->prev->id,s->id)) )))) : bool(false) ))){
				HX_STACK_LINE(1092)
				::zpp_nape::geom::ZPP_SimpleEvent intx = ::zpp_nape::geom::ZPP_Simple_obj::sweep->intersection(s,s->prev);		HX_STACK_VAR(intx,"intx");
				HX_STACK_LINE(1093)
				if (((intx != null()))){
					HX_STACK_LINE(1094)
					if (((intx->vertex->x >= ::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx))){
						HX_STACK_LINE(1095)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex;		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::queue->parent;		HX_STACK_VAR(cur,"cur");
							HX_STACK_LINE(1097)
							while((true)){
								HX_STACK_LINE(1097)
								if ((!(((cur != null()))))){
									HX_STACK_LINE(1097)
									break;
								}
								HX_STACK_LINE(1098)
								if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(intx,cur->data))){
									HX_STACK_LINE(1098)
									cur = cur->prev;
								}
								else{
									HX_STACK_LINE(1099)
									if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(cur->data,intx))){
										HX_STACK_LINE(1099)
										cur = cur->next;
									}
									else{
										HX_STACK_LINE(1100)
										break;
									}
								}
							}
							HX_STACK_LINE(1102)
							ex = cur;
						}
						HX_STACK_LINE(1104)
						if (((ex == null()))){
							HX_STACK_LINE(1105)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(1105)
							{
								HX_STACK_LINE(1106)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::ints->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(1107)
								while((true)){
									HX_STACK_LINE(1107)
									if ((!(((cur != null()))))){
										HX_STACK_LINE(1107)
										break;
									}
									HX_STACK_LINE(1108)
									if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(intx,cur->data))){
										HX_STACK_LINE(1108)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(1109)
										if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(cur->data,intx))){
											HX_STACK_LINE(1109)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(1110)
											break;
										}
									}
								}
								HX_STACK_LINE(1112)
								vx = cur;
							}
							HX_STACK_LINE(1114)
							if (((vx != null()))){
								HX_STACK_LINE(1115)
								{
									HX_STACK_LINE(1116)
									::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1125)
									{
										HX_STACK_LINE(1125)
										o->links->clear();
										HX_STACK_LINE(1125)
										o->node = null();
										HX_STACK_LINE(1125)
										o->forced = false;
									}
									HX_STACK_LINE(1126)
									o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(1127)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1132)
								intx->vertex = vx->data->vertex;
								HX_STACK_LINE(1133)
								vx->data = intx;
								HX_STACK_LINE(1134)
								::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
							}
							else{
								HX_STACK_LINE(1137)
								::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
								HX_STACK_LINE(1138)
								::zpp_nape::geom::ZPP_Simple_obj::ints->insert(intx);
							}
							HX_STACK_LINE(1140)
							if (((s->id < s->prev->id))){
								HX_STACK_LINE(1140)
								::zpp_nape::util::Hashable2_Boolfalse _g24;		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(1140)
								{
									HX_STACK_LINE(1140)
									::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1140)
									{
										HX_STACK_LINE(1140)
										::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1140)
										{
											HX_STACK_LINE(1140)
											if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
												HX_STACK_LINE(1140)
												::zpp_nape::util::Hashable2_Boolfalse _g23 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g23,"_g23");
												HX_STACK_LINE(1140)
												ret1 = _g23;
											}
											else{
												HX_STACK_LINE(1140)
												ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
												HX_STACK_LINE(1140)
												::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1140)
												ret1->next = null();
											}
											HX_STACK_LINE(1140)
											Dynamic();
										}
										HX_STACK_LINE(1140)
										ret1->id = s->id;
										HX_STACK_LINE(1140)
										ret1->di = s->prev->id;
										HX_STACK_LINE(1140)
										ret = ret1;
									}
									HX_STACK_LINE(1140)
									ret->value = true;
									HX_STACK_LINE(1140)
									_g24 = ret;
								}
								HX_STACK_LINE(1140)
								::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g24);
							}
							else{
								HX_STACK_LINE(1141)
								::zpp_nape::util::Hashable2_Boolfalse _g26;		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(1141)
								{
									HX_STACK_LINE(1141)
									::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1141)
									{
										HX_STACK_LINE(1141)
										::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1141)
										{
											HX_STACK_LINE(1141)
											if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
												HX_STACK_LINE(1141)
												::zpp_nape::util::Hashable2_Boolfalse _g25 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g25,"_g25");
												HX_STACK_LINE(1141)
												ret1 = _g25;
											}
											else{
												HX_STACK_LINE(1141)
												ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
												HX_STACK_LINE(1141)
												::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1141)
												ret1->next = null();
											}
											HX_STACK_LINE(1141)
											Dynamic();
										}
										HX_STACK_LINE(1141)
										ret1->id = s->prev->id;
										HX_STACK_LINE(1141)
										ret1->di = s->id;
										HX_STACK_LINE(1141)
										ret = ret1;
									}
									HX_STACK_LINE(1141)
									ret->value = true;
									HX_STACK_LINE(1141)
									_g26 = ret;
								}
								HX_STACK_LINE(1141)
								::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g26);
							}
						}
						else{
							HX_STACK_LINE(1144)
							::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1148)
							{
								HX_STACK_LINE(1149)
								::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1158)
								{
									HX_STACK_LINE(1158)
									o->links->clear();
									HX_STACK_LINE(1158)
									o->node = null();
									HX_STACK_LINE(1158)
									o->forced = false;
								}
								HX_STACK_LINE(1159)
								o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(1160)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1165)
							{
								HX_STACK_LINE(1166)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1175)
								{
									HX_STACK_LINE(1175)
									o->vertex = null();
									HX_STACK_LINE(1175)
									::zpp_nape::geom::ZPP_SimpleSeg _g27 = o->segment2 = null();		HX_STACK_VAR(_g27,"_g27");
									HX_STACK_LINE(1175)
									o->segment = _g27;
									HX_STACK_LINE(1175)
									o->node = null();
								}
								HX_STACK_LINE(1176)
								o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(1177)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
					else{
						HX_STACK_LINE(1185)
						{
							HX_STACK_LINE(1186)
							::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1195)
							{
								HX_STACK_LINE(1195)
								o->links->clear();
								HX_STACK_LINE(1195)
								o->node = null();
								HX_STACK_LINE(1195)
								o->forced = false;
							}
							HX_STACK_LINE(1196)
							o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(1197)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1202)
						{
							HX_STACK_LINE(1203)
							::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1212)
							{
								HX_STACK_LINE(1212)
								o->vertex = null();
								HX_STACK_LINE(1212)
								::zpp_nape::geom::ZPP_SimpleSeg _g28 = o->segment2 = null();		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(1212)
								o->segment = _g28;
								HX_STACK_LINE(1212)
								o->node = null();
							}
							HX_STACK_LINE(1213)
							o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(1214)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1224)
			if (((e->type == (int)2))){
				HX_STACK_LINE(1225)
				::zpp_nape::geom::ZPP_SimpleSeg s = e->segment;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1226)
				if (((s->node != null()))){
					HX_STACK_LINE(1227)
					::zpp_nape::geom::ZPP_SimpleSeg nxt = s->next;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1228)
					::zpp_nape::geom::ZPP_SimpleSeg pre1 = s->prev;		HX_STACK_VAR(pre1,"pre1");
					HX_STACK_LINE(1229)
					::zpp_nape::geom::ZPP_Simple_obj::sweep->remove(s);
					HX_STACK_LINE(1230)
					{
						HX_STACK_LINE(1231)
						::zpp_nape::geom::ZPP_SimpleSeg o = s;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1240)
						{
							HX_STACK_LINE(1240)
							::zpp_nape::geom::ZPP_SimpleVert _g29 = o->right = null();		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(1240)
							o->left = _g29;
							HX_STACK_LINE(1240)
							o->prev = null();
							HX_STACK_LINE(1240)
							o->node = null();
							HX_STACK_LINE(1240)
							o->vertices->clear();
						}
						HX_STACK_LINE(1241)
						o->next = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;
						HX_STACK_LINE(1242)
						::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1248)
					if (((  (((bool((nxt != null())) && bool((pre1 != null()))))) ? bool(!(((  (((nxt->id < pre1->id))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(nxt->id,pre1->id)) : bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(pre1->id,nxt->id)) )))) : bool(false) ))){
						HX_STACK_LINE(1249)
						::zpp_nape::geom::ZPP_SimpleEvent intx = ::zpp_nape::geom::ZPP_Simple_obj::sweep->intersection(nxt,pre1);		HX_STACK_VAR(intx,"intx");
						HX_STACK_LINE(1250)
						if (((intx != null()))){
							HX_STACK_LINE(1251)
							if (((intx->vertex->x >= ::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx))){
								HX_STACK_LINE(1252)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex;		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(1252)
								{
									HX_STACK_LINE(1253)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::queue->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1254)
									while((true)){
										HX_STACK_LINE(1254)
										if ((!(((cur != null()))))){
											HX_STACK_LINE(1254)
											break;
										}
										HX_STACK_LINE(1255)
										if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(intx,cur->data))){
											HX_STACK_LINE(1255)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1256)
											if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(cur->data,intx))){
												HX_STACK_LINE(1256)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1257)
												break;
											}
										}
									}
									HX_STACK_LINE(1259)
									ex = cur;
								}
								HX_STACK_LINE(1261)
								if (((ex == null()))){
									HX_STACK_LINE(1262)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx;		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(1262)
									{
										HX_STACK_LINE(1263)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::ints->parent;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(1264)
										while((true)){
											HX_STACK_LINE(1264)
											if ((!(((cur != null()))))){
												HX_STACK_LINE(1264)
												break;
											}
											HX_STACK_LINE(1265)
											if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(intx,cur->data))){
												HX_STACK_LINE(1265)
												cur = cur->prev;
											}
											else{
												HX_STACK_LINE(1266)
												if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(cur->data,intx))){
													HX_STACK_LINE(1266)
													cur = cur->next;
												}
												else{
													HX_STACK_LINE(1267)
													break;
												}
											}
										}
										HX_STACK_LINE(1269)
										vx = cur;
									}
									HX_STACK_LINE(1271)
									if (((vx != null()))){
										HX_STACK_LINE(1272)
										{
											HX_STACK_LINE(1273)
											::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1282)
											{
												HX_STACK_LINE(1282)
												o->links->clear();
												HX_STACK_LINE(1282)
												o->node = null();
												HX_STACK_LINE(1282)
												o->forced = false;
											}
											HX_STACK_LINE(1283)
											o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
											HX_STACK_LINE(1284)
											::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1289)
										intx->vertex = vx->data->vertex;
										HX_STACK_LINE(1290)
										vx->data = intx;
										HX_STACK_LINE(1291)
										::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
									}
									else{
										HX_STACK_LINE(1294)
										::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx);
										HX_STACK_LINE(1295)
										::zpp_nape::geom::ZPP_Simple_obj::ints->insert(intx);
									}
									HX_STACK_LINE(1297)
									if (((nxt->id < pre1->id))){
										HX_STACK_LINE(1297)
										::zpp_nape::util::Hashable2_Boolfalse _g31;		HX_STACK_VAR(_g31,"_g31");
										HX_STACK_LINE(1297)
										{
											HX_STACK_LINE(1297)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1297)
											{
												HX_STACK_LINE(1297)
												::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1297)
												{
													HX_STACK_LINE(1297)
													if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
														HX_STACK_LINE(1297)
														::zpp_nape::util::Hashable2_Boolfalse _g30 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g30,"_g30");
														HX_STACK_LINE(1297)
														ret1 = _g30;
													}
													else{
														HX_STACK_LINE(1297)
														ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
														HX_STACK_LINE(1297)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1297)
														ret1->next = null();
													}
													HX_STACK_LINE(1297)
													Dynamic();
												}
												HX_STACK_LINE(1297)
												ret1->id = nxt->id;
												HX_STACK_LINE(1297)
												ret1->di = pre1->id;
												HX_STACK_LINE(1297)
												ret = ret1;
											}
											HX_STACK_LINE(1297)
											ret->value = true;
											HX_STACK_LINE(1297)
											_g31 = ret;
										}
										HX_STACK_LINE(1297)
										::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g31);
									}
									else{
										HX_STACK_LINE(1298)
										::zpp_nape::util::Hashable2_Boolfalse _g33;		HX_STACK_VAR(_g33,"_g33");
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1298)
												{
													HX_STACK_LINE(1298)
													if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
														HX_STACK_LINE(1298)
														::zpp_nape::util::Hashable2_Boolfalse _g32 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g32,"_g32");
														HX_STACK_LINE(1298)
														ret1 = _g32;
													}
													else{
														HX_STACK_LINE(1298)
														ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
														HX_STACK_LINE(1298)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1298)
														ret1->next = null();
													}
													HX_STACK_LINE(1298)
													Dynamic();
												}
												HX_STACK_LINE(1298)
												ret1->id = pre1->id;
												HX_STACK_LINE(1298)
												ret1->di = nxt->id;
												HX_STACK_LINE(1298)
												ret = ret1;
											}
											HX_STACK_LINE(1298)
											ret->value = true;
											HX_STACK_LINE(1298)
											_g33 = ret;
										}
										HX_STACK_LINE(1298)
										::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g33);
									}
								}
								else{
									HX_STACK_LINE(1301)
									::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1305)
									{
										HX_STACK_LINE(1306)
										::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1315)
										{
											HX_STACK_LINE(1315)
											o->links->clear();
											HX_STACK_LINE(1315)
											o->node = null();
											HX_STACK_LINE(1315)
											o->forced = false;
										}
										HX_STACK_LINE(1316)
										o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
										HX_STACK_LINE(1317)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1322)
									{
										HX_STACK_LINE(1323)
										::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1332)
										{
											HX_STACK_LINE(1332)
											o->vertex = null();
											HX_STACK_LINE(1332)
											::zpp_nape::geom::ZPP_SimpleSeg _g34 = o->segment2 = null();		HX_STACK_VAR(_g34,"_g34");
											HX_STACK_LINE(1332)
											o->segment = _g34;
											HX_STACK_LINE(1332)
											o->node = null();
										}
										HX_STACK_LINE(1333)
										o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
										HX_STACK_LINE(1334)
										::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
									}
								}
							}
							else{
								HX_STACK_LINE(1342)
								{
									HX_STACK_LINE(1343)
									::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1352)
									{
										HX_STACK_LINE(1352)
										o->links->clear();
										HX_STACK_LINE(1352)
										o->node = null();
										HX_STACK_LINE(1352)
										o->forced = false;
									}
									HX_STACK_LINE(1353)
									o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1359)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1369)
									{
										HX_STACK_LINE(1369)
										o->vertex = null();
										HX_STACK_LINE(1369)
										::zpp_nape::geom::ZPP_SimpleSeg _g35 = o->segment2 = null();		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(1369)
										o->segment = _g35;
										HX_STACK_LINE(1369)
										o->node = null();
									}
									HX_STACK_LINE(1370)
									o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(1371)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1383)
				::zpp_nape::geom::ZPP_SimpleVert intx = e->vertex;		HX_STACK_VAR(intx,"intx");
				HX_STACK_LINE(1384)
				bool pnull = (intx->node == null());		HX_STACK_VAR(pnull,"pnull");
				HX_STACK_LINE(1385)
				::zpp_nape::geom::ZPP_SimpleSeg a = e->segment;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1386)
				::zpp_nape::geom::ZPP_SimpleSeg b = e->segment2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1395)
				if (((b->next != a))){
					HX_STACK_LINE(1396)
					::zpp_nape::geom::ZPP_SimpleSeg t = a;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1397)
					a = b;
					HX_STACK_LINE(1398)
					b = t;
				}
				HX_STACK_LINE(1400)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g36;		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = a->vertices->parent;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1402)
					while((true)){
						HX_STACK_LINE(1402)
						if ((!(((cur != null()))))){
							HX_STACK_LINE(1402)
							break;
						}
						HX_STACK_LINE(1403)
						if ((a->vertices->lt(intx,cur->data))){
							HX_STACK_LINE(1403)
							cur = cur->prev;
						}
						else{
							HX_STACK_LINE(1404)
							if ((a->vertices->lt(cur->data,intx))){
								HX_STACK_LINE(1404)
								cur = cur->next;
							}
							else{
								HX_STACK_LINE(1405)
								break;
							}
						}
					}
					HX_STACK_LINE(1407)
					_g36 = cur;
				}
				HX_STACK_LINE(1400)
				bool anew = (_g36 == null());		HX_STACK_VAR(anew,"anew");
				HX_STACK_LINE(1409)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g37;		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(1409)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = b->vertices->parent;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1411)
					while((true)){
						HX_STACK_LINE(1411)
						if ((!(((cur != null()))))){
							HX_STACK_LINE(1411)
							break;
						}
						HX_STACK_LINE(1412)
						if ((b->vertices->lt(intx,cur->data))){
							HX_STACK_LINE(1412)
							cur = cur->prev;
						}
						else{
							HX_STACK_LINE(1413)
							if ((b->vertices->lt(cur->data,intx))){
								HX_STACK_LINE(1413)
								cur = cur->next;
							}
							else{
								HX_STACK_LINE(1414)
								break;
							}
						}
					}
					HX_STACK_LINE(1416)
					_g37 = cur;
				}
				HX_STACK_LINE(1409)
				bool bnew = (_g37 == null());		HX_STACK_VAR(bnew,"bnew");
				HX_STACK_LINE(1418)
				if ((anew)){
					HX_STACK_LINE(1419)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert aint = a->vertices->insert(intx);		HX_STACK_VAR(aint,"aint");
					HX_STACK_LINE(1420)
					::zpp_nape::geom::ZPP_SimpleVert naleft;		HX_STACK_VAR(naleft,"naleft");
					HX_STACK_LINE(1420)
					if (((intx == a->left))){
						HX_STACK_LINE(1420)
						naleft = intx;
					}
					else{
						HX_STACK_LINE(1420)
						naleft = a->vertices->predecessor_node(aint)->data;
					}
					HX_STACK_LINE(1421)
					::zpp_nape::geom::ZPP_SimpleVert naright;		HX_STACK_VAR(naright,"naright");
					HX_STACK_LINE(1421)
					if (((intx == a->right))){
						HX_STACK_LINE(1421)
						naright = intx;
					}
					else{
						HX_STACK_LINE(1421)
						naright = a->vertices->successor_node(aint)->data;
					}
					HX_STACK_LINE(1422)
					naleft->links->remove(naright);
					HX_STACK_LINE(1423)
					if (((intx != naleft))){
						HX_STACK_LINE(1423)
						naleft->links->insert(intx);
					}
					HX_STACK_LINE(1424)
					naright->links->remove(naleft);
					HX_STACK_LINE(1425)
					if (((intx != naright))){
						HX_STACK_LINE(1425)
						naright->links->insert(intx);
					}
					HX_STACK_LINE(1426)
					if (((intx != naleft))){
						HX_STACK_LINE(1426)
						intx->links->insert(naleft);
					}
					HX_STACK_LINE(1427)
					if (((intx != naright))){
						HX_STACK_LINE(1427)
						intx->links->insert(naright);
					}
				}
				HX_STACK_LINE(1429)
				if ((bnew)){
					HX_STACK_LINE(1430)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert bint = b->vertices->insert(intx);		HX_STACK_VAR(bint,"bint");
					HX_STACK_LINE(1431)
					::zpp_nape::geom::ZPP_SimpleVert nbleft;		HX_STACK_VAR(nbleft,"nbleft");
					HX_STACK_LINE(1431)
					if (((intx == b->left))){
						HX_STACK_LINE(1431)
						nbleft = intx;
					}
					else{
						HX_STACK_LINE(1431)
						nbleft = b->vertices->predecessor_node(bint)->data;
					}
					HX_STACK_LINE(1432)
					::zpp_nape::geom::ZPP_SimpleVert nbright;		HX_STACK_VAR(nbright,"nbright");
					HX_STACK_LINE(1432)
					if (((intx == b->right))){
						HX_STACK_LINE(1432)
						nbright = intx;
					}
					else{
						HX_STACK_LINE(1432)
						nbright = b->vertices->successor_node(bint)->data;
					}
					HX_STACK_LINE(1433)
					nbleft->links->remove(nbright);
					HX_STACK_LINE(1434)
					if (((intx != nbleft))){
						HX_STACK_LINE(1434)
						nbleft->links->insert(intx);
					}
					HX_STACK_LINE(1435)
					nbright->links->remove(nbleft);
					HX_STACK_LINE(1436)
					if (((intx != nbright))){
						HX_STACK_LINE(1436)
						nbright->links->insert(intx);
					}
					HX_STACK_LINE(1437)
					if (((intx != nbleft))){
						HX_STACK_LINE(1437)
						intx->links->insert(nbleft);
					}
					HX_STACK_LINE(1438)
					if (((intx != nbright))){
						HX_STACK_LINE(1438)
						intx->links->insert(nbright);
					}
				}
				HX_STACK_LINE(1440)
				if ((pnull)){
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g38 = ::zpp_nape::geom::ZPP_Simple_obj::vertices->insert(intx);		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(1440)
					intx->node = _g38;
				}
				HX_STACK_LINE(1441)
				intx->forced = true;
				HX_STACK_LINE(1442)
				if ((pnull)){
					HX_STACK_LINE(1443)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg an = a->node;		HX_STACK_VAR(an,"an");
					HX_STACK_LINE(1444)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg bn = b->node;		HX_STACK_VAR(bn,"bn");
					HX_STACK_LINE(1445)
					an->data = b;
					HX_STACK_LINE(1446)
					bn->data = a;
					HX_STACK_LINE(1447)
					a->node = bn;
					HX_STACK_LINE(1448)
					b->node = an;
					HX_STACK_LINE(1449)
					b->next = a->next;
					HX_STACK_LINE(1450)
					a->next = b;
					HX_STACK_LINE(1451)
					a->prev = b->prev;
					HX_STACK_LINE(1452)
					b->prev = a;
					HX_STACK_LINE(1453)
					if (((a->prev != null()))){
						HX_STACK_LINE(1453)
						a->prev->next = a;
					}
					HX_STACK_LINE(1454)
					if (((b->next != null()))){
						HX_STACK_LINE(1454)
						b->next->prev = b;
					}
				}
				HX_STACK_LINE(1457)
				if (((  (((bool((b->next != null())) && bool((b != null()))))) ? bool(!(((  (((b->next->id < b->id))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(b->next->id,b->id)) : bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(b->id,b->next->id)) )))) : bool(false) ))){
					HX_STACK_LINE(1458)
					::zpp_nape::geom::ZPP_SimpleEvent intx1 = ::zpp_nape::geom::ZPP_Simple_obj::sweep->intersection(b->next,b);		HX_STACK_VAR(intx1,"intx1");
					HX_STACK_LINE(1459)
					if (((intx1 != null()))){
						HX_STACK_LINE(1460)
						if (((intx1->vertex->x >= ::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx))){
							HX_STACK_LINE(1461)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1461)
							{
								HX_STACK_LINE(1462)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::queue->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(1463)
								while((true)){
									HX_STACK_LINE(1463)
									if ((!(((cur != null()))))){
										HX_STACK_LINE(1463)
										break;
									}
									HX_STACK_LINE(1464)
									if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(intx1,cur->data))){
										HX_STACK_LINE(1464)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(1465)
										if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(cur->data,intx1))){
											HX_STACK_LINE(1465)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(1466)
											break;
										}
									}
								}
								HX_STACK_LINE(1468)
								ex = cur;
							}
							HX_STACK_LINE(1470)
							if (((ex == null()))){
								HX_STACK_LINE(1471)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1471)
								{
									HX_STACK_LINE(1472)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::ints->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1473)
									while((true)){
										HX_STACK_LINE(1473)
										if ((!(((cur != null()))))){
											HX_STACK_LINE(1473)
											break;
										}
										HX_STACK_LINE(1474)
										if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(intx1,cur->data))){
											HX_STACK_LINE(1474)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1475)
											if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(cur->data,intx1))){
												HX_STACK_LINE(1475)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1476)
												break;
											}
										}
									}
									HX_STACK_LINE(1478)
									vx = cur;
								}
								HX_STACK_LINE(1480)
								if (((vx != null()))){
									HX_STACK_LINE(1481)
									{
										HX_STACK_LINE(1482)
										::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1491)
										{
											HX_STACK_LINE(1491)
											o->links->clear();
											HX_STACK_LINE(1491)
											o->node = null();
											HX_STACK_LINE(1491)
											o->forced = false;
										}
										HX_STACK_LINE(1492)
										o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
										HX_STACK_LINE(1493)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1498)
									intx1->vertex = vx->data->vertex;
									HX_STACK_LINE(1499)
									vx->data = intx1;
									HX_STACK_LINE(1500)
									::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx1);
								}
								else{
									HX_STACK_LINE(1503)
									::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx1);
									HX_STACK_LINE(1504)
									::zpp_nape::geom::ZPP_Simple_obj::ints->insert(intx1);
								}
								HX_STACK_LINE(1506)
								if (((b->next->id < b->id))){
									HX_STACK_LINE(1506)
									::zpp_nape::util::Hashable2_Boolfalse _g40;		HX_STACK_VAR(_g40,"_g40");
									HX_STACK_LINE(1506)
									{
										HX_STACK_LINE(1506)
										::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1506)
										{
											HX_STACK_LINE(1506)
											::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1506)
											{
												HX_STACK_LINE(1506)
												if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
													HX_STACK_LINE(1506)
													::zpp_nape::util::Hashable2_Boolfalse _g39 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g39,"_g39");
													HX_STACK_LINE(1506)
													ret1 = _g39;
												}
												else{
													HX_STACK_LINE(1506)
													ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
													HX_STACK_LINE(1506)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1506)
													ret1->next = null();
												}
												HX_STACK_LINE(1506)
												Dynamic();
											}
											HX_STACK_LINE(1506)
											ret1->id = b->next->id;
											HX_STACK_LINE(1506)
											ret1->di = b->id;
											HX_STACK_LINE(1506)
											ret = ret1;
										}
										HX_STACK_LINE(1506)
										ret->value = true;
										HX_STACK_LINE(1506)
										_g40 = ret;
									}
									HX_STACK_LINE(1506)
									::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g40);
								}
								else{
									HX_STACK_LINE(1507)
									::zpp_nape::util::Hashable2_Boolfalse _g42;		HX_STACK_VAR(_g42,"_g42");
									HX_STACK_LINE(1507)
									{
										HX_STACK_LINE(1507)
										::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1507)
										{
											HX_STACK_LINE(1507)
											::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1507)
											{
												HX_STACK_LINE(1507)
												if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
													HX_STACK_LINE(1507)
													::zpp_nape::util::Hashable2_Boolfalse _g41 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g41,"_g41");
													HX_STACK_LINE(1507)
													ret1 = _g41;
												}
												else{
													HX_STACK_LINE(1507)
													ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
													HX_STACK_LINE(1507)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1507)
													ret1->next = null();
												}
												HX_STACK_LINE(1507)
												Dynamic();
											}
											HX_STACK_LINE(1507)
											ret1->id = b->id;
											HX_STACK_LINE(1507)
											ret1->di = b->next->id;
											HX_STACK_LINE(1507)
											ret = ret1;
										}
										HX_STACK_LINE(1507)
										ret->value = true;
										HX_STACK_LINE(1507)
										_g42 = ret;
									}
									HX_STACK_LINE(1507)
									::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g42);
								}
							}
							else{
								HX_STACK_LINE(1510)
								::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1514)
								{
									HX_STACK_LINE(1515)
									::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1524)
									{
										HX_STACK_LINE(1524)
										o->links->clear();
										HX_STACK_LINE(1524)
										o->node = null();
										HX_STACK_LINE(1524)
										o->forced = false;
									}
									HX_STACK_LINE(1525)
									o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(1526)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1531)
								{
									HX_STACK_LINE(1532)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1541)
									{
										HX_STACK_LINE(1541)
										o->vertex = null();
										HX_STACK_LINE(1541)
										::zpp_nape::geom::ZPP_SimpleSeg _g43 = o->segment2 = null();		HX_STACK_VAR(_g43,"_g43");
										HX_STACK_LINE(1541)
										o->segment = _g43;
										HX_STACK_LINE(1541)
										o->node = null();
									}
									HX_STACK_LINE(1542)
									o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(1543)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
						else{
							HX_STACK_LINE(1551)
							{
								HX_STACK_LINE(1552)
								::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1561)
								{
									HX_STACK_LINE(1561)
									o->links->clear();
									HX_STACK_LINE(1561)
									o->node = null();
									HX_STACK_LINE(1561)
									o->forced = false;
								}
								HX_STACK_LINE(1562)
								o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(1563)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1568)
							{
								HX_STACK_LINE(1569)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1578)
								{
									HX_STACK_LINE(1578)
									o->vertex = null();
									HX_STACK_LINE(1578)
									::zpp_nape::geom::ZPP_SimpleSeg _g44 = o->segment2 = null();		HX_STACK_VAR(_g44,"_g44");
									HX_STACK_LINE(1578)
									o->segment = _g44;
									HX_STACK_LINE(1578)
									o->node = null();
								}
								HX_STACK_LINE(1579)
								o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(1580)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
				}
				HX_STACK_LINE(1590)
				if (((  (((bool((a != null())) && bool((a->prev != null()))))) ? bool(!(((  (((a->id < a->prev->id))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(a->id,a->prev->id)) : bool(::zpp_nape::geom::ZPP_Simple_obj::inthash->has(a->prev->id,a->id)) )))) : bool(false) ))){
					HX_STACK_LINE(1591)
					::zpp_nape::geom::ZPP_SimpleEvent intx1 = ::zpp_nape::geom::ZPP_Simple_obj::sweep->intersection(a,a->prev);		HX_STACK_VAR(intx1,"intx1");
					HX_STACK_LINE(1592)
					if (((intx1 != null()))){
						HX_STACK_LINE(1593)
						if (((intx1->vertex->x >= ::zpp_nape::geom::ZPP_Simple_obj::sweep->sweepx))){
							HX_STACK_LINE(1594)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1594)
							{
								HX_STACK_LINE(1595)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::queue->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(1596)
								while((true)){
									HX_STACK_LINE(1596)
									if ((!(((cur != null()))))){
										HX_STACK_LINE(1596)
										break;
									}
									HX_STACK_LINE(1597)
									if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(intx1,cur->data))){
										HX_STACK_LINE(1597)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(1598)
										if ((::zpp_nape::geom::ZPP_Simple_obj::queue->lt(cur->data,intx1))){
											HX_STACK_LINE(1598)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(1599)
											break;
										}
									}
								}
								HX_STACK_LINE(1601)
								ex = cur;
							}
							HX_STACK_LINE(1603)
							if (((ex == null()))){
								HX_STACK_LINE(1604)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1604)
								{
									HX_STACK_LINE(1605)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = ::zpp_nape::geom::ZPP_Simple_obj::ints->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1606)
									while((true)){
										HX_STACK_LINE(1606)
										if ((!(((cur != null()))))){
											HX_STACK_LINE(1606)
											break;
										}
										HX_STACK_LINE(1607)
										if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(intx1,cur->data))){
											HX_STACK_LINE(1607)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1608)
											if ((::zpp_nape::geom::ZPP_Simple_obj::ints->lt(cur->data,intx1))){
												HX_STACK_LINE(1608)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1609)
												break;
											}
										}
									}
									HX_STACK_LINE(1611)
									vx = cur;
								}
								HX_STACK_LINE(1613)
								if (((vx != null()))){
									HX_STACK_LINE(1614)
									{
										HX_STACK_LINE(1615)
										::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1624)
										{
											HX_STACK_LINE(1624)
											o->links->clear();
											HX_STACK_LINE(1624)
											o->node = null();
											HX_STACK_LINE(1624)
											o->forced = false;
										}
										HX_STACK_LINE(1625)
										o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
										HX_STACK_LINE(1626)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1631)
									intx1->vertex = vx->data->vertex;
									HX_STACK_LINE(1632)
									vx->data = intx1;
									HX_STACK_LINE(1633)
									::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx1);
								}
								else{
									HX_STACK_LINE(1636)
									::zpp_nape::geom::ZPP_Simple_obj::queue->insert(intx1);
									HX_STACK_LINE(1637)
									::zpp_nape::geom::ZPP_Simple_obj::ints->insert(intx1);
								}
								HX_STACK_LINE(1639)
								if (((a->id < a->prev->id))){
									HX_STACK_LINE(1639)
									::zpp_nape::util::Hashable2_Boolfalse _g46;		HX_STACK_VAR(_g46,"_g46");
									HX_STACK_LINE(1639)
									{
										HX_STACK_LINE(1639)
										::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1639)
										{
											HX_STACK_LINE(1639)
											::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1639)
											{
												HX_STACK_LINE(1639)
												if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
													HX_STACK_LINE(1639)
													::zpp_nape::util::Hashable2_Boolfalse _g45 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g45,"_g45");
													HX_STACK_LINE(1639)
													ret1 = _g45;
												}
												else{
													HX_STACK_LINE(1639)
													ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
													HX_STACK_LINE(1639)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1639)
													ret1->next = null();
												}
												HX_STACK_LINE(1639)
												Dynamic();
											}
											HX_STACK_LINE(1639)
											ret1->id = a->id;
											HX_STACK_LINE(1639)
											ret1->di = a->prev->id;
											HX_STACK_LINE(1639)
											ret = ret1;
										}
										HX_STACK_LINE(1639)
										ret->value = true;
										HX_STACK_LINE(1639)
										_g46 = ret;
									}
									HX_STACK_LINE(1639)
									::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g46);
								}
								else{
									HX_STACK_LINE(1640)
									::zpp_nape::util::Hashable2_Boolfalse _g48;		HX_STACK_VAR(_g48,"_g48");
									HX_STACK_LINE(1640)
									{
										HX_STACK_LINE(1640)
										::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1640)
										{
											HX_STACK_LINE(1640)
											::zpp_nape::util::Hashable2_Boolfalse ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1640)
											{
												HX_STACK_LINE(1640)
												if (((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool == null()))){
													HX_STACK_LINE(1640)
													::zpp_nape::util::Hashable2_Boolfalse _g47 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g47,"_g47");
													HX_STACK_LINE(1640)
													ret1 = _g47;
												}
												else{
													HX_STACK_LINE(1640)
													ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
													HX_STACK_LINE(1640)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1640)
													ret1->next = null();
												}
												HX_STACK_LINE(1640)
												Dynamic();
											}
											HX_STACK_LINE(1640)
											ret1->id = a->prev->id;
											HX_STACK_LINE(1640)
											ret1->di = a->id;
											HX_STACK_LINE(1640)
											ret = ret1;
										}
										HX_STACK_LINE(1640)
										ret->value = true;
										HX_STACK_LINE(1640)
										_g48 = ret;
									}
									HX_STACK_LINE(1640)
									::zpp_nape::geom::ZPP_Simple_obj::inthash->add(_g48);
								}
							}
							else{
								HX_STACK_LINE(1643)
								::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1647)
								{
									HX_STACK_LINE(1648)
									::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1657)
									{
										HX_STACK_LINE(1657)
										o->links->clear();
										HX_STACK_LINE(1657)
										o->node = null();
										HX_STACK_LINE(1657)
										o->forced = false;
									}
									HX_STACK_LINE(1658)
									o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(1659)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1664)
								{
									HX_STACK_LINE(1665)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1674)
									{
										HX_STACK_LINE(1674)
										o->vertex = null();
										HX_STACK_LINE(1674)
										::zpp_nape::geom::ZPP_SimpleSeg _g49 = o->segment2 = null();		HX_STACK_VAR(_g49,"_g49");
										HX_STACK_LINE(1674)
										o->segment = _g49;
										HX_STACK_LINE(1674)
										o->node = null();
									}
									HX_STACK_LINE(1675)
									o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(1676)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
						else{
							HX_STACK_LINE(1684)
							{
								HX_STACK_LINE(1685)
								::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1694)
								{
									HX_STACK_LINE(1694)
									o->links->clear();
									HX_STACK_LINE(1694)
									o->node = null();
									HX_STACK_LINE(1694)
									o->forced = false;
								}
								HX_STACK_LINE(1695)
								o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(1696)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1701)
							{
								HX_STACK_LINE(1702)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1711)
								{
									HX_STACK_LINE(1711)
									o->vertex = null();
									HX_STACK_LINE(1711)
									::zpp_nape::geom::ZPP_SimpleSeg _g50 = o->segment2 = null();		HX_STACK_VAR(_g50,"_g50");
									HX_STACK_LINE(1711)
									o->segment = _g50;
									HX_STACK_LINE(1711)
									o->node = null();
								}
								HX_STACK_LINE(1712)
								o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(1713)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
				}
				HX_STACK_LINE(1722)
				::zpp_nape::geom::ZPP_Simple_obj::ints->remove(e);
			}
		}
		HX_STACK_LINE(1724)
		{
			HX_STACK_LINE(1725)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1734)
			{
				HX_STACK_LINE(1734)
				o->vertex = null();
				HX_STACK_LINE(1734)
				::zpp_nape::geom::ZPP_SimpleSeg _g51 = o->segment2 = null();		HX_STACK_VAR(_g51,"_g51");
				HX_STACK_LINE(1734)
				o->segment = _g51;
				HX_STACK_LINE(1734)
				o->node = null();
			}
			HX_STACK_LINE(1735)
			o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(1736)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1759)
	{
		HX_STACK_LINE(1759)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1759)
		int _g = ::zpp_nape::geom::ZPP_Simple_obj::inthash->table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1759)
		while((true)){
			HX_STACK_LINE(1759)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1759)
				break;
			}
			HX_STACK_LINE(1759)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1760)
			::zpp_nape::util::Hashable2_Boolfalse n = ::zpp_nape::geom::ZPP_Simple_obj::inthash->table->__get(i).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(1761)
			if (((n == null()))){
				HX_STACK_LINE(1761)
				continue;
			}
			HX_STACK_LINE(1762)
			while((true)){
				HX_STACK_LINE(1762)
				if ((!(((n != null()))))){
					HX_STACK_LINE(1762)
					break;
				}
				HX_STACK_LINE(1763)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1764)
				n->hnext = null();
				HX_STACK_LINE(1765)
				{
					HX_STACK_LINE(1766)
					::zpp_nape::util::Hashable2_Boolfalse o = n;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1776)
					o->next = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
					HX_STACK_LINE(1777)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1782)
				n = t;
			}
			HX_STACK_LINE(1784)
			::zpp_nape::geom::ZPP_Simple_obj::inthash->table[i] = null();
		}
	}
	HX_STACK_LINE(1787)
	if (((rets == null()))){
		HX_STACK_LINE(1787)
		::zpp_nape::util::ZNPList_ZPP_GeomVert _g52 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(1787)
		rets = _g52;
	}
	HX_STACK_LINE(1788)
	while((true)){
		HX_STACK_LINE(1788)
		if ((!((!(::zpp_nape::geom::ZPP_Simple_obj::vertices->empty()))))){
			HX_STACK_LINE(1788)
			break;
		}
		HX_STACK_LINE(1788)
		::zpp_nape::geom::ZPP_Simple_obj::clip_polygon(::zpp_nape::geom::ZPP_Simple_obj::vertices,rets);
	}
	HX_STACK_LINE(1789)
	return rets;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simple_obj,decompose,return )

Void ZPP_Simple_obj::clip_polygon( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vertices,::zpp_nape::util::ZNPList_ZPP_GeomVert rets){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","clip_polygon",0x0724c711,"zpp_nape.geom.ZPP_Simple.clip_polygon","zpp_nape/geom/Simple.hx",1791,0x62f156db)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(rets,"rets")
		HX_STACK_LINE(1792)
		::zpp_nape::geom::ZPP_GeomVert ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1793)
		::zpp_nape::geom::ZPP_SimpleVert cur = vertices->first();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1802)
		::zpp_nape::geom::ZPP_SimpleVert fst = cur;		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(1803)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pren = cur->links->parent;		HX_STACK_VAR(pren,"pren");
		HX_STACK_LINE(1804)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxtn;		HX_STACK_VAR(nxtn,"nxtn");
		HX_STACK_LINE(1804)
		if (((pren->prev == null()))){
			HX_STACK_LINE(1804)
			nxtn = pren->next;
		}
		else{
			HX_STACK_LINE(1804)
			nxtn = pren->prev;
		}
		HX_STACK_LINE(1805)
		::zpp_nape::geom::ZPP_SimpleVert pre = pren->data;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1806)
		::zpp_nape::geom::ZPP_SimpleVert nxt = nxtn->data;		HX_STACK_VAR(nxt,"nxt");
		HX_STACK_LINE(1807)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1807)
		{
			HX_STACK_LINE(1808)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(1809)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(1810)
			{
				HX_STACK_LINE(1811)
				ux = (cur->x - pre->x);
				HX_STACK_LINE(1812)
				uy = (cur->y - pre->y);
			}
			HX_STACK_LINE(1814)
			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(1815)
			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(1816)
			{
				HX_STACK_LINE(1817)
				vx = (nxt->x - cur->x);
				HX_STACK_LINE(1818)
				vy = (nxt->y - cur->y);
			}
			HX_STACK_LINE(1820)
			_g = ((vy * ux) - (vx * uy));
		}
		HX_STACK_LINE(1807)
		if (((_g < (int)0))){
			HX_STACK_LINE(1821)
			nxt = pre;
		}
		HX_STACK_LINE(1822)
		::zpp_nape::geom::ZPP_GeomVert _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1822)
		{
			HX_STACK_LINE(1823)
			::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1823)
			{
				HX_STACK_LINE(1823)
				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1823)
				{
					HX_STACK_LINE(1823)
					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(1823)
						::zpp_nape::geom::ZPP_GeomVert _g1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1823)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(1823)
						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(1823)
						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1823)
						ret1->next = null();
					}
					HX_STACK_LINE(1823)
					ret1->forced = false;
				}
				HX_STACK_LINE(1823)
				{
					HX_STACK_LINE(1823)
					ret1->x = cur->x;
					HX_STACK_LINE(1823)
					ret1->y = cur->y;
					HX_STACK_LINE(1823)
					{
					}
				}
				HX_STACK_LINE(1823)
				obj = ret1;
			}
			HX_STACK_LINE(1824)
			if (((ret == null()))){
				HX_STACK_LINE(1824)
				::zpp_nape::geom::ZPP_GeomVert _g2 = obj->next = obj;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1824)
				::zpp_nape::geom::ZPP_GeomVert _g3 = obj->prev = _g2;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1824)
				ret = _g3;
			}
			else{
				HX_STACK_LINE(1826)
				obj->prev = ret;
				HX_STACK_LINE(1827)
				obj->next = ret->next;
				HX_STACK_LINE(1828)
				ret->next->prev = obj;
				HX_STACK_LINE(1829)
				ret->next = obj;
			}
			HX_STACK_LINE(1831)
			_g4 = obj;
		}
		HX_STACK_LINE(1822)
		ret = _g4;
		HX_STACK_LINE(1833)
		ret->forced = cur->forced;
		HX_STACK_LINE(1834)
		while((true)){
			HX_STACK_LINE(1835)
			cur->links->remove(nxt);
			HX_STACK_LINE(1836)
			nxt->links->remove(cur);
			HX_STACK_LINE(1837)
			if (((nxt == fst))){
				HX_STACK_LINE(1838)
				if ((cur->links->empty())){
					HX_STACK_LINE(1839)
					vertices->remove(cur);
					HX_STACK_LINE(1840)
					{
						HX_STACK_LINE(1841)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1850)
						{
							HX_STACK_LINE(1850)
							o->links->clear();
							HX_STACK_LINE(1850)
							o->node = null();
							HX_STACK_LINE(1850)
							o->forced = false;
						}
						HX_STACK_LINE(1851)
						o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(1852)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1858)
				break;
			}
			HX_STACK_LINE(1860)
			::zpp_nape::geom::ZPP_GeomVert _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1860)
			{
				HX_STACK_LINE(1861)
				::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1861)
				{
					HX_STACK_LINE(1861)
					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1861)
						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(1861)
							::zpp_nape::geom::ZPP_GeomVert _g5 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1861)
							ret1 = _g5;
						}
						else{
							HX_STACK_LINE(1861)
							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(1861)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1861)
							ret1->next = null();
						}
						HX_STACK_LINE(1861)
						ret1->forced = false;
					}
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1861)
						ret1->x = nxt->x;
						HX_STACK_LINE(1861)
						ret1->y = nxt->y;
						HX_STACK_LINE(1861)
						{
						}
					}
					HX_STACK_LINE(1861)
					obj = ret1;
				}
				HX_STACK_LINE(1862)
				if (((ret == null()))){
					HX_STACK_LINE(1862)
					::zpp_nape::geom::ZPP_GeomVert _g6 = obj->next = obj;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1862)
					::zpp_nape::geom::ZPP_GeomVert _g7 = obj->prev = _g6;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1862)
					ret = _g7;
				}
				else{
					HX_STACK_LINE(1864)
					obj->prev = ret;
					HX_STACK_LINE(1865)
					obj->next = ret->next;
					HX_STACK_LINE(1866)
					ret->next->prev = obj;
					HX_STACK_LINE(1867)
					ret->next = obj;
				}
				HX_STACK_LINE(1869)
				_g8 = obj;
			}
			HX_STACK_LINE(1860)
			ret = _g8;
			HX_STACK_LINE(1871)
			ret->forced = nxt->forced;
			HX_STACK_LINE(1880)
			if ((nxt->links->singular())){
				HX_STACK_LINE(1881)
				if ((cur->links->empty())){
					HX_STACK_LINE(1882)
					vertices->remove(cur);
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1884)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1893)
						{
							HX_STACK_LINE(1893)
							o->links->clear();
							HX_STACK_LINE(1893)
							o->node = null();
							HX_STACK_LINE(1893)
							o->forced = false;
						}
						HX_STACK_LINE(1894)
						o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(1895)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1901)
				cur = nxt;
				HX_STACK_LINE(1902)
				nxt = nxt->links->parent->data;
			}
			else{
				HX_STACK_LINE(1905)
				::zpp_nape::geom::ZPP_SimpleVert min = null();		HX_STACK_VAR(min,"min");
				HX_STACK_LINE(1906)
				Float minl = 0.0;		HX_STACK_VAR(minl,"minl");
				HX_STACK_LINE(1916)
				if ((!(nxt->links->empty()))){
					HX_STACK_LINE(1917)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = nxt->links->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(1918)
					while((true)){
						HX_STACK_LINE(1918)
						if ((!(((set_ite->prev != null()))))){
							HX_STACK_LINE(1918)
							break;
						}
						HX_STACK_LINE(1918)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(1919)
					while((true)){
						HX_STACK_LINE(1919)
						if ((!(((set_ite != null()))))){
							HX_STACK_LINE(1919)
							break;
						}
						HX_STACK_LINE(1920)
						::zpp_nape::geom::ZPP_SimpleVert p = set_ite->data;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1922)
						if (((min == null()))){
							HX_STACK_LINE(1923)
							min = p;
							HX_STACK_LINE(1924)
							Float _g9;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1924)
							{
								HX_STACK_LINE(1925)
								Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
								HX_STACK_LINE(1926)
								Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
								HX_STACK_LINE(1927)
								{
									HX_STACK_LINE(1928)
									ux = (nxt->x - cur->x);
									HX_STACK_LINE(1929)
									uy = (nxt->y - cur->y);
								}
								HX_STACK_LINE(1931)
								Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1932)
								Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
								HX_STACK_LINE(1933)
								{
									HX_STACK_LINE(1934)
									vx = (p->x - nxt->x);
									HX_STACK_LINE(1935)
									vy = (p->y - nxt->y);
								}
								HX_STACK_LINE(1937)
								_g9 = ((vy * ux) - (vx * uy));
							}
							HX_STACK_LINE(1924)
							minl = _g9;
						}
						else{
							HX_STACK_LINE(1941)
							Float nleft;		HX_STACK_VAR(nleft,"nleft");
							HX_STACK_LINE(1941)
							{
								HX_STACK_LINE(1942)
								Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
								HX_STACK_LINE(1943)
								Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
								HX_STACK_LINE(1944)
								{
									HX_STACK_LINE(1945)
									ux = (nxt->x - cur->x);
									HX_STACK_LINE(1946)
									uy = (nxt->y - cur->y);
								}
								HX_STACK_LINE(1948)
								Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1949)
								Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
								HX_STACK_LINE(1950)
								{
									HX_STACK_LINE(1951)
									vx = (p->x - nxt->x);
									HX_STACK_LINE(1952)
									vy = (p->y - nxt->y);
								}
								HX_STACK_LINE(1954)
								nleft = ((vy * ux) - (vx * uy));
							}
							HX_STACK_LINE(1956)
							if (((bool((nleft > (int)0)) && bool((minl <= (int)0))))){
								HX_STACK_LINE(1957)
								min = p;
								HX_STACK_LINE(1958)
								minl = nleft;
							}
							else{
								HX_STACK_LINE(1960)
								if ((((minl * nleft) >= (int)0))){
									HX_STACK_LINE(1961)
									Float pleft;		HX_STACK_VAR(pleft,"pleft");
									HX_STACK_LINE(1961)
									{
										HX_STACK_LINE(1962)
										Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
										HX_STACK_LINE(1963)
										Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
										HX_STACK_LINE(1964)
										{
											HX_STACK_LINE(1965)
											ux = (nxt->x - p->x);
											HX_STACK_LINE(1966)
											uy = (nxt->y - p->y);
										}
										HX_STACK_LINE(1968)
										Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(1969)
										Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(1970)
										{
											HX_STACK_LINE(1971)
											vx = (min->x - nxt->x);
											HX_STACK_LINE(1972)
											vy = (min->y - nxt->y);
										}
										HX_STACK_LINE(1974)
										pleft = ((vy * ux) - (vx * uy));
									}
									HX_STACK_LINE(1976)
									if (((pleft > (int)0))){
										HX_STACK_LINE(1977)
										min = p;
										HX_STACK_LINE(1978)
										minl = nleft;
									}
								}
							}
						}
						HX_STACK_LINE(1983)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(1984)
							set_ite = set_ite->next;
							HX_STACK_LINE(1985)
							while((true)){
								HX_STACK_LINE(1985)
								if ((!(((set_ite->prev != null()))))){
									HX_STACK_LINE(1985)
									break;
								}
								HX_STACK_LINE(1985)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(1988)
							while((true)){
								HX_STACK_LINE(1988)
								if ((!(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))))){
									HX_STACK_LINE(1988)
									break;
								}
								HX_STACK_LINE(1988)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(1989)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(1994)
				if ((cur->links->empty())){
					HX_STACK_LINE(1995)
					vertices->remove(cur);
					HX_STACK_LINE(1996)
					{
						HX_STACK_LINE(1997)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2006)
						{
							HX_STACK_LINE(2006)
							o->links->clear();
							HX_STACK_LINE(2006)
							o->node = null();
							HX_STACK_LINE(2006)
							o->forced = false;
						}
						HX_STACK_LINE(2007)
						o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(2008)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(2014)
				cur = nxt;
				HX_STACK_LINE(2015)
				nxt = min;
			}
		}
		HX_STACK_LINE(2026)
		{
			HX_STACK_LINE(2027)
			vertices->remove(fst);
			HX_STACK_LINE(2028)
			{
				HX_STACK_LINE(2029)
				::zpp_nape::geom::ZPP_SimpleVert o = fst;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2038)
				{
					HX_STACK_LINE(2038)
					o->links->clear();
					HX_STACK_LINE(2038)
					o->node = null();
					HX_STACK_LINE(2038)
					o->forced = false;
				}
				HX_STACK_LINE(2039)
				o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(2040)
				::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2046)
		rets->add(ret);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simple_obj,clip_polygon,(void))

::zpp_nape::util::ZNPList_ZPP_SimpleVert ZPP_Simple_obj::list_vertices;

::zpp_nape::util::ZNPList_ZPP_SimpleEvent ZPP_Simple_obj::list_queue;

bool ZPP_Simple_obj::isSimple( ::zpp_nape::geom::ZPP_GeomVert poly){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","isSimple",0x2a953102,"zpp_nape.geom.ZPP_Simple.isSimple","zpp_nape/geom/Simple.hx",2050,0x62f156db)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(2051)
	if (((::zpp_nape::geom::ZPP_Simple_obj::sweep == null()))){
		HX_STACK_LINE(2052)
		::zpp_nape::geom::ZPP_SimpleSweep _g = ::zpp_nape::geom::ZPP_SimpleSweep_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2052)
		::zpp_nape::geom::ZPP_Simple_obj::sweep = _g;
		HX_STACK_LINE(2053)
		::zpp_nape::util::FastHash2_Hashable2_Boolfalse _g1 = ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2053)
		::zpp_nape::geom::ZPP_Simple_obj::inthash = _g1;
	}
	HX_STACK_LINE(2055)
	::zpp_nape::util::ZNPList_ZPP_SimpleVert vertices = ::zpp_nape::geom::ZPP_Simple_obj::list_vertices;		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(2056)
	if (((vertices == null()))){
		HX_STACK_LINE(2056)
		::zpp_nape::util::ZNPList_ZPP_SimpleVert _g2 = ::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2056)
		::zpp_nape::util::ZNPList_ZPP_SimpleVert _g3 = ::zpp_nape::geom::ZPP_Simple_obj::list_vertices = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2056)
		vertices = _g3;
	}
	HX_STACK_LINE(2057)
	{
		HX_STACK_LINE(2058)
		::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2059)
		::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2060)
		if (((F != null()))){
			HX_STACK_LINE(2061)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2062)
			while((true)){
				HX_STACK_LINE(2063)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2065)
				{
					HX_STACK_LINE(2066)
					::zpp_nape::geom::ZPP_SimpleVert _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2066)
					{
						HX_STACK_LINE(2066)
						::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(2066)
								::zpp_nape::geom::ZPP_SimpleVert _g4 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(2066)
								ret = _g4;
							}
							else{
								HX_STACK_LINE(2066)
								ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(2066)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(2066)
								ret->next = null();
							}
							HX_STACK_LINE(2066)
							Dynamic();
						}
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							ret->x = v->x;
							HX_STACK_LINE(2066)
							ret->y = v->y;
							HX_STACK_LINE(2066)
							{
							}
						}
						HX_STACK_LINE(2066)
						_g5 = ret;
					}
					HX_STACK_LINE(2066)
					vertices->add(_g5);
				}
				HX_STACK_LINE(2069)
				nite = nite->next;
				HX_STACK_LINE(2062)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2062)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2074)
	::zpp_nape::util::ZNPList_ZPP_SimpleEvent queue = ::zpp_nape::geom::ZPP_Simple_obj::list_queue;		HX_STACK_VAR(queue,"queue");
	HX_STACK_LINE(2075)
	if (((queue == null()))){
		HX_STACK_LINE(2075)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent _g6 = ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(2075)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent _g7 = ::zpp_nape::geom::ZPP_Simple_obj::list_queue = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(2075)
		queue = _g7;
	}
	HX_STACK_LINE(2076)
	{
		HX_STACK_LINE(2077)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = vertices->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2078)
		::zpp_nape::geom::ZPP_SimpleVert u = cx_ite->elt;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(2079)
		cx_ite = cx_ite->next;
		HX_STACK_LINE(2080)
		while((true)){
			HX_STACK_LINE(2080)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(2080)
				break;
			}
			HX_STACK_LINE(2081)
			::zpp_nape::geom::ZPP_SimpleVert v = cx_ite->elt;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(2082)
			{
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_SimpleEvent _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(2083)
				{
					HX_STACK_LINE(2083)
					::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(2083)
					{
						HX_STACK_LINE(2083)
						if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(2083)
							::zpp_nape::geom::ZPP_SimpleEvent _g8 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(2083)
							ret = _g8;
						}
						else{
							HX_STACK_LINE(2083)
							ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(2083)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
							HX_STACK_LINE(2083)
							ret->next = null();
						}
						HX_STACK_LINE(2083)
						Dynamic();
					}
					HX_STACK_LINE(2083)
					ret->vertex = u;
					HX_STACK_LINE(2083)
					_g9 = ret;
				}
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_SimpleEvent e1 = queue->add(_g9);		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(2084)
				::zpp_nape::geom::ZPP_SimpleEvent _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2084)
				{
					HX_STACK_LINE(2084)
					::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(2084)
					{
						HX_STACK_LINE(2084)
						if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(2084)
							::zpp_nape::geom::ZPP_SimpleEvent _g10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(2084)
							ret = _g10;
						}
						else{
							HX_STACK_LINE(2084)
							ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(2084)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
							HX_STACK_LINE(2084)
							ret->next = null();
						}
						HX_STACK_LINE(2084)
						Dynamic();
					}
					HX_STACK_LINE(2084)
					ret->vertex = v;
					HX_STACK_LINE(2084)
					_g11 = ret;
				}
				HX_STACK_LINE(2084)
				::zpp_nape::geom::ZPP_SimpleEvent e2 = queue->add(_g11);		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleSeg _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(2085)
				if ((::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(e1,e2))){
					HX_STACK_LINE(2086)
					e1->type = (int)1;
					HX_STACK_LINE(2087)
					e2->type = (int)2;
					HX_STACK_LINE(2088)
					_g12 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(u,v);
				}
				else{
					HX_STACK_LINE(2091)
					e1->type = (int)2;
					HX_STACK_LINE(2092)
					e2->type = (int)1;
					HX_STACK_LINE(2093)
					_g12 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(v,u);
				}
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleSeg _g13 = e2->segment = _g12;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(2085)
				e1->segment = _g13;
			}
			HX_STACK_LINE(2096)
			u = v;
			HX_STACK_LINE(2097)
			cx_ite = cx_ite->next;
		}
		HX_STACK_LINE(2099)
		::zpp_nape::geom::ZPP_SimpleVert v = vertices->head->elt;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2100)
		{
			HX_STACK_LINE(2101)
			::zpp_nape::geom::ZPP_SimpleEvent _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(2101)
			{
				HX_STACK_LINE(2101)
				::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2101)
				{
					HX_STACK_LINE(2101)
					if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(2101)
						::zpp_nape::geom::ZPP_SimpleEvent _g14 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(2101)
						ret = _g14;
					}
					else{
						HX_STACK_LINE(2101)
						ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(2101)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2101)
						ret->next = null();
					}
					HX_STACK_LINE(2101)
					Dynamic();
				}
				HX_STACK_LINE(2101)
				ret->vertex = u;
				HX_STACK_LINE(2101)
				_g15 = ret;
			}
			HX_STACK_LINE(2101)
			::zpp_nape::geom::ZPP_SimpleEvent e1 = queue->add(_g15);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(2102)
			::zpp_nape::geom::ZPP_SimpleEvent _g17;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(2102)
			{
				HX_STACK_LINE(2102)
				::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2102)
				{
					HX_STACK_LINE(2102)
					if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(2102)
						::zpp_nape::geom::ZPP_SimpleEvent _g16 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(2102)
						ret = _g16;
					}
					else{
						HX_STACK_LINE(2102)
						ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(2102)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2102)
						ret->next = null();
					}
					HX_STACK_LINE(2102)
					Dynamic();
				}
				HX_STACK_LINE(2102)
				ret->vertex = v;
				HX_STACK_LINE(2102)
				_g17 = ret;
			}
			HX_STACK_LINE(2102)
			::zpp_nape::geom::ZPP_SimpleEvent e2 = queue->add(_g17);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleSeg _g18;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(2103)
			if ((::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(e1,e2))){
				HX_STACK_LINE(2104)
				e1->type = (int)1;
				HX_STACK_LINE(2105)
				e2->type = (int)2;
				HX_STACK_LINE(2106)
				_g18 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(u,v);
			}
			else{
				HX_STACK_LINE(2109)
				e1->type = (int)2;
				HX_STACK_LINE(2110)
				e2->type = (int)1;
				HX_STACK_LINE(2111)
				_g18 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(v,u);
			}
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleSeg _g19 = e2->segment = _g18;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(2103)
			e1->segment = _g19;
		}
	}
	HX_STACK_LINE(2115)
	{
		HX_STACK_LINE(2116)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent xxlist = queue;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(2117)
		if (((bool(!(((xxlist->head == null())))) && bool((xxlist->head->next != null()))))){
			HX_STACK_LINE(2118)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(2119)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(2120)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(2121)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(2122)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(2123)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(2124)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			HX_STACK_LINE(2124)
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			HX_STACK_LINE(2124)
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(2125)
			while((true)){
				HX_STACK_LINE(2126)
				numMerges = (int)0;
				HX_STACK_LINE(2127)
				left = head;
				HX_STACK_LINE(2128)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent _g20 = head = null();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(2128)
				tail = _g20;
				HX_STACK_LINE(2129)
				while((true)){
					HX_STACK_LINE(2129)
					if ((!(((left != null()))))){
						HX_STACK_LINE(2129)
						break;
					}
					HX_STACK_LINE(2130)
					(numMerges)++;
					HX_STACK_LINE(2131)
					right = left;
					HX_STACK_LINE(2132)
					leftSize = (int)0;
					HX_STACK_LINE(2133)
					rightSize = listSize;
					HX_STACK_LINE(2134)
					while((true)){
						HX_STACK_LINE(2134)
						if ((!(((bool((right != null())) && bool((leftSize < listSize))))))){
							HX_STACK_LINE(2134)
							break;
						}
						HX_STACK_LINE(2135)
						(leftSize)++;
						HX_STACK_LINE(2136)
						right = right->next;
					}
					HX_STACK_LINE(2138)
					while((true)){
						HX_STACK_LINE(2138)
						if ((!(((bool((leftSize > (int)0)) || bool((bool((rightSize > (int)0)) && bool((right != null()))))))))){
							HX_STACK_LINE(2138)
							break;
						}
						HX_STACK_LINE(2139)
						if (((leftSize == (int)0))){
							HX_STACK_LINE(2140)
							nxt = right;
							HX_STACK_LINE(2141)
							right = right->next;
							HX_STACK_LINE(2142)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(2144)
							if (((bool((rightSize == (int)0)) || bool((right == null()))))){
								HX_STACK_LINE(2145)
								nxt = left;
								HX_STACK_LINE(2146)
								left = left->next;
								HX_STACK_LINE(2147)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(2149)
								if ((::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(left->elt,right->elt))){
									HX_STACK_LINE(2150)
									nxt = left;
									HX_STACK_LINE(2151)
									left = left->next;
									HX_STACK_LINE(2152)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(2155)
									nxt = right;
									HX_STACK_LINE(2156)
									right = right->next;
									HX_STACK_LINE(2157)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(2159)
						if (((tail != null()))){
							HX_STACK_LINE(2159)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(2160)
							head = nxt;
						}
						HX_STACK_LINE(2161)
						tail = nxt;
					}
					HX_STACK_LINE(2163)
					left = right;
				}
				HX_STACK_LINE(2165)
				tail->next = null();
				HX_STACK_LINE(2166)
				hx::ShlEq(listSize,(int)1);
				HX_STACK_LINE(2125)
				if ((!(((numMerges > (int)1))))){
					HX_STACK_LINE(2125)
					break;
				}
			}
			HX_STACK_LINE(2169)
			{
				HX_STACK_LINE(2169)
				xxlist->head = head;
				HX_STACK_LINE(2169)
				xxlist->modified = true;
				HX_STACK_LINE(2169)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(2172)
	bool ret = true;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2173)
	while((true)){
		HX_STACK_LINE(2173)
		if ((!((!(((queue->head == null()))))))){
			HX_STACK_LINE(2173)
			break;
		}
		HX_STACK_LINE(2174)
		::zpp_nape::geom::ZPP_SimpleEvent e = queue->pop_unsafe();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(2175)
		::zpp_nape::geom::ZPP_SimpleSeg seg = e->segment;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(2176)
		if (((e->type == (int)1))){
			HX_STACK_LINE(2177)
			::zpp_nape::geom::ZPP_Simple_obj::sweep->add(seg);
			HX_STACK_LINE(2178)
			if (((  ((!(::zpp_nape::geom::ZPP_Simple_obj::sweep->intersect(seg,seg->next)))) ? bool(::zpp_nape::geom::ZPP_Simple_obj::sweep->intersect(seg,seg->prev)) : bool(true) ))){
				HX_STACK_LINE(2179)
				ret = false;
				HX_STACK_LINE(2180)
				break;
			}
		}
		else{
			HX_STACK_LINE(2183)
			if (((e->type == (int)2))){
				HX_STACK_LINE(2184)
				if ((::zpp_nape::geom::ZPP_Simple_obj::sweep->intersect(seg->prev,seg->next))){
					HX_STACK_LINE(2185)
					ret = false;
					HX_STACK_LINE(2186)
					break;
				}
				HX_STACK_LINE(2188)
				::zpp_nape::geom::ZPP_Simple_obj::sweep->remove(seg);
				HX_STACK_LINE(2189)
				{
					HX_STACK_LINE(2190)
					::zpp_nape::geom::ZPP_SimpleSeg o = seg;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2199)
					{
						HX_STACK_LINE(2199)
						::zpp_nape::geom::ZPP_SimpleVert _g21 = o->right = null();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(2199)
						o->left = _g21;
						HX_STACK_LINE(2199)
						o->prev = null();
						HX_STACK_LINE(2199)
						o->node = null();
						HX_STACK_LINE(2199)
						o->vertices->clear();
					}
					HX_STACK_LINE(2200)
					o->next = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(2207)
		{
			HX_STACK_LINE(2208)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2217)
			{
				HX_STACK_LINE(2217)
				o->vertex = null();
				HX_STACK_LINE(2217)
				::zpp_nape::geom::ZPP_SimpleSeg _g22 = o->segment2 = null();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(2217)
				o->segment = _g22;
				HX_STACK_LINE(2217)
				o->node = null();
			}
			HX_STACK_LINE(2218)
			o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(2219)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(2225)
	while((true)){
		HX_STACK_LINE(2225)
		if ((!((!(((queue->head == null()))))))){
			HX_STACK_LINE(2225)
			break;
		}
		HX_STACK_LINE(2226)
		::zpp_nape::geom::ZPP_SimpleEvent e = queue->pop_unsafe();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(2227)
		if (((e->type == (int)2))){
			HX_STACK_LINE(2228)
			::zpp_nape::geom::ZPP_SimpleSeg o = e->segment;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2237)
			{
				HX_STACK_LINE(2237)
				::zpp_nape::geom::ZPP_SimpleVert _g23 = o->right = null();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(2237)
				o->left = _g23;
				HX_STACK_LINE(2237)
				o->prev = null();
				HX_STACK_LINE(2237)
				o->node = null();
				HX_STACK_LINE(2237)
				o->vertices->clear();
			}
			HX_STACK_LINE(2238)
			o->next = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(2239)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2244)
		{
			HX_STACK_LINE(2245)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2254)
			{
				HX_STACK_LINE(2254)
				o->vertex = null();
				HX_STACK_LINE(2254)
				::zpp_nape::geom::ZPP_SimpleSeg _g24 = o->segment2 = null();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(2254)
				o->segment = _g24;
				HX_STACK_LINE(2254)
				o->node = null();
			}
			HX_STACK_LINE(2255)
			o->next = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(2256)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(2262)
	::zpp_nape::geom::ZPP_Simple_obj::sweep->clear();
	HX_STACK_LINE(2263)
	while((true)){
		HX_STACK_LINE(2263)
		if ((!((!(((vertices->head == null()))))))){
			HX_STACK_LINE(2263)
			break;
		}
		HX_STACK_LINE(2264)
		::zpp_nape::geom::ZPP_SimpleVert o = vertices->pop_unsafe();		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2273)
		{
			HX_STACK_LINE(2273)
			o->links->clear();
			HX_STACK_LINE(2273)
			o->node = null();
			HX_STACK_LINE(2273)
			o->forced = false;
		}
		HX_STACK_LINE(2274)
		o->next = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(2275)
		::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2280)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Simple_obj,isSimple,return )


ZPP_Simple_obj::ZPP_Simple_obj()
{
}

Dynamic ZPP_Simple_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inthash") ) { return inthash; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"isSimple") ) { return isSimple_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"list_queue") ) { return list_queue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clip_polygon") ) { return clip_polygon_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"list_vertices") ) { return list_vertices; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Simple_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inthash") ) { inthash=inValue.Cast< ::zpp_nape::util::FastHash2_Hashable2_Boolfalse >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"list_queue") ) { list_queue=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"list_vertices") ) { list_vertices=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Simple_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sweep"),
	HX_CSTRING("inthash"),
	HX_CSTRING("vertices"),
	HX_CSTRING("queue"),
	HX_CSTRING("ints"),
	HX_CSTRING("decompose"),
	HX_CSTRING("clip_polygon"),
	HX_CSTRING("list_vertices"),
	HX_CSTRING("list_queue"),
	HX_CSTRING("isSimple"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::sweep,"sweep");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::inthash,"inthash");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::vertices,"vertices");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::list_vertices,"list_vertices");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::list_queue,"list_queue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::sweep,"sweep");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::inthash,"inthash");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::vertices,"vertices");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::list_vertices,"list_vertices");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::list_queue,"list_queue");
};

#endif

Class ZPP_Simple_obj::__mClass;

void ZPP_Simple_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Simple"), hx::TCanCast< ZPP_Simple_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Simple_obj::__boot()
{
	sweep= null();
	inthash= null();
	vertices= null();
	queue= null();
	ints= null();
	list_vertices= null();
	list_queue= null();
}

} // end namespace zpp_nape
} // end namespace geom
