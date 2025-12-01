#include "FILES.H"

const int ITEMS_PER_PAGE = 15;

char *menu_items[] = {
	"Calculate Cube of (a + b) Using Whole Cube Formula",	// CODE01.H > WholeCube()
	"Calculate Area of a Triangle",							// CODE02.H > AreaTriangle()
	"Calculate Area of a Circle", 							// CODE03.H > AreaCircle()
	"Calculate Area of a Rectangle",						// CODE04.H > AreaRectangle()
	"Volume of Triangular Prism",							// CODE05.H > VolumePrism()
	"Volume of a Sphere",									// CODE06.H > VolumeSphere()
	"Volume of Cuboid", 									// CODE07.H > VolumeCuboid()
	"Temperature Converter",								// CODE08.H > TempConverter()
	"Simple Interest Calculator",							// CODE09.H > SimpleInterest()
	"Average of Five Subjects",								// CODE10.H > AverageFive()
	"Roots of Quadratic Equation",							// CODE11.H > QuadraticRoots()
	"Maclaurin Series for e^x, sin x, and cos x",			// CODE12.H > MaclaurinSeries()
	"Array (1D) find max min",								// CODE13.H > ArrMinMax()
	"Leap year",											// CODE14.H > LeapYear()
	"Greatest among three numbers",							// CODE15.H > GreatestThree()
	"Even and Odd number",									// CODE16.H > EvenOdd()
	"Prime number series upto N numbers",					// CODE17.H > PrimeSeries()
	"Voter eligiblity",										// CODE18.H > VoterEligible()
	"Find Birth from train seat number (L,U,M,SL,SU)",		// CODE19.H > GetTrainBirth()
	"Pelindrom number/character",							// CODE20.H > FindPalindrome()
	"Input marks find 1/2/3 division pass and fail",		// CODE21.H > FindStudentGrade()
	"Find how much old you are",							// CODE22.H > AgeCalculate()
	"Find min max among 3 number",							// CODE23.H > MinMax()
	"Add complex number using friend function",				// CODE24.H > FriendComplexAdd()
	"Function overloading",								 	// CODE25.H > FriendOverloading()
	"Check Neon Number",									// CODE26.H > CheckNeonNumber()
	"Factorial of a number using operator overloading",		// CODE27.H > FactorialOverloading()
	"Check for armstrong number",							// CODE28.H > Armstrong()
	"Sum of digit",											// CODE29.H > DigitSum()
	"Transform a string into uppercase",					// CODE30.H > upper()
	"Diffrence of two dates",								// CODE31.H > DateDifference()
	"Pramid pattern",										// CODE32.H > PyramidPattern()
	"Programm to sort numbers (Bubble sort)",				// CODE33.H > BubbleSort()
	"Programm to sort names",								// CODE34.H > SortNames()
	"Program of Matrix 2D array",							// CODE35.H > Matrix2D()
	"Sum of two matrix",
	"Programm of DMA 1D",
	"Programm of DMA 2D",
	"Friend class",
	"Friend function",
	"Operater overloading Unary operater",
	"Simple inharitance",
	"Multiple inharitance",
	"multilevel inharitance",
	"Hierarchical inharitance",
	"Hybrid inharitance",
	"Multipath inharitance",
	"Virtual function",


    // add your program titles here...
};
const int TOTAL_ITEMS = sizeof(menu_items)/sizeof(menu_items[0]);

void run_program(int index) {
    switch(index) {
	case 0: WholeCube();	break;
	case 1: AreaTriangle(); break;
	case 2: AreaCircle(); break;
	case 3: AreaRectangle(); break;
	case 4: VolumePrism(); break;
	case 5: VolumeSphere(); break;
	case 6: VolumeCuboid(); break;
	case 7: TempConverter(); break;
	case 8: SimpleInterest(); break;
	case 9: AverageFive(); break;
	case 10: QuadraticRoots(); break;
	case 11: MaclaurinSeries(); break;
	case 12: ArrMinMax(); break;
	case 13: LeapYear(); break;
	case 14: GreatestThree(); break;
	case 15: EvenOdd(); break;
	case 16: PrimeSeries(); break;
	case 17: VoterEligible(); break;
	case 18: GetTrainBirth(); break;
	case 19: FindPalindrome(); break;
	case 20: FindStudentGrade(); break;
	case 21: AgeCalculate(); break;
	case 22: MinMax(); break;
	case 23: FriendComplexAdd(); break;
	case 24: FriendOverloading(); break;
	case 25: CheckNeonNumber(); break;
	case 26: FactorialOverloading(); break;
	case 27: Armstrong(); break;
	case 28: DigitSum(); break;
	case 29: upper(); break;
	case 30: DateDifference(); break;
	case 31: PyramidPattern(); break;
	case 32: BubbleSort(); break;
	case 33: SortNames(); break;
	
	




	// ...Function name in the file
    }
}

void show_page(int page) {
    clrscr();
    int start = page * ITEMS_PER_PAGE;
    int end   = start + ITEMS_PER_PAGE;
    if(end > TOTAL_ITEMS) end = TOTAL_ITEMS;

    gotoxy(25,2); cout << "==== MAIN MENU ====";
    int y = 4;
    for(int i = start; i < end; ++i, ++y) {
	gotoxy(10,y);
	cout << (i+1) << ". " << menu_items[i];
    }
    gotoxy(10,22);
    cout << "Page " << (page+1) << "/" << ((TOTAL_ITEMS+ITEMS_PER_PAGE-1)/ITEMS_PER_PAGE);
    gotoxy(10,23);
    cout << "Enter item number, N-next, P-prev, 0-exit: ";
}

int main() {
    int page = 0;
    char choice[5];

    while(1) {
	show_page(page);
	cin >> choice;

	if(choice[0] == '0') break;
	else if(choice[0] == 'N' || choice[0] == 'n') {
	    if((page+1) * ITEMS_PER_PAGE < TOTAL_ITEMS) page++;
	} else if(choice[0] == 'P' || choice[0] == 'p') {
	    if(page > 0) page--;
	} else {
	    int num = atoi(choice);
	    int index = num - 1;
	    if(index >= 0 && index < TOTAL_ITEMS) {
		run_program(index);
	    } else {
		gotoxy(10,24); cout << "Invalid option!"; getch();
	    }
	}
    }
    return 0;
}
