#pragma once
#define IATA_LEN 3
typedef struct
{
    char* name;
    char* country;
    char code[IATA_LEN+1];
}Airport;

int isSameAirport(Airport* airportA,Airport* airportB);
int isAirportCode(Airport* airport,char iataCode [IATA_LEN+1]);