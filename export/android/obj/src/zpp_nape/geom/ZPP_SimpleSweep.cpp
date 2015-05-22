#include <hxcpp.h>

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
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleSweep_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","new",0x92a3afd6,"zpp_nape.geom.ZPP_SimpleSweep.new","zpp_nape/geom/Simple.hx",464,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(466)
	this->tree = null();
	HX_STACK_LINE(465)
	this->sweepx = 0.0;
	HX_STACK_LINE(468)
	{
		HX_STACK_LINE(469)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
			HX_STACK_LINE(470)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg _g = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(470)
			this->tree = _g;
		}
		else{
			HX_STACK_LINE(476)
			this->tree = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(477)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = this->tree->next;
			HX_STACK_LINE(478)
			this->tree->next = null();
		}
		HX_STACK_LINE(483)
		Dynamic();
	}
	HX_STACK_LINE(485)
	this->tree->lt = this->edge_lt_dyn();
	HX_STACK_LINE(486)
	this->tree->swapped = this->swap_nodes_dyn();
}
;
	return null();
}

//ZPP_SimpleSweep_obj::~ZPP_SimpleSweep_obj() { }

Dynamic ZPP_SimpleSweep_obj::__CreateEmpty() { return  new ZPP_SimpleSweep_obj; }
hx::ObjectPtr< ZPP_SimpleSweep_obj > ZPP_SimpleSweep_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > result = new ZPP_SimpleSweep_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleSweep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > result = new ZPP_SimpleSweep_obj();
	result->__construct();
	return result;}

Void ZPP_SimpleSweep_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","swap_nodes",0x1d0d758f,"zpp_nape.geom.ZPP_SimpleSweep.swap_nodes","zpp_nape/geom/Simple.hx",488,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(489)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(490)
		p->node = q->node;
		HX_STACK_LINE(491)
		q->node = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,swap_nodes,(void))

bool ZPP_SimpleSweep_obj::edge_lt( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","edge_lt",0xa76c8300,"zpp_nape.geom.ZPP_SimpleSweep.edge_lt","zpp_nape/geom/Simple.hx",493,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(494)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(495)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(496)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(497)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(498)
	bool flip;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(499)
	if (((bool((p->left == q->left)) && bool((p->right == q->right))))){
		HX_STACK_LINE(499)
		return false;
	}
	else{
		HX_STACK_LINE(500)
		if (((p->left == q->right))){
			HX_STACK_LINE(500)
			if (((p->left->x == p->right->x))){
				HX_STACK_LINE(502)
				if (((p->left->y < p->right->y))){
					HX_STACK_LINE(502)
					return (p->left->y > q->left->y);
				}
				else{
					HX_STACK_LINE(503)
					return (p->right->y > q->left->y);
				}
			}
			else{
				HX_STACK_LINE(505)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(506)
					flip = (p->right->x < p->left->x);
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(508)
						ux = (p->right->x - p->left->x);
						HX_STACK_LINE(509)
						uy = (p->right->y - p->left->y);
					}
					HX_STACK_LINE(511)
					{
						HX_STACK_LINE(512)
						vx = (q->left->x - p->left->x);
						HX_STACK_LINE(513)
						vy = (q->left->y - p->left->y);
					}
					HX_STACK_LINE(515)
					if ((flip)){
						HX_STACK_LINE(515)
						_g = ((uy * vx) - (ux * vy));
					}
					else{
						HX_STACK_LINE(515)
						_g = ((vy * ux) - (vx * uy));
					}
				}
				HX_STACK_LINE(505)
				return (_g < (int)0);
			}
		}
		else{
			HX_STACK_LINE(518)
			if (((p->right == q->left))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::geom::ZPP_SimpleSeg &p,::zpp_nape::geom::ZPP_SimpleSeg &q){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Simple.hx",520,0x62f156db)
						{
							HX_STACK_LINE(520)
							return (  (((q->left->y < q->right->y))) ? bool((q->left->y > p->left->y)) : bool((q->right->y > p->left->y)) );
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( Float &vx,Float &uy,Float &ux,::zpp_nape::geom::ZPP_SimpleSeg &p,Float &vy,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/Simple.hx",523,0x62f156db)
						{
							HX_STACK_LINE(523)
							Float _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(523)
							{
								HX_STACK_LINE(524)
								flip = (q->right->x < q->left->x);
								HX_STACK_LINE(525)
								{
									HX_STACK_LINE(526)
									ux = (q->right->x - q->left->x);
									HX_STACK_LINE(527)
									uy = (q->right->y - q->left->y);
								}
								HX_STACK_LINE(529)
								{
									HX_STACK_LINE(530)
									vx = (p->left->x - q->left->x);
									HX_STACK_LINE(531)
									vy = (p->left->y - q->left->y);
								}
								HX_STACK_LINE(533)
								if ((flip)){
									HX_STACK_LINE(533)
									_g1 = ((uy * vx) - (ux * vy));
								}
								else{
									HX_STACK_LINE(533)
									_g1 = ((vy * ux) - (vx * uy));
								}
							}
							HX_STACK_LINE(523)
							return (_g1 < (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				return !(((  (((q->left->x == q->right->x))) ? bool(_Function_4_1::Block(p,q)) : bool(_Function_4_2::Block(vx,uy,ux,p,vy,flip,q)) )));
			}
			else{
				HX_STACK_LINE(536)
				if (((p->left == q->left))){
					HX_STACK_LINE(536)
					if (((p->left->x == p->right->x))){
						HX_STACK_LINE(538)
						if (((p->left->y < p->right->y))){
							HX_STACK_LINE(538)
							return (p->left->y > q->right->y);
						}
						else{
							HX_STACK_LINE(539)
							return (p->right->y > q->right->y);
						}
					}
					else{
						HX_STACK_LINE(541)
						Float _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(542)
							flip = (p->right->x < p->left->x);
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(544)
								ux = (p->right->x - p->left->x);
								HX_STACK_LINE(545)
								uy = (p->right->y - p->left->y);
							}
							HX_STACK_LINE(547)
							{
								HX_STACK_LINE(548)
								vx = (q->right->x - p->left->x);
								HX_STACK_LINE(549)
								vy = (q->right->y - p->left->y);
							}
							HX_STACK_LINE(551)
							if ((flip)){
								HX_STACK_LINE(551)
								_g2 = ((uy * vx) - (ux * vy));
							}
							else{
								HX_STACK_LINE(551)
								_g2 = ((vy * ux) - (vx * uy));
							}
						}
						HX_STACK_LINE(541)
						return (_g2 < (int)0);
					}
				}
				else{
					HX_STACK_LINE(554)
					if (((p->right == q->right))){
						HX_STACK_LINE(554)
						if (((p->left->x == p->right->x))){
							HX_STACK_LINE(556)
							if (((p->left->y < p->right->y))){
								HX_STACK_LINE(556)
								return (p->left->y > q->left->y);
							}
							else{
								HX_STACK_LINE(557)
								return (p->right->y > q->left->y);
							}
						}
						else{
							HX_STACK_LINE(559)
							Float _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(559)
							{
								HX_STACK_LINE(560)
								flip = (p->right->x < p->left->x);
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(562)
									ux = (p->right->x - p->left->x);
									HX_STACK_LINE(563)
									uy = (p->right->y - p->left->y);
								}
								HX_STACK_LINE(565)
								{
									HX_STACK_LINE(566)
									vx = (q->left->x - p->left->x);
									HX_STACK_LINE(567)
									vy = (q->left->y - p->left->y);
								}
								HX_STACK_LINE(569)
								if ((flip)){
									HX_STACK_LINE(569)
									_g3 = ((uy * vx) - (ux * vy));
								}
								else{
									HX_STACK_LINE(569)
									_g3 = ((vy * ux) - (vx * uy));
								}
							}
							HX_STACK_LINE(559)
							return (_g3 < (int)0);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(572)
	if (((p->left->x == p->right->x))){
		HX_STACK_LINE(573)
		if (((q->left->x == q->right->x))){
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_SimpleVert pmax;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(574)
			if (((p->left->y < p->right->y))){
				HX_STACK_LINE(574)
				pmax = p->right;
			}
			else{
				HX_STACK_LINE(574)
				pmax = p->left;
			}
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_SimpleVert qmax;		HX_STACK_VAR(qmax,"qmax");
			HX_STACK_LINE(575)
			if (((q->left->y < q->right->y))){
				HX_STACK_LINE(575)
				qmax = q->right;
			}
			else{
				HX_STACK_LINE(575)
				qmax = q->left;
			}
			HX_STACK_LINE(576)
			return (pmax->y > qmax->y);
		}
		else{
			HX_STACK_LINE(579)
			Float plrg;		HX_STACK_VAR(plrg,"plrg");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(580)
				flip = (q->right->x < q->left->x);
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(582)
					ux = (q->right->x - q->left->x);
					HX_STACK_LINE(583)
					uy = (q->right->y - q->left->y);
				}
				HX_STACK_LINE(585)
				{
					HX_STACK_LINE(586)
					vx = (p->left->x - q->left->x);
					HX_STACK_LINE(587)
					vy = (p->left->y - q->left->y);
				}
				HX_STACK_LINE(589)
				if ((flip)){
					HX_STACK_LINE(589)
					plrg = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(589)
					plrg = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(591)
			Float aplrg;		HX_STACK_VAR(aplrg,"aplrg");
			HX_STACK_LINE(591)
			{
				HX_STACK_LINE(592)
				flip = (q->right->x < q->left->x);
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(594)
					ux = (q->right->x - q->left->x);
					HX_STACK_LINE(595)
					uy = (q->right->y - q->left->y);
				}
				HX_STACK_LINE(597)
				{
					HX_STACK_LINE(598)
					vx = (p->right->x - q->left->x);
					HX_STACK_LINE(599)
					vy = (p->right->y - q->left->y);
				}
				HX_STACK_LINE(601)
				if ((flip)){
					HX_STACK_LINE(601)
					aplrg = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(601)
					aplrg = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(603)
			if ((((plrg * aplrg) >= (int)0))){
				HX_STACK_LINE(603)
				return (plrg >= 0.0);
			}
			else{
				HX_STACK_LINE(604)
				return (this->sweepx >= p->left->x);
			}
		}
	}
	else{
		HX_STACK_LINE(607)
		if (((q->left->x == q->right->x))){
			HX_STACK_LINE(608)
			Float qlrg;		HX_STACK_VAR(qlrg,"qlrg");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(609)
				flip = (p->right->x < p->left->x);
				HX_STACK_LINE(610)
				{
					HX_STACK_LINE(611)
					ux = (p->right->x - p->left->x);
					HX_STACK_LINE(612)
					uy = (p->right->y - p->left->y);
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(615)
					vx = (q->left->x - p->left->x);
					HX_STACK_LINE(616)
					vy = (q->left->y - p->left->y);
				}
				HX_STACK_LINE(618)
				if ((flip)){
					HX_STACK_LINE(618)
					qlrg = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(618)
					qlrg = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(620)
			Float aqlrg;		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(620)
			{
				HX_STACK_LINE(621)
				flip = (p->right->x < p->left->x);
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(623)
					ux = (p->right->x - p->left->x);
					HX_STACK_LINE(624)
					uy = (p->right->y - p->left->y);
				}
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(627)
					vx = (q->right->x - p->left->x);
					HX_STACK_LINE(628)
					vy = (q->right->y - p->left->y);
				}
				HX_STACK_LINE(630)
				if ((flip)){
					HX_STACK_LINE(630)
					aqlrg = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(630)
					aqlrg = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(632)
			if ((((qlrg * aqlrg) >= (int)0))){
				HX_STACK_LINE(632)
				return (qlrg < 0.0);
			}
			else{
				HX_STACK_LINE(633)
				return (this->sweepx < q->left->x);
			}
		}
		else{
			HX_STACK_LINE(636)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(637)
				flip = (p->right->x < p->left->x);
				HX_STACK_LINE(638)
				{
					HX_STACK_LINE(639)
					ux = (p->right->x - p->left->x);
					HX_STACK_LINE(640)
					uy = (p->right->y - p->left->y);
				}
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(643)
					vx = (q->left->x - p->left->x);
					HX_STACK_LINE(644)
					vy = (q->left->y - p->left->y);
				}
				HX_STACK_LINE(646)
				if ((flip)){
					HX_STACK_LINE(646)
					_g4 = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(646)
					_g4 = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(636)
			bool qlrg = (_g4 < 0.0);		HX_STACK_VAR(qlrg,"qlrg");
			HX_STACK_LINE(648)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(648)
			{
				HX_STACK_LINE(649)
				flip = (p->right->x < p->left->x);
				HX_STACK_LINE(650)
				{
					HX_STACK_LINE(651)
					ux = (p->right->x - p->left->x);
					HX_STACK_LINE(652)
					uy = (p->right->y - p->left->y);
				}
				HX_STACK_LINE(654)
				{
					HX_STACK_LINE(655)
					vx = (q->right->x - p->left->x);
					HX_STACK_LINE(656)
					vy = (q->right->y - p->left->y);
				}
				HX_STACK_LINE(658)
				if ((flip)){
					HX_STACK_LINE(658)
					_g5 = ((uy * vx) - (ux * vy));
				}
				else{
					HX_STACK_LINE(658)
					_g5 = ((vy * ux) - (vx * uy));
				}
			}
			HX_STACK_LINE(648)
			bool aqlrg = (_g5 < 0.0);		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(660)
			if (((qlrg == aqlrg))){
				HX_STACK_LINE(660)
				return qlrg;
			}
			else{
				HX_STACK_LINE(662)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(663)
					flip = (q->right->x < q->left->x);
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						ux = (q->right->x - q->left->x);
						HX_STACK_LINE(666)
						uy = (q->right->y - q->left->y);
					}
					HX_STACK_LINE(668)
					{
						HX_STACK_LINE(669)
						vx = (p->left->x - q->left->x);
						HX_STACK_LINE(670)
						vy = (p->left->y - q->left->y);
					}
					HX_STACK_LINE(672)
					if ((flip)){
						HX_STACK_LINE(672)
						_g6 = ((uy * vx) - (ux * vy));
					}
					else{
						HX_STACK_LINE(672)
						_g6 = ((vy * ux) - (vx * uy));
					}
				}
				HX_STACK_LINE(662)
				bool plrg = (_g6 >= 0.0);		HX_STACK_VAR(plrg,"plrg");
				HX_STACK_LINE(674)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(675)
					flip = (q->right->x < q->left->x);
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(677)
						ux = (q->right->x - q->left->x);
						HX_STACK_LINE(678)
						uy = (q->right->y - q->left->y);
					}
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(681)
						vx = (p->right->x - q->left->x);
						HX_STACK_LINE(682)
						vy = (p->right->y - q->left->y);
					}
					HX_STACK_LINE(684)
					if ((flip)){
						HX_STACK_LINE(684)
						_g7 = ((uy * vx) - (ux * vy));
					}
					else{
						HX_STACK_LINE(684)
						_g7 = ((vy * ux) - (vx * uy));
					}
				}
				HX_STACK_LINE(674)
				bool aplrg = (_g7 >= 0.0);		HX_STACK_VAR(aplrg,"aplrg");
				HX_STACK_LINE(686)
				if (((plrg == aplrg))){
					HX_STACK_LINE(686)
					return plrg;
				}
				HX_STACK_LINE(687)
				Float py = (((Float(((this->sweepx - p->left->x))) / Float(((p->right->x - p->left->x)))) * ((p->right->y - p->left->y))) + p->left->y);		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(688)
				Float qy = (((Float(((this->sweepx - q->left->x))) / Float(((q->right->x - q->left->x)))) * ((q->right->y - q->left->y))) + q->left->y);		HX_STACK_VAR(qy,"qy");
				HX_STACK_LINE(689)
				return (py > qy);
			}
		}
	}
	HX_STACK_LINE(572)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,edge_lt,return )

Void ZPP_SimpleSweep_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","clear",0xf5fa9a83,"zpp_nape.geom.ZPP_SimpleSweep.clear","zpp_nape/geom/Simple.hx",694,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(694)
		this->tree->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSweep_obj,clear,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSweep_obj::add( ::zpp_nape::geom::ZPP_SimpleSeg e){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","add",0x9299d197,"zpp_nape.geom.ZPP_SimpleSweep.add","zpp_nape/geom/Simple.hx",696,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg _g = this->tree->insert(e);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(697)
	e->node = _g;
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);		HX_STACK_VAR(nxt,"nxt");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(700)
	if (((nxt != null()))){
		HX_STACK_LINE(701)
		e->next = nxt->data;
		HX_STACK_LINE(702)
		nxt->data->prev = e;
	}
	HX_STACK_LINE(704)
	if (((pre != null()))){
		HX_STACK_LINE(705)
		e->prev = pre->data;
		HX_STACK_LINE(706)
		pre->data->next = e;
	}
	HX_STACK_LINE(708)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,add,return )

Void ZPP_SimpleSweep_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg e){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","remove",0x422d4a8e,"zpp_nape.geom.ZPP_SimpleSweep.remove","zpp_nape/geom/Simple.hx",710,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);		HX_STACK_VAR(nxt,"nxt");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(713)
		if (((nxt != null()))){
			HX_STACK_LINE(713)
			nxt->data->prev = e->prev;
		}
		HX_STACK_LINE(714)
		if (((pre != null()))){
			HX_STACK_LINE(714)
			pre->data->next = e->next;
		}
		HX_STACK_LINE(715)
		this->tree->remove_node(e->node);
		HX_STACK_LINE(716)
		e->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,remove,(void))

bool ZPP_SimpleSweep_obj::intersect( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","intersect",0x575adcd5,"zpp_nape.geom.ZPP_SimpleSweep.intersect","zpp_nape/geom/Simple.hx",719,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(719)
	if (((bool((p == null())) || bool((q == null()))))){
		HX_STACK_LINE(719)
		return false;
	}
	else{
		HX_STACK_LINE(720)
		if (((bool((bool((bool((p->left == q->left)) || bool((p->left == q->right)))) || bool((p->right == q->left)))) || bool((p->right == q->right))))){
			HX_STACK_LINE(720)
			return false;
		}
		else{
			HX_STACK_LINE(722)
			Float lsign = ((((q->left->x - p->left->x)) * ((p->right->y - p->left->y))) - (((p->right->x - p->left->x)) * ((q->left->y - p->left->y))));		HX_STACK_VAR(lsign,"lsign");
			HX_STACK_LINE(723)
			Float rsign = ((((q->right->x - p->left->x)) * ((p->right->y - p->left->y))) - (((p->right->x - p->left->x)) * ((q->right->y - p->left->y))));		HX_STACK_VAR(rsign,"rsign");
			HX_STACK_LINE(724)
			if ((((lsign * rsign) > (int)0))){
				HX_STACK_LINE(724)
				return false;
			}
			else{
				HX_STACK_LINE(726)
				Float lsign2 = ((((p->left->x - q->left->x)) * ((q->right->y - q->left->y))) - (((q->right->x - q->left->x)) * ((p->left->y - q->left->y))));		HX_STACK_VAR(lsign2,"lsign2");
				HX_STACK_LINE(727)
				Float rsign2 = ((((p->right->x - q->left->x)) * ((q->right->y - q->left->y))) - (((q->right->x - q->left->x)) * ((p->right->y - q->left->y))));		HX_STACK_VAR(rsign2,"rsign2");
				HX_STACK_LINE(728)
				if ((((lsign2 * rsign2) > (int)0))){
					HX_STACK_LINE(728)
					return false;
				}
				else{
					HX_STACK_LINE(729)
					if (((bool(((lsign * rsign) >= (int)0)) && bool(((lsign2 * rsign2) >= (int)0))))){
						HX_STACK_LINE(730)
						return true;
					}
					else{
						HX_STACK_LINE(732)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(719)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersect,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleSweep_obj::intersection( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","intersection",0x34f12413,"zpp_nape.geom.ZPP_SimpleSweep.intersection","zpp_nape/geom/Simple.hx",737,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(737)
	if (((bool((p == null())) || bool((q == null()))))){
		HX_STACK_LINE(737)
		return null();
	}
	else{
		HX_STACK_LINE(738)
		if (((bool((bool((bool((p->left == q->left)) || bool((p->left == q->right)))) || bool((p->right == q->left)))) || bool((p->right == q->right))))){
			HX_STACK_LINE(738)
			return null();
		}
		else{
			HX_STACK_LINE(740)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(741)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(742)
			{
				HX_STACK_LINE(743)
				ux = (p->right->x - p->left->x);
				HX_STACK_LINE(744)
				uy = (p->right->y - p->left->y);
			}
			HX_STACK_LINE(746)
			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(747)
			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(749)
				vx = (q->right->x - q->left->x);
				HX_STACK_LINE(750)
				vy = (q->right->y - q->left->y);
			}
			HX_STACK_LINE(752)
			Float denom = ((vy * ux) - (vx * uy));		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(753)
			if (((denom == 0.0))){
				HX_STACK_LINE(753)
				return null();
			}
			HX_STACK_LINE(754)
			denom = (Float((int)1) / Float(denom));
			HX_STACK_LINE(755)
			Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(756)
			Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				cx = (q->left->x - p->left->x);
				HX_STACK_LINE(759)
				cy = (q->left->y - p->left->y);
			}
			HX_STACK_LINE(761)
			Float t = ((((vy * cx) - (vx * cy))) * denom);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(762)
			if (((bool((t < (int)0)) || bool((t > (int)1))))){
				HX_STACK_LINE(762)
				return null();
			}
			HX_STACK_LINE(763)
			Float s = ((((uy * cx) - (ux * cy))) * denom);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(764)
			if (((bool((s < (int)0)) || bool((s > (int)1))))){
				HX_STACK_LINE(764)
				return null();
			}
			HX_STACK_LINE(765)
			::zpp_nape::geom::ZPP_SimpleVert vet;		HX_STACK_VAR(vet,"vet");
			HX_STACK_LINE(766)
			if (((bool((bool((bool((s == (int)0)) || bool((s == (int)1)))) || bool((t == (int)0)))) || bool((t == (int)1))))){
				HX_STACK_LINE(775)
				if (((s == (int)0))){
					HX_STACK_LINE(775)
					vet = q->left;
				}
				else{
					HX_STACK_LINE(775)
					if (((s == (int)1))){
						HX_STACK_LINE(775)
						vet = q->right;
					}
					else{
						HX_STACK_LINE(775)
						if (((t == (int)0))){
							HX_STACK_LINE(775)
							vet = p->left;
						}
						else{
							HX_STACK_LINE(775)
							vet = p->right;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(777)
				::zpp_nape::geom::ZPP_SimpleVert _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(777)
				{
					HX_STACK_LINE(777)
					::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(777)
					{
						HX_STACK_LINE(777)
						if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert _g = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(777)
							ret = _g;
						}
						else{
							HX_STACK_LINE(777)
							ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
							HX_STACK_LINE(777)
							ret->next = null();
						}
						HX_STACK_LINE(777)
						Dynamic();
					}
					HX_STACK_LINE(777)
					{
						HX_STACK_LINE(777)
						ret->x = (0.5 * ((((p->left->x + (ux * t)) + q->left->x) + (vx * s))));
						HX_STACK_LINE(777)
						ret->y = (0.5 * ((((p->left->y + (uy * t)) + q->left->y) + (vy * s))));
						HX_STACK_LINE(777)
						{
						}
					}
					HX_STACK_LINE(777)
					_g1 = ret;
				}
				HX_STACK_LINE(777)
				vet = _g1;
			}
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent _g2 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(778)
						ret1 = _g2;
					}
					else{
						HX_STACK_LINE(778)
						ret1 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(778)
						ret1->next = null();
					}
					HX_STACK_LINE(778)
					Dynamic();
				}
				HX_STACK_LINE(778)
				ret1->vertex = vet;
				HX_STACK_LINE(778)
				ret = ret1;
			}
			HX_STACK_LINE(779)
			ret->type = (int)0;
			HX_STACK_LINE(780)
			ret->segment = p;
			HX_STACK_LINE(781)
			ret->segment2 = q;
			HX_STACK_LINE(782)
			return ret;
		}
	}
	HX_STACK_LINE(737)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersection,return )


ZPP_SimpleSweep_obj::ZPP_SimpleSweep_obj()
{
}

void ZPP_SimpleSweep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSweep);
	HX_MARK_MEMBER_NAME(sweepx,"sweepx");
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSweep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sweepx,"sweepx");
	HX_VISIT_MEMBER_NAME(tree,"tree");
}

Dynamic ZPP_SimpleSweep_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return tree; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { return sweepx; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return edge_lt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleSweep_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { sweepx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleSweep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sweepx"));
	outFields->push(HX_CSTRING("tree"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_SimpleSweep_obj,sweepx),HX_CSTRING("sweepx")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSweep_obj,tree),HX_CSTRING("tree")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sweepx"),
	HX_CSTRING("tree"),
	HX_CSTRING("swap_nodes"),
	HX_CSTRING("edge_lt"),
	HX_CSTRING("clear"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("intersect"),
	HX_CSTRING("intersection"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

#endif

Class ZPP_SimpleSweep_obj::__mClass;

void ZPP_SimpleSweep_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleSweep"), hx::TCanCast< ZPP_SimpleSweep_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SimpleSweep_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
