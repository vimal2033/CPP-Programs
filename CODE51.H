/*
TITLE: Nelson Number Check
DESCRIPTION: Checks if a number is Nelson number (111,222,333,...,999). 
A Nelson number has all identical digits from 1-9 (no zero). 
Valid examples: 111, 222, 555, 999.
*/


int isNelsonNumber(int num) {
    int firstDigit = num % 10;  // Get first digit
    int temp = num;
    
    // Check all digits are same and non-zero
    while(temp > 0) {
        int digit = temp % 10;
        if(digit == 0 || digit != firstDigit) {
            return 0;  // Not Nelson number
        }
        temp = temp / 10;
    }
    return 1;  // Nelson number
}

void Nelson() {
    clrscr();
    
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    if(isNelsonNumber(num)) {
        cout<<num<<" is a NELSON NUMBER"<<endl;
    }
    else {
        cout<<num<<" is NOT a Nelson number"<<endl;
    }
    
    getch();
}
