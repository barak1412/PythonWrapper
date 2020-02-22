#include "mathematics_ops.h"

float gforce(float weight)
{
	return mul_op(weight, 9.8);
}

float velocity(float v0, float a, float t)
{
	return sum_op(v0, mul_op(a, t));
}