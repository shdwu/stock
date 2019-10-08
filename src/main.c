#include <stdio.h>
#include "thread_pool.h"
#include "curl_http_get.h"

int main(void) {
    // threadpool thpool = thpool_init(10);
    char* sinaUrl = "http://hq.sinajs.cn/list=sh601003,sh601001";
    char* ret = getRequest(sinaUrl);
    printf("%s\n", ret);
}