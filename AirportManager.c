#include <stdlib.h>
#include "AirportManager.h"

int initAirport(AirportManager *airportManager) {
    airportManager->count = 0;
    airportManager->airportArr = NULL;
    return 1;
}

int addAirport(AirportManager *airportManager) {
    airportManager->airportArr = (Airport *)realloc(airportManager->airportArr,(airportManager->count+1)* sizeof(Airport));
    if(!airportManager->airportArr)
        return 0;
    initAirport((AirportManager *)(airportManager->airportArr[airportManager->count]));
    airportManager->count++;
    return 1;
}

Airport *findAirportByCode(char iataCode[IATA_LEN + 1]);
