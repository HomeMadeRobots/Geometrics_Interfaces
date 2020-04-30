#ifndef DISTANCE_MEASUREMENT_H
#define DISTANCE_MEASUREMENT_H


/* Arguments */
#include "T_Distance.h"
#include <stdbool.h>


/*============================================================================*/
/* Client_Server_Interface */
/*============================================================================*/
typedef struct {
    void (*Get_Measured_Distance) ( T_Distance* distance );
    void (*Is_Measured_Distance_Valid) ( bool* is_measure_valid );
} Distance_Measurement;


#endif