#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Cutter
#include <zpp_nape/geom/ZPP_Cutter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Cutter_obj::__construct()
{
	return null();
}

//ZPP_Cutter_obj::~ZPP_Cutter_obj() { }

Dynamic ZPP_Cutter_obj::__CreateEmpty() { return  new ZPP_Cutter_obj; }
hx::ObjectPtr< ZPP_Cutter_obj > ZPP_Cutter_obj::__new()
{  hx::ObjectPtr< ZPP_Cutter_obj > result = new ZPP_Cutter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Cutter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Cutter_obj > result = new ZPP_Cutter_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPList_ZPP_CutInt ZPP_Cutter_obj::ints;

::zpp_nape::util::ZNPList_ZPP_CutVert ZPP_Cutter_obj::paths;

::nape::geom::GeomPolyList ZPP_Cutter_obj::run( ::zpp_nape::geom::ZPP_GeomVert P,::nape::geom::Vec2 _start,::nape::geom::Vec2 _end,bool bstart,bool bend,::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Cutter","run",0x3e5647b2,"zpp_nape.geom.ZPP_Cutter.run","zpp_nape/geom/Cutter.hx",324,0x9f85878e)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_end,"_end")
	HX_STACK_ARG(bstart,"bstart")
	HX_STACK_ARG(bend,"bend")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(325)
	Float px = 0.0;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(326)
	Float py = 0.0;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(328)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(328)
					_this->_validate();
				}
			}
			HX_STACK_LINE(328)
			_g = _start->zpp_inner->x;
		}
		HX_STACK_LINE(328)
		px = _g;
		HX_STACK_LINE(329)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(329)
					_this->_validate();
				}
			}
			HX_STACK_LINE(329)
			_g1 = _start->zpp_inner->y;
		}
		HX_STACK_LINE(329)
		py = _g1;
		HX_STACK_LINE(338)
		{
		}
	}
	HX_STACK_LINE(347)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(348)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(350)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(350)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(350)
					_this->_validate();
				}
			}
			HX_STACK_LINE(350)
			_g2 = _end->zpp_inner->x;
		}
		HX_STACK_LINE(350)
		Float _g3 = (_g2 - px);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(350)
		dx = _g3;
		HX_STACK_LINE(351)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(351)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(351)
					_this->_validate();
				}
			}
			HX_STACK_LINE(351)
			_g4 = _end->zpp_inner->y;
		}
		HX_STACK_LINE(351)
		Float _g5 = (_g4 - py);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(351)
		dy = _g5;
	}
	HX_STACK_LINE(353)
	Float min;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(353)
	if ((bstart)){
		HX_STACK_LINE(353)
		min = (int)0;
	}
	else{
		HX_STACK_LINE(353)
		min = ::Math_obj::NEGATIVE_INFINITY;
	}
	HX_STACK_LINE(354)
	Float max;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(354)
	if ((bend)){
		HX_STACK_LINE(354)
		max = (int)1;
	}
	else{
		HX_STACK_LINE(354)
		max = ::Math_obj::POSITIVE_INFINITY;
	}
	HX_STACK_LINE(355)
	Float crx = -((((py * dx) - (px * dy))));		HX_STACK_VAR(crx,"crx");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_CutVert verts = null();		HX_STACK_VAR(verts,"verts");
	HX_STACK_LINE(357)
	bool clashes = false;		HX_STACK_VAR(clashes,"clashes");
	HX_STACK_LINE(358)
	::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(359)
	while((true)){
		HX_STACK_LINE(360)
		::zpp_nape::geom::ZPP_CutVert c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(362)
			if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(363)
				::zpp_nape::geom::ZPP_CutVert _g6 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(363)
				c = _g6;
			}
			else{
				HX_STACK_LINE(369)
				c = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(370)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = c->next;
				HX_STACK_LINE(371)
				c->next = null();
			}
			HX_STACK_LINE(376)
			Dynamic();
		}
		HX_STACK_LINE(378)
		c->vert = p;
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(380)
			c->posx = c->vert->x;
			HX_STACK_LINE(381)
			c->posy = c->vert->y;
			HX_STACK_LINE(390)
			{
			}
		}
		HX_STACK_LINE(399)
		c->value = (((c->posy * dx) - (c->posx * dy)) + crx);
		HX_STACK_LINE(400)
		c->positive = (c->value > (int)0);
		HX_STACK_LINE(401)
		if (((c->value == (int)0))){
			HX_STACK_LINE(401)
			clashes = true;
		}
		HX_STACK_LINE(402)
		::zpp_nape::geom::ZPP_CutVert _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(403)
			::zpp_nape::geom::ZPP_CutVert obj = c;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(404)
			if (((verts == null()))){
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_CutVert _g7 = obj->next = obj;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_CutVert _g8 = obj->prev = _g7;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(404)
				verts = _g8;
			}
			else{
				HX_STACK_LINE(406)
				obj->prev = verts;
				HX_STACK_LINE(407)
				obj->next = verts->next;
				HX_STACK_LINE(408)
				verts->next->prev = obj;
				HX_STACK_LINE(409)
				verts->next = obj;
			}
			HX_STACK_LINE(411)
			_g9 = obj;
		}
		HX_STACK_LINE(402)
		verts = _g9;
		HX_STACK_LINE(413)
		p = p->next;
		HX_STACK_LINE(359)
		if ((!(((p != P))))){
			HX_STACK_LINE(359)
			break;
		}
	}
	HX_STACK_LINE(416)
	if ((clashes)){
		HX_STACK_LINE(417)
		::zpp_nape::geom::ZPP_CutVert start = null();		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_CutVert F = verts;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_CutVert L = verts;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(421)
			if (((F != null()))){
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(424)
					::zpp_nape::geom::ZPP_CutVert p1 = nite;		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(427)
					if (((p1->value != 0.0))){
						HX_STACK_LINE(428)
						start = p1;
						HX_STACK_LINE(429)
						break;
					}
					HX_STACK_LINE(433)
					nite = nite->next;
					HX_STACK_LINE(423)
					if ((!(((nite != L))))){
						HX_STACK_LINE(423)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(446)
		Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(447)
		Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(449)
			nx = dx;
			HX_STACK_LINE(450)
			ny = dy;
			HX_STACK_LINE(459)
			{
			}
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(470)
				Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(479)
				Float imag;		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					Float _g10 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(479)
					imag = (Float(1.0) / Float(_g10));
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(481)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(490)
					hx::MultEq(nx,t);
					HX_STACK_LINE(491)
					hx::MultEq(ny,t);
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(495)
				Float t = nx;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(496)
				nx = -(ny);
				HX_STACK_LINE(497)
				ny = t;
			}
		}
		HX_STACK_LINE(500)
		::zpp_nape::geom::ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(501)
		::zpp_nape::geom::ZPP_CutVert p1 = start;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(502)
		while((true)){
			HX_STACK_LINE(503)
			if (((bool((p1->value != 0.0)) && bool(((bool((pre == null())) || bool((p1 == pre->next)))))))){
				HX_STACK_LINE(504)
				pre = p1;
				HX_STACK_LINE(505)
				p1 = p1->next;
				HX_STACK_LINE(506)
				continue;
			}
			HX_STACK_LINE(508)
			Float prod = (pre->value * p1->value);		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(509)
			if (((prod == (int)0))){
				HX_STACK_LINE(510)
				p1 = p1->next;
				HX_STACK_LINE(511)
				continue;
			}
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(514)
			bool positive;		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(514)
			if (((prod > (int)0))){
				HX_STACK_LINE(514)
				positive = pre->positive;
			}
			else{
				HX_STACK_LINE(516)
				::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(517)
				Float midx = 0.0;		HX_STACK_VAR(midx,"midx");
				HX_STACK_LINE(518)
				Float midy = 0.0;		HX_STACK_VAR(midy,"midy");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(520)
					midx = (a->posx + b->posx);
					HX_STACK_LINE(521)
					midy = (a->posy + b->posy);
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(524)
					Float t = 0.5;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(533)
					hx::MultEq(midx,t);
					HX_STACK_LINE(534)
					hx::MultEq(midy,t);
				}
				HX_STACK_LINE(536)
				{
					HX_STACK_LINE(537)
					Float x = (midx + (nx * 1e-8));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(538)
					Float y = (midy + (ny * 1e-8));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(539)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(543)
						if (((F != null()))){
							HX_STACK_LINE(544)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(545)
							while((true)){
								HX_STACK_LINE(546)
								::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
								HX_STACK_LINE(548)
								{
									HX_STACK_LINE(549)
									::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(550)
									if (((bool(((bool((bool((p2->y < y)) && bool((q->y >= y)))) || bool((bool((q->y < y)) && bool((p2->y >= y))))))) && bool(((bool((p2->x <= x)) || bool((q->x <= x)))))))){
										HX_STACK_LINE(551)
										if ((((p2->x + ((Float(((y - p2->y))) / Float(((q->y - p2->y)))) * ((q->x - p2->x)))) < x))){
											HX_STACK_LINE(552)
											ret = !(ret);
										}
									}
								}
								HX_STACK_LINE(557)
								nite = nite->next;
								HX_STACK_LINE(545)
								if ((!(((nite != L))))){
									HX_STACK_LINE(545)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(562)
					positive = ret;
				}
			}
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(566)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(568)
				if (((F != null()))){
					HX_STACK_LINE(569)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(570)
					while((true)){
						HX_STACK_LINE(571)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(573)
						q->positive = positive;
						HX_STACK_LINE(575)
						nite = nite->next;
						HX_STACK_LINE(570)
						if ((!(((nite != L))))){
							HX_STACK_LINE(570)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(580)
			pre = p1;
			HX_STACK_LINE(581)
			p1 = p1->next;
			HX_STACK_LINE(502)
			if ((!(((p1 != start))))){
				HX_STACK_LINE(502)
				break;
			}
		}
		HX_STACK_LINE(584)
		while((true)){
			HX_STACK_LINE(585)
			if (((bool((p1->value != 0.0)) && bool(((bool((pre == null())) || bool((p1 == pre->next)))))))){
				HX_STACK_LINE(586)
				pre = p1;
				HX_STACK_LINE(587)
				p1 = p1->next;
				HX_STACK_LINE(588)
				continue;
			}
			HX_STACK_LINE(590)
			Float prod = (pre->value * p1->value);		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(591)
			if (((prod == (int)0))){
				HX_STACK_LINE(592)
				p1 = p1->next;
				HX_STACK_LINE(593)
				continue;
			}
			HX_STACK_LINE(595)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(596)
			bool positive;		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(596)
			if (((prod > (int)0))){
				HX_STACK_LINE(596)
				positive = pre->positive;
			}
			else{
				HX_STACK_LINE(598)
				::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(599)
				Float midx = 0.0;		HX_STACK_VAR(midx,"midx");
				HX_STACK_LINE(600)
				Float midy = 0.0;		HX_STACK_VAR(midy,"midy");
				HX_STACK_LINE(601)
				{
					HX_STACK_LINE(602)
					midx = (a->posx + b->posx);
					HX_STACK_LINE(603)
					midy = (a->posy + b->posy);
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(606)
					Float t = 0.5;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(615)
					hx::MultEq(midx,t);
					HX_STACK_LINE(616)
					hx::MultEq(midy,t);
				}
				HX_STACK_LINE(618)
				{
					HX_STACK_LINE(619)
					Float x = (midx + (nx * 1e-8));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(620)
					Float y = (midy + (ny * 1e-8));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(621)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(623)
						::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(624)
						::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(625)
						if (((F != null()))){
							HX_STACK_LINE(626)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(627)
							while((true)){
								HX_STACK_LINE(628)
								::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
								HX_STACK_LINE(630)
								{
									HX_STACK_LINE(631)
									::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(632)
									if (((bool(((bool((bool((p2->y < y)) && bool((q->y >= y)))) || bool((bool((q->y < y)) && bool((p2->y >= y))))))) && bool(((bool((p2->x <= x)) || bool((q->x <= x)))))))){
										HX_STACK_LINE(633)
										if ((((p2->x + ((Float(((y - p2->y))) / Float(((q->y - p2->y)))) * ((q->x - p2->x)))) < x))){
											HX_STACK_LINE(634)
											ret = !(ret);
										}
									}
								}
								HX_STACK_LINE(639)
								nite = nite->next;
								HX_STACK_LINE(627)
								if ((!(((nite != L))))){
									HX_STACK_LINE(627)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(644)
					positive = ret;
				}
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(649)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(650)
				if (((F != null()))){
					HX_STACK_LINE(651)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(652)
					while((true)){
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(655)
						q->positive = positive;
						HX_STACK_LINE(657)
						nite = nite->next;
						HX_STACK_LINE(652)
						if ((!(((nite != L))))){
							HX_STACK_LINE(652)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(662)
			pre = p1;
			HX_STACK_LINE(663)
			p1 = p1->next;
			HX_STACK_LINE(584)
			break;
		}
	}
	HX_STACK_LINE(667)
	if (((::zpp_nape::geom::ZPP_Cutter_obj::ints == null()))){
		HX_STACK_LINE(668)
		::zpp_nape::util::ZNPList_ZPP_CutInt _g11 = ::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(668)
		::zpp_nape::geom::ZPP_Cutter_obj::ints = _g11;
	}
	HX_STACK_LINE(670)
	if (((::zpp_nape::geom::ZPP_Cutter_obj::paths == null()))){
		HX_STACK_LINE(671)
		::zpp_nape::util::ZNPList_ZPP_CutVert _g12 = ::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(671)
		::zpp_nape::geom::ZPP_Cutter_obj::paths = _g12;
	}
	HX_STACK_LINE(673)
	::zpp_nape::geom::ZPP_GeomVert start = null();		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(674)
	{
		HX_STACK_LINE(675)
		::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert _g13 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(675)
					ret = _g13;
				}
				else{
					HX_STACK_LINE(675)
					ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(675)
					ret->next = null();
				}
				HX_STACK_LINE(675)
				ret->forced = false;
			}
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				ret->x = verts->posx;
				HX_STACK_LINE(675)
				ret->y = verts->posy;
				HX_STACK_LINE(675)
				{
				}
			}
			HX_STACK_LINE(675)
			obj = ret;
		}
		HX_STACK_LINE(676)
		if (((start == null()))){
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_GeomVert _g14 = obj->next = obj;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_GeomVert _g15 = obj->prev = _g14;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(676)
			start = _g15;
		}
		else{
			HX_STACK_LINE(678)
			obj->next = start;
			HX_STACK_LINE(679)
			obj->prev = start->prev;
			HX_STACK_LINE(680)
			start->prev->next = obj;
			HX_STACK_LINE(681)
			start->prev = obj;
		}
		HX_STACK_LINE(683)
		obj;
	}
	HX_STACK_LINE(685)
	::zpp_nape::geom::ZPP_GeomVert origin = start;		HX_STACK_VAR(origin,"origin");
	HX_STACK_LINE(686)
	::zpp_nape::geom::ZPP_CutVert firstpath;		HX_STACK_VAR(firstpath,"firstpath");
	HX_STACK_LINE(686)
	{
		HX_STACK_LINE(686)
		::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(686)
			if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert _g16 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(686)
				ret = _g16;
			}
			else{
				HX_STACK_LINE(686)
				ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(686)
				ret->next = null();
			}
			HX_STACK_LINE(686)
			Dynamic();
		}
		HX_STACK_LINE(686)
		ret->vert = start;
		HX_STACK_LINE(686)
		ret->parent = ret;
		HX_STACK_LINE(686)
		ret->rank = (int)0;
		HX_STACK_LINE(686)
		ret->used = false;
		HX_STACK_LINE(686)
		firstpath = ret;
	}
	HX_STACK_LINE(687)
	::zpp_nape::geom::ZPP_Cutter_obj::paths->add(firstpath);
	HX_STACK_LINE(688)
	::zpp_nape::geom::ZPP_CutVert i = verts;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(689)
	while((true)){
		HX_STACK_LINE(690)
		::zpp_nape::geom::ZPP_CutVert j = i->next;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(691)
		::zpp_nape::geom::ZPP_GeomVert pj;		HX_STACK_VAR(pj,"pj");
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert _g17 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(691)
					ret = _g17;
				}
				else{
					HX_STACK_LINE(691)
					ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(691)
					ret->next = null();
				}
				HX_STACK_LINE(691)
				ret->forced = false;
			}
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				ret->x = j->posx;
				HX_STACK_LINE(691)
				ret->y = j->posy;
				HX_STACK_LINE(691)
				{
				}
			}
			HX_STACK_LINE(691)
			pj = ret;
		}
		HX_STACK_LINE(692)
		if (((i->positive == j->positive))){
			HX_STACK_LINE(694)
			::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(695)
			if (((start == null()))){
				HX_STACK_LINE(695)
				::zpp_nape::geom::ZPP_GeomVert _g18 = obj->next = obj;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(695)
				::zpp_nape::geom::ZPP_GeomVert _g19 = obj->prev = _g18;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(695)
				start = _g19;
			}
			else{
				HX_STACK_LINE(697)
				obj->next = start;
				HX_STACK_LINE(698)
				obj->prev = start->prev;
				HX_STACK_LINE(699)
				start->prev->next = obj;
				HX_STACK_LINE(700)
				start->prev = obj;
			}
			HX_STACK_LINE(702)
			obj;
		}
		else{
			HX_STACK_LINE(706)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(707)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(709)
				ux = (j->posx - i->posx);
				HX_STACK_LINE(710)
				uy = (j->posy - i->posy);
			}
			HX_STACK_LINE(712)
			Float denom = ((dy * ux) - (dx * uy));		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(721)
			denom = (Float((int)1) / Float(denom));
			HX_STACK_LINE(722)
			Float pax = 0.0;		HX_STACK_VAR(pax,"pax");
			HX_STACK_LINE(723)
			Float pay = 0.0;		HX_STACK_VAR(pay,"pay");
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(725)
				pax = (px - i->posx);
				HX_STACK_LINE(726)
				pay = (py - i->posy);
			}
			HX_STACK_LINE(728)
			Float s = ((((uy * pax) - (ux * pay))) * denom);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(729)
			if (((bool((s < min)) || bool((s > max))))){
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_CutInt _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt _g20 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(730)
							ret = _g20;
						}
						else{
							HX_STACK_LINE(730)
							ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
							HX_STACK_LINE(730)
							ret->next = null();
						}
						HX_STACK_LINE(730)
						Dynamic();
					}
					HX_STACK_LINE(730)
					ret->virtualint = true;
					HX_STACK_LINE(730)
					ret->end = null();
					HX_STACK_LINE(730)
					ret->start = null();
					HX_STACK_LINE(730)
					ret->path0 = null();
					HX_STACK_LINE(730)
					ret->path1 = null();
					HX_STACK_LINE(730)
					ret->time = s;
					HX_STACK_LINE(730)
					ret->vertex = vertex;
					HX_STACK_LINE(730)
					_g21 = ret;
				}
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_g21);
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(732)
					::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(733)
					if (((start == null()))){
						HX_STACK_LINE(733)
						::zpp_nape::geom::ZPP_GeomVert _g22 = obj->next = obj;		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(733)
						::zpp_nape::geom::ZPP_GeomVert _g23 = obj->prev = _g22;		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(733)
						start = _g23;
					}
					else{
						HX_STACK_LINE(735)
						obj->next = start;
						HX_STACK_LINE(736)
						obj->prev = start->prev;
						HX_STACK_LINE(737)
						start->prev->next = obj;
						HX_STACK_LINE(738)
						start->prev = obj;
					}
					HX_STACK_LINE(740)
					obj;
				}
			}
			else{
				HX_STACK_LINE(744)
				if (((i->value == (int)0))){
					HX_STACK_LINE(745)
					::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
					HX_STACK_LINE(746)
					start = null();
					HX_STACK_LINE(747)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert _g24 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g24,"_g24");
									HX_STACK_LINE(748)
									ret = _g24;
								}
								else{
									HX_STACK_LINE(748)
									ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(748)
									ret->next = null();
								}
								HX_STACK_LINE(748)
								ret->forced = false;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								ret->x = endof->x;
								HX_STACK_LINE(748)
								ret->y = endof->y;
								HX_STACK_LINE(748)
								{
								}
							}
							HX_STACK_LINE(748)
							obj = ret;
						}
						HX_STACK_LINE(749)
						if (((start == null()))){
							HX_STACK_LINE(749)
							::zpp_nape::geom::ZPP_GeomVert _g25 = obj->next = obj;		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(749)
							::zpp_nape::geom::ZPP_GeomVert _g26 = obj->prev = _g25;		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(749)
							start = _g26;
						}
						else{
							HX_STACK_LINE(751)
							obj->next = start;
							HX_STACK_LINE(752)
							obj->prev = start->prev;
							HX_STACK_LINE(753)
							start->prev->next = obj;
							HX_STACK_LINE(754)
							start->prev = obj;
						}
						HX_STACK_LINE(756)
						obj;
					}
					HX_STACK_LINE(758)
					{
						HX_STACK_LINE(759)
						::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(760)
						if (((start == null()))){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_GeomVert _g27 = obj->next = obj;		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_GeomVert _g28 = obj->prev = _g27;		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(760)
							start = _g28;
						}
						else{
							HX_STACK_LINE(762)
							obj->next = start;
							HX_STACK_LINE(763)
							obj->prev = start->prev;
							HX_STACK_LINE(764)
							start->prev->next = obj;
							HX_STACK_LINE(765)
							start->prev = obj;
						}
						HX_STACK_LINE(767)
						obj;
					}
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_CutVert _g30;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(770)
					{
						HX_STACK_LINE(770)
						::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(770)
						{
							HX_STACK_LINE(770)
							if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert _g29 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g29,"_g29");
								HX_STACK_LINE(770)
								ret = _g29;
							}
							else{
								HX_STACK_LINE(770)
								ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(770)
								ret->next = null();
							}
							HX_STACK_LINE(770)
							Dynamic();
						}
						HX_STACK_LINE(770)
						ret->vert = start;
						HX_STACK_LINE(770)
						ret->parent = ret;
						HX_STACK_LINE(770)
						ret->rank = (int)0;
						HX_STACK_LINE(770)
						ret->used = false;
						HX_STACK_LINE(770)
						_g30 = ret;
					}
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_g30);
					HX_STACK_LINE(771)
					::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_CutInt _g32;		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(772)
					{
						HX_STACK_LINE(772)
						bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
						HX_STACK_LINE(772)
						::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(772)
						{
							HX_STACK_LINE(772)
							if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt _g31 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(772)
								ret = _g31;
							}
							else{
								HX_STACK_LINE(772)
								ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
								HX_STACK_LINE(772)
								ret->next = null();
							}
							HX_STACK_LINE(772)
							Dynamic();
						}
						HX_STACK_LINE(772)
						ret->virtualint = true;
						HX_STACK_LINE(772)
						ret->end = endof;
						HX_STACK_LINE(772)
						ret->start = start;
						HX_STACK_LINE(772)
						ret->path0 = prepath;
						HX_STACK_LINE(772)
						ret->path1 = postpath;
						HX_STACK_LINE(772)
						ret->time = s;
						HX_STACK_LINE(772)
						ret->vertex = vertex;
						HX_STACK_LINE(772)
						_g32 = ret;
					}
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_g32);
				}
				else{
					HX_STACK_LINE(774)
					if (((j->value == (int)0))){
						HX_STACK_LINE(775)
						{
							HX_STACK_LINE(776)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(777)
							if (((start == null()))){
								HX_STACK_LINE(777)
								::zpp_nape::geom::ZPP_GeomVert _g33 = obj->next = obj;		HX_STACK_VAR(_g33,"_g33");
								HX_STACK_LINE(777)
								::zpp_nape::geom::ZPP_GeomVert _g34 = obj->prev = _g33;		HX_STACK_VAR(_g34,"_g34");
								HX_STACK_LINE(777)
								start = _g34;
							}
							else{
								HX_STACK_LINE(779)
								obj->next = start;
								HX_STACK_LINE(780)
								obj->prev = start->prev;
								HX_STACK_LINE(781)
								start->prev->next = obj;
								HX_STACK_LINE(782)
								start->prev = obj;
							}
							HX_STACK_LINE(784)
							obj;
						}
						HX_STACK_LINE(786)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(787)
						start = null();
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(789)
							::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(789)
							{
								HX_STACK_LINE(789)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert _g35 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(789)
										ret = _g35;
									}
									else{
										HX_STACK_LINE(789)
										ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(789)
										ret->next = null();
									}
									HX_STACK_LINE(789)
									ret->forced = false;
								}
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									ret->x = j->posx;
									HX_STACK_LINE(789)
									ret->y = j->posy;
									HX_STACK_LINE(789)
									{
									}
								}
								HX_STACK_LINE(789)
								obj = ret;
							}
							HX_STACK_LINE(790)
							if (((start == null()))){
								HX_STACK_LINE(790)
								::zpp_nape::geom::ZPP_GeomVert _g36 = obj->next = obj;		HX_STACK_VAR(_g36,"_g36");
								HX_STACK_LINE(790)
								::zpp_nape::geom::ZPP_GeomVert _g37 = obj->prev = _g36;		HX_STACK_VAR(_g37,"_g37");
								HX_STACK_LINE(790)
								start = _g37;
							}
							else{
								HX_STACK_LINE(792)
								obj->next = start;
								HX_STACK_LINE(793)
								obj->prev = start->prev;
								HX_STACK_LINE(794)
								start->prev->next = obj;
								HX_STACK_LINE(795)
								start->prev = obj;
							}
							HX_STACK_LINE(797)
							obj;
						}
						HX_STACK_LINE(799)
						::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
						HX_STACK_LINE(800)
						::zpp_nape::geom::ZPP_CutVert _g39;		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(800)
						{
							HX_STACK_LINE(800)
							::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(800)
							{
								HX_STACK_LINE(800)
								if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert _g38 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g38,"_g38");
									HX_STACK_LINE(800)
									ret = _g38;
								}
								else{
									HX_STACK_LINE(800)
									ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(800)
									ret->next = null();
								}
								HX_STACK_LINE(800)
								Dynamic();
							}
							HX_STACK_LINE(800)
							ret->vert = start;
							HX_STACK_LINE(800)
							ret->parent = ret;
							HX_STACK_LINE(800)
							ret->rank = (int)0;
							HX_STACK_LINE(800)
							ret->used = false;
							HX_STACK_LINE(800)
							_g39 = ret;
						}
						HX_STACK_LINE(800)
						::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_g39);
						HX_STACK_LINE(801)
						::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
						HX_STACK_LINE(802)
						::zpp_nape::geom::ZPP_CutInt _g41;		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(802)
						{
							HX_STACK_LINE(802)
							bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
							HX_STACK_LINE(802)
							::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(802)
							{
								HX_STACK_LINE(802)
								if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt _g40 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g40,"_g40");
									HX_STACK_LINE(802)
									ret = _g40;
								}
								else{
									HX_STACK_LINE(802)
									ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(802)
									ret->next = null();
								}
								HX_STACK_LINE(802)
								Dynamic();
							}
							HX_STACK_LINE(802)
							ret->virtualint = true;
							HX_STACK_LINE(802)
							ret->end = endof;
							HX_STACK_LINE(802)
							ret->start = start;
							HX_STACK_LINE(802)
							ret->path0 = prepath;
							HX_STACK_LINE(802)
							ret->path1 = postpath;
							HX_STACK_LINE(802)
							ret->time = s;
							HX_STACK_LINE(802)
							ret->vertex = vertex;
							HX_STACK_LINE(802)
							_g41 = ret;
						}
						HX_STACK_LINE(802)
						::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_g41);
					}
					else{
						HX_STACK_LINE(805)
						Float t = ((((dy * pax) - (dx * pay))) * denom);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(806)
						Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
						HX_STACK_LINE(807)
						Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
						HX_STACK_LINE(808)
						{
							HX_STACK_LINE(809)
							qx = i->posx;
							HX_STACK_LINE(810)
							qy = i->posy;
							HX_STACK_LINE(819)
							{
							}
						}
						HX_STACK_LINE(828)
						{
							HX_STACK_LINE(829)
							Float t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(838)
							hx::AddEq(qx,(ux * t1));
							HX_STACK_LINE(839)
							hx::AddEq(qy,(uy * t1));
						}
						HX_STACK_LINE(841)
						{
							HX_STACK_LINE(842)
							::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(842)
							{
								HX_STACK_LINE(842)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(842)
								{
									HX_STACK_LINE(842)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert _g42 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g42,"_g42");
										HX_STACK_LINE(842)
										ret = _g42;
									}
									else{
										HX_STACK_LINE(842)
										ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(842)
										ret->next = null();
									}
									HX_STACK_LINE(842)
									ret->forced = false;
								}
								HX_STACK_LINE(842)
								{
									HX_STACK_LINE(842)
									ret->x = qx;
									HX_STACK_LINE(842)
									ret->y = qy;
									HX_STACK_LINE(842)
									{
									}
								}
								HX_STACK_LINE(842)
								obj = ret;
							}
							HX_STACK_LINE(843)
							if (((start == null()))){
								HX_STACK_LINE(843)
								::zpp_nape::geom::ZPP_GeomVert _g43 = obj->next = obj;		HX_STACK_VAR(_g43,"_g43");
								HX_STACK_LINE(843)
								::zpp_nape::geom::ZPP_GeomVert _g44 = obj->prev = _g43;		HX_STACK_VAR(_g44,"_g44");
								HX_STACK_LINE(843)
								start = _g44;
							}
							else{
								HX_STACK_LINE(845)
								obj->next = start;
								HX_STACK_LINE(846)
								obj->prev = start->prev;
								HX_STACK_LINE(847)
								start->prev->next = obj;
								HX_STACK_LINE(848)
								start->prev = obj;
							}
							HX_STACK_LINE(850)
							obj;
						}
						HX_STACK_LINE(852)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(853)
						start = null();
						HX_STACK_LINE(854)
						{
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(855)
							{
								HX_STACK_LINE(855)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert _g45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g45,"_g45");
										HX_STACK_LINE(855)
										ret = _g45;
									}
									else{
										HX_STACK_LINE(855)
										ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(855)
										ret->next = null();
									}
									HX_STACK_LINE(855)
									ret->forced = false;
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									ret->x = qx;
									HX_STACK_LINE(855)
									ret->y = qy;
									HX_STACK_LINE(855)
									{
									}
								}
								HX_STACK_LINE(855)
								obj = ret;
							}
							HX_STACK_LINE(856)
							if (((start == null()))){
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_GeomVert _g46 = obj->next = obj;		HX_STACK_VAR(_g46,"_g46");
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_GeomVert _g47 = obj->prev = _g46;		HX_STACK_VAR(_g47,"_g47");
								HX_STACK_LINE(856)
								start = _g47;
							}
							else{
								HX_STACK_LINE(858)
								obj->next = start;
								HX_STACK_LINE(859)
								obj->prev = start->prev;
								HX_STACK_LINE(860)
								start->prev->next = obj;
								HX_STACK_LINE(861)
								start->prev = obj;
							}
							HX_STACK_LINE(863)
							obj;
						}
						HX_STACK_LINE(865)
						{
							HX_STACK_LINE(866)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(867)
							if (((start == null()))){
								HX_STACK_LINE(867)
								::zpp_nape::geom::ZPP_GeomVert _g48 = obj->next = obj;		HX_STACK_VAR(_g48,"_g48");
								HX_STACK_LINE(867)
								::zpp_nape::geom::ZPP_GeomVert _g49 = obj->prev = _g48;		HX_STACK_VAR(_g49,"_g49");
								HX_STACK_LINE(867)
								start = _g49;
							}
							else{
								HX_STACK_LINE(869)
								obj->next = start;
								HX_STACK_LINE(870)
								obj->prev = start->prev;
								HX_STACK_LINE(871)
								start->prev->next = obj;
								HX_STACK_LINE(872)
								start->prev = obj;
							}
							HX_STACK_LINE(874)
							obj;
						}
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_CutVert _g51;		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(877)
						{
							HX_STACK_LINE(877)
							::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(877)
							{
								HX_STACK_LINE(877)
								if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert _g50 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(_g50,"_g50");
									HX_STACK_LINE(877)
									ret = _g50;
								}
								else{
									HX_STACK_LINE(877)
									ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(877)
									ret->next = null();
								}
								HX_STACK_LINE(877)
								Dynamic();
							}
							HX_STACK_LINE(877)
							ret->vert = start;
							HX_STACK_LINE(877)
							ret->parent = ret;
							HX_STACK_LINE(877)
							ret->rank = (int)0;
							HX_STACK_LINE(877)
							ret->used = false;
							HX_STACK_LINE(877)
							_g51 = ret;
						}
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_g51);
						HX_STACK_LINE(878)
						::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
						HX_STACK_LINE(879)
						::zpp_nape::geom::ZPP_CutInt _g53;		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(879)
						{
							HX_STACK_LINE(879)
							bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
							HX_STACK_LINE(879)
							::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(879)
							{
								HX_STACK_LINE(879)
								if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt _g52 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g52,"_g52");
									HX_STACK_LINE(879)
									ret = _g52;
								}
								else{
									HX_STACK_LINE(879)
									ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(879)
									ret->next = null();
								}
								HX_STACK_LINE(879)
								Dynamic();
							}
							HX_STACK_LINE(879)
							ret->virtualint = false;
							HX_STACK_LINE(879)
							ret->end = endof;
							HX_STACK_LINE(879)
							ret->start = start;
							HX_STACK_LINE(879)
							ret->path0 = prepath;
							HX_STACK_LINE(879)
							ret->path1 = postpath;
							HX_STACK_LINE(879)
							ret->time = s;
							HX_STACK_LINE(879)
							ret->vertex = vertex;
							HX_STACK_LINE(879)
							_g53 = ret;
						}
						HX_STACK_LINE(879)
						::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_g53);
					}
				}
			}
		}
		HX_STACK_LINE(883)
		i = i->next;
		HX_STACK_LINE(689)
		if ((!(((i != verts))))){
			HX_STACK_LINE(689)
			break;
		}
	}
	HX_STACK_LINE(886)
	::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
	HX_STACK_LINE(887)
	{
		HX_STACK_LINE(888)
		endof->next->prev = origin->prev;
		HX_STACK_LINE(889)
		origin->prev->next = endof->next;
		HX_STACK_LINE(890)
		endof->next = origin;
		HX_STACK_LINE(891)
		origin->prev = endof;
	}
	HX_STACK_LINE(893)
	::zpp_nape::geom::ZPP_CutVert lastpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(lastpath,"lastpath");
	HX_STACK_LINE(894)
	{
		HX_STACK_LINE(895)
		::zpp_nape::geom::ZPP_CutVert xr;		HX_STACK_VAR(xr,"xr");
		HX_STACK_LINE(895)
		if (((firstpath == firstpath->parent))){
			HX_STACK_LINE(896)
			xr = firstpath;
		}
		else{
			HX_STACK_LINE(898)
			::zpp_nape::geom::ZPP_CutVert obj = firstpath;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(899)
			::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(900)
			while((true)){
				HX_STACK_LINE(900)
				if ((!(((obj != obj->parent))))){
					HX_STACK_LINE(900)
					break;
				}
				HX_STACK_LINE(901)
				::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(902)
				obj->parent = stack;
				HX_STACK_LINE(903)
				stack = obj;
				HX_STACK_LINE(904)
				obj = nxt;
			}
			HX_STACK_LINE(906)
			while((true)){
				HX_STACK_LINE(906)
				if ((!(((stack != null()))))){
					HX_STACK_LINE(906)
					break;
				}
				HX_STACK_LINE(907)
				::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(908)
				stack->parent = obj;
				HX_STACK_LINE(909)
				stack = nxt;
			}
			HX_STACK_LINE(911)
			xr = obj;
		}
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_CutVert yr;		HX_STACK_VAR(yr,"yr");
		HX_STACK_LINE(914)
		if (((lastpath == lastpath->parent))){
			HX_STACK_LINE(915)
			yr = lastpath;
		}
		else{
			HX_STACK_LINE(917)
			::zpp_nape::geom::ZPP_CutVert obj = lastpath;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(918)
			::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(919)
			while((true)){
				HX_STACK_LINE(919)
				if ((!(((obj != obj->parent))))){
					HX_STACK_LINE(919)
					break;
				}
				HX_STACK_LINE(920)
				::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(921)
				obj->parent = stack;
				HX_STACK_LINE(922)
				stack = obj;
				HX_STACK_LINE(923)
				obj = nxt;
			}
			HX_STACK_LINE(925)
			while((true)){
				HX_STACK_LINE(925)
				if ((!(((stack != null()))))){
					HX_STACK_LINE(925)
					break;
				}
				HX_STACK_LINE(926)
				::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(927)
				stack->parent = obj;
				HX_STACK_LINE(928)
				stack = nxt;
			}
			HX_STACK_LINE(930)
			yr = obj;
		}
		HX_STACK_LINE(933)
		if (((xr != yr))){
			HX_STACK_LINE(934)
			if (((xr->rank < yr->rank))){
				HX_STACK_LINE(934)
				xr->parent = yr;
			}
			else{
				HX_STACK_LINE(935)
				if (((xr->rank > yr->rank))){
					HX_STACK_LINE(935)
					yr->parent = xr;
				}
				else{
					HX_STACK_LINE(937)
					yr->parent = xr;
					HX_STACK_LINE(938)
					(xr->rank)++;
				}
			}
		}
	}
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(951)
		::zpp_nape::util::ZNPList_ZPP_CutInt xxlist = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(952)
		if (((bool(!(((xxlist->head == null())))) && bool((xxlist->head->next != null()))))){
			HX_STACK_LINE(953)
			::zpp_nape::util::ZNPNode_ZPP_CutInt head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(954)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(955)
			::zpp_nape::util::ZNPNode_ZPP_CutInt left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(956)
			::zpp_nape::util::ZNPNode_ZPP_CutInt right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(958)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(959)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			HX_STACK_LINE(959)
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			HX_STACK_LINE(959)
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(960)
			while((true)){
				HX_STACK_LINE(961)
				numMerges = (int)0;
				HX_STACK_LINE(962)
				left = head;
				HX_STACK_LINE(963)
				::zpp_nape::util::ZNPNode_ZPP_CutInt _g54 = head = null();		HX_STACK_VAR(_g54,"_g54");
				HX_STACK_LINE(963)
				tail = _g54;
				HX_STACK_LINE(964)
				while((true)){
					HX_STACK_LINE(964)
					if ((!(((left != null()))))){
						HX_STACK_LINE(964)
						break;
					}
					HX_STACK_LINE(965)
					(numMerges)++;
					HX_STACK_LINE(966)
					right = left;
					HX_STACK_LINE(967)
					leftSize = (int)0;
					HX_STACK_LINE(968)
					rightSize = listSize;
					HX_STACK_LINE(969)
					while((true)){
						HX_STACK_LINE(969)
						if ((!(((bool((right != null())) && bool((leftSize < listSize))))))){
							HX_STACK_LINE(969)
							break;
						}
						HX_STACK_LINE(970)
						(leftSize)++;
						HX_STACK_LINE(971)
						right = right->next;
					}
					HX_STACK_LINE(973)
					while((true)){
						HX_STACK_LINE(973)
						if ((!(((bool((leftSize > (int)0)) || bool((bool((rightSize > (int)0)) && bool((right != null()))))))))){
							HX_STACK_LINE(973)
							break;
						}
						HX_STACK_LINE(974)
						if (((leftSize == (int)0))){
							HX_STACK_LINE(975)
							nxt = right;
							HX_STACK_LINE(976)
							right = right->next;
							HX_STACK_LINE(977)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(979)
							if (((bool((rightSize == (int)0)) || bool((right == null()))))){
								HX_STACK_LINE(980)
								nxt = left;
								HX_STACK_LINE(981)
								left = left->next;
								HX_STACK_LINE(982)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(984)
								if (((left->elt->time < right->elt->time))){
									HX_STACK_LINE(985)
									nxt = left;
									HX_STACK_LINE(986)
									left = left->next;
									HX_STACK_LINE(987)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(990)
									nxt = right;
									HX_STACK_LINE(991)
									right = right->next;
									HX_STACK_LINE(992)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(994)
						if (((tail != null()))){
							HX_STACK_LINE(994)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(995)
							head = nxt;
						}
						HX_STACK_LINE(996)
						tail = nxt;
					}
					HX_STACK_LINE(998)
					left = right;
				}
				HX_STACK_LINE(1000)
				tail->next = null();
				HX_STACK_LINE(1001)
				hx::ShlEq(listSize,(int)1);
				HX_STACK_LINE(960)
				if ((!(((numMerges > (int)1))))){
					HX_STACK_LINE(960)
					break;
				}
			}
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				xxlist->head = head;
				HX_STACK_LINE(1004)
				xxlist->modified = true;
				HX_STACK_LINE(1004)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(1007)
	while((true)){
		HX_STACK_LINE(1007)
		if ((!((!(((::zpp_nape::geom::ZPP_Cutter_obj::ints->head == null()))))))){
			HX_STACK_LINE(1007)
			break;
		}
		HX_STACK_LINE(1008)
		::zpp_nape::geom::ZPP_CutInt i1 = ::zpp_nape::geom::ZPP_Cutter_obj::ints->pop_unsafe();		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1009)
		::zpp_nape::geom::ZPP_CutInt j = ::zpp_nape::geom::ZPP_Cutter_obj::ints->pop_unsafe();		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1010)
		if (((bool(!(i1->virtualint)) && bool(!(j->virtualint))))){
			HX_STACK_LINE(1011)
			{
				HX_STACK_LINE(1012)
				i1->end->next->prev = j->start->prev;
				HX_STACK_LINE(1013)
				j->start->prev->next = i1->end->next;
				HX_STACK_LINE(1014)
				i1->end->next = j->start;
				HX_STACK_LINE(1015)
				j->start->prev = i1->end;
			}
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1018)
				j->end->next->prev = i1->start->prev;
				HX_STACK_LINE(1019)
				i1->start->prev->next = j->end->next;
				HX_STACK_LINE(1020)
				j->end->next = i1->start;
				HX_STACK_LINE(1021)
				i1->start->prev = j->end;
			}
			HX_STACK_LINE(1023)
			{
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_CutVert xr;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(1024)
				if (((i1->path0 == i1->path0->parent))){
					HX_STACK_LINE(1025)
					xr = i1->path0;
				}
				else{
					HX_STACK_LINE(1027)
					::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1028)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1029)
					while((true)){
						HX_STACK_LINE(1029)
						if ((!(((obj != obj->parent))))){
							HX_STACK_LINE(1029)
							break;
						}
						HX_STACK_LINE(1030)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1031)
						obj->parent = stack;
						HX_STACK_LINE(1032)
						stack = obj;
						HX_STACK_LINE(1033)
						obj = nxt;
					}
					HX_STACK_LINE(1035)
					while((true)){
						HX_STACK_LINE(1035)
						if ((!(((stack != null()))))){
							HX_STACK_LINE(1035)
							break;
						}
						HX_STACK_LINE(1036)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1037)
						stack->parent = obj;
						HX_STACK_LINE(1038)
						stack = nxt;
					}
					HX_STACK_LINE(1040)
					xr = obj;
				}
				HX_STACK_LINE(1043)
				::zpp_nape::geom::ZPP_CutVert yr;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1043)
				if (((j->path1 == j->path1->parent))){
					HX_STACK_LINE(1044)
					yr = j->path1;
				}
				else{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1048)
					while((true)){
						HX_STACK_LINE(1048)
						if ((!(((obj != obj->parent))))){
							HX_STACK_LINE(1048)
							break;
						}
						HX_STACK_LINE(1049)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1050)
						obj->parent = stack;
						HX_STACK_LINE(1051)
						stack = obj;
						HX_STACK_LINE(1052)
						obj = nxt;
					}
					HX_STACK_LINE(1054)
					while((true)){
						HX_STACK_LINE(1054)
						if ((!(((stack != null()))))){
							HX_STACK_LINE(1054)
							break;
						}
						HX_STACK_LINE(1055)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1056)
						stack->parent = obj;
						HX_STACK_LINE(1057)
						stack = nxt;
					}
					HX_STACK_LINE(1059)
					yr = obj;
				}
				HX_STACK_LINE(1062)
				if (((xr != yr))){
					HX_STACK_LINE(1063)
					if (((xr->rank < yr->rank))){
						HX_STACK_LINE(1063)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1064)
						if (((xr->rank > yr->rank))){
							HX_STACK_LINE(1064)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1066)
							yr->parent = xr;
							HX_STACK_LINE(1067)
							(xr->rank)++;
						}
					}
				}
			}
			HX_STACK_LINE(1071)
			{
				HX_STACK_LINE(1072)
				::zpp_nape::geom::ZPP_CutVert xr;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(1072)
				if (((i1->path1 == i1->path1->parent))){
					HX_STACK_LINE(1073)
					xr = i1->path1;
				}
				else{
					HX_STACK_LINE(1075)
					::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1076)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1077)
					while((true)){
						HX_STACK_LINE(1077)
						if ((!(((obj != obj->parent))))){
							HX_STACK_LINE(1077)
							break;
						}
						HX_STACK_LINE(1078)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1079)
						obj->parent = stack;
						HX_STACK_LINE(1080)
						stack = obj;
						HX_STACK_LINE(1081)
						obj = nxt;
					}
					HX_STACK_LINE(1083)
					while((true)){
						HX_STACK_LINE(1083)
						if ((!(((stack != null()))))){
							HX_STACK_LINE(1083)
							break;
						}
						HX_STACK_LINE(1084)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1085)
						stack->parent = obj;
						HX_STACK_LINE(1086)
						stack = nxt;
					}
					HX_STACK_LINE(1088)
					xr = obj;
				}
				HX_STACK_LINE(1091)
				::zpp_nape::geom::ZPP_CutVert yr;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1091)
				if (((j->path0 == j->path0->parent))){
					HX_STACK_LINE(1092)
					yr = j->path0;
				}
				else{
					HX_STACK_LINE(1094)
					::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1095)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1096)
					while((true)){
						HX_STACK_LINE(1096)
						if ((!(((obj != obj->parent))))){
							HX_STACK_LINE(1096)
							break;
						}
						HX_STACK_LINE(1097)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1098)
						obj->parent = stack;
						HX_STACK_LINE(1099)
						stack = obj;
						HX_STACK_LINE(1100)
						obj = nxt;
					}
					HX_STACK_LINE(1102)
					while((true)){
						HX_STACK_LINE(1102)
						if ((!(((stack != null()))))){
							HX_STACK_LINE(1102)
							break;
						}
						HX_STACK_LINE(1103)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1104)
						stack->parent = obj;
						HX_STACK_LINE(1105)
						stack = nxt;
					}
					HX_STACK_LINE(1107)
					yr = obj;
				}
				HX_STACK_LINE(1110)
				if (((xr != yr))){
					HX_STACK_LINE(1111)
					if (((xr->rank < yr->rank))){
						HX_STACK_LINE(1111)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1112)
						if (((xr->rank > yr->rank))){
							HX_STACK_LINE(1112)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1114)
							yr->parent = xr;
							HX_STACK_LINE(1115)
							(xr->rank)++;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1120)
			if (((bool(i1->virtualint) && bool(!(j->virtualint))))){
				HX_STACK_LINE(1130)
				::zpp_nape::geom::ZPP_GeomVert _g59;		HX_STACK_VAR(_g59,"_g59");
				HX_STACK_LINE(1130)
				if (((bool((j->end != null())) && bool((j->end->prev == j->end))))){
					HX_STACK_LINE(1131)
					::zpp_nape::geom::ZPP_GeomVert _g55 = j->end->prev = null();		HX_STACK_VAR(_g55,"_g55");
					HX_STACK_LINE(1131)
					j->end->next = _g55;
					HX_STACK_LINE(1132)
					{
						HX_STACK_LINE(1133)
						::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1142)
						{
							HX_STACK_LINE(1142)
							if (((o->wrap != null()))){
								HX_STACK_LINE(1142)
								o->wrap->zpp_inner->_inuse = false;
								HX_STACK_LINE(1142)
								{
									HX_STACK_LINE(1142)
									::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1142)
									::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1142)
									_this->zpp_inner->outer = null();
									HX_STACK_LINE(1142)
									_this->zpp_inner = null();
									HX_STACK_LINE(1142)
									{
										HX_STACK_LINE(1142)
										::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1142)
										o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1142)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
									}
									HX_STACK_LINE(1142)
									{
										HX_STACK_LINE(1142)
										::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1142)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1142)
												o1->outer = null();
											}
											HX_STACK_LINE(1142)
											o1->_isimmutable = null();
											HX_STACK_LINE(1142)
											o1->_validate = null();
											HX_STACK_LINE(1142)
											o1->_invalidate = null();
										}
										HX_STACK_LINE(1142)
										o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1142)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
									}
								}
								HX_STACK_LINE(1142)
								o->wrap = null();
							}
							HX_STACK_LINE(1142)
							::zpp_nape::geom::ZPP_GeomVert _g56 = o->next = null();		HX_STACK_VAR(_g56,"_g56");
							HX_STACK_LINE(1142)
							o->prev = _g56;
						}
						HX_STACK_LINE(1143)
						o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(1144)
						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1149)
					_g59 = null();
				}
				else{
					HX_STACK_LINE(1152)
					::zpp_nape::geom::ZPP_GeomVert retnodes = j->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(1153)
					j->end->prev->next = j->end->next;
					HX_STACK_LINE(1154)
					j->end->next->prev = j->end->prev;
					HX_STACK_LINE(1155)
					::zpp_nape::geom::ZPP_GeomVert _g57 = j->end->prev = null();		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(1155)
					j->end->next = _g57;
					HX_STACK_LINE(1156)
					{
						HX_STACK_LINE(1157)
						::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1166)
						{
							HX_STACK_LINE(1166)
							if (((o->wrap != null()))){
								HX_STACK_LINE(1166)
								o->wrap->zpp_inner->_inuse = false;
								HX_STACK_LINE(1166)
								{
									HX_STACK_LINE(1166)
									::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1166)
									::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1166)
									_this->zpp_inner->outer = null();
									HX_STACK_LINE(1166)
									_this->zpp_inner = null();
									HX_STACK_LINE(1166)
									{
										HX_STACK_LINE(1166)
										::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1166)
										o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1166)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
									}
									HX_STACK_LINE(1166)
									{
										HX_STACK_LINE(1166)
										::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1166)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1166)
												o1->outer = null();
											}
											HX_STACK_LINE(1166)
											o1->_isimmutable = null();
											HX_STACK_LINE(1166)
											o1->_validate = null();
											HX_STACK_LINE(1166)
											o1->_invalidate = null();
										}
										HX_STACK_LINE(1166)
										o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1166)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
									}
								}
								HX_STACK_LINE(1166)
								o->wrap = null();
							}
							HX_STACK_LINE(1166)
							::zpp_nape::geom::ZPP_GeomVert _g58 = o->next = null();		HX_STACK_VAR(_g58,"_g58");
							HX_STACK_LINE(1166)
							o->prev = _g58;
						}
						HX_STACK_LINE(1167)
						o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(1168)
						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1173)
					j->end = null();
					HX_STACK_LINE(1174)
					_g59 = retnodes;
				}
				HX_STACK_LINE(1121)
				j->end = _g59;
				HX_STACK_LINE(1177)
				if ((!(j->vertex))){
					HX_STACK_LINE(1178)
					if (((j->end != j->path0->vert))){
						HX_STACK_LINE(1179)
						j->start->x = j->end->x;
						HX_STACK_LINE(1180)
						j->start->y = j->end->y;
						HX_STACK_LINE(1190)
						::zpp_nape::geom::ZPP_GeomVert _g64;		HX_STACK_VAR(_g64,"_g64");
						HX_STACK_LINE(1190)
						if (((bool((j->end != null())) && bool((j->end->prev == j->end))))){
							HX_STACK_LINE(1191)
							::zpp_nape::geom::ZPP_GeomVert _g60 = j->end->prev = null();		HX_STACK_VAR(_g60,"_g60");
							HX_STACK_LINE(1191)
							j->end->next = _g60;
							HX_STACK_LINE(1192)
							{
								HX_STACK_LINE(1193)
								::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1202)
								{
									HX_STACK_LINE(1202)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1202)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1202)
										{
											HX_STACK_LINE(1202)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1202)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1202)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1202)
											_this->zpp_inner = null();
											HX_STACK_LINE(1202)
											{
												HX_STACK_LINE(1202)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1202)
												o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1202)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1202)
											{
												HX_STACK_LINE(1202)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1202)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1202)
														o1->outer = null();
													}
													HX_STACK_LINE(1202)
													o1->_isimmutable = null();
													HX_STACK_LINE(1202)
													o1->_validate = null();
													HX_STACK_LINE(1202)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1202)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1202)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1202)
										o->wrap = null();
									}
									HX_STACK_LINE(1202)
									::zpp_nape::geom::ZPP_GeomVert _g61 = o->next = null();		HX_STACK_VAR(_g61,"_g61");
									HX_STACK_LINE(1202)
									o->prev = _g61;
								}
								HX_STACK_LINE(1203)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1204)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1209)
							_g64 = null();
						}
						else{
							HX_STACK_LINE(1212)
							::zpp_nape::geom::ZPP_GeomVert retnodes = j->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
							HX_STACK_LINE(1213)
							j->end->prev->next = j->end->next;
							HX_STACK_LINE(1214)
							j->end->next->prev = j->end->prev;
							HX_STACK_LINE(1215)
							::zpp_nape::geom::ZPP_GeomVert _g62 = j->end->prev = null();		HX_STACK_VAR(_g62,"_g62");
							HX_STACK_LINE(1215)
							j->end->next = _g62;
							HX_STACK_LINE(1216)
							{
								HX_STACK_LINE(1217)
								::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1226)
								{
									HX_STACK_LINE(1226)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1226)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1226)
										{
											HX_STACK_LINE(1226)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1226)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1226)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1226)
											_this->zpp_inner = null();
											HX_STACK_LINE(1226)
											{
												HX_STACK_LINE(1226)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1226)
												o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1226)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1226)
											{
												HX_STACK_LINE(1226)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1226)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1226)
														o1->outer = null();
													}
													HX_STACK_LINE(1226)
													o1->_isimmutable = null();
													HX_STACK_LINE(1226)
													o1->_validate = null();
													HX_STACK_LINE(1226)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1226)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1226)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1226)
										o->wrap = null();
									}
									HX_STACK_LINE(1226)
									::zpp_nape::geom::ZPP_GeomVert _g63 = o->next = null();		HX_STACK_VAR(_g63,"_g63");
									HX_STACK_LINE(1226)
									o->prev = _g63;
								}
								HX_STACK_LINE(1227)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1228)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1233)
							j->end = null();
							HX_STACK_LINE(1234)
							_g64 = retnodes;
						}
						HX_STACK_LINE(1181)
						j->end = _g64;
					}
					else{
						HX_STACK_LINE(1239)
						::zpp_nape::geom::ZPP_GeomVert n = j->start->next;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1240)
						j->start->x = n->x;
						HX_STACK_LINE(1241)
						j->start->y = n->y;
						HX_STACK_LINE(1251)
						if (((bool((n != null())) && bool((n->prev == n))))){
							HX_STACK_LINE(1252)
							::zpp_nape::geom::ZPP_GeomVert _g65 = n->prev = null();		HX_STACK_VAR(_g65,"_g65");
							HX_STACK_LINE(1252)
							n->next = _g65;
							HX_STACK_LINE(1253)
							{
								HX_STACK_LINE(1254)
								::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1263)
								{
									HX_STACK_LINE(1263)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1263)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1263)
										{
											HX_STACK_LINE(1263)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1263)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1263)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1263)
											_this->zpp_inner = null();
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1263)
												o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1263)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1263)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1263)
														o1->outer = null();
													}
													HX_STACK_LINE(1263)
													o1->_isimmutable = null();
													HX_STACK_LINE(1263)
													o1->_validate = null();
													HX_STACK_LINE(1263)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1263)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1263)
										o->wrap = null();
									}
									HX_STACK_LINE(1263)
									::zpp_nape::geom::ZPP_GeomVert _g66 = o->next = null();		HX_STACK_VAR(_g66,"_g66");
									HX_STACK_LINE(1263)
									o->prev = _g66;
								}
								HX_STACK_LINE(1264)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1265)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1270)
							n = null();
						}
						else{
							HX_STACK_LINE(1273)
							n->prev->next = n->next;
							HX_STACK_LINE(1274)
							n->next->prev = n->prev;
							HX_STACK_LINE(1275)
							::zpp_nape::geom::ZPP_GeomVert _g67 = n->prev = null();		HX_STACK_VAR(_g67,"_g67");
							HX_STACK_LINE(1275)
							n->next = _g67;
							HX_STACK_LINE(1276)
							{
								HX_STACK_LINE(1277)
								::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1286)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1286)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1286)
										{
											HX_STACK_LINE(1286)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1286)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1286)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1286)
											_this->zpp_inner = null();
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1286)
												o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1286)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1286)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1286)
														o1->outer = null();
													}
													HX_STACK_LINE(1286)
													o1->_isimmutable = null();
													HX_STACK_LINE(1286)
													o1->_validate = null();
													HX_STACK_LINE(1286)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1286)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1286)
										o->wrap = null();
									}
									HX_STACK_LINE(1286)
									::zpp_nape::geom::ZPP_GeomVert _g68 = o->next = null();		HX_STACK_VAR(_g68,"_g68");
									HX_STACK_LINE(1286)
									o->prev = _g68;
								}
								HX_STACK_LINE(1287)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
						}
					}
				}
				HX_STACK_LINE(1297)
				{
					HX_STACK_LINE(1298)
					j->end->next->prev = j->start->prev;
					HX_STACK_LINE(1299)
					j->start->prev->next = j->end->next;
					HX_STACK_LINE(1300)
					j->end->next = j->start;
					HX_STACK_LINE(1301)
					j->start->prev = j->end;
				}
				HX_STACK_LINE(1303)
				{
					HX_STACK_LINE(1304)
					::zpp_nape::geom::ZPP_CutVert xr;		HX_STACK_VAR(xr,"xr");
					HX_STACK_LINE(1304)
					if (((j->path0 == j->path0->parent))){
						HX_STACK_LINE(1305)
						xr = j->path0;
					}
					else{
						HX_STACK_LINE(1307)
						::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1308)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1309)
						while((true)){
							HX_STACK_LINE(1309)
							if ((!(((obj != obj->parent))))){
								HX_STACK_LINE(1309)
								break;
							}
							HX_STACK_LINE(1310)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1311)
							obj->parent = stack;
							HX_STACK_LINE(1312)
							stack = obj;
							HX_STACK_LINE(1313)
							obj = nxt;
						}
						HX_STACK_LINE(1315)
						while((true)){
							HX_STACK_LINE(1315)
							if ((!(((stack != null()))))){
								HX_STACK_LINE(1315)
								break;
							}
							HX_STACK_LINE(1316)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1317)
							stack->parent = obj;
							HX_STACK_LINE(1318)
							stack = nxt;
						}
						HX_STACK_LINE(1320)
						xr = obj;
					}
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_CutVert yr;		HX_STACK_VAR(yr,"yr");
					HX_STACK_LINE(1323)
					if (((j->path1 == j->path1->parent))){
						HX_STACK_LINE(1324)
						yr = j->path1;
					}
					else{
						HX_STACK_LINE(1326)
						::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1327)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1328)
						while((true)){
							HX_STACK_LINE(1328)
							if ((!(((obj != obj->parent))))){
								HX_STACK_LINE(1328)
								break;
							}
							HX_STACK_LINE(1329)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1330)
							obj->parent = stack;
							HX_STACK_LINE(1331)
							stack = obj;
							HX_STACK_LINE(1332)
							obj = nxt;
						}
						HX_STACK_LINE(1334)
						while((true)){
							HX_STACK_LINE(1334)
							if ((!(((stack != null()))))){
								HX_STACK_LINE(1334)
								break;
							}
							HX_STACK_LINE(1335)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1336)
							stack->parent = obj;
							HX_STACK_LINE(1337)
							stack = nxt;
						}
						HX_STACK_LINE(1339)
						yr = obj;
					}
					HX_STACK_LINE(1342)
					if (((xr != yr))){
						HX_STACK_LINE(1343)
						if (((xr->rank < yr->rank))){
							HX_STACK_LINE(1343)
							xr->parent = yr;
						}
						else{
							HX_STACK_LINE(1344)
							if (((xr->rank > yr->rank))){
								HX_STACK_LINE(1344)
								yr->parent = xr;
							}
							else{
								HX_STACK_LINE(1346)
								yr->parent = xr;
								HX_STACK_LINE(1347)
								(xr->rank)++;
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1352)
				if (((bool(j->virtualint) && bool(!(i1->virtualint))))){
					HX_STACK_LINE(1362)
					::zpp_nape::geom::ZPP_GeomVert _g73;		HX_STACK_VAR(_g73,"_g73");
					HX_STACK_LINE(1362)
					if (((bool((i1->end != null())) && bool((i1->end->prev == i1->end))))){
						HX_STACK_LINE(1363)
						::zpp_nape::geom::ZPP_GeomVert _g69 = i1->end->prev = null();		HX_STACK_VAR(_g69,"_g69");
						HX_STACK_LINE(1363)
						i1->end->next = _g69;
						HX_STACK_LINE(1364)
						{
							HX_STACK_LINE(1365)
							::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1374)
							{
								HX_STACK_LINE(1374)
								if (((o->wrap != null()))){
									HX_STACK_LINE(1374)
									o->wrap->zpp_inner->_inuse = false;
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1374)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1374)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1374)
										_this->zpp_inner = null();
										HX_STACK_LINE(1374)
										{
											HX_STACK_LINE(1374)
											::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1374)
											o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(1374)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
										}
										HX_STACK_LINE(1374)
										{
											HX_STACK_LINE(1374)
											::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												if (((o1->outer != null()))){
													HX_STACK_LINE(1374)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1374)
													o1->outer = null();
												}
												HX_STACK_LINE(1374)
												o1->_isimmutable = null();
												HX_STACK_LINE(1374)
												o1->_validate = null();
												HX_STACK_LINE(1374)
												o1->_invalidate = null();
											}
											HX_STACK_LINE(1374)
											o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1374)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
										}
									}
									HX_STACK_LINE(1374)
									o->wrap = null();
								}
								HX_STACK_LINE(1374)
								::zpp_nape::geom::ZPP_GeomVert _g70 = o->next = null();		HX_STACK_VAR(_g70,"_g70");
								HX_STACK_LINE(1374)
								o->prev = _g70;
							}
							HX_STACK_LINE(1375)
							o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(1376)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1381)
						_g73 = null();
					}
					else{
						HX_STACK_LINE(1384)
						::zpp_nape::geom::ZPP_GeomVert retnodes = i1->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(1385)
						i1->end->prev->next = i1->end->next;
						HX_STACK_LINE(1386)
						i1->end->next->prev = i1->end->prev;
						HX_STACK_LINE(1387)
						::zpp_nape::geom::ZPP_GeomVert _g71 = i1->end->prev = null();		HX_STACK_VAR(_g71,"_g71");
						HX_STACK_LINE(1387)
						i1->end->next = _g71;
						HX_STACK_LINE(1388)
						{
							HX_STACK_LINE(1389)
							::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1398)
							{
								HX_STACK_LINE(1398)
								if (((o->wrap != null()))){
									HX_STACK_LINE(1398)
									o->wrap->zpp_inner->_inuse = false;
									HX_STACK_LINE(1398)
									{
										HX_STACK_LINE(1398)
										::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1398)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1398)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1398)
										_this->zpp_inner = null();
										HX_STACK_LINE(1398)
										{
											HX_STACK_LINE(1398)
											::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1398)
											o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(1398)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
										}
										HX_STACK_LINE(1398)
										{
											HX_STACK_LINE(1398)
											::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												if (((o1->outer != null()))){
													HX_STACK_LINE(1398)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1398)
													o1->outer = null();
												}
												HX_STACK_LINE(1398)
												o1->_isimmutable = null();
												HX_STACK_LINE(1398)
												o1->_validate = null();
												HX_STACK_LINE(1398)
												o1->_invalidate = null();
											}
											HX_STACK_LINE(1398)
											o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1398)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
										}
									}
									HX_STACK_LINE(1398)
									o->wrap = null();
								}
								HX_STACK_LINE(1398)
								::zpp_nape::geom::ZPP_GeomVert _g72 = o->next = null();		HX_STACK_VAR(_g72,"_g72");
								HX_STACK_LINE(1398)
								o->prev = _g72;
							}
							HX_STACK_LINE(1399)
							o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(1400)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1405)
						i1->end = null();
						HX_STACK_LINE(1406)
						_g73 = retnodes;
					}
					HX_STACK_LINE(1353)
					i1->end = _g73;
					HX_STACK_LINE(1409)
					if ((!(i1->vertex))){
						HX_STACK_LINE(1410)
						if (((i1->end != i1->path0->vert))){
							HX_STACK_LINE(1411)
							i1->start->x = i1->end->x;
							HX_STACK_LINE(1412)
							i1->start->y = i1->end->y;
							HX_STACK_LINE(1422)
							::zpp_nape::geom::ZPP_GeomVert _g78;		HX_STACK_VAR(_g78,"_g78");
							HX_STACK_LINE(1422)
							if (((bool((i1->end != null())) && bool((i1->end->prev == i1->end))))){
								HX_STACK_LINE(1423)
								::zpp_nape::geom::ZPP_GeomVert _g74 = i1->end->prev = null();		HX_STACK_VAR(_g74,"_g74");
								HX_STACK_LINE(1423)
								i1->end->next = _g74;
								HX_STACK_LINE(1424)
								{
									HX_STACK_LINE(1425)
									::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1434)
									{
										HX_STACK_LINE(1434)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1434)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1434)
											{
												HX_STACK_LINE(1434)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1434)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1434)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1434)
												_this->zpp_inner = null();
												HX_STACK_LINE(1434)
												{
													HX_STACK_LINE(1434)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1434)
													o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(1434)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1434)
												{
													HX_STACK_LINE(1434)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1434)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1434)
															o1->outer = null();
														}
														HX_STACK_LINE(1434)
														o1->_isimmutable = null();
														HX_STACK_LINE(1434)
														o1->_validate = null();
														HX_STACK_LINE(1434)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1434)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1434)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1434)
											o->wrap = null();
										}
										HX_STACK_LINE(1434)
										::zpp_nape::geom::ZPP_GeomVert _g75 = o->next = null();		HX_STACK_VAR(_g75,"_g75");
										HX_STACK_LINE(1434)
										o->prev = _g75;
									}
									HX_STACK_LINE(1435)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1436)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1441)
								_g78 = null();
							}
							else{
								HX_STACK_LINE(1444)
								::zpp_nape::geom::ZPP_GeomVert retnodes = i1->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
								HX_STACK_LINE(1445)
								i1->end->prev->next = i1->end->next;
								HX_STACK_LINE(1446)
								i1->end->next->prev = i1->end->prev;
								HX_STACK_LINE(1447)
								::zpp_nape::geom::ZPP_GeomVert _g76 = i1->end->prev = null();		HX_STACK_VAR(_g76,"_g76");
								HX_STACK_LINE(1447)
								i1->end->next = _g76;
								HX_STACK_LINE(1448)
								{
									HX_STACK_LINE(1449)
									::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1458)
									{
										HX_STACK_LINE(1458)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1458)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1458)
											{
												HX_STACK_LINE(1458)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1458)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1458)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1458)
												_this->zpp_inner = null();
												HX_STACK_LINE(1458)
												{
													HX_STACK_LINE(1458)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1458)
													o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(1458)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1458)
												{
													HX_STACK_LINE(1458)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1458)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1458)
															o1->outer = null();
														}
														HX_STACK_LINE(1458)
														o1->_isimmutable = null();
														HX_STACK_LINE(1458)
														o1->_validate = null();
														HX_STACK_LINE(1458)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1458)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1458)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1458)
											o->wrap = null();
										}
										HX_STACK_LINE(1458)
										::zpp_nape::geom::ZPP_GeomVert _g77 = o->next = null();		HX_STACK_VAR(_g77,"_g77");
										HX_STACK_LINE(1458)
										o->prev = _g77;
									}
									HX_STACK_LINE(1459)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1460)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1465)
								i1->end = null();
								HX_STACK_LINE(1466)
								_g78 = retnodes;
							}
							HX_STACK_LINE(1413)
							i1->end = _g78;
						}
						else{
							HX_STACK_LINE(1471)
							::zpp_nape::geom::ZPP_GeomVert n = i1->start->next;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1472)
							i1->start->x = n->x;
							HX_STACK_LINE(1473)
							i1->start->y = n->y;
							HX_STACK_LINE(1483)
							if (((bool((n != null())) && bool((n->prev == n))))){
								HX_STACK_LINE(1484)
								::zpp_nape::geom::ZPP_GeomVert _g79 = n->prev = null();		HX_STACK_VAR(_g79,"_g79");
								HX_STACK_LINE(1484)
								n->next = _g79;
								HX_STACK_LINE(1485)
								{
									HX_STACK_LINE(1486)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1495)
									{
										HX_STACK_LINE(1495)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1495)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1495)
											{
												HX_STACK_LINE(1495)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1495)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1495)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1495)
												_this->zpp_inner = null();
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1495)
													o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(1495)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1495)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1495)
															o1->outer = null();
														}
														HX_STACK_LINE(1495)
														o1->_isimmutable = null();
														HX_STACK_LINE(1495)
														o1->_validate = null();
														HX_STACK_LINE(1495)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1495)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1495)
											o->wrap = null();
										}
										HX_STACK_LINE(1495)
										::zpp_nape::geom::ZPP_GeomVert _g80 = o->next = null();		HX_STACK_VAR(_g80,"_g80");
										HX_STACK_LINE(1495)
										o->prev = _g80;
									}
									HX_STACK_LINE(1496)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1497)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1502)
								n = null();
							}
							else{
								HX_STACK_LINE(1505)
								n->prev->next = n->next;
								HX_STACK_LINE(1506)
								n->next->prev = n->prev;
								HX_STACK_LINE(1507)
								::zpp_nape::geom::ZPP_GeomVert _g81 = n->prev = null();		HX_STACK_VAR(_g81,"_g81");
								HX_STACK_LINE(1507)
								n->next = _g81;
								HX_STACK_LINE(1508)
								{
									HX_STACK_LINE(1509)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1518)
									{
										HX_STACK_LINE(1518)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1518)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1518)
											{
												HX_STACK_LINE(1518)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1518)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1518)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1518)
												_this->zpp_inner = null();
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1518)
													o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(1518)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1518)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1518)
															o1->outer = null();
														}
														HX_STACK_LINE(1518)
														o1->_isimmutable = null();
														HX_STACK_LINE(1518)
														o1->_validate = null();
														HX_STACK_LINE(1518)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1518)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1518)
											o->wrap = null();
										}
										HX_STACK_LINE(1518)
										::zpp_nape::geom::ZPP_GeomVert _g82 = o->next = null();		HX_STACK_VAR(_g82,"_g82");
										HX_STACK_LINE(1518)
										o->prev = _g82;
									}
									HX_STACK_LINE(1519)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1520)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
							}
						}
					}
					HX_STACK_LINE(1529)
					{
						HX_STACK_LINE(1530)
						i1->end->next->prev = i1->start->prev;
						HX_STACK_LINE(1531)
						i1->start->prev->next = i1->end->next;
						HX_STACK_LINE(1532)
						i1->end->next = i1->start;
						HX_STACK_LINE(1533)
						i1->start->prev = i1->end;
					}
					HX_STACK_LINE(1535)
					{
						HX_STACK_LINE(1536)
						::zpp_nape::geom::ZPP_CutVert xr;		HX_STACK_VAR(xr,"xr");
						HX_STACK_LINE(1536)
						if (((i1->path0 == i1->path0->parent))){
							HX_STACK_LINE(1537)
							xr = i1->path0;
						}
						else{
							HX_STACK_LINE(1539)
							::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1540)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1541)
							while((true)){
								HX_STACK_LINE(1541)
								if ((!(((obj != obj->parent))))){
									HX_STACK_LINE(1541)
									break;
								}
								HX_STACK_LINE(1542)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1543)
								obj->parent = stack;
								HX_STACK_LINE(1544)
								stack = obj;
								HX_STACK_LINE(1545)
								obj = nxt;
							}
							HX_STACK_LINE(1547)
							while((true)){
								HX_STACK_LINE(1547)
								if ((!(((stack != null()))))){
									HX_STACK_LINE(1547)
									break;
								}
								HX_STACK_LINE(1548)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1549)
								stack->parent = obj;
								HX_STACK_LINE(1550)
								stack = nxt;
							}
							HX_STACK_LINE(1552)
							xr = obj;
						}
						HX_STACK_LINE(1555)
						::zpp_nape::geom::ZPP_CutVert yr;		HX_STACK_VAR(yr,"yr");
						HX_STACK_LINE(1555)
						if (((i1->path1 == i1->path1->parent))){
							HX_STACK_LINE(1556)
							yr = i1->path1;
						}
						else{
							HX_STACK_LINE(1558)
							::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1559)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1560)
							while((true)){
								HX_STACK_LINE(1560)
								if ((!(((obj != obj->parent))))){
									HX_STACK_LINE(1560)
									break;
								}
								HX_STACK_LINE(1561)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1562)
								obj->parent = stack;
								HX_STACK_LINE(1563)
								stack = obj;
								HX_STACK_LINE(1564)
								obj = nxt;
							}
							HX_STACK_LINE(1566)
							while((true)){
								HX_STACK_LINE(1566)
								if ((!(((stack != null()))))){
									HX_STACK_LINE(1566)
									break;
								}
								HX_STACK_LINE(1567)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1568)
								stack->parent = obj;
								HX_STACK_LINE(1569)
								stack = nxt;
							}
							HX_STACK_LINE(1571)
							yr = obj;
						}
						HX_STACK_LINE(1574)
						if (((xr != yr))){
							HX_STACK_LINE(1575)
							if (((xr->rank < yr->rank))){
								HX_STACK_LINE(1575)
								xr->parent = yr;
							}
							else{
								HX_STACK_LINE(1576)
								if (((xr->rank > yr->rank))){
									HX_STACK_LINE(1576)
									yr->parent = xr;
								}
								else{
									HX_STACK_LINE(1578)
									yr->parent = xr;
									HX_STACK_LINE(1579)
									(xr->rank)++;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1584)
		{
			HX_STACK_LINE(1585)
			::zpp_nape::geom::ZPP_CutInt o = i1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1594)
			{
				HX_STACK_LINE(1594)
				::zpp_nape::geom::ZPP_GeomVert _g83 = o->start = null();		HX_STACK_VAR(_g83,"_g83");
				HX_STACK_LINE(1594)
				o->end = _g83;
				HX_STACK_LINE(1594)
				::zpp_nape::geom::ZPP_CutVert _g84 = o->path1 = null();		HX_STACK_VAR(_g84,"_g84");
				HX_STACK_LINE(1594)
				o->path0 = _g84;
			}
			HX_STACK_LINE(1595)
			o->next = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(1596)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1601)
		{
			HX_STACK_LINE(1602)
			::zpp_nape::geom::ZPP_CutInt o = j;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1611)
			{
				HX_STACK_LINE(1611)
				::zpp_nape::geom::ZPP_GeomVert _g85 = o->start = null();		HX_STACK_VAR(_g85,"_g85");
				HX_STACK_LINE(1611)
				o->end = _g85;
				HX_STACK_LINE(1611)
				::zpp_nape::geom::ZPP_CutVert _g86 = o->path1 = null();		HX_STACK_VAR(_g86,"_g86");
				HX_STACK_LINE(1611)
				o->path0 = _g86;
			}
			HX_STACK_LINE(1612)
			o->next = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(1613)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1619)
	::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1619)
	if (((output == null()))){
		HX_STACK_LINE(1619)
		ret = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(1619)
		ret = output;
	}
	HX_STACK_LINE(1620)
	{
		HX_STACK_LINE(1621)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1622)
		while((true)){
			HX_STACK_LINE(1622)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1622)
				break;
			}
			HX_STACK_LINE(1623)
			::zpp_nape::geom::ZPP_CutVert p1 = cx_ite->elt;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(1624)
			{
				HX_STACK_LINE(1625)
				::zpp_nape::geom::ZPP_CutVert poly;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1625)
				if (((p1 == p1->parent))){
					HX_STACK_LINE(1626)
					poly = p1;
				}
				else{
					HX_STACK_LINE(1628)
					::zpp_nape::geom::ZPP_CutVert obj = p1;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1629)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1630)
					while((true)){
						HX_STACK_LINE(1630)
						if ((!(((obj != obj->parent))))){
							HX_STACK_LINE(1630)
							break;
						}
						HX_STACK_LINE(1631)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1632)
						obj->parent = stack;
						HX_STACK_LINE(1633)
						stack = obj;
						HX_STACK_LINE(1634)
						obj = nxt;
					}
					HX_STACK_LINE(1636)
					while((true)){
						HX_STACK_LINE(1636)
						if ((!(((stack != null()))))){
							HX_STACK_LINE(1636)
							break;
						}
						HX_STACK_LINE(1637)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1638)
						stack->parent = obj;
						HX_STACK_LINE(1639)
						stack = nxt;
					}
					HX_STACK_LINE(1641)
					poly = obj;
				}
				HX_STACK_LINE(1644)
				if ((poly->used)){
					HX_STACK_LINE(1645)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1646)
					continue;
				}
				HX_STACK_LINE(1648)
				poly->used = true;
				HX_STACK_LINE(1649)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::geom::ZPP_GeomVert p2 = poly->vert;		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(1651)
					bool skip = true;		HX_STACK_VAR(skip,"skip");
					HX_STACK_LINE(1652)
					while((true)){
						HX_STACK_LINE(1652)
						if ((!(((bool((poly->vert != null())) && bool(((bool(skip) || bool((p2 != poly->vert)))))))))){
							HX_STACK_LINE(1652)
							break;
						}
						HX_STACK_LINE(1653)
						skip = false;
						HX_STACK_LINE(1654)
						if (((bool((p2->x == p2->next->x)) && bool((p2->y == p2->next->y))))){
							HX_STACK_LINE(1655)
							if (((p2 == poly->vert))){
								HX_STACK_LINE(1656)
								if (((p2->next == p2))){
									HX_STACK_LINE(1656)
									poly->vert = null();
								}
								else{
									HX_STACK_LINE(1656)
									poly->vert = p2->next;
								}
								HX_STACK_LINE(1657)
								skip = true;
							}
							HX_STACK_LINE(1668)
							::zpp_nape::geom::ZPP_GeomVert _g89;		HX_STACK_VAR(_g89,"_g89");
							HX_STACK_LINE(1668)
							if (((bool((p2 != null())) && bool((p2->prev == p2))))){
								HX_STACK_LINE(1669)
								::zpp_nape::geom::ZPP_GeomVert _g87 = p2->prev = null();		HX_STACK_VAR(_g87,"_g87");
								HX_STACK_LINE(1669)
								p2->next = _g87;
								HX_STACK_LINE(1671)
								_g89 = p2 = null();
							}
							else{
								HX_STACK_LINE(1674)
								::zpp_nape::geom::ZPP_GeomVert retnodes = p2->next;		HX_STACK_VAR(retnodes,"retnodes");
								HX_STACK_LINE(1675)
								p2->prev->next = p2->next;
								HX_STACK_LINE(1676)
								p2->next->prev = p2->prev;
								HX_STACK_LINE(1677)
								::zpp_nape::geom::ZPP_GeomVert _g88 = p2->prev = null();		HX_STACK_VAR(_g88,"_g88");
								HX_STACK_LINE(1677)
								p2->next = _g88;
								HX_STACK_LINE(1679)
								p2 = null();
								HX_STACK_LINE(1680)
								_g89 = retnodes;
							}
							HX_STACK_LINE(1659)
							p2 = _g89;
						}
						else{
							HX_STACK_LINE(1684)
							p2 = p2->next;
						}
					}
				}
				HX_STACK_LINE(1687)
				if (((poly->vert != null()))){
					HX_STACK_LINE(1688)
					::nape::geom::GeomPoly gp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(gp,"gp");
					HX_STACK_LINE(1689)
					gp->zpp_inner->vertices = poly->vert;
					HX_STACK_LINE(1690)
					if ((ret->zpp_inner->reverse_flag)){
						HX_STACK_LINE(1690)
						ret->push(gp);
					}
					else{
						HX_STACK_LINE(1690)
						ret->unshift(gp);
					}
				}
			}
			HX_STACK_LINE(1693)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1697)
	while((true)){
		HX_STACK_LINE(1697)
		if ((!((!(((::zpp_nape::geom::ZPP_Cutter_obj::paths->head == null()))))))){
			HX_STACK_LINE(1697)
			break;
		}
		HX_STACK_LINE(1698)
		::zpp_nape::geom::ZPP_CutVert p1 = ::zpp_nape::geom::ZPP_Cutter_obj::paths->pop_unsafe();		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(1699)
		{
			HX_STACK_LINE(1700)
			::zpp_nape::geom::ZPP_CutVert o = p1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1709)
			{
				HX_STACK_LINE(1709)
				o->vert = null();
				HX_STACK_LINE(1709)
				o->parent = null();
			}
			HX_STACK_LINE(1710)
			o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(1711)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1719)
	while((true)){
		HX_STACK_LINE(1719)
		if ((!((!(((verts == null()))))))){
			HX_STACK_LINE(1719)
			break;
		}
		HX_STACK_LINE(1728)
		::zpp_nape::geom::ZPP_CutVert _g92;		HX_STACK_VAR(_g92,"_g92");
		HX_STACK_LINE(1728)
		if (((bool((verts != null())) && bool((verts->prev == verts))))){
			HX_STACK_LINE(1729)
			::zpp_nape::geom::ZPP_CutVert _g90 = verts->prev = null();		HX_STACK_VAR(_g90,"_g90");
			HX_STACK_LINE(1729)
			verts->next = _g90;
			HX_STACK_LINE(1730)
			{
				HX_STACK_LINE(1731)
				::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1740)
				{
					HX_STACK_LINE(1740)
					o->vert = null();
					HX_STACK_LINE(1740)
					o->parent = null();
				}
				HX_STACK_LINE(1741)
				o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(1742)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1747)
			_g92 = verts = null();
		}
		else{
			HX_STACK_LINE(1750)
			::zpp_nape::geom::ZPP_CutVert retnodes = verts->next;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(1751)
			verts->prev->next = verts->next;
			HX_STACK_LINE(1752)
			verts->next->prev = verts->prev;
			HX_STACK_LINE(1753)
			::zpp_nape::geom::ZPP_CutVert _g91 = verts->prev = null();		HX_STACK_VAR(_g91,"_g91");
			HX_STACK_LINE(1753)
			verts->next = _g91;
			HX_STACK_LINE(1754)
			{
				HX_STACK_LINE(1755)
				::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1764)
				{
					HX_STACK_LINE(1764)
					o->vert = null();
					HX_STACK_LINE(1764)
					o->parent = null();
				}
				HX_STACK_LINE(1765)
				o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(1766)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1771)
			verts = null();
			HX_STACK_LINE(1772)
			_g92 = retnodes;
		}
		HX_STACK_LINE(1719)
		verts = _g92;
	}
	HX_STACK_LINE(1776)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_Cutter_obj,run,return )


ZPP_Cutter_obj::ZPP_Cutter_obj()
{
}

Dynamic ZPP_Cutter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { return paths; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Cutter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CutInt >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CutVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Cutter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ints"),
	HX_CSTRING("paths"),
	HX_CSTRING("run"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

#endif

Class ZPP_Cutter_obj::__mClass;

void ZPP_Cutter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Cutter"), hx::TCanCast< ZPP_Cutter_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Cutter_obj::__boot()
{
	ints= null();
	paths= null();
}

} // end namespace zpp_nape
} // end namespace geom
