#pragma once
typedef enum {Passenger,Luggage,Army} planeType;
typedef struct
{
    planeType  type;
    int serialNumber;
}Plane;