// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_MainVariables
#include <MainVariables.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_16_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",16,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_67_addText,"Alphabet","addText",0x712354d3,"Alphabet.addText","Alphabet.hx",67,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_130_doSplitWords,"Alphabet","doSplitWords",0x060ce215,"Alphabet.doSplitWords","Alphabet.hx",130,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_148_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",148,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_136_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",136,0xc2e40fcb)
static const int _hx_array_data_faea38d3_6[] = {
	(int)0,
};
static const Float _hx_array_data_faea38d3_7[] = {
	(Float)0,
};
static const int _hx_array_data_faea38d3_8[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_237_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",237,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_16_new)
HXLINE( 133)		this->personTalking = HX_("gf",1f,5a,00,00);
HXLINE(  43)		this->isBold = false;
HXLINE(  41)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  39)		this->lastWasSpace = false;
HXLINE(  38)		this->xPosResetted = false;
HXLINE(  33)		this->yMulti = ((Float)1);
HXLINE(  31)		this->widthOfWords = ( (Float)(::flixel::FlxG_obj::width) );
HXLINE(  29)		this->_curText = HX_("",00,00,00,00);
HXLINE(  28)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  26)		this->text = HX_("",00,00,00,00);
HXLINE(  24)		this->itemType = HX_("",00,00,00,00);
HXLINE(  23)		this->targetX = ((Float)0);
HXLINE(  22)		this->targetY = ((Float)0);
HXLINE(  19)		this->paused = false;
HXLINE(  18)		this->delay = ((Float)0.05);
HXLINE(  47)		super::__construct(x,y,null());
HXLINE(  49)		this->_finalText = text;
HXLINE(  50)		this->text = text;
HXLINE(  51)		this->isBold = ( (bool)(bold) );
HXLINE(  53)		if ((text != HX_("",00,00,00,00))) {
HXLINE(  55)			if (typed) {
HXLINE(  57)				this->startTypedText();
            			}
            			else {
HXLINE(  61)				this->addText();
            			}
            		}
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_67_addText)
HXLINE(  68)		this->doSplitWords();
HXLINE(  70)		Float xPos = ( (Float)(0) );
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< ::String > _g1 = this->splitWords;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				::String character = _g1->__get(_g);
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  77)				bool _hx_tmp;
HXDLIN(  77)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE(  77)					_hx_tmp = (character == HX_("-",2d,00,00,00));
            				}
            				else {
HXLINE(  77)					_hx_tmp = true;
            				}
HXDLIN(  77)				if (_hx_tmp) {
HXLINE(  79)					this->lastWasSpace = true;
            				}
HXLINE(  83)				bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(character,null()) != -1);
HXLINE(  88)				bool _hx_tmp1;
HXDLIN(  88)				::String _hx_tmp2 = ::AlphaCharacter_obj::alphabet;
HXDLIN(  88)				if ((_hx_tmp2.indexOf(character.toLowerCase(),null()) == -1)) {
HXLINE(  88)					_hx_tmp1 = isNumber;
            				}
            				else {
HXLINE(  88)					_hx_tmp1 = true;
            				}
HXDLIN(  88)				if (_hx_tmp1) {
HXLINE(  90)					if (::hx::IsNotNull( this->lastSprite )) {
HXLINE(  92)						Float xPos1 = this->lastSprite->x;
HXDLIN(  92)						xPos = (xPos1 + this->lastSprite->get_width());
            					}
HXLINE(  95)					if (this->lastWasSpace) {
HXLINE(  97)						xPos = (xPos + 40);
HXLINE(  98)						this->lastWasSpace = false;
            					}
HXLINE( 102)					 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ));
HXLINE( 104)					if (this->isBold) {
HXLINE( 105)						letter->createBold(character);
            					}
            					else {
HXLINE( 108)						if (isNumber) {
HXLINE( 110)							letter->createNumber(character);
            						}
            						else {
HXLINE( 114)							letter->createLetter(character);
            						}
            					}
HXLINE( 119)					this->add(letter);
HXLINE( 121)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_130_doSplitWords)
HXDLIN( 130)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Alphabet,_gthis,::Array< Float >,xPos,::Array< int >,loopNum,::Array< int >,curRow) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_148_startTypedText)
HXLINE( 150)			if ((_gthis->_finalText.cca(loopNum->__get(0)) == 10)) {
HXLINE( 152)				 ::Alphabet _gthis1 = _gthis;
HXDLIN( 152)				_gthis1->yMulti = (_gthis1->yMulti + 1);
HXLINE( 153)				_gthis->xPosResetted = true;
HXLINE( 154)				xPos[0] = ( (Float)(0) );
HXLINE( 155)				::Array< int > curRow1 = curRow;
HXDLIN( 155)				int _hx_tmp = 0;
HXDLIN( 155)				curRow1[_hx_tmp] = (curRow1->__get(_hx_tmp) + 1);
            			}
HXLINE( 158)			if ((_gthis->splitWords->__get(loopNum->__get(0)) == HX_(" ",20,00,00,00))) {
HXLINE( 160)				_gthis->lastWasSpace = true;
            			}
HXLINE( 164)			bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 165)			bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			bool _hx_tmp1;
HXDLIN( 171)			::String _hx_tmp2 = ::AlphaCharacter_obj::alphabet;
HXDLIN( 171)			if ((_hx_tmp2.indexOf(_gthis->splitWords->__get(loopNum->__get(0)).toLowerCase(),null()) == -1)) {
HXLINE( 171)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 171)				_hx_tmp1 = true;
            			}
HXDLIN( 171)			if (!(_hx_tmp1)) {
HXLINE( 171)				_hx_tmp = isSymbol;
            			}
            			else {
HXLINE( 171)				_hx_tmp = true;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 175)				bool _hx_tmp;
HXDLIN( 175)				if (::hx::IsNotNull( _gthis->lastSprite )) {
HXLINE( 175)					_hx_tmp = !(_gthis->xPosResetted);
            				}
            				else {
HXLINE( 175)					_hx_tmp = false;
            				}
HXDLIN( 175)				if (_hx_tmp) {
HXLINE( 177)					_gthis->lastSprite->updateHitbox();
HXLINE( 178)					::Array< Float > xPos1 = xPos;
HXDLIN( 178)					int _hx_tmp = 0;
HXDLIN( 178)					Float xPos2 = xPos1->__get(_hx_tmp);
HXDLIN( 178)					xPos1[_hx_tmp] = (xPos2 + (_gthis->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 184)					_gthis->xPosResetted = false;
            				}
HXLINE( 187)				if (_gthis->lastWasSpace) {
HXLINE( 189)					::Array< Float > xPos1 = xPos;
HXDLIN( 189)					int _hx_tmp = 0;
HXDLIN( 189)					xPos1[_hx_tmp] = (xPos1->__get(_hx_tmp) + 20);
HXLINE( 190)					_gthis->lastWasSpace = false;
            				}
HXLINE( 195)				 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos->__get(0),(( (Float)(55) ) * _gthis->yMulti));
HXLINE( 196)				letter->row = curRow->__get(0);
HXLINE( 197)				if (_gthis->isBold) {
HXLINE( 199)					letter->createBold(_gthis->splitWords->__get(loopNum->__get(0)));
            				}
            				else {
HXLINE( 203)					if (isNumber) {
HXLINE( 205)						letter->createNumber(_gthis->splitWords->__get(loopNum->__get(0)));
            					}
            					else {
HXLINE( 207)						if (isSymbol) {
HXLINE( 209)							letter->createSymbol(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            						else {
HXLINE( 213)							letter->createLetter(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            					}
HXLINE( 216)					{
HXLINE( 216)						 ::AlphaCharacter _g = letter;
HXDLIN( 216)						_g->set_x((_g->x + 90));
            					}
            				}
HXLINE( 219)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 40)) {
HXLINE( 221)					::String daSound = HX_("GF_",60,1d,36,00);
HXLINE( 222)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 222)					::String library = null();
HXDLIN( 222)					_hx_tmp->play(::Paths_obj::sound((daSound + ::flixel::FlxG_obj::random->_hx_int(1,4,null())),library),null(),null(),null(),null(),null());
            				}
HXLINE( 225)				_gthis->add(letter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 227)				_gthis->lastSprite = letter;
            			}
HXLINE( 230)			::Array< int > loopNum1 = loopNum;
HXDLIN( 230)			int _hx_tmp3 = 0;
HXDLIN( 230)			loopNum1[_hx_tmp3] = (loopNum1->__get(_hx_tmp3) + 1);
HXLINE( 232)			tmr->time = ::flixel::FlxG_obj::random->_hx_float(((Float)0.04),((Float)0.09),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_136_startTypedText)
HXLINE( 135)		 ::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 137)		this->_finalText = this->text;
HXLINE( 138)		this->doSplitWords();
HXLINE( 142)		::Array< int > loopNum = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_6,1);
HXLINE( 144)		::Array< Float > xPos = ::Array_obj< Float >::fromData( _hx_array_data_faea38d3_7,1);
HXLINE( 145)		::Array< int > curRow = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_8,1);
HXLINE( 147)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.05), ::Dynamic(new _hx_Closure_0(_gthis,xPos,loopNum,curRow)),this->splitWords->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_237_update)
HXLINE( 238)		Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 240)		::String _hx_switch_0 = this->itemType;
            		if (  (_hx_switch_0==HX_("C-Shape",37,a4,77,ef)) ){
HXLINE( 252)			Float a = this->y;
HXDLIN( 252)			this->set_y((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((scaledY * ( (Float)(65) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.39))) - a))));
HXLINE( 254)			Float a1 = this->x;
HXDLIN( 254)			this->set_x((a1 + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((::Math_obj::exp((scaledY * ((Float)0.8))) * ( (Float)(70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.1))) - a1))));
HXLINE( 255)			if ((scaledY < 0)) {
HXLINE( 256)				Float a = this->x;
HXDLIN( 256)				this->set_x((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((::Math_obj::exp((scaledY * ((Float)-0.8))) * ( (Float)(70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.1))) - a))));
            			}
HXLINE( 258)			if ((this->x > (::flixel::FlxG_obj::width + 30))) {
HXLINE( 259)				this->set_x(( (Float)((::flixel::FlxG_obj::width + 30)) ));
            			}
HXLINE( 251)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("Classic",f2,79,e2,36)) ){
HXLINE( 243)			Float a = this->y;
HXDLIN( 243)			this->set_y((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
HXLINE( 244)			Float a1 = this->x;
HXDLIN( 244)			this->set_x((a1 + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((this->targetY * ( (Float)(20) )) + 90) - a1))));
HXLINE( 242)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("D-Shape",f8,1a,0d,19)) ){
HXLINE( 261)			Float a = this->y;
HXDLIN( 261)			this->set_y((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((scaledY * ( (Float)(90) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.45))) - a))));
HXLINE( 263)			Float a1 = this->x;
HXDLIN( 263)			this->set_x((a1 + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((::Math_obj::exp((scaledY * ((Float)0.8))) * ( (Float)(-70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))) - a1))));
HXLINE( 264)			if ((scaledY < 0)) {
HXLINE( 265)				Float a = this->x;
HXDLIN( 265)				this->set_x((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((::Math_obj::exp((scaledY * ((Float)-0.8))) * ( (Float)(-70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))) - a))));
            			}
HXLINE( 267)			if ((this->x < -900)) {
HXLINE( 268)				this->set_x(( (Float)(-900) ));
            			}
HXLINE( 260)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("Vertical",96,78,c7,43)) ){
HXLINE( 247)			Float a = this->y;
HXDLIN( 247)			this->set_y((a + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.5))) - a))));
HXLINE( 248)			Float a1 = this->x;
HXDLIN( 248)			this->set_x((a1 + ((((Float)0.16) / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) * (((this->targetY * ( (Float)(0) )) + 308) - a1))));
HXLINE( 249)			{
HXLINE( 249)				 ::Alphabet _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 249)				_g->set_x((_g->x + (this->targetX / (( (Float)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ) / ( (Float)(60) )))));
            			}
HXLINE( 246)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
HXLINE( 271)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(targetX,"targetX");
	HX_MARK_MEMBER_NAME(itemType,"itemType");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_curText,"_curText");
	HX_MARK_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(targetX,"targetX");
	HX_VISIT_MEMBER_NAME(itemType,"itemType");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_curText,"_curText");
	HX_VISIT_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"targetX") ) { return ::hx::Val( targetX ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"itemType") ) { return ::hx::Val( itemType ); }
		if (HX_FIELD_EQ(inName,"_curText") ) { return ::hx::Val( _curText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { return ::hx::Val( widthOfWords ); }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { return ::hx::Val( lastWasSpace ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { return ::hx::Val( personTalking ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetX") ) { targetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"itemType") ) { itemType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curText") ) { _curText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { widthOfWords=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { lastWasSpace=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { personTalking=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("targetX",e7,f3,67,88));
	outFields->push(HX_("itemType",6d,69,05,aa));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("_curText",ce,97,c7,f1));
	outFields->push(HX_("widthOfWords",6c,29,47,59));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("lastWasSpace",53,93,45,c9));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("personTalking",21,d4,8f,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetX),HX_("targetX",e7,f3,67,88)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,itemType),HX_("itemType",6d,69,05,aa)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_curText),HX_("_curText",ce,97,c7,f1)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,widthOfWords),HX_("widthOfWords",6c,29,47,59)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,lastWasSpace),HX_("lastWasSpace",53,93,45,c9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,personTalking),HX_("personTalking",21,d4,8f,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("paused",ae,40,84,ef),
	HX_("targetY",e8,f3,67,88),
	HX_("targetX",e7,f3,67,88),
	HX_("itemType",6d,69,05,aa),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("_curText",ce,97,c7,f1),
	HX_("widthOfWords",6c,29,47,59),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("lastWasSpace",53,93,45,c9),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("personTalking",21,d4,8f,27),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

