#pragma once
#include "Airport.h"
#include "Date.h"
#include "Plane.h"
typedef struct
{
    char sCode[IATA_LEN+1];
    char desCode[IATA_LEN+1];
    Plane thePlane;
    Date theDate;
}Flight;