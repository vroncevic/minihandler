/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * minihandler.h
 * Copyright (C) 2016 Vladimir Roncevic <elektron.ronca@gmail.com>
 * 
 * minihandler is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * minihandler is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __MINIHANDLER_H
#define __MINIHANDLER_H

#include <stdio.h>

typedef struct {
	int call_flag;
} handler_signal;

typedef struct {
	void (*init)();
	void (*action)();
	void (*exit)();
} action_handler_t;

extern handler_signal handler_signal_g;

void workhandler(action_handler_t action);

void inithandler();
void taskhandler();
void exithandler();

#endif

