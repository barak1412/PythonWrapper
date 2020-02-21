cimport cmy_physics

def gforce_api(weight):
	return cmy_physics.gforce_api(weight)

def velocity_api(v0, a, t):
	cdef float result[1]
	cmy_physics.velocity_api(v0, a, t, result)
	return result[0]