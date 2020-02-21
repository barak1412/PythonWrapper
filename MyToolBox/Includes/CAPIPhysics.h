#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif

EXTERNC float gforce_api(float weight);
EXTERNC void velocity_api(float v0, float a, float t, float* v);
EXTERNC void velocity_rank_api(float v, char* rank);