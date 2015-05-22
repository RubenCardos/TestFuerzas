#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void MarchingSquares_obj::__construct()
{
	return null();
}

//MarchingSquares_obj::~MarchingSquares_obj() { }

Dynamic MarchingSquares_obj::__CreateEmpty() { return  new MarchingSquares_obj; }
hx::ObjectPtr< MarchingSquares_obj > MarchingSquares_obj::__new()
{  hx::ObjectPtr< MarchingSquares_obj > result = new MarchingSquares_obj();
	result->__construct();
	return result;}

Dynamic MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MarchingSquares_obj > result = new MarchingSquares_obj();
	result->__construct();
	return result;}

::nape::geom::GeomPolyList MarchingSquares_obj::run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 cellsize,hx::Null< int >  __o_quality,::nape::geom::Vec2 subgrid,hx::Null< bool >  __o_combine,::nape::geom::GeomPolyList output){
int quality = __o_quality.Default(2);
bool combine = __o_combine.Default(true);
	HX_STACK_FRAME("nape.geom.MarchingSquares","run",0xa143a3c8,"nape.geom.MarchingSquares.run","nape/geom/MarchingSquares.hx",269,0x5f5b7193)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_ARG(cellsize,"cellsize")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_ARG(subgrid,"subgrid")
	HX_STACK_ARG(combine,"combine")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(300)
		if (((output != null()))){
			HX_STACK_LINE(300)
			ret = output;
		}
		else{
			HX_STACK_LINE(300)
			ret = ::nape::geom::GeomPolyList_obj::__new();
		}
		HX_STACK_LINE(301)
		if (((subgrid == null()))){
			HX_STACK_LINE(302)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				_g = bounds->zpp_inner->minx;
			}
			HX_STACK_LINE(302)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				_g1 = bounds->zpp_inner->miny;
			}
			HX_STACK_LINE(302)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				_g2 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(302)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				_g3 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(302)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::run(iso,_g,_g1,_g2,_g3,cellsize,quality,combine,ret);
		}
		else{
			HX_STACK_LINE(305)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					_g4 = (_this->maxx - _this->minx);
				}
			}
			HX_STACK_LINE(305)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				_g5 = subgrid->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float xp = (Float(_g4) / Float(_g5));		HX_STACK_VAR(xp,"xp");
			HX_STACK_LINE(306)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					_g6 = (_this->maxy - _this->miny);
				}
			}
			HX_STACK_LINE(306)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				_g7 = subgrid->zpp_inner->y;
			}
			HX_STACK_LINE(306)
			Float yp = (Float(_g6) / Float(_g7));		HX_STACK_VAR(yp,"yp");
			HX_STACK_LINE(307)
			int xn = ::Std_obj::_int(xp);		HX_STACK_VAR(xn,"xn");
			HX_STACK_LINE(308)
			int yn = ::Std_obj::_int(yp);		HX_STACK_VAR(yn,"yn");
			HX_STACK_LINE(309)
			if (((xn != xp))){
				HX_STACK_LINE(309)
				(xn)++;
			}
			HX_STACK_LINE(310)
			if (((yn != yp))){
				HX_STACK_LINE(310)
				(yn)++;
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(311)
				while((true)){
					HX_STACK_LINE(311)
					if ((!(((_g < xn))))){
						HX_STACK_LINE(311)
						break;
					}
					HX_STACK_LINE(311)
					int x = (_g)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(312)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						_g8 = bounds->zpp_inner->minx;
					}
					HX_STACK_LINE(312)
					Float _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						_g9 = subgrid->zpp_inner->x;
					}
					HX_STACK_LINE(312)
					Float _g10 = (_g9 * x);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(312)
					Float x0 = (_g8 + _g10);		HX_STACK_VAR(x0,"x0");
					HX_STACK_LINE(313)
					Float x1;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(313)
					if (((x == (xn - (int)1)))){
						HX_STACK_LINE(313)
						::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(313)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(313)
						x1 = _this->zpp_inner->x;
					}
					else{
						HX_STACK_LINE(313)
						Float _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(313)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(313)
									_this->_validate();
								}
							}
							HX_STACK_LINE(313)
							_g11 = subgrid->zpp_inner->x;
						}
						HX_STACK_LINE(313)
						x1 = (x0 + _g11);
					}
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(314)
						while((true)){
							HX_STACK_LINE(314)
							if ((!(((_g1 < yn))))){
								HX_STACK_LINE(314)
								break;
							}
							HX_STACK_LINE(314)
							int y = (_g1)++;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(315)
							Float _g12;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								_g12 = bounds->zpp_inner->miny;
							}
							HX_STACK_LINE(315)
							Float _g13;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								_g13 = subgrid->zpp_inner->y;
							}
							HX_STACK_LINE(315)
							Float _g14 = (_g13 * y);		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(315)
							Float y0 = (_g12 + _g14);		HX_STACK_VAR(y0,"y0");
							HX_STACK_LINE(316)
							Float y1;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(316)
							if (((y == (yn - (int)1)))){
								HX_STACK_LINE(316)
								::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(316)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(316)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(316)
								y1 = _this->zpp_inner->y;
							}
							else{
								HX_STACK_LINE(316)
								Float _g15;		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(316)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(316)
											_this->_validate();
										}
									}
									HX_STACK_LINE(316)
									_g15 = subgrid->zpp_inner->y;
								}
								HX_STACK_LINE(316)
								y1 = (y0 + _g15);
							}
							HX_STACK_LINE(317)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::run(iso,x0,y0,x1,y1,cellsize,quality,combine,ret);
						}
					}
				}
			}
		}
		HX_STACK_LINE(321)
		if ((cellsize->zpp_inner->weak)){
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::zpp_nape::geom::ZPP_Vec2 inner = cellsize->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(325)
				cellsize->zpp_inner->outer = null();
				HX_STACK_LINE(325)
				cellsize->zpp_inner = null();
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::nape::geom::Vec2 o = cellsize;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(325)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						if (((o->outer != null()))){
							HX_STACK_LINE(325)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(325)
							o->outer = null();
						}
						HX_STACK_LINE(325)
						o->_isimmutable = null();
						HX_STACK_LINE(325)
						o->_validate = null();
						HX_STACK_LINE(325)
						o->_invalidate = null();
					}
					HX_STACK_LINE(325)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(326)
			true;
		}
		else{
			HX_STACK_LINE(329)
			false;
		}
		HX_STACK_LINE(332)
		if (((subgrid != null()))){
			HX_STACK_LINE(333)
			if ((subgrid->zpp_inner->weak)){
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 inner = subgrid->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(337)
					subgrid->zpp_inner->outer = null();
					HX_STACK_LINE(337)
					subgrid->zpp_inner = null();
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::nape::geom::Vec2 o = subgrid;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(337)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							if (((o->outer != null()))){
								HX_STACK_LINE(337)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(337)
								o->outer = null();
							}
							HX_STACK_LINE(337)
							o->_isimmutable = null();
							HX_STACK_LINE(337)
							o->_validate = null();
							HX_STACK_LINE(337)
							o->_invalidate = null();
						}
						HX_STACK_LINE(337)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(338)
				true;
			}
			else{
				HX_STACK_LINE(341)
				false;
			}
		}
		HX_STACK_LINE(345)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MarchingSquares_obj,run,return )


MarchingSquares_obj::MarchingSquares_obj()
{
}

Dynamic MarchingSquares_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MarchingSquares_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MarchingSquares_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("run"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#endif

Class MarchingSquares_obj::__mClass;

void MarchingSquares_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.MarchingSquares"), hx::TCanCast< MarchingSquares_obj> ,sStaticFields,sMemberFields,
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

void MarchingSquares_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
