cmake_minimum_required(VERSION 3.27)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled1 main.c
        generalStrings.h
        generalStrings.c
        Date.c
        Date.h
        Plane.c
        Plane.h
        Airport.c
        Airport.h
        AirportManager.c
        AirportManager.h
        Flight.c
        Flight.h
        Airline.c
        Airline.h
)
