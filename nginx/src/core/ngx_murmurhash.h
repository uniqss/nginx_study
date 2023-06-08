#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>


uint32_t ngx_murmur_hash2(u_char *data, size_t len);
