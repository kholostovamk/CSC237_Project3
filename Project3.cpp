#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "InventoryItem.cpp"

using namespace std;

void outputHelpText();
void outputToFile(string& outputFileName, ofstream& outputFile);
bool confirmYN(string);

int main()
{
	// Local variables for 'main' function:	
	string command;			//	command string, input by user
	ifstream inputFile;
	ofstream outputFile;
	string inputFileName;
	string outputFileName;
	cout << fixed << setprecision(2);


	double calculatedResult = 0;     // The latest result of calculations.
	bool keepRunning = true;         // flag to control exit from program.


	while (keepRunning == true) {
		// Prompt for command input.
		cout << "\nCommand: ";
		getline(cin, command);

		if (command == "") {
			// ignore empty command
		}
		else if (command == "a" || command == "add") {
			
		}
		else if (command == "h" || command == "help") {
			outputHelpText();
		}
		else if (command == "i" || command == "input") {
			
		}
		else if (command == "n" || command == "new") {
			
		}
		else if (command == "o" || command == "output") {
			outputToFile(outputFileName, outputFile);
		}
		else if (command == "p" || command == "print") {
			
		}
		else if (command == "q" || command == "quit") {
			// If user confirms, set flag to exit program
			keepRunning = !confirmYN("Are you sure that you want to exit the program? ");
		}
		else if (command == "r" || command == "remove")
		{
			
		}
		else {
			cout << "Invalid command:  " << command << endl;
		}

	}  // (end 'while')

	cout << "Exit the program." << endl;
	return 0;
}  // (end 'main')





