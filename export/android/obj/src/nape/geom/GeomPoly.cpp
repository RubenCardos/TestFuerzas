#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#include <zpp_nape/geom/ZPP_Convex.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Monotone
#include <zpp_nape/geom/ZPP_Monotone.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#include <zpp_nape/geom/ZPP_Simple.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Triangular
#include <zpp_nape/geom/ZPP_Triangular.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace geom{

Void GeomPoly_obj::__construct(Dynamic vertices)
{
HX_STACK_FRAME("nape.geom.GeomPoly","new",0xb4931c26,"nape.geom.GeomPoly.new","nape/geom/GeomPoly.hx",184,0x0b8969aa)
HX_STACK_THIS(this)
HX_STACK_ARG(vertices,"vertices")
{
	HX_STACK_LINE(221)
	this->zpp_inner = null();
	HX_STACK_LINE(188)
	this->zpp_pool = null();
	HX_STACK_LINE(955)
	::zpp_nape::geom::ZPP_GeomPoly _g = ::zpp_nape::geom::ZPP_GeomPoly_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(955)
	this->zpp_inner = _g;
	HX_STACK_LINE(956)
	if (((vertices != null()))){
		HX_STACK_LINE(958)
		if ((::Std_obj::is(vertices,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(959)
			Dynamic lv = vertices;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(960)
			{
				HX_STACK_LINE(960)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(960)
				while((true)){
					HX_STACK_LINE(960)
					if ((!(((_g1 < lv->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(960)
						break;
					}
					HX_STACK_LINE(960)
					Dynamic vite = lv->__GetItem(_g1);		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(960)
					++(_g1);
					HX_STACK_LINE(967)
					::nape::geom::Vec2 v = vite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(973)
					{
						HX_STACK_LINE(974)
						::zpp_nape::geom::ZPP_GeomVert _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(974)
						{
							HX_STACK_LINE(975)
							::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(975)
							{
								HX_STACK_LINE(975)
								Float x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(975)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(975)
											_this->_validate();
										}
									}
									HX_STACK_LINE(975)
									x = v->zpp_inner->x;
								}
								HX_STACK_LINE(975)
								Float y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(975)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(975)
											_this->_validate();
										}
									}
									HX_STACK_LINE(975)
									y = v->zpp_inner->y;
								}
								HX_STACK_LINE(975)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_GeomVert _g11 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(975)
										ret = _g11;
									}
									else{
										HX_STACK_LINE(975)
										ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(975)
										ret->next = null();
									}
									HX_STACK_LINE(975)
									ret->forced = false;
								}
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									ret->x = x;
									HX_STACK_LINE(975)
									ret->y = y;
									HX_STACK_LINE(975)
									{
									}
								}
								HX_STACK_LINE(975)
								obj = ret;
							}
							HX_STACK_LINE(976)
							if (((this->zpp_inner->vertices == null()))){
								HX_STACK_LINE(976)
								::zpp_nape::geom::ZPP_GeomVert _g2 = obj->next = obj;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(976)
								::zpp_nape::geom::ZPP_GeomVert _g3 = obj->prev = _g2;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(976)
								this->zpp_inner->vertices = _g3;
							}
							else{
								HX_STACK_LINE(978)
								obj->prev = this->zpp_inner->vertices;
								HX_STACK_LINE(979)
								obj->next = this->zpp_inner->vertices->next;
								HX_STACK_LINE(980)
								this->zpp_inner->vertices->next->prev = obj;
								HX_STACK_LINE(981)
								this->zpp_inner->vertices->next = obj;
							}
							HX_STACK_LINE(983)
							_g4 = obj;
						}
						HX_STACK_LINE(974)
						this->zpp_inner->vertices = _g4;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1016)
			if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1017)
				::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1018)
				{
					HX_STACK_LINE(1018)
					::nape::geom::Vec2Iterator _g1 = lv->iterator();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1018)
					while((true)){
						struct _Function_6_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g1){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1018,0x0b8969aa)
								{
									HX_STACK_LINE(1018)
									_g1->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(1018)
									int length = _g1->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1018)
									_g1->zpp_critical = true;
									struct _Function_7_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g1){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1018,0x0b8969aa)
											{
												HX_STACK_LINE(1018)
												{
													HX_STACK_LINE(1018)
													_g1->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(1018)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g1;
													HX_STACK_LINE(1018)
													_g1->zpp_inner = null();
												}
												HX_STACK_LINE(1018)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(1018)
									return (  (((_g1->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g1)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1018)
						if ((!(_Function_6_1::Block(_g1)))){
							HX_STACK_LINE(1018)
							break;
						}
						HX_STACK_LINE(1018)
						::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							_g1->zpp_critical = false;
							HX_STACK_LINE(1018)
							int _g5 = (_g1->zpp_i)++;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1018)
							v = _g1->zpp_inner->at(_g5);
						}
						HX_STACK_LINE(1027)
						{
							HX_STACK_LINE(1028)
							::zpp_nape::geom::ZPP_GeomVert _g9;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1028)
							{
								HX_STACK_LINE(1029)
								::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1029)
								{
									HX_STACK_LINE(1029)
									Float x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1029)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1029)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1029)
										x = v->zpp_inner->x;
									}
									HX_STACK_LINE(1029)
									Float y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1029)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1029)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1029)
										y = v->zpp_inner->y;
									}
									HX_STACK_LINE(1029)
									::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_GeomVert _g6 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(1029)
											ret = _g6;
										}
										else{
											HX_STACK_LINE(1029)
											ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
											HX_STACK_LINE(1029)
											ret->next = null();
										}
										HX_STACK_LINE(1029)
										ret->forced = false;
									}
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										ret->x = x;
										HX_STACK_LINE(1029)
										ret->y = y;
										HX_STACK_LINE(1029)
										{
										}
									}
									HX_STACK_LINE(1029)
									obj = ret;
								}
								HX_STACK_LINE(1030)
								if (((this->zpp_inner->vertices == null()))){
									HX_STACK_LINE(1030)
									::zpp_nape::geom::ZPP_GeomVert _g7 = obj->next = obj;		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(1030)
									::zpp_nape::geom::ZPP_GeomVert _g8 = obj->prev = _g7;		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(1030)
									this->zpp_inner->vertices = _g8;
								}
								else{
									HX_STACK_LINE(1032)
									obj->prev = this->zpp_inner->vertices;
									HX_STACK_LINE(1033)
									obj->next = this->zpp_inner->vertices->next;
									HX_STACK_LINE(1034)
									this->zpp_inner->vertices->next->prev = obj;
									HX_STACK_LINE(1035)
									this->zpp_inner->vertices->next = obj;
								}
								HX_STACK_LINE(1037)
								_g9 = obj;
							}
							HX_STACK_LINE(1028)
							this->zpp_inner->vertices = _g9;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1042)
				if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::GeomPoly >()))){
					HX_STACK_LINE(1043)
					::nape::geom::GeomPoly lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1049)
					::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
					HX_STACK_LINE(1050)
					if (((verts != null()))){
						HX_STACK_LINE(1051)
						::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(1052)
						while((true)){
							HX_STACK_LINE(1053)
							::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1053)
							{
								HX_STACK_LINE(1053)
								Float x = vite->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1053)
								Float y = vite->y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1053)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(1053)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1053)
								if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
									HX_STACK_LINE(1053)
									::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(1053)
									ret = _g10;
								}
								else{
									HX_STACK_LINE(1053)
									ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1053)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(1053)
									ret->zpp_pool = null();
								}
								HX_STACK_LINE(1053)
								if (((ret->zpp_inner == null()))){
									HX_STACK_LINE(1053)
									::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(1053)
									{
										HX_STACK_LINE(1053)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1053)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1053)
												::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(1053)
												ret1 = _g11;
											}
											else{
												HX_STACK_LINE(1053)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1053)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1053)
												ret1->next = null();
											}
											HX_STACK_LINE(1053)
											ret1->weak = false;
										}
										HX_STACK_LINE(1053)
										ret1->_immutable = immutable;
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											ret1->x = x;
											HX_STACK_LINE(1053)
											ret1->y = y;
											HX_STACK_LINE(1053)
											{
											}
										}
										HX_STACK_LINE(1053)
										_g12 = ret1;
									}
									HX_STACK_LINE(1053)
									ret->zpp_inner = _g12;
									HX_STACK_LINE(1053)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(1053)
									Float _g13;		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(1053)
									{
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1053)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1053)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1053)
										_g13 = ret->zpp_inner->x;
									}
									struct _Function_9_1{
										inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1053,0x0b8969aa)
											{
												HX_STACK_LINE(1053)
												Float _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(1053)
												{
													HX_STACK_LINE(1053)
													{
														HX_STACK_LINE(1053)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1053)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1053)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1053)
													_g14 = ret->zpp_inner->y;
												}
												HX_STACK_LINE(1053)
												return (_g14 == y);
											}
											return null();
										}
									};
									HX_STACK_LINE(1053)
									if ((!(((  (((_g13 == x))) ? bool(_Function_9_1::Block(ret,y)) : bool(false) ))))){
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											ret->zpp_inner->x = x;
											HX_STACK_LINE(1053)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(1053)
											{
											}
										}
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1053)
											if (((_this->_invalidate != null()))){
												HX_STACK_LINE(1053)
												_this->_invalidate(_this);
											}
										}
									}
									HX_STACK_LINE(1053)
									ret;
								}
								HX_STACK_LINE(1053)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(1053)
								v = ret;
							}
							HX_STACK_LINE(1054)
							vite = vite->next;
							HX_STACK_LINE(1055)
							{
								HX_STACK_LINE(1056)
								::zpp_nape::geom::ZPP_GeomVert _g18;		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(1056)
								{
									HX_STACK_LINE(1057)
									::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1057)
									{
										HX_STACK_LINE(1057)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1057)
										{
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1057)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1057)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1057)
											x = v->zpp_inner->x;
										}
										HX_STACK_LINE(1057)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1057)
										{
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1057)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1057)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1057)
											y = v->zpp_inner->y;
										}
										HX_STACK_LINE(1057)
										::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1057)
										{
											HX_STACK_LINE(1057)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(1057)
												::zpp_nape::geom::ZPP_GeomVert _g15 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(1057)
												ret = _g15;
											}
											else{
												HX_STACK_LINE(1057)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(1057)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1057)
												ret->next = null();
											}
											HX_STACK_LINE(1057)
											ret->forced = false;
										}
										HX_STACK_LINE(1057)
										{
											HX_STACK_LINE(1057)
											ret->x = x;
											HX_STACK_LINE(1057)
											ret->y = y;
											HX_STACK_LINE(1057)
											{
											}
										}
										HX_STACK_LINE(1057)
										obj = ret;
									}
									HX_STACK_LINE(1058)
									if (((this->zpp_inner->vertices == null()))){
										HX_STACK_LINE(1058)
										::zpp_nape::geom::ZPP_GeomVert _g16 = obj->next = obj;		HX_STACK_VAR(_g16,"_g16");
										HX_STACK_LINE(1058)
										::zpp_nape::geom::ZPP_GeomVert _g17 = obj->prev = _g16;		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(1058)
										this->zpp_inner->vertices = _g17;
									}
									else{
										HX_STACK_LINE(1060)
										obj->prev = this->zpp_inner->vertices;
										HX_STACK_LINE(1061)
										obj->next = this->zpp_inner->vertices->next;
										HX_STACK_LINE(1062)
										this->zpp_inner->vertices->next->prev = obj;
										HX_STACK_LINE(1063)
										this->zpp_inner->vertices->next = obj;
									}
									HX_STACK_LINE(1065)
									_g18 = obj;
								}
								HX_STACK_LINE(1056)
								this->zpp_inner->vertices = _g18;
							}
							HX_STACK_LINE(1068)
							{
								HX_STACK_LINE(1068)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1068)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1068)
								v->zpp_inner = null();
								HX_STACK_LINE(1068)
								{
									HX_STACK_LINE(1068)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1068)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1068)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1068)
								{
									HX_STACK_LINE(1068)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1068)
									{
										HX_STACK_LINE(1068)
										if (((o->outer != null()))){
											HX_STACK_LINE(1068)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1068)
											o->outer = null();
										}
										HX_STACK_LINE(1068)
										o->_isimmutable = null();
										HX_STACK_LINE(1068)
										o->_validate = null();
										HX_STACK_LINE(1068)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1068)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1068)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1052)
							if ((!(((vite != verts))))){
								HX_STACK_LINE(1052)
								break;
							}
						}
					}
				}
				else{
				}
			}
		}
		HX_STACK_LINE(1079)
		this->skipForward((int)1);
		HX_STACK_LINE(1081)
		if ((::Std_obj::is(vertices,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1082)
			Array< ::Dynamic > lv = vertices;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1083)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1084)
			while((true)){
				HX_STACK_LINE(1084)
				if ((!(((i < lv->length))))){
					HX_STACK_LINE(1084)
					break;
				}
				HX_STACK_LINE(1085)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1089,0x0b8969aa)
						{
							HX_STACK_LINE(1090)
							{
								HX_STACK_LINE(1090)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1090)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1090)
								cur->zpp_inner = null();
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1090)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1090)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1090)
									{
										HX_STACK_LINE(1090)
										if (((o->outer != null()))){
											HX_STACK_LINE(1090)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1090)
											o->outer = null();
										}
										HX_STACK_LINE(1090)
										o->_isimmutable = null();
										HX_STACK_LINE(1090)
										o->_validate = null();
										HX_STACK_LINE(1090)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1090)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1091)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1086)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_4_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1097)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1098)
					continue;
				}
				HX_STACK_LINE(1100)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1128)
			if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1129)
				::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1130)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(1130)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1131)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1132)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1133)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1134)
				while((true)){
					HX_STACK_LINE(1134)
					if ((!(((cur != null()))))){
						HX_STACK_LINE(1134)
						break;
					}
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1136)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1139)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 _g19 = ins->erase(pre);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(1139)
						cur = _g19;
						HX_STACK_LINE(1140)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1144)
							{
								HX_STACK_LINE(1144)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1144)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1144)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1144)
								_this->zpp_inner = null();
								HX_STACK_LINE(1144)
								{
									HX_STACK_LINE(1144)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1144)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1144)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1144)
								{
									HX_STACK_LINE(1144)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1144)
									{
										HX_STACK_LINE(1144)
										if (((o->outer != null()))){
											HX_STACK_LINE(1144)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1144)
											o->outer = null();
										}
										HX_STACK_LINE(1144)
										o->_isimmutable = null();
										HX_STACK_LINE(1144)
										o->_validate = null();
										HX_STACK_LINE(1144)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1144)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1144)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1145)
							true;
						}
						else{
							HX_STACK_LINE(1148)
							false;
						}
					}
					else{
						HX_STACK_LINE(1153)
						pre = cur;
						HX_STACK_LINE(1154)
						cur = cur->next;
					}
				}
			}
		}
	}
}
;
	return null();
}

//GeomPoly_obj::~GeomPoly_obj() { }

Dynamic GeomPoly_obj::__CreateEmpty() { return  new GeomPoly_obj; }
hx::ObjectPtr< GeomPoly_obj > GeomPoly_obj::__new(Dynamic vertices)
{  hx::ObjectPtr< GeomPoly_obj > result = new GeomPoly_obj();
	result->__construct(vertices);
	return result;}

Dynamic GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomPoly_obj > result = new GeomPoly_obj();
	result->__construct(inArgs[0]);
	return result;}

bool GeomPoly_obj::empty( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","empty",0x2b5883d3,"nape.geom.GeomPoly.empty","nape/geom/GeomPoly.hx",235,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return (this->zpp_inner->vertices == null());
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,empty,return )

int GeomPoly_obj::size( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","size",0x4f76a23b,"nape.geom.GeomPoly.size","nape/geom/GeomPoly.hx",249,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(252)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(253)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(254)
		if (((F != null()))){
			HX_STACK_LINE(255)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(257)
				::zpp_nape::geom::ZPP_GeomVert i = nite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(259)
				(ret)++;
				HX_STACK_LINE(261)
				nite = nite->next;
				HX_STACK_LINE(256)
				if ((!(((nite != L))))){
					HX_STACK_LINE(256)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(266)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,size,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::iterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","iterator",0x09b49068,"nape.geom.GeomPoly.iterator","nape/geom/GeomPoly.hx",282,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	return ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(this->zpp_inner->vertices,true);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,iterator,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::forwardIterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","forwardIterator",0x9c8a9199,"nape.geom.GeomPoly.forwardIterator","nape/geom/GeomPoly.hx",298,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	return ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(this->zpp_inner->vertices,true);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,forwardIterator,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::backwardsIterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","backwardsIterator",0x93245b84,"nape.geom.GeomPoly.backwardsIterator","nape/geom/GeomPoly.hx",314,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	return ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(this->zpp_inner->vertices,false);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,backwardsIterator,return )

::nape::geom::Vec2 GeomPoly_obj::current( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","current",0x1a7b42ff,"nape.geom.GeomPoly.current","nape/geom/GeomPoly.hx",345,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	::zpp_nape::geom::ZPP_GeomVert _this = this->zpp_inner->vertices;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(345)
	if (((_this->wrap == null()))){
		HX_STACK_LINE(345)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			Float x = _this->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(345)
			Float y = _this->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(345)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(345)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(345)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(345)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(345)
				ret = _g;
			}
			else{
				HX_STACK_LINE(345)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(345)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(345)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(345)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(345)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(345)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(345)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(345)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(345)
							ret1->next = null();
						}
						HX_STACK_LINE(345)
						ret1->weak = false;
					}
					HX_STACK_LINE(345)
					ret1->_immutable = immutable;
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						ret1->x = x;
						HX_STACK_LINE(345)
						ret1->y = y;
						HX_STACK_LINE(345)
						{
						}
					}
					HX_STACK_LINE(345)
					_g2 = ret1;
				}
				HX_STACK_LINE(345)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(345)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(345)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(345)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(345)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",345,0x0b8969aa)
						{
							HX_STACK_LINE(345)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								{
									HX_STACK_LINE(345)
									::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(345)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(345)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(345)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(345)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(345)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(345)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(345)
						{
						}
					}
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(345)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(345)
				ret;
			}
			HX_STACK_LINE(345)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(345)
			_g5 = ret;
		}
		HX_STACK_LINE(345)
		_this->wrap = _g5;
		HX_STACK_LINE(345)
		_this->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(345)
		_this->wrap->zpp_inner->_invalidate = _this->modwrap_dyn();
		HX_STACK_LINE(345)
		_this->wrap->zpp_inner->_validate = _this->getwrap_dyn();
	}
	HX_STACK_LINE(345)
	return _this->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,current,return )

::nape::geom::GeomPoly GeomPoly_obj::push( ::nape::geom::Vec2 vertex){
	HX_STACK_FRAME("nape.geom.GeomPoly","push",0x4d841354,"nape.geom.GeomPoly.push","nape/geom/GeomPoly.hx",374,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertex,"vertex")
	HX_STACK_LINE(390)
	::zpp_nape::geom::ZPP_GeomVert _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(391)
		::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				x = vertex->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				y = vertex->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_GeomVert _g = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(391)
					ret = _g;
				}
				else{
					HX_STACK_LINE(391)
					ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(391)
					ret->next = null();
				}
				HX_STACK_LINE(391)
				ret->forced = false;
			}
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				ret->x = x;
				HX_STACK_LINE(391)
				ret->y = y;
				HX_STACK_LINE(391)
				{
				}
			}
			HX_STACK_LINE(391)
			obj = ret;
		}
		HX_STACK_LINE(392)
		if (((this->zpp_inner->vertices == null()))){
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_GeomVert _g1 = obj->next = obj;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_GeomVert _g2 = obj->prev = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(392)
			this->zpp_inner->vertices = _g2;
		}
		else{
			HX_STACK_LINE(394)
			obj->prev = this->zpp_inner->vertices;
			HX_STACK_LINE(395)
			obj->next = this->zpp_inner->vertices->next;
			HX_STACK_LINE(396)
			this->zpp_inner->vertices->next->prev = obj;
			HX_STACK_LINE(397)
			this->zpp_inner->vertices->next = obj;
		}
		HX_STACK_LINE(399)
		_g3 = obj;
	}
	HX_STACK_LINE(390)
	this->zpp_inner->vertices = _g3;
	HX_STACK_LINE(401)
	if ((vertex->zpp_inner->weak)){
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			::zpp_nape::geom::ZPP_Vec2 inner = vertex->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(405)
			vertex->zpp_inner->outer = null();
			HX_STACK_LINE(405)
			vertex->zpp_inner = null();
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(405)
				::nape::geom::Vec2 o = vertex;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(405)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(405)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(405)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					if (((o->outer != null()))){
						HX_STACK_LINE(405)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(405)
						o->outer = null();
					}
					HX_STACK_LINE(405)
					o->_isimmutable = null();
					HX_STACK_LINE(405)
					o->_validate = null();
					HX_STACK_LINE(405)
					o->_invalidate = null();
				}
				HX_STACK_LINE(405)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(405)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(406)
		true;
	}
	else{
		HX_STACK_LINE(409)
		false;
	}
	HX_STACK_LINE(412)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,push,return )

::nape::geom::GeomPoly GeomPoly_obj::pop( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","pop",0xb494a957,"nape.geom.GeomPoly.pop","nape/geom/GeomPoly.hx",436,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(447)
	::zpp_nape::geom::ZPP_GeomVert retv = this->zpp_inner->vertices;		HX_STACK_VAR(retv,"retv");
	HX_STACK_LINE(457)
	::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(457)
	if (((bool((this->zpp_inner->vertices != null())) && bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices))))){
		HX_STACK_LINE(458)
		::zpp_nape::geom::ZPP_GeomVert _g = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		this->zpp_inner->vertices->next = _g;
		HX_STACK_LINE(460)
		_g2 = null();
	}
	else{
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_GeomVert retnodes = this->zpp_inner->vertices->prev;		HX_STACK_VAR(retnodes,"retnodes");
		HX_STACK_LINE(464)
		this->zpp_inner->vertices->prev->next = this->zpp_inner->vertices->next;
		HX_STACK_LINE(465)
		this->zpp_inner->vertices->next->prev = this->zpp_inner->vertices->prev;
		HX_STACK_LINE(466)
		::zpp_nape::geom::ZPP_GeomVert _g1 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(466)
		this->zpp_inner->vertices->next = _g1;
		HX_STACK_LINE(468)
		this->zpp_inner->vertices = null();
		HX_STACK_LINE(469)
		_g2 = retnodes;
	}
	HX_STACK_LINE(448)
	this->zpp_inner->vertices = _g2;
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(473)
		::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			if (((o->wrap != null()))){
				HX_STACK_LINE(482)
				o->wrap->zpp_inner->_inuse = false;
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(482)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(482)
					_this->zpp_inner = null();
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(482)
						o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(482)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
					}
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(482)
						{
							HX_STACK_LINE(482)
							if (((o1->outer != null()))){
								HX_STACK_LINE(482)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(482)
								o1->outer = null();
							}
							HX_STACK_LINE(482)
							o1->_isimmutable = null();
							HX_STACK_LINE(482)
							o1->_validate = null();
							HX_STACK_LINE(482)
							o1->_invalidate = null();
						}
						HX_STACK_LINE(482)
						o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
					}
				}
				HX_STACK_LINE(482)
				o->wrap = null();
			}
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_GeomVert _g3 = o->next = null();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(482)
			o->prev = _g3;
		}
		HX_STACK_LINE(483)
		o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(484)
		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,pop,return )

::nape::geom::GeomPoly GeomPoly_obj::unshift( ::nape::geom::Vec2 vertex){
	HX_STACK_FRAME("nape.geom.GeomPoly","unshift",0xc74b8a4f,"nape.geom.GeomPoly.unshift","nape/geom/GeomPoly.hx",518,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertex,"vertex")
	HX_STACK_LINE(529)
	::zpp_nape::geom::ZPP_GeomVert _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(530)
		::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(530)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(530)
						_this->_validate();
					}
				}
				HX_STACK_LINE(530)
				x = vertex->zpp_inner->x;
			}
			HX_STACK_LINE(530)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(530)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(530)
						_this->_validate();
					}
				}
				HX_STACK_LINE(530)
				y = vertex->zpp_inner->y;
			}
			HX_STACK_LINE(530)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_GeomVert _g = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(530)
					ret = _g;
				}
				else{
					HX_STACK_LINE(530)
					ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(530)
					ret->next = null();
				}
				HX_STACK_LINE(530)
				ret->forced = false;
			}
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				ret->x = x;
				HX_STACK_LINE(530)
				ret->y = y;
				HX_STACK_LINE(530)
				{
				}
			}
			HX_STACK_LINE(530)
			obj = ret;
		}
		HX_STACK_LINE(531)
		if (((this->zpp_inner->vertices == null()))){
			HX_STACK_LINE(531)
			::zpp_nape::geom::ZPP_GeomVert _g1 = obj->next = obj;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(531)
			::zpp_nape::geom::ZPP_GeomVert _g2 = obj->prev = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(531)
			this->zpp_inner->vertices = _g2;
		}
		else{
			HX_STACK_LINE(533)
			obj->next = this->zpp_inner->vertices;
			HX_STACK_LINE(534)
			obj->prev = this->zpp_inner->vertices->prev;
			HX_STACK_LINE(535)
			this->zpp_inner->vertices->prev->next = obj;
			HX_STACK_LINE(536)
			this->zpp_inner->vertices->prev = obj;
		}
		HX_STACK_LINE(538)
		_g3 = obj;
	}
	HX_STACK_LINE(529)
	this->zpp_inner->vertices = _g3;
	HX_STACK_LINE(540)
	if ((vertex->zpp_inner->weak)){
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			::zpp_nape::geom::ZPP_Vec2 inner = vertex->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(544)
			vertex->zpp_inner->outer = null();
			HX_STACK_LINE(544)
			vertex->zpp_inner = null();
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::nape::geom::Vec2 o = vertex;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(544)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(544)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					if (((o->outer != null()))){
						HX_STACK_LINE(544)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(544)
						o->outer = null();
					}
					HX_STACK_LINE(544)
					o->_isimmutable = null();
					HX_STACK_LINE(544)
					o->_validate = null();
					HX_STACK_LINE(544)
					o->_invalidate = null();
				}
				HX_STACK_LINE(544)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(544)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(545)
		true;
	}
	else{
		HX_STACK_LINE(548)
		false;
	}
	HX_STACK_LINE(551)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,unshift,return )

::nape::geom::GeomPoly GeomPoly_obj::shift( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","shift",0x37a135c8,"nape.geom.GeomPoly.shift","nape/geom/GeomPoly.hx",576,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	::zpp_nape::geom::ZPP_GeomVert retv = this->zpp_inner->vertices;		HX_STACK_VAR(retv,"retv");
	HX_STACK_LINE(597)
	::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(597)
	if (((bool((this->zpp_inner->vertices != null())) && bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices))))){
		HX_STACK_LINE(598)
		::zpp_nape::geom::ZPP_GeomVert _g = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(598)
		this->zpp_inner->vertices->next = _g;
		HX_STACK_LINE(600)
		_g2 = this->zpp_inner->vertices = null();
	}
	else{
		HX_STACK_LINE(603)
		::zpp_nape::geom::ZPP_GeomVert retnodes = this->zpp_inner->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
		HX_STACK_LINE(604)
		this->zpp_inner->vertices->prev->next = this->zpp_inner->vertices->next;
		HX_STACK_LINE(605)
		this->zpp_inner->vertices->next->prev = this->zpp_inner->vertices->prev;
		HX_STACK_LINE(606)
		::zpp_nape::geom::ZPP_GeomVert _g1 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(606)
		this->zpp_inner->vertices->next = _g1;
		HX_STACK_LINE(608)
		this->zpp_inner->vertices = null();
		HX_STACK_LINE(609)
		_g2 = retnodes;
	}
	HX_STACK_LINE(588)
	this->zpp_inner->vertices = _g2;
	HX_STACK_LINE(612)
	{
		HX_STACK_LINE(613)
		::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(622)
		{
			HX_STACK_LINE(622)
			if (((o->wrap != null()))){
				HX_STACK_LINE(622)
				o->wrap->zpp_inner->_inuse = false;
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(622)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(622)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(622)
					_this->zpp_inner = null();
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(622)
						o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
					}
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(622)
						{
							HX_STACK_LINE(622)
							if (((o1->outer != null()))){
								HX_STACK_LINE(622)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(622)
								o1->outer = null();
							}
							HX_STACK_LINE(622)
							o1->_isimmutable = null();
							HX_STACK_LINE(622)
							o1->_validate = null();
							HX_STACK_LINE(622)
							o1->_invalidate = null();
						}
						HX_STACK_LINE(622)
						o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
					}
				}
				HX_STACK_LINE(622)
				o->wrap = null();
			}
			HX_STACK_LINE(622)
			::zpp_nape::geom::ZPP_GeomVert _g3 = o->next = null();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(622)
			o->prev = _g3;
		}
		HX_STACK_LINE(623)
		o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(624)
		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(629)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,shift,return )

::nape::geom::GeomPoly GeomPoly_obj::skipForward( int times){
	HX_STACK_FRAME("nape.geom.GeomPoly","skipForward",0xecf5d2cc,"nape.geom.GeomPoly.skipForward","nape/geom/GeomPoly.hx",656,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(662)
	if ((!(((this->zpp_inner->vertices == null()))))){
		HX_STACK_LINE(663)
		if (((times > (int)0))){
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				int _g = (times)--;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(664)
				if ((!(((_g > (int)0))))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				this->zpp_inner->vertices = this->zpp_inner->vertices->next;
			}
		}
		else{
			HX_STACK_LINE(666)
			if (((times < (int)0))){
				HX_STACK_LINE(667)
				while((true)){
					HX_STACK_LINE(667)
					int _g1 = (times)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(667)
					if ((!(((_g1 < (int)0))))){
						HX_STACK_LINE(667)
						break;
					}
					HX_STACK_LINE(667)
					this->zpp_inner->vertices = this->zpp_inner->vertices->prev;
				}
			}
		}
	}
	HX_STACK_LINE(670)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,skipForward,return )

::nape::geom::GeomPoly GeomPoly_obj::skipBackwards( int times){
	HX_STACK_FRAME("nape.geom.GeomPoly","skipBackwards",0x6b360bf7,"nape.geom.GeomPoly.skipBackwards","nape/geom/GeomPoly.hx",704,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(704)
	return this->skipForward(-(times));
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,skipBackwards,return )

::nape::geom::GeomPoly GeomPoly_obj::erase( int count){
	HX_STACK_FRAME("nape.geom.GeomPoly","erase",0x2e9b322c,"nape.geom.GeomPoly.erase","nape/geom/GeomPoly.hx",737,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(743)
	while((true)){
		HX_STACK_LINE(743)
		if ((!(((bool((count != (int)0)) && bool(!(((this->zpp_inner->vertices == null()))))))))){
			HX_STACK_LINE(743)
			break;
		}
		HX_STACK_LINE(744)
		::zpp_nape::geom::ZPP_GeomVert retv = this->zpp_inner->vertices;		HX_STACK_VAR(retv,"retv");
		HX_STACK_LINE(745)
		if (((count > (int)0))){
			HX_STACK_LINE(755)
			::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(755)
			if (((bool((this->zpp_inner->vertices != null())) && bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices))))){
				HX_STACK_LINE(756)
				::zpp_nape::geom::ZPP_GeomVert _g = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(756)
				this->zpp_inner->vertices->next = _g;
				HX_STACK_LINE(758)
				_g2 = this->zpp_inner->vertices = null();
			}
			else{
				HX_STACK_LINE(761)
				::zpp_nape::geom::ZPP_GeomVert retnodes = this->zpp_inner->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(762)
				this->zpp_inner->vertices->prev->next = this->zpp_inner->vertices->next;
				HX_STACK_LINE(763)
				this->zpp_inner->vertices->next->prev = this->zpp_inner->vertices->prev;
				HX_STACK_LINE(764)
				::zpp_nape::geom::ZPP_GeomVert _g1 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(764)
				this->zpp_inner->vertices->next = _g1;
				HX_STACK_LINE(766)
				this->zpp_inner->vertices = null();
				HX_STACK_LINE(767)
				_g2 = retnodes;
			}
			HX_STACK_LINE(746)
			this->zpp_inner->vertices = _g2;
			HX_STACK_LINE(770)
			(count)--;
		}
		else{
			HX_STACK_LINE(772)
			if (((count < (int)0))){
				HX_STACK_LINE(782)
				::zpp_nape::geom::ZPP_GeomVert _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(782)
				if (((bool((this->zpp_inner->vertices != null())) && bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices))))){
					HX_STACK_LINE(783)
					::zpp_nape::geom::ZPP_GeomVert _g3 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(783)
					this->zpp_inner->vertices->next = _g3;
					HX_STACK_LINE(785)
					_g5 = null();
				}
				else{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_GeomVert retnodes = this->zpp_inner->vertices->prev;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(789)
					this->zpp_inner->vertices->prev->next = this->zpp_inner->vertices->next;
					HX_STACK_LINE(790)
					this->zpp_inner->vertices->next->prev = this->zpp_inner->vertices->prev;
					HX_STACK_LINE(791)
					::zpp_nape::geom::ZPP_GeomVert _g4 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(791)
					this->zpp_inner->vertices->next = _g4;
					HX_STACK_LINE(793)
					this->zpp_inner->vertices = null();
					HX_STACK_LINE(794)
					_g5 = retnodes;
				}
				HX_STACK_LINE(773)
				this->zpp_inner->vertices = _g5;
				HX_STACK_LINE(797)
				(count)++;
			}
		}
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(800)
			::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				if (((o->wrap != null()))){
					HX_STACK_LINE(809)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(809)
					{
						HX_STACK_LINE(809)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(809)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(809)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(809)
						_this->zpp_inner = null();
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(809)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(809)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(809)
							{
								HX_STACK_LINE(809)
								if (((o1->outer != null()))){
									HX_STACK_LINE(809)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(809)
									o1->outer = null();
								}
								HX_STACK_LINE(809)
								o1->_isimmutable = null();
								HX_STACK_LINE(809)
								o1->_validate = null();
								HX_STACK_LINE(809)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(809)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(809)
					o->wrap = null();
				}
				HX_STACK_LINE(809)
				::zpp_nape::geom::ZPP_GeomVert _g6 = o->next = null();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(809)
				o->prev = _g6;
			}
			HX_STACK_LINE(810)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(811)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(817)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,erase,return )

::nape::geom::GeomPoly GeomPoly_obj::clear( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","clear",0x03d9bad3,"nape.geom.GeomPoly.clear","nape/geom/GeomPoly.hx",827,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(834)
	while((true)){
		HX_STACK_LINE(834)
		if ((!((!(((this->zpp_inner->vertices == null()))))))){
			HX_STACK_LINE(834)
			break;
		}
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_GeomVert tmp = this->zpp_inner->vertices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(845)
		::zpp_nape::geom::ZPP_GeomVert _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(845)
		if (((bool((this->zpp_inner->vertices != null())) && bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices))))){
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_GeomVert _g = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(846)
			this->zpp_inner->vertices->next = _g;
			HX_STACK_LINE(848)
			_g2 = this->zpp_inner->vertices = null();
		}
		else{
			HX_STACK_LINE(851)
			::zpp_nape::geom::ZPP_GeomVert retnodes = this->zpp_inner->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(852)
			this->zpp_inner->vertices->prev->next = this->zpp_inner->vertices->next;
			HX_STACK_LINE(853)
			this->zpp_inner->vertices->next->prev = this->zpp_inner->vertices->prev;
			HX_STACK_LINE(854)
			::zpp_nape::geom::ZPP_GeomVert _g1 = this->zpp_inner->vertices->prev = null();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(854)
			this->zpp_inner->vertices->next = _g1;
			HX_STACK_LINE(856)
			this->zpp_inner->vertices = null();
			HX_STACK_LINE(857)
			_g2 = retnodes;
		}
		HX_STACK_LINE(836)
		this->zpp_inner->vertices = _g2;
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(861)
			::zpp_nape::geom::ZPP_GeomVert o = tmp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(870)
			{
				HX_STACK_LINE(870)
				if (((o->wrap != null()))){
					HX_STACK_LINE(870)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(870)
					{
						HX_STACK_LINE(870)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(870)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(870)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(870)
						_this->zpp_inner = null();
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(870)
							o1->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(870)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(870)
							{
								HX_STACK_LINE(870)
								if (((o1->outer != null()))){
									HX_STACK_LINE(870)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(870)
									o1->outer = null();
								}
								HX_STACK_LINE(870)
								o1->_isimmutable = null();
								HX_STACK_LINE(870)
								o1->_validate = null();
								HX_STACK_LINE(870)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(870)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(870)
					o->wrap = null();
				}
				HX_STACK_LINE(870)
				::zpp_nape::geom::ZPP_GeomVert _g3 = o->next = null();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(870)
				o->prev = _g3;
			}
			HX_STACK_LINE(871)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(872)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(879)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,clear,return )

::nape::geom::GeomPoly GeomPoly_obj::copy( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","copy",0x44e7bd2f,"nape.geom.GeomPoly.copy","nape/geom/GeomPoly.hx",902,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(908)
	::nape::geom::GeomPoly ret = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(909)
	{
		HX_STACK_LINE(910)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(911)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(912)
		if (((F != null()))){
			HX_STACK_LINE(913)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(914)
			while((true)){
				HX_STACK_LINE(915)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(917)
				{
					HX_STACK_LINE(918)
					::zpp_nape::geom::ZPP_GeomVert _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(918)
					{
						HX_STACK_LINE(919)
						::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(919)
						{
							HX_STACK_LINE(919)
							::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(919)
							{
								HX_STACK_LINE(919)
								if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(919)
									::zpp_nape::geom::ZPP_GeomVert _g = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(919)
									ret1 = _g;
								}
								else{
									HX_STACK_LINE(919)
									ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(919)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(919)
									ret1->next = null();
								}
								HX_STACK_LINE(919)
								ret1->forced = false;
							}
							HX_STACK_LINE(919)
							{
								HX_STACK_LINE(919)
								ret1->x = v->x;
								HX_STACK_LINE(919)
								ret1->y = v->y;
								HX_STACK_LINE(919)
								{
								}
							}
							HX_STACK_LINE(919)
							obj = ret1;
						}
						HX_STACK_LINE(920)
						if (((ret->zpp_inner->vertices == null()))){
							HX_STACK_LINE(920)
							::zpp_nape::geom::ZPP_GeomVert _g1 = obj->next = obj;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(920)
							::zpp_nape::geom::ZPP_GeomVert _g2 = obj->prev = _g1;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(920)
							ret->zpp_inner->vertices = _g2;
						}
						else{
							HX_STACK_LINE(922)
							obj->prev = ret->zpp_inner->vertices;
							HX_STACK_LINE(923)
							obj->next = ret->zpp_inner->vertices->next;
							HX_STACK_LINE(924)
							ret->zpp_inner->vertices->next->prev = obj;
							HX_STACK_LINE(925)
							ret->zpp_inner->vertices->next = obj;
						}
						HX_STACK_LINE(927)
						_g3 = obj;
					}
					HX_STACK_LINE(918)
					ret->zpp_inner->vertices = _g3;
				}
				HX_STACK_LINE(931)
				nite = nite->next;
				HX_STACK_LINE(914)
				if ((!(((nite != L))))){
					HX_STACK_LINE(914)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(936)
	return ret->skipForward((int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,copy,return )

Void GeomPoly_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.GeomPoly","dispose",0x09e42765,"nape.geom.GeomPoly.dispose","nape/geom/GeomPoly.hx",1416,0x0b8969aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1422)
		this->clear();
		HX_STACK_LINE(1423)
		{
			HX_STACK_LINE(1424)
			::nape::geom::GeomPoly o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1440)
			o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;
			HX_STACK_LINE(1441)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,dispose,(void))

::String GeomPoly_obj::toString( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","toString",0xae891726,"nape.geom.GeomPoly.toString","nape/geom/GeomPoly.hx",1454,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1455)
	::String ret = HX_CSTRING("GeomPoly[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1457)
	{
		HX_STACK_LINE(1458)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(1459)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(1460)
		if (((F != null()))){
			HX_STACK_LINE(1461)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(1462)
			while((true)){
				HX_STACK_LINE(1463)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1465)
				{
					HX_STACK_LINE(1466)
					if (((v != this->zpp_inner->vertices))){
						HX_STACK_LINE(1466)
						hx::AddEq(ret,HX_CSTRING(","));
					}
					HX_STACK_LINE(1467)
					hx::AddEq(ret,((((HX_CSTRING("{") + v->x) + HX_CSTRING(",")) + v->y) + HX_CSTRING("}")));
				}
				HX_STACK_LINE(1470)
				nite = nite->next;
				HX_STACK_LINE(1462)
				if ((!(((nite != L))))){
					HX_STACK_LINE(1462)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1476)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,toString,return )

Float GeomPoly_obj::area( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","area",0x43978d07,"nape.geom.GeomPoly.area","nape/geom/GeomPoly.hx",1493,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1493)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1495)
		return 0.0;
	}
	else{
		HX_STACK_LINE(1496)
		Float ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1496)
		{
			HX_STACK_LINE(1521)
			Float area = 0.0;		HX_STACK_VAR(area,"area");
			HX_STACK_LINE(1522)
			{
				HX_STACK_LINE(1523)
				::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(1524)
				::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(1525)
				if (((F != null()))){
					HX_STACK_LINE(1526)
					::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(1527)
					while((true)){
						HX_STACK_LINE(1528)
						::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1531)
						hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
						HX_STACK_LINE(1534)
						nite = nite->next;
						HX_STACK_LINE(1527)
						if ((!(((nite != L))))){
							HX_STACK_LINE(1527)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(1539)
			ret = (area * 0.5);
		}
		HX_STACK_LINE(1541)
		if (((ret < (int)0))){
			HX_STACK_LINE(1541)
			return -(ret);
		}
		else{
			HX_STACK_LINE(1541)
			return ret;
		}
	}
	HX_STACK_LINE(1493)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,area,return )

::nape::geom::Winding GeomPoly_obj::winding( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","winding",0x3707efe0,"nape.geom.GeomPoly.winding","nape/geom/GeomPoly.hx",1571,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1571)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1574)
		if (((::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED == null()))){
			HX_STACK_LINE(1574)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1574)
			::nape::geom::Winding _g = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1574)
			::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = _g;
			HX_STACK_LINE(1574)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1574)
		return ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
	}
	else{
		HX_STACK_LINE(1577)
		Float area;		HX_STACK_VAR(area,"area");
		HX_STACK_LINE(1577)
		{
			HX_STACK_LINE(1602)
			Float area1 = 0.0;		HX_STACK_VAR(area1,"area1");
			HX_STACK_LINE(1603)
			{
				HX_STACK_LINE(1604)
				::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(1606)
				if (((F != null()))){
					HX_STACK_LINE(1607)
					::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(1608)
					while((true)){
						HX_STACK_LINE(1609)
						::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1612)
						hx::AddEq(area1,(v->x * ((v->next->y - v->prev->y))));
						HX_STACK_LINE(1615)
						nite = nite->next;
						HX_STACK_LINE(1608)
						if ((!(((nite != L))))){
							HX_STACK_LINE(1608)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(1620)
			area = (area1 * 0.5);
		}
		HX_STACK_LINE(1622)
		if (((area > (int)0))){
			HX_STACK_LINE(1622)
			if (((::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE == null()))){
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1622)
				::nape::geom::Winding _g1 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = _g1;
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1622)
			return ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
		}
		else{
			HX_STACK_LINE(1622)
			if (((area == (int)0))){
				HX_STACK_LINE(1622)
				if (((::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED == null()))){
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1622)
					::nape::geom::Winding _g2 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = _g2;
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1622)
				return ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
			}
			else{
				HX_STACK_LINE(1622)
				if (((::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE == null()))){
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1622)
					::nape::geom::Winding _g3 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = _g3;
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1622)
				return ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;
			}
		}
	}
	HX_STACK_LINE(1571)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,winding,return )

bool GeomPoly_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_FRAME("nape.geom.GeomPoly","contains",0xa295a099,"nape.geom.GeomPoly.contains","nape/geom/GeomPoly.hx",1641,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(1657)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1657)
	{
		HX_STACK_LINE(1658)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1658)
		{
			HX_STACK_LINE(1658)
			{
				HX_STACK_LINE(1658)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1658)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1658)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1658)
			x = point->zpp_inner->x;
		}
		HX_STACK_LINE(1659)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1659)
		{
			HX_STACK_LINE(1659)
			{
				HX_STACK_LINE(1659)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1659)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(1659)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1659)
			y = point->zpp_inner->y;
		}
		HX_STACK_LINE(1660)
		bool ret1 = false;		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(1661)
		{
			HX_STACK_LINE(1662)
			::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1663)
			::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1664)
			if (((F != null()))){
				HX_STACK_LINE(1665)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1666)
				while((true)){
					HX_STACK_LINE(1667)
					::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1669)
					{
						HX_STACK_LINE(1670)
						::zpp_nape::geom::ZPP_GeomVert q = p->prev;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(1671)
						if (((bool(((bool((bool((p->y < y)) && bool((q->y >= y)))) || bool((bool((q->y < y)) && bool((p->y >= y))))))) && bool(((bool((p->x <= x)) || bool((q->x <= x)))))))){
							HX_STACK_LINE(1672)
							if ((((p->x + ((Float(((y - p->y))) / Float(((q->y - p->y)))) * ((q->x - p->x)))) < x))){
								HX_STACK_LINE(1673)
								ret1 = !(ret1);
							}
						}
					}
					HX_STACK_LINE(1678)
					nite = nite->next;
					HX_STACK_LINE(1666)
					if ((!(((nite != L))))){
						HX_STACK_LINE(1666)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1683)
		ret = ret1;
	}
	HX_STACK_LINE(1685)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(1689)
		{
			HX_STACK_LINE(1689)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1689)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(1689)
			point->zpp_inner = null();
			HX_STACK_LINE(1689)
			{
				HX_STACK_LINE(1689)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1689)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1689)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1689)
			{
				HX_STACK_LINE(1689)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1689)
				{
					HX_STACK_LINE(1689)
					if (((o->outer != null()))){
						HX_STACK_LINE(1689)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1689)
						o->outer = null();
					}
					HX_STACK_LINE(1689)
					o->_isimmutable = null();
					HX_STACK_LINE(1689)
					o->_validate = null();
					HX_STACK_LINE(1689)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1689)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1689)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1690)
		true;
	}
	else{
		HX_STACK_LINE(1693)
		false;
	}
	HX_STACK_LINE(1696)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,contains,return )

bool GeomPoly_obj::isClockwise( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isClockwise",0x86d9b66e,"nape.geom.GeomPoly.isClockwise","nape/geom/GeomPoly.hx",1707,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1708)
	::nape::geom::Winding _g = this->winding();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1708)
	::nape::geom::Winding _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1708)
	{
		HX_STACK_LINE(1708)
		if (((::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE == null()))){
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1708)
			::nape::geom::Winding _g1 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = _g1;
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1708)
		_g2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
	}
	HX_STACK_LINE(1708)
	return (_g == _g2);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isClockwise,return )

bool GeomPoly_obj::isConvex( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isConvex",0x9662596b,"nape.geom.GeomPoly.isConvex","nape/geom/GeomPoly.hx",1741,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1741)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1743)
		return true;
	}
	else{
		HX_STACK_LINE(1768)
		bool neg = false;		HX_STACK_VAR(neg,"neg");
		HX_STACK_LINE(1769)
		bool pos = false;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1770)
		bool ret = true;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1771)
		{
			HX_STACK_LINE(1772)
			::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1773)
			::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1774)
			if (((F != null()))){
				HX_STACK_LINE(1775)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1776)
				while((true)){
					HX_STACK_LINE(1777)
					::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1779)
					{
						HX_STACK_LINE(1780)
						::zpp_nape::geom::ZPP_GeomVert u = v->prev;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(1781)
						::zpp_nape::geom::ZPP_GeomVert w = v->next;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(1782)
						Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1783)
						Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1784)
						{
							HX_STACK_LINE(1785)
							ax = (w->x - v->x);
							HX_STACK_LINE(1786)
							ay = (w->y - v->y);
						}
						HX_STACK_LINE(1788)
						Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
						HX_STACK_LINE(1789)
						Float by = 0.0;		HX_STACK_VAR(by,"by");
						HX_STACK_LINE(1790)
						{
							HX_STACK_LINE(1791)
							bx = (v->x - u->x);
							HX_STACK_LINE(1792)
							by = (v->y - u->y);
						}
						HX_STACK_LINE(1794)
						Float dot = ((by * ax) - (bx * ay));		HX_STACK_VAR(dot,"dot");
						HX_STACK_LINE(1795)
						if (((dot > 0.0))){
							HX_STACK_LINE(1796)
							pos = true;
						}
						else{
							HX_STACK_LINE(1798)
							if (((dot < 0.0))){
								HX_STACK_LINE(1799)
								neg = true;
							}
						}
						HX_STACK_LINE(1801)
						if (((bool(pos) && bool(neg)))){
							HX_STACK_LINE(1802)
							ret = false;
							HX_STACK_LINE(1803)
							break;
						}
					}
					HX_STACK_LINE(1807)
					nite = nite->next;
					HX_STACK_LINE(1776)
					if ((!(((nite != L))))){
						HX_STACK_LINE(1776)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1812)
		return ret;
	}
	HX_STACK_LINE(1741)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isConvex,return )

bool GeomPoly_obj::isSimple( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isSimple",0x8702e636,"nape.geom.GeomPoly.isSimple","nape/geom/GeomPoly.hx",1850,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1850)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1852)
		return true;
	}
	else{
		HX_STACK_LINE(1852)
		return ::zpp_nape::geom::ZPP_Simple_obj::isSimple(this->zpp_inner->vertices);
	}
	HX_STACK_LINE(1850)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isSimple,return )

bool GeomPoly_obj::isMonotone( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isMonotone",0xf4c9ef19,"nape.geom.GeomPoly.isMonotone","nape/geom/GeomPoly.hx",1881,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1881)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1883)
		return true;
	}
	else{
		HX_STACK_LINE(1883)
		return ::zpp_nape::geom::ZPP_Monotone_obj::isMonotone(this->zpp_inner->vertices);
	}
	HX_STACK_LINE(1881)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isMonotone,return )

bool GeomPoly_obj::isDegenerate( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isDegenerate",0xd8aed3ba,"nape.geom.GeomPoly.isDegenerate","nape/geom/GeomPoly.hx",1901,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1901)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1903)
		return true;
	}
	else{
		HX_STACK_LINE(1903)
		Float _g = this->area();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1903)
		return (_g < ::nape::Config_obj::epsilon);
	}
	HX_STACK_LINE(1901)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isDegenerate,return )

::nape::geom::GeomPoly GeomPoly_obj::simplify( Float epsilon){
	HX_STACK_FRAME("nape.geom.GeomPoly","simplify",0x8f8b9d83,"nape.geom.GeomPoly.simplify","nape/geom/GeomPoly.hx",1942,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(epsilon,"epsilon")
	HX_STACK_LINE(1942)
	if (((bool((bool((this->zpp_inner->vertices == null())) || bool((this->zpp_inner->vertices->next == null())))) || bool((this->zpp_inner->vertices->prev == this->zpp_inner->vertices->next))))){
		HX_STACK_LINE(1945)
		return this->copy();
	}
	else{
		HX_STACK_LINE(1948)
		::zpp_nape::geom::ZPP_GeomVert x = ::zpp_nape::geom::ZPP_Simplify_obj::simplify(this->zpp_inner->vertices,epsilon);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1949)
		::nape::geom::GeomPoly ret = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1950)
		ret->zpp_inner->vertices = x;
		HX_STACK_LINE(1951)
		return ret;
	}
	HX_STACK_LINE(1942)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,simplify,return )

::nape::geom::GeomPolyList GeomPoly_obj::simpleDecomposition( ::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("nape.geom.GeomPoly","simpleDecomposition",0xc25bdc3d,"nape.geom.GeomPoly.simpleDecomposition","nape/geom/GeomPoly.hx",1973,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(1986)
	::zpp_nape::util::ZNPList_ZPP_GeomVert _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1986)
	{
		HX_STACK_LINE(1986)
		if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
			HX_STACK_LINE(1986)
			::zpp_nape::util::ZNPList_ZPP_GeomVert _g = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1986)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = _g;
		}
		HX_STACK_LINE(1986)
		_g1 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
	}
	HX_STACK_LINE(1986)
	::zpp_nape::util::ZNPList_ZPP_GeomVert MPs = ::zpp_nape::geom::ZPP_Simple_obj::decompose(this->zpp_inner->vertices,_g1);		HX_STACK_VAR(MPs,"MPs");
	HX_STACK_LINE(1987)
	::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1987)
	if (((output == null()))){
		HX_STACK_LINE(1987)
		ret = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(1987)
		ret = output;
	}
	HX_STACK_LINE(1988)
	while((true)){
		HX_STACK_LINE(1988)
		if ((!((!(((MPs->head == null()))))))){
			HX_STACK_LINE(1988)
			break;
		}
		HX_STACK_LINE(1989)
		::zpp_nape::geom::ZPP_GeomVert MP = MPs->pop_unsafe();		HX_STACK_VAR(MP,"MP");
		HX_STACK_LINE(1990)
		::nape::geom::GeomPoly x = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1991)
		x->zpp_inner->vertices = MP;
		HX_STACK_LINE(1992)
		if ((ret->zpp_inner->reverse_flag)){
			HX_STACK_LINE(1992)
			ret->push(x);
		}
		else{
			HX_STACK_LINE(1992)
			ret->unshift(x);
		}
	}
	HX_STACK_LINE(1994)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,simpleDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::monotoneDecomposition( ::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("nape.geom.GeomPoly","monotoneDecomposition",0xee33e7fa,"nape.geom.GeomPoly.monotoneDecomposition","nape/geom/GeomPoly.hx",2019,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_PartitionedPoly _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2032)
	{
		HX_STACK_LINE(2032)
		if (((::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly == null()))){
			HX_STACK_LINE(2032)
			::zpp_nape::geom::ZPP_PartitionedPoly _g = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2032)
			::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = _g;
		}
		HX_STACK_LINE(2032)
		_g1 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
	}
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_PartitionedPoly poly = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(this->zpp_inner->vertices,_g1);		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(2033)
	::zpp_nape::util::ZNPList_ZPP_GeomVert _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(2033)
	{
		HX_STACK_LINE(2033)
		if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
			HX_STACK_LINE(2033)
			::zpp_nape::util::ZNPList_ZPP_GeomVert _g2 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2033)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = _g2;
		}
		HX_STACK_LINE(2033)
		_g3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
	}
	HX_STACK_LINE(2033)
	::zpp_nape::util::ZNPList_ZPP_GeomVert MPs = poly->extract(_g3);		HX_STACK_VAR(MPs,"MPs");
	HX_STACK_LINE(2034)
	::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2034)
	if (((output == null()))){
		HX_STACK_LINE(2034)
		ret = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2034)
		ret = output;
	}
	HX_STACK_LINE(2035)
	while((true)){
		HX_STACK_LINE(2035)
		if ((!((!(((MPs->head == null()))))))){
			HX_STACK_LINE(2035)
			break;
		}
		HX_STACK_LINE(2036)
		::zpp_nape::geom::ZPP_GeomVert MP = MPs->pop_unsafe();		HX_STACK_VAR(MP,"MP");
		HX_STACK_LINE(2037)
		::nape::geom::GeomPoly x = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(2038)
		x->zpp_inner->vertices = MP;
		HX_STACK_LINE(2039)
		if ((ret->zpp_inner->reverse_flag)){
			HX_STACK_LINE(2039)
			ret->push(x);
		}
		else{
			HX_STACK_LINE(2039)
			ret->unshift(x);
		}
		HX_STACK_LINE(2040)
		{
		}
	}
	HX_STACK_LINE(2049)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,monotoneDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::convexDecomposition( hx::Null< bool >  __o_delaunay,::nape::geom::GeomPolyList output){
bool delaunay = __o_delaunay.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","convexDecomposition",0x6df2cbe8,"nape.geom.GeomPoly.convexDecomposition","nape/geom/GeomPoly.hx",2075,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delaunay,"delaunay")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_PartitionedPoly _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2088)
		{
			HX_STACK_LINE(2088)
			if (((::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly == null()))){
				HX_STACK_LINE(2088)
				::zpp_nape::geom::ZPP_PartitionedPoly _g = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2088)
				::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = _g;
			}
			HX_STACK_LINE(2088)
			_g1 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
		}
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_PartitionedPoly poly = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(this->zpp_inner->vertices,_g1);		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(2089)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2089)
		{
			HX_STACK_LINE(2089)
			if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList == null()))){
				HX_STACK_LINE(2089)
				::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g2 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2089)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = _g2;
			}
			HX_STACK_LINE(2089)
			_g3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
		}
		HX_STACK_LINE(2089)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly MPs = poly->extract_partitions(_g3);		HX_STACK_VAR(MPs,"MPs");
		HX_STACK_LINE(2090)
		::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2090)
		if (((output == null()))){
			HX_STACK_LINE(2090)
			ret = ::nape::geom::GeomPolyList_obj::__new();
		}
		else{
			HX_STACK_LINE(2090)
			ret = output;
		}
		HX_STACK_LINE(2091)
		while((true)){
			HX_STACK_LINE(2091)
			if ((!((!(((MPs->head == null()))))))){
				HX_STACK_LINE(2091)
				break;
			}
			HX_STACK_LINE(2092)
			::zpp_nape::geom::ZPP_PartitionedPoly MP = MPs->pop_unsafe();		HX_STACK_VAR(MP,"MP");
			HX_STACK_LINE(2093)
			::zpp_nape::geom::ZPP_Triangular_obj::triangulate(MP);
			HX_STACK_LINE(2094)
			if ((delaunay)){
				HX_STACK_LINE(2095)
				::zpp_nape::geom::ZPP_Triangular_obj::optimise(MP);
			}
			HX_STACK_LINE(2097)
			::zpp_nape::geom::ZPP_Convex_obj::optimise(MP);
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPList_ZPP_GeomVert _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2098)
			{
				HX_STACK_LINE(2098)
				if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
					HX_STACK_LINE(2098)
					::zpp_nape::util::ZNPList_ZPP_GeomVert _g4 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2098)
					::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = _g4;
				}
				HX_STACK_LINE(2098)
				_g5 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
			}
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPList_ZPP_GeomVert MQs = MP->extract(_g5);		HX_STACK_VAR(MQs,"MQs");
			HX_STACK_LINE(2099)
			{
				HX_STACK_LINE(2100)
				::zpp_nape::geom::ZPP_PartitionedPoly o = MP;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2110)
				o->next = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(2111)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2116)
			while((true)){
				HX_STACK_LINE(2116)
				if ((!((!(((MQs->head == null()))))))){
					HX_STACK_LINE(2116)
					break;
				}
				HX_STACK_LINE(2117)
				::zpp_nape::geom::ZPP_GeomVert MQ = MQs->pop_unsafe();		HX_STACK_VAR(MQ,"MQ");
				HX_STACK_LINE(2118)
				::nape::geom::GeomPoly x = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2119)
				x->zpp_inner->vertices = MQ;
				HX_STACK_LINE(2120)
				if ((ret->zpp_inner->reverse_flag)){
					HX_STACK_LINE(2120)
					ret->push(x);
				}
				else{
					HX_STACK_LINE(2120)
					ret->unshift(x);
				}
				HX_STACK_LINE(2121)
				{
				}
			}
		}
		HX_STACK_LINE(2131)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeomPoly_obj,convexDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::triangularDecomposition( hx::Null< bool >  __o_delaunay,::nape::geom::GeomPolyList output){
bool delaunay = __o_delaunay.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","triangularDecomposition",0x1e7bbf38,"nape.geom.GeomPoly.triangularDecomposition","nape/geom/GeomPoly.hx",2154,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delaunay,"delaunay")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_PartitionedPoly _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2167)
		{
			HX_STACK_LINE(2167)
			if (((::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly == null()))){
				HX_STACK_LINE(2167)
				::zpp_nape::geom::ZPP_PartitionedPoly _g = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2167)
				::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = _g;
			}
			HX_STACK_LINE(2167)
			_g1 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
		}
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_PartitionedPoly poly = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(this->zpp_inner->vertices,_g1);		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(2168)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2168)
		{
			HX_STACK_LINE(2168)
			if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList == null()))){
				HX_STACK_LINE(2168)
				::zpp_nape::util::ZNPList_ZPP_PartitionedPoly _g2 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2168)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = _g2;
			}
			HX_STACK_LINE(2168)
			_g3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
		}
		HX_STACK_LINE(2168)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly MPs = poly->extract_partitions(_g3);		HX_STACK_VAR(MPs,"MPs");
		HX_STACK_LINE(2169)
		::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2169)
		if (((output == null()))){
			HX_STACK_LINE(2169)
			ret = ::nape::geom::GeomPolyList_obj::__new();
		}
		else{
			HX_STACK_LINE(2169)
			ret = output;
		}
		HX_STACK_LINE(2170)
		while((true)){
			HX_STACK_LINE(2170)
			if ((!((!(((MPs->head == null()))))))){
				HX_STACK_LINE(2170)
				break;
			}
			HX_STACK_LINE(2171)
			::zpp_nape::geom::ZPP_PartitionedPoly MP = MPs->pop_unsafe();		HX_STACK_VAR(MP,"MP");
			HX_STACK_LINE(2172)
			::zpp_nape::geom::ZPP_Triangular_obj::triangulate(MP);
			HX_STACK_LINE(2173)
			if ((delaunay)){
				HX_STACK_LINE(2174)
				::zpp_nape::geom::ZPP_Triangular_obj::optimise(MP);
			}
			HX_STACK_LINE(2176)
			::zpp_nape::util::ZNPList_ZPP_GeomVert _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2176)
			{
				HX_STACK_LINE(2176)
				if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
					HX_STACK_LINE(2176)
					::zpp_nape::util::ZNPList_ZPP_GeomVert _g4 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2176)
					::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = _g4;
				}
				HX_STACK_LINE(2176)
				_g5 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
			}
			HX_STACK_LINE(2176)
			::zpp_nape::util::ZNPList_ZPP_GeomVert MQs = MP->extract(_g5);		HX_STACK_VAR(MQs,"MQs");
			HX_STACK_LINE(2177)
			{
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_PartitionedPoly o = MP;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2188)
				o->next = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(2189)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2194)
			while((true)){
				HX_STACK_LINE(2194)
				if ((!((!(((MQs->head == null()))))))){
					HX_STACK_LINE(2194)
					break;
				}
				HX_STACK_LINE(2195)
				::zpp_nape::geom::ZPP_GeomVert MQ = MQs->pop_unsafe();		HX_STACK_VAR(MQ,"MQ");
				HX_STACK_LINE(2196)
				::nape::geom::GeomPoly x = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2197)
				x->zpp_inner->vertices = MQ;
				HX_STACK_LINE(2198)
				if ((ret->zpp_inner->reverse_flag)){
					HX_STACK_LINE(2198)
					ret->push(x);
				}
				else{
					HX_STACK_LINE(2198)
					ret->unshift(x);
				}
				HX_STACK_LINE(2199)
				{
				}
			}
		}
		HX_STACK_LINE(2209)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeomPoly_obj,triangularDecomposition,return )

::nape::geom::GeomPoly GeomPoly_obj::inflate( Float inflation){
	HX_STACK_FRAME("nape.geom.GeomPoly","inflate",0x5ab3434d,"nape.geom.GeomPoly.inflate","nape/geom/GeomPoly.hx",2227,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inflation,"inflation")
	HX_STACK_LINE(2233)
	::nape::geom::GeomPoly ret = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2234)
	::nape::geom::Winding _g = this->winding();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2234)
	::nape::geom::Winding _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(2234)
	{
		HX_STACK_LINE(2234)
		if (((::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE == null()))){
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(2234)
			::nape::geom::Winding _g1 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = _g1;
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(2234)
		_g2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
	}
	HX_STACK_LINE(2234)
	if (((_g == _g2))){
		HX_STACK_LINE(2234)
		inflation = -(inflation);
	}
	HX_STACK_LINE(2235)
	{
		HX_STACK_LINE(2236)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2237)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2238)
		if (((F != null()))){
			HX_STACK_LINE(2239)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2240)
			while((true)){
				HX_STACK_LINE(2241)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(2243)
				{
					HX_STACK_LINE(2244)
					::zpp_nape::geom::ZPP_GeomVert prev = p->prev;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(2245)
					::zpp_nape::geom::ZPP_GeomVert next = p->next;		HX_STACK_VAR(next,"next");
					HX_STACK_LINE(2246)
					Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(2247)
					Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
					HX_STACK_LINE(2248)
					Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(2249)
					Float by = 0.0;		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(2250)
					{
						HX_STACK_LINE(2251)
						ax = (p->x - prev->x);
						HX_STACK_LINE(2252)
						ay = (p->y - prev->y);
					}
					HX_STACK_LINE(2254)
					{
						HX_STACK_LINE(2255)
						bx = (next->x - p->x);
						HX_STACK_LINE(2256)
						by = (next->y - p->y);
					}
					HX_STACK_LINE(2258)
					Float apx = 0.0;		HX_STACK_VAR(apx,"apx");
					HX_STACK_LINE(2259)
					Float apy = 0.0;		HX_STACK_VAR(apy,"apy");
					HX_STACK_LINE(2260)
					Float bpx = 0.0;		HX_STACK_VAR(bpx,"bpx");
					HX_STACK_LINE(2261)
					Float bpy = 0.0;		HX_STACK_VAR(bpy,"bpy");
					HX_STACK_LINE(2262)
					{
						HX_STACK_LINE(2263)
						apx = ax;
						HX_STACK_LINE(2264)
						apy = ay;
						HX_STACK_LINE(2273)
						{
						}
					}
					HX_STACK_LINE(2282)
					{
						HX_STACK_LINE(2283)
						{
							HX_STACK_LINE(2284)
							Float d = ((apx * apx) + (apy * apy));		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(2293)
							Float imag;		HX_STACK_VAR(imag,"imag");
							HX_STACK_LINE(2293)
							{
								HX_STACK_LINE(2293)
								Float _g3 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(2293)
								imag = (Float(1.0) / Float(_g3));
							}
							HX_STACK_LINE(2294)
							{
								HX_STACK_LINE(2295)
								Float t = imag;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2304)
								hx::MultEq(apx,t);
								HX_STACK_LINE(2305)
								hx::MultEq(apy,t);
							}
						}
						HX_STACK_LINE(2308)
						{
							HX_STACK_LINE(2309)
							Float t = apx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2310)
							apx = -(apy);
							HX_STACK_LINE(2311)
							apy = t;
						}
					}
					HX_STACK_LINE(2314)
					{
						HX_STACK_LINE(2315)
						Float t = inflation;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2324)
						hx::MultEq(apx,t);
						HX_STACK_LINE(2325)
						hx::MultEq(apy,t);
					}
					HX_STACK_LINE(2327)
					{
						HX_STACK_LINE(2328)
						bpx = bx;
						HX_STACK_LINE(2329)
						bpy = by;
						HX_STACK_LINE(2338)
						{
						}
					}
					HX_STACK_LINE(2347)
					{
						HX_STACK_LINE(2348)
						{
							HX_STACK_LINE(2349)
							Float d = ((bpx * bpx) + (bpy * bpy));		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(2358)
							Float imag;		HX_STACK_VAR(imag,"imag");
							HX_STACK_LINE(2358)
							{
								HX_STACK_LINE(2358)
								Float _g4 = ::Math_obj::sqrt(d);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(2358)
								imag = (Float(1.0) / Float(_g4));
							}
							HX_STACK_LINE(2359)
							{
								HX_STACK_LINE(2360)
								Float t = imag;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2369)
								hx::MultEq(bpx,t);
								HX_STACK_LINE(2370)
								hx::MultEq(bpy,t);
							}
						}
						HX_STACK_LINE(2373)
						{
							HX_STACK_LINE(2374)
							Float t = bpx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2375)
							bpx = -(bpy);
							HX_STACK_LINE(2376)
							bpy = t;
						}
					}
					HX_STACK_LINE(2379)
					{
						HX_STACK_LINE(2380)
						Float t = inflation;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2389)
						hx::MultEq(bpx,t);
						HX_STACK_LINE(2390)
						hx::MultEq(bpy,t);
					}
					HX_STACK_LINE(2392)
					Float bapx = 0.0;		HX_STACK_VAR(bapx,"bapx");
					HX_STACK_LINE(2393)
					Float bapy = 0.0;		HX_STACK_VAR(bapy,"bapy");
					HX_STACK_LINE(2394)
					{
						HX_STACK_LINE(2395)
						bapx = (bpx - apx);
						HX_STACK_LINE(2396)
						bapy = (bpy - apy);
					}
					HX_STACK_LINE(2398)
					Float num = ((by * bapx) - (bx * bapy));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(2399)
					Float t;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2399)
					if (((num == (int)0))){
						HX_STACK_LINE(2399)
						t = (int)0;
					}
					else{
						HX_STACK_LINE(2399)
						t = (Float(num) / Float((((by * ax) - (bx * ay)))));
					}
					HX_STACK_LINE(2400)
					Float px = 0.0;		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(2401)
					Float py = 0.0;		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(2402)
					{
						HX_STACK_LINE(2403)
						px = (p->x + apx);
						HX_STACK_LINE(2404)
						py = (p->y + apy);
					}
					HX_STACK_LINE(2406)
					{
						HX_STACK_LINE(2407)
						Float t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2416)
						hx::AddEq(px,(ax * t1));
						HX_STACK_LINE(2417)
						hx::AddEq(py,(ay * t1));
					}
					HX_STACK_LINE(2419)
					::nape::geom::Vec2 _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(2419)
					{
						HX_STACK_LINE(2419)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(2419)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2419)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(2419)
							::nape::geom::Vec2 _g5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(2419)
							ret1 = _g5;
						}
						else{
							HX_STACK_LINE(2419)
							ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(2419)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(2419)
							ret1->zpp_pool = null();
						}
						HX_STACK_LINE(2419)
						if (((ret1->zpp_inner == null()))){
							HX_STACK_LINE(2419)
							::zpp_nape::geom::ZPP_Vec2 _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(2419)
								::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2 _g6 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(2419)
										ret2 = _g6;
									}
									else{
										HX_STACK_LINE(2419)
										ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
										HX_STACK_LINE(2419)
										ret2->next = null();
									}
									HX_STACK_LINE(2419)
									ret2->weak = false;
								}
								HX_STACK_LINE(2419)
								ret2->_immutable = immutable;
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									ret2->x = px;
									HX_STACK_LINE(2419)
									ret2->y = py;
									HX_STACK_LINE(2419)
									{
									}
								}
								HX_STACK_LINE(2419)
								_g7 = ret2;
							}
							HX_STACK_LINE(2419)
							ret1->zpp_inner = _g7;
							HX_STACK_LINE(2419)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(2419)
							Float _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2419)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2419)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2419)
								_g8 = ret1->zpp_inner->x;
							}
							struct _Function_7_1{
								inline static bool Block( ::nape::geom::Vec2 &ret1,Float &py){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",2419,0x0b8969aa)
									{
										HX_STACK_LINE(2419)
										Float _g9;		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(2419)
										{
											HX_STACK_LINE(2419)
											{
												HX_STACK_LINE(2419)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2419)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(2419)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2419)
											_g9 = ret1->zpp_inner->y;
										}
										HX_STACK_LINE(2419)
										return (_g9 == py);
									}
									return null();
								}
							};
							HX_STACK_LINE(2419)
							if ((!(((  (((_g8 == px))) ? bool(_Function_7_1::Block(ret1,py)) : bool(false) ))))){
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									ret1->zpp_inner->x = px;
									HX_STACK_LINE(2419)
									ret1->zpp_inner->y = py;
									HX_STACK_LINE(2419)
									{
									}
								}
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2419)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(2419)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(2419)
							ret1;
						}
						HX_STACK_LINE(2419)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(2419)
						_g10 = ret1;
					}
					HX_STACK_LINE(2419)
					ret->push(_g10);
				}
				HX_STACK_LINE(2422)
				nite = nite->next;
				HX_STACK_LINE(2240)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2240)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2427)
	return ret->skipForward((int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,inflate,return )

::nape::geom::GeomPolyList GeomPoly_obj::cut( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,hx::Null< bool >  __o_boundedStart,hx::Null< bool >  __o_boundedEnd,::nape::geom::GeomPolyList output){
bool boundedStart = __o_boundedStart.Default(false);
bool boundedEnd = __o_boundedEnd.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","cut",0xb48ad148,"nape.geom.GeomPoly.cut","nape/geom/GeomPoly.hx",2460,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(boundedStart,"boundedStart")
	HX_STACK_ARG(boundedEnd,"boundedEnd")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2484)
		::nape::geom::GeomPolyList ret = ::zpp_nape::geom::ZPP_Cutter_obj::run(this->zpp_inner->vertices,start,end,boundedStart,boundedEnd,output);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2485)
		if ((start->zpp_inner->weak)){
			HX_STACK_LINE(2489)
			{
				HX_STACK_LINE(2489)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2489)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(2489)
				start->zpp_inner = null();
				HX_STACK_LINE(2489)
				{
					HX_STACK_LINE(2489)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2489)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2489)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2489)
				{
					HX_STACK_LINE(2489)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2489)
						if (((o->outer != null()))){
							HX_STACK_LINE(2489)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2489)
							o->outer = null();
						}
						HX_STACK_LINE(2489)
						o->_isimmutable = null();
						HX_STACK_LINE(2489)
						o->_validate = null();
						HX_STACK_LINE(2489)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2489)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2489)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2490)
			true;
		}
		else{
			HX_STACK_LINE(2493)
			false;
		}
		HX_STACK_LINE(2496)
		if ((end->zpp_inner->weak)){
			HX_STACK_LINE(2500)
			{
				HX_STACK_LINE(2500)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2500)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(2500)
				end->zpp_inner = null();
				HX_STACK_LINE(2500)
				{
					HX_STACK_LINE(2500)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2500)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(2500)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2500)
				{
					HX_STACK_LINE(2500)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2500)
					{
						HX_STACK_LINE(2500)
						if (((o->outer != null()))){
							HX_STACK_LINE(2500)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2500)
							o->outer = null();
						}
						HX_STACK_LINE(2500)
						o->_isimmutable = null();
						HX_STACK_LINE(2500)
						o->_validate = null();
						HX_STACK_LINE(2500)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2500)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(2500)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2501)
			true;
		}
		else{
			HX_STACK_LINE(2504)
			false;
		}
		HX_STACK_LINE(2507)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(GeomPoly_obj,cut,return )

::nape::geom::GeomPoly GeomPoly_obj::transform( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.geom.GeomPoly","transform",0x267691b2,"nape.geom.GeomPoly.transform","nape/geom/GeomPoly.hx",2521,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(2532)
	{
		HX_STACK_LINE(2533)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2534)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2535)
		if (((F != null()))){
			HX_STACK_LINE(2536)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2537)
			while((true)){
				HX_STACK_LINE(2538)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2541)
				{
					HX_STACK_LINE(2542)
					Float t = (((matrix->zpp_inner->a * v->x) + (matrix->zpp_inner->b * v->y)) + matrix->zpp_inner->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2543)
					v->y = (((matrix->zpp_inner->c * v->x) + (matrix->zpp_inner->d * v->y)) + matrix->zpp_inner->ty);
					HX_STACK_LINE(2544)
					v->x = t;
				}
				HX_STACK_LINE(2548)
				nite = nite->next;
				HX_STACK_LINE(2537)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2537)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2553)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,transform,return )

::nape::geom::AABB GeomPoly_obj::bounds( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","bounds",0xb91f5a6f,"nape.geom.GeomPoly.bounds","nape/geom/GeomPoly.hx",2562,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2573)
	Float minx = 1e100;		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(2574)
	Float miny = 1e100;		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(2591)
	Float maxx = -1e+100;		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(2592)
	Float maxy = -1e+100;		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(2609)
	{
		HX_STACK_LINE(2610)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2611)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2612)
		if (((F != null()))){
			HX_STACK_LINE(2613)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2614)
			while((true)){
				HX_STACK_LINE(2615)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2617)
				{
					HX_STACK_LINE(2618)
					if (((v->x < minx))){
						HX_STACK_LINE(2618)
						minx = v->x;
					}
					HX_STACK_LINE(2619)
					if (((v->y < miny))){
						HX_STACK_LINE(2619)
						miny = v->y;
					}
					HX_STACK_LINE(2620)
					if (((v->x > maxx))){
						HX_STACK_LINE(2620)
						maxx = v->x;
					}
					HX_STACK_LINE(2621)
					if (((v->y > maxy))){
						HX_STACK_LINE(2621)
						maxy = v->y;
					}
				}
				HX_STACK_LINE(2624)
				nite = nite->next;
				HX_STACK_LINE(2614)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2614)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2629)
	return ::nape::geom::AABB_obj::__new(minx,miny,(maxx - minx),(maxy - miny));
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,bounds,return )

::nape::geom::Vec2 GeomPoly_obj::top( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","top",0xb497b25b,"nape.geom.GeomPoly.top","nape/geom/GeomPoly.hx",2644,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2655)
	::zpp_nape::geom::ZPP_GeomVert min = this->zpp_inner->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(2656)
	{
		HX_STACK_LINE(2657)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2658)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2659)
		if (((F != null()))){
			HX_STACK_LINE(2660)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2661)
			while((true)){
				HX_STACK_LINE(2662)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2664)
				if (((v->y < min->y))){
					HX_STACK_LINE(2664)
					min = v;
				}
				HX_STACK_LINE(2666)
				nite = nite->next;
				HX_STACK_LINE(2661)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2661)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2671)
	if (((min->wrap == null()))){
		HX_STACK_LINE(2671)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2671)
		{
			HX_STACK_LINE(2671)
			Float x = min->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(2671)
			Float y = min->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(2671)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(2671)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2671)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(2671)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2671)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2671)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2671)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(2671)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(2671)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(2671)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2671)
				{
					HX_STACK_LINE(2671)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(2671)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(2671)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(2671)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(2671)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(2671)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(2671)
							ret1->next = null();
						}
						HX_STACK_LINE(2671)
						ret1->weak = false;
					}
					HX_STACK_LINE(2671)
					ret1->_immutable = immutable;
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						ret1->x = x;
						HX_STACK_LINE(2671)
						ret1->y = y;
						HX_STACK_LINE(2671)
						{
						}
					}
					HX_STACK_LINE(2671)
					_g2 = ret1;
				}
				HX_STACK_LINE(2671)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(2671)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(2671)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2671)
				{
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2671)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(2671)
							_this->_validate();
						}
					}
					HX_STACK_LINE(2671)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",2671,0x0b8969aa)
						{
							HX_STACK_LINE(2671)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2671)
							{
								HX_STACK_LINE(2671)
								{
									HX_STACK_LINE(2671)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2671)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2671)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2671)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(2671)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(2671)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(2671)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(2671)
						{
						}
					}
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2671)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(2671)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(2671)
				ret;
			}
			HX_STACK_LINE(2671)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(2671)
			_g5 = ret;
		}
		HX_STACK_LINE(2671)
		min->wrap = _g5;
		HX_STACK_LINE(2671)
		min->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(2671)
		min->wrap->zpp_inner->_invalidate = min->modwrap_dyn();
		HX_STACK_LINE(2671)
		min->wrap->zpp_inner->_validate = min->getwrap_dyn();
	}
	HX_STACK_LINE(2671)
	return min->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,top,return )

::nape::geom::Vec2 GeomPoly_obj::bottom( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","bottom",0xb87abae5,"nape.geom.GeomPoly.bottom","nape/geom/GeomPoly.hx",2686,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2697)
	::zpp_nape::geom::ZPP_GeomVert max = this->zpp_inner->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(2698)
	{
		HX_STACK_LINE(2699)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2700)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2701)
		if (((F != null()))){
			HX_STACK_LINE(2702)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2703)
			while((true)){
				HX_STACK_LINE(2704)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2706)
				if (((v->y > max->y))){
					HX_STACK_LINE(2706)
					max = v;
				}
				HX_STACK_LINE(2708)
				nite = nite->next;
				HX_STACK_LINE(2703)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2703)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2713)
	if (((max->wrap == null()))){
		HX_STACK_LINE(2713)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2713)
		{
			HX_STACK_LINE(2713)
			Float x = max->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(2713)
			Float y = max->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(2713)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(2713)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2713)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(2713)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2713)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2713)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2713)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(2713)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(2713)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(2713)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2713)
				{
					HX_STACK_LINE(2713)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(2713)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(2713)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(2713)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(2713)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(2713)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(2713)
							ret1->next = null();
						}
						HX_STACK_LINE(2713)
						ret1->weak = false;
					}
					HX_STACK_LINE(2713)
					ret1->_immutable = immutable;
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						ret1->x = x;
						HX_STACK_LINE(2713)
						ret1->y = y;
						HX_STACK_LINE(2713)
						{
						}
					}
					HX_STACK_LINE(2713)
					_g2 = ret1;
				}
				HX_STACK_LINE(2713)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(2713)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(2713)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2713)
				{
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2713)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(2713)
							_this->_validate();
						}
					}
					HX_STACK_LINE(2713)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",2713,0x0b8969aa)
						{
							HX_STACK_LINE(2713)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2713)
							{
								HX_STACK_LINE(2713)
								{
									HX_STACK_LINE(2713)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2713)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2713)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2713)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(2713)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(2713)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(2713)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(2713)
						{
						}
					}
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2713)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(2713)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(2713)
				ret;
			}
			HX_STACK_LINE(2713)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(2713)
			_g5 = ret;
		}
		HX_STACK_LINE(2713)
		max->wrap = _g5;
		HX_STACK_LINE(2713)
		max->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(2713)
		max->wrap->zpp_inner->_invalidate = max->modwrap_dyn();
		HX_STACK_LINE(2713)
		max->wrap->zpp_inner->_validate = max->getwrap_dyn();
	}
	HX_STACK_LINE(2713)
	return max->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,bottom,return )

::nape::geom::Vec2 GeomPoly_obj::left( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","left",0x4ad30981,"nape.geom.GeomPoly.left","nape/geom/GeomPoly.hx",2728,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2739)
	::zpp_nape::geom::ZPP_GeomVert min = this->zpp_inner->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(2740)
	{
		HX_STACK_LINE(2741)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2742)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2743)
		if (((F != null()))){
			HX_STACK_LINE(2744)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2745)
			while((true)){
				HX_STACK_LINE(2746)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2748)
				if (((v->x < min->x))){
					HX_STACK_LINE(2748)
					min = v;
				}
				HX_STACK_LINE(2750)
				nite = nite->next;
				HX_STACK_LINE(2745)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2745)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2755)
	if (((min->wrap == null()))){
		HX_STACK_LINE(2755)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2755)
		{
			HX_STACK_LINE(2755)
			Float x = min->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(2755)
			Float y = min->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(2755)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(2755)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2755)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(2755)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2755)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2755)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2755)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(2755)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(2755)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(2755)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2755)
				{
					HX_STACK_LINE(2755)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(2755)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(2755)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(2755)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(2755)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(2755)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(2755)
							ret1->next = null();
						}
						HX_STACK_LINE(2755)
						ret1->weak = false;
					}
					HX_STACK_LINE(2755)
					ret1->_immutable = immutable;
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						ret1->x = x;
						HX_STACK_LINE(2755)
						ret1->y = y;
						HX_STACK_LINE(2755)
						{
						}
					}
					HX_STACK_LINE(2755)
					_g2 = ret1;
				}
				HX_STACK_LINE(2755)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(2755)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(2755)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2755)
				{
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2755)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(2755)
							_this->_validate();
						}
					}
					HX_STACK_LINE(2755)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",2755,0x0b8969aa)
						{
							HX_STACK_LINE(2755)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2755)
							{
								HX_STACK_LINE(2755)
								{
									HX_STACK_LINE(2755)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2755)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2755)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2755)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(2755)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(2755)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(2755)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(2755)
						{
						}
					}
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2755)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(2755)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(2755)
				ret;
			}
			HX_STACK_LINE(2755)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(2755)
			_g5 = ret;
		}
		HX_STACK_LINE(2755)
		min->wrap = _g5;
		HX_STACK_LINE(2755)
		min->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(2755)
		min->wrap->zpp_inner->_invalidate = min->modwrap_dyn();
		HX_STACK_LINE(2755)
		min->wrap->zpp_inner->_validate = min->getwrap_dyn();
	}
	HX_STACK_LINE(2755)
	return min->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,left,return )

::nape::geom::Vec2 GeomPoly_obj::right( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","right",0xa4e25522,"nape.geom.GeomPoly.right","nape/geom/GeomPoly.hx",2770,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2781)
	::zpp_nape::geom::ZPP_GeomVert max = this->zpp_inner->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(2782)
	{
		HX_STACK_LINE(2783)
		::zpp_nape::geom::ZPP_GeomVert F = this->zpp_inner->vertices->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2784)
		::zpp_nape::geom::ZPP_GeomVert L = this->zpp_inner->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2785)
		if (((F != null()))){
			HX_STACK_LINE(2786)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2787)
			while((true)){
				HX_STACK_LINE(2788)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2790)
				if (((v->x > max->x))){
					HX_STACK_LINE(2790)
					max = v;
				}
				HX_STACK_LINE(2792)
				nite = nite->next;
				HX_STACK_LINE(2787)
				if ((!(((nite != L))))){
					HX_STACK_LINE(2787)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2797)
	if (((max->wrap == null()))){
		HX_STACK_LINE(2797)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2797)
		{
			HX_STACK_LINE(2797)
			Float x = max->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(2797)
			Float y = max->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(2797)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(2797)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2797)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(2797)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2797)
				ret = _g;
			}
			else{
				HX_STACK_LINE(2797)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(2797)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(2797)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(2797)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(2797)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2797)
				{
					HX_STACK_LINE(2797)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(2797)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(2797)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(2797)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(2797)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(2797)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(2797)
							ret1->next = null();
						}
						HX_STACK_LINE(2797)
						ret1->weak = false;
					}
					HX_STACK_LINE(2797)
					ret1->_immutable = immutable;
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						ret1->x = x;
						HX_STACK_LINE(2797)
						ret1->y = y;
						HX_STACK_LINE(2797)
						{
						}
					}
					HX_STACK_LINE(2797)
					_g2 = ret1;
				}
				HX_STACK_LINE(2797)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(2797)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(2797)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2797)
				{
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2797)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(2797)
							_this->_validate();
						}
					}
					HX_STACK_LINE(2797)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",2797,0x0b8969aa)
						{
							HX_STACK_LINE(2797)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2797)
							{
								HX_STACK_LINE(2797)
								{
									HX_STACK_LINE(2797)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2797)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2797)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2797)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(2797)
							return (_g4 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(2797)
				if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(2797)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(2797)
						{
						}
					}
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2797)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(2797)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(2797)
				ret;
			}
			HX_STACK_LINE(2797)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(2797)
			_g5 = ret;
		}
		HX_STACK_LINE(2797)
		max->wrap = _g5;
		HX_STACK_LINE(2797)
		max->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(2797)
		max->wrap->zpp_inner->_invalidate = max->modwrap_dyn();
		HX_STACK_LINE(2797)
		max->wrap->zpp_inner->_validate = max->getwrap_dyn();
	}
	HX_STACK_LINE(2797)
	return max->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,right,return )

::nape::geom::GeomPoly GeomPoly_obj::get( Dynamic vertices){
	HX_STACK_FRAME("nape.geom.GeomPoly","get",0xb48dcc5c,"nape.geom.GeomPoly.get","nape/geom/GeomPoly.hx",1175,0x0b8969aa)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_LINE(1176)
	::nape::geom::GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1178)
	if (((::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly == null()))){
		HX_STACK_LINE(1179)
		::nape::geom::GeomPoly _g = ::nape::geom::GeomPoly_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1179)
		ret = _g;
	}
	else{
		HX_STACK_LINE(1185)
		ret = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;
		HX_STACK_LINE(1186)
		::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = ret->zpp_pool;
		HX_STACK_LINE(1187)
		ret->zpp_pool = null();
	}
	HX_STACK_LINE(1197)
	if (((vertices != null()))){
		HX_STACK_LINE(1199)
		if ((::Std_obj::is(vertices,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1200)
			Dynamic lv = vertices;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1201)
			{
				HX_STACK_LINE(1201)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1201)
				while((true)){
					HX_STACK_LINE(1201)
					if ((!(((_g < lv->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1201)
						break;
					}
					HX_STACK_LINE(1201)
					Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(1201)
					++(_g);
					HX_STACK_LINE(1208)
					::nape::geom::Vec2 v = vite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1214)
					{
						HX_STACK_LINE(1215)
						::zpp_nape::geom::ZPP_GeomVert _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1215)
						{
							HX_STACK_LINE(1216)
							::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1216)
							{
								HX_STACK_LINE(1216)
								Float x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1216)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1216)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1216)
									x = v->zpp_inner->x;
								}
								HX_STACK_LINE(1216)
								Float y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1216)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1216)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1216)
									y = v->zpp_inner->y;
								}
								HX_STACK_LINE(1216)
								::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(1216)
										::zpp_nape::geom::ZPP_GeomVert _g1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(1216)
										ret1 = _g1;
									}
									else{
										HX_STACK_LINE(1216)
										ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(1216)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1216)
										ret1->next = null();
									}
									HX_STACK_LINE(1216)
									ret1->forced = false;
								}
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									ret1->x = x;
									HX_STACK_LINE(1216)
									ret1->y = y;
									HX_STACK_LINE(1216)
									{
									}
								}
								HX_STACK_LINE(1216)
								obj = ret1;
							}
							HX_STACK_LINE(1217)
							if (((ret->zpp_inner->vertices == null()))){
								HX_STACK_LINE(1217)
								::zpp_nape::geom::ZPP_GeomVert _g2 = obj->next = obj;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1217)
								::zpp_nape::geom::ZPP_GeomVert _g3 = obj->prev = _g2;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1217)
								ret->zpp_inner->vertices = _g3;
							}
							else{
								HX_STACK_LINE(1219)
								obj->prev = ret->zpp_inner->vertices;
								HX_STACK_LINE(1220)
								obj->next = ret->zpp_inner->vertices->next;
								HX_STACK_LINE(1221)
								ret->zpp_inner->vertices->next->prev = obj;
								HX_STACK_LINE(1222)
								ret->zpp_inner->vertices->next = obj;
							}
							HX_STACK_LINE(1224)
							_g4 = obj;
						}
						HX_STACK_LINE(1215)
						ret->zpp_inner->vertices = _g4;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1257)
			if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1258)
				::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1259)
					while((true)){
						struct _Function_6_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1259,0x0b8969aa)
								{
									HX_STACK_LINE(1259)
									_g->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(1259)
									int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1259)
									_g->zpp_critical = true;
									struct _Function_7_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1259,0x0b8969aa)
											{
												HX_STACK_LINE(1259)
												{
													HX_STACK_LINE(1259)
													_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(1259)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
													HX_STACK_LINE(1259)
													_g->zpp_inner = null();
												}
												HX_STACK_LINE(1259)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(1259)
									return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_7_1::Block(_g)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1259)
						if ((!(_Function_6_1::Block(_g)))){
							HX_STACK_LINE(1259)
							break;
						}
						HX_STACK_LINE(1259)
						::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1259)
						{
							HX_STACK_LINE(1259)
							_g->zpp_critical = false;
							HX_STACK_LINE(1259)
							int _g5 = (_g->zpp_i)++;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1259)
							v = _g->zpp_inner->at(_g5);
						}
						HX_STACK_LINE(1268)
						{
							HX_STACK_LINE(1269)
							::zpp_nape::geom::ZPP_GeomVert _g9;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1269)
							{
								HX_STACK_LINE(1270)
								::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1270)
								{
									HX_STACK_LINE(1270)
									Float x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1270)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1270)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1270)
										x = v->zpp_inner->x;
									}
									HX_STACK_LINE(1270)
									Float y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1270)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1270)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1270)
										y = v->zpp_inner->y;
									}
									HX_STACK_LINE(1270)
									::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(1270)
											::zpp_nape::geom::ZPP_GeomVert _g6 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(1270)
											ret1 = _g6;
										}
										else{
											HX_STACK_LINE(1270)
											ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(1270)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1270)
											ret1->next = null();
										}
										HX_STACK_LINE(1270)
										ret1->forced = false;
									}
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										ret1->x = x;
										HX_STACK_LINE(1270)
										ret1->y = y;
										HX_STACK_LINE(1270)
										{
										}
									}
									HX_STACK_LINE(1270)
									obj = ret1;
								}
								HX_STACK_LINE(1271)
								if (((ret->zpp_inner->vertices == null()))){
									HX_STACK_LINE(1271)
									::zpp_nape::geom::ZPP_GeomVert _g7 = obj->next = obj;		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(1271)
									::zpp_nape::geom::ZPP_GeomVert _g8 = obj->prev = _g7;		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(1271)
									ret->zpp_inner->vertices = _g8;
								}
								else{
									HX_STACK_LINE(1273)
									obj->prev = ret->zpp_inner->vertices;
									HX_STACK_LINE(1274)
									obj->next = ret->zpp_inner->vertices->next;
									HX_STACK_LINE(1275)
									ret->zpp_inner->vertices->next->prev = obj;
									HX_STACK_LINE(1276)
									ret->zpp_inner->vertices->next = obj;
								}
								HX_STACK_LINE(1278)
								_g9 = obj;
							}
							HX_STACK_LINE(1269)
							ret->zpp_inner->vertices = _g9;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1283)
				if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::GeomPoly >()))){
					HX_STACK_LINE(1284)
					::nape::geom::GeomPoly lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1290)
					::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
					HX_STACK_LINE(1291)
					if (((verts != null()))){
						HX_STACK_LINE(1292)
						::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(1293)
						while((true)){
							HX_STACK_LINE(1294)
							::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1294)
							{
								HX_STACK_LINE(1294)
								Float x = vite->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1294)
								Float y = vite->y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1294)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(1294)
								::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1294)
								if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
									HX_STACK_LINE(1294)
									::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(1294)
									ret1 = _g10;
								}
								else{
									HX_STACK_LINE(1294)
									ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1294)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
									HX_STACK_LINE(1294)
									ret1->zpp_pool = null();
								}
								HX_STACK_LINE(1294)
								if (((ret1->zpp_inner == null()))){
									HX_STACK_LINE(1294)
									::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(1294)
									{
										HX_STACK_LINE(1294)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1294)
										::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1294)
												::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(1294)
												ret2 = _g11;
											}
											else{
												HX_STACK_LINE(1294)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1294)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
												HX_STACK_LINE(1294)
												ret2->next = null();
											}
											HX_STACK_LINE(1294)
											ret2->weak = false;
										}
										HX_STACK_LINE(1294)
										ret2->_immutable = immutable;
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											ret2->x = x;
											HX_STACK_LINE(1294)
											ret2->y = y;
											HX_STACK_LINE(1294)
											{
											}
										}
										HX_STACK_LINE(1294)
										_g12 = ret2;
									}
									HX_STACK_LINE(1294)
									ret1->zpp_inner = _g12;
									HX_STACK_LINE(1294)
									ret1->zpp_inner->outer = ret1;
								}
								else{
									HX_STACK_LINE(1294)
									Float _g13;		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(1294)
									{
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1294)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1294)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1294)
										_g13 = ret1->zpp_inner->x;
									}
									struct _Function_9_1{
										inline static bool Block( ::nape::geom::Vec2 &ret1,Float &y){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1294,0x0b8969aa)
											{
												HX_STACK_LINE(1294)
												Float _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(1294)
												{
													HX_STACK_LINE(1294)
													{
														HX_STACK_LINE(1294)
														::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1294)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1294)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1294)
													_g14 = ret1->zpp_inner->y;
												}
												HX_STACK_LINE(1294)
												return (_g14 == y);
											}
											return null();
										}
									};
									HX_STACK_LINE(1294)
									if ((!(((  (((_g13 == x))) ? bool(_Function_9_1::Block(ret1,y)) : bool(false) ))))){
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											ret1->zpp_inner->x = x;
											HX_STACK_LINE(1294)
											ret1->zpp_inner->y = y;
											HX_STACK_LINE(1294)
											{
											}
										}
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1294)
											if (((_this->_invalidate != null()))){
												HX_STACK_LINE(1294)
												_this->_invalidate(_this);
											}
										}
									}
									HX_STACK_LINE(1294)
									ret1;
								}
								HX_STACK_LINE(1294)
								ret1->zpp_inner->weak = weak;
								HX_STACK_LINE(1294)
								v = ret1;
							}
							HX_STACK_LINE(1295)
							vite = vite->next;
							HX_STACK_LINE(1296)
							{
								HX_STACK_LINE(1297)
								::zpp_nape::geom::ZPP_GeomVert _g18;		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(1297)
								{
									HX_STACK_LINE(1298)
									::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1298)
									{
										HX_STACK_LINE(1298)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1298)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1298)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1298)
											x = v->zpp_inner->x;
										}
										HX_STACK_LINE(1298)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1298)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1298)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1298)
											y = v->zpp_inner->y;
										}
										HX_STACK_LINE(1298)
										::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(1298)
												::zpp_nape::geom::ZPP_GeomVert _g15 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(1298)
												ret1 = _g15;
											}
											else{
												HX_STACK_LINE(1298)
												ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(1298)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1298)
												ret1->next = null();
											}
											HX_STACK_LINE(1298)
											ret1->forced = false;
										}
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											ret1->x = x;
											HX_STACK_LINE(1298)
											ret1->y = y;
											HX_STACK_LINE(1298)
											{
											}
										}
										HX_STACK_LINE(1298)
										obj = ret1;
									}
									HX_STACK_LINE(1299)
									if (((ret->zpp_inner->vertices == null()))){
										HX_STACK_LINE(1299)
										::zpp_nape::geom::ZPP_GeomVert _g16 = obj->next = obj;		HX_STACK_VAR(_g16,"_g16");
										HX_STACK_LINE(1299)
										::zpp_nape::geom::ZPP_GeomVert _g17 = obj->prev = _g16;		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(1299)
										ret->zpp_inner->vertices = _g17;
									}
									else{
										HX_STACK_LINE(1301)
										obj->prev = ret->zpp_inner->vertices;
										HX_STACK_LINE(1302)
										obj->next = ret->zpp_inner->vertices->next;
										HX_STACK_LINE(1303)
										ret->zpp_inner->vertices->next->prev = obj;
										HX_STACK_LINE(1304)
										ret->zpp_inner->vertices->next = obj;
									}
									HX_STACK_LINE(1306)
									_g18 = obj;
								}
								HX_STACK_LINE(1297)
								ret->zpp_inner->vertices = _g18;
							}
							HX_STACK_LINE(1309)
							{
								HX_STACK_LINE(1309)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1309)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1309)
								v->zpp_inner = null();
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1309)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1309)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										if (((o->outer != null()))){
											HX_STACK_LINE(1309)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1309)
											o->outer = null();
										}
										HX_STACK_LINE(1309)
										o->_isimmutable = null();
										HX_STACK_LINE(1309)
										o->_validate = null();
										HX_STACK_LINE(1309)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1309)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1309)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1293)
							if ((!(((vite != verts))))){
								HX_STACK_LINE(1293)
								break;
							}
						}
					}
				}
				else{
				}
			}
		}
		HX_STACK_LINE(1320)
		ret->skipForward((int)1);
		HX_STACK_LINE(1322)
		if ((::Std_obj::is(vertices,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1323)
			Array< ::Dynamic > lv = vertices;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1324)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1325)
			while((true)){
				HX_STACK_LINE(1325)
				if ((!(((i < lv->length))))){
					HX_STACK_LINE(1325)
					break;
				}
				HX_STACK_LINE(1326)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_4_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/GeomPoly.hx",1330,0x0b8969aa)
						{
							HX_STACK_LINE(1331)
							{
								HX_STACK_LINE(1331)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1331)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1331)
								cur->zpp_inner = null();
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1331)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1331)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1331)
									{
										HX_STACK_LINE(1331)
										if (((o->outer != null()))){
											HX_STACK_LINE(1331)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1331)
											o->outer = null();
										}
										HX_STACK_LINE(1331)
										o->_isimmutable = null();
										HX_STACK_LINE(1331)
										o->_validate = null();
										HX_STACK_LINE(1331)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1331)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1332)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1327)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_4_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1338)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1339)
					continue;
				}
				HX_STACK_LINE(1341)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1369)
			if ((::Std_obj::is(vertices,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1370)
				::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1371)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(1371)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1372)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1373)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1374)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1375)
				while((true)){
					HX_STACK_LINE(1375)
					if ((!(((cur != null()))))){
						HX_STACK_LINE(1375)
						break;
					}
					HX_STACK_LINE(1376)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1377)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1380)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 _g19 = ins->erase(pre);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(1380)
						cur = _g19;
						HX_STACK_LINE(1381)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1385)
							{
								HX_STACK_LINE(1385)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1385)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1385)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1385)
								_this->zpp_inner = null();
								HX_STACK_LINE(1385)
								{
									HX_STACK_LINE(1385)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1385)
									o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(1385)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1385)
								{
									HX_STACK_LINE(1385)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1385)
									{
										HX_STACK_LINE(1385)
										if (((o->outer != null()))){
											HX_STACK_LINE(1385)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1385)
											o->outer = null();
										}
										HX_STACK_LINE(1385)
										o->_isimmutable = null();
										HX_STACK_LINE(1385)
										o->_validate = null();
										HX_STACK_LINE(1385)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1385)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1385)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1386)
							true;
						}
						else{
							HX_STACK_LINE(1389)
							false;
						}
					}
					else{
						HX_STACK_LINE(1394)
						pre = cur;
						HX_STACK_LINE(1395)
						cur = cur->next;
					}
				}
			}
		}
	}
	HX_STACK_LINE(1401)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,get,return )


GeomPoly_obj::GeomPoly_obj()
{
}

void GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomPoly);
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic GeomPoly_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"cut") ) { return cut_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return top_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"area") ) { return area_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"winding") ) { return winding_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"isConvex") ) { return isConvex_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimple") ) { return isSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"simplify") ) { return simplify_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMonotone") ) { return isMonotone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"skipForward") ) { return skipForward_dyn(); }
		if (HX_FIELD_EQ(inName,"isClockwise") ) { return isClockwise_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDegenerate") ) { return isDegenerate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skipBackwards") ) { return skipBackwards_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"forwardIterator") ) { return forwardIterator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backwardsIterator") ) { return backwardsIterator_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"simpleDecomposition") ) { return simpleDecomposition_dyn(); }
		if (HX_FIELD_EQ(inName,"convexDecomposition") ) { return convexDecomposition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"monotoneDecomposition") ) { return monotoneDecomposition_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"triangularDecomposition") ) { return triangularDecomposition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::GeomPoly >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_GeomPoly >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_pool"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::GeomPoly*/ ,(int)offsetof(GeomPoly_obj,zpp_pool),HX_CSTRING("zpp_pool")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomPoly*/ ,(int)offsetof(GeomPoly_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("empty"),
	HX_CSTRING("size"),
	HX_CSTRING("iterator"),
	HX_CSTRING("forwardIterator"),
	HX_CSTRING("backwardsIterator"),
	HX_CSTRING("current"),
	HX_CSTRING("push"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("shift"),
	HX_CSTRING("skipForward"),
	HX_CSTRING("skipBackwards"),
	HX_CSTRING("erase"),
	HX_CSTRING("clear"),
	HX_CSTRING("copy"),
	HX_CSTRING("dispose"),
	HX_CSTRING("toString"),
	HX_CSTRING("area"),
	HX_CSTRING("winding"),
	HX_CSTRING("contains"),
	HX_CSTRING("isClockwise"),
	HX_CSTRING("isConvex"),
	HX_CSTRING("isSimple"),
	HX_CSTRING("isMonotone"),
	HX_CSTRING("isDegenerate"),
	HX_CSTRING("simplify"),
	HX_CSTRING("simpleDecomposition"),
	HX_CSTRING("monotoneDecomposition"),
	HX_CSTRING("convexDecomposition"),
	HX_CSTRING("triangularDecomposition"),
	HX_CSTRING("inflate"),
	HX_CSTRING("cut"),
	HX_CSTRING("transform"),
	HX_CSTRING("bounds"),
	HX_CSTRING("top"),
	HX_CSTRING("bottom"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomPoly_obj::__mClass,"__mClass");
};

#endif

Class GeomPoly_obj::__mClass;

void GeomPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.GeomPoly"), hx::TCanCast< GeomPoly_obj> ,sStaticFields,sMemberFields,
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

void GeomPoly_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
