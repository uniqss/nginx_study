#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>
#include <ngx_string.h>


typedef struct {
    u_char *addr;
    size_t size;
    ngx_str_t name;
    ngx_log_t *log;
    ngx_uint_t exists; /* unsigned  exists:1;  */
} ngx_shm_t;


ngx_int_t ngx_shm_alloc(ngx_shm_t *shm);
void ngx_shm_free(ngx_shm_t *shm);
