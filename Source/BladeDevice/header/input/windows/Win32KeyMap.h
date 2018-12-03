/********************************************************************
	created:	2010/04/30
	filename: 	Win32KeyMap.h
	author:		Crazii
	purpose:	
*********************************************************************/
#ifndef __Blade_Win32KeyMap_h__
#define __Blade_Win32KeyMap_h__

#if BLADE_PLATFORM == BLADE_PLATFORM_WINDOWS

#include <interface/public/input/IKeyboard.h>

namespace Blade
{
	static const EKeyCode KeyMap[256] = 
	{
		//0-7
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_BACKSPACE,			//VK_BACK
		KC_TAB,
		KC_UNDEFINED,KC_UNDEFINED,	//0a-0b
		KC_UNDEFINED,				//VK_CLEAR
		KC_ENTER,				//VK_RETURN
		KC_UNDEFINED,KC_UNDEFINED,	//0e-0f
		KC_SHIFT,				//VK_SHIFT
		KC_CTRL,				//VK_CTRL
		KC_ALT,					//VK_MENU
		KC_PAUSEBREAK,			//VK_PAUSE,
		KC_CAPSLOCK,			//VK_CAPITAL
		KC_UNDEFINED,				//VK_KANA/VK_HANGUEL/VK_HANGUL
		//16-1A
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_ESCAPE,				//VK_ESCAPE,
		KC_UNDEFINED,				//VK_CONVERT
		KC_UNDEFINED,				//VK_NOCONVERT
		KC_UNDEFINED,				//VK_ACCEPT
		KC_UNDEFINED,				//VK_MODECHANGE (1F)
		KC_SPACE,				//VK_SPACE (20)
		KC_PAGEUP,				//VK_PRIOR
		KC_PAGEDOWN,			//VK_NEXT
		KC_END,
		KC_HOME,
		KC_LEFT,
		KC_UP,
		KC_RIGHT,
		KC_DOWN,
		KC_UNDEFINED,				//VK_SELECT
		KC_UNDEFINED,				//VK_PRINT
		KC_UNDEFINED,				//VK_EXECUTE (2B)
		KC_PRTSCN,				//VK_SNAPSHOT (2C)
		KC_INSERT,
		KC_DELETE,
		KC_UNDEFINED,				//VK_HELP
		KC_0,
		KC_1,
		KC_2,
		KC_3,
		KC_4,
		KC_5,
		KC_6,
		KC_7,
		KC_8,
		KC_9,
		//3A-40
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_A,
		KC_B,
		KC_C,
		KC_D,
		KC_E,
		KC_F,
		KC_G,
		KC_H,
		KC_I,
		KC_J,
		KC_K,
		KC_L,
		KC_M,
		KC_N,
		KC_O,
		KC_P,
		KC_Q,
		KC_R,
		KC_S,
		KC_T,
		KC_U,
		KC_V,
		KC_W,
		KC_X,
		KC_Y,
		KC_Z,
		KC_UNDEFINED,			//VK_LWIN
		KC_UNDEFINED,			//VK_RWIN (5C)
		KC_UNDEFINED,			//VK_APPS (5D)
		KC_UNDEFINED,			//reserved
		KC_UNDEFINED,			//VK_SLEEP
		KC_NUM0,
		KC_NUM1,
		KC_NUM2,
		KC_NUM3,
		KC_NUM4,
		KC_NUM5,
		KC_NUM6,
		KC_NUM7,
		KC_NUM8,
		KC_NUM9,
		KC_NUM_MULT,
		KC_NUM_ADD,
		KC_UNDEFINED,			//VK_SEPARATOR
		KC_NUM_SUBTRACT,		//VK_SUBTRACT (6D)
		KC_NUM_DOT,			//VK_DECIMAL (6E)
		KC_NUM_DIVIDE,			//VK_DIVIDE (6F)
		KC_F1,
		KC_F2,
		KC_F3,
		KC_F4,
		KC_F5,
		KC_F6,
		KC_F7,
		KC_F8,
		KC_F9,
		KC_F10,
		KC_F11,
		KC_F12,
		//F13-F24
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		//0x88 - 0x8F : unassigned
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_NUM_LOCK,
		KC_SCROLL_LOCK,
		//92-96 //OEM
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		//97-9F //reserved
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_LSHIFT,
		KC_RSHIFT,
		KC_LCTRL,
		KC_RCTRL,
		KC_LMENU,
		KC_RMENU,
		//A6-B9
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_SEMICOLON,
		KC_EQUAL,
		KC_COMMA,
		KC_MINUS,
		KC_PERIOD,
		KC_SLASH,
		KC_ACCENT,
		//C1-D7
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		//D8-DA
		KC_UNDEFINED,KC_UNDEFINED,KC_UNDEFINED,
		KC_LBRACKET,
		KC_BACKSLASH,
		KC_RBRACKET,
		KC_APOSTROPHE,
	};
	
}//namespace Blade

#endif//BLADE_PLATFORM == BLADE_PLATFORM_WINDOWS

#endif //__Blade_Win32KeyMap_h__