#ifndef __SMUTILS
#define __SMUTILS

#include "Vectorf.h"

namespace SMutils {
	
	vec3f crossProduct(vec3f &a, vec3f &b);
	float innerProduct(vec3f &a, vec3f &b);

	bool rayIntersectingTriangle(vec3f &pos,vec3f &dir, vec3f &v0, vec3f &v1, vec3f &v2);

}
#endif
