/*
    Title: Volume of a Sphere
    Description: Calculates the volume of a sphere given the radius.
*/

void VolumeSphere() {
    clrscr();  // Clear the screen

    double radius, volume;
    const double pi = 3.14;  // Value of pi

    // Taking input from the user
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculating the volume of the sphere
    // Volume = (4/3) * pi * r^3
    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    // Displaying the calculated volume
    cout << "The volume of the sphere is: " << volume << endl;

    getch();  // Wait for user input before closing
}
