/*
    Title: Volume of Cuboid
    Description: Calculates volume using length, width, and height inputs.
*/

void VolumeCuboid() {
    clrscr();  // Clear the screen

    double length, width, height, volume;

    // Taking input from user
    cout << "Enter the length of the cuboid: ";
    cin >> length;

    cout << "Enter the width of the cuboid: ";
    cin >> width;

    cout << "Enter the height of the cuboid: ";
    cin >> height;

    // Calculating the volume of the cuboid
    // Volume = length * width * height
    volume = length * width * height;

    // Displaying the calculated volume
    cout << "The volume of the cuboid is: " << volume << endl;

    getch();  // Wait for user input before closing
}
