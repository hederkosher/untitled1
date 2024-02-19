#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

#define JANUARY 1
#define FEBRUARY 2
#define DECEMBER 12

int isDateValid(int day,int month,int year) {
    if (year < 2023)
        return 0;
    if (month < JANUARY || month > DECEMBER)
        return 0;
    if (month == FEBRUARY) {
        if (day > 28 || day < 1)
            return 0;
    }
    if (month % 2) {
        if (day > 30 || day < 1)
            return 0;
    } else {
        if (day > 31 || day < 1)
            return 0;
    }


    return 1;
}

int* dateIntoFormat()
{
    int day,month,year;
    int* date = NULL;
    int isValid = 0;
    while(!isValid) {
        printf("Enter Flight Date dd##mm##yyyy  minimum year 2023\t");
        scanf("%d##%d##%d", &day, &month, &year);
        if (isDateValid(day, month, year))
            isValid = 1;
        printf("Error try again\n");
    }
    date = (int*) malloc(3* sizeof(int));
    if(!date)
        return NULL;
    else
    {
        date[0] = day;
        date[1] = month;
        date[2] = year;
    }
    return date;
}
void freeDate()
{
    free(dateIntoFormat());
}
void printDate(const Date* date)
{
    printf("Date: %d/%d/%d ",date->day,date->month,date->year);
}
