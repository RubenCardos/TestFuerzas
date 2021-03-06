#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","new",0xa7a6988e,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.new","zpp_nape/util/RBTree.hx",2842,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2883)
	this->colour = (int)0;
	HX_STACK_LINE(2882)
	this->parent = null();
	HX_STACK_LINE(2881)
	this->next = null();
	HX_STACK_LINE(2880)
	this->prev = null();
	HX_STACK_LINE(2879)
	this->data = null();
	HX_STACK_LINE(2878)
	this->swapped = null();
	HX_STACK_LINE(2877)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_PartitionVertex_obj::~ZPP_Set_ZPP_PartitionVertex_obj() { }

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > ZPP_Set_ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > result = new ZPP_Set_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > result = new ZPP_Set_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Void ZPP_Set_ZPP_PartitionVertex_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","free",0x04defcbe,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.free","zpp_nape/util/RBTree.hx",2869,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2870)
		this->data = null();
		HX_STACK_LINE(2871)
		this->lt = null();
		HX_STACK_LINE(2872)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,free,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","alloc",0x594b5423,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.alloc","zpp_nape/util/RBTree.hx",2876,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,alloc,(void))

bool ZPP_Set_ZPP_PartitionVertex_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","verify",0x2a418c0b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.verify","zpp_nape/util/RBTree.hx",2885,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2895)
	if ((!(this->empty()))){
		HX_STACK_LINE(2896)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(2897)
		while((true)){
			HX_STACK_LINE(2897)
			if ((!(((set_ite->prev != null()))))){
				HX_STACK_LINE(2897)
				break;
			}
			HX_STACK_LINE(2897)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(2898)
		while((true)){
			HX_STACK_LINE(2898)
			if ((!(((set_ite != null()))))){
				HX_STACK_LINE(2898)
				break;
			}
			HX_STACK_LINE(2899)
			::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2900)
			{
				HX_STACK_LINE(2901)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(2911)
				if ((!(this->empty()))){
					HX_STACK_LINE(2912)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(2913)
					while((true)){
						HX_STACK_LINE(2913)
						if ((!(((set_ite1->prev != null()))))){
							HX_STACK_LINE(2913)
							break;
						}
						HX_STACK_LINE(2913)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(2914)
					while((true)){
						HX_STACK_LINE(2914)
						if ((!(((set_ite1 != null()))))){
							HX_STACK_LINE(2914)
							break;
						}
						HX_STACK_LINE(2915)
						::zpp_nape::geom::ZPP_PartitionVertex j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2917)
						if ((!(prei))){
							HX_STACK_LINE(2918)
							if (((  ((!(this->lt(i,j)))) ? bool(this->lt(j,i)) : bool(false) ))){
								HX_STACK_LINE(2918)
								return false;
							}
						}
						else{
							HX_STACK_LINE(2920)
							if (((i == j))){
								HX_STACK_LINE(2920)
								prei = false;
							}
							else{
								HX_STACK_LINE(2922)
								if (((  ((!(this->lt(j,i)))) ? bool(this->lt(i,j)) : bool(false) ))){
									HX_STACK_LINE(2922)
									return false;
								}
							}
						}
						HX_STACK_LINE(2925)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(2926)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(2927)
							while((true)){
								HX_STACK_LINE(2927)
								if ((!(((set_ite1->prev != null()))))){
									HX_STACK_LINE(2927)
									break;
								}
								HX_STACK_LINE(2927)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(2930)
							while((true)){
								HX_STACK_LINE(2930)
								if ((!(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))))){
									HX_STACK_LINE(2930)
									break;
								}
								HX_STACK_LINE(2930)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(2931)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(2937)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(2938)
				set_ite = set_ite->next;
				HX_STACK_LINE(2939)
				while((true)){
					HX_STACK_LINE(2939)
					if ((!(((set_ite->prev != null()))))){
						HX_STACK_LINE(2939)
						break;
					}
					HX_STACK_LINE(2939)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(2942)
				while((true)){
					HX_STACK_LINE(2942)
					if ((!(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))))){
						HX_STACK_LINE(2942)
						break;
					}
					HX_STACK_LINE(2942)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(2943)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(2948)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,verify,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","empty",0xa791ea3b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.empty","zpp_nape/util/RBTree.hx",2951,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2951)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,empty,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","singular",0xab2979e9,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.singular","zpp_nape/util/RBTree.hx",2954,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2954)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,singular,return )

int ZPP_Set_ZPP_PartitionVertex_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","size",0x0d7000d3,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.size","zpp_nape/util/RBTree.hx",2956,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2957)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2967)
	if ((!(this->empty()))){
		HX_STACK_LINE(2968)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(2969)
		while((true)){
			HX_STACK_LINE(2969)
			if ((!(((set_ite->prev != null()))))){
				HX_STACK_LINE(2969)
				break;
			}
			HX_STACK_LINE(2969)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(2970)
		while((true)){
			HX_STACK_LINE(2970)
			if ((!(((set_ite != null()))))){
				HX_STACK_LINE(2970)
				break;
			}
			HX_STACK_LINE(2971)
			::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2972)
			(ret)++;
			HX_STACK_LINE(2973)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(2974)
				set_ite = set_ite->next;
				HX_STACK_LINE(2975)
				while((true)){
					HX_STACK_LINE(2975)
					if ((!(((set_ite->prev != null()))))){
						HX_STACK_LINE(2975)
						break;
					}
					HX_STACK_LINE(2975)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(2978)
				while((true)){
					HX_STACK_LINE(2978)
					if ((!(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))))){
						HX_STACK_LINE(2978)
						break;
					}
					HX_STACK_LINE(2978)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(2979)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(2984)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,size,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","has",0xa7a20788,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.has","zpp_nape/util/RBTree.hx",2986,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2987)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = this->find(obj);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2987)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","find",0x04d8304b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.find","zpp_nape/util/RBTree.hx",2989,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2990)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2991)
	while((true)){
		HX_STACK_LINE(2991)
		if ((!(((bool((cur != null())) && bool((cur->data != obj))))))){
			HX_STACK_LINE(2991)
			break;
		}
		HX_STACK_LINE(2992)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2992)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2993)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2995)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","has_weak",0x4f3423cf,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.has_weak","zpp_nape/util/RBTree.hx",2997,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2998)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = this->find_weak(obj);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2998)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","find_weak",0x8c44582c,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.find_weak","zpp_nape/util/RBTree.hx",3000,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3001)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3002)
	while((true)){
		HX_STACK_LINE(3002)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(3002)
			break;
		}
		HX_STACK_LINE(3003)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(3003)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3004)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(3004)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(3005)
				break;
			}
		}
	}
	HX_STACK_LINE(3007)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find_weak,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","lower_bound",0x5f6c8e6e,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.lower_bound","zpp_nape/util/RBTree.hx",3010,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3011)
	::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3021)
	if ((!(this->empty()))){
		HX_STACK_LINE(3022)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(3023)
		while((true)){
			HX_STACK_LINE(3023)
			if ((!(((set_ite->prev != null()))))){
				HX_STACK_LINE(3023)
				break;
			}
			HX_STACK_LINE(3023)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(3024)
		while((true)){
			HX_STACK_LINE(3024)
			if ((!(((set_ite != null()))))){
				HX_STACK_LINE(3024)
				break;
			}
			HX_STACK_LINE(3025)
			::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
			HX_STACK_LINE(3027)
			if ((!(this->lt(elt,obj)))){
				HX_STACK_LINE(3028)
				ret = elt;
				HX_STACK_LINE(3029)
				break;
			}
			HX_STACK_LINE(3032)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(3033)
				set_ite = set_ite->next;
				HX_STACK_LINE(3034)
				while((true)){
					HX_STACK_LINE(3034)
					if ((!(((set_ite->prev != null()))))){
						HX_STACK_LINE(3034)
						break;
					}
					HX_STACK_LINE(3034)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(3037)
				while((true)){
					HX_STACK_LINE(3037)
					if ((!(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))))){
						HX_STACK_LINE(3037)
						break;
					}
					HX_STACK_LINE(3037)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(3038)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(3043)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,lower_bound,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","first",0x385527de,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.first","zpp_nape/util/RBTree.hx",3046,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3055)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3056)
	while((true)){
		HX_STACK_LINE(3056)
		if ((!(((cur->prev != null()))))){
			HX_STACK_LINE(3056)
			break;
		}
		HX_STACK_LINE(3056)
		cur = cur->prev;
	}
	HX_STACK_LINE(3057)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,first,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","pop_front",0x78cadee9,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.pop_front","zpp_nape/util/RBTree.hx",3059,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3068)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3069)
	while((true)){
		HX_STACK_LINE(3069)
		if ((!(((cur->prev != null()))))){
			HX_STACK_LINE(3069)
			break;
		}
		HX_STACK_LINE(3069)
		cur = cur->prev;
	}
	HX_STACK_LINE(3070)
	::zpp_nape::geom::ZPP_PartitionVertex ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3071)
	this->remove_node(cur);
	HX_STACK_LINE(3072)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,pop_front,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","remove",0x8d8aa4d6,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.remove","zpp_nape/util/RBTree.hx",3074,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3075)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3084)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","successor_node",0xb5ee190d,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.successor_node","zpp_nape/util/RBTree.hx",3086,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(3095)
	if (((cur->next != null()))){
		HX_STACK_LINE(3096)
		cur = cur->next;
		HX_STACK_LINE(3097)
		while((true)){
			HX_STACK_LINE(3097)
			if ((!(((cur->prev != null()))))){
				HX_STACK_LINE(3097)
				break;
			}
			HX_STACK_LINE(3097)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3100)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3101)
		cur = cur->parent;
		HX_STACK_LINE(3102)
		while((true)){
			HX_STACK_LINE(3102)
			if ((!(((bool((cur != null())) && bool((cur->prev != pre))))))){
				HX_STACK_LINE(3102)
				break;
			}
			HX_STACK_LINE(3103)
			pre = cur;
			HX_STACK_LINE(3104)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3107)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","predecessor_node",0x4d06798a,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.predecessor_node","zpp_nape/util/RBTree.hx",3109,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(3118)
	if (((cur->prev != null()))){
		HX_STACK_LINE(3119)
		cur = cur->prev;
		HX_STACK_LINE(3120)
		while((true)){
			HX_STACK_LINE(3120)
			if ((!(((cur->next != null()))))){
				HX_STACK_LINE(3120)
				break;
			}
			HX_STACK_LINE(3120)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(3123)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3124)
		cur = cur->parent;
		HX_STACK_LINE(3125)
		while((true)){
			HX_STACK_LINE(3125)
			if ((!(((bool((cur != null())) && bool((cur->next != pre))))))){
				HX_STACK_LINE(3125)
				break;
			}
			HX_STACK_LINE(3126)
			pre = cur;
			HX_STACK_LINE(3127)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3130)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","successor",0x32e9dc54,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.successor","zpp_nape/util/RBTree.hx",3132,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3141)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = this->find(obj);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3141)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->successor_node(_g);		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3142)
	if (((node == null()))){
		HX_STACK_LINE(3142)
		return null();
	}
	else{
		HX_STACK_LINE(3142)
		return node->data;
	}
	HX_STACK_LINE(3142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","predecessor",0xcf474cf7,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.predecessor","zpp_nape/util/RBTree.hx",3144,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3153)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = this->find(obj);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3153)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->predecessor_node(_g);		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3154)
	if (((node == null()))){
		HX_STACK_LINE(3154)
		return null();
	}
	else{
		HX_STACK_LINE(3154)
		return node->data;
	}
	HX_STACK_LINE(3154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","remove_node",0x31dd394b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.remove_node","zpp_nape/util/RBTree.hx",3156,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(3165)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(3166)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(3167)
			while((true)){
				HX_STACK_LINE(3167)
				if ((!(((sm->prev != null()))))){
					HX_STACK_LINE(3167)
					break;
				}
				HX_STACK_LINE(3167)
				sm = sm->prev;
			}
			HX_STACK_LINE(3168)
			{
				HX_STACK_LINE(3169)
				::zpp_nape::geom::ZPP_PartitionVertex t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3170)
				cur->data = sm->data;
				HX_STACK_LINE(3171)
				sm->data = t;
			}
			HX_STACK_LINE(3173)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(3173)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(3174)
			cur = sm;
		}
		HX_STACK_LINE(3184)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3184)
		if (((cur->prev == null()))){
			HX_STACK_LINE(3184)
			child = cur->next;
		}
		else{
			HX_STACK_LINE(3184)
			child = cur->prev;
		}
		HX_STACK_LINE(3185)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(3186)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(3186)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3187)
				if (((cur->parent != null()))){
					HX_STACK_LINE(3188)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(3189)
					while((true)){
						HX_STACK_LINE(3190)
						(parent->colour)++;
						HX_STACK_LINE(3191)
						(parent->prev->colour)--;
						HX_STACK_LINE(3192)
						(parent->next->colour)--;
						HX_STACK_LINE(3193)
						{
							HX_STACK_LINE(3194)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3195)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(3196)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(3197)
								break;
							}
							else{
								HX_STACK_LINE(3199)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(3201)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(3202)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(3203)
										break;
									}
									HX_STACK_LINE(3207)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(3208)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(3209)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(3214)
						{
							HX_STACK_LINE(3215)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3216)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(3217)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(3218)
								break;
							}
							else{
								HX_STACK_LINE(3220)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(3222)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(3223)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(3224)
										break;
									}
									HX_STACK_LINE(3228)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(3229)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(3230)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(3235)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(3236)
							if (((parent->parent == null()))){
								HX_STACK_LINE(3237)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(3240)
								parent = parent->parent;
								HX_STACK_LINE(3241)
								continue;
							}
						}
						HX_STACK_LINE(3244)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(3248)
		{
			HX_STACK_LINE(3249)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3250)
			if (((par == null()))){
				HX_STACK_LINE(3251)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(3253)
				if (((par->prev == cur))){
					HX_STACK_LINE(3253)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(3254)
					par->next = child;
				}
			}
			HX_STACK_LINE(3255)
			if (((child != null()))){
				HX_STACK_LINE(3255)
				child->parent = par;
			}
		}
		HX_STACK_LINE(3257)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = cur->next = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3257)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g1 = cur->prev = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3257)
		cur->parent = _g1;
		HX_STACK_LINE(3258)
		{
			HX_STACK_LINE(3259)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3268)
			{
				HX_STACK_LINE(3268)
				o->data = null();
				HX_STACK_LINE(3268)
				o->lt = null();
				HX_STACK_LINE(3268)
				o->swapped = null();
			}
			HX_STACK_LINE(3269)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(3270)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove_node,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear",0x8013213b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear","zpp_nape/util/RBTree.hx",3277,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3277)
		if (((this->parent == null()))){
			HX_STACK_LINE(3277)
			Dynamic();
		}
		else{
			HX_STACK_LINE(3277)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3277)
			while((true)){
				HX_STACK_LINE(3277)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(3277)
					break;
				}
				HX_STACK_LINE(3277)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3277)
				if (((cur->prev != null()))){
					HX_STACK_LINE(3277)
					_g = cur->prev;
				}
				else{
					HX_STACK_LINE(3277)
					if (((cur->next != null()))){
						HX_STACK_LINE(3277)
						_g = cur->next;
					}
					else{
						HX_STACK_LINE(3277)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(3277)
						if (((ret != null()))){
							HX_STACK_LINE(3277)
							if (((cur == ret->prev))){
								HX_STACK_LINE(3277)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(3277)
								ret->next = null();
							}
							HX_STACK_LINE(3277)
							cur->parent = null();
						}
						HX_STACK_LINE(3277)
						{
							HX_STACK_LINE(3277)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3277)
							{
								HX_STACK_LINE(3277)
								o->data = null();
								HX_STACK_LINE(3277)
								o->lt = null();
								HX_STACK_LINE(3277)
								o->swapped = null();
							}
							HX_STACK_LINE(3277)
							o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(3277)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3277)
						_g = ret;
					}
				}
				HX_STACK_LINE(3277)
				cur = _g;
			}
			HX_STACK_LINE(3277)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear_with",0xbb0d1aca,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear_with","zpp_nape/util/RBTree.hx",3281,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(3281)
		if (((this->parent == null()))){
			HX_STACK_LINE(3281)
			return null();
		}
		else{
			HX_STACK_LINE(3283)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3284)
			while((true)){
				HX_STACK_LINE(3284)
				if ((!(((cur != null()))))){
					HX_STACK_LINE(3284)
					break;
				}
				HX_STACK_LINE(3284)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3284)
				if (((cur->prev != null()))){
					HX_STACK_LINE(3284)
					_g = cur->prev;
				}
				else{
					HX_STACK_LINE(3284)
					if (((cur->next != null()))){
						HX_STACK_LINE(3284)
						_g = cur->next;
					}
					else{
						HX_STACK_LINE(3284)
						lambda(cur->data).Cast< Void >();
						HX_STACK_LINE(3284)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(3284)
						if (((ret != null()))){
							HX_STACK_LINE(3284)
							if (((cur == ret->prev))){
								HX_STACK_LINE(3284)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(3284)
								ret->next = null();
							}
							HX_STACK_LINE(3284)
							cur->parent = null();
						}
						HX_STACK_LINE(3284)
						{
							HX_STACK_LINE(3284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3284)
							{
								HX_STACK_LINE(3284)
								o->data = null();
								HX_STACK_LINE(3284)
								o->lt = null();
								HX_STACK_LINE(3284)
								o->swapped = null();
							}
							HX_STACK_LINE(3284)
							o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(3284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3284)
						_g = ret;
					}
				}
				HX_STACK_LINE(3284)
				cur = _g;
			}
			HX_STACK_LINE(3285)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear_node",0xb51eaec6,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear_node","zpp_nape/util/RBTree.hx",3289,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(3298)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(3299)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3300)
	if (((ret != null()))){
		HX_STACK_LINE(3301)
		if (((node == ret->prev))){
			HX_STACK_LINE(3301)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(3302)
			ret->next = null();
		}
		HX_STACK_LINE(3303)
		node->parent = null();
	}
	HX_STACK_LINE(3305)
	{
		HX_STACK_LINE(3306)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3315)
		{
			HX_STACK_LINE(3315)
			o->data = null();
			HX_STACK_LINE(3315)
			o->lt = null();
			HX_STACK_LINE(3315)
			o->swapped = null();
		}
		HX_STACK_LINE(3316)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
		HX_STACK_LINE(3317)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3322)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionVertex_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","__fix_neg_red",0x15c41d86,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.__fix_neg_red","zpp_nape/util/RBTree.hx",3324,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(3325)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(3326)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3326)
		if (((parent->prev == negred))){
			HX_STACK_LINE(3327)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(3328)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(3329)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(3330)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(3331)
			nl->colour = (int)0;
			HX_STACK_LINE(3332)
			int _g = parent->colour = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3332)
			negred->colour = _g;
			HX_STACK_LINE(3333)
			{
				HX_STACK_LINE(3334)
				negred->next = trl;
				HX_STACK_LINE(3335)
				if (((trl != null()))){
					HX_STACK_LINE(3335)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(3337)
			{
				HX_STACK_LINE(3338)
				::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3339)
				parent->data = nr->data;
				HX_STACK_LINE(3340)
				nr->data = t;
			}
			HX_STACK_LINE(3342)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(3342)
				this->swapped(parent->data,nr->data);
			}
			HX_STACK_LINE(3343)
			{
				HX_STACK_LINE(3344)
				nr->prev = trr;
				HX_STACK_LINE(3345)
				if (((trr != null()))){
					HX_STACK_LINE(3345)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(3347)
			{
				HX_STACK_LINE(3348)
				nr->next = parent->next;
				HX_STACK_LINE(3349)
				if (((parent->next != null()))){
					HX_STACK_LINE(3349)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(3351)
			{
				HX_STACK_LINE(3352)
				parent->next = nr;
				HX_STACK_LINE(3353)
				if (((nr != null()))){
					HX_STACK_LINE(3353)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(3355)
			child = nl;
		}
		else{
			HX_STACK_LINE(3358)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(3359)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(3360)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(3361)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(3362)
			nl->colour = (int)0;
			HX_STACK_LINE(3363)
			int _g1 = parent->colour = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3363)
			negred->colour = _g1;
			HX_STACK_LINE(3364)
			{
				HX_STACK_LINE(3365)
				negred->prev = trl;
				HX_STACK_LINE(3366)
				if (((trl != null()))){
					HX_STACK_LINE(3366)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(3368)
			{
				HX_STACK_LINE(3369)
				::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3370)
				parent->data = nr->data;
				HX_STACK_LINE(3371)
				nr->data = t;
			}
			HX_STACK_LINE(3373)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(3373)
				this->swapped(parent->data,nr->data);
			}
			HX_STACK_LINE(3374)
			{
				HX_STACK_LINE(3375)
				nr->next = trr;
				HX_STACK_LINE(3376)
				if (((trr != null()))){
					HX_STACK_LINE(3376)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(3378)
			{
				HX_STACK_LINE(3379)
				nr->prev = parent->prev;
				HX_STACK_LINE(3380)
				if (((parent->prev != null()))){
					HX_STACK_LINE(3380)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(3382)
			{
				HX_STACK_LINE(3383)
				parent->prev = nr;
				HX_STACK_LINE(3384)
				if (((nr != null()))){
					HX_STACK_LINE(3384)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(3386)
			child = nl;
		}
		HX_STACK_LINE(3388)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(3388)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(3389)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(3389)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","__fix_dbl_red",0x23dc4b64,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.__fix_dbl_red","zpp_nape/util/RBTree.hx",3392,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3392)
		while((true)){
			HX_STACK_LINE(3393)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3394)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(3395)
			if (((g == null()))){
				HX_STACK_LINE(3396)
				par->colour = (int)1;
				HX_STACK_LINE(3397)
				break;
			}
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(3400)
			if (((par == g->prev))){
				HX_STACK_LINE(3401)
				n3 = g;
				HX_STACK_LINE(3402)
				t4 = g->next;
				HX_STACK_LINE(3403)
				if (((x == par->prev))){
					HX_STACK_LINE(3404)
					n1 = x;
					HX_STACK_LINE(3405)
					n2 = par;
					HX_STACK_LINE(3406)
					t1 = x->prev;
					HX_STACK_LINE(3407)
					t2 = x->next;
					HX_STACK_LINE(3408)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(3411)
					n1 = par;
					HX_STACK_LINE(3412)
					n2 = x;
					HX_STACK_LINE(3413)
					t1 = par->prev;
					HX_STACK_LINE(3414)
					t2 = x->prev;
					HX_STACK_LINE(3415)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(3419)
				n1 = g;
				HX_STACK_LINE(3420)
				t1 = g->prev;
				HX_STACK_LINE(3421)
				if (((x == par->prev))){
					HX_STACK_LINE(3422)
					n2 = x;
					HX_STACK_LINE(3423)
					n3 = par;
					HX_STACK_LINE(3424)
					t2 = x->prev;
					HX_STACK_LINE(3425)
					t3 = x->next;
					HX_STACK_LINE(3426)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(3429)
					n2 = par;
					HX_STACK_LINE(3430)
					n3 = x;
					HX_STACK_LINE(3431)
					t2 = par->prev;
					HX_STACK_LINE(3432)
					t3 = x->prev;
					HX_STACK_LINE(3433)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(3436)
			{
				HX_STACK_LINE(3437)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(3438)
				if (((par1 == null()))){
					HX_STACK_LINE(3439)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(3441)
					if (((par1->prev == g))){
						HX_STACK_LINE(3441)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(3442)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(3443)
				if (((n2 != null()))){
					HX_STACK_LINE(3443)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(3445)
			{
				HX_STACK_LINE(3446)
				n1->prev = t1;
				HX_STACK_LINE(3447)
				if (((t1 != null()))){
					HX_STACK_LINE(3447)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(3449)
			{
				HX_STACK_LINE(3450)
				n1->next = t2;
				HX_STACK_LINE(3451)
				if (((t2 != null()))){
					HX_STACK_LINE(3451)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(3453)
			{
				HX_STACK_LINE(3454)
				n2->prev = n1;
				HX_STACK_LINE(3455)
				if (((n1 != null()))){
					HX_STACK_LINE(3455)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(3457)
			{
				HX_STACK_LINE(3458)
				n2->next = n3;
				HX_STACK_LINE(3459)
				if (((n3 != null()))){
					HX_STACK_LINE(3459)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(3461)
			{
				HX_STACK_LINE(3462)
				n3->prev = t3;
				HX_STACK_LINE(3463)
				if (((t3 != null()))){
					HX_STACK_LINE(3463)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(3465)
			{
				HX_STACK_LINE(3466)
				n3->next = t4;
				HX_STACK_LINE(3467)
				if (((t4 != null()))){
					HX_STACK_LINE(3467)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(3469)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(3470)
			n1->colour = (int)1;
			HX_STACK_LINE(3471)
			n3->colour = (int)1;
			HX_STACK_LINE(3472)
			if (((n2 == this->parent))){
				HX_STACK_LINE(3472)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3473)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(3474)
					x = n2;
					HX_STACK_LINE(3475)
					continue;
				}
			}
			HX_STACK_LINE(3477)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_PartitionVertex_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","try_insert_bool",0x7ee1e71a,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.try_insert_bool","zpp_nape/util/RBTree.hx",3480,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3481)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3482)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3483)
	if (((this->parent == null()))){
		HX_STACK_LINE(3484)
		{
			HX_STACK_LINE(3485)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
				HX_STACK_LINE(3486)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3486)
				x = _g;
			}
			else{
				HX_STACK_LINE(3492)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(3493)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(3494)
				x->next = null();
			}
			HX_STACK_LINE(3499)
			Dynamic();
		}
		HX_STACK_LINE(3501)
		x->data = obj;
		HX_STACK_LINE(3502)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3505)
		cur = this->parent;
		HX_STACK_LINE(3506)
		while((true)){
			HX_STACK_LINE(3507)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(3508)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3509)
					{
						HX_STACK_LINE(3510)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(3511)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g1 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(3511)
							x = _g1;
						}
						else{
							HX_STACK_LINE(3517)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(3518)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(3519)
							x->next = null();
						}
						HX_STACK_LINE(3524)
						Dynamic();
					}
					HX_STACK_LINE(3526)
					x->data = obj;
					HX_STACK_LINE(3527)
					cur->prev = x;
					HX_STACK_LINE(3528)
					x->parent = cur;
					HX_STACK_LINE(3529)
					break;
				}
				else{
					HX_STACK_LINE(3531)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3533)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(3534)
					if (((cur->next == null()))){
						HX_STACK_LINE(3535)
						{
							HX_STACK_LINE(3536)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
								HX_STACK_LINE(3537)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(3537)
								x = _g2;
							}
							else{
								HX_STACK_LINE(3543)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(3544)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(3545)
								x->next = null();
							}
							HX_STACK_LINE(3550)
							Dynamic();
						}
						HX_STACK_LINE(3552)
						x->data = obj;
						HX_STACK_LINE(3553)
						cur->next = x;
						HX_STACK_LINE(3554)
						x->parent = cur;
						HX_STACK_LINE(3555)
						break;
					}
					else{
						HX_STACK_LINE(3557)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3559)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3562)
	if (((x == null()))){
		HX_STACK_LINE(3562)
		return false;
	}
	else{
		HX_STACK_LINE(3564)
		if (((x->parent == null()))){
			HX_STACK_LINE(3564)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3566)
			x->colour = (int)0;
			HX_STACK_LINE(3567)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(3567)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(3569)
		return true;
	}
	HX_STACK_LINE(3562)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","try_insert",0x9d92128f,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.try_insert","zpp_nape/util/RBTree.hx",3572,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3573)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3574)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3575)
	if (((this->parent == null()))){
		HX_STACK_LINE(3576)
		{
			HX_STACK_LINE(3577)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
				HX_STACK_LINE(3578)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3578)
				x = _g;
			}
			else{
				HX_STACK_LINE(3584)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(3585)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(3586)
				x->next = null();
			}
			HX_STACK_LINE(3591)
			Dynamic();
		}
		HX_STACK_LINE(3593)
		x->data = obj;
		HX_STACK_LINE(3594)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3597)
		cur = this->parent;
		HX_STACK_LINE(3598)
		while((true)){
			HX_STACK_LINE(3599)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(3600)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3601)
					{
						HX_STACK_LINE(3602)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(3603)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g1 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(3603)
							x = _g1;
						}
						else{
							HX_STACK_LINE(3609)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(3610)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(3611)
							x->next = null();
						}
						HX_STACK_LINE(3616)
						Dynamic();
					}
					HX_STACK_LINE(3618)
					x->data = obj;
					HX_STACK_LINE(3619)
					cur->prev = x;
					HX_STACK_LINE(3620)
					x->parent = cur;
					HX_STACK_LINE(3621)
					break;
				}
				else{
					HX_STACK_LINE(3623)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3625)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(3626)
					if (((cur->next == null()))){
						HX_STACK_LINE(3627)
						{
							HX_STACK_LINE(3628)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
								HX_STACK_LINE(3629)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(3629)
								x = _g2;
							}
							else{
								HX_STACK_LINE(3635)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(3636)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(3637)
								x->next = null();
							}
							HX_STACK_LINE(3642)
							Dynamic();
						}
						HX_STACK_LINE(3644)
						x->data = obj;
						HX_STACK_LINE(3645)
						cur->next = x;
						HX_STACK_LINE(3646)
						x->parent = cur;
						HX_STACK_LINE(3647)
						break;
					}
					else{
						HX_STACK_LINE(3649)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3651)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3654)
	if (((x == null()))){
		HX_STACK_LINE(3654)
		return cur;
	}
	else{
		HX_STACK_LINE(3656)
		if (((x->parent == null()))){
			HX_STACK_LINE(3656)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3658)
			x->colour = (int)0;
			HX_STACK_LINE(3659)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(3659)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(3661)
		return x;
	}
	HX_STACK_LINE(3654)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","insert",0x26df4bcb,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.insert","zpp_nape/util/RBTree.hx",3664,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3673)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3674)
	{
		HX_STACK_LINE(3675)
		if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
			HX_STACK_LINE(3676)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex _g = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3676)
			x = _g;
		}
		else{
			HX_STACK_LINE(3682)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(3683)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
			HX_STACK_LINE(3684)
			x->next = null();
		}
		HX_STACK_LINE(3689)
		Dynamic();
	}
	HX_STACK_LINE(3691)
	x->data = obj;
	HX_STACK_LINE(3692)
	if (((this->parent == null()))){
		HX_STACK_LINE(3692)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3694)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3695)
		while((true)){
			HX_STACK_LINE(3696)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(3697)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3698)
					cur->prev = x;
					HX_STACK_LINE(3699)
					x->parent = cur;
					HX_STACK_LINE(3700)
					break;
				}
				else{
					HX_STACK_LINE(3702)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3705)
				if (((cur->next == null()))){
					HX_STACK_LINE(3706)
					cur->next = x;
					HX_STACK_LINE(3707)
					x->parent = cur;
					HX_STACK_LINE(3708)
					break;
				}
				else{
					HX_STACK_LINE(3710)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(3714)
	if (((x->parent == null()))){
		HX_STACK_LINE(3714)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(3716)
		x->colour = (int)0;
		HX_STACK_LINE(3717)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(3717)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(3727)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;


ZPP_Set_ZPP_PartitionVertex_obj::ZPP_Set_ZPP_PartitionVertex_obj()
{
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"verify") ) { return verify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return swapped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		if (HX_FIELD_EQ(inName,"has_weak") ) { return has_weak_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"find_weak") ) { return find_weak_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_front") ) { return pop_front_dyn(); }
		if (HX_FIELD_EQ(inName,"successor") ) { return successor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clear_with") ) { return clear_with_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_node") ) { return clear_node_dyn(); }
		if (HX_FIELD_EQ(inName,"try_insert") ) { return try_insert_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lower_bound") ) { return lower_bound_dyn(); }
		if (HX_FIELD_EQ(inName,"predecessor") ) { return predecessor_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_node") ) { return remove_node_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__fix_neg_red") ) { return __fix_neg_red_dyn(); }
		if (HX_FIELD_EQ(inName,"__fix_dbl_red") ) { return __fix_dbl_red_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"successor_node") ) { return successor_node_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"try_insert_bool") ) { return try_insert_bool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"predecessor_node") ) { return predecessor_node_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("colour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,lt),HX_CSTRING("lt")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,swapped),HX_CSTRING("swapped")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,prev),HX_CSTRING("prev")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,colour),HX_CSTRING("colour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("lt"),
	HX_CSTRING("swapped"),
	HX_CSTRING("data"),
	HX_CSTRING("prev"),
	HX_CSTRING("next"),
	HX_CSTRING("parent"),
	HX_CSTRING("colour"),
	HX_CSTRING("verify"),
	HX_CSTRING("empty"),
	HX_CSTRING("singular"),
	HX_CSTRING("size"),
	HX_CSTRING("has"),
	HX_CSTRING("find"),
	HX_CSTRING("has_weak"),
	HX_CSTRING("find_weak"),
	HX_CSTRING("lower_bound"),
	HX_CSTRING("first"),
	HX_CSTRING("pop_front"),
	HX_CSTRING("remove"),
	HX_CSTRING("successor_node"),
	HX_CSTRING("predecessor_node"),
	HX_CSTRING("successor"),
	HX_CSTRING("predecessor"),
	HX_CSTRING("remove_node"),
	HX_CSTRING("clear"),
	HX_CSTRING("clear_with"),
	HX_CSTRING("clear_node"),
	HX_CSTRING("__fix_neg_red"),
	HX_CSTRING("__fix_dbl_red"),
	HX_CSTRING("try_insert_bool"),
	HX_CSTRING("try_insert"),
	HX_CSTRING("insert"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_Set_ZPP_PartitionVertex_obj::__mClass;

void ZPP_Set_ZPP_PartitionVertex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex"), hx::TCanCast< ZPP_Set_ZPP_PartitionVertex_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Set_ZPP_PartitionVertex_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
