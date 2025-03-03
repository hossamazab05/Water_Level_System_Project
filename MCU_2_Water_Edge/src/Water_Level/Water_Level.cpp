/*************************************************************************
 * 
 *  Author:     Ameer Louly
 * 
 *  Date:       02/26/2025
 * 
*************************************************************************/

#include "Water_Level.h"
#include "../Sensors/HCSR04.h"

/***************************************************************************/

void Sensor_init(Sensor_Type sensor)
{
    switch(sensor)
    {
        case HCSR04:
            HCSR04_init();
            break;
        
        case Waterproof:
        //todo: Call Waterproof sensor init function
            break;

        case ToF:
        //todo: Call ToF Sensor init function
            break;
    }
}

float32 getDepth_cm(Sensor_Type sensor)
{
    uint32 distance = 0;

    switch(sensor)
    {
        case HCSR04:
            distance = getDistanceinCM_HCSR04();
            break;
        
        case Waterproof:
        //todo: Call Waterproof sensor distance function and store in distance
            break;

        case ToF:
        //todo: Call ToF Sensor DIstance function and store in distance
            break;
    }

    return CONTAINER_DEPTH_CM - distance;
}