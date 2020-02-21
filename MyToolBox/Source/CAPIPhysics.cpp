#include "physics.h"
#include "CAPIPhysics.h"


extern "C" float gforce_api(float weight)
{
	return gforce(weight);
}