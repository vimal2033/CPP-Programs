/*
 Title: Sort Names Program
 Description: Sorts 5 names alphabetically
*/


void SortNames() {
    char names[5][20] = {"Zara", "Mona", "Ravi", "Alice", "Bob"};
    int i, j;
    char temp[20];

    clrscr();

    // Bubble sort names
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for(i = 0; i < 5; i++)
        puts(names[i]);

    getch();
}
