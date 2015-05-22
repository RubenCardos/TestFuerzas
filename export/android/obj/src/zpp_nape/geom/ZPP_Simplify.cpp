#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Simplify_obj::__construct()
{
	return null();
}

//ZPP_Simplify_obj::~ZPP_Simplify_obj() { }

Dynamic ZPP_Simplify_obj::__CreateEmpty() { return  new ZPP_Simplify_obj; }
hx::ObjectPtr< ZPP_Simplify_obj > ZPP_Simplify_obj::__new()
{  hx::ObjectPtr< ZPP_Simplify_obj > result = new ZPP_Simplify_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Simplify_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Simplify_obj > result = new ZPP_Simplify_obj();
	result->__construct();
	return result;}

Float ZPP_Simplify_obj::lessval( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","lessval",0xdccd3df9,"zpp_nape.geom.ZPP_Simplify.lessval","zpp_nape/geom/Simplify.hx",323,0xe5fbc624)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(323)
	return ((a->x - b->x) + ((a->y - b->y)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,lessval,return )

bool ZPP_Simplify_obj::less( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","less",0xc394c1e8,"zpp_nape.geom.ZPP_Simplify.less","zpp_nape/geom/Simplify.hx",327,0xe5fbc624)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(327)
	return (((a->x - b->x) + ((a->y - b->y))) < 0.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,less,return )

Float ZPP_Simplify_obj::distance( ::zpp_nape::geom::ZPP_SimplifyV v,::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","distance",0xb91a3544,"zpp_nape.geom.ZPP_Simplify.distance","zpp_nape/geom/Simplify.hx",329,0xe5fbc624)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(330)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(331)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(333)
		nx = (b->x - a->x);
		HX_STACK_LINE(334)
		ny = (b->y - a->y);
	}
	HX_STACK_LINE(336)
	Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(337)
	Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(339)
		cx = (v->x - a->x);
		HX_STACK_LINE(340)
		cy = (v->y - a->y);
	}
	HX_STACK_LINE(342)
	Float den = ((nx * nx) + (ny * ny));		HX_STACK_VAR(den,"den");
	HX_STACK_LINE(343)
	if (((den == 0.0))){
		HX_STACK_LINE(343)
		return ((cx * cx) + (cy * cy));
	}
	else{
		HX_STACK_LINE(345)
		Float t = (Float((((cx * nx) + (cy * ny)))) / Float((((nx * nx) + (ny * ny)))));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(346)
		if (((t <= (int)0))){
			HX_STACK_LINE(346)
			return ((cx * cx) + (cy * cy));
		}
		else{
			HX_STACK_LINE(347)
			if (((t >= (int)1))){
				HX_STACK_LINE(347)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(347)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					dx = (v->x - b->x);
					HX_STACK_LINE(347)
					dy = (v->y - b->y);
				}
				HX_STACK_LINE(347)
				return ((dx * dx) + (dy * dy));
			}
			else{
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(350)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(359)
					hx::SubEq(cx,(nx * t1));
					HX_STACK_LINE(360)
					hx::SubEq(cy,(ny * t1));
				}
				HX_STACK_LINE(362)
				return ((cx * cx) + (cy * cy));
			}
		}
	}
	HX_STACK_LINE(343)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Simplify_obj,distance,return )

::zpp_nape::util::ZNPList_ZPP_SimplifyP ZPP_Simplify_obj::stack;

::zpp_nape::geom::ZPP_GeomVert ZPP_Simplify_obj::simplify( ::zpp_nape::geom::ZPP_GeomVert P,Float epsilon){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","simplify",0x6691f918,"zpp_nape.geom.ZPP_Simplify.simplify","zpp_nape/geom/Simplify.hx",367,0xe5fbc624)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(epsilon,"epsilon")
	HX_STACK_LINE(368)
	::zpp_nape::geom::ZPP_SimplifyV ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(369)
	::zpp_nape::geom::ZPP_SimplifyV min = null();		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(370)
	::zpp_nape::geom::ZPP_SimplifyV max = null();		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(371)
	hx::MultEq(epsilon,epsilon);
	HX_STACK_LINE(372)
	if (((::zpp_nape::geom::ZPP_Simplify_obj::stack == null()))){
		HX_STACK_LINE(373)
		::zpp_nape::util::ZNPList_ZPP_SimplifyP _g = ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(373)
		::zpp_nape::geom::ZPP_Simplify_obj::stack = _g;
	}
	HX_STACK_LINE(375)
	::zpp_nape::geom::ZPP_SimplifyV pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(376)
	::zpp_nape::geom::ZPP_SimplifyV fst = null();		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(377)
	::zpp_nape::geom::ZPP_GeomVert cur = P;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(378)
	while((true)){
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_SimplifyV v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::geom::ZPP_SimplifyV ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				if (((::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool == null()))){
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV _g1 = ::zpp_nape::geom::ZPP_SimplifyV_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(379)
					ret1 = _g1;
				}
				else{
					HX_STACK_LINE(379)
					ret1 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(379)
					ret1->next = null();
				}
				HX_STACK_LINE(379)
				Dynamic();
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				ret1->x = cur->x;
				HX_STACK_LINE(379)
				ret1->y = cur->y;
				HX_STACK_LINE(379)
				{
				}
			}
			HX_STACK_LINE(379)
			ret1->flag = false;
			HX_STACK_LINE(379)
			v = ret1;
		}
		HX_STACK_LINE(380)
		v->forced = cur->forced;
		HX_STACK_LINE(381)
		if ((v->forced)){
			HX_STACK_LINE(382)
			v->flag = true;
			HX_STACK_LINE(383)
			if (((pre != null()))){
				HX_STACK_LINE(383)
				::zpp_nape::geom::ZPP_SimplifyP _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP _g2 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(383)
							ret1 = _g2;
						}
						else{
							HX_STACK_LINE(383)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(383)
							ret1->next = null();
						}
						HX_STACK_LINE(383)
						Dynamic();
					}
					HX_STACK_LINE(383)
					ret1->min = pre;
					HX_STACK_LINE(383)
					ret1->max = v;
					HX_STACK_LINE(383)
					_g3 = ret1;
				}
				HX_STACK_LINE(383)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g3);
			}
			else{
				HX_STACK_LINE(384)
				fst = v;
			}
			HX_STACK_LINE(385)
			pre = v;
		}
		HX_STACK_LINE(387)
		::zpp_nape::geom::ZPP_SimplifyV _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(388)
			::zpp_nape::geom::ZPP_SimplifyV obj = v;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(389)
			if (((ret == null()))){
				HX_STACK_LINE(389)
				::zpp_nape::geom::ZPP_SimplifyV _g4 = obj->next = obj;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(389)
				::zpp_nape::geom::ZPP_SimplifyV _g5 = obj->prev = _g4;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(389)
				ret = _g5;
			}
			else{
				HX_STACK_LINE(391)
				obj->prev = ret;
				HX_STACK_LINE(392)
				obj->next = ret->next;
				HX_STACK_LINE(393)
				ret->next->prev = obj;
				HX_STACK_LINE(394)
				ret->next = obj;
			}
			HX_STACK_LINE(396)
			_g6 = obj;
		}
		HX_STACK_LINE(387)
		ret = _g6;
		HX_STACK_LINE(398)
		if (((min == null()))){
			HX_STACK_LINE(399)
			min = ret;
			HX_STACK_LINE(400)
			max = ret;
		}
		else{
			HX_STACK_LINE(403)
			if (((((ret->x - min->x) + ((ret->y - min->y))) < 0.0))){
				HX_STACK_LINE(403)
				min = ret;
			}
			HX_STACK_LINE(404)
			if (((((max->x - ret->x) + ((max->y - ret->y))) < 0.0))){
				HX_STACK_LINE(404)
				max = ret;
			}
		}
		HX_STACK_LINE(406)
		cur = cur->next;
		HX_STACK_LINE(378)
		if ((!(((cur != P))))){
			HX_STACK_LINE(378)
			break;
		}
	}
	HX_STACK_LINE(409)
	if (((::zpp_nape::geom::ZPP_Simplify_obj::stack->head == null()))){
		HX_STACK_LINE(410)
		if (((fst == null()))){
			HX_STACK_LINE(411)
			bool _g7 = max->flag = true;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(411)
			min->flag = _g7;
			HX_STACK_LINE(412)
			::zpp_nape::geom::ZPP_SimplifyP _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP _g8 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(412)
						ret1 = _g8;
					}
					else{
						HX_STACK_LINE(412)
						ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(412)
						ret1->next = null();
					}
					HX_STACK_LINE(412)
					Dynamic();
				}
				HX_STACK_LINE(412)
				ret1->min = min;
				HX_STACK_LINE(412)
				ret1->max = max;
				HX_STACK_LINE(412)
				_g9 = ret1;
			}
			HX_STACK_LINE(412)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g9);
			HX_STACK_LINE(413)
			::zpp_nape::geom::ZPP_SimplifyP _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP _g10 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(413)
						ret1 = _g10;
					}
					else{
						HX_STACK_LINE(413)
						ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(413)
						ret1->next = null();
					}
					HX_STACK_LINE(413)
					Dynamic();
				}
				HX_STACK_LINE(413)
				ret1->min = max;
				HX_STACK_LINE(413)
				ret1->max = min;
				HX_STACK_LINE(413)
				_g11 = ret1;
			}
			HX_STACK_LINE(413)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g11);
		}
		else{
			HX_STACK_LINE(416)
			Float d1 = ((min->x - fst->x) + ((min->y - fst->y)));		HX_STACK_VAR(d1,"d1");
			HX_STACK_LINE(417)
			if (((d1 < (int)0))){
				HX_STACK_LINE(417)
				d1 = -(d1);
			}
			HX_STACK_LINE(418)
			Float d2 = ((max->x - fst->x) + ((max->y - fst->y)));		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(419)
			if (((d2 < (int)0))){
				HX_STACK_LINE(419)
				d2 = -(d2);
			}
			HX_STACK_LINE(420)
			if (((d1 > d2))){
				HX_STACK_LINE(421)
				bool _g12 = fst->flag = true;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(421)
				min->flag = _g12;
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_SimplifyP _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP _g13 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(422)
							ret1 = _g13;
						}
						else{
							HX_STACK_LINE(422)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(422)
							ret1->next = null();
						}
						HX_STACK_LINE(422)
						Dynamic();
					}
					HX_STACK_LINE(422)
					ret1->min = min;
					HX_STACK_LINE(422)
					ret1->max = fst;
					HX_STACK_LINE(422)
					_g14 = ret1;
				}
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g14);
				HX_STACK_LINE(423)
				::zpp_nape::geom::ZPP_SimplifyP _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(423)
					{
						HX_STACK_LINE(423)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP _g15 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(423)
							ret1 = _g15;
						}
						else{
							HX_STACK_LINE(423)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(423)
							ret1->next = null();
						}
						HX_STACK_LINE(423)
						Dynamic();
					}
					HX_STACK_LINE(423)
					ret1->min = fst;
					HX_STACK_LINE(423)
					ret1->max = min;
					HX_STACK_LINE(423)
					_g16 = ret1;
				}
				HX_STACK_LINE(423)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g16);
			}
			else{
				HX_STACK_LINE(426)
				bool _g17 = fst->flag = true;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(426)
				max->flag = _g17;
				HX_STACK_LINE(427)
				::zpp_nape::geom::ZPP_SimplifyP _g19;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(427)
					{
						HX_STACK_LINE(427)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP _g18 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(427)
							ret1 = _g18;
						}
						else{
							HX_STACK_LINE(427)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(427)
							ret1->next = null();
						}
						HX_STACK_LINE(427)
						Dynamic();
					}
					HX_STACK_LINE(427)
					ret1->min = max;
					HX_STACK_LINE(427)
					ret1->max = fst;
					HX_STACK_LINE(427)
					_g19 = ret1;
				}
				HX_STACK_LINE(427)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g19);
				HX_STACK_LINE(428)
				::zpp_nape::geom::ZPP_SimplifyP _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP _g20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(428)
							ret1 = _g20;
						}
						else{
							HX_STACK_LINE(428)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(428)
							ret1->next = null();
						}
						HX_STACK_LINE(428)
						Dynamic();
					}
					HX_STACK_LINE(428)
					ret1->min = fst;
					HX_STACK_LINE(428)
					ret1->max = max;
					HX_STACK_LINE(428)
					_g21 = ret1;
				}
				HX_STACK_LINE(428)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g21);
			}
		}
	}
	else{
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_SimplifyP _g23;		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP _g22 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(432)
					ret1 = _g22;
				}
				else{
					HX_STACK_LINE(432)
					ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(432)
					ret1->next = null();
				}
				HX_STACK_LINE(432)
				Dynamic();
			}
			HX_STACK_LINE(432)
			ret1->min = pre;
			HX_STACK_LINE(432)
			ret1->max = fst;
			HX_STACK_LINE(432)
			_g23 = ret1;
		}
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g23);
	}
	HX_STACK_LINE(433)
	while((true)){
		HX_STACK_LINE(433)
		if ((!((!(((::zpp_nape::geom::ZPP_Simplify_obj::stack->head == null()))))))){
			HX_STACK_LINE(433)
			break;
		}
		HX_STACK_LINE(434)
		::zpp_nape::geom::ZPP_SimplifyP cur1 = ::zpp_nape::geom::ZPP_Simplify_obj::stack->pop_unsafe();		HX_STACK_VAR(cur1,"cur1");
		HX_STACK_LINE(435)
		::zpp_nape::geom::ZPP_SimplifyV min1 = cur1->min;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(436)
		::zpp_nape::geom::ZPP_SimplifyV max1 = cur1->max;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			::zpp_nape::geom::ZPP_SimplifyP o = cur1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				::zpp_nape::geom::ZPP_SimplifyV _g24 = o->max = null();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(447)
				o->min = _g24;
			}
			HX_STACK_LINE(448)
			o->next = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(449)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(454)
		Float dmax = epsilon;		HX_STACK_VAR(dmax,"dmax");
		HX_STACK_LINE(455)
		::zpp_nape::geom::ZPP_SimplifyV dv = null();		HX_STACK_VAR(dv,"dv");
		HX_STACK_LINE(456)
		::zpp_nape::geom::ZPP_SimplifyV ite = min1->next;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(457)
		while((true)){
			HX_STACK_LINE(457)
			if ((!(((ite != max1))))){
				HX_STACK_LINE(457)
				break;
			}
			HX_STACK_LINE(458)
			Float dist = ::zpp_nape::geom::ZPP_Simplify_obj::distance(ite,min1,max1);		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(459)
			if (((dist > dmax))){
				HX_STACK_LINE(460)
				dmax = dist;
				HX_STACK_LINE(461)
				dv = ite;
			}
			HX_STACK_LINE(463)
			ite = ite->next;
		}
		HX_STACK_LINE(465)
		if (((dv != null()))){
			HX_STACK_LINE(466)
			dv->flag = true;
			HX_STACK_LINE(467)
			::zpp_nape::geom::ZPP_SimplifyP _g26;		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP _g25 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(467)
						ret1 = _g25;
					}
					else{
						HX_STACK_LINE(467)
						ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(467)
						ret1->next = null();
					}
					HX_STACK_LINE(467)
					Dynamic();
				}
				HX_STACK_LINE(467)
				ret1->min = min1;
				HX_STACK_LINE(467)
				ret1->max = dv;
				HX_STACK_LINE(467)
				_g26 = ret1;
			}
			HX_STACK_LINE(467)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g26);
			HX_STACK_LINE(468)
			::zpp_nape::geom::ZPP_SimplifyP _g28;		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP _g27 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(468)
						ret1 = _g27;
					}
					else{
						HX_STACK_LINE(468)
						ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(468)
						ret1->next = null();
					}
					HX_STACK_LINE(468)
					Dynamic();
				}
				HX_STACK_LINE(468)
				ret1->min = dv;
				HX_STACK_LINE(468)
				ret1->max = max1;
				HX_STACK_LINE(468)
				_g28 = ret1;
			}
			HX_STACK_LINE(468)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_g28);
		}
	}
	HX_STACK_LINE(471)
	::zpp_nape::geom::ZPP_GeomVert retp = null();		HX_STACK_VAR(retp,"retp");
	HX_STACK_LINE(472)
	while((true)){
		HX_STACK_LINE(472)
		if ((!(((ret != null()))))){
			HX_STACK_LINE(472)
			break;
		}
		HX_STACK_LINE(473)
		if ((ret->flag)){
			HX_STACK_LINE(474)
			::zpp_nape::geom::ZPP_GeomVert _g32;		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert _g29 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(475)
							ret1 = _g29;
						}
						else{
							HX_STACK_LINE(475)
							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(475)
							ret1->next = null();
						}
						HX_STACK_LINE(475)
						ret1->forced = false;
					}
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						ret1->x = ret->x;
						HX_STACK_LINE(475)
						ret1->y = ret->y;
						HX_STACK_LINE(475)
						{
						}
					}
					HX_STACK_LINE(475)
					obj = ret1;
				}
				HX_STACK_LINE(476)
				if (((retp == null()))){
					HX_STACK_LINE(476)
					::zpp_nape::geom::ZPP_GeomVert _g30 = obj->next = obj;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(476)
					::zpp_nape::geom::ZPP_GeomVert _g31 = obj->prev = _g30;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(476)
					retp = _g31;
				}
				else{
					HX_STACK_LINE(478)
					obj->prev = retp;
					HX_STACK_LINE(479)
					obj->next = retp->next;
					HX_STACK_LINE(480)
					retp->next->prev = obj;
					HX_STACK_LINE(481)
					retp->next = obj;
				}
				HX_STACK_LINE(483)
				_g32 = obj;
			}
			HX_STACK_LINE(474)
			retp = _g32;
			HX_STACK_LINE(485)
			retp->forced = ret->forced;
		}
		HX_STACK_LINE(496)
		::zpp_nape::geom::ZPP_SimplifyV _g35;		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(496)
		if (((bool((ret != null())) && bool((ret->prev == ret))))){
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_SimplifyV _g33 = ret->prev = null();		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(497)
			ret->next = _g33;
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(499)
				::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(509)
				o->next = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
			}
			HX_STACK_LINE(515)
			_g35 = ret = null();
		}
		else{
			HX_STACK_LINE(518)
			::zpp_nape::geom::ZPP_SimplifyV retnodes = ret->next;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(519)
			ret->prev->next = ret->next;
			HX_STACK_LINE(520)
			ret->next->prev = ret->prev;
			HX_STACK_LINE(521)
			::zpp_nape::geom::ZPP_SimplifyV _g34 = ret->prev = null();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(521)
			ret->next = _g34;
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(533)
				o->next = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
				HX_STACK_LINE(534)
				::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
			}
			HX_STACK_LINE(539)
			ret = null();
			HX_STACK_LINE(540)
			_g35 = retnodes;
		}
		HX_STACK_LINE(487)
		ret = _g35;
	}
	HX_STACK_LINE(544)
	return retp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,simplify,return )


ZPP_Simplify_obj::ZPP_Simplify_obj()
{
}

Dynamic ZPP_Simplify_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"less") ) { return less_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lessval") ) { return lessval_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"simplify") ) { return simplify_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Simplify_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Simplify_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lessval"),
	HX_CSTRING("less"),
	HX_CSTRING("distance"),
	HX_CSTRING("stack"),
	HX_CSTRING("simplify"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#endif

Class ZPP_Simplify_obj::__mClass;

void ZPP_Simplify_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Simplify"), hx::TCanCast< ZPP_Simplify_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Simplify_obj::__boot()
{
	stack= null();
}

} // end namespace zpp_nape
} // end namespace geom
