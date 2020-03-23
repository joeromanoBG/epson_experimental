// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef DLLSFOREPSONDRIVER_EXPORTS
#define DLLSFOREPSONDRIVER_API
#endif

class CDLLsForEpsonDriver
{
public:
    CDLLsForEpsonDriver();

    DLLSFOREPSONDRIVER_API int fnDLLsForEpsonDriver(void);

    DLLSFOREPSONDRIVER_API short JointPositionSMtoInts(
        int sm_length, int sm_id, int sm_comm_type, int sm_reply_type, int seq, float joint1, float joint2, float joint3, float joint4, float joint5, float joint6, float joint7, float joint8, float joint9, float joint10, short* outputIntegers);

    DLLSFOREPSONDRIVER_API short RobotStatusSMtoInts(int sm_length, int sm_id, int sm_comm_type, int sm_reply_type, int* robot_status_body, short* outputIntegers);

    DLLSFOREPSONDRIVER_API short convertToFloatingpoint(short* inputintegers, float* joint_data, float velocity, float duration);

};