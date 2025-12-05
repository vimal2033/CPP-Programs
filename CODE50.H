/*
TITLE: Decimal to Binary Conversion
DESCRIPTION: Converts decimal number to binary using recursive division by 2 method. 
Extracts remainders (0/1) from right to left, stores in array, then prints reversed.
*/


void decimalToBinary(int decimal) {
    int binary[16];  // Max 16 bits for int
    int i = 0;
    
    // Extract remainders by repeated division
    if(decimal == 0) {
        cout<<"0";
        return;
    }
    
    while(decimal > 0) {
        binary[i] = decimal % 2;  // Remainder (0 or 1)
        decimal = decimal / 2;    // Divide by 2
        i++;
    }
    
    // Print binary in reverse order
    cout<<"Binary: ";
    for(int j = i-1; j >= 0; j--) {
        cout<<binary[j];
    }
    cout<<endl;
}

void DecimalBinary() {
    clrscr();
    
    int num;
    cout<<"Enter decimal number: ";
    cin>>num;
    
    cout<<"Decimal: "<<num<<endl;
    decimalToBinary(num);
    
    getch();
}
