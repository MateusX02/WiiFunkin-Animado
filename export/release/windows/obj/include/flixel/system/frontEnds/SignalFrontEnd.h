// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#define INCLUDED_flixel_system_frontEnds_SignalFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,SignalFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal2)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES SignalFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SignalFrontEnd_obj OBJ_;
		SignalFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x09d659f0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.SignalFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.SignalFrontEnd"); }
		static ::hx::ObjectPtr< SignalFrontEnd_obj > __new();
		static ::hx::ObjectPtr< SignalFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SignalFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SignalFrontEnd",5a,d9,b8,94); }

		 ::flixel::util::_FlxSignal::FlxSignal0 preStateSwitch;
		 ::flixel::util::_FlxSignal::FlxSignal0 postStateSwitch;
		 ::flixel::util::_FlxSignal::FlxSignal1 preStateCreate;
		 ::flixel::util::_FlxSignal::FlxSignal2 gameResized;
		 ::flixel::util::_FlxSignal::FlxSignal0 preGameReset;
		 ::flixel::util::_FlxSignal::FlxSignal0 postGameReset;
		 ::flixel::util::_FlxSignal::FlxSignal0 preGameStart;
		 ::flixel::util::_FlxSignal::FlxSignal0 postGameStart;
		 ::flixel::util::_FlxSignal::FlxSignal0 preUpdate;
		 ::flixel::util::_FlxSignal::FlxSignal0 postUpdate;
		 ::flixel::util::_FlxSignal::FlxSignal0 preDraw;
		 ::flixel::util::_FlxSignal::FlxSignal0 postDraw;
		 ::flixel::util::_FlxSignal::FlxSignal0 focusGained;
		 ::flixel::util::_FlxSignal::FlxSignal0 focusLost;
		 ::flixel::util::_FlxSignal::FlxSignal0 get_stateSwitched();
		::Dynamic get_stateSwitched_dyn();

		 ::flixel::util::_FlxSignal::FlxSignal0 get_gameStarted();
		::Dynamic get_gameStarted_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_SignalFrontEnd */ 