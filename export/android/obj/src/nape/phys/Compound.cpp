#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Compound_obj::__construct()
{
HX_STACK_FRAME("nape.phys.Compound","new",0x9c751513,"nape.phys.Compound.new","nape/phys/Compound.hx",196,0x15c2ad5d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(200)
	this->zpp_inner = null();
	HX_STACK_LINE(295)
	super::__construct();
	HX_STACK_LINE(297)
	::zpp_nape::phys::ZPP_Compound _g = ::zpp_nape::phys::ZPP_Compound_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(297)
	this->zpp_inner = _g;
	HX_STACK_LINE(298)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(299)
	this->zpp_inner->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(300)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(301)
	this->zpp_inner->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND->zpp_inner);
}
;
	return null();
}

//Compound_obj::~Compound_obj() { }

Dynamic Compound_obj::__CreateEmpty() { return  new Compound_obj; }
hx::ObjectPtr< Compound_obj > Compound_obj::__new()
{  hx::ObjectPtr< Compound_obj > result = new Compound_obj();
	result->__construct();
	return result;}

Dynamic Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Compound_obj > result = new Compound_obj();
	result->__construct();
	return result;}

::nape::phys::BodyList Compound_obj::get_bodies( ){
	HX_STACK_FRAME("nape.phys.Compound","get_bodies",0x49f992f6,"nape.phys.Compound.get_bodies","nape/phys/Compound.hx",211,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	return this->zpp_inner->wrap_bodies;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_bodies,return )

::nape::constraint::ConstraintList Compound_obj::get_constraints( ){
	HX_STACK_FRAME("nape.phys.Compound","get_constraints",0x89250e40,"nape.phys.Compound.get_constraints","nape/phys/Compound.hx",223,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_constraints,return )

::nape::phys::CompoundList Compound_obj::get_compounds( ){
	HX_STACK_FRAME("nape.phys.Compound","get_compounds",0x74c250f2,"nape.phys.Compound.get_compounds","nape/phys/Compound.hx",235,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return this->zpp_inner->wrap_compounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_compounds,return )

::nape::phys::Compound Compound_obj::get_compound( ){
	HX_STACK_FRAME("nape.phys.Compound","get_compound",0xca918461,"nape.phys.Compound.get_compound","nape/phys/Compound.hx",245,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(245)
		return null();
	}
	else{
		HX_STACK_LINE(245)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(245)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_compound,return )

::nape::phys::Compound Compound_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.phys.Compound","set_compound",0xdf8aa7d5,"nape.phys.Compound.set_compound","nape/phys/Compound.hx",247,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Compound::compound"));
		HX_STACK_LINE(250)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
			HX_STACK_LINE(251)
			if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
				HX_STACK_LINE(251)
				((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_compounds->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(252)
			if (((compound != null()))){
				HX_STACK_LINE(252)
				::nape::phys::CompoundList _this = compound->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(252)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(252)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(252)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(255)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(255)
		return null();
	}
	else{
		HX_STACK_LINE(255)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,set_compound,return )

::nape::space::Space Compound_obj::get_space( ){
	HX_STACK_FRAME("nape.phys.Compound","get_space",0x76fe3610,"nape.phys.Compound.get_space","nape/phys/Compound.hx",267,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(267)
		return null();
	}
	else{
		HX_STACK_LINE(267)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(267)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_space,return )

::nape::space::Space Compound_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.phys.Compound","set_space",0x5a4f221c,"nape.phys.Compound.set_space","nape/phys/Compound.hx",269,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(274)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Compound::space"));
		HX_STACK_LINE(275)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(276)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(276)
				((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->wrap_compounds->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(277)
			if (((space != null()))){
				HX_STACK_LINE(277)
				::nape::phys::CompoundList _this = space->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(277)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(277)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(277)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(280)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(280)
		return null();
	}
	else{
		HX_STACK_LINE(280)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(280)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,set_space,return )

::String Compound_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Compound","toString",0xdb18a319,"nape.phys.Compound.toString","nape/phys/Compound.hx",307,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	return (HX_CSTRING("Compound") + this->zpp_inner_i->id);
}


::nape::phys::Compound Compound_obj::copy( ){
	HX_STACK_FRAME("nape.phys.Compound","copy",0x42bf93a2,"nape.phys.Compound.copy","nape/phys/Compound.hx",331,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	return this->zpp_inner->copy(null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,copy,return )

Void Compound_obj::breakApart( ){
{
		HX_STACK_FRAME("nape.phys.Compound","breakApart",0x5cade742,"nape.phys.Compound.breakApart","nape/phys/Compound.hx",345,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		this->zpp_inner->breakApart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,breakApart,(void))

Void Compound_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitBodies",0xa830a35e,"nape.phys.Compound.visitBodies","nape/phys/Compound.hx",354,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			::nape::phys::BodyIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::nape::phys::BodyList _this = this->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(358)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(358)
				_g = ::nape::phys::BodyIterator_obj::get(_this);
			}
			HX_STACK_LINE(358)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::BodyIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",358,0x15c2ad5d)
						{
							HX_STACK_LINE(358)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(358)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::nape::phys::BodyList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(358)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(358)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(358)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(358)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(358)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(358)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::BodyIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",358,0x15c2ad5d)
									{
										HX_STACK_LINE(358)
										{
											HX_STACK_LINE(358)
											_g->zpp_next = ::nape::phys::BodyIterator_obj::zpp_pool;
											HX_STACK_LINE(358)
											::nape::phys::BodyIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(358)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(358)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(358)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(358)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(358)
					break;
				}
				HX_STACK_LINE(358)
				::nape::phys::Body b;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					_g->zpp_critical = false;
					HX_STACK_LINE(358)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(358)
					b = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(358)
				lambda(b).Cast< Void >();
			}
		}
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(359)
			{
				HX_STACK_LINE(359)
				::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(359)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(359)
				_g = ::nape::phys::CompoundIterator_obj::get(_this);
			}
			HX_STACK_LINE(359)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",359,0x15c2ad5d)
						{
							HX_STACK_LINE(359)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(359)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(359)
							{
								HX_STACK_LINE(359)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(359)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(359)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(359)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(359)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(359)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(359)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",359,0x15c2ad5d)
									{
										HX_STACK_LINE(359)
										{
											HX_STACK_LINE(359)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(359)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(359)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(359)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(359)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(359)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(359)
					break;
				}
				HX_STACK_LINE(359)
				::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					_g->zpp_critical = false;
					HX_STACK_LINE(359)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(359)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(359)
				c->visitBodies(lambda);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitBodies,(void))

Void Compound_obj::visitConstraints( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitConstraints",0x8e7184d8,"nape.phys.Compound.visitConstraints","nape/phys/Compound.hx",368,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::nape::constraint::ConstraintIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::nape::constraint::ConstraintList _this = this->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(372)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(372)
				_g = ::nape::constraint::ConstraintIterator_obj::get(_this);
			}
			HX_STACK_LINE(372)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",372,0x15c2ad5d)
						{
							HX_STACK_LINE(372)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(372)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(372)
							{
								HX_STACK_LINE(372)
								::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(372)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(372)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(372)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(372)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(372)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(372)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::constraint::ConstraintIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",372,0x15c2ad5d)
									{
										HX_STACK_LINE(372)
										{
											HX_STACK_LINE(372)
											_g->zpp_next = ::nape::constraint::ConstraintIterator_obj::zpp_pool;
											HX_STACK_LINE(372)
											::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(372)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(372)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(372)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(372)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(372)
					break;
				}
				HX_STACK_LINE(372)
				::nape::constraint::Constraint c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					_g->zpp_critical = false;
					HX_STACK_LINE(372)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(372)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(372)
				lambda(c).Cast< Void >();
			}
		}
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(373)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(373)
				_g = ::nape::phys::CompoundIterator_obj::get(_this);
			}
			HX_STACK_LINE(373)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",373,0x15c2ad5d)
						{
							HX_STACK_LINE(373)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(373)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(373)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(373)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(373)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(373)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(373)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(373)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",373,0x15c2ad5d)
									{
										HX_STACK_LINE(373)
										{
											HX_STACK_LINE(373)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(373)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(373)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(373)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(373)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(373)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					_g->zpp_critical = false;
					HX_STACK_LINE(373)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(373)
					c = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(373)
				c->visitConstraints(lambda);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitConstraints,(void))

Void Compound_obj::visitCompounds( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitCompounds",0x6b13718a,"nape.phys.Compound.visitCompounds","nape/phys/Compound.hx",386,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(386)
		::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			::nape::phys::CompoundList _this = this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(386)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(386)
			_g = ::nape::phys::CompoundIterator_obj::get(_this);
		}
		HX_STACK_LINE(386)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( ::nape::phys::CompoundIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",386,0x15c2ad5d)
					{
						HX_STACK_LINE(386)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(386)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(386)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(386)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(386)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(386)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(386)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(386)
						_g->zpp_critical = true;
						struct _Function_3_1{
							inline static bool Block( ::nape::phys::CompoundIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",386,0x15c2ad5d)
								{
									HX_STACK_LINE(386)
									{
										HX_STACK_LINE(386)
										_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
										HX_STACK_LINE(386)
										::nape::phys::CompoundIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(386)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(386)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(386)
			if ((!(_Function_2_1::Block(_g)))){
				HX_STACK_LINE(386)
				break;
			}
			HX_STACK_LINE(386)
			::nape::phys::Compound c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(386)
			{
				HX_STACK_LINE(386)
				_g->zpp_critical = false;
				HX_STACK_LINE(386)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(386)
				c = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(387)
			lambda(c).Cast< Void >();
			HX_STACK_LINE(388)
			c->visitCompounds(lambda);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitCompounds,(void))

::nape::geom::Vec2 Compound_obj::COM( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Compound","COM",0x9c5460d4,"nape.phys.Compound.COM","nape/phys/Compound.hx",401,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( bool &weak){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",402,0x15c2ad5d)
				{
					HX_STACK_LINE(402)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(402)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(402)
						::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(402)
						ret = _g;
					}
					else{
						HX_STACK_LINE(402)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(402)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(402)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(402)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(402)
						::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(402)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(402)
									::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(402)
									ret1 = _g1;
								}
								else{
									HX_STACK_LINE(402)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(402)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(402)
									ret1->next = null();
								}
								HX_STACK_LINE(402)
								ret1->weak = false;
							}
							HX_STACK_LINE(402)
							ret1->_immutable = immutable;
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								ret1->x = (int)0;
								HX_STACK_LINE(402)
								ret1->y = (int)0;
								HX_STACK_LINE(402)
								{
								}
							}
							HX_STACK_LINE(402)
							_g2 = ret1;
						}
						HX_STACK_LINE(402)
						ret->zpp_inner = _g2;
						HX_STACK_LINE(402)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(402)
						Float _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(402)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(402)
									_this->_validate();
								}
							}
							HX_STACK_LINE(402)
							_g3 = ret->zpp_inner->x;
						}
						struct _Function_3_1{
							inline static bool Block( ::nape::geom::Vec2 &ret){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",402,0x15c2ad5d)
								{
									HX_STACK_LINE(402)
									Float _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(402)
									{
										HX_STACK_LINE(402)
										{
											HX_STACK_LINE(402)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(402)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(402)
												_this->_validate();
											}
										}
										HX_STACK_LINE(402)
										_g4 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(402)
									return (_g4 == (int)0);
								}
								return null();
							}
						};
						HX_STACK_LINE(402)
						if ((!(((  (((_g3 == (int)0))) ? bool(_Function_3_1::Block(ret)) : bool(false) ))))){
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(402)
								ret->zpp_inner->y = (int)0;
								HX_STACK_LINE(402)
								{
								}
							}
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(402)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(402)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(402)
						ret;
					}
					HX_STACK_LINE(402)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(402)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(402)
		Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block(weak));		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(403)
		Array< Float > total = Array_obj< Float >::__new().Add(0.0);		HX_STACK_VAR(total,"total");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,ret,Array< Float >,total)
		Void run(::nape::phys::Body b){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","nape/phys/Compound.hx",405,0x15c2ad5d)
			HX_STACK_ARG(b,"b")
			{
				struct _Function_2_1{
					inline static bool Block( ::nape::phys::Body &b){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",405,0x15c2ad5d)
						{
							HX_STACK_LINE(405)
							::nape::shape::ShapeList _this = b->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(405)
							return (_this->zpp_inner->inner->head == null());
						}
						return null();
					}
				};
				HX_STACK_LINE(405)
				if ((!(_Function_2_1::Block(b)))){
					struct _Function_3_1{
						inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &b){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",406,0x15c2ad5d)
							{
								HX_STACK_LINE(406)
								if (((b->zpp_inner->wrap_worldCOM == null()))){
									HX_STACK_LINE(406)
									{
										HX_STACK_LINE(406)
										Float x = b->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(406)
										Float y = b->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(406)
										bool weak1 = false;		HX_STACK_VAR(weak1,"weak1");
										HX_STACK_LINE(406)
										::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(406)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(406)
											ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
										}
										else{
											HX_STACK_LINE(406)
											ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(406)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
											HX_STACK_LINE(406)
											ret1->zpp_pool = null();
										}
										HX_STACK_LINE(406)
										if (((ret1->zpp_inner == null()))){
											HX_STACK_LINE(406)
											{
												HX_STACK_LINE(406)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(406)
												::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
												HX_STACK_LINE(406)
												{
													HX_STACK_LINE(406)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(406)
														ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(406)
														ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(406)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
														HX_STACK_LINE(406)
														ret2->next = null();
													}
													HX_STACK_LINE(406)
													ret2->weak = false;
												}
												HX_STACK_LINE(406)
												ret2->_immutable = immutable;
												HX_STACK_LINE(406)
												{
													HX_STACK_LINE(406)
													ret2->x = x;
													HX_STACK_LINE(406)
													ret2->y = y;
													HX_STACK_LINE(406)
													{
													}
												}
												HX_STACK_LINE(406)
												ret1->zpp_inner = ret2;
											}
											HX_STACK_LINE(406)
											ret1->zpp_inner->outer = ret1;
										}
										else{
											struct _Function_7_1{
												inline static Float Block( ::nape::geom::Vec2 &ret1){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",406,0x15c2ad5d)
													{
														HX_STACK_LINE(406)
														{
															HX_STACK_LINE(406)
															::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(406)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(406)
																_this->_validate();
															}
														}
														HX_STACK_LINE(406)
														return ret1->zpp_inner->x;
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static Float Block( ::nape::geom::Vec2 &ret1){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",406,0x15c2ad5d)
													{
														HX_STACK_LINE(406)
														{
															HX_STACK_LINE(406)
															::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(406)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(406)
																_this->_validate();
															}
														}
														HX_STACK_LINE(406)
														return ret1->zpp_inner->y;
													}
													return null();
												}
											};
											HX_STACK_LINE(406)
											if ((!(((bool((_Function_7_1::Block(ret1) == x)) && bool((_Function_7_2::Block(ret1) == y))))))){
												HX_STACK_LINE(406)
												{
													HX_STACK_LINE(406)
													ret1->zpp_inner->x = x;
													HX_STACK_LINE(406)
													ret1->zpp_inner->y = y;
													HX_STACK_LINE(406)
													{
													}
												}
												HX_STACK_LINE(406)
												{
													HX_STACK_LINE(406)
													::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(406)
													if (((_this->_invalidate != null()))){
														HX_STACK_LINE(406)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(406)
											ret1;
										}
										HX_STACK_LINE(406)
										ret1->zpp_inner->weak = weak1;
										HX_STACK_LINE(406)
										b->zpp_inner->wrap_worldCOM = ret1;
									}
									HX_STACK_LINE(406)
									b->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
									HX_STACK_LINE(406)
									b->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
									HX_STACK_LINE(406)
									b->zpp_inner->wrap_worldCOM->zpp_inner->_validate = b->zpp_inner->getworldCOM_dyn();
								}
								HX_STACK_LINE(406)
								return b->zpp_inner->wrap_worldCOM;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::phys::Body &b){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",406,0x15c2ad5d)
							{
								HX_STACK_LINE(406)
								b->zpp_inner->validate_mass();
								HX_STACK_LINE(406)
								return b->zpp_inner->cmass;
							}
							return null();
						}
					};
					HX_STACK_LINE(406)
					ret->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->addeq((_Function_3_1::Block(b))->mul(_Function_3_2::Block(b),true));
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						b->zpp_inner->validate_mass();
						HX_STACK_LINE(407)
						hx::AddEq(total[(int)0],b->zpp_inner->cmass);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(404)
		this->visitBodies( Dynamic(new _Function_1_2(ret,total)));
		HX_STACK_LINE(413)
		ret->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->muleq((Float((int)1) / Float(total->__get((int)0))));
		HX_STACK_LINE(414)
		return ret->__get((int)0).StaticCast< ::nape::geom::Vec2 >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,COM,return )

::nape::phys::Compound Compound_obj::translate( ::nape::geom::Vec2 translation){
	HX_STACK_FRAME("nape.phys.Compound","translate",0xfb6e2441,"nape.phys.Compound.translate","nape/phys/Compound.hx",426,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(426)
	Array< ::Dynamic > translation1 = Array_obj< ::Dynamic >::__new().Add(translation);		HX_STACK_VAR(translation1,"translation1");
	HX_STACK_LINE(435)
	bool weak = translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(436)
	translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak = false;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,translation1)
	Void run(::nape::phys::Body b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nape/phys/Compound.hx",437,0x15c2ad5d)
		HX_STACK_ARG(b,"b")
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &b){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Compound.hx",437,0x15c2ad5d)
					{
						HX_STACK_LINE(437)
						if (((b->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(437)
							b->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(437)
						return b->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(437)
			(_Function_2_1::Block(b))->addeq(translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(437)
	this->visitBodies( Dynamic(new _Function_1_1(translation1)));
	HX_STACK_LINE(438)
	translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak = weak;
	HX_STACK_LINE(439)
	if ((translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak)){
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::zpp_nape::geom::ZPP_Vec2 inner = translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(443)
			translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->outer = null();
			HX_STACK_LINE(443)
			translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner = null();
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				::nape::geom::Vec2 o = translation1->__get((int)0).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(443)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(443)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(443)
				{
					HX_STACK_LINE(443)
					if (((o->outer != null()))){
						HX_STACK_LINE(443)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(443)
						o->outer = null();
					}
					HX_STACK_LINE(443)
					o->_isimmutable = null();
					HX_STACK_LINE(443)
					o->_validate = null();
					HX_STACK_LINE(443)
					o->_invalidate = null();
				}
				HX_STACK_LINE(443)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(443)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(444)
		true;
	}
	else{
		HX_STACK_LINE(447)
		false;
	}
	HX_STACK_LINE(450)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,translate,return )

::nape::phys::Compound Compound_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_FRAME("nape.phys.Compound","rotate",0x2272b388,"nape.phys.Compound.rotate","nape/phys/Compound.hx",463,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(centre,"centre")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(463)
	Array< Float > angle1 = Array_obj< Float >::__new().Add(angle);		HX_STACK_VAR(angle1,"angle1");
	HX_STACK_LINE(463)
	Array< ::Dynamic > centre1 = Array_obj< ::Dynamic >::__new().Add(centre);		HX_STACK_VAR(centre1,"centre1");
	HX_STACK_LINE(475)
	bool weak = centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(476)
	centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak = false;

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< Float >,angle1,Array< ::Dynamic >,centre1)
	Void run(::nape::phys::Body b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nape/phys/Compound.hx",477,0x15c2ad5d)
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(477)
			b->rotate(centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >(),angle1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(477)
	this->visitBodies( Dynamic(new _Function_1_1(angle1,centre1)));
	HX_STACK_LINE(478)
	centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak = weak;
	HX_STACK_LINE(479)
	if ((centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->weak)){
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::zpp_nape::geom::ZPP_Vec2 inner = centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(483)
			centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner->outer = null();
			HX_STACK_LINE(483)
			centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >()->zpp_inner = null();
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::nape::geom::Vec2 o = centre1->__get((int)0).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(483)
				o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(483)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(483)
				{
					HX_STACK_LINE(483)
					if (((o->outer != null()))){
						HX_STACK_LINE(483)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(483)
						o->outer = null();
					}
					HX_STACK_LINE(483)
					o->_isimmutable = null();
					HX_STACK_LINE(483)
					o->_validate = null();
					HX_STACK_LINE(483)
					o->_invalidate = null();
				}
				HX_STACK_LINE(483)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(484)
		true;
	}
	else{
		HX_STACK_LINE(487)
		false;
	}
	HX_STACK_LINE(490)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Compound_obj,rotate,return )


Compound_obj::Compound_obj()
{
}

void Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Compound);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Compound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"COM") ) { return COM_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return get_bodies(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return get_compound(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"compounds") ) { return get_compounds(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bodies") ) { return get_bodies_dyn(); }
		if (HX_FIELD_EQ(inName,"breakApart") ) { return breakApart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return get_constraints(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_compounds") ) { return get_compounds_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"visitCompounds") ) { return visitCompounds_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visitConstraints") ) { return visitConstraints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return set_compound(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("bodies"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("compounds"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(Compound_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_bodies"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("get_compounds"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_space"),
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	HX_CSTRING("breakApart"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("visitConstraints"),
	HX_CSTRING("visitCompounds"),
	HX_CSTRING("COM"),
	HX_CSTRING("translate"),
	HX_CSTRING("rotate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compound_obj::__mClass,"__mClass");
};

#endif

Class Compound_obj::__mClass;

void Compound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Compound"), hx::TCanCast< Compound_obj> ,sStaticFields,sMemberFields,
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

void Compound_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
