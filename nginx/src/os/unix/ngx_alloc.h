#pragma once

#include <ngx_config.h>
#include <ngx_core_def.h>

void *ngx_alloc(size_t size, ngx_log_t *log);
void *ngx_calloc(size_t size, ngx_log_t *log);

#define ngx_free free


/*
 * Linux has memalign() or posix_memalign()
 * Solaris has memalign()
 * FreeBSD 7.0 has posix_memalign(), besides, early version's malloc()
 * aligns allocations bigger than page size at the page boundary
 */

#if (NGX_HAVE_POSIX_MEMALIGN || NGX_HAVE_MEMALIGN)

void *ngx_memalign(size_t alignment, size_t size, ngx_log_t *log);

#else

#define ngx_memalign(alignment, size, log) ngx_alloc(size, log)

#endif


extern ngx_uint_t ngx_pagesize;
extern ngx_uint_t ngx_pagesize_shift;
extern ngx_uint_t ngx_cacheline_size;
