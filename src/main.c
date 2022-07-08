/*
 * Copyright (c) 2018 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <logging/log.h>
LOG_MODULE_REGISTER(net_socket_can_sample, LOG_LEVEL_DBG);

#include <zephyr.h>

#ifdef TARGET
#include "target_board.h"
#endif

void user_board_main(void)
{

}

void main(void)
{
	/* Let the device start before doing anything */
	k_sleep(K_SECONDS(2));

#ifdef TARGET
	LOG_INF("Target Board");
	target_board_main();
#endif

#ifdef USER
	LOG_INF("User Board");
	user_board_main();
#endif

}