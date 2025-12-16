/*
Title: String Uppercase Converter
Description: Program to transform a string into uppercase using toupper().
*/


void upper() {
    clrscr();

    char str[100];
    cout << "Enter a string: ";
    gets(str);   // read line 

    // Convert each character to uppercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);  // toupper converts char to uppercase
    }

    cout << "\nUppercase string: " << str;

    cout << "\n\nPress any key to exit...";
    getch();
}
