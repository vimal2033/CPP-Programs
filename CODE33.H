/*
 Title: Bubble Sort Program 
 Description: Sorts numbers using bubble sort algorithm
*/


void BubbleSort() {
    int arr[100], n, i, j, temp;
    clrscr();

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for(i = 0; i < n; i++)
        cin >> arr[i];

    // Bubble sort - compare adjacent elements
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";

    getch();
}
