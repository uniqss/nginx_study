sudo apt-get update

sudo apt-get install build-essential libpcre3 libpcre3-dev zlib1g zlib1g-dev libssl-dev libgd-dev libxml2 libxml2-dev uuid-dev

cd ../nginx/

#  ./configure --prefix=/var/www/html --sbin-path=/usr/sbin/nginx --conf-path=/etc/nginx/nginx.conf --http-log-path=/var/log/nginx/access.log --error-log-path=/var/log/nginx/error.log --with-pcre  --lock-path=/var/lock/nginx.lock --pid-path=/var/run/nginx.pid --with-http_ssl_module --with-http_image_filter_module=dynamic --modules-path=/etc/nginx/modules --with-http_v2_module --with-stream=dynamic --with-http_addition_module --with-http_mp4_module

rm -rf /nginx_build
sudo mkdir -p /nginx_build/
sudo chown uniqs:uniqs /nginx_build/
 ./configure --prefix=/nginx_build/var/www/html --sbin-path=/nginx_build/usr/sbin/nginx --conf-path=/nginx_build/etc/nginx/nginx.conf \
 --http-log-path=/nginx_build/var/log/nginx/access.log --error-log-path=/nginx_build/var/log/nginx/error.log --with-pcre \
  --lock-path=/nginx_build/var/lock/nginx.lock \
 --pid-path=/nginx_build/var/run/nginx.pid --with-http_ssl_module --with-http_image_filter_module=dynamic \
 --modules-path=/nginx_build/etc/nginx/modules \
 --with-http_v2_module --with-stream=dynamic --with-http_addition_module --with-http_mp4_module


 #./configure --without-http_empty_gif_module

 make

 make install

