#pragma once
#include "Flight.h"
#include "Plane.h"
typedef struct
{
    char* name;
    Flight** flightArr;
    int flightCount;
    Plane* planeArr;
    int planeCount;
}Airline;
