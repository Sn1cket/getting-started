/* Copyright (c) Microsoft Corporation.
   Licensed under the MIT License. */

#ifndef _NX_CLIENT_H
#define _NX_CLIENT_H

#include "nx_api.h"
#include "nxd_dns.h"
#include "tx_api.h"

#ifdef __cplusplus
extern "C" {
#endif

UINT azure_iot_nx_client_entry(
    NX_IP* ip_ptr, NX_PACKET_POOL* pool_ptr, NX_DNS* dns_ptr, UINT (*unix_time_callback)(ULONG* unix_time));

#ifdef __cplusplus
}
#endif

#endif // _NX_CLIENT_H