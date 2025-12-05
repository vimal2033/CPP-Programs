/*
TITLE: Find Day from Date of Birth
DESCRIPTION: Calculates day of week from birth date using Zeller's Congruence formula. 
User enters DOB (DD MM YYYY), program computes and displays day (Sunday-Saturday). 
Handles dates from 1900 onwards accurately.
*/

int zellerCongruence(int day, int month, int year) {
    // Zeller's Congruence: h = (q + floor((13(m+1))/5) + K + floor(K/4) + floor(J/4) - 2J) mod 7
    int q = day;           // Day of month
    int m = month;         // Month (3=March, 4=April, ..., 12=Dec, 1=Jan, 2=Feb as 13,14 of prev year)
    
    int K, J;
    if(month <= 2) {       // Jan/Feb treated as 13/14 of previous year
        m += 12;
        year--;
    }
    K = year % 100;        // Year of century
    J = year / 100;        // Century
    
    int h = (q + ((13*(m+1))/5) + K + (K/4) + (J/4) + 5*J) % 7;
    return h;
}

char* getDayName(int h) {
    char* days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[h];
}

void BirthDay() {
    clrscr();
    
    int day, month, year;
    cout<<"Enter Date of Birth (DD MM YYYY): ";
    cin>>day>>month>>year;
    
    int dayCode = zellerCongruence(day, month, year);
    char* dayName = getDayName(dayCode);
    
    cout<<"\nDate: "<<day<<"/"<<month<<"/"<<year<<endl;
    cout<<"Day: "<<dayName<<endl;
    
    getch();
}
