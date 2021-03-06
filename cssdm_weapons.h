/**
 * vim: set ts=4 :
 * ===============================================================
 * CS:S DM, Copyright (C) 2004-2007 AlliedModders LLC. 
 * By David "BAILOPAN" Anderson
 * All rights reserved.
 * ===============================================================
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
 * MA 02110-1301 USA
 * 
 * Version: $Id$
 */

#ifndef _INCLUDE_CSSDM_WEAPONS_H_
#define _INCLUDE_CSSDM_WEAPONS_H_

enum WeaponType
{
	WeaponType_Invalid = -1,
	WeaponType_Primary = 0,
	WeaponType_Secondary = 1,
	WeaponType_Grenade = 3,
	WeaponType_C4 = 4,
};

struct dm_weapon_t
{
	char *classname;
	char *display;
	WeaponType type;
	int id;
};

/* External API */
dm_weapon_t *DM_FindWeapon(const char *name);
dm_weapon_t *DM_GetWeapon(unsigned int index);

/* Internal API */
bool DM_ParseWeapons(char *error, size_t maxlength);
void DM_FreeWeapons();

#endif //_INCLUDE_CSSDM_WEAPONS_H_
