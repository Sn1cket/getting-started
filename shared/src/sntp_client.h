/* Copyright (c) Microsoft Corporation.
   Licensed under the MIT License. */

#ifndef _SNTP_CLIENT_H
#define _SNTP_CLIENT_H

#include <tx_api.h>

#ifdef __cplusplus
extern "C" {
#endif

ULONG sntp_time_get();
UINT sntp_time(ULONG* unix_time);

UINT sntp_init();
UINT sntp_sync();

#ifdef __cplusplus
}
#endif

#endif
