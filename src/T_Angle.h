#ifndef T_ANGLE_H
#define T_ANGLE_H

#include <stdint.h>

/*============================================================================*/
/* Physical_Data_Type */
/*============================================================================*/
/*
Unit : rad
Resolution : 2^-13
Offset : 0
minumum : 0 rad
maximum : 2pi - 2^-13 rad
*/
typedef uint16_t T_Angle;


/*============================================================================*/
/* Predefined values */
/*============================================================================*/
#define ANGLE_QUARTER_PI     6434
#define ANGLE_HALF_PI       12868
#define ANGLE_PI            25736
#define ANGLE_TWO_PI        51472

#endif