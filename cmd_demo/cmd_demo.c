// SPDX-License-Identifier: GPL-2.0+ OR BSD-3-Clause
/*
 * Copyright (C) 2020, STMicroelectronics - All Rights Reserved
 */

#include <common.h>
#include <command.h>

static int do_stm32_demo(struct cmd_tbl *cmdtp, int flag, int argc,
			char * const argv[])
{

	if (argc < 2 ||  argc > 4)
		return CMD_RET_USAGE;

	puts("starting the demo command...\n");

	puts("demo command complete - returning...\n");

	return CMD_RET_SUCCESS;
}

U_BOOT_CMD(stm32demo, 3, 0, do_stm32_demo,
	   "simple demo command addition to uboot (usage string)",
	   "(help string) <required Arg 0> [<optional Arg 1>] [<optional Arg 2>]\n"
	   "  required Arg 0 - must be passed on command line\n"
	   "  optional Arg 1 - not used in demo command\n"
	   "  optional Arg 2 - not used in demo command (help string)\n"
);
