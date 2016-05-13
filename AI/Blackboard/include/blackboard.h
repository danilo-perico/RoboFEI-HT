/*--------------------------------------------------------------------

******************************************************************************
* @file blackboard.h
* @author Isaac Jesus da Silva - ROBOFEI-HT - FEI
* @version V0.0.0
* @created 07/04/2014
* @Modified 15/05/2014
* @e-mail isaac25silva@yahoo.com.br
* @brief Main header black board
****************************************************************************

Arquivo de cabeçalho contendo as funções e definições do black board

/--------------------------------------------------------------------*/

//---- Definições da memória compartilhada------------------------------
#define PLANNING_COMMAND 0
#define PLANNING_PARAMETER_VEL 1
#define PLANNING_PARAMETER_ANGLE 2
#define IMU_STATE 3
#define IMU_RESET 4


#define CONTROL_ACTION 13
#define CONTROL_HEIGHT_A 14
#define CONTROL_HEIGHT_B 15
#define CONTROL_HEIGHT_C 16
#define DECISION_ACTION_A 17
#define DECISION_ACTION_B 18
#define DECISION_STATE 19
#define DECISION_POSITION_A 20
#define DECISION_POSITION_B 21
#define DECISION_POSITION_C 22
#define DECISION_BALL_POS 23
#define DECISION_OPP1_POS 24
#define DECISION_OPP2_POS 25
#define DECISION_OPP3_POS 26
#define COM_ACTION_ROBOT1 27
#define COM_ACTION_ROBOT2 28
#define COM_ACTION_ROBOT3 29
#define COM_STATE_ROBOT1 30
#define COM_STATE_ROBOT2 31
#define COM_STATE_ROBOT3 32
#define COM_POS_ROBOT1 33
#define COM_POS_ROBOT2 34
#define COM_POS_ROBOT3 35
#define COM_POS_BALL_ROBOT1 36
#define COM_POS_BALL_ROBOT2 37
#define COM_POS_BALL_ROBOT3 38
#define COM_POS_OPP_A_ROBOT1 39
#define COM_POS_OPP_A_ROBOT2 40
#define COM_POS_OPP_A_ROBOT3 41
#define COM_POS_OPP_A_ROBOT4 42
#define COM_POS_OPP_B_ROBOT1 43
#define COM_POS_OPP_B_ROBOT2 44
#define COM_POS_OPP_B_ROBOT3 45
#define COM_POS_OPP_B_ROBOT4 46
#define COM_POS_OPP_C_ROBOT1 47
#define COM_POS_OPP_C_ROBOT2 48
#define COM_POS_OPP_C_ROBOT3 49
#define COM_POS_OPP_C_ROBOT4 50
#define COM_REFEREE 51
#define LOCALIZATION_X 52
#define LOCALIZATION_Y 53
#define LOCALIZATION_THETA 54
#define VISION_LOST 57
#define DECISION_SEARCH_ON 58
#define DECISION_ACTION_VISION 59
#define VISION_MOTOR1_GOAL 60
#define VISION_MOTOR2_GOAL 61
#define VISION_SEARCH_GOAL 62
#define VISION_LOST_GOAL 63
#define VISION_STATE 64
#define ROBOT_NUMBER 65
#define VISION_pos_servo1 66
#define VISION_pos_servo2 67
#define COM_POS_ORIENT_QUALIT_ROBOT_A 68
#define COM_POS_DIST_QUALIT_ROBOT_A 69
#define COM_POS_ORIENT_QUALIT_ROBOT_B 70
#define COM_POS_DIST_QUALIT_ROBOT_B 71
#define COM_POS_ORIENT_QUALIT_ROBOT_C 72
#define COM_POS_DIST_QUALIT_ROBOT_C 73
#define VISION_DELTA_ORIENT 74
#define LOCALIZATION_FIND_ROBOT 75
#define RECEIVED_ROBOT_SENDING 76
#define RECEIVED_QUAL_ORIENT 77
#define RECEIVED_QUAL_DIST 78
#define RECEIVED_ROBOT_SEEN 79
#define CONTROL_MESSAGES 80
#define ASKED_QUALIT_DIRECT 81
#define ASKED_QUALIT_DISTANCE 82
#define ASKED_RELATED_ROBOT 83
#define CONTROL_MOVING 84
#define ROBOT_VIEW_ROTATE 100

#define IMU_GYRO_X 1
#define IMU_GYRO_Y 2
#define IMU_GYRO_Z 3
#define IMU_ACCEL_X 4
#define IMU_ACCEL_Y 5
#define IMU_ACCEL_Z 6
#define IMU_COMPASS_X 7
#define IMU_COMPASS_Y 8
#define IMU_COMPASS_Z 9
#define IMU_EULER_X 10
#define IMU_EULER_Y 11
#define IMU_EULER_Z 12
#define IMU_QUAT_X 13
#define IMU_QUAT_Y 14
#define IMU_QUAT_Z 15
#define VISION_AREA_SEGMENT 16
#define VISION_BALL_DIST 17
#define VISION_BALL_ANGLE 18
#define VISION_GOAL_DIST 19
#define VISION_GOAL_ANGLE 20
#define VISION_OPP01_DIST 21
#define VISION_OPP02_DIST 22
#define VISION_OPP03_DIST 23
#define VISION_OPP04_DIST 24
#define VISION_OPP05_DIST 25
#define VISION_OPP06_DIST 26
#define VISION_OPP07_DIST 27
#define VISION_OPP08_DIST 28
#define VISION_OPP09_DIST 29
#define VISION_OPP10_DIST 30
#define VISION_OPP11_DIST 31
#define VISION_OPP01_ANGLE 32
#define VISION_OPP02_ANGLE 33
#define VISION_OPP03_ANGLE 34
#define VISION_OPP04_ANGLE 35
#define VISION_OPP05_ANGLE 36
#define VISION_OPP06_ANGLE 37
#define VISION_OPP07_ANGLE 38
#define VISION_OPP08_ANGLE 39
#define VISION_OPP09_ANGLE 40
#define VISION_OPP10_ANGLE 41
#define VISION_OPP11_ANGLE 42
#define VISION_RBT01_DIST 43
#define VISION_RBT02_DIST 44
#define VISION_RBT03_DIST 45
#define VISION_RBT04_DIST 46
#define VISION_RBT05_DIST 47
#define VISION_RBT06_DIST 48
#define VISION_RBT07_DIST 49
#define VISION_RBT08_DIST 50
#define VISION_RBT09_DIST 51
#define VISION_RBT10_DIST 52
#define VISION_RBT11_DIST 53
#define VISION_RBT01_ANGLE 54
#define VISION_RBT02_ANGLE 55
#define VISION_RBT03_ANGLE 56
#define VISION_RBT04_ANGLE 57
#define VISION_RBT05_ANGLE 58
#define VISION_RBT06_ANGLE 59
#define VISION_RBT07_ANGLE 60
#define VISION_RBT08_ANGLE 61
#define VISION_RBT09_ANGLE 62
#define VISION_RBT10_ANGLE 63
#define VISION_RBT11_ANGLE 64
#define VISION_TILT_DEG 65
#define VISION_PAN_DEG 66
#define CBR_COORDINATOR 67
#define CBR_RUN 68
#define LOCALIZATION_BALL_X 69
#define LOCALIZATION_BALL_Y 70
#define LOCALIZATION_RBT01_X 71
#define LOCALIZATION_RBT01_Y 72
#define LOCALIZATION_RBT02_X 73
#define LOCALIZATION_RBT02_Y 74
#define LOCALIZATION_RBT03_X 75
#define LOCALIZATION_RBT03_Y 76
#define LOCALIZATION_RBT04_X 77
#define LOCALIZATION_RBT04_Y 78
#define LOCALIZATION_RBT05_X 79
#define LOCALIZATION_RBT05_Y 80
#define LOCALIZATION_RBT06_X 81
#define LOCALIZATION_RBT06_Y 82
#define LOCALIZATION_RBT07_X 83
#define LOCALIZATION_RBT07_Y 84
#define LOCALIZATION_RBT08_X 85
#define LOCALIZATION_RBT08_Y 86
#define LOCALIZATION_RBT09_X 87
#define LOCALIZATION_RBT09_Y 88
#define LOCALIZATION_RBT10_X 89
#define LOCALIZATION_RBT10_Y 90
#define LOCALIZATION_RBT11_X 91
#define LOCALIZATION_RBT11_Y 92
#define LOCALIZATION_OPP01_X 93
#define LOCALIZATION_OPP01_Y 94
#define LOCALIZATION_OPP02_X 95
#define LOCALIZATION_OPP02_Y 96
#define LOCALIZATION_OPP03_X 97
#define LOCALIZATION_OPP03_Y 98
#define LOCALIZATION_OPP04_X 99
#define LOCALIZATION_OPP04_Y 100
#define LOCALIZATION_OPP05_X 101
#define LOCALIZATION_OPP05_Y 102
#define LOCALIZATION_OPP06_X 103
#define LOCALIZATION_OPP06_Y 104
#define LOCALIZATION_OPP07_X 105
#define LOCALIZATION_OPP07_Y 106
#define LOCALIZATION_OPP08_X 107
#define LOCALIZATION_OPP08_Y 108
#define LOCALIZATION_OPP09_X 109
#define LOCALIZATION_OPP09_Y 110
#define LOCALIZATION_OPP10_X 111
#define LOCALIZATION_OPP10_Y 112
#define LOCALIZATION_OPP11_X 113
#define LOCALIZATION_OPP11_Y 114

//----global variables------------------------------------------------
extern int *mem ; //Variável que manipula memória compartilhada
extern float *memf ; //Variável que manipula memória compartilhada

//----Functions prototype---------------------------------------------
int* using_shared_memory(int); //Função que cria e acopla a memória compartilhada

void write_int(int* , int, int);

void write_float(int*, int, float);

int read_int(int*, int);

float read_float(int*, int);

