#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>


time_t ngx_parse_http_time(u_char *value, size_t len);

/* compatibility */
#define ngx_http_parse_time(value, len) ngx_parse_http_time(value, len)
