/*
    Title: Array (1D) find max min
    Description: This program takes an array of integers as input,
                 finds the maximum and minimum values in the array,
                 and displays them.
*/

void ArrMinMax() {
    clrscr();
    int n, i;  // Declare i once here

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements:\n";
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int minVal = arr[0];

    for (i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum element: " << maxVal << "\n";
    cout << "Minimum element: " << minVal << "\n";

    getch();
}
