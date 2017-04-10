#include "stdafx.h"
#include "Http.h"
#include <curl/curl.h>


char Http::Request(const char url[2000])
{
	CURL *curl;
	CURLcode resultt;

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
		resultt = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
	return resultt;
}

Http::Http()
{
}


Http::~Http()
{
}
