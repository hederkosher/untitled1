#include <stdlib.h>
#include <string.h>
#include "Airport.h"
int isSameAirport(Airport* airportA,Airport* airportB)
{
    if(strcmp(airportA->code,airportB->code) == 0)
        return 1;
    return 0;
}

int isAirportCode(Airport* airport,char iataCode [IATA_LEN+1])
{
    if(strcmp(airport->code,iataCode) == 0)
        return 1;
    return 0;
}