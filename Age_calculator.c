#include<stdio.h>

struct day {
    int date;
    int month;
    int year;
};
/*For calculation*/
void calculation(struct day C_date, struct day B_date) {
    int year = C_date.year - B_date.year - 1;
    int month;
    if (B_date.month>C_date.month) {
        month = (11 - B_date.month) + C_date.month;
    }else if (B_date.month == C_date.month) {
        month = (11 - B_date.month) + C_date.month;
    }
     else {
        month= (12 - C_date.month) + B_date.month;
    }
    
    int day_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day;
    day = day_month[C_date.month-1]-C_date.date;
    day = day + B_date.date-2;
    if (day > 30) {
        day= day - 30;
    }
    printf("Age: %d years, %d months, %d days", year, month, day);
}

int main() {
    struct day C_date, B_date;
    /*for input*/
    printf("Enter current date: (DD MM YY)");
    scanf("%d %d %d", &C_date.date, &C_date.month, &C_date.year);
    printf("Enter your Birthday: (DD MM YY)");
    scanf("%d %d %d", &B_date.date, &B_date.month, &B_date.year);
    
    calculation(C_date, B_date);
    return 0;
}