/*
  SDL+: Object-Oriented SDL
  Copyright (C) 2022 Ghost Coder <ghostcoder22@gmail.com>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_plus.hpp
 *
 *  Main C++ header for the SDL+ library
 */

#ifndef __cplusplus
#error "SDL_plus: A C++ compiler is required to compile SDL+."
#else
#ifndef SDL_PLUS_HPP
#define SDL_PLUS_HPP

#include <stdlib.h>
#include <stdio.h>

#ifdef WINDOWS
#include <windows.h>
#include <windowsx.h>
#endif // WINDOWS

#include <SDL2/SDL.h>

class CSDL;
class CSDL_Window;
class CSDL_Surface;

#include <SDL_plus/SDLP_defines.hpp>
#include <SDL_plus/SDLP_Kernel.hpp>
#include <SDL_plus/SDLP_Video.hpp>
#include <SDL_plus/SDLP_EventManager.hpp>
#include <SDL_plus/SDLP_SystemInfo.hpp>
#include <SDL_plus/SDLP_stdlib.hpp>
#include <Containers/TList.hxx>

#endif // SDL_PLUS_HPP
#endif // __cplusplus
