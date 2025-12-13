/*
Title: Train Berth Finder 
Description: Program using TrainBerth class to identify berth type (L, M, U, SL, SU) from Indian Railways seat numbers.
*/


class TrainBerth
{
private:
    int seatNumber;  // Private data member

public:
    // Constructor to initialize seat number
    TrainBerth(int seat)
    {
        seatNumber = seat;
    }

    // Member function to find berth type
    char* getBerthType()
    {
        char* result = new char[20];  // Dynamic char array for return

        // Check valid seat range (1-72 for standard coaches)
        if(seatNumber < 1 || seatNumber > 72)
        {
            strcpy(result, "Invalid seat number");
            return result;
        }

        // Calculate remainder (modulo 8 pattern)
        int rem = seatNumber % 8;

        // Map remainder to berth type
        if(rem == 1 || rem == 4)
            strcpy(result, "L (Lower Berth)");
        else if(rem == 2 || rem == 5)
            strcpy(result, "M (Middle Berth)");
        else if(rem == 3 || rem == 6)
            strcpy(result, "U (Upper Berth)");
        else if(rem == 7)
            strcpy(result, "SL (Side Lower Berth)");
        else  // rem == 0
            strcpy(result, "SU (Side Upper Berth)");

        return result;
    }

    // Getter for seat number
    int getSeatNumber()
    {
        return seatNumber;
    }
};

void GetTrainBirth()
{
    clrscr();  // Clear screen (Turbo C++ function)
    int seat;

    cout<<"Enter train seat number (1-72): ";
    cin>>seat;

    // Create object and get result
    TrainBerth berth(seat);
    char* berthType = berth.getBerthType();

    // Display result
    cout<<"\nSeat "<<berth.getSeatNumber()<<": "<<berthType<<endl;
    cout<<"\nPress any key to exit...";
    getch();  // Wait for key press (Turbo C++ function)
}
