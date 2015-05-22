#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#define INCLUDED_flixel_addons_nape_FlxNapeSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyType)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  FlxNapeSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxNapeSprite_obj OBJ_;
		FlxNapeSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxNapeSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxNapeSprite"); }

		::nape::phys::Body body;
		bool physicsEnabled;
		Float _linearDrag;
		Float _angularDrag;
		virtual Void destroy( );

		virtual Void update( );

		virtual Void kill( );

		virtual Void revive( );

		virtual Void addPremadeBody( ::nape::phys::Body NewBody);
		Dynamic addPremadeBody_dyn();

		virtual Void createCircularBody( hx::Null< Float >  Radius,::nape::phys::BodyType _Type);
		Dynamic createCircularBody_dyn();

		virtual Void createRectangularBody( hx::Null< Float >  Width,hx::Null< Float >  Height,::nape::phys::BodyType _Type);
		Dynamic createRectangularBody_dyn();

		virtual Void setBodyMaterial( hx::Null< Float >  Elasticity,hx::Null< Float >  DynamicFriction,hx::Null< Float >  StaticFriction,hx::Null< Float >  Density,hx::Null< Float >  RotationFriction);
		Dynamic setBodyMaterial_dyn();

		virtual Void destroyPhysObjects( );
		Dynamic destroyPhysObjects_dyn();

		virtual Void setDrag( hx::Null< Float >  LinearDrag,hx::Null< Float >  AngularDrag);
		Dynamic setDrag_dyn();

		virtual Void updatePhysObjects( );
		Dynamic updatePhysObjects_dyn();

		virtual bool set_physicsEnabled( bool Value);
		Dynamic set_physicsEnabled_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeSprite */ 
