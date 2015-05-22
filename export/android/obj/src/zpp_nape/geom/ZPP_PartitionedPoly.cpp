#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_PartitionedPoly_obj::__construct(::zpp_nape::geom::ZPP_GeomVert P)
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","new",0x933a85b1,"zpp_nape.geom.ZPP_PartitionedPoly.new","zpp_nape/geom/PartitionedPoly.hx",587,0x0d312f3a)
HX_STACK_THIS(this)
HX_STACK_ARG(P,"P")
{
	HX_STACK_LINE(595)
	this->next = null();
	HX_STACK_LINE(588)
	this->vertices = null();
	HX_STACK_LINE(593)
	this->init(P);
}
;
	return null();
}

//ZPP_PartitionedPoly_obj::~ZPP_PartitionedPoly_obj() { }

Dynamic ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZPP_PartitionedPoly_obj > ZPP_PartitionedPoly_obj::__new(::zpp_nape::geom::ZPP_GeomVert P)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > result = new ZPP_PartitionedPoly_obj();
	result->__construct(P);
	return result;}

Dynamic ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > result = new ZPP_PartitionedPoly_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ZPP_PartitionedPoly_obj::eq( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","eq",0x0f95783b,"zpp_nape.geom.ZPP_PartitionedPoly.eq","zpp_nape/geom/PartitionedPoly.hx",589,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(590)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(590)
	{
		HX_STACK_LINE(590)
		Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(590)
		Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(590)
		{
			HX_STACK_LINE(590)
			dx = (a->x - b->x);
			HX_STACK_LINE(590)
			dy = (a->y - b->y);
		}
		HX_STACK_LINE(590)
		_g = ((dx * dx) + (dy * dy));
	}
	HX_STACK_LINE(590)
	return (_g < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon));
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,eq,return )

Void ZPP_PartitionedPoly_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","alloc",0x438f1006,"zpp_nape.geom.ZPP_PartitionedPoly.alloc","zpp_nape/geom/PartitionedPoly.hx",621,0x0d312f3a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,alloc,(void))

Void ZPP_PartitionedPoly_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","free",0x3aba8e3b,"zpp_nape.geom.ZPP_PartitionedPoly.free","zpp_nape/geom/PartitionedPoly.hx",624,0x0d312f3a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,free,(void))

Void ZPP_PartitionedPoly_obj::init( ::zpp_nape::geom::ZPP_GeomVert P){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","init",0x3cb32c9f,"zpp_nape.geom.ZPP_PartitionedPoly.init","zpp_nape/geom/PartitionedPoly.hx",633,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_LINE(634)
		if (((P == null()))){
			HX_STACK_LINE(634)
			return null();
		}
		HX_STACK_LINE(635)
		bool cw;		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(636)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(661)
				Float area = 0.0;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(663)
					::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
					HX_STACK_LINE(664)
					::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
					HX_STACK_LINE(665)
					if (((F != null()))){
						HX_STACK_LINE(666)
						::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
						HX_STACK_LINE(667)
						while((true)){
							HX_STACK_LINE(668)
							::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(671)
							hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
							HX_STACK_LINE(674)
							nite = nite->next;
							HX_STACK_LINE(667)
							if ((!(((nite != L))))){
								HX_STACK_LINE(667)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(679)
				_g = (area * 0.5);
			}
			HX_STACK_LINE(636)
			cw = (_g > 0.0);
		}
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(683)
		while((true)){
			HX_STACK_LINE(684)
			::zpp_nape::geom::ZPP_PartitionVertex _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(684)
			if ((cw)){
				HX_STACK_LINE(685)
				::zpp_nape::geom::ZPP_PartitionVertex obj;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(685)
				{
					HX_STACK_LINE(685)
					::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(685)
							::zpp_nape::geom::ZPP_PartitionVertex _g1 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(685)
							ret = _g1;
						}
						else{
							HX_STACK_LINE(685)
							ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(685)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
							HX_STACK_LINE(685)
							ret->next = null();
						}
						HX_STACK_LINE(685)
						Dynamic();
					}
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						ret->x = p->x;
						HX_STACK_LINE(685)
						ret->y = p->y;
						HX_STACK_LINE(685)
						{
						}
					}
					HX_STACK_LINE(685)
					obj = ret;
				}
				HX_STACK_LINE(686)
				if (((this->vertices == null()))){
					HX_STACK_LINE(686)
					::zpp_nape::geom::ZPP_PartitionVertex _g2 = obj->next = obj;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(686)
					::zpp_nape::geom::ZPP_PartitionVertex _g3 = obj->prev = _g2;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(686)
					this->vertices = _g3;
				}
				else{
					HX_STACK_LINE(688)
					obj->prev = this->vertices;
					HX_STACK_LINE(689)
					obj->next = this->vertices->next;
					HX_STACK_LINE(690)
					this->vertices->next->prev = obj;
					HX_STACK_LINE(691)
					this->vertices->next = obj;
				}
				HX_STACK_LINE(693)
				_g7 = obj;
			}
			else{
				HX_STACK_LINE(696)
				::zpp_nape::geom::ZPP_PartitionVertex obj;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_PartitionVertex _g4 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(696)
							ret = _g4;
						}
						else{
							HX_STACK_LINE(696)
							ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
							HX_STACK_LINE(696)
							ret->next = null();
						}
						HX_STACK_LINE(696)
						Dynamic();
					}
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						ret->x = p->x;
						HX_STACK_LINE(696)
						ret->y = p->y;
						HX_STACK_LINE(696)
						{
						}
					}
					HX_STACK_LINE(696)
					obj = ret;
				}
				HX_STACK_LINE(697)
				if (((this->vertices == null()))){
					HX_STACK_LINE(697)
					::zpp_nape::geom::ZPP_PartitionVertex _g5 = obj->next = obj;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(697)
					::zpp_nape::geom::ZPP_PartitionVertex _g6 = obj->prev = _g5;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(697)
					this->vertices = _g6;
				}
				else{
					HX_STACK_LINE(699)
					obj->next = this->vertices;
					HX_STACK_LINE(700)
					obj->prev = this->vertices->prev;
					HX_STACK_LINE(701)
					this->vertices->prev->next = obj;
					HX_STACK_LINE(702)
					this->vertices->prev = obj;
				}
				HX_STACK_LINE(704)
				_g7 = obj;
			}
			HX_STACK_LINE(684)
			this->vertices = _g7;
			HX_STACK_LINE(706)
			this->vertices->forced = p->forced;
			HX_STACK_LINE(707)
			p = p->next;
			HX_STACK_LINE(683)
			if ((!(((p != P))))){
				HX_STACK_LINE(683)
				break;
			}
		}
		HX_STACK_LINE(710)
		this->remove_collinear_vertices();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,init,(void))

bool ZPP_PartitionedPoly_obj::remove_collinear_vertices( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","remove_collinear_vertices",0xef0c64ff,"zpp_nape.geom.ZPP_PartitionedPoly.remove_collinear_vertices","zpp_nape/geom/PartitionedPoly.hx",712,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	::zpp_nape::geom::ZPP_PartitionVertex p = this->vertices;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(714)
	bool skip = true;		HX_STACK_VAR(skip,"skip");
	HX_STACK_LINE(715)
	while((true)){
		HX_STACK_LINE(715)
		if ((!(((bool(skip) || bool((p != this->vertices))))))){
			HX_STACK_LINE(715)
			break;
		}
		HX_STACK_LINE(716)
		skip = false;
		HX_STACK_LINE(717)
		if ((this->eq(p,p->next))){
			HX_STACK_LINE(718)
			if (((p == this->vertices))){
				HX_STACK_LINE(719)
				this->vertices = p->next;
				HX_STACK_LINE(720)
				skip = true;
			}
			HX_STACK_LINE(722)
			if ((p->forced)){
				HX_STACK_LINE(722)
				p->next->forced = true;
			}
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_PartitionVertex _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(732)
			if (((bool((p != null())) && bool((p->prev == p))))){
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_PartitionVertex _g = p->prev = null();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(733)
				p->next = _g;
				HX_STACK_LINE(734)
				{
					HX_STACK_LINE(735)
					::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(744)
					{
						HX_STACK_LINE(744)
						o->helper = null();
						HX_STACK_LINE(744)
						Dynamic();
					}
					HX_STACK_LINE(745)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(746)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(751)
				_g2 = p = null();
			}
			else{
				HX_STACK_LINE(754)
				::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(755)
				p->prev->next = p->next;
				HX_STACK_LINE(756)
				p->next->prev = p->prev;
				HX_STACK_LINE(757)
				::zpp_nape::geom::ZPP_PartitionVertex _g1 = p->prev = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(757)
				p->next = _g1;
				HX_STACK_LINE(758)
				{
					HX_STACK_LINE(759)
					::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						o->helper = null();
						HX_STACK_LINE(768)
						Dynamic();
					}
					HX_STACK_LINE(769)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(775)
				p = null();
				HX_STACK_LINE(776)
				_g2 = retnodes;
			}
			HX_STACK_LINE(723)
			p = _g2;
			HX_STACK_LINE(779)
			if (((p == null()))){
				HX_STACK_LINE(780)
				this->vertices = null();
				HX_STACK_LINE(781)
				break;
			}
		}
		else{
			HX_STACK_LINE(784)
			p = p->next;
		}
	}
	HX_STACK_LINE(786)
	if (((this->vertices == null()))){
		HX_STACK_LINE(786)
		return true;
	}
	HX_STACK_LINE(787)
	bool removed;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(788)
	while((true)){
		HX_STACK_LINE(789)
		removed = false;
		HX_STACK_LINE(790)
		p = this->vertices;
		HX_STACK_LINE(791)
		skip = true;
		HX_STACK_LINE(792)
		while((true)){
			HX_STACK_LINE(792)
			if ((!(((bool(skip) || bool((p != this->vertices))))))){
				HX_STACK_LINE(792)
				break;
			}
			HX_STACK_LINE(793)
			skip = false;
			HX_STACK_LINE(794)
			::zpp_nape::geom::ZPP_PartitionVertex pre = p->prev;		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(795)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(796)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(797)
			{
				HX_STACK_LINE(798)
				ux = (p->x - pre->x);
				HX_STACK_LINE(799)
				uy = (p->y - pre->y);
			}
			HX_STACK_LINE(801)
			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(802)
			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(803)
			{
				HX_STACK_LINE(804)
				vx = (p->next->x - p->x);
				HX_STACK_LINE(805)
				vy = (p->next->y - p->y);
			}
			HX_STACK_LINE(807)
			Float crs = ((vy * ux) - (vx * uy));		HX_STACK_VAR(crs,"crs");
			HX_STACK_LINE(808)
			if ((((crs * crs) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(809)
				p = p->next;
			}
			else{
				HX_STACK_LINE(812)
				if (((p == this->vertices))){
					HX_STACK_LINE(813)
					this->vertices = p->next;
					HX_STACK_LINE(814)
					skip = true;
				}
				HX_STACK_LINE(825)
				::zpp_nape::geom::ZPP_PartitionVertex _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(825)
				if (((bool((p != null())) && bool((p->prev == p))))){
					HX_STACK_LINE(826)
					::zpp_nape::geom::ZPP_PartitionVertex _g3 = p->prev = null();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(826)
					p->next = _g3;
					HX_STACK_LINE(827)
					{
						HX_STACK_LINE(828)
						::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(837)
						{
							HX_STACK_LINE(837)
							o->helper = null();
							HX_STACK_LINE(837)
							Dynamic();
						}
						HX_STACK_LINE(838)
						o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(839)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(844)
					_g5 = p = null();
				}
				else{
					HX_STACK_LINE(847)
					::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(848)
					p->prev->next = p->next;
					HX_STACK_LINE(849)
					p->next->prev = p->prev;
					HX_STACK_LINE(850)
					::zpp_nape::geom::ZPP_PartitionVertex _g4 = p->prev = null();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(850)
					p->next = _g4;
					HX_STACK_LINE(851)
					{
						HX_STACK_LINE(852)
						::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(861)
						{
							HX_STACK_LINE(861)
							o->helper = null();
							HX_STACK_LINE(861)
							Dynamic();
						}
						HX_STACK_LINE(862)
						o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(863)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(868)
					p = null();
					HX_STACK_LINE(869)
					_g5 = retnodes;
				}
				HX_STACK_LINE(816)
				p = _g5;
				HX_STACK_LINE(872)
				removed = true;
				HX_STACK_LINE(873)
				if (((p == null()))){
					HX_STACK_LINE(874)
					removed = false;
					HX_STACK_LINE(875)
					this->vertices = null();
					HX_STACK_LINE(876)
					break;
				}
			}
		}
		HX_STACK_LINE(788)
		if ((!(removed))){
			HX_STACK_LINE(788)
			break;
		}
	}
	HX_STACK_LINE(882)
	return (this->vertices == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,remove_collinear_vertices,return )

Void ZPP_PartitionedPoly_obj::add_diagonal( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","add_diagonal",0xca5a56a2,"zpp_nape.geom.ZPP_PartitionedPoly.add_diagonal","zpp_nape/geom/PartitionedPoly.hx",884,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(885)
		p->diagonals->add(q);
		HX_STACK_LINE(886)
		q->diagonals->add(p);
		HX_STACK_LINE(887)
		bool _g = q->forced = true;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(887)
		p->forced = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,add_diagonal,(void))

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::extract_partitions( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","extract_partitions",0xb5140696,"zpp_nape.geom.ZPP_PartitionedPoly.extract_partitions","zpp_nape/geom/PartitionedPoly.hx",895,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(896)
	if (((ret == null()))){
		HX_STACK_LINE(896)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(896)
		ret = _g;
	}
	HX_STACK_LINE(897)
	if (((this->vertices != null()))){
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(899)
			::zpp_nape::geom::ZPP_PartitionVertex F = this->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(900)
			::zpp_nape::geom::ZPP_PartitionVertex L = this->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(901)
			if (((F != null()))){
				HX_STACK_LINE(902)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(903)
				while((true)){
					HX_STACK_LINE(904)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(906)
					c->sort();
					HX_STACK_LINE(908)
					nite = nite->next;
					HX_STACK_LINE(903)
					if ((!(((nite != L))))){
						HX_STACK_LINE(903)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(913)
		this->pull_partitions(this->vertices,ret);
		HX_STACK_LINE(915)
		while((true)){
			HX_STACK_LINE(915)
			if ((!((!(((this->vertices == null()))))))){
				HX_STACK_LINE(915)
				break;
			}
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_PartitionVertex _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(924)
			if (((bool((this->vertices != null())) && bool((this->vertices->prev == this->vertices))))){
				HX_STACK_LINE(925)
				::zpp_nape::geom::ZPP_PartitionVertex _g1 = this->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(925)
				this->vertices->next = _g1;
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(927)
					::zpp_nape::geom::ZPP_PartitionVertex o = this->vertices;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(936)
					{
						HX_STACK_LINE(936)
						o->helper = null();
						HX_STACK_LINE(936)
						Dynamic();
					}
					HX_STACK_LINE(937)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(938)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(943)
				_g3 = this->vertices = null();
			}
			else{
				HX_STACK_LINE(946)
				::zpp_nape::geom::ZPP_PartitionVertex retnodes = this->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(947)
				this->vertices->prev->next = this->vertices->next;
				HX_STACK_LINE(948)
				this->vertices->next->prev = this->vertices->prev;
				HX_STACK_LINE(949)
				::zpp_nape::geom::ZPP_PartitionVertex _g2 = this->vertices->prev = null();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(949)
				this->vertices->next = _g2;
				HX_STACK_LINE(950)
				{
					HX_STACK_LINE(951)
					::zpp_nape::geom::ZPP_PartitionVertex o = this->vertices;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(960)
					{
						HX_STACK_LINE(960)
						o->helper = null();
						HX_STACK_LINE(960)
						Dynamic();
					}
					HX_STACK_LINE(961)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(962)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(967)
				this->vertices = null();
				HX_STACK_LINE(968)
				_g3 = retnodes;
			}
			HX_STACK_LINE(915)
			this->vertices = _g3;
		}
		HX_STACK_LINE(972)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(973)
		{
			HX_STACK_LINE(974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = ret->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(975)
			while((true)){
				HX_STACK_LINE(975)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(975)
					break;
				}
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_PartitionedPoly p = cx_ite->elt;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(978)
					if ((p->remove_collinear_vertices())){
						HX_STACK_LINE(979)
						ret->erase(pre);
						HX_STACK_LINE(980)
						continue;
					}
					HX_STACK_LINE(982)
					pre = cx_ite;
				}
				HX_STACK_LINE(984)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(988)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract_partitions,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull_partitions( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","pull_partitions",0x0c45f394,"zpp_nape.geom.ZPP_PartitionedPoly.pull_partitions","zpp_nape/geom/PartitionedPoly.hx",990,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(991)
	::zpp_nape::geom::ZPP_PartitionedPoly poly;		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(993)
		if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool == null()))){
			HX_STACK_LINE(994)
			::zpp_nape::geom::ZPP_PartitionedPoly _g = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(994)
			poly = _g;
		}
		else{
			HX_STACK_LINE(1000)
			poly = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(1001)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = poly->next;
			HX_STACK_LINE(1002)
			poly->next = null();
		}
		HX_STACK_LINE(1007)
		Dynamic();
	}
	HX_STACK_LINE(1009)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1010)
	while((true)){
		HX_STACK_LINE(1011)
		::zpp_nape::geom::ZPP_PartitionVertex _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1012)
			::zpp_nape::geom::ZPP_PartitionVertex obj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1012)
			{
				HX_STACK_LINE(1012)
				::zpp_nape::geom::ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1012)
				{
					HX_STACK_LINE(1012)
					if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
						HX_STACK_LINE(1012)
						::zpp_nape::geom::ZPP_PartitionVertex _g1 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1012)
						ret1 = _g1;
					}
					else{
						HX_STACK_LINE(1012)
						ret1 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(1012)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1012)
						ret1->next = null();
					}
					HX_STACK_LINE(1012)
					Dynamic();
				}
				HX_STACK_LINE(1012)
				{
					HX_STACK_LINE(1012)
					ret1->x = next->x;
					HX_STACK_LINE(1012)
					ret1->y = next->y;
					HX_STACK_LINE(1012)
					{
					}
				}
				HX_STACK_LINE(1012)
				ret1->forced = next->forced;
				HX_STACK_LINE(1012)
				obj = ret1;
			}
			HX_STACK_LINE(1013)
			if (((poly->vertices == null()))){
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_PartitionVertex _g2 = obj->next = obj;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_PartitionVertex _g3 = obj->prev = _g2;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1013)
				poly->vertices = _g3;
			}
			else{
				HX_STACK_LINE(1015)
				obj->prev = poly->vertices;
				HX_STACK_LINE(1016)
				obj->next = poly->vertices->next;
				HX_STACK_LINE(1017)
				poly->vertices->next->prev = obj;
				HX_STACK_LINE(1018)
				poly->vertices->next = obj;
			}
			HX_STACK_LINE(1020)
			_g4 = obj;
		}
		HX_STACK_LINE(1011)
		poly->vertices = _g4;
		HX_STACK_LINE(1022)
		poly->vertices->forced = next->forced;
		HX_STACK_LINE(1023)
		if ((!(((next->diagonals->head == null()))))){
			HX_STACK_LINE(1024)
			::zpp_nape::geom::ZPP_PartitionVertex diag;		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1024)
			{
				HX_STACK_LINE(1024)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_PartitionVertex ret1 = _this->head->elt;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1024)
				_this->pop();
				HX_STACK_LINE(1024)
				diag = ret1;
			}
			HX_STACK_LINE(1025)
			if (((diag == start))){
				HX_STACK_LINE(1025)
				break;
			}
			else{
				HX_STACK_LINE(1026)
				::zpp_nape::geom::ZPP_PartitionVertex _g5 = this->pull_partitions(next,ret);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1026)
				next = _g5;
			}
		}
		else{
			HX_STACK_LINE(1028)
			next = next->next;
		}
		HX_STACK_LINE(1010)
		if ((!(((next != start))))){
			HX_STACK_LINE(1010)
			break;
		}
	}
	HX_STACK_LINE(1085)
	Float _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1085)
	{
		HX_STACK_LINE(1110)
		Float area = 0.0;		HX_STACK_VAR(area,"area");
		HX_STACK_LINE(1111)
		{
			HX_STACK_LINE(1112)
			::zpp_nape::geom::ZPP_PartitionVertex F = poly->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1113)
			::zpp_nape::geom::ZPP_PartitionVertex L = poly->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1114)
			if (((F != null()))){
				HX_STACK_LINE(1115)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1116)
				while((true)){
					HX_STACK_LINE(1117)
					::zpp_nape::geom::ZPP_PartitionVertex v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1120)
					hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
					HX_STACK_LINE(1123)
					nite = nite->next;
					HX_STACK_LINE(1116)
					if ((!(((nite != L))))){
						HX_STACK_LINE(1116)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1128)
		_g6 = (area * 0.5);
	}
	HX_STACK_LINE(1085)
	if (((_g6 != (int)0))){
		HX_STACK_LINE(1129)
		ret->add(poly);
	}
	HX_STACK_LINE(1130)
	return next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull_partitions,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::extract( ::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","extract",0xa144e712,"zpp_nape.geom.ZPP_PartitionedPoly.extract","zpp_nape/geom/PartitionedPoly.hx",1138,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(1139)
	if (((ret == null()))){
		HX_STACK_LINE(1139)
		::zpp_nape::util::ZNPList_ZPP_GeomVert _g = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1139)
		ret = _g;
	}
	HX_STACK_LINE(1140)
	if (((this->vertices != null()))){
		HX_STACK_LINE(1141)
		{
			HX_STACK_LINE(1142)
			::zpp_nape::geom::ZPP_PartitionVertex F = this->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1143)
			::zpp_nape::geom::ZPP_PartitionVertex L = this->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1144)
			if (((F != null()))){
				HX_STACK_LINE(1145)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1146)
				while((true)){
					HX_STACK_LINE(1147)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1149)
					c->sort();
					HX_STACK_LINE(1151)
					nite = nite->next;
					HX_STACK_LINE(1146)
					if ((!(((nite != L))))){
						HX_STACK_LINE(1146)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1156)
		this->pull(this->vertices,ret);
		HX_STACK_LINE(1158)
		while((true)){
			HX_STACK_LINE(1158)
			if ((!((!(((this->vertices == null()))))))){
				HX_STACK_LINE(1158)
				break;
			}
			HX_STACK_LINE(1167)
			::zpp_nape::geom::ZPP_PartitionVertex _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1167)
			if (((bool((this->vertices != null())) && bool((this->vertices->prev == this->vertices))))){
				HX_STACK_LINE(1168)
				::zpp_nape::geom::ZPP_PartitionVertex _g1 = this->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1168)
				this->vertices->next = _g1;
				HX_STACK_LINE(1169)
				{
					HX_STACK_LINE(1170)
					::zpp_nape::geom::ZPP_PartitionVertex o = this->vertices;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1179)
					{
						HX_STACK_LINE(1179)
						o->helper = null();
						HX_STACK_LINE(1179)
						Dynamic();
					}
					HX_STACK_LINE(1180)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1186)
				_g3 = this->vertices = null();
			}
			else{
				HX_STACK_LINE(1189)
				::zpp_nape::geom::ZPP_PartitionVertex retnodes = this->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(1190)
				this->vertices->prev->next = this->vertices->next;
				HX_STACK_LINE(1191)
				this->vertices->next->prev = this->vertices->prev;
				HX_STACK_LINE(1192)
				::zpp_nape::geom::ZPP_PartitionVertex _g2 = this->vertices->prev = null();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1192)
				this->vertices->next = _g2;
				HX_STACK_LINE(1193)
				{
					HX_STACK_LINE(1194)
					::zpp_nape::geom::ZPP_PartitionVertex o = this->vertices;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1203)
					{
						HX_STACK_LINE(1203)
						o->helper = null();
						HX_STACK_LINE(1203)
						Dynamic();
					}
					HX_STACK_LINE(1204)
					o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(1205)
					::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1210)
				this->vertices = null();
				HX_STACK_LINE(1211)
				_g3 = retnodes;
			}
			HX_STACK_LINE(1158)
			this->vertices = _g3;
		}
	}
	HX_STACK_LINE(1216)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","pull",0x4158fd54,"zpp_nape.geom.ZPP_PartitionedPoly.pull","zpp_nape/geom/PartitionedPoly.hx",1218,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(1219)
	::zpp_nape::geom::ZPP_GeomVert poly = null();		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(1220)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1221)
	while((true)){
		HX_STACK_LINE(1222)
		::zpp_nape::geom::ZPP_GeomVert _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1222)
		{
			HX_STACK_LINE(1223)
			::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1223)
			{
				HX_STACK_LINE(1223)
				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1223)
				{
					HX_STACK_LINE(1223)
					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(1223)
						::zpp_nape::geom::ZPP_GeomVert _g = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1223)
						ret1 = _g;
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
					ret1->x = next->x;
					HX_STACK_LINE(1223)
					ret1->y = next->y;
					HX_STACK_LINE(1223)
					{
					}
				}
				HX_STACK_LINE(1223)
				obj = ret1;
			}
			HX_STACK_LINE(1224)
			if (((poly == null()))){
				HX_STACK_LINE(1224)
				::zpp_nape::geom::ZPP_GeomVert _g1 = obj->next = obj;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1224)
				::zpp_nape::geom::ZPP_GeomVert _g2 = obj->prev = _g1;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1224)
				poly = _g2;
			}
			else{
				HX_STACK_LINE(1226)
				obj->prev = poly;
				HX_STACK_LINE(1227)
				obj->next = poly->next;
				HX_STACK_LINE(1228)
				poly->next->prev = obj;
				HX_STACK_LINE(1229)
				poly->next = obj;
			}
			HX_STACK_LINE(1231)
			_g3 = obj;
		}
		HX_STACK_LINE(1222)
		poly = _g3;
		HX_STACK_LINE(1233)
		poly->forced = next->forced;
		HX_STACK_LINE(1234)
		if ((!(((next->diagonals->head == null()))))){
			HX_STACK_LINE(1235)
			::zpp_nape::geom::ZPP_PartitionVertex diag;		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1235)
			{
				HX_STACK_LINE(1235)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1235)
				::zpp_nape::geom::ZPP_PartitionVertex ret1 = _this->head->elt;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1235)
				_this->pop();
				HX_STACK_LINE(1235)
				diag = ret1;
			}
			HX_STACK_LINE(1236)
			if (((diag == start))){
				HX_STACK_LINE(1237)
				break;
			}
			else{
				HX_STACK_LINE(1239)
				::zpp_nape::geom::ZPP_PartitionVertex _g4 = this->pull(next,ret);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1239)
				next = _g4;
			}
		}
		else{
			HX_STACK_LINE(1241)
			next = next->next;
		}
		HX_STACK_LINE(1221)
		if ((!(((next != start))))){
			HX_STACK_LINE(1221)
			break;
		}
	}
	HX_STACK_LINE(1298)
	Float area;		HX_STACK_VAR(area,"area");
	HX_STACK_LINE(1298)
	{
		HX_STACK_LINE(1323)
		Float area1 = 0.0;		HX_STACK_VAR(area1,"area1");
		HX_STACK_LINE(1324)
		{
			HX_STACK_LINE(1325)
			::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1326)
			::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1327)
			if (((F != null()))){
				HX_STACK_LINE(1328)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1329)
				while((true)){
					HX_STACK_LINE(1330)
					::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1333)
					hx::AddEq(area1,(v->x * ((v->next->y - v->prev->y))));
					HX_STACK_LINE(1336)
					nite = nite->next;
					HX_STACK_LINE(1329)
					if ((!(((nite != L))))){
						HX_STACK_LINE(1329)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1341)
		area = (area1 * 0.5);
	}
	HX_STACK_LINE(1343)
	if ((((area * area) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/geom/PartitionedPoly.hx",1344,0x0d312f3a)
				{
					HX_STACK_LINE(1345)
					::zpp_nape::geom::ZPP_GeomVert p = poly;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1346)
					bool skip = true;		HX_STACK_VAR(skip,"skip");
					HX_STACK_LINE(1347)
					while((true)){
						HX_STACK_LINE(1347)
						if ((!(((bool(skip) || bool((p != poly))))))){
							HX_STACK_LINE(1347)
							break;
						}
						HX_STACK_LINE(1348)
						skip = false;
						HX_STACK_LINE(1349)
						Float _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
							HX_STACK_LINE(1349)
							Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								dx = (p->x - p->next->x);
								HX_STACK_LINE(1349)
								dy = (p->y - p->next->y);
							}
							HX_STACK_LINE(1349)
							_g5 = ((dx * dx) + (dy * dy));
						}
						HX_STACK_LINE(1349)
						if (((_g5 < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
							HX_STACK_LINE(1350)
							if (((p == poly))){
								HX_STACK_LINE(1351)
								poly = p->next;
								HX_STACK_LINE(1352)
								skip = true;
							}
							HX_STACK_LINE(1354)
							if ((p->forced)){
								HX_STACK_LINE(1354)
								p->next->forced = true;
							}
							HX_STACK_LINE(1364)
							::zpp_nape::geom::ZPP_GeomVert _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1364)
							if (((bool((p != null())) && bool((p->prev == p))))){
								HX_STACK_LINE(1365)
								::zpp_nape::geom::ZPP_GeomVert _g6 = p->prev = null();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(1365)
								p->next = _g6;
								HX_STACK_LINE(1367)
								_g8 = p = null();
							}
							else{
								HX_STACK_LINE(1370)
								::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
								HX_STACK_LINE(1371)
								p->prev->next = p->next;
								HX_STACK_LINE(1372)
								p->next->prev = p->prev;
								HX_STACK_LINE(1373)
								::zpp_nape::geom::ZPP_GeomVert _g7 = p->prev = null();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1373)
								p->next = _g7;
								HX_STACK_LINE(1375)
								p = null();
								HX_STACK_LINE(1376)
								_g8 = retnodes;
							}
							HX_STACK_LINE(1355)
							p = _g8;
							HX_STACK_LINE(1379)
							if (((p == null()))){
								HX_STACK_LINE(1380)
								poly = null();
								HX_STACK_LINE(1381)
								break;
							}
						}
						else{
							HX_STACK_LINE(1384)
							p = p->next;
						}
					}
					HX_STACK_LINE(1386)
					if (((poly != null()))){
						HX_STACK_LINE(1387)
						bool removed;		HX_STACK_VAR(removed,"removed");
						HX_STACK_LINE(1388)
						while((true)){
							HX_STACK_LINE(1389)
							removed = false;
							HX_STACK_LINE(1390)
							p = poly;
							HX_STACK_LINE(1391)
							skip = true;
							HX_STACK_LINE(1392)
							while((true)){
								HX_STACK_LINE(1392)
								if ((!(((bool(skip) || bool((p != poly))))))){
									HX_STACK_LINE(1392)
									break;
								}
								HX_STACK_LINE(1393)
								skip = false;
								HX_STACK_LINE(1394)
								::zpp_nape::geom::ZPP_GeomVert pre = p->prev;		HX_STACK_VAR(pre,"pre");
								HX_STACK_LINE(1395)
								Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
								HX_STACK_LINE(1396)
								Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
								HX_STACK_LINE(1397)
								{
									HX_STACK_LINE(1398)
									ux = (p->x - pre->x);
									HX_STACK_LINE(1399)
									uy = (p->y - pre->y);
								}
								HX_STACK_LINE(1401)
								Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1402)
								Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									vx = (p->next->x - p->x);
									HX_STACK_LINE(1405)
									vy = (p->next->y - p->y);
								}
								HX_STACK_LINE(1407)
								Float crs = ((vy * ux) - (vx * uy));		HX_STACK_VAR(crs,"crs");
								HX_STACK_LINE(1408)
								if ((((crs * crs) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
									HX_STACK_LINE(1409)
									p = p->next;
								}
								else{
									HX_STACK_LINE(1412)
									if (((p == poly))){
										HX_STACK_LINE(1413)
										poly = p->next;
										HX_STACK_LINE(1414)
										skip = true;
									}
									HX_STACK_LINE(1425)
									::zpp_nape::geom::ZPP_GeomVert _g11;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1425)
									if (((bool((p != null())) && bool((p->prev == p))))){
										HX_STACK_LINE(1426)
										::zpp_nape::geom::ZPP_GeomVert _g9 = p->prev = null();		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(1426)
										p->next = _g9;
										HX_STACK_LINE(1428)
										_g11 = p = null();
									}
									else{
										HX_STACK_LINE(1431)
										::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(1432)
										p->prev->next = p->next;
										HX_STACK_LINE(1433)
										p->next->prev = p->prev;
										HX_STACK_LINE(1434)
										::zpp_nape::geom::ZPP_GeomVert _g10 = p->prev = null();		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(1434)
										p->next = _g10;
										HX_STACK_LINE(1436)
										p = null();
										HX_STACK_LINE(1437)
										_g11 = retnodes;
									}
									HX_STACK_LINE(1416)
									p = _g11;
									HX_STACK_LINE(1440)
									removed = true;
									HX_STACK_LINE(1441)
									if (((p == null()))){
										HX_STACK_LINE(1442)
										removed = false;
										HX_STACK_LINE(1443)
										poly = null();
										HX_STACK_LINE(1444)
										break;
									}
								}
							}
							HX_STACK_LINE(1388)
							if ((!(removed))){
								HX_STACK_LINE(1388)
								break;
							}
						}
					}
					HX_STACK_LINE(1451)
					return (poly == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(1344)
		if ((!(_Function_2_1::Block(poly)))){
			HX_STACK_LINE(1453)
			ret->add(poly);
		}
	}
	HX_STACK_LINE(1456)
	return next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::zpp_pool;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::sharedPPList;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::getSharedPP( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","getSharedPP",0xc23608ec,"zpp_nape.geom.ZPP_PartitionedPoly.getSharedPP","zpp_nape/geom/PartitionedPoly.hx",891,0x0d312f3a)
	HX_STACK_LINE(892)
	if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList == null()))){
		HX_STACK_LINE(892)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(892)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = _g;
	}
	HX_STACK_LINE(893)
	return ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getSharedPP,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::sharedGVList;

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::getShared( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","getShared",0x3228efec,"zpp_nape.geom.ZPP_PartitionedPoly.getShared","zpp_nape/geom/PartitionedPoly.hx",1134,0x0d312f3a)
	HX_STACK_LINE(1135)
	if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
		HX_STACK_LINE(1135)
		::zpp_nape::util::ZNPList_ZPP_GeomVert _g = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1135)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = _g;
	}
	HX_STACK_LINE(1136)
	return ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getShared,return )


ZPP_PartitionedPoly_obj::ZPP_PartitionedPoly_obj()
{
}

void ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_PartitionedPoly_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { return eq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"pull") ) { return pull_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShared") ) { return getShared_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSharedPP") ) { return getSharedPP_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { return sharedPPList; }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { return sharedGVList; }
		if (HX_FIELD_EQ(inName,"add_diagonal") ) { return add_diagonal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pull_partitions") ) { return pull_partitions_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"extract_partitions") ) { return extract_partitions_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"remove_collinear_vertices") ) { return remove_collinear_vertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { sharedPPList=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { sharedGVList=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_GeomVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("sharedPPList"),
	HX_CSTRING("getSharedPP"),
	HX_CSTRING("sharedGVList"),
	HX_CSTRING("getShared"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionedPoly_obj,vertices),HX_CSTRING("vertices")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionedPoly*/ ,(int)offsetof(ZPP_PartitionedPoly_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("vertices"),
	HX_CSTRING("eq"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("init"),
	HX_CSTRING("remove_collinear_vertices"),
	HX_CSTRING("add_diagonal"),
	HX_CSTRING("extract_partitions"),
	HX_CSTRING("pull_partitions"),
	HX_CSTRING("extract"),
	HX_CSTRING("pull"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

#endif

Class ZPP_PartitionedPoly_obj::__mClass;

void ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_PartitionedPoly"), hx::TCanCast< ZPP_PartitionedPoly_obj> ,sStaticFields,sMemberFields,
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

void ZPP_PartitionedPoly_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
