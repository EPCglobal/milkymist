/*
 * Milkymist VJ SoC (Software)
 * Copyright (C) 2007, 2008, 2009, 2010 Sebastien Bourdeauducq
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Greedy Floating Point Unit Scheduler
 * This program takes FPVM code and performs greedy VLIW scheduling
 * to generate a program compatible with Milkymist PFPU.
 * The scheduler is said to be "greedy" as it simply scans the FPVM
 * program and takes the first schedulable instruction, without trying to
 * optimize the order of instructions.
 */

#ifndef __FPVM_GFPUS_H
#define __FPVM_GFPUS_H

#include <fpvm/fpvm.h>

/*
 * code must be able to hold PFPU_PROGSIZE 32-bit instructions.
 * registers must be able to hold PFPU_REG_COUNT 32-bit values.
 */

int gfpus_schedule(struct fpvm_fragment *fragment, unsigned int *code, unsigned int *registers);

#endif /* __FPVM_GFPUS_H */
