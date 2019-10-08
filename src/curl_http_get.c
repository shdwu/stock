#include <stdio.h>
#include <curl/curl.h>

char* getRequest(char* url) {
  CURL *curl;
  CURLcode res;
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_HTTP_VERSION, (long)CURL_HTTP_VERSION_2);
    res = curl_easy_perform(curl);
    if(res != CURLE_OK) {
      fprintf(stderr, "curl failed %s\n", curl_easy_strerror(res));
      curl_easy_cleanup(curl);
    }
  }
  return 0;
}
