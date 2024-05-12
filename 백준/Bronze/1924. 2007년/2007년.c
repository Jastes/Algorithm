#include <stdio.h>

int main() {
    int month, day, date = 0;
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
    scanf("%d %d", &month, &day);

    for (int i = 0; i < month - 1; i++)
        date += daysInMonth[i];
    date += day;

    int dayOfWeek = date % 7;


    switch (dayOfWeek) {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
}