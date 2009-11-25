/*
 * * Copyright (C) 2009 Ali <aliov@xfce.org>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __PAROLE_PL_PARSER_H
#define __PAROLE_PL_PARSER_H

#include <glib.h>

G_BEGIN_DECLS

typedef enum
{
    PAROLE_PL_FORMAT_UNKNOWN,
    PAROLE_PL_FORMAT_M3U,
    PAROLE_PL_FORMAT_PLS,
    PAROLE_PL_FORMAT_ASX,
    PAROLE_PL_FORMAT_XSPF
    
} ParolePlFormat;

ParolePlFormat		 parole_pl_parser_guess_format_from_extension   (const gchar *filename);

GSList 			*parole_pl_parser_load_file		        (const gchar *filename);

gboolean		 parole_pl_parser_save_file		        (GSList *files,
								         const gchar *filename,
									 ParolePlFormat format);

G_END_DECLS

#endif /* __PAROLE_PL_PARSER_H */