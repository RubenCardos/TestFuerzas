#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#define INCLUDED_zpp_nape_util_ZNPList_ConvexResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ConvexResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ConvexResult)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPList_ConvexResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ConvexResult_obj OBJ_;
		ZNPList_ConvexResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ZNPList_ConvexResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ConvexResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPList_ConvexResult"); }

		::zpp_nape::util::ZNPNode_ConvexResult head;
		virtual ::zpp_nape::util::ZNPNode_ConvexResult begin( );
		Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ConvexResult i);
		Dynamic setbegin_dyn();

		virtual ::nape::geom::ConvexResult add( ::nape::geom::ConvexResult o);
		Dynamic add_dyn();

		virtual ::nape::geom::ConvexResult inlined_add( ::nape::geom::ConvexResult o);
		Dynamic inlined_add_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ConvexResult x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o);
		Dynamic insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult inlined_insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o);
		Dynamic inlined_insert_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual ::nape::geom::ConvexResult pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual ::nape::geom::ConvexResult inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual Void remove( ::nape::geom::ConvexResult obj);
		Dynamic remove_dyn();

		virtual bool try_remove( ::nape::geom::ConvexResult obj);
		Dynamic try_remove_dyn();

		virtual Void inlined_remove( ::nape::geom::ConvexResult obj);
		Dynamic inlined_remove_dyn();

		virtual bool inlined_try_remove( ::nape::geom::ConvexResult obj);
		Dynamic inlined_try_remove_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult erase( ::zpp_nape::util::ZNPNode_ConvexResult pre);
		Dynamic erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult inlined_erase( ::zpp_nape::util::ZNPNode_ConvexResult pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult splice( ::zpp_nape::util::ZNPNode_ConvexResult pre,int n);
		Dynamic splice_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool has( ::nape::geom::ConvexResult obj);
		Dynamic has_dyn();

		virtual bool inlined_has( ::nape::geom::ConvexResult obj);
		Dynamic inlined_has_dyn();

		virtual ::nape::geom::ConvexResult front( );
		Dynamic front_dyn();

		virtual ::nape::geom::ConvexResult back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::util::ZNPNode_ConvexResult iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::nape::geom::ConvexResult at( int ind);
		Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ConvexResult */ 
