#pragma once
typedef struct
{
    int day;
    int month;
    int year;
}Date;

int isDateValid(int day,int month,int year);
int* dateIntoFormat();
void freeDate();
void printDate(const Date* date);