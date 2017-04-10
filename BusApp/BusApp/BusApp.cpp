#include "StdAfx.h"
#include <stdio.h>
#include <curl/curl.h>
#include <conio.h>
#include <string>
#include "Http.h"
#include <iostream>

using namespace std;

int main(void)
{
	Http http;
	string url = "https://maps.googleapis.com/maps/api/distancematrix/json?origins=Vancouver+BC|Seattle&destinations=San+Francisco|Victoria+BC&key=AIzaSyA1ZqJPEXqj1eQrylKI2lx_rJQtzGkeHIM";
	http.Request(url.c_str());
	system("pause");
	return 0;
}