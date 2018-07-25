#include "SMutils.h"

namespace SMutils {

	vec3f crossProduct(vec3f &a, vec3f &b)
	{
		return vec3f(a.y * b.z - b.y * a.z, a.z * b.x - b.z * a.x, a.x * b.y - b.x * a.y);
	}

	float innerProduct(vec3f &a, vec3f &b)
	{
		return a.x * b.x + a.y * b.y + a.z * b.z;
	}

	bool rayIntersectingTriangle(vec3f &pos, vec3f &dir, vec3f &v0, vec3f &v1, vec3f &v2)
	{
		//Based on www.lighthouse3d.com/tutorials/ray-triangle-intersection/
		//Thank you!
		
		vec3f e1 = v1 - v0;
		vec3f e2 = v2 - v0;
		vec3f h = crossProduct(dir, e2);
		float a = innerProduct(e1, h);
		
		if (a > -0.00001f && a < 0.00001f) return false; //roughly zero
		
		float f = 1.f / a;
		vec3f s = pos - v0;
		float u = f * innerProduct(s, h);
		
		if (u < 0.f || u > 1.f) return false;
		
		vec3f q = crossProduct(s, e1);
		float v = f * innerProduct(dir, q);
		
		if (u < 0.f || u+v > 1.f) return false;
		
		float i = f * innerProduct(e2, q);	//distance from pos to triangle intersection
		
		return (i > 0.00001f);
	}

}
