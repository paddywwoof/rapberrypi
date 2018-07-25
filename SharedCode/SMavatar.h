#ifndef __SMAVATAR
#define __SMAVATAR

#include "SMvector.h"
#include "SMmodel.h"
#include "SMbbox3d.h"
#include <vector>

class SMavatar{
public:

	float walkspeed;
	float runspeed;
	float jumpheight;
	
	float eyeheight;
	SMbbox3d collisionBox;
	
	SMmodel model; 		//avatar model include matrix for position/rotation etc..
	
	int32_t action;		//user defined actions such as stand, sit, walk, run, lying down, dead etc..
	
};

#endif
