#include <stdio.h>
#include "thread_pool.h"
#include "curl_http_get.h"

#include "url.h"
#include "string.h"

int main(void) {
  // threadpool thpool = thpool_init(10);
  char* sinaUrl = join(SINA_URL, "sh601003,sh601001");
  char* ret = getRequest(sinaUrl);
  printf("%s\n", ret);
  exit(0);
}
