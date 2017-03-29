/* Intel Knights Landing Master Header File
 *
 * Copyright (c) 2011-2016, Lawrence Livermore National Security, LLC.
 * LLNL-CODE-645430
 *
 * Produced at Lawrence Livermore National Laboratory
 * Written by  Barry Rountree, rountree@llnl.gov
 *             Scott Walker,   walker91@llnl.gov
 *             Kathleen Shoga, shoga1@llnl.gov
 *
 * All rights reserved.
 *
 * This file is part of libmsr.
 *
 * libmsr is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * libmsr is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libmsr. If not, see <http://www.gnu.org/licenses/>.
 *
 * This material is based upon work supported by the U.S. Department of
 * Energy's Lawrence Livermore National Laboratory. Office of Science, under
 * Award number DE-AC52-07NA27344.
 *
 */

#define COMPILED_VEND 0x8086 // Intel
#define COMPILED_ARCH 0x57   // Knights Landing
#define IS_ARCH_57 1

/**********/
/* CLOCKS */
/**********/
#define IA32_MPERF              0xE7
#define IA32_APERF              0xE8
#define IA32_TIME_STAMP_COUNTER 0x10
#define IA32_CLOCK_MODULATION   0x19A
#define IA32_PERF_STATUS        0x198
#define IA32_PERF_CTL           0x199

/************/
/* COUNTERS */
/************/
#define IA32_FIXED_CTR_CTRL			0x38D	// Controls for fixed ctr0, 1, and 2
#define IA32_PERF_GLOBAL_CTRL		0x38F	// Enables for fixed ctr0,1,and2 here
#define IA32_PERF_GLOBAL_STATUS		0x38E	// Overflow condition can be found here
#define IA32_PERF_GLOBAL_OVF_CTRL	0x390	// Can clear the overflow here
#define IA32_FIXED_CTR0				0x309	// (R/W) Counts Instr_Retired.Any
#define IA32_FIXED_CTR1				0x30A	// (R/W) Counts CPU_CLK_Unhalted.Core
#define IA32_FIXED_CTR2				0x30B	// (R/W) Counts CPU_CLK_Unhalted.Ref

#define IA32_PMC0 0xC1
#define IA32_PMC1 0xC2
#define IA32_PMC2 0xC3
#define IA32_PMC3 0xC4
#define IA32_PMC4 0xC5
#define IA32_PMC5 0xC6
#define IA32_PMC6 0xC7
#define IA32_PMC7 0xC8

#define IA32_PERFEVTSEL0 0x186
#define IA32_PERFEVTSEL1 0x187
#define IA32_PERFEVTSEL2 0x188
#define IA32_PERFEVTSEL3 0x189
#define IA32_PERFEVTSEL4 0x18A
#define IA32_PERFEVTSEL5 0x18B
#define IA32_PERFEVTSEL6 0x18C
#define IA32_PERFEVTSEL7 0x18D

//#define MSR_PCU_PMON_EVNTSEL0     0x711
//#define MSR_PCU_PMON_EVNTSEL1     0x712
//#define MSR_PCU_PMON_EVNTSEL2     0x713
//#define MSR_PCU_PMON_EVNTSEL3     0x714
//#define MSR_PCU_PMON_CTR0         0x717
//#define MSR_PCU_PMON_CTR1         0x718
//#define MSR_PCU_PMON_CTR2         0x719
//#define MSR_PCU_PMON_CTR3         0x71A

/********/
/* MISC */
/********/
#define IA32_MISC_ENABLE      0x1A0
#define MSR_PKG_C2_RESIDENCY  0x60D
#define MSR_PKG_C3_RESIDENCY  0x3F8
#define MSR_PKG_C6_RESIDENCY  0x3F9
#define MSR_PKG_C7_RESIDENCY  0x3FA
#define MSR_CORE_C6_RESIDENCY 0x3FF
//#define MSR_CORE_C3_RESIDENCY 0x3FC
//#define MSR_CORE_C6_RESIDENCY 0x3FD
//#define MSR_CORE_C7_RESIDENCY 0x3FE

/********/
/* RAPL */
/********/
#define MSR_RAPL_POWER_UNIT    0x606 // ro
#define MSR_PKG_POWER_LIMIT    0x610 // rw
#define MSR_PKG_ENERGY_STATUS  0x611 // ro sic;
#define MSR_PKG_POWER_INFO     0x614 // rw text states ro
#define MSR_PP0_POWER_LIMIT    0x638 // rw
#define MSR_PP0_ENERGY_STATUS  0x639 // ro
//#define MSR_PP0_POLICY         0x63A // rw
//#define MSR_PP0_PERF_STATUS    0x63B // ro

//#define MSR_PP1_POWER_LIMIT    0x640 // rw
//#define MSR_PP1_ENERGY_STATUS  0x641 // ro. sic;
//#define MSR_PP1_POLICY         0x642 // rw

#define MSR_PKG_PERF_STATUS    0x613 // ro
#define MSR_DRAM_POWER_LIMIT   0x618 // rw
#define MSR_DRAM_ENERGY_STATUS 0x619 // ro. sic;
#define MSR_DRAM_PERF_STATUS   0x61B // ro
#define MSR_DRAM_POWER_INFO    0x61C // rw text states ro

/***********/
/* THERMAL */
/***********/
#define IA32_THERM_STATUS            0x19C
//#define MSR_THERM2_CTL				 0x19D
#define IA32_THERM_INTERRUPT         0x19B
#define IA32_PACKAGE_THERM_STATUS    0x1B1
#define IA32_PACKAGE_THERM_INTERRUPT 0x1B2
#define MSR_TEMPERATURE_TARGET       0x1A2

/*********/
/* TURBO */
/*********/
#define MSR_TURBO_ACTIVATION_RATIO 0x64C
#define MSR_TURBO_RATIO_LIMIT      0x1AD
//#define MSR_TURBO_RATIO_LIMIT1     0x1AE
