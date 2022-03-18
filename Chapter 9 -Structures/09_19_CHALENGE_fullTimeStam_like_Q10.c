# include<stdio.h>
typedef struct fullTimeStam
{
    int second;
    int minute;
    int hours;

    int day;
    int month;
    int year;
}timeStam;
timeStam showFullTimeStam(timeStam date){
    printf("The Full TimeStam is: %d:%d:%d   %d/%d/%d\n\n", date.second, date.minute, date.hours, date.day, date.month, date.year);
}

int comparasion (timeStam dat1, timeStam dat2){
    //MAKE DISITION ON THE BASIS OF YEAR COMPARASION
    if(dat1.year>dat2.year){
        printf("The year of d1 is greater than year of d2**********************\n");
        return 1;
    }
    if(dat1.year<dat2.year){
        printf("The year of d1 is lower than year of d2**********************\n");
        return -1;
    }

    //MAKE DISITION ON THE BASIS OF MONTH COMPARASION
    if(dat1.month>dat2.month){
        printf("The month of d1 is greater than month of d2**********************\n");
        return 1;
    }
    if(dat1.month<dat2.month){
        printf("The month of d1 is lower than month of d2**********************\n");
        return -1;
    }

    //MAKE DISITION ON THE BASIS OF day COMPARASION
    if(dat1.day>dat2.day){
        printf("The day of d1 is greater than day of d2**********************\n");
        return 1;
    }
    if(dat1.day<dat2.day){
        printf("The day of d1 is lower than day of d2**********************\n");
        return -1;
    }


    //MAKE DISITION ON THE BASIS OF hour COMPARASION
    if(dat1.hours>dat2.hours){
        printf("The hour of d1 is greater than hour of d2**********************\n");
        return 1;
    }
    if(dat1.hours<dat2.hours){
        printf("The hour of d1 is lower than hour of d2**********************\n");
        return -1;
    }
    //MAKE DISITION ON THE BASIS OF minute COMPARASION
    if(dat1.minute>dat2.minute){
        printf("The minute of d1 is greater than minute of d2**********************\n");
        return 1;
    }
    if(dat1.minute<dat2.minute){
        printf("The minute of d1 is lower than minute of d2**********************\n");
        return -1;
    }
    //MAKE DISITION ON THE BASIS OF second COMPARASION
    if(dat1.second>dat2.second){
        printf("The second of d1 is greater than second of d2**********************\n");
        return 1;
    }
    if(dat1.second<dat2.second){
        printf("The second of d1 is lower than second of d2**********************\n");
        return -1;
    }
    printf("***************THE FULLSTAM DATE IS SAME***************\n");
    return 0;
}
int main(){
    timeStam d1={30,10,15,   15,12,2015},d2={30,10,15,   15,12,2015};
    //THIS FUNCTION IS FOR DISPLAY TIME AND DATE 
    showFullTimeStam(d1);
    showFullTimeStam(d2);
    //THIS FUNCTION IS FOR COMPARASION BETWEEN TWO TWO TIMESTAM DATES
    int com=comparasion (d1,d2);
    printf("The comparasion between d1 and d2 is: %d\n\n", com);


    return 0;//////💖💖💖💖💖💖💖💖CONGRADULATION SANJAY....ALMOST DONE💖💖💖💖💖💖💖💖
};