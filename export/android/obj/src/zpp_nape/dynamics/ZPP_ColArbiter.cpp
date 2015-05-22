#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_ColArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","new",0xa8567bd9,"zpp_nape.dynamics.ZPP_ColArbiter.new","zpp_nape/dynamics/Arbiter.hx",1391,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1879)
	this->pre_dt = 0.0;
	HX_STACK_LINE(1723)
	this->_mutable = false;
	HX_STACK_LINE(1555)
	this->stat = false;
	HX_STACK_LINE(1485)
	this->next = null();
	HX_STACK_LINE(1484)
	this->hpc2 = false;
	HX_STACK_LINE(1483)
	this->hc2 = false;
	HX_STACK_LINE(1482)
	this->oc2 = null();
	HX_STACK_LINE(1481)
	this->c2 = null();
	HX_STACK_LINE(1480)
	this->oc1 = null();
	HX_STACK_LINE(1479)
	this->c1 = null();
	HX_STACK_LINE(1478)
	this->__ref_vertex = (int)0;
	HX_STACK_LINE(1477)
	this->__ref_edge2 = null();
	HX_STACK_LINE(1476)
	this->__ref_edge1 = null();
	HX_STACK_LINE(1475)
	this->biasCoef = 0.0;
	HX_STACK_LINE(1474)
	this->rev = false;
	HX_STACK_LINE(1473)
	this->radius = 0.0;
	HX_STACK_LINE(1472)
	this->lproj = 0.0;
	HX_STACK_LINE(1471)
	this->lnormy = 0.0;
	HX_STACK_LINE(1470)
	this->lnormx = 0.0;
	HX_STACK_LINE(1465)
	this->surfacey = 0.0;
	HX_STACK_LINE(1464)
	this->surfacex = 0.0;
	HX_STACK_LINE(1463)
	this->k2y = 0.0;
	HX_STACK_LINE(1462)
	this->k2x = 0.0;
	HX_STACK_LINE(1461)
	this->k1y = 0.0;
	HX_STACK_LINE(1460)
	this->k1x = 0.0;
	HX_STACK_LINE(1459)
	this->rt2b = 0.0;
	HX_STACK_LINE(1458)
	this->rn2b = 0.0;
	HX_STACK_LINE(1457)
	this->rt2a = 0.0;
	HX_STACK_LINE(1456)
	this->rn2a = 0.0;
	HX_STACK_LINE(1455)
	this->rt1b = 0.0;
	HX_STACK_LINE(1454)
	this->rn1b = 0.0;
	HX_STACK_LINE(1453)
	this->rt1a = 0.0;
	HX_STACK_LINE(1452)
	this->rn1a = 0.0;
	HX_STACK_LINE(1451)
	this->jrAcc = 0.0;
	HX_STACK_LINE(1450)
	this->rMass = 0.0;
	HX_STACK_LINE(1449)
	this->Kc = 0.0;
	HX_STACK_LINE(1448)
	this->Kb = 0.0;
	HX_STACK_LINE(1447)
	this->Ka = 0.0;
	HX_STACK_LINE(1446)
	this->kMassc = 0.0;
	HX_STACK_LINE(1445)
	this->kMassb = 0.0;
	HX_STACK_LINE(1444)
	this->kMassa = 0.0;
	HX_STACK_LINE(1437)
	this->wrap_normal = null();
	HX_STACK_LINE(1407)
	this->ny = 0.0;
	HX_STACK_LINE(1406)
	this->nx = 0.0;
	HX_STACK_LINE(1405)
	this->innards = null();
	HX_STACK_LINE(1404)
	this->wrap_contacts = null();
	HX_STACK_LINE(1403)
	this->contacts = null();
	HX_STACK_LINE(1402)
	this->s2 = null();
	HX_STACK_LINE(1401)
	this->s1 = null();
	HX_STACK_LINE(1400)
	this->userdef_rfric = false;
	HX_STACK_LINE(1399)
	this->userdef_restitution = false;
	HX_STACK_LINE(1398)
	this->userdef_stat_fric = false;
	HX_STACK_LINE(1397)
	this->userdef_dyn_fric = false;
	HX_STACK_LINE(1396)
	this->rfric = 0.0;
	HX_STACK_LINE(1395)
	this->restitution = 0.0;
	HX_STACK_LINE(1394)
	this->stat_fric = 0.0;
	HX_STACK_LINE(1393)
	this->dyn_fric = 0.0;
	HX_STACK_LINE(1392)
	this->outer_zn = null();
	HX_STACK_LINE(1511)
	super::__construct();
	HX_STACK_LINE(1512)
	this->pre_dt = -1.0;
	HX_STACK_LINE(1513)
	::zpp_nape::dynamics::ZPP_Contact _g = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1513)
	this->contacts = _g;
	HX_STACK_LINE(1514)
	::zpp_nape::dynamics::ZPP_IContact _g1 = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1514)
	this->innards = _g1;
	HX_STACK_LINE(1515)
	this->type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;
	HX_STACK_LINE(1516)
	this->colarb = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_ColArbiter_obj::~ZPP_ColArbiter_obj() { }

Dynamic ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZPP_ColArbiter_obj > ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_ColArbiter_obj > result = new ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ColArbiter_obj > result = new ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Void ZPP_ColArbiter_obj::normal_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","normal_validate",0xea7cd5e7,"zpp_nape.dynamics.ZPP_ColArbiter.normal_validate","zpp_nape/dynamics/Arbiter.hx",1408,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1409)
		if ((this->cleared)){
			HX_STACK_LINE(1409)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		HX_STACK_LINE(1410)
		{
			HX_STACK_LINE(1411)
			this->wrap_normal->zpp_inner->x = this->nx;
			HX_STACK_LINE(1412)
			this->wrap_normal->zpp_inner->y = this->ny;
			HX_STACK_LINE(1421)
			{
			}
		}
		HX_STACK_LINE(1430)
		if (((this->ws1->id > this->ws2->id))){
			HX_STACK_LINE(1432)
			this->wrap_normal->zpp_inner->x = -(this->wrap_normal->zpp_inner->x);
			HX_STACK_LINE(1433)
			this->wrap_normal->zpp_inner->y = -(this->wrap_normal->zpp_inner->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,normal_validate,(void))

Void ZPP_ColArbiter_obj::getnormal( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","getnormal",0x8ba59376,"zpp_nape.dynamics.ZPP_ColArbiter.getnormal","zpp_nape/dynamics/Arbiter.hx",1438,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1439)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1439)
		{
			HX_STACK_LINE(1439)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1439)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1439)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(1439)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1439)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1439)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(1439)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1439)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(1439)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(1439)
				::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1439)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1439)
							ret1 = _g1;
						}
						else{
							HX_STACK_LINE(1439)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1439)
							ret1->next = null();
						}
						HX_STACK_LINE(1439)
						ret1->weak = false;
					}
					HX_STACK_LINE(1439)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						ret1->x = (int)0;
						HX_STACK_LINE(1439)
						ret1->y = (int)0;
						HX_STACK_LINE(1439)
						{
						}
					}
					HX_STACK_LINE(1439)
					_g2 = ret1;
				}
				HX_STACK_LINE(1439)
				ret->zpp_inner = _g2;
				HX_STACK_LINE(1439)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1439)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1439)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1439)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1439)
					_g3 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",1439,0x26846f2e)
						{
							HX_STACK_LINE(1439)
							Float _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1439)
							{
								HX_STACK_LINE(1439)
								{
									HX_STACK_LINE(1439)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1439)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1439)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1439)
								_g4 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(1439)
							return (_g4 == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(1439)
				if ((!(((  (((_g3 == (int)0))) ? bool(_Function_3_1::Block(ret)) : bool(false) ))))){
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						ret->zpp_inner->x = (int)0;
						HX_STACK_LINE(1439)
						ret->zpp_inner->y = (int)0;
						HX_STACK_LINE(1439)
						{
						}
					}
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1439)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1439)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1439)
				ret;
			}
			HX_STACK_LINE(1439)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1439)
			_g5 = ret;
		}
		HX_STACK_LINE(1439)
		this->wrap_normal = _g5;
		HX_STACK_LINE(1440)
		this->wrap_normal->zpp_inner->_immutable = true;
		HX_STACK_LINE(1441)
		this->wrap_normal->zpp_inner->_inuse = true;
		HX_STACK_LINE(1442)
		this->wrap_normal->zpp_inner->_validate = this->normal_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,getnormal,(void))

Void ZPP_ColArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","alloc",0xd032e02e,"zpp_nape.dynamics.ZPP_ColArbiter.alloc","zpp_nape/dynamics/Arbiter.hx",1521,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,alloc,(void))

Void ZPP_ColArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","free",0x9e15fb13,"zpp_nape.dynamics.ZPP_ColArbiter.free","zpp_nape/dynamics/Arbiter.hx",1532,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1549)
		this->userdef_dyn_fric = false;
		HX_STACK_LINE(1550)
		this->userdef_stat_fric = false;
		HX_STACK_LINE(1551)
		this->userdef_restitution = false;
		HX_STACK_LINE(1552)
		this->userdef_rfric = false;
		HX_STACK_LINE(1553)
		::zpp_nape::shape::ZPP_Edge _g = this->__ref_edge2 = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1553)
		this->__ref_edge1 = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_ColArbiter_obj::injectContact( Float px,Float py,Float nx,Float ny,Float dist,int hash,hx::Null< bool >  __o_posOnly){
bool posOnly = __o_posOnly.Default(false);
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","injectContact",0x73f258c8,"zpp_nape.dynamics.ZPP_ColArbiter.injectContact","zpp_nape/dynamics/Arbiter.hx",1558,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(nx,"nx")
	HX_STACK_ARG(ny,"ny")
	HX_STACK_ARG(dist,"dist")
	HX_STACK_ARG(hash,"hash")
	HX_STACK_ARG(posOnly,"posOnly")
{
		HX_STACK_LINE(1559)
		::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1560)
		{
			HX_STACK_LINE(1561)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1562)
			while((true)){
				HX_STACK_LINE(1562)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1562)
					break;
				}
				HX_STACK_LINE(1563)
				::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1564)
				if (((hash == cur->hash))){
					HX_STACK_LINE(1565)
					c = cur;
					HX_STACK_LINE(1566)
					break;
				}
				HX_STACK_LINE(1568)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1571)
		if (((c == null()))){
			HX_STACK_LINE(1572)
			{
				HX_STACK_LINE(1573)
				if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
					HX_STACK_LINE(1574)
					::zpp_nape::dynamics::ZPP_Contact _g = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1574)
					c = _g;
				}
				else{
					HX_STACK_LINE(1580)
					c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
					HX_STACK_LINE(1581)
					::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
					HX_STACK_LINE(1582)
					c->next = null();
				}
				HX_STACK_LINE(1587)
				Dynamic();
			}
			HX_STACK_LINE(1589)
			::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1590)
			Float _g1 = ci->jtAcc = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1590)
			ci->jnAcc = _g1;
			HX_STACK_LINE(1591)
			c->hash = hash;
			HX_STACK_LINE(1592)
			c->fresh = true;
			HX_STACK_LINE(1593)
			c->arbiter = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1594)
			this->jrAcc = (int)0;
			HX_STACK_LINE(1595)
			{
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact _this = this->contacts;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1595)
				{
					HX_STACK_LINE(1595)
					c->_inuse = true;
					HX_STACK_LINE(1595)
					temp = c;
				}
				HX_STACK_LINE(1595)
				temp->next = _this->next;
				HX_STACK_LINE(1595)
				_this->next = temp;
				HX_STACK_LINE(1595)
				_this->modified = true;
				HX_STACK_LINE(1595)
				(_this->length)++;
				HX_STACK_LINE(1595)
				c;
			}
			HX_STACK_LINE(1596)
			this->innards->add(ci);
		}
		else{
			HX_STACK_LINE(1598)
			c->fresh = false;
		}
		HX_STACK_LINE(1599)
		{
			HX_STACK_LINE(1600)
			c->px = px;
			HX_STACK_LINE(1601)
			c->py = py;
			HX_STACK_LINE(1610)
			{
			}
		}
		HX_STACK_LINE(1619)
		{
			HX_STACK_LINE(1620)
			this->nx = nx;
			HX_STACK_LINE(1621)
			this->ny = ny;
			HX_STACK_LINE(1630)
			{
			}
		}
		HX_STACK_LINE(1639)
		c->dist = dist;
		HX_STACK_LINE(1640)
		c->stamp = this->stamp;
		HX_STACK_LINE(1641)
		c->posOnly = posOnly;
		HX_STACK_LINE(1642)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_ColArbiter_obj,injectContact,return )

Void ZPP_ColArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","assign",0x68bb4c56,"zpp_nape.dynamics.ZPP_ColArbiter.assign","zpp_nape/dynamics/Arbiter.hx",1646,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(1647)
		{
			HX_STACK_LINE(1647)
			this->b1 = s1->body;
			HX_STACK_LINE(1647)
			this->ws1 = s1;
			HX_STACK_LINE(1647)
			this->b2 = s2->body;
			HX_STACK_LINE(1647)
			this->ws2 = s2;
			HX_STACK_LINE(1647)
			this->id = id;
			HX_STACK_LINE(1647)
			this->di = di;
			HX_STACK_LINE(1647)
			{
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1647)
				{
					HX_STACK_LINE(1647)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1647)
					{
						HX_STACK_LINE(1647)
						if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter _g = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1647)
							ret = _g;
						}
						else{
							HX_STACK_LINE(1647)
							ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(1647)
							ret->next = null();
						}
						HX_STACK_LINE(1647)
						Dynamic();
					}
					HX_STACK_LINE(1647)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1647)
					temp = ret;
				}
				HX_STACK_LINE(1647)
				temp->next = _this->head;
				HX_STACK_LINE(1647)
				_this->head = temp;
				HX_STACK_LINE(1647)
				_this->modified = true;
				HX_STACK_LINE(1647)
				(_this->length)++;
				HX_STACK_LINE(1647)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1647)
			{
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1647)
				{
					HX_STACK_LINE(1647)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1647)
					{
						HX_STACK_LINE(1647)
						if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter _g1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1647)
							ret = _g1;
						}
						else{
							HX_STACK_LINE(1647)
							ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(1647)
							ret->next = null();
						}
						HX_STACK_LINE(1647)
						Dynamic();
					}
					HX_STACK_LINE(1647)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1647)
					temp = ret;
				}
				HX_STACK_LINE(1647)
				temp->next = _this->head;
				HX_STACK_LINE(1647)
				_this->head = temp;
				HX_STACK_LINE(1647)
				_this->modified = true;
				HX_STACK_LINE(1647)
				(_this->length)++;
				HX_STACK_LINE(1647)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1647)
			this->active = true;
			HX_STACK_LINE(1647)
			this->present = (int)0;
			HX_STACK_LINE(1647)
			this->cleared = false;
			HX_STACK_LINE(1647)
			this->sleeping = false;
			HX_STACK_LINE(1647)
			this->fresh = false;
			HX_STACK_LINE(1647)
			this->presentable = false;
		}
		HX_STACK_LINE(1648)
		this->s1 = s1;
		HX_STACK_LINE(1649)
		this->s2 = s2;
		HX_STACK_LINE(1650)
		{
			HX_STACK_LINE(1650)
			if ((!(this->userdef_restitution))){
				HX_STACK_LINE(1650)
				if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(1650)
					this->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(1650)
					if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(1650)
						this->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(1650)
						this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(1650)
				if (((this->restitution < (int)0))){
					HX_STACK_LINE(1650)
					this->restitution = (int)0;
				}
				HX_STACK_LINE(1650)
				if (((this->restitution > (int)1))){
					HX_STACK_LINE(1650)
					this->restitution = (int)1;
				}
			}
			HX_STACK_LINE(1650)
			if ((!(this->userdef_dyn_fric))){
				HX_STACK_LINE(1650)
				Float _g2 = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1650)
				this->dyn_fric = _g2;
			}
			HX_STACK_LINE(1650)
			if ((!(this->userdef_stat_fric))){
				HX_STACK_LINE(1650)
				Float _g3 = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1650)
				this->stat_fric = _g3;
			}
			HX_STACK_LINE(1650)
			if ((!(this->userdef_rfric))){
				HX_STACK_LINE(1650)
				Float _g4 = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1650)
				this->rfric = _g4;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ColArbiter_obj,assign,(void))

Void ZPP_ColArbiter_obj::calcProperties( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","calcProperties",0xc66e8a0f,"zpp_nape.dynamics.ZPP_ColArbiter.calcProperties","zpp_nape/dynamics/Arbiter.hx",1654,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1655)
		if ((!(this->userdef_restitution))){
			HX_STACK_LINE(1656)
			if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
				HX_STACK_LINE(1656)
				this->restitution = (int)0;
			}
			else{
				HX_STACK_LINE(1657)
				if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
					HX_STACK_LINE(1657)
					this->restitution = (int)1;
				}
				else{
					HX_STACK_LINE(1658)
					this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
				}
			}
			HX_STACK_LINE(1659)
			if (((this->restitution < (int)0))){
				HX_STACK_LINE(1659)
				this->restitution = (int)0;
			}
			HX_STACK_LINE(1660)
			if (((this->restitution > (int)1))){
				HX_STACK_LINE(1660)
				this->restitution = (int)1;
			}
		}
		HX_STACK_LINE(1662)
		if ((!(this->userdef_dyn_fric))){
			HX_STACK_LINE(1663)
			Float _g = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1663)
			this->dyn_fric = _g;
		}
		HX_STACK_LINE(1665)
		if ((!(this->userdef_stat_fric))){
			HX_STACK_LINE(1666)
			Float _g1 = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1666)
			this->stat_fric = _g1;
		}
		HX_STACK_LINE(1668)
		if ((!(this->userdef_rfric))){
			HX_STACK_LINE(1669)
			Float _g2 = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1669)
			this->rfric = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,calcProperties,(void))

Void ZPP_ColArbiter_obj::validate_props( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","validate_props",0x089c98ee,"zpp_nape.dynamics.ZPP_ColArbiter.validate_props","zpp_nape/dynamics/Arbiter.hx",1675,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1675)
		if ((this->invalidated)){
			HX_STACK_LINE(1676)
			this->invalidated = false;
			HX_STACK_LINE(1677)
			{
				HX_STACK_LINE(1677)
				if ((!(this->userdef_restitution))){
					HX_STACK_LINE(1677)
					if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
						HX_STACK_LINE(1677)
						this->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(1677)
						if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
							HX_STACK_LINE(1677)
							this->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(1677)
							this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
						}
					}
					HX_STACK_LINE(1677)
					if (((this->restitution < (int)0))){
						HX_STACK_LINE(1677)
						this->restitution = (int)0;
					}
					HX_STACK_LINE(1677)
					if (((this->restitution > (int)1))){
						HX_STACK_LINE(1677)
						this->restitution = (int)1;
					}
				}
				HX_STACK_LINE(1677)
				if ((!(this->userdef_dyn_fric))){
					HX_STACK_LINE(1677)
					Float _g = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1677)
					this->dyn_fric = _g;
				}
				HX_STACK_LINE(1677)
				if ((!(this->userdef_stat_fric))){
					HX_STACK_LINE(1677)
					Float _g1 = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1677)
					this->stat_fric = _g1;
				}
				HX_STACK_LINE(1677)
				if ((!(this->userdef_rfric))){
					HX_STACK_LINE(1677)
					Float _g2 = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1677)
					this->rfric = _g2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,validate_props,(void))

Void ZPP_ColArbiter_obj::retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","retire",0x25d98fc2,"zpp_nape.dynamics.ZPP_ColArbiter.retire","zpp_nape/dynamics/Arbiter.hx",1682,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1683)
		{
			HX_STACK_LINE(1683)
			if ((!(this->cleared))){
				HX_STACK_LINE(1683)
				{
					HX_STACK_LINE(1683)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1683)
					{
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1683)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1683)
						while((true)){
							HX_STACK_LINE(1683)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1683)
								{
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1683)
									if (((pre == null()))){
										HX_STACK_LINE(1683)
										old = _this->head;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										_this->head = ret1;
										HX_STACK_LINE(1683)
										if (((_this->head == null()))){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1683)
										old = pre->next;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										pre->next = ret1;
										HX_STACK_LINE(1683)
										if (((ret1 == null()))){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1683)
									{
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1683)
										o->elt = null();
										HX_STACK_LINE(1683)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1683)
									_this->modified = true;
									HX_STACK_LINE(1683)
									(_this->length)--;
									HX_STACK_LINE(1683)
									_this->pushmod = true;
									HX_STACK_LINE(1683)
									ret1;
								}
								HX_STACK_LINE(1683)
								ret = true;
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							pre = cur;
							HX_STACK_LINE(1683)
							cur = cur->next;
						}
						HX_STACK_LINE(1683)
						ret;
					}
				}
				HX_STACK_LINE(1683)
				{
					HX_STACK_LINE(1683)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1683)
					{
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1683)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1683)
						while((true)){
							HX_STACK_LINE(1683)
							if ((!(((cur != null()))))){
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1683)
								{
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1683)
									if (((pre == null()))){
										HX_STACK_LINE(1683)
										old = _this->head;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										_this->head = ret1;
										HX_STACK_LINE(1683)
										if (((_this->head == null()))){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1683)
										old = pre->next;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										pre->next = ret1;
										HX_STACK_LINE(1683)
										if (((ret1 == null()))){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1683)
									{
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1683)
										o->elt = null();
										HX_STACK_LINE(1683)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1683)
									_this->modified = true;
									HX_STACK_LINE(1683)
									(_this->length)--;
									HX_STACK_LINE(1683)
									_this->pushmod = true;
									HX_STACK_LINE(1683)
									ret1;
								}
								HX_STACK_LINE(1683)
								ret = true;
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							pre = cur;
							HX_STACK_LINE(1683)
							cur = cur->next;
						}
						HX_STACK_LINE(1683)
						ret;
					}
				}
				HX_STACK_LINE(1683)
				if (((this->pair != null()))){
					HX_STACK_LINE(1683)
					this->pair->arb = null();
					HX_STACK_LINE(1683)
					this->pair = null();
				}
			}
			HX_STACK_LINE(1683)
			::zpp_nape::phys::ZPP_Body _g = this->b2 = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1683)
			this->b1 = _g;
			HX_STACK_LINE(1683)
			this->active = false;
			HX_STACK_LINE(1683)
			this->intchange = false;
		}
		HX_STACK_LINE(1684)
		while((true)){
			HX_STACK_LINE(1684)
			if ((!((!(((this->contacts->next == null()))))))){
				HX_STACK_LINE(1684)
				break;
			}
			HX_STACK_LINE(1685)
			{
				HX_STACK_LINE(1686)
				::zpp_nape::dynamics::ZPP_Contact o;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1686)
				{
					HX_STACK_LINE(1686)
					::zpp_nape::dynamics::ZPP_Contact _this = this->contacts;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1686)
					::zpp_nape::dynamics::ZPP_Contact ret = _this->next;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1686)
					_this->pop();
					HX_STACK_LINE(1686)
					o = ret;
				}
				HX_STACK_LINE(1695)
				o->arbiter = null();
				HX_STACK_LINE(1696)
				o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
				HX_STACK_LINE(1697)
				::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1702)
			{
				HX_STACK_LINE(1702)
				::zpp_nape::dynamics::ZPP_IContact _this = this->innards;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1702)
				::zpp_nape::dynamics::ZPP_IContact ret = _this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1702)
				_this->next = ret->next;
				HX_STACK_LINE(1702)
				ret->_inuse = false;
				HX_STACK_LINE(1702)
				if (((_this->next == null()))){
					HX_STACK_LINE(1702)
					_this->pushmod = true;
				}
				HX_STACK_LINE(1702)
				_this->modified = true;
				HX_STACK_LINE(1702)
				(_this->length)--;
			}
		}
		HX_STACK_LINE(1704)
		{
			HX_STACK_LINE(1705)
			::zpp_nape::dynamics::ZPP_ColArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1714)
			{
				HX_STACK_LINE(1714)
				o->userdef_dyn_fric = false;
				HX_STACK_LINE(1714)
				o->userdef_stat_fric = false;
				HX_STACK_LINE(1714)
				o->userdef_restitution = false;
				HX_STACK_LINE(1714)
				o->userdef_rfric = false;
				HX_STACK_LINE(1714)
				::zpp_nape::shape::ZPP_Edge _g1 = o->__ref_edge2 = null();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1714)
				o->__ref_edge1 = _g1;
			}
			HX_STACK_LINE(1715)
			o->next = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(1716)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1721)
		this->pre_dt = -1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,retire,(void))

Void ZPP_ColArbiter_obj::makemutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","makemutable",0x6d41cbf1,"zpp_nape.dynamics.ZPP_ColArbiter.makemutable","zpp_nape/dynamics/Arbiter.hx",1726,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1727)
		this->_mutable = true;
		HX_STACK_LINE(1728)
		if (((this->wrap_normal != null()))){
			HX_STACK_LINE(1728)
			this->wrap_normal->zpp_inner->_immutable = false;
		}
		HX_STACK_LINE(1729)
		if (((this->wrap_contacts != null()))){
			HX_STACK_LINE(1729)
			this->wrap_contacts->zpp_inner->immutable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makemutable,(void))

Void ZPP_ColArbiter_obj::makeimmutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","makeimmutable",0xb6e45d4d,"zpp_nape.dynamics.ZPP_ColArbiter.makeimmutable","zpp_nape/dynamics/Arbiter.hx",1733,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1734)
		this->_mutable = false;
		HX_STACK_LINE(1735)
		if (((this->wrap_normal != null()))){
			HX_STACK_LINE(1735)
			this->wrap_normal->zpp_inner->_immutable = true;
		}
		HX_STACK_LINE(1736)
		if (((this->wrap_contacts != null()))){
			HX_STACK_LINE(1736)
			this->wrap_contacts->zpp_inner->immutable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makeimmutable,(void))

bool ZPP_ColArbiter_obj::contacts_adder( ::nape::dynamics::Contact x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","contacts_adder",0x72379349,"zpp_nape.dynamics.ZPP_ColArbiter.contacts_adder","zpp_nape/dynamics/Arbiter.hx",1742,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1742)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_adder,return )

Void ZPP_ColArbiter_obj::contacts_subber( ::nape::dynamics::Contact x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","contacts_subber",0x7950e8f4,"zpp_nape.dynamics.ZPP_ColArbiter.contacts_subber","zpp_nape/dynamics/Arbiter.hx",1744,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1745)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1746)
		::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
		HX_STACK_LINE(1747)
		::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
		HX_STACK_LINE(1748)
		{
			HX_STACK_LINE(1749)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1750)
			while((true)){
				HX_STACK_LINE(1750)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1750)
					break;
				}
				HX_STACK_LINE(1751)
				::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1752)
				{
					HX_STACK_LINE(1753)
					if (((c == x->zpp_inner))){
						HX_STACK_LINE(1754)
						this->contacts->erase(pre);
						HX_STACK_LINE(1755)
						this->innards->erase(prei);
						HX_STACK_LINE(1756)
						{
							HX_STACK_LINE(1757)
							::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1766)
							o->arbiter = null();
							HX_STACK_LINE(1767)
							o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
							HX_STACK_LINE(1768)
							::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1773)
						break;
					}
					HX_STACK_LINE(1775)
					pre = cx_ite;
					HX_STACK_LINE(1776)
					prei = cx_itei;
					HX_STACK_LINE(1777)
					cx_itei = cx_itei->next;
				}
				HX_STACK_LINE(1779)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_subber,(void))

Void ZPP_ColArbiter_obj::setupcontacts( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","setupcontacts",0xfc2be209,"zpp_nape.dynamics.ZPP_ColArbiter.setupcontacts","zpp_nape/dynamics/Arbiter.hx",1783,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1784)
		::nape::dynamics::ContactList _g = ::zpp_nape::util::ZPP_ContactList_obj::get(this->contacts,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1784)
		this->wrap_contacts = _g;
		HX_STACK_LINE(1785)
		this->wrap_contacts->zpp_inner->immutable = !(this->_mutable);
		HX_STACK_LINE(1786)
		this->wrap_contacts->zpp_inner->adder = this->contacts_adder_dyn();
		HX_STACK_LINE(1787)
		this->wrap_contacts->zpp_inner->dontremove = true;
		HX_STACK_LINE(1788)
		this->wrap_contacts->zpp_inner->subber = this->contacts_subber_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,setupcontacts,(void))

bool ZPP_ColArbiter_obj::cleanupContacts( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","cleanupContacts",0xed1bdb10,"zpp_nape.dynamics.ZPP_ColArbiter.cleanupContacts","zpp_nape/dynamics/Arbiter.hx",1792,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1793)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1794)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1795)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1796)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1797)
	this->hc2 = false;
	HX_STACK_LINE(1798)
	{
		HX_STACK_LINE(1799)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1800)
		while((true)){
			HX_STACK_LINE(1800)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1800)
				break;
			}
			HX_STACK_LINE(1801)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1802)
			{
				HX_STACK_LINE(1803)
				if ((((c->stamp + ::nape::Config_obj::arbiterExpirationDelay) < this->stamp))){
					HX_STACK_LINE(1804)
					::zpp_nape::dynamics::ZPP_Contact _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1804)
					{
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact _this = this->contacts;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1804)
						if (((pre == null()))){
							HX_STACK_LINE(1804)
							old = _this->next;
							HX_STACK_LINE(1804)
							ret = old->next;
							HX_STACK_LINE(1804)
							_this->next = ret;
							HX_STACK_LINE(1804)
							if (((_this->next == null()))){
								HX_STACK_LINE(1804)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1804)
							old = pre->next;
							HX_STACK_LINE(1804)
							ret = old->next;
							HX_STACK_LINE(1804)
							pre->next = ret;
							HX_STACK_LINE(1804)
							if (((ret == null()))){
								HX_STACK_LINE(1804)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1804)
						old->_inuse = false;
						HX_STACK_LINE(1804)
						_this->modified = true;
						HX_STACK_LINE(1804)
						(_this->length)--;
						HX_STACK_LINE(1804)
						_this->pushmod = true;
						HX_STACK_LINE(1804)
						_g = ret;
					}
					HX_STACK_LINE(1804)
					cx_ite = _g;
					HX_STACK_LINE(1805)
					::zpp_nape::dynamics::ZPP_IContact _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1805)
					{
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact _this = this->innards;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1805)
						if (((prei == null()))){
							HX_STACK_LINE(1805)
							old = _this->next;
							HX_STACK_LINE(1805)
							ret = old->next;
							HX_STACK_LINE(1805)
							_this->next = ret;
							HX_STACK_LINE(1805)
							if (((_this->next == null()))){
								HX_STACK_LINE(1805)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1805)
							old = prei->next;
							HX_STACK_LINE(1805)
							ret = old->next;
							HX_STACK_LINE(1805)
							prei->next = ret;
							HX_STACK_LINE(1805)
							if (((ret == null()))){
								HX_STACK_LINE(1805)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1805)
						old->_inuse = false;
						HX_STACK_LINE(1805)
						_this->modified = true;
						HX_STACK_LINE(1805)
						(_this->length)--;
						HX_STACK_LINE(1805)
						_this->pushmod = true;
						HX_STACK_LINE(1805)
						_g1 = ret;
					}
					HX_STACK_LINE(1805)
					cx_itei = _g1;
					HX_STACK_LINE(1806)
					{
						HX_STACK_LINE(1807)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1816)
						o->arbiter = null();
						HX_STACK_LINE(1817)
						o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
						HX_STACK_LINE(1818)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1823)
					continue;
				}
				HX_STACK_LINE(1825)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1826)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1827)
				c->active = (c->stamp == this->stamp);
				HX_STACK_LINE(1828)
				if ((c->active)){
					HX_STACK_LINE(1829)
					if ((fst)){
						HX_STACK_LINE(1830)
						fst = false;
						HX_STACK_LINE(1831)
						this->c1 = ci;
						HX_STACK_LINE(1832)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1843)
						this->hc2 = true;
						HX_STACK_LINE(1844)
						this->c2 = ci;
						HX_STACK_LINE(1845)
						this->oc2 = c;
					}
				}
				HX_STACK_LINE(1848)
				if (((pact != c->active))){
					HX_STACK_LINE(1848)
					this->contacts->modified = true;
				}
				HX_STACK_LINE(1849)
				pre = cx_ite;
				HX_STACK_LINE(1850)
				prei = cx_itei;
				HX_STACK_LINE(1851)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1853)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1856)
	if ((this->hc2)){
		HX_STACK_LINE(1857)
		this->hpc2 = true;
		HX_STACK_LINE(1858)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1859)
			::zpp_nape::dynamics::ZPP_IContact tmp = this->c1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1860)
			this->c1 = this->c2;
			HX_STACK_LINE(1861)
			this->c2 = tmp;
			HX_STACK_LINE(1862)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = this->oc1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1863)
			this->oc1 = this->oc2;
			HX_STACK_LINE(1864)
			this->oc2 = tmp2;
			HX_STACK_LINE(1865)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(1867)
			if ((this->oc2->posOnly)){
				HX_STACK_LINE(1868)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(1870)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1871)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(1875)
		this->hpc2 = false;
	}
	HX_STACK_LINE(1877)
	return fst;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,cleanupContacts,return )

bool ZPP_ColArbiter_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","preStep",0x26711d08,"zpp_nape.dynamics.ZPP_ColArbiter.preStep","zpp_nape/dynamics/Arbiter.hx",1882,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(1883)
	if ((this->invalidated)){
		HX_STACK_LINE(1883)
		this->invalidated = false;
		HX_STACK_LINE(1883)
		{
			HX_STACK_LINE(1883)
			if ((!(this->userdef_restitution))){
				HX_STACK_LINE(1883)
				if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(1883)
					this->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(1883)
					if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(1883)
						this->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(1883)
						this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(1883)
				if (((this->restitution < (int)0))){
					HX_STACK_LINE(1883)
					this->restitution = (int)0;
				}
				HX_STACK_LINE(1883)
				if (((this->restitution > (int)1))){
					HX_STACK_LINE(1883)
					this->restitution = (int)1;
				}
			}
			HX_STACK_LINE(1883)
			if ((!(this->userdef_dyn_fric))){
				HX_STACK_LINE(1883)
				Float _g = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1883)
				this->dyn_fric = _g;
			}
			HX_STACK_LINE(1883)
			if ((!(this->userdef_stat_fric))){
				HX_STACK_LINE(1883)
				Float _g1 = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1883)
				this->stat_fric = _g1;
			}
			HX_STACK_LINE(1883)
			if ((!(this->userdef_rfric))){
				HX_STACK_LINE(1883)
				Float _g2 = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1883)
				this->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(1886)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(1886)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1887)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1888)
	this->pre_dt = dt;
	HX_STACK_LINE(1889)
	Float mass_sum = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(mass_sum,"mass_sum");
	HX_STACK_LINE(1890)
	this->hc2 = false;
	HX_STACK_LINE(1891)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1892)
	bool statType = (bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))));		HX_STACK_VAR(statType,"statType");
	HX_STACK_LINE(1893)
	Float bias;		HX_STACK_VAR(bias,"bias");
	HX_STACK_LINE(1893)
	if ((statType)){
		HX_STACK_LINE(1893)
		if ((this->continuous)){
			HX_STACK_LINE(1893)
			bias = ::nape::Config_obj::contactContinuousStaticBiasCoef;
		}
		else{
			HX_STACK_LINE(1893)
			bias = ::nape::Config_obj::contactStaticBiasCoef;
		}
	}
	else{
		HX_STACK_LINE(1893)
		if ((this->continuous)){
			HX_STACK_LINE(1893)
			bias = ::nape::Config_obj::contactContinuousBiasCoef;
		}
		else{
			HX_STACK_LINE(1893)
			bias = ::nape::Config_obj::contactBiasCoef;
		}
	}
	HX_STACK_LINE(1894)
	this->biasCoef = bias;
	HX_STACK_LINE(1895)
	this->continuous = false;
	HX_STACK_LINE(1896)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1897)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1898)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1899)
	{
		HX_STACK_LINE(1900)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1901)
		while((true)){
			HX_STACK_LINE(1901)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1901)
				break;
			}
			HX_STACK_LINE(1902)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1903)
			{
				HX_STACK_LINE(1904)
				if ((((c->stamp + ::nape::Config_obj::arbiterExpirationDelay) < this->stamp))){
					HX_STACK_LINE(1905)
					::zpp_nape::dynamics::ZPP_Contact _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1905)
					{
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact _this = this->contacts;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1905)
						if (((pre == null()))){
							HX_STACK_LINE(1905)
							old = _this->next;
							HX_STACK_LINE(1905)
							ret = old->next;
							HX_STACK_LINE(1905)
							_this->next = ret;
							HX_STACK_LINE(1905)
							if (((_this->next == null()))){
								HX_STACK_LINE(1905)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1905)
							old = pre->next;
							HX_STACK_LINE(1905)
							ret = old->next;
							HX_STACK_LINE(1905)
							pre->next = ret;
							HX_STACK_LINE(1905)
							if (((ret == null()))){
								HX_STACK_LINE(1905)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1905)
						old->_inuse = false;
						HX_STACK_LINE(1905)
						_this->modified = true;
						HX_STACK_LINE(1905)
						(_this->length)--;
						HX_STACK_LINE(1905)
						_this->pushmod = true;
						HX_STACK_LINE(1905)
						_g3 = ret;
					}
					HX_STACK_LINE(1905)
					cx_ite = _g3;
					HX_STACK_LINE(1906)
					::zpp_nape::dynamics::ZPP_IContact _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1906)
					{
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact _this = this->innards;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1906)
						if (((prei == null()))){
							HX_STACK_LINE(1906)
							old = _this->next;
							HX_STACK_LINE(1906)
							ret = old->next;
							HX_STACK_LINE(1906)
							_this->next = ret;
							HX_STACK_LINE(1906)
							if (((_this->next == null()))){
								HX_STACK_LINE(1906)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1906)
							old = prei->next;
							HX_STACK_LINE(1906)
							ret = old->next;
							HX_STACK_LINE(1906)
							prei->next = ret;
							HX_STACK_LINE(1906)
							if (((ret == null()))){
								HX_STACK_LINE(1906)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1906)
						old->_inuse = false;
						HX_STACK_LINE(1906)
						_this->modified = true;
						HX_STACK_LINE(1906)
						(_this->length)--;
						HX_STACK_LINE(1906)
						_this->pushmod = true;
						HX_STACK_LINE(1906)
						_g4 = ret;
					}
					HX_STACK_LINE(1906)
					cx_itei = _g4;
					HX_STACK_LINE(1907)
					{
						HX_STACK_LINE(1908)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1917)
						o->arbiter = null();
						HX_STACK_LINE(1918)
						o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
						HX_STACK_LINE(1919)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1924)
					continue;
				}
				HX_STACK_LINE(1928)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1929)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1930)
				c->active = (c->stamp == this->stamp);
				HX_STACK_LINE(1931)
				if ((c->active)){
					HX_STACK_LINE(1934)
					if ((fst)){
						HX_STACK_LINE(1935)
						fst = false;
						HX_STACK_LINE(1936)
						this->c1 = ci;
						HX_STACK_LINE(1937)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1940)
						this->hc2 = true;
						HX_STACK_LINE(1941)
						this->c2 = ci;
						HX_STACK_LINE(1942)
						this->oc2 = c;
					}
					HX_STACK_LINE(1944)
					{
						HX_STACK_LINE(1945)
						ci->r2x = (c->px - this->b2->posx);
						HX_STACK_LINE(1946)
						ci->r2y = (c->py - this->b2->posy);
					}
					HX_STACK_LINE(1948)
					{
						HX_STACK_LINE(1949)
						ci->r1x = (c->px - this->b1->posx);
						HX_STACK_LINE(1950)
						ci->r1y = (c->py - this->b1->posy);
					}
					HX_STACK_LINE(1952)
					Float kt;		HX_STACK_VAR(kt,"kt");
					struct _Function_5_1{
						inline static Float Block( hx::ObjectPtr< ::zpp_nape::dynamics::ZPP_ColArbiter_obj > __this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",1952,0x26846f2e)
							{
								HX_STACK_LINE(1952)
								Float x = ((ci->r2x * __this->nx) + (ci->r2y * __this->ny));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1952)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1952)
					kt = (mass_sum + (this->b2->sinertia * _Function_5_1::Block(this,ci)));
					struct _Function_5_2{
						inline static Float Block( hx::ObjectPtr< ::zpp_nape::dynamics::ZPP_ColArbiter_obj > __this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",1953,0x26846f2e)
							{
								HX_STACK_LINE(1953)
								Float x = ((ci->r1x * __this->nx) + (ci->r1y * __this->ny));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1953)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1953)
					hx::AddEq(kt,(this->b1->sinertia * _Function_5_2::Block(this,ci)));
					HX_STACK_LINE(1954)
					if (((kt < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
						HX_STACK_LINE(1954)
						ci->tMass = (int)0;
					}
					else{
						HX_STACK_LINE(1954)
						ci->tMass = (Float(1.0) / Float(kt));
					}
					HX_STACK_LINE(1955)
					Float nt;		HX_STACK_VAR(nt,"nt");
					struct _Function_5_3{
						inline static Float Block( hx::ObjectPtr< ::zpp_nape::dynamics::ZPP_ColArbiter_obj > __this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",1955,0x26846f2e)
							{
								HX_STACK_LINE(1955)
								Float x = ((__this->ny * ci->r2x) - (__this->nx * ci->r2y));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1955)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1955)
					nt = (mass_sum + (this->b2->sinertia * _Function_5_3::Block(this,ci)));
					struct _Function_5_4{
						inline static Float Block( hx::ObjectPtr< ::zpp_nape::dynamics::ZPP_ColArbiter_obj > __this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",1956,0x26846f2e)
							{
								HX_STACK_LINE(1956)
								Float x = ((__this->ny * ci->r1x) - (__this->nx * ci->r1y));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1956)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1956)
					hx::AddEq(nt,(this->b1->sinertia * _Function_5_4::Block(this,ci)));
					HX_STACK_LINE(1957)
					if (((nt < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
						HX_STACK_LINE(1957)
						ci->nMass = (int)0;
					}
					else{
						HX_STACK_LINE(1957)
						ci->nMass = (Float(1.0) / Float(nt));
					}
					HX_STACK_LINE(1958)
					Float vrx = 0.0;		HX_STACK_VAR(vrx,"vrx");
					HX_STACK_LINE(1959)
					Float vry = 0.0;		HX_STACK_VAR(vry,"vry");
					HX_STACK_LINE(1960)
					{
						HX_STACK_LINE(1961)
						Float ang = (this->b2->angvel + this->b2->kinangvel);		HX_STACK_VAR(ang,"ang");
						HX_STACK_LINE(1962)
						vrx = ((this->b2->velx + this->b2->kinvelx) - (ci->r2y * ang));
						HX_STACK_LINE(1963)
						vry = ((this->b2->vely + this->b2->kinvely) + (ci->r2x * ang));
						HX_STACK_LINE(1964)
						ang = (this->b1->angvel + this->b1->kinangvel);
						HX_STACK_LINE(1965)
						hx::SubEq(vrx,((this->b1->velx + this->b1->kinvelx) - (ci->r1y * ang)));
						HX_STACK_LINE(1966)
						hx::SubEq(vry,((this->b1->vely + this->b1->kinvely) + (ci->r1x * ang)));
					}
					HX_STACK_LINE(1968)
					Float vdot = ((this->nx * vrx) + (this->ny * vry));		HX_STACK_VAR(vdot,"vdot");
					HX_STACK_LINE(1969)
					c->elasticity = this->restitution;
					HX_STACK_LINE(1970)
					ci->bounce = (vdot * c->elasticity);
					HX_STACK_LINE(1971)
					if (((ci->bounce > -(::nape::Config_obj::elasticThreshold)))){
						HX_STACK_LINE(1972)
						ci->bounce = (int)0;
					}
					HX_STACK_LINE(1974)
					vdot = ((vry * this->nx) - (vrx * this->ny));
					HX_STACK_LINE(1975)
					Float thr = ::nape::Config_obj::staticFrictionThreshold;		HX_STACK_VAR(thr,"thr");
					HX_STACK_LINE(1976)
					if ((((vdot * vdot) > (thr * thr)))){
						HX_STACK_LINE(1977)
						ci->friction = this->dyn_fric;
					}
					else{
						HX_STACK_LINE(1980)
						ci->friction = this->stat_fric;
					}
					HX_STACK_LINE(1982)
					hx::MultEq(ci->jnAcc,dtratio);
					HX_STACK_LINE(1983)
					hx::MultEq(ci->jtAcc,dtratio);
				}
				HX_STACK_LINE(1985)
				if (((pact != c->active))){
					HX_STACK_LINE(1985)
					this->contacts->modified = true;
				}
				HX_STACK_LINE(1986)
				pre = cx_ite;
				HX_STACK_LINE(1987)
				prei = cx_itei;
				HX_STACK_LINE(1988)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1990)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1993)
	if ((this->hc2)){
		HX_STACK_LINE(1994)
		this->hpc2 = true;
		HX_STACK_LINE(1995)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1996)
			::zpp_nape::dynamics::ZPP_IContact tmp = this->c1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1997)
			this->c1 = this->c2;
			HX_STACK_LINE(1998)
			this->c2 = tmp;
			HX_STACK_LINE(1999)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = this->oc1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2000)
			this->oc1 = this->oc2;
			HX_STACK_LINE(2001)
			this->oc2 = tmp2;
			HX_STACK_LINE(2002)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(2004)
			if ((this->oc2->posOnly)){
				HX_STACK_LINE(2005)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(2007)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(2008)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(2012)
		this->hpc2 = false;
	}
	HX_STACK_LINE(2014)
	hx::MultEq(this->jrAcc,dtratio);
	HX_STACK_LINE(2015)
	if ((!(fst))){
		HX_STACK_LINE(2016)
		this->rn1a = ((this->ny * this->c1->r1x) - (this->nx * this->c1->r1y));
		HX_STACK_LINE(2017)
		this->rt1a = ((this->c1->r1x * this->nx) + (this->c1->r1y * this->ny));
		HX_STACK_LINE(2018)
		this->rn1b = ((this->ny * this->c1->r2x) - (this->nx * this->c1->r2y));
		HX_STACK_LINE(2019)
		this->rt1b = ((this->c1->r2x * this->nx) + (this->c1->r2y * this->ny));
		HX_STACK_LINE(2020)
		this->k1x = ((this->b2->kinvelx - (this->c1->r2y * this->b2->kinangvel)) - ((this->b1->kinvelx - (this->c1->r1y * this->b1->kinangvel))));
		HX_STACK_LINE(2021)
		this->k1y = ((this->b2->kinvely + (this->c1->r2x * this->b2->kinangvel)) - ((this->b1->kinvely + (this->c1->r1x * this->b1->kinangvel))));
	}
	HX_STACK_LINE(2023)
	if ((this->hc2)){
		HX_STACK_LINE(2024)
		this->rn2a = ((this->ny * this->c2->r1x) - (this->nx * this->c2->r1y));
		HX_STACK_LINE(2025)
		this->rt2a = ((this->c2->r1x * this->nx) + (this->c2->r1y * this->ny));
		HX_STACK_LINE(2026)
		this->rn2b = ((this->ny * this->c2->r2x) - (this->nx * this->c2->r2y));
		HX_STACK_LINE(2027)
		this->rt2b = ((this->c2->r2x * this->nx) + (this->c2->r2y * this->ny));
		HX_STACK_LINE(2028)
		this->k2x = ((this->b2->kinvelx - (this->c2->r2y * this->b2->kinangvel)) - ((this->b1->kinvelx - (this->c2->r1y * this->b1->kinangvel))));
		HX_STACK_LINE(2029)
		this->k2y = ((this->b2->kinvely + (this->c2->r2x * this->b2->kinangvel)) - ((this->b1->kinvely + (this->c2->r1x * this->b1->kinangvel))));
		HX_STACK_LINE(2030)
		{
			HX_STACK_LINE(2031)
			this->kMassa = ((mass_sum + ((this->b1->sinertia * this->rn1a) * this->rn1a)) + ((this->b2->sinertia * this->rn1b) * this->rn1b));
			HX_STACK_LINE(2032)
			this->kMassb = ((mass_sum + ((this->b1->sinertia * this->rn1a) * this->rn2a)) + ((this->b2->sinertia * this->rn1b) * this->rn2b));
			HX_STACK_LINE(2033)
			this->kMassc = ((mass_sum + ((this->b1->sinertia * this->rn2a) * this->rn2a)) + ((this->b2->sinertia * this->rn2b) * this->rn2b));
		}
		HX_STACK_LINE(2035)
		Float norm = (((this->kMassa * this->kMassa) + (((int)2 * this->kMassb) * this->kMassb)) + (this->kMassc * this->kMassc));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(2036)
		if (((norm < (::nape::Config_obj::illConditionedThreshold * (((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb))))))){
			HX_STACK_LINE(2037)
			{
				HX_STACK_LINE(2038)
				this->Ka = this->kMassa;
				HX_STACK_LINE(2039)
				this->Kb = this->kMassb;
				HX_STACK_LINE(2040)
				this->Kc = this->kMassc;
			}
			HX_STACK_LINE(2042)
			{
				HX_STACK_LINE(2043)
				Float det = ((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb));		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(2044)
				if (((det != det))){
					HX_STACK_LINE(2045)
					Float _g5 = this->kMassc = (int)0;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2045)
					Float _g6 = this->kMassb = _g5;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(2045)
					this->kMassa = _g6;
					HX_STACK_LINE(2046)
					(int)3;
				}
				else{
					HX_STACK_LINE(2048)
					if (((det == (int)0))){
						HX_STACK_LINE(2049)
						int flag = (int)0;		HX_STACK_VAR(flag,"flag");
						HX_STACK_LINE(2050)
						if (((this->kMassa != (int)0))){
							HX_STACK_LINE(2050)
							this->kMassa = (Float((int)1) / Float(this->kMassa));
						}
						else{
							HX_STACK_LINE(2052)
							this->kMassa = (int)0;
							HX_STACK_LINE(2053)
							hx::OrEq(flag,(int)1);
						}
						HX_STACK_LINE(2055)
						if (((this->kMassc != (int)0))){
							HX_STACK_LINE(2055)
							this->kMassc = (Float((int)1) / Float(this->kMassc));
						}
						else{
							HX_STACK_LINE(2057)
							this->kMassc = (int)0;
							HX_STACK_LINE(2058)
							hx::OrEq(flag,(int)2);
						}
						HX_STACK_LINE(2060)
						this->kMassb = (int)0;
						HX_STACK_LINE(2061)
						flag;
					}
					else{
						HX_STACK_LINE(2064)
						det = (Float((int)1) / Float(det));
						HX_STACK_LINE(2065)
						Float t = (this->kMassc * det);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2066)
						this->kMassc = (this->kMassa * det);
						HX_STACK_LINE(2067)
						this->kMassa = t;
						HX_STACK_LINE(2068)
						hx::MultEq(this->kMassb,-(det));
						HX_STACK_LINE(2069)
						(int)0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2074)
			this->hc2 = false;
			HX_STACK_LINE(2075)
			if (((this->oc2->dist < this->oc1->dist))){
				HX_STACK_LINE(2076)
				::zpp_nape::dynamics::ZPP_IContact t = this->c1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2077)
				this->c1 = this->c2;
				HX_STACK_LINE(2078)
				this->c2 = t;
			}
			HX_STACK_LINE(2080)
			this->oc2->active = false;
			HX_STACK_LINE(2081)
			this->contacts->modified = true;
		}
	}
	HX_STACK_LINE(2084)
	{
		HX_STACK_LINE(2085)
		this->surfacex = this->b2->svelx;
		HX_STACK_LINE(2086)
		this->surfacey = this->b2->svely;
		HX_STACK_LINE(2095)
		{
		}
	}
	HX_STACK_LINE(2104)
	{
		HX_STACK_LINE(2105)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(2114)
		hx::AddEq(this->surfacex,(this->b1->svelx * t));
		HX_STACK_LINE(2115)
		hx::AddEq(this->surfacey,(this->b1->svely * t));
	}
	HX_STACK_LINE(2117)
	{
		HX_STACK_LINE(2118)
		this->surfacex = -(this->surfacex);
		HX_STACK_LINE(2119)
		this->surfacey = -(this->surfacey);
	}
	HX_STACK_LINE(2121)
	this->rMass = (this->b1->sinertia + this->b2->sinertia);
	HX_STACK_LINE(2122)
	if (((this->rMass != (int)0))){
		HX_STACK_LINE(2122)
		this->rMass = (Float((int)1) / Float(this->rMass));
	}
	HX_STACK_LINE(2123)
	return fst;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,preStep,return )

Void ZPP_ColArbiter_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","warmStart",0xfe7d3416,"zpp_nape.dynamics.ZPP_ColArbiter.warmStart","zpp_nape/dynamics/Arbiter.hx",2127,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2128)
		{
			HX_STACK_LINE(2129)
			Float jx = ((this->nx * this->c1->jnAcc) - (this->ny * this->c1->jtAcc));		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2130)
			Float jy = ((this->ny * this->c1->jnAcc) + (this->nx * this->c1->jtAcc));		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2131)
			{
				HX_STACK_LINE(2132)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2141)
				hx::SubEq(this->b1->velx,(jx * t));
				HX_STACK_LINE(2142)
				hx::SubEq(this->b1->vely,(jy * t));
			}
			HX_STACK_LINE(2144)
			hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((jy * this->c1->r1x) - (jx * this->c1->r1y)))));
			HX_STACK_LINE(2145)
			{
				HX_STACK_LINE(2146)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2155)
				hx::AddEq(this->b2->velx,(jx * t));
				HX_STACK_LINE(2156)
				hx::AddEq(this->b2->vely,(jy * t));
			}
			HX_STACK_LINE(2158)
			hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((jy * this->c1->r2x) - (jx * this->c1->r2y)))));
		}
		HX_STACK_LINE(2160)
		if ((this->hc2)){
			HX_STACK_LINE(2161)
			Float jx = ((this->nx * this->c2->jnAcc) - (this->ny * this->c2->jtAcc));		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2162)
			Float jy = ((this->ny * this->c2->jnAcc) + (this->nx * this->c2->jtAcc));		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2163)
			{
				HX_STACK_LINE(2164)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2173)
				hx::SubEq(this->b1->velx,(jx * t));
				HX_STACK_LINE(2174)
				hx::SubEq(this->b1->vely,(jy * t));
			}
			HX_STACK_LINE(2176)
			hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((jy * this->c2->r1x) - (jx * this->c2->r1y)))));
			HX_STACK_LINE(2177)
			{
				HX_STACK_LINE(2178)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2187)
				hx::AddEq(this->b2->velx,(jx * t));
				HX_STACK_LINE(2188)
				hx::AddEq(this->b2->vely,(jy * t));
			}
			HX_STACK_LINE(2190)
			hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((jy * this->c2->r2x) - (jx * this->c2->r2y)))));
		}
		HX_STACK_LINE(2192)
		hx::AddEq(this->b2->angvel,(this->jrAcc * this->b2->iinertia));
		HX_STACK_LINE(2193)
		hx::SubEq(this->b1->angvel,(this->jrAcc * this->b1->iinertia));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,warmStart,(void))

Void ZPP_ColArbiter_obj::applyImpulseVel( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","applyImpulseVel",0x4e2344af,"zpp_nape.dynamics.ZPP_ColArbiter.applyImpulseVel","zpp_nape/dynamics/Arbiter.hx",2197,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2198)
		Float jx;		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(2199)
		Float jy;		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(2200)
		Float j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(2201)
		Float jMax;		HX_STACK_VAR(jMax,"jMax");
		HX_STACK_LINE(2202)
		Float jOld;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(2203)
		Float cjAcc;		HX_STACK_VAR(cjAcc,"cjAcc");
		HX_STACK_LINE(2204)
		Float v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));		HX_STACK_VAR(v1x,"v1x");
		HX_STACK_LINE(2205)
		Float v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));		HX_STACK_VAR(v1y,"v1y");
		HX_STACK_LINE(2206)
		j = (((((v1y * this->nx) - (v1x * this->ny)) + this->surfacex)) * this->c1->tMass);
		HX_STACK_LINE(2207)
		jMax = (this->c1->friction * this->c1->jnAcc);
		HX_STACK_LINE(2208)
		jOld = this->c1->jtAcc;
		HX_STACK_LINE(2209)
		cjAcc = (jOld - j);
		HX_STACK_LINE(2210)
		if (((cjAcc > jMax))){
			HX_STACK_LINE(2210)
			cjAcc = jMax;
		}
		else{
			HX_STACK_LINE(2210)
			if (((cjAcc < -(jMax)))){
				HX_STACK_LINE(2210)
				cjAcc = -(jMax);
			}
		}
		HX_STACK_LINE(2211)
		j = (cjAcc - jOld);
		HX_STACK_LINE(2212)
		this->c1->jtAcc = cjAcc;
		HX_STACK_LINE(2213)
		jx = (-(this->ny) * j);
		HX_STACK_LINE(2214)
		jy = (this->nx * j);
		HX_STACK_LINE(2215)
		hx::AddEq(this->b2->velx,(jx * this->b2->imass));
		HX_STACK_LINE(2216)
		hx::AddEq(this->b2->vely,(jy * this->b2->imass));
		HX_STACK_LINE(2217)
		hx::SubEq(this->b1->velx,(jx * this->b1->imass));
		HX_STACK_LINE(2218)
		hx::SubEq(this->b1->vely,(jy * this->b1->imass));
		HX_STACK_LINE(2219)
		hx::AddEq(this->b2->angvel,((this->rt1b * j) * this->b2->iinertia));
		HX_STACK_LINE(2220)
		hx::SubEq(this->b1->angvel,((this->rt1a * j) * this->b1->iinertia));
		HX_STACK_LINE(2221)
		if ((this->hc2)){
			HX_STACK_LINE(2222)
			Float v2x = (((this->k2x + this->b2->velx) - (this->c2->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c2->r1y * this->b1->angvel))));		HX_STACK_VAR(v2x,"v2x");
			HX_STACK_LINE(2223)
			Float v2y = (((this->k2y + this->b2->vely) + (this->c2->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c2->r1x * this->b1->angvel))));		HX_STACK_VAR(v2y,"v2y");
			HX_STACK_LINE(2224)
			j = (((((v2y * this->nx) - (v2x * this->ny)) + this->surfacex)) * this->c2->tMass);
			HX_STACK_LINE(2225)
			jMax = (this->c2->friction * this->c2->jnAcc);
			HX_STACK_LINE(2226)
			jOld = this->c2->jtAcc;
			HX_STACK_LINE(2227)
			cjAcc = (jOld - j);
			HX_STACK_LINE(2228)
			if (((cjAcc > jMax))){
				HX_STACK_LINE(2228)
				cjAcc = jMax;
			}
			else{
				HX_STACK_LINE(2228)
				if (((cjAcc < -(jMax)))){
					HX_STACK_LINE(2228)
					cjAcc = -(jMax);
				}
			}
			HX_STACK_LINE(2229)
			j = (cjAcc - jOld);
			HX_STACK_LINE(2230)
			this->c2->jtAcc = cjAcc;
			HX_STACK_LINE(2231)
			jx = (-(this->ny) * j);
			HX_STACK_LINE(2232)
			jy = (this->nx * j);
			HX_STACK_LINE(2233)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2234)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2235)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2236)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2237)
			hx::AddEq(this->b2->angvel,((this->rt2b * j) * this->b2->iinertia));
			HX_STACK_LINE(2238)
			hx::SubEq(this->b1->angvel,((this->rt2a * j) * this->b1->iinertia));
			HX_STACK_LINE(2239)
			v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));
			HX_STACK_LINE(2240)
			v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));
			HX_STACK_LINE(2241)
			v2x = (((this->k2x + this->b2->velx) - (this->c2->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c2->r1y * this->b1->angvel))));
			HX_STACK_LINE(2242)
			v2y = (((this->k2y + this->b2->vely) + (this->c2->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c2->r1x * this->b1->angvel))));
			HX_STACK_LINE(2243)
			Float ax = this->c1->jnAcc;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(2244)
			Float ay = this->c2->jnAcc;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(2261)
			Float jnx = (((((v1x * this->nx) + (v1y * this->ny)) + this->surfacey) + this->c1->bounce) - (((this->Ka * ax) + (this->Kb * ay))));		HX_STACK_VAR(jnx,"jnx");
			HX_STACK_LINE(2262)
			Float jny = (((((v2x * this->nx) + (v2y * this->ny)) + this->surfacey) + this->c2->bounce) - (((this->Kb * ax) + (this->Kc * ay))));		HX_STACK_VAR(jny,"jny");
			HX_STACK_LINE(2263)
			Float xx = -((((this->kMassa * jnx) + (this->kMassb * jny))));		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(2264)
			Float xy = -((((this->kMassb * jnx) + (this->kMassc * jny))));		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(2265)
			if (((bool((xx >= (int)0)) && bool((xy >= (int)0))))){
				HX_STACK_LINE(2266)
				{
					HX_STACK_LINE(2267)
					jnx = (xx - ax);
					HX_STACK_LINE(2268)
					jny = (xy - ay);
				}
				HX_STACK_LINE(2270)
				this->c1->jnAcc = xx;
				HX_STACK_LINE(2271)
				this->c2->jnAcc = xy;
			}
			else{
				HX_STACK_LINE(2274)
				xx = (-(this->c1->nMass) * jnx);
				HX_STACK_LINE(2275)
				if (((bool((xx >= (int)0)) && bool((((this->Kb * xx) + jny) >= (int)0))))){
					HX_STACK_LINE(2276)
					jnx = (xx - ax);
					HX_STACK_LINE(2277)
					jny = -(ay);
					HX_STACK_LINE(2278)
					this->c1->jnAcc = xx;
					HX_STACK_LINE(2279)
					this->c2->jnAcc = (int)0;
				}
				else{
					HX_STACK_LINE(2282)
					xy = (-(this->c2->nMass) * jny);
					HX_STACK_LINE(2283)
					if (((bool((xy >= (int)0)) && bool((((this->Kb * xy) + jnx) >= (int)0))))){
						HX_STACK_LINE(2284)
						jnx = -(ax);
						HX_STACK_LINE(2285)
						jny = (xy - ay);
						HX_STACK_LINE(2286)
						this->c1->jnAcc = (int)0;
						HX_STACK_LINE(2287)
						this->c2->jnAcc = xy;
					}
					else{
						HX_STACK_LINE(2289)
						if (((bool((jnx >= (int)0)) && bool((jny >= (int)0))))){
							HX_STACK_LINE(2290)
							jnx = -(ax);
							HX_STACK_LINE(2291)
							jny = -(ay);
							HX_STACK_LINE(2292)
							Float _g = this->c2->jnAcc = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2292)
							this->c1->jnAcc = _g;
						}
						else{
							HX_STACK_LINE(2295)
							jnx = (int)0;
							HX_STACK_LINE(2296)
							jny = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(2300)
			j = (jnx + jny);
			HX_STACK_LINE(2301)
			jx = (this->nx * j);
			HX_STACK_LINE(2302)
			jy = (this->ny * j);
			HX_STACK_LINE(2303)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2304)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2305)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2306)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2307)
			hx::AddEq(this->b2->angvel,((((this->rn1b * jnx) + (this->rn2b * jny))) * this->b2->iinertia));
			HX_STACK_LINE(2308)
			hx::SubEq(this->b1->angvel,((((this->rn1a * jnx) + (this->rn2a * jny))) * this->b1->iinertia));
		}
		else{
			HX_STACK_LINE(2311)
			if (((this->radius != 0.0))){
				HX_STACK_LINE(2312)
				Float dw = (this->b2->angvel - this->b1->angvel);		HX_STACK_VAR(dw,"dw");
				HX_STACK_LINE(2313)
				j = (dw * this->rMass);
				HX_STACK_LINE(2314)
				jMax = (this->rfric * this->c1->jnAcc);
				HX_STACK_LINE(2315)
				jOld = this->jrAcc;
				HX_STACK_LINE(2316)
				hx::SubEq(this->jrAcc,j);
				HX_STACK_LINE(2317)
				if (((this->jrAcc > jMax))){
					HX_STACK_LINE(2317)
					this->jrAcc = jMax;
				}
				else{
					HX_STACK_LINE(2317)
					if (((this->jrAcc < -(jMax)))){
						HX_STACK_LINE(2317)
						this->jrAcc = -(jMax);
					}
				}
				HX_STACK_LINE(2318)
				j = (this->jrAcc - jOld);
				HX_STACK_LINE(2319)
				hx::AddEq(this->b2->angvel,(j * this->b2->iinertia));
				HX_STACK_LINE(2320)
				hx::SubEq(this->b1->angvel,(j * this->b1->iinertia));
			}
			HX_STACK_LINE(2322)
			v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));
			HX_STACK_LINE(2323)
			v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));
			HX_STACK_LINE(2324)
			j = ((((this->c1->bounce + (((this->nx * v1x) + (this->ny * v1y)))) + this->surfacey)) * this->c1->nMass);
			HX_STACK_LINE(2325)
			jOld = this->c1->jnAcc;
			HX_STACK_LINE(2326)
			cjAcc = (jOld - j);
			HX_STACK_LINE(2327)
			if (((cjAcc < 0.0))){
				HX_STACK_LINE(2327)
				cjAcc = 0.0;
			}
			HX_STACK_LINE(2328)
			j = (cjAcc - jOld);
			HX_STACK_LINE(2329)
			this->c1->jnAcc = cjAcc;
			HX_STACK_LINE(2330)
			jx = (this->nx * j);
			HX_STACK_LINE(2331)
			jy = (this->ny * j);
			HX_STACK_LINE(2332)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2333)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2334)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2335)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2336)
			hx::AddEq(this->b2->angvel,((this->rn1b * j) * this->b2->iinertia));
			HX_STACK_LINE(2337)
			hx::SubEq(this->b1->angvel,((this->rn1a * j) * this->b1->iinertia));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulseVel,(void))

Void ZPP_ColArbiter_obj::applyImpulsePos( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","applyImpulsePos",0x4e1ebfe6,"zpp_nape.dynamics.ZPP_ColArbiter.applyImpulsePos","zpp_nape/dynamics/Arbiter.hx",2343,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2343)
		if (((this->ptype == (int)2))){
			HX_STACK_LINE(2344)
			::zpp_nape::dynamics::ZPP_IContact c = this->c1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(2345)
			Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(2346)
			Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(2347)
			Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
			HX_STACK_LINE(2348)
			Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
			HX_STACK_LINE(2349)
			{
				HX_STACK_LINE(2350)
				r2x = ((this->b2->axisy * c->lr2x) - (this->b2->axisx * c->lr2y));
				HX_STACK_LINE(2351)
				r2y = ((c->lr2x * this->b2->axisx) + (c->lr2y * this->b2->axisy));
			}
			HX_STACK_LINE(2353)
			{
				HX_STACK_LINE(2354)
				Float t = 1.0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2363)
				hx::AddEq(r2x,(this->b2->posx * t));
				HX_STACK_LINE(2364)
				hx::AddEq(r2y,(this->b2->posy * t));
			}
			HX_STACK_LINE(2366)
			Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
			HX_STACK_LINE(2367)
			Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
			HX_STACK_LINE(2368)
			{
				HX_STACK_LINE(2369)
				r1x = ((this->b1->axisy * c->lr1x) - (this->b1->axisx * c->lr1y));
				HX_STACK_LINE(2370)
				r1y = ((c->lr1x * this->b1->axisx) + (c->lr1y * this->b1->axisy));
			}
			HX_STACK_LINE(2372)
			{
				HX_STACK_LINE(2373)
				Float t = 1.0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2382)
				hx::AddEq(r1x,(this->b1->posx * t));
				HX_STACK_LINE(2383)
				hx::AddEq(r1y,(this->b1->posy * t));
			}
			HX_STACK_LINE(2385)
			Float dx1 = 0.0;		HX_STACK_VAR(dx1,"dx1");
			HX_STACK_LINE(2386)
			Float dy1 = 0.0;		HX_STACK_VAR(dy1,"dy1");
			HX_STACK_LINE(2387)
			{
				HX_STACK_LINE(2388)
				dx1 = (r2x - r1x);
				HX_STACK_LINE(2389)
				dy1 = (r2y - r1y);
			}
			HX_STACK_LINE(2391)
			Float dl = ::Math_obj::sqrt(((dx1 * dx1) + (dy1 * dy1)));		HX_STACK_VAR(dl,"dl");
			HX_STACK_LINE(2392)
			Float r = (this->radius - ::nape::Config_obj::collisionSlop);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2393)
			Float err = (dl - r);		HX_STACK_VAR(err,"err");
			HX_STACK_LINE(2394)
			if (((((dx1 * this->nx) + (dy1 * this->ny)) < (int)0))){
				HX_STACK_LINE(2395)
				{
					HX_STACK_LINE(2396)
					dx1 = -(dx1);
					HX_STACK_LINE(2397)
					dy1 = -(dy1);
				}
				HX_STACK_LINE(2399)
				hx::SubEq(err,this->radius);
			}
			HX_STACK_LINE(2401)
			if (((err < (int)0))){
				HX_STACK_LINE(2402)
				if (((dl < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(2403)
					if (((this->b1->smass != 0.0))){
						HX_STACK_LINE(2403)
						hx::AddEq(this->b1->posx,(::nape::Config_obj::epsilon * (int)10));
					}
					else{
						HX_STACK_LINE(2404)
						hx::AddEq(this->b2->posx,(::nape::Config_obj::epsilon * (int)10));
					}
				}
				else{
					HX_STACK_LINE(2407)
					{
						HX_STACK_LINE(2408)
						Float t = (Float(1.0) / Float(dl));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2417)
						hx::MultEq(dx1,t);
						HX_STACK_LINE(2418)
						hx::MultEq(dy1,t);
					}
					HX_STACK_LINE(2420)
					Float px = (0.5 * ((r1x + r2x)));		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(2421)
					Float py = (0.5 * ((r1y + r2y)));		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(2438)
					Float pen = (dl - r);		HX_STACK_VAR(pen,"pen");
					HX_STACK_LINE(2439)
					{
						HX_STACK_LINE(2440)
						r1x = (px - this->b1->posx);
						HX_STACK_LINE(2441)
						r1y = (py - this->b1->posy);
					}
					HX_STACK_LINE(2443)
					{
						HX_STACK_LINE(2444)
						r2x = (px - this->b2->posx);
						HX_STACK_LINE(2445)
						r2y = (py - this->b2->posy);
					}
					HX_STACK_LINE(2447)
					Float rn1 = ((dy1 * r1x) - (dx1 * r1y));		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2448)
					Float rn2 = ((dy1 * r2x) - (dx1 * r2y));		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2449)
					Float K = (((this->b2->smass + ((rn2 * rn2) * this->b2->sinertia)) + this->b1->smass) + ((rn1 * rn1) * this->b1->sinertia));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2450)
					if (((K != (int)0))){
						HX_STACK_LINE(2451)
						Float jn = (Float((-(this->biasCoef) * pen)) / Float(K));		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2452)
						Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2453)
						Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2454)
						{
							HX_STACK_LINE(2455)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2464)
							Jx = (dx1 * t);
							HX_STACK_LINE(2465)
							Jy = (dy1 * t);
						}
						HX_STACK_LINE(2467)
						{
							HX_STACK_LINE(2468)
							Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2477)
							hx::SubEq(this->b1->posx,(Jx * t));
							HX_STACK_LINE(2478)
							hx::SubEq(this->b1->posy,(Jy * t));
						}
						HX_STACK_LINE(2480)
						{
							HX_STACK_LINE(2480)
							::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2480)
							Float dr = ((-(rn1) * this->b1->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2480)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2480)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2480)
								Float _g = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2480)
								_this->axisx = _g;
								HX_STACK_LINE(2480)
								Float _g1 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(2480)
								_this->axisy = _g1;
								HX_STACK_LINE(2480)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2480)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2480)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2480)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2480)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2480)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2480)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2481)
						{
							HX_STACK_LINE(2482)
							Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2491)
							hx::AddEq(this->b2->posx,(Jx * t));
							HX_STACK_LINE(2492)
							hx::AddEq(this->b2->posy,(Jy * t));
						}
						HX_STACK_LINE(2494)
						{
							HX_STACK_LINE(2494)
							::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2494)
							Float dr = ((rn2 * this->b2->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2494)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2494)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2494)
								Float _g2 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(2494)
								_this->axisx = _g2;
								HX_STACK_LINE(2494)
								Float _g3 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(2494)
								_this->axisy = _g3;
								HX_STACK_LINE(2494)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2494)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2494)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2494)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2494)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2494)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2494)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2500)
			Float gnormx = 0.0;		HX_STACK_VAR(gnormx,"gnormx");
			HX_STACK_LINE(2501)
			Float gnormy = 0.0;		HX_STACK_VAR(gnormy,"gnormy");
			HX_STACK_LINE(2502)
			Float gproj;		HX_STACK_VAR(gproj,"gproj");
			HX_STACK_LINE(2503)
			Float clip1x = 0.0;		HX_STACK_VAR(clip1x,"clip1x");
			HX_STACK_LINE(2504)
			Float clip1y = 0.0;		HX_STACK_VAR(clip1y,"clip1y");
			HX_STACK_LINE(2505)
			Float clip2x = (int)0;		HX_STACK_VAR(clip2x,"clip2x");
			HX_STACK_LINE(2506)
			Float clip2y = (int)0;		HX_STACK_VAR(clip2y,"clip2y");
			HX_STACK_LINE(2523)
			if (((this->ptype == (int)0))){
				HX_STACK_LINE(2524)
				{
					HX_STACK_LINE(2525)
					gnormx = ((this->b1->axisy * this->lnormx) - (this->b1->axisx * this->lnormy));
					HX_STACK_LINE(2526)
					gnormy = ((this->lnormx * this->b1->axisx) + (this->lnormy * this->b1->axisy));
				}
				HX_STACK_LINE(2528)
				gproj = (this->lproj + (((gnormx * this->b1->posx) + (gnormy * this->b1->posy))));
				HX_STACK_LINE(2529)
				{
					HX_STACK_LINE(2530)
					clip1x = ((this->b2->axisy * this->c1->lr1x) - (this->b2->axisx * this->c1->lr1y));
					HX_STACK_LINE(2531)
					clip1y = ((this->c1->lr1x * this->b2->axisx) + (this->c1->lr1y * this->b2->axisy));
				}
				HX_STACK_LINE(2533)
				{
					HX_STACK_LINE(2534)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2543)
					hx::AddEq(clip1x,(this->b2->posx * t));
					HX_STACK_LINE(2544)
					hx::AddEq(clip1y,(this->b2->posy * t));
				}
				HX_STACK_LINE(2546)
				if ((this->hpc2)){
					HX_STACK_LINE(2547)
					{
						HX_STACK_LINE(2548)
						clip2x = ((this->b2->axisy * this->c2->lr1x) - (this->b2->axisx * this->c2->lr1y));
						HX_STACK_LINE(2549)
						clip2y = ((this->c2->lr1x * this->b2->axisx) + (this->c2->lr1y * this->b2->axisy));
					}
					HX_STACK_LINE(2551)
					{
						HX_STACK_LINE(2552)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2561)
						hx::AddEq(clip2x,(this->b2->posx * t));
						HX_STACK_LINE(2562)
						hx::AddEq(clip2y,(this->b2->posy * t));
					}
				}
			}
			else{
				HX_STACK_LINE(2567)
				{
					HX_STACK_LINE(2568)
					gnormx = ((this->b2->axisy * this->lnormx) - (this->b2->axisx * this->lnormy));
					HX_STACK_LINE(2569)
					gnormy = ((this->lnormx * this->b2->axisx) + (this->lnormy * this->b2->axisy));
				}
				HX_STACK_LINE(2571)
				gproj = (this->lproj + (((gnormx * this->b2->posx) + (gnormy * this->b2->posy))));
				HX_STACK_LINE(2572)
				{
					HX_STACK_LINE(2573)
					clip1x = ((this->b1->axisy * this->c1->lr1x) - (this->b1->axisx * this->c1->lr1y));
					HX_STACK_LINE(2574)
					clip1y = ((this->c1->lr1x * this->b1->axisx) + (this->c1->lr1y * this->b1->axisy));
				}
				HX_STACK_LINE(2576)
				{
					HX_STACK_LINE(2577)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2586)
					hx::AddEq(clip1x,(this->b1->posx * t));
					HX_STACK_LINE(2587)
					hx::AddEq(clip1y,(this->b1->posy * t));
				}
				HX_STACK_LINE(2589)
				if ((this->hpc2)){
					HX_STACK_LINE(2590)
					{
						HX_STACK_LINE(2591)
						clip2x = ((this->b1->axisy * this->c2->lr1x) - (this->b1->axisx * this->c2->lr1y));
						HX_STACK_LINE(2592)
						clip2y = ((this->c2->lr1x * this->b1->axisx) + (this->c2->lr1y * this->b1->axisy));
					}
					HX_STACK_LINE(2594)
					{
						HX_STACK_LINE(2595)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2604)
						hx::AddEq(clip2x,(this->b1->posx * t));
						HX_STACK_LINE(2605)
						hx::AddEq(clip2y,(this->b1->posy * t));
					}
				}
			}
			HX_STACK_LINE(2609)
			Float err1 = ((((clip1x * gnormx) + (clip1y * gnormy)) - gproj) - this->radius);		HX_STACK_VAR(err1,"err1");
			HX_STACK_LINE(2610)
			hx::AddEq(err1,::nape::Config_obj::collisionSlop);
			HX_STACK_LINE(2611)
			Float err2 = 0.0;		HX_STACK_VAR(err2,"err2");
			HX_STACK_LINE(2612)
			if ((this->hpc2)){
				HX_STACK_LINE(2613)
				err2 = ((((clip2x * gnormx) + (clip2y * gnormy)) - gproj) - this->radius);
				HX_STACK_LINE(2614)
				hx::AddEq(err2,::nape::Config_obj::collisionSlop);
			}
			HX_STACK_LINE(2616)
			if (((bool((err1 < (int)0)) || bool((err2 < (int)0))))){
				HX_STACK_LINE(2617)
				if ((this->rev)){
					HX_STACK_LINE(2618)
					gnormx = -(gnormx);
					HX_STACK_LINE(2619)
					gnormy = -(gnormy);
				}
				HX_STACK_LINE(2621)
				Float c1r1x = 0.0;		HX_STACK_VAR(c1r1x,"c1r1x");
				HX_STACK_LINE(2622)
				Float c1r1y = 0.0;		HX_STACK_VAR(c1r1y,"c1r1y");
				HX_STACK_LINE(2623)
				{
					HX_STACK_LINE(2624)
					c1r1x = (clip1x - this->b1->posx);
					HX_STACK_LINE(2625)
					c1r1y = (clip1y - this->b1->posy);
				}
				HX_STACK_LINE(2627)
				Float c1r2x = 0.0;		HX_STACK_VAR(c1r2x,"c1r2x");
				HX_STACK_LINE(2628)
				Float c1r2y = 0.0;		HX_STACK_VAR(c1r2y,"c1r2y");
				HX_STACK_LINE(2629)
				{
					HX_STACK_LINE(2630)
					c1r2x = (clip1x - this->b2->posx);
					HX_STACK_LINE(2631)
					c1r2y = (clip1y - this->b2->posy);
				}
				HX_STACK_LINE(2633)
				Float c2r1x = (int)0;		HX_STACK_VAR(c2r1x,"c2r1x");
				HX_STACK_LINE(2634)
				Float c2r1y = (int)0;		HX_STACK_VAR(c2r1y,"c2r1y");
				HX_STACK_LINE(2651)
				Float c2r2x = (int)0;		HX_STACK_VAR(c2r2x,"c2r2x");
				HX_STACK_LINE(2652)
				Float c2r2y = (int)0;		HX_STACK_VAR(c2r2y,"c2r2y");
				HX_STACK_LINE(2669)
				if ((this->hpc2)){
					HX_STACK_LINE(2670)
					{
						HX_STACK_LINE(2671)
						c2r1x = (clip2x - this->b1->posx);
						HX_STACK_LINE(2672)
						c2r1y = (clip2y - this->b1->posy);
					}
					HX_STACK_LINE(2674)
					{
						HX_STACK_LINE(2675)
						c2r2x = (clip2x - this->b2->posx);
						HX_STACK_LINE(2676)
						c2r2y = (clip2y - this->b2->posy);
					}
					HX_STACK_LINE(2678)
					Float rn1a = ((gnormy * c1r1x) - (gnormx * c1r1y));		HX_STACK_VAR(rn1a,"rn1a");
					HX_STACK_LINE(2679)
					Float rn1b = ((gnormy * c1r2x) - (gnormx * c1r2y));		HX_STACK_VAR(rn1b,"rn1b");
					HX_STACK_LINE(2680)
					Float rn2a = ((gnormy * c2r1x) - (gnormx * c2r1y));		HX_STACK_VAR(rn2a,"rn2a");
					HX_STACK_LINE(2681)
					Float rn2b = ((gnormy * c2r2x) - (gnormx * c2r2y));		HX_STACK_VAR(rn2b,"rn2b");
					HX_STACK_LINE(2682)
					Float mass_sum = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(mass_sum,"mass_sum");
					HX_STACK_LINE(2683)
					{
						HX_STACK_LINE(2684)
						this->kMassa = ((mass_sum + ((this->b1->sinertia * rn1a) * rn1a)) + ((this->b2->sinertia * rn1b) * rn1b));
						HX_STACK_LINE(2685)
						this->kMassb = ((mass_sum + ((this->b1->sinertia * rn1a) * rn2a)) + ((this->b2->sinertia * rn1b) * rn2b));
						HX_STACK_LINE(2686)
						this->kMassc = ((mass_sum + ((this->b1->sinertia * rn2a) * rn2a)) + ((this->b2->sinertia * rn2b) * rn2b));
					}
					HX_STACK_LINE(2688)
					Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
					HX_STACK_LINE(2689)
					Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
					HX_STACK_LINE(2690)
					Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
					HX_STACK_LINE(2691)
					{
						HX_STACK_LINE(2692)
						Ka = this->kMassa;
						HX_STACK_LINE(2693)
						Kb = this->kMassb;
						HX_STACK_LINE(2694)
						Kc = this->kMassc;
					}
					HX_STACK_LINE(2696)
					Float bx = (err1 * this->biasCoef);		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(2697)
					Float by = (err2 * this->biasCoef);		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(2714)
					while((true)){
						HX_STACK_LINE(2715)
						Float xx = 0.0;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(2716)
						Float xy = 0.0;		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(2717)
						{
							HX_STACK_LINE(2718)
							xx = bx;
							HX_STACK_LINE(2719)
							xy = by;
							HX_STACK_LINE(2728)
							{
							}
						}
						HX_STACK_LINE(2737)
						{
							HX_STACK_LINE(2738)
							xx = -(xx);
							HX_STACK_LINE(2739)
							xy = -(xy);
						}
						HX_STACK_LINE(2741)
						{
							HX_STACK_LINE(2742)
							Float det = ((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb));		HX_STACK_VAR(det,"det");
							HX_STACK_LINE(2743)
							if (((det != det))){
								HX_STACK_LINE(2743)
								Float _g4 = xy = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(2743)
								xx = _g4;
							}
							else{
								HX_STACK_LINE(2744)
								if (((det == (int)0))){
									HX_STACK_LINE(2745)
									if (((this->kMassa != (int)0))){
										HX_STACK_LINE(2745)
										hx::DivEq(xx,this->kMassa);
									}
									else{
										HX_STACK_LINE(2746)
										xx = (int)0;
									}
									HX_STACK_LINE(2747)
									if (((this->kMassc != (int)0))){
										HX_STACK_LINE(2747)
										hx::DivEq(xy,this->kMassc);
									}
									else{
										HX_STACK_LINE(2748)
										xy = (int)0;
									}
								}
								else{
									HX_STACK_LINE(2751)
									det = (Float((int)1) / Float(det));
									HX_STACK_LINE(2752)
									Float t = (det * (((this->kMassc * xx) - (this->kMassb * xy))));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(2753)
									xy = (det * (((this->kMassa * xy) - (this->kMassb * xx))));
									HX_STACK_LINE(2754)
									xx = t;
								}
							}
						}
						HX_STACK_LINE(2757)
						if (((bool((xx >= (int)0)) && bool((xy >= (int)0))))){
							HX_STACK_LINE(2758)
							{
								HX_STACK_LINE(2759)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2768)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2769)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2771)
							{
								HX_STACK_LINE(2771)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2771)
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2771)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2771)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2771)
									Float _g5 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(2771)
									_this->axisx = _g5;
									HX_STACK_LINE(2771)
									Float _g6 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(2771)
									_this->axisy = _g6;
									HX_STACK_LINE(2771)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2771)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2771)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2771)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2771)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2771)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2771)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2772)
							{
								HX_STACK_LINE(2773)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2782)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2783)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2785)
							{
								HX_STACK_LINE(2785)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2785)
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2785)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2785)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2785)
									Float _g7 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(2785)
									_this->axisx = _g7;
									HX_STACK_LINE(2785)
									Float _g8 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(2785)
									_this->axisy = _g8;
									HX_STACK_LINE(2785)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2785)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2785)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2785)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2785)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2785)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2785)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2786)
							break;
						}
						HX_STACK_LINE(2788)
						{
							HX_STACK_LINE(2789)
							xx = (Float(-(bx)) / Float(Ka));
							HX_STACK_LINE(2790)
							xy = (int)0;
							HX_STACK_LINE(2799)
							{
							}
						}
						HX_STACK_LINE(2808)
						Float vn2 = ((Kb * xx) + by);		HX_STACK_VAR(vn2,"vn2");
						HX_STACK_LINE(2809)
						if (((bool((xx >= (int)0)) && bool((vn2 >= (int)0))))){
							HX_STACK_LINE(2810)
							{
								HX_STACK_LINE(2811)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2820)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2821)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2823)
							{
								HX_STACK_LINE(2823)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2823)
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2823)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2823)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2823)
									Float _g9 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(2823)
									_this->axisx = _g9;
									HX_STACK_LINE(2823)
									Float _g10 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(2823)
									_this->axisy = _g10;
									HX_STACK_LINE(2823)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2823)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2823)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2823)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2823)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2823)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2823)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2824)
							{
								HX_STACK_LINE(2825)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2834)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2835)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2837)
							{
								HX_STACK_LINE(2837)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2837)
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2837)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2837)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2837)
									Float _g11 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(2837)
									_this->axisx = _g11;
									HX_STACK_LINE(2837)
									Float _g12 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(2837)
									_this->axisy = _g12;
									HX_STACK_LINE(2837)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2837)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2837)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2837)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2837)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2837)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2837)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2838)
							break;
						}
						HX_STACK_LINE(2840)
						{
							HX_STACK_LINE(2841)
							xx = (int)0;
							HX_STACK_LINE(2842)
							xy = (Float(-(by)) / Float(Kc));
							HX_STACK_LINE(2851)
							{
							}
						}
						HX_STACK_LINE(2860)
						Float vn1 = ((Kb * xy) + bx);		HX_STACK_VAR(vn1,"vn1");
						HX_STACK_LINE(2861)
						if (((bool((xy >= (int)0)) && bool((vn1 >= (int)0))))){
							HX_STACK_LINE(2862)
							{
								HX_STACK_LINE(2863)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2872)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2873)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2875)
							{
								HX_STACK_LINE(2875)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2875)
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2875)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2875)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2875)
									Float _g13 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(2875)
									_this->axisx = _g13;
									HX_STACK_LINE(2875)
									Float _g14 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(2875)
									_this->axisy = _g14;
									HX_STACK_LINE(2875)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2875)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2875)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2875)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2875)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2875)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2875)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2876)
							{
								HX_STACK_LINE(2877)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2886)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2887)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2889)
							{
								HX_STACK_LINE(2889)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2889)
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2889)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2889)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2889)
									Float _g15 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(2889)
									_this->axisx = _g15;
									HX_STACK_LINE(2889)
									Float _g16 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(2889)
									_this->axisy = _g16;
									HX_STACK_LINE(2889)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2889)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2889)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2889)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2889)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2889)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2889)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2890)
							break;
						}
						HX_STACK_LINE(2714)
						break;
					}
				}
				else{
					HX_STACK_LINE(2896)
					Float rn1 = ((gnormy * c1r1x) - (gnormx * c1r1y));		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2897)
					Float rn2 = ((gnormy * c1r2x) - (gnormx * c1r2y));		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2898)
					Float K = (((this->b2->smass + ((rn2 * rn2) * this->b2->sinertia)) + this->b1->smass) + ((rn1 * rn1) * this->b1->sinertia));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2899)
					if (((K != (int)0))){
						HX_STACK_LINE(2900)
						Float jn = (Float((-(this->biasCoef) * err1)) / Float(K));		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2901)
						Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2902)
						Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2903)
						{
							HX_STACK_LINE(2904)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2913)
							Jx = (gnormx * t);
							HX_STACK_LINE(2914)
							Jy = (gnormy * t);
						}
						HX_STACK_LINE(2916)
						{
							HX_STACK_LINE(2917)
							Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2926)
							hx::SubEq(this->b1->posx,(Jx * t));
							HX_STACK_LINE(2927)
							hx::SubEq(this->b1->posy,(Jy * t));
						}
						HX_STACK_LINE(2929)
						{
							HX_STACK_LINE(2929)
							::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2929)
							Float dr = ((-(rn1) * this->b1->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2929)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2929)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2929)
								Float _g17 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(2929)
								_this->axisx = _g17;
								HX_STACK_LINE(2929)
								Float _g18 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(2929)
								_this->axisy = _g18;
								HX_STACK_LINE(2929)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2929)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2929)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2929)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2929)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2929)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2929)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2930)
						{
							HX_STACK_LINE(2931)
							Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2940)
							hx::AddEq(this->b2->posx,(Jx * t));
							HX_STACK_LINE(2941)
							hx::AddEq(this->b2->posy,(Jy * t));
						}
						HX_STACK_LINE(2943)
						{
							HX_STACK_LINE(2943)
							::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2943)
							Float dr = ((rn2 * this->b2->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2943)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2943)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2943)
								Float _g19 = ::Math_obj::sin(_this->rot);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(2943)
								_this->axisx = _g19;
								HX_STACK_LINE(2943)
								Float _g20 = ::Math_obj::cos(_this->rot);		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(2943)
								_this->axisy = _g20;
								HX_STACK_LINE(2943)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2943)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2943)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2943)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2943)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2943)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2943)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulsePos,(void))

int ZPP_ColArbiter_obj::FACE1;

int ZPP_ColArbiter_obj::FACE2;

int ZPP_ColArbiter_obj::CIRCLE;

::zpp_nape::dynamics::ZPP_ColArbiter ZPP_ColArbiter_obj::zpp_pool;


ZPP_ColArbiter_obj::ZPP_ColArbiter_obj()
{
}

void ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_MARK_MEMBER_NAME(stat_fric,"stat_fric");
	HX_MARK_MEMBER_NAME(restitution,"restitution");
	HX_MARK_MEMBER_NAME(rfric,"rfric");
	HX_MARK_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_MARK_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_MARK_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_MARK_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	HX_MARK_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_MARK_MEMBER_NAME(innards,"innards");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(Ka,"Ka");
	HX_MARK_MEMBER_NAME(Kb,"Kb");
	HX_MARK_MEMBER_NAME(Kc,"Kc");
	HX_MARK_MEMBER_NAME(rMass,"rMass");
	HX_MARK_MEMBER_NAME(jrAcc,"jrAcc");
	HX_MARK_MEMBER_NAME(rn1a,"rn1a");
	HX_MARK_MEMBER_NAME(rt1a,"rt1a");
	HX_MARK_MEMBER_NAME(rn1b,"rn1b");
	HX_MARK_MEMBER_NAME(rt1b,"rt1b");
	HX_MARK_MEMBER_NAME(rn2a,"rn2a");
	HX_MARK_MEMBER_NAME(rt2a,"rt2a");
	HX_MARK_MEMBER_NAME(rn2b,"rn2b");
	HX_MARK_MEMBER_NAME(rt2b,"rt2b");
	HX_MARK_MEMBER_NAME(k1x,"k1x");
	HX_MARK_MEMBER_NAME(k1y,"k1y");
	HX_MARK_MEMBER_NAME(k2x,"k2x");
	HX_MARK_MEMBER_NAME(k2y,"k2y");
	HX_MARK_MEMBER_NAME(surfacex,"surfacex");
	HX_MARK_MEMBER_NAME(surfacey,"surfacey");
	HX_MARK_MEMBER_NAME(ptype,"ptype");
	HX_MARK_MEMBER_NAME(lnormx,"lnormx");
	HX_MARK_MEMBER_NAME(lnormy,"lnormy");
	HX_MARK_MEMBER_NAME(lproj,"lproj");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(rev,"rev");
	HX_MARK_MEMBER_NAME(biasCoef,"biasCoef");
	HX_MARK_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_MARK_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_MARK_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(oc1,"oc1");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(oc2,"oc2");
	HX_MARK_MEMBER_NAME(hc2,"hc2");
	HX_MARK_MEMBER_NAME(hpc2,"hpc2");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(stat,"stat");
	HX_MARK_MEMBER_NAME(_mutable,"mutable");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_VISIT_MEMBER_NAME(stat_fric,"stat_fric");
	HX_VISIT_MEMBER_NAME(restitution,"restitution");
	HX_VISIT_MEMBER_NAME(rfric,"rfric");
	HX_VISIT_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_VISIT_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_VISIT_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_VISIT_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	HX_VISIT_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_VISIT_MEMBER_NAME(innards,"innards");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(Ka,"Ka");
	HX_VISIT_MEMBER_NAME(Kb,"Kb");
	HX_VISIT_MEMBER_NAME(Kc,"Kc");
	HX_VISIT_MEMBER_NAME(rMass,"rMass");
	HX_VISIT_MEMBER_NAME(jrAcc,"jrAcc");
	HX_VISIT_MEMBER_NAME(rn1a,"rn1a");
	HX_VISIT_MEMBER_NAME(rt1a,"rt1a");
	HX_VISIT_MEMBER_NAME(rn1b,"rn1b");
	HX_VISIT_MEMBER_NAME(rt1b,"rt1b");
	HX_VISIT_MEMBER_NAME(rn2a,"rn2a");
	HX_VISIT_MEMBER_NAME(rt2a,"rt2a");
	HX_VISIT_MEMBER_NAME(rn2b,"rn2b");
	HX_VISIT_MEMBER_NAME(rt2b,"rt2b");
	HX_VISIT_MEMBER_NAME(k1x,"k1x");
	HX_VISIT_MEMBER_NAME(k1y,"k1y");
	HX_VISIT_MEMBER_NAME(k2x,"k2x");
	HX_VISIT_MEMBER_NAME(k2y,"k2y");
	HX_VISIT_MEMBER_NAME(surfacex,"surfacex");
	HX_VISIT_MEMBER_NAME(surfacey,"surfacey");
	HX_VISIT_MEMBER_NAME(ptype,"ptype");
	HX_VISIT_MEMBER_NAME(lnormx,"lnormx");
	HX_VISIT_MEMBER_NAME(lnormy,"lnormy");
	HX_VISIT_MEMBER_NAME(lproj,"lproj");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(rev,"rev");
	HX_VISIT_MEMBER_NAME(biasCoef,"biasCoef");
	HX_VISIT_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_VISIT_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_VISIT_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(oc1,"oc1");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(oc2,"oc2");
	HX_VISIT_MEMBER_NAME(hc2,"hc2");
	HX_VISIT_MEMBER_NAME(hpc2,"hpc2");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(stat,"stat");
	HX_VISIT_MEMBER_NAME(_mutable,"mutable");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ColArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		if (HX_FIELD_EQ(inName,"s2") ) { return s2; }
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"Ka") ) { return Ka; }
		if (HX_FIELD_EQ(inName,"Kb") ) { return Kb; }
		if (HX_FIELD_EQ(inName,"Kc") ) { return Kc; }
		if (HX_FIELD_EQ(inName,"c1") ) { return c1; }
		if (HX_FIELD_EQ(inName,"c2") ) { return c2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"k1x") ) { return k1x; }
		if (HX_FIELD_EQ(inName,"k1y") ) { return k1y; }
		if (HX_FIELD_EQ(inName,"k2x") ) { return k2x; }
		if (HX_FIELD_EQ(inName,"k2y") ) { return k2y; }
		if (HX_FIELD_EQ(inName,"rev") ) { return rev; }
		if (HX_FIELD_EQ(inName,"oc1") ) { return oc1; }
		if (HX_FIELD_EQ(inName,"oc2") ) { return oc2; }
		if (HX_FIELD_EQ(inName,"hc2") ) { return hc2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rn1a") ) { return rn1a; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { return rt1a; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { return rn1b; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { return rt1b; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { return rn2a; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { return rt2a; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { return rn2b; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { return rt2b; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { return hpc2; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"stat") ) { return stat; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rfric") ) { return rfric; }
		if (HX_FIELD_EQ(inName,"rMass") ) { return rMass; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { return jrAcc; }
		if (HX_FIELD_EQ(inName,"ptype") ) { return ptype; }
		if (HX_FIELD_EQ(inName,"lproj") ) { return lproj; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { return lnormx; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { return lnormy; }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"innards") ) { return innards; }
		if (HX_FIELD_EQ(inName,"mutable") ) { return _mutable; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { return dyn_fric; }
		if (HX_FIELD_EQ(inName,"contacts") ) { return contacts; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { return surfacex; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { return surfacey; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { return biasCoef; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stat_fric") ) { return stat_fric; }
		if (HX_FIELD_EQ(inName,"getnormal") ) { return getnormal_dyn(); }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return restitution; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { return wrap_normal; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { return __ref_edge1; }
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { return __ref_edge2; }
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { return __ref_vertex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { return userdef_rfric; }
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { return wrap_contacts; }
		if (HX_FIELD_EQ(inName,"injectContact") ) { return injectContact_dyn(); }
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
		if (HX_FIELD_EQ(inName,"setupcontacts") ) { return setupcontacts_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calcProperties") ) { return calcProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_props") ) { return validate_props_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts_adder") ) { return contacts_adder_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"normal_validate") ) { return normal_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts_subber") ) { return contacts_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanupContacts") ) { return cleanupContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { return userdef_dyn_fric; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { return userdef_stat_fric; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { return userdef_restitution; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Ka") ) { Ka=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kb") ) { Kb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kc") ) { Kc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"k1x") ) { k1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k1y") ) { k1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2x") ) { k2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2y") ) { k2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rev") ) { rev=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc1") ) { oc1=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc2") ) { oc2=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hc2") ) { hc2=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rn1a") ) { rn1a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { rt1a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { rn1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { rt1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { rn2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { rt2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { rn2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { rt2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { hpc2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stat") ) { stat=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rfric") ) { rfric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rMass") ) { rMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { jrAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ptype") ) { ptype=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lproj") ) { lproj=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { lnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { lnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"innards") ) { innards=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mutable") ) { _mutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::dynamics::CollisionArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { dyn_fric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { surfacex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { surfacey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { biasCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stat_fric") ) { stat_fric=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { restitution=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { wrap_normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { __ref_edge1=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { __ref_edge2=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { __ref_vertex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { userdef_rfric=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { wrap_contacts=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { userdef_dyn_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { userdef_stat_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { userdef_restitution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer_zn"));
	outFields->push(HX_CSTRING("dyn_fric"));
	outFields->push(HX_CSTRING("stat_fric"));
	outFields->push(HX_CSTRING("restitution"));
	outFields->push(HX_CSTRING("rfric"));
	outFields->push(HX_CSTRING("userdef_dyn_fric"));
	outFields->push(HX_CSTRING("userdef_stat_fric"));
	outFields->push(HX_CSTRING("userdef_restitution"));
	outFields->push(HX_CSTRING("userdef_rfric"));
	outFields->push(HX_CSTRING("s1"));
	outFields->push(HX_CSTRING("s2"));
	outFields->push(HX_CSTRING("contacts"));
	outFields->push(HX_CSTRING("wrap_contacts"));
	outFields->push(HX_CSTRING("innards"));
	outFields->push(HX_CSTRING("nx"));
	outFields->push(HX_CSTRING("ny"));
	outFields->push(HX_CSTRING("wrap_normal"));
	outFields->push(HX_CSTRING("kMassa"));
	outFields->push(HX_CSTRING("kMassb"));
	outFields->push(HX_CSTRING("kMassc"));
	outFields->push(HX_CSTRING("Ka"));
	outFields->push(HX_CSTRING("Kb"));
	outFields->push(HX_CSTRING("Kc"));
	outFields->push(HX_CSTRING("rMass"));
	outFields->push(HX_CSTRING("jrAcc"));
	outFields->push(HX_CSTRING("rn1a"));
	outFields->push(HX_CSTRING("rt1a"));
	outFields->push(HX_CSTRING("rn1b"));
	outFields->push(HX_CSTRING("rt1b"));
	outFields->push(HX_CSTRING("rn2a"));
	outFields->push(HX_CSTRING("rt2a"));
	outFields->push(HX_CSTRING("rn2b"));
	outFields->push(HX_CSTRING("rt2b"));
	outFields->push(HX_CSTRING("k1x"));
	outFields->push(HX_CSTRING("k1y"));
	outFields->push(HX_CSTRING("k2x"));
	outFields->push(HX_CSTRING("k2y"));
	outFields->push(HX_CSTRING("surfacex"));
	outFields->push(HX_CSTRING("surfacey"));
	outFields->push(HX_CSTRING("ptype"));
	outFields->push(HX_CSTRING("lnormx"));
	outFields->push(HX_CSTRING("lnormy"));
	outFields->push(HX_CSTRING("lproj"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("rev"));
	outFields->push(HX_CSTRING("biasCoef"));
	outFields->push(HX_CSTRING("__ref_edge1"));
	outFields->push(HX_CSTRING("__ref_edge2"));
	outFields->push(HX_CSTRING("__ref_vertex"));
	outFields->push(HX_CSTRING("c1"));
	outFields->push(HX_CSTRING("oc1"));
	outFields->push(HX_CSTRING("c2"));
	outFields->push(HX_CSTRING("oc2"));
	outFields->push(HX_CSTRING("hc2"));
	outFields->push(HX_CSTRING("hpc2"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("stat"));
	outFields->push(HX_CSTRING("mutable"));
	outFields->push(HX_CSTRING("pre_dt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FACE1"),
	HX_CSTRING("FACE2"),
	HX_CSTRING("CIRCLE"),
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::CollisionArbiter*/ ,(int)offsetof(ZPP_ColArbiter_obj,outer_zn),HX_CSTRING("outer_zn")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,dyn_fric),HX_CSTRING("dyn_fric")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,stat_fric),HX_CSTRING("stat_fric")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,restitution),HX_CSTRING("restitution")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rfric),HX_CSTRING("rfric")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_dyn_fric),HX_CSTRING("userdef_dyn_fric")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_stat_fric),HX_CSTRING("userdef_stat_fric")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_restitution),HX_CSTRING("userdef_restitution")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_rfric),HX_CSTRING("userdef_rfric")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ColArbiter_obj,s1),HX_CSTRING("s1")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ColArbiter_obj,s2),HX_CSTRING("s2")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,contacts),HX_CSTRING("contacts")},
	{hx::fsObject /*::nape::dynamics::ContactList*/ ,(int)offsetof(ZPP_ColArbiter_obj,wrap_contacts),HX_CSTRING("wrap_contacts")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,innards),HX_CSTRING("innards")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,nx),HX_CSTRING("nx")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,ny),HX_CSTRING("ny")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_ColArbiter_obj,wrap_normal),HX_CSTRING("wrap_normal")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassa),HX_CSTRING("kMassa")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassb),HX_CSTRING("kMassb")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassc),HX_CSTRING("kMassc")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Ka),HX_CSTRING("Ka")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Kb),HX_CSTRING("Kb")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Kc),HX_CSTRING("Kc")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rMass),HX_CSTRING("rMass")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,jrAcc),HX_CSTRING("jrAcc")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn1a),HX_CSTRING("rn1a")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt1a),HX_CSTRING("rt1a")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn1b),HX_CSTRING("rn1b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt1b),HX_CSTRING("rt1b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn2a),HX_CSTRING("rn2a")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt2a),HX_CSTRING("rt2a")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn2b),HX_CSTRING("rn2b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt2b),HX_CSTRING("rt2b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k1x),HX_CSTRING("k1x")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k1y),HX_CSTRING("k1y")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k2x),HX_CSTRING("k2x")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k2y),HX_CSTRING("k2y")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,surfacex),HX_CSTRING("surfacex")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,surfacey),HX_CSTRING("surfacey")},
	{hx::fsInt,(int)offsetof(ZPP_ColArbiter_obj,ptype),HX_CSTRING("ptype")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lnormx),HX_CSTRING("lnormx")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lnormy),HX_CSTRING("lnormy")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lproj),HX_CSTRING("lproj")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,radius),HX_CSTRING("radius")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,rev),HX_CSTRING("rev")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,biasCoef),HX_CSTRING("biasCoef")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_ColArbiter_obj,__ref_edge1),HX_CSTRING("__ref_edge1")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_ColArbiter_obj,__ref_edge2),HX_CSTRING("__ref_edge2")},
	{hx::fsInt,(int)offsetof(ZPP_ColArbiter_obj,__ref_vertex),HX_CSTRING("__ref_vertex")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,c1),HX_CSTRING("c1")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,oc1),HX_CSTRING("oc1")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,c2),HX_CSTRING("c2")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,oc2),HX_CSTRING("oc2")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,hc2),HX_CSTRING("hc2")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,hpc2),HX_CSTRING("hpc2")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_ColArbiter*/ ,(int)offsetof(ZPP_ColArbiter_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,stat),HX_CSTRING("stat")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,_mutable),HX_CSTRING("mutable")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,pre_dt),HX_CSTRING("pre_dt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer_zn"),
	HX_CSTRING("dyn_fric"),
	HX_CSTRING("stat_fric"),
	HX_CSTRING("restitution"),
	HX_CSTRING("rfric"),
	HX_CSTRING("userdef_dyn_fric"),
	HX_CSTRING("userdef_stat_fric"),
	HX_CSTRING("userdef_restitution"),
	HX_CSTRING("userdef_rfric"),
	HX_CSTRING("s1"),
	HX_CSTRING("s2"),
	HX_CSTRING("contacts"),
	HX_CSTRING("wrap_contacts"),
	HX_CSTRING("innards"),
	HX_CSTRING("nx"),
	HX_CSTRING("ny"),
	HX_CSTRING("normal_validate"),
	HX_CSTRING("wrap_normal"),
	HX_CSTRING("getnormal"),
	HX_CSTRING("kMassa"),
	HX_CSTRING("kMassb"),
	HX_CSTRING("kMassc"),
	HX_CSTRING("Ka"),
	HX_CSTRING("Kb"),
	HX_CSTRING("Kc"),
	HX_CSTRING("rMass"),
	HX_CSTRING("jrAcc"),
	HX_CSTRING("rn1a"),
	HX_CSTRING("rt1a"),
	HX_CSTRING("rn1b"),
	HX_CSTRING("rt1b"),
	HX_CSTRING("rn2a"),
	HX_CSTRING("rt2a"),
	HX_CSTRING("rn2b"),
	HX_CSTRING("rt2b"),
	HX_CSTRING("k1x"),
	HX_CSTRING("k1y"),
	HX_CSTRING("k2x"),
	HX_CSTRING("k2y"),
	HX_CSTRING("surfacex"),
	HX_CSTRING("surfacey"),
	HX_CSTRING("ptype"),
	HX_CSTRING("lnormx"),
	HX_CSTRING("lnormy"),
	HX_CSTRING("lproj"),
	HX_CSTRING("radius"),
	HX_CSTRING("rev"),
	HX_CSTRING("biasCoef"),
	HX_CSTRING("__ref_edge1"),
	HX_CSTRING("__ref_edge2"),
	HX_CSTRING("__ref_vertex"),
	HX_CSTRING("c1"),
	HX_CSTRING("oc1"),
	HX_CSTRING("c2"),
	HX_CSTRING("oc2"),
	HX_CSTRING("hc2"),
	HX_CSTRING("hpc2"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("stat"),
	HX_CSTRING("injectContact"),
	HX_CSTRING("assign"),
	HX_CSTRING("calcProperties"),
	HX_CSTRING("validate_props"),
	HX_CSTRING("retire"),
	HX_CSTRING("mutable"),
	HX_CSTRING("makemutable"),
	HX_CSTRING("makeimmutable"),
	HX_CSTRING("contacts_adder"),
	HX_CSTRING("contacts_subber"),
	HX_CSTRING("setupcontacts"),
	HX_CSTRING("cleanupContacts"),
	HX_CSTRING("pre_dt"),
	HX_CSTRING("preStep"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("applyImpulsePos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::FACE1,"FACE1");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::FACE2,"FACE2");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::FACE1,"FACE1");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::FACE2,"FACE2");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_ColArbiter_obj::__mClass;

void ZPP_ColArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_ColArbiter"), hx::TCanCast< ZPP_ColArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZPP_ColArbiter_obj::__boot()
{
	FACE1= (int)0;
	FACE2= (int)1;
	CIRCLE= (int)2;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
