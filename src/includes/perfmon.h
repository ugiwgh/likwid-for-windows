/*
 * ===========================================================================
 *
 *       Filename:  perfmon.h
 *
 *    Description:  Header File of perfmon module.
 *                  Configures and reads out performance counters
 *                  on x86 based architectures. Supports multi threading.
 *
 *        Version:  1.0
 *        Created:  07/15/2009
 *       Revision:  none
 *
 *         Author:  Jan Treibig (jt), jan.treibig@gmail.com
 *        Company:  RRZE Erlangen
 *        Project:  none
 *      Copyright:  Copyright (c) 2009, Jan Treibig
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License, v2, as
 *      published by the Free Software Foundation
 *     
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *     
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * ===========================================================================
 */


/** \file perfmon.h
 * Header of perfmon module
 *
 */
#ifndef PERFMON_H
#define PERFMON_H

#include <bstrlib.h>
#include <types.h>

extern int perfmon_verbose;
extern PerfmonThread* threadData;
extern int perfmon_numThreads;

extern void (*perfmon_startCountersThread) (int thread_id);
extern void (*perfmon_stopCountersThread) (int thread_id);
extern int  (*perfmon_getIndex) (bstring reg, PerfmonCounterIndex* index);
extern void (*perfmon_setupCounterThread) (int thread_id,
        uint32_t umask, uint32_t event, PerfmonCounterIndex index);
extern void (*perfmon_setupReport) (MultiplexCollections* collections);
extern void (*perfmon_printReport) (MultiplexCollections* collections);

void perfmon_initEventSet(StrUtilEventSet* eventSetConfig, PerfmonEventSet* set);
extern void perfmon_printAvailableGroups(void);
extern void perfmon_init (int numThreads, int threads[]);
extern void perfmon_setupEventSet(bstring eventString);
extern void perfmon_setupEventSetC(char* eventString);
extern void perfmon_setupCounters();
extern void perfmon_startCounters ();
extern void perfmon_stopCounters ();
extern void perfmon_printMarkerResults();
extern void perfmon_printCounterResults();

#endif /*PERFMON_H*/
