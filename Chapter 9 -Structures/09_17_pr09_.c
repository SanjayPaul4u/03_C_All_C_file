#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
date showDate(date date1)
{
    printf("The Date is: %d/%d/%d\n", date1.date, date1.month, date1.year);
}
int comparasion_Be_Dates(date date1, date date2)
{
    // MAKE DISITION ON THE BASIS OF YEAT COMPARASION
    if (date1.year > date2.year)
    {
        return 1;
    }
    if (date1.year < date2.year)
    {
        return -1;
    }
    // MAKE DISITION ON THE BASIS OF MONTH COMPARASION

    if (date1.month > date2.month)
    {
        return 1;
    }
    if (date1.month < date2.month)
    {
        return -1;
    }
    // MAKE DISITION ON THE BASIS OF DATE COMPARASION

    if (date1.date > date2.date)
    {
        return 1;
    }
    if (date1.date < date2.date)
    {
        return -1;
    }
    return 0;
}
int main()//FIRST UNDERSTAND THE PROGRAMME BETTERLY😍😍😍😍
{
    date d1 = {1, 11, 2021}, d2={30, 12, 2020};
    // THIS FUNCTION IS FOR SHOWING DATE.
    showDate(d1);

    // THIS FUNCTION IS FOR SHOWING COMPARASION BETWEEN TWO DATES
    int a= comparasion_Be_Dates(d1, d2);
    printf("The compasion between two date is: %d", a);

        return 0;
    };