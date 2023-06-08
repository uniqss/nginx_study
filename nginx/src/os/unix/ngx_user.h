#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>


typedef uid_t ngx_uid_t;
typedef gid_t ngx_gid_t;


ngx_int_t ngx_libc_crypt(ngx_pool_t *pool, u_char *key, u_char *salt, u_char **encrypted);
