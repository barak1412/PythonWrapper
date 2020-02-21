#include "physics.h"
#include "CAPIPhysics.h"


extern "C" float gforce_api(float weight)
{
	return gforce(weight);
}

extern "C" void velocity_api(float v0, float a, float t, float* v)
{
	*v = velocity(v0, a, t);
}