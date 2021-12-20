// Emerson Racca
// 12/8/2021
// Final - What if Grades

//Grade Calculator : Your app will be used to calculate “what if” grades for students who constantly ask.
//The weights are fixed at 10 % for HW, 60 % for Exams, and 30 % for the Final.The formula is :
//
//Formula:  0.10(HW score) + 0.60(Exams Score) + 0.30(Final Score)
//Example : 0.10(92) + 0.60(74) + 0.30(90) = 80.6 = B
//
//Requirements : Write TWO(2) regular c - type functions :
//A.One that takes in 3 integer arguments and returns a weighted average.
//B.One that takes in a weighted average and returns a letter grade A - F.
//
//In the main, write a nice UI allowing the user to type their HW score, Exams Score, and Final Score.
//These values will be integers from 0 - 100.  Show the user what the weighted average is AND the letter grade.  
//(Letter grades are based on the straight scale... 90 - 100 = A, 80 - 89.99 = B and so on.)
//
//Implement a run again loop and test thoroughly.Make sure your functions are separated and turn in a single source file to Canvas.

#include<iostream>
using namespace std;

double average(int h, int e, int f);
char letterGrade(double g);

int main(void) {
	int hw, exams, final;
	double avg;
	char goAgain = 'y';

	cout << "'What if' Grade Calculator" << endl;
	cout << "This app computes a weighted average and assigns a letter grade." << endl;

	do {
		cout << "\n\nPlease enter integer grades for the following: " << endl << endl;
		cout << "Homework (10%): ";
		cin >> hw;
		cout << "   Exams (60%): ";
			cin >> exams;
		cout << "   Final (30%): ";
		cin >> final;

		avg = average(hw, exams, final);

		cout << "\nThe average score is: " << avg ;
		cout << "\nThe letter grade is:  " << letterGrade(avg) << endl;

		cout << "\n\nWould you like to go again (y or n)? ";
		cin >> goAgain;
	} while (goAgain == 'y');

	return 0;
}

//average function
double average(int h, int e, int f) {
	return (0.10 * h + 0.60 * e + 0.30 * f);
}

//letter grade function
char letterGrade(double g) {
	if (g < 60.0)
		return 'F';
	else if (g < 70.0)
		return 'D';
	else if (g < 80.0)
		return 'C';
	else if (g < 90.0)
		return 'B';
	else
		return 'A';
}
