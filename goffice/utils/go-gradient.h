/*
 * go-gradient.h :
 *
 * Copyright (C) 2003-2004 Jody Goldberg (jody@gnome.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 * USA
 */
#ifndef GO_GRADIENT_H
#define GO_GRADIENT_H

#include <glib.h>

G_BEGIN_DECLS

typedef enum {
	GO_GRADIENT_N_TO_S,
	GO_GRADIENT_S_TO_N,
	GO_GRADIENT_N_TO_S_MIRRORED,
	GO_GRADIENT_S_TO_N_MIRRORED,
	GO_GRADIENT_W_TO_E,
	GO_GRADIENT_E_TO_W,
	GO_GRADIENT_W_TO_E_MIRRORED,
	GO_GRADIENT_E_TO_W_MIRRORED,
	GO_GRADIENT_NW_TO_SE,
	GO_GRADIENT_SE_TO_NW,
	GO_GRADIENT_NW_TO_SE_MIRRORED,
	GO_GRADIENT_SE_TO_NW_MIRRORED,
	GO_GRADIENT_NE_TO_SW,
	GO_GRADIENT_SW_TO_NE,
	GO_GRADIENT_SW_TO_NE_MIRRORED,
	GO_GRADIENT_NE_TO_SW_MIRRORED,
	GO_GRADIENT_MAX
} GOGradientDirection;

GOGradientDirection go_gradient_dir_from_str (const gchar *name);
const gchar *go_gradient_dir_as_str (GOGradientDirection dir);

G_END_DECLS

#endif /* GO_GRADIENT_H */
