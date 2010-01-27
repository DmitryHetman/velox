/* mwm: mwm/layout-private.h
 *
 * Copyright (c) 2009, 2010 Michael Forney <michael@obberon.com>
 *
 * This file is a part of mwm.
 *
 * mwm is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License version 2, as published by the Free
 * Software Foundation.
 *
 * mwm is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along
 * with mwm.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MWM_LAYOUT_PRIVATE_H
#define MWM_LAYOUT_PRIVATE_H

extern struct mwm_hashtable * layouts;

void setup_layouts();
void cleanup_layouts();

#endif

// vim: fdm=syntax fo=croql et sw=4 sts=4 ts=8
