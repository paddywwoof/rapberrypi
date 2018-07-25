#ifndef __SMCAMERA
#define __SMCAMERA

#include "SMmatrix.h"

class SMcamera {
public:
	SMcamera() {}
	~SMcamera() {}
	
	SMmatrix matrix;
	SMmatrix viewMatrix;
	
};

#endif
