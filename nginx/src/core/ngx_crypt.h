#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>


ngx_int_t ngx_crypt(ngx_pool_t *pool, u_char *key, u_char *salt, u_char **encrypted);
