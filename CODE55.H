/*
TITLE: User Defined String Functions
DESCRIPTION: Implements strlen(), strcpy(), strcat(), strcmp() without library functions. 
Tests all functions with sample strings showing length, copy, concatenate, compare results.
*/


int myStrlen(char str[]) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}

void myStrcpy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void myStrcat(char dest[], char src[]) {
    int i = 0;
    while(dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while(src[j] != '\0') {
        dest[i+j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
}

int myStrcmp(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    if(str1[i] != str2[i]) {
        return str1[i] - str2[i];
    }
    return 0;
}

void StringFunction() {
    clrscr();
    
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50], str4[50];
    
    // 1. strlen test
    cout<<"1. strlen:\n";
    cout<<"Length of '"<<str1<<"': "<<myStrlen(str1)<<endl;
    cout<<"Length of '"<<str2<<"': "<<myStrlen(str2)<<endl<<endl;
    
    // 2. strcpy test
    cout<<"2. strcpy:\n";
    myStrcpy(str3, str1);
    cout<<"Copied '"<<str1<<"' to str3: '"<<str3<<"'"<<endl<<endl;
    
    // 3. strcat test
    cout<<"3. strcat:\n";
    myStrcpy(str4, str1);
    myStrcat(str4, str2);
    cout<<"'"<<str1<<"' + '"<<str2<<"' = '"<<str4<<"'"<<endl<<endl;
    
    // 4. strcmp test
    cout<<"4. strcmp:\n";
    cout<<"strcmp('Hello','Hello') = "<<myStrcmp(str1,str1)<<endl;
    cout<<"strcmp('Hello','World') = "<<myStrcmp(str1,str2)<<endl;
    cout<<"strcmp('abc','abd') = "<<myStrcmp("abc","abd")<<endl;
    
    getch();
}
