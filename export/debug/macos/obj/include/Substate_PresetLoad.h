// Generated by Haxe 4.1.5
#ifndef INCLUDED_Substate_PresetLoad
#define INCLUDED_Substate_PresetLoad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(Substate_PresetLoad)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Substate_PresetLoad_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef Substate_PresetLoad_obj OBJ_;
		Substate_PresetLoad_obj();

	public:
		enum { _hx_ClassId = 0x63681e93 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Substate_PresetLoad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Substate_PresetLoad"); }
		static ::hx::ObjectPtr< Substate_PresetLoad_obj > __new();
		static ::hx::ObjectPtr< Substate_PresetLoad_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Substate_PresetLoad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Substate_PresetLoad",53,99,c5,ef); }

		static void __boot();
		static int curSelected;
		static ::String coming;
		bool goingBack;
		Float camLerp;
		 ::flixel::FlxSprite blackBarThingie;
		::cpp::VirtualArray initPresets;
		 ::flixel::group::FlxTypedGroup grpPresets;
		 ::Alphabet presetText;
		bool selectable;
		void update(Float elapsed);

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

};


#endif /* INCLUDED_Substate_PresetLoad */ 
