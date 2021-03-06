//******************************************************************************
///
/// @file windows/cmedit/menusupport.h
///
/// This file is part of the CodeMax editor support code.
///
/// @author Christopher J. Cason
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2017 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#ifndef __MENUSUPPORT_H__
#define __MENUSUPPORT_H__

void MakeRecentMenus (void) ;
void MakeOlderMenus (void) ;
void SetMenuShortcuts (void) ;
void EnableMenuItem (DWORD id, bool state) ;
void CheckMenuItem (DWORD id, bool state) ;
bool IsMenuItemChecked (DWORD id) ;
bool ToggleMenuItem (DWORD id) ;
void CheckMenuRadioItem (DWORD idItem, DWORD idFirst, DWORD idLast) ;
void SetMenuItemText (DWORD idItem, LPCSTR str) ;
void SetMenuShortcut (DWORD idItem, WORD Command) ;
void SetMenuState (void) ;
void MakeRecentMenus (void) ;
void MakeOlderMenus (void) ;
void AddToRecent (LPCTSTR FileName) ;
void UpdateRecent (void) ;
void UpdateWindowMenu (void) ;

#endif
