cdef extern from "CAPIPhysics.h":
	float gforce_api(float weight)
	void velocity_api(float v0, float a, float t, float* v)