#include "physics.h"
#include "CAPIPhysics.h"
#include <string.h>


extern "C" float gforce_api(float weight)
{
	return gforce(weight);
}

extern "C" void velocity_api(float v0, float a, float t, float* v)
{
	*v = velocity(v0, a, t);
}

extern "C" void velocity_rank_api(float v, char* rank)
{
	if (v < 10)
		strcpy(rank, "Low");
	else if (v < 50)
		strcpy(rank, "Medium");
	else
		strcpy(rank, "High");
}
