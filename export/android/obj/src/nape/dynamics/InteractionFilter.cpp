#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace dynamics{

Void InteractionFilter_obj::__construct(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{
HX_STACK_FRAME("nape.dynamics.InteractionFilter","new",0xe0918fe8,"nape.dynamics.InteractionFilter.new","nape/dynamics/InteractionFilter.hx",206,0x3ee48c68)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_collisionGroup,"collisionGroup")
HX_STACK_ARG(__o_collisionMask,"collisionMask")
HX_STACK_ARG(__o_sensorGroup,"sensorGroup")
HX_STACK_ARG(__o_sensorMask,"sensorMask")
HX_STACK_ARG(__o_fluidGroup,"fluidGroup")
HX_STACK_ARG(__o_fluidMask,"fluidMask")
int collisionGroup = __o_collisionGroup.Default(1);
int collisionMask = __o_collisionMask.Default(-1);
int sensorGroup = __o_sensorGroup.Default(1);
int sensorMask = __o_sensorMask.Default(-1);
int fluidGroup = __o_fluidGroup.Default(1);
int fluidMask = __o_fluidMask.Default(-1);
{
	HX_STACK_LINE(210)
	this->zpp_inner = null();
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(366)
		if (((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool == null()))){
			HX_STACK_LINE(367)
			::zpp_nape::dynamics::ZPP_InteractionFilter _g = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(367)
			this->zpp_inner = _g;
		}
		else{
			HX_STACK_LINE(373)
			this->zpp_inner = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = this->zpp_inner->next;
			HX_STACK_LINE(375)
			this->zpp_inner->next = null();
		}
		HX_STACK_LINE(380)
		Dynamic();
	}
	HX_STACK_LINE(382)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		if (((this->zpp_inner->collisionGroup != collisionGroup))){
			HX_STACK_LINE(383)
			this->zpp_inner->collisionGroup = collisionGroup;
			HX_STACK_LINE(383)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(383)
		this->zpp_inner->collisionGroup;
	}
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		if (((this->zpp_inner->collisionMask != collisionMask))){
			HX_STACK_LINE(384)
			this->zpp_inner->collisionMask = collisionMask;
			HX_STACK_LINE(384)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(384)
		this->zpp_inner->collisionMask;
	}
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		if (((this->zpp_inner->sensorGroup != sensorGroup))){
			HX_STACK_LINE(385)
			this->zpp_inner->sensorGroup = sensorGroup;
			HX_STACK_LINE(385)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(385)
		this->zpp_inner->sensorGroup;
	}
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		if (((this->zpp_inner->sensorMask != sensorMask))){
			HX_STACK_LINE(386)
			this->zpp_inner->sensorMask = sensorMask;
			HX_STACK_LINE(386)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(386)
		this->zpp_inner->sensorMask;
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		if (((this->zpp_inner->fluidGroup != fluidGroup))){
			HX_STACK_LINE(387)
			this->zpp_inner->fluidGroup = fluidGroup;
			HX_STACK_LINE(387)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(387)
		this->zpp_inner->fluidGroup;
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		if (((this->zpp_inner->fluidMask != fluidMask))){
			HX_STACK_LINE(388)
			this->zpp_inner->fluidMask = fluidMask;
			HX_STACK_LINE(388)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(388)
		this->zpp_inner->fluidMask;
	}
}
;
	return null();
}

//InteractionFilter_obj::~InteractionFilter_obj() { }

Dynamic InteractionFilter_obj::__CreateEmpty() { return  new InteractionFilter_obj; }
hx::ObjectPtr< InteractionFilter_obj > InteractionFilter_obj::__new(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{  hx::ObjectPtr< InteractionFilter_obj > result = new InteractionFilter_obj();
	result->__construct(__o_collisionGroup,__o_collisionMask,__o_sensorGroup,__o_sensorMask,__o_fluidGroup,__o_fluidMask);
	return result;}

Dynamic InteractionFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionFilter_obj > result = new InteractionFilter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Dynamic InteractionFilter_obj::get_userData( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_userData",0x21645996,"nape.dynamics.InteractionFilter.get_userData","nape/dynamics/InteractionFilter.hx",224,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/InteractionFilter.hx",226,0x3ee48c68)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(226)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(228)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_userData,return )

::nape::shape::ShapeList InteractionFilter_obj::get_shapes( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_shapes",0x65060b73,"nape.dynamics.InteractionFilter.get_shapes","nape/dynamics/InteractionFilter.hx",239,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	if (((this->zpp_inner->wrap_shapes == null()))){
		HX_STACK_LINE(240)
		::nape::shape::ShapeList _g = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->zpp_inner->shapes,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(240)
		this->zpp_inner->wrap_shapes = _g;
	}
	HX_STACK_LINE(241)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_shapes,return )

int InteractionFilter_obj::get_collisionGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_collisionGroup",0x313677ae,"nape.dynamics.InteractionFilter.get_collisionGroup","nape/dynamics/InteractionFilter.hx",250,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	return this->zpp_inner->collisionGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionGroup,return )

int InteractionFilter_obj::set_collisionGroup( int collisionGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_collisionGroup",0x0de5aa22,"nape.dynamics.InteractionFilter.set_collisionGroup","nape/dynamics/InteractionFilter.hx",252,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionGroup,"collisionGroup")
	HX_STACK_LINE(254)
	if (((this->zpp_inner->collisionGroup != collisionGroup))){
		HX_STACK_LINE(255)
		this->zpp_inner->collisionGroup = collisionGroup;
		HX_STACK_LINE(256)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(259)
	return this->zpp_inner->collisionGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionGroup,return )

int InteractionFilter_obj::get_collisionMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_collisionMask",0x01d71f5d,"nape.dynamics.InteractionFilter.get_collisionMask","nape/dynamics/InteractionFilter.hx",268,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	return this->zpp_inner->collisionMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionMask,return )

int InteractionFilter_obj::set_collisionMask( int collisionMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_collisionMask",0x2544f769,"nape.dynamics.InteractionFilter.set_collisionMask","nape/dynamics/InteractionFilter.hx",270,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionMask,"collisionMask")
	HX_STACK_LINE(272)
	if (((this->zpp_inner->collisionMask != collisionMask))){
		HX_STACK_LINE(273)
		this->zpp_inner->collisionMask = collisionMask;
		HX_STACK_LINE(274)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(277)
	return this->zpp_inner->collisionMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionMask,return )

int InteractionFilter_obj::get_sensorGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_sensorGroup",0x14d441c4,"nape.dynamics.InteractionFilter.get_sensorGroup","nape/dynamics/InteractionFilter.hx",286,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	return this->zpp_inner->sensorGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorGroup,return )

int InteractionFilter_obj::set_sensorGroup( int sensorGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_sensorGroup",0x109fbed0,"nape.dynamics.InteractionFilter.set_sensorGroup","nape/dynamics/InteractionFilter.hx",288,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sensorGroup,"sensorGroup")
	HX_STACK_LINE(290)
	if (((this->zpp_inner->sensorGroup != sensorGroup))){
		HX_STACK_LINE(291)
		this->zpp_inner->sensorGroup = sensorGroup;
		HX_STACK_LINE(292)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(295)
	return this->zpp_inner->sensorGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorGroup,return )

int InteractionFilter_obj::get_sensorMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_sensorMask",0x8a52aa07,"nape.dynamics.InteractionFilter.get_sensorMask","nape/dynamics/InteractionFilter.hx",304,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(304)
	return this->zpp_inner->sensorMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorMask,return )

int InteractionFilter_obj::set_sensorMask( int sensorMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_sensorMask",0xaa72927b,"nape.dynamics.InteractionFilter.set_sensorMask","nape/dynamics/InteractionFilter.hx",306,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sensorMask,"sensorMask")
	HX_STACK_LINE(308)
	if (((this->zpp_inner->sensorMask != sensorMask))){
		HX_STACK_LINE(309)
		this->zpp_inner->sensorMask = sensorMask;
		HX_STACK_LINE(310)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(313)
	return this->zpp_inner->sensorMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorMask,return )

int InteractionFilter_obj::get_fluidGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_fluidGroup",0x6c068a96,"nape.dynamics.InteractionFilter.get_fluidGroup","nape/dynamics/InteractionFilter.hx",322,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	return this->zpp_inner->fluidGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidGroup,return )

int InteractionFilter_obj::set_fluidGroup( int fluidGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_fluidGroup",0x8c26730a,"nape.dynamics.InteractionFilter.set_fluidGroup","nape/dynamics/InteractionFilter.hx",324,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidGroup,"fluidGroup")
	HX_STACK_LINE(326)
	if (((this->zpp_inner->fluidGroup != fluidGroup))){
		HX_STACK_LINE(327)
		this->zpp_inner->fluidGroup = fluidGroup;
		HX_STACK_LINE(328)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(331)
	return this->zpp_inner->fluidGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidGroup,return )

int InteractionFilter_obj::get_fluidMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_fluidMask",0x8990e175,"nape.dynamics.InteractionFilter.get_fluidMask","nape/dynamics/InteractionFilter.hx",340,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	return this->zpp_inner->fluidMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidMask,return )

int InteractionFilter_obj::set_fluidMask( int fluidMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_fluidMask",0xce96c381,"nape.dynamics.InteractionFilter.set_fluidMask","nape/dynamics/InteractionFilter.hx",342,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidMask,"fluidMask")
	HX_STACK_LINE(344)
	if (((this->zpp_inner->fluidMask != fluidMask))){
		HX_STACK_LINE(345)
		this->zpp_inner->fluidMask = fluidMask;
		HX_STACK_LINE(346)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(349)
	return this->zpp_inner->fluidMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidMask,return )

bool InteractionFilter_obj::shouldCollide( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldCollide",0xb4a36513,"nape.dynamics.InteractionFilter.shouldCollide","nape/dynamics/InteractionFilter.hx",404,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(404)
	::zpp_nape::dynamics::ZPP_InteractionFilter _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(404)
	::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(404)
	return (bool((((int(_this->collisionMask) & int(x->collisionGroup))) != (int)0)) && bool((((int(x->collisionMask) & int(_this->collisionGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldCollide,return )

bool InteractionFilter_obj::shouldSense( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldSense",0x43d0d583,"nape.dynamics.InteractionFilter.shouldSense","nape/dynamics/InteractionFilter.hx",420,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(420)
	::zpp_nape::dynamics::ZPP_InteractionFilter _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(420)
	::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(420)
	return (bool((((int(_this->sensorMask) & int(x->sensorGroup))) != (int)0)) && bool((((int(x->sensorMask) & int(_this->sensorGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldSense,return )

bool InteractionFilter_obj::shouldFlow( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldFlow",0x2a3e4339,"nape.dynamics.InteractionFilter.shouldFlow","nape/dynamics/InteractionFilter.hx",436,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(436)
	::zpp_nape::dynamics::ZPP_InteractionFilter _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(436)
	::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(436)
	return (bool((((int(_this->fluidMask) & int(x->fluidGroup))) != (int)0)) && bool((((int(x->fluidMask) & int(_this->fluidGroup))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldFlow,return )

::nape::dynamics::InteractionFilter InteractionFilter_obj::copy( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","copy",0x978e932d,"nape.dynamics.InteractionFilter.copy","nape/dynamics/InteractionFilter.hx",445,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(445)
	return ::nape::dynamics::InteractionFilter_obj::__new(this->zpp_inner->collisionGroup,this->zpp_inner->collisionMask,this->zpp_inner->sensorGroup,this->zpp_inner->sensorMask,this->zpp_inner->fluidGroup,this->zpp_inner->fluidMask);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,copy,return )

::String InteractionFilter_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","toString",0xe585c424,"nape.dynamics.InteractionFilter.toString","nape/dynamics/InteractionFilter.hx",451,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	::String _g = ::StringTools_obj::hex(this->zpp_inner->collisionGroup,(int)8);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(452)
	::String _g1 = (HX_CSTRING("{ collision: ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(452)
	::String _g2 = (_g1 + HX_CSTRING("~"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(452)
	::String _g3 = ::StringTools_obj::hex(this->zpp_inner->collisionMask,(int)8);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(452)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(452)
	::String _g5 = (_g4 + HX_CSTRING(" sensor: "));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(452)
	::String _g6 = ::StringTools_obj::hex(this->zpp_inner->sensorGroup,(int)8);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(452)
	::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(452)
	::String _g8 = (_g7 + HX_CSTRING("~"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(452)
	::String _g9 = ::StringTools_obj::hex(this->zpp_inner->sensorMask,(int)8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(452)
	::String _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(452)
	::String _g11 = (_g10 + HX_CSTRING(" fluid: "));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(452)
	::String _g12 = ::StringTools_obj::hex(this->zpp_inner->fluidGroup,(int)8);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(452)
	::String _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(452)
	::String _g14 = (_g13 + HX_CSTRING("~"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(452)
	::String _g15 = ::StringTools_obj::hex(this->zpp_inner->fluidMask,(int)8);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(452)
	::String _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(452)
	return (_g16 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,toString,return )


InteractionFilter_obj::InteractionFilter_obj()
{
}

void InteractionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionFilter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void InteractionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic InteractionFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return get_shapes(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"fluidMask") ) { return get_fluidMask(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"sensorMask") ) { return get_sensorMask(); }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { return get_fluidGroup(); }
		if (HX_FIELD_EQ(inName,"shouldFlow") ) { return shouldFlow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { return get_sensorGroup(); }
		if (HX_FIELD_EQ(inName,"shouldSense") ) { return shouldSense_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { return get_collisionMask(); }
		if (HX_FIELD_EQ(inName,"get_fluidMask") ) { return get_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidMask") ) { return set_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return get_collisionGroup(); }
		if (HX_FIELD_EQ(inName,"get_sensorMask") ) { return get_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorMask") ) { return set_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidGroup") ) { return get_fluidGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidGroup") ) { return set_fluidGroup_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_sensorGroup") ) { return get_sensorGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorGroup") ) { return set_sensorGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_collisionMask") ) { return get_collisionMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_collisionMask") ) { return set_collisionMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_collisionGroup") ) { return get_collisionGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_collisionGroup") ) { return set_collisionGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidMask") ) { return set_fluidMask(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { return set_sensorMask(inValue); }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { return set_fluidGroup(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { return set_sensorGroup(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { return set_collisionMask(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return set_collisionGroup(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("collisionGroup"));
	outFields->push(HX_CSTRING("collisionMask"));
	outFields->push(HX_CSTRING("sensorGroup"));
	outFields->push(HX_CSTRING("sensorMask"));
	outFields->push(HX_CSTRING("fluidGroup"));
	outFields->push(HX_CSTRING("fluidMask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(InteractionFilter_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("get_collisionGroup"),
	HX_CSTRING("set_collisionGroup"),
	HX_CSTRING("get_collisionMask"),
	HX_CSTRING("set_collisionMask"),
	HX_CSTRING("get_sensorGroup"),
	HX_CSTRING("set_sensorGroup"),
	HX_CSTRING("get_sensorMask"),
	HX_CSTRING("set_sensorMask"),
	HX_CSTRING("get_fluidGroup"),
	HX_CSTRING("set_fluidGroup"),
	HX_CSTRING("get_fluidMask"),
	HX_CSTRING("set_fluidMask"),
	HX_CSTRING("shouldCollide"),
	HX_CSTRING("shouldSense"),
	HX_CSTRING("shouldFlow"),
	HX_CSTRING("copy"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

#endif

Class InteractionFilter_obj::__mClass;

void InteractionFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.InteractionFilter"), hx::TCanCast< InteractionFilter_obj> ,sStaticFields,sMemberFields,
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

void InteractionFilter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
