#pragma once
class Geo
{
public:
	int dist;
	int time;
	bool success;
	double SearchByName(char name);
	void Json(char *json);
	int Init(int latitude, int longitude);
	Geo();
	~Geo();
};

