#include <stdio.h>
#include <stdlib.h>

typedef enum {  monday, tuesday, wednesday, thursday,
                friday, saturday, sunday
             }
day_t;

const char *print_day(day_t day);

int main()
{
    day_t today, tomorrow;

    //printf("Type in a number between 0-6>\n");
    for(today=tuesday; today<=sunday; today++){

    if(today == sunday)
        tomorrow = monday;
    else
        tomorrow = (day_t)(today +1);

    printf("Today is %s and tomorrow is %s\n", print_day(today),print_day(tomorrow));
    }
    return 0;
}

const char *print_day(day_t day)
{
    switch(day)
    {
    case monday:
        return "Monday";
        break;
    case tuesday:
        return "Tuesday";
        break;
    case wednesday:
        return "Wednesday";
        break;
    case thursday:
        return "Thursday";
        break;
    case friday:
        return "Friday";
        break;
    case saturday:
        return "Saturday";
        break;
    case sunday:
        return "Sunday";
        break;
    }
}


/*

typedef enum {monday, tuesday, wednesday, thursday,
              friday, saturday, sunday
             }
day_t;

void print_day(day_t day);
const char * print_day1(day_t day);

int main()
{
    day_t tomorrow, today;

    for(scanf("%d", &today); today<=sunday; today++)
    {

        if (today == sunday)
            tomorrow = monday;
        else
            tomorrow = (day_t)(today + 1);

        printf("Today is: ");
        print_day(today);
        printf(" and tomorrow is: ");
        print_day(tomorrow);
        printf("\n");
        printf("Today is: %s and tomorrow is: %s \n", print_day1(today), print_day1(tomorrow) );
    }
    return 0;
}

void print_day(day_t day)
{
    switch(day)
    {
    case monday:
        printf("Monday");
        break;
    case tuesday:
        printf("Tuesday");
        break;
    case wednesday:
        printf("Wednesday");
        break;
    case thursday:
        printf("Thursday");
        break;
    case friday:
        printf("Friday");
        break;
    case saturday:
        printf("Saturday");
        break;
    case sunday:
        printf("Sunday");
        break;
    }

}
const char * print_day1(day_t day)
{
    switch(day)
    {
    case monday:
        return "Monday";
        break;
    case tuesday:
        return "Tuesday";
        break;
    case wednesday:
        return "Wednesday";
        break;
    case thursday:
        return "Thursday";
        break;
    case friday:
        return "Friday";
        break;
    case saturday:
        return "Saturday";
        break;
    case sunday:
        return "Sunday";
        break;
    }

}

*/
