#pragma once

#define nginx_version 1024000
#define NGINX_VERSION "1.24.0"
#define NGINX_VER "nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD NGINX_VER
#endif

#define NGINX_VAR "NGINX"
#define NGX_OLDPID_EXT ".oldbin"
