#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void outputHelpText();
bool confirmYN(string);

int main()
{
	// Local variables for 'main' function:	
	string command;			//	command string, input by user
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
			outputHelpText();;
		}
		else if (command == "i" || command == "input") {
			
		}
		else if (command == "n" || command == "new") {
			
		}
		else if (command == "o" || command == "output") {
			
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

/*____________________________________________________________________
 * Function:       outputHelpText
 * Description:    Displays a list of commands that
 *                 this program supports.
 */
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

/*____________________________________________________________________
 *	Function:	 confirmYN  -	Ask user to confirm
 *  Inputs:      prompt string for user
 *  Outputs:     returns true or false.
 *  Desciption:  Ask the user to confirm their intention.
 *               Check response for 'y' or 'n', and repeat
 *               the question until the user replies correctly.
 */
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

