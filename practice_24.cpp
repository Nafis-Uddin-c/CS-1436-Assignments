// /* pseudocode
// 1) declare the function prototype
// 2) inside the main function prompt the user to enter length and width
// 3) take input and call Rectangle() function. Inside that function calculate
//     area = length * width
//     perimeter = 2*(length + width)
// 4) call the displayData() and inside of that function print length, width, area, and perimeter

// */

// #include <iostream>
// #include <iomanip>
// using namespace std;

// void Rectangle(double length, double width, double &area, double &perimeter);
// void displayData(double length, double width, double area, double perimeter);
// int main()
// {
//     double len, wid, area = 0, perimeter = 0;
//     cout << "Enter Length and width of a rectangle: ";
//     cin >> len >> wid;

//     Rectangle(len, wid, area, perimeter);
//     displayData(len, wid, area, perimeter);
// }

// void Rectangle(double length, double width, double &area, double &perimeter)
// {
//     area = length * width;
//     perimeter = 2*(length + width);
// }
// void displayData(double length, double width, double area, double perimeter)
// {
//     cout<<"The length is : "<<length<<endl;
//     cout<<"The width is : "<<width<<endl;
//     cout<<"The area is : "<<area<<endl;
//     cout<<"The perimeter is : "<<perimeter<<endl;
// }

// /*
// Enter Length and width of a rectangle: 20 10
// The length is : 20
// The width is : 10
// The area is : 200
// The perimeter is : 60
// */




#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10; // Array size
	int numbers[ARRAY_SIZE];   // Array with 10 elements
	int count = 0;             // Loop counter variable
	ifstream inputFile;        // Input file stream object

	// Open the file.
	inputFile.open("TenNumbers.txt");

	// Read the numbers from the file into the array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
       count++;
    cout << "The number of values in the array is " << count << endl;
	// Close the file.
	inputFile.close();

	// Display the numbers read:
	cout << "The numbers are: \n";
	for (count = 0; count < ARRAY_SIZE; count++)
    cout  << count << " "<< numbers[count]  << endl;
	cout << endl;
	return 0;
}