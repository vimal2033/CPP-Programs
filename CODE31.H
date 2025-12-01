/*
 Title: Date Difference Calculator 
 Description: Calculates days between two input dates
*/


struct Date {
    int d, m, y;
};

// Check if year is leap year
int isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Days from Jan 1 to end of given month
int daysTill(int month) {
    int days = 0;
    switch(month) {
        case 12: days = 334; break;
        case 11: days = 304; break;
        case 10: days = 273; break;
        case 9:  days = 243; break;
        case 8:  days = 212; break;
        case 7:  days = 181; break;
        case 6:  days = 151; break;
        case 5:  days = 120; break;
        case 4:  days = 90;  break;
        case 3:  days = 59;  break;
        case 2:  days = 31;  break;
        case 1:  days = 0;   break;
    }
    return days;
}

// Calculate total days for both dates and return difference
int diff(Date d1, Date d2) {
    int dd1 = 0, dd2 = 0, y, yref;
    yref = (d1.y < d2.y) ? d1.y : d2.y;

    // Days for date 1
    for (y = yref; y < d1.y; y++)
        if (isLeap(y)) dd1++;
    if (isLeap(d1.y) && d1.m > 2) dd1++;
    dd1 += daysTill(d1.m) + d1.d + (d1.y - yref) * 365;

    // Days for date 2
    for (y = yref; y < d2.y; y++)
        if (isLeap(y)) dd2++;
    if (isLeap(d2.y) && d2.m > 2) dd2++;
    dd2 += daysTill(d2.m) + d2.d + (d2.y - yref) * 365;

    return abs(dd2 - dd1);
}

void DateDifference() {
    Date d1, d2;
    clrscr();

    cout << "DATE DIFFERENCE CALCULATOR\n\n";
    cout << "Enter first date  (DD MM YYYY): ";
    cin >> d1.d >> d1.m >> d1.y;
    cout << "Enter second date (DD MM YYYY): ";
    cin >> d2.d >> d2.m >> d2.y;

    cout << "\nDifference: " << diff(d1, d2) << " days" << endl;
    getch();
}


