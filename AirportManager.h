#pragma once
#include "Airport.h"
typedef struct
{
    Airport** airportArr;
    int count;

}AirportManager;
int initAirport(AirportManager* airport);
int addAirport(AirportManager* airport);
Airport *findAirportByCode(char iataCode [IATA_LEN+1]);