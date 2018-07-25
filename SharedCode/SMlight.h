#ifndef __SMLIGHT
#define __SMLIGHT

#include "SMmatrix.h"

class SMlight {
public:

	SMlight() {}
	~SMlight() {}
	
	SMmatrix matrix;
	float intensity;
	vec3f direction;
	int32_t shadow;
};

#endif
