#include <iostream>
#include <fstream>
#include "InventoryItem.h"
using namespace std;

void addParts() {
    
};

//shows available commands
void outputHelpText() {
	// Output help text
	cout << "Supported commands: " << endl;
	cout << "     a    Add parts: increase the units value for an existing inventory item." << endl;
	cout << "     h    print Help text." << endl;
	cout << "     i    Input inventory data from a file." << endl;
	cout << "     n    create a New inventory Item." << endl;
	cout << "     o    Output inventory data to a file." << endl;
	cout << "     p    Print inventory list." << endl;
	cout << "     q    Quit (end the program)." << endl;
	cout << "     r    Remove parts: reduce the units value for an existing inventory item." << endl;
}

//inputs Inventory Data from file:



//Create a New Inventory Item:



//Output Inventory Data to File

void outputToFile(string& outputFileName, ofstream& outputFile) {
    
    cout << "Enter output filename:  ";
	getline(cin, outputFileName);
	outputFile.open(outputFileName);
	// Check for file open error.
	if (outputFile.fail())
	{
		cout << "(line " << __LINE__ << ") Error opening file:  " << outputFileName << endl;
	}


}


//Print Inventory Data to File:



//Print Inventory Data to Screen



//Remove Parts from Existing Inventory Item













//user confirming the exit
bool confirmYN(string promptText)
{
	string inputString;
	bool confirmationValue = false;
	bool inputIsOK = false;

	do
	{
		// input from user 
		cout << promptText;
		getline(cin, inputString);

		if (inputString == "y" || inputString == "Y")
		{
			confirmationValue = true;
			inputIsOK = true;
		}
		else if (inputString == "n" || inputString == "N")
		{
			confirmationValue = false;
			inputIsOK = true;
		}
		else
		{
			cout << "Invalid input:  " << inputString << ".  Please input y or n." << endl;
		}
	} while (inputIsOK == false);
	return confirmationValue;

} // (end function 'confirmYN')