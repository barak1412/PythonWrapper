cimport cmy_physics
from libc.stdlib cimport malloc, free


def gforce_api(weight):
	return cmy_physics.gforce_api(weight)

def velocity_api(v0, a, t):
	cdef float result[1]
	cmy_physics.velocity_api(v0, a, t, result)
	return result[0]

class PhysicsWrapper(object):
	
	@staticmethod
	def gforce(weight):
		return cmy_physics.gforce_api(weight)
	
	@staticmethod
	def velocity(v0, a, t):
		cdef float result[1]
		cmy_physics.velocity_api(v0, a, t, result)
		return result[0]

	@staticmethod
	def velocity_rank(v):
		cdef char* rank = <char *> malloc((10) * sizeof(char))
		cdef bytes py_rank
		cmy_physics.velocity_rank_api(v, rank)
		try:
			py_rank = rank
		finally:
			free(rank)
		return py_rank.decode('UTF-8')