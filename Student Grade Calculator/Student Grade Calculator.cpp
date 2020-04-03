/*Mike Jasiczek; Into to Programming; 5/18/2019;  Week 3 Programming Assignment; 

This is a mean grade calculator.  You ask it for the number of students, then the nuber of grades to enter and then 
you input those grades seperated by spaces.  It then loops through and creates, and then outputs a mean score for all those grades.
it then moves onto the next student. 

This was a bit harder than I thought it was.  I really had to think through the loop process.  One of the areas that I messed up on 
was I created a situation in which my program wuld never enter the loop.  I set breakpoints and stepped into the code and when step by step and 
realized that I was a potato and the condition that I set was never entering the loop. So that was frustrating. Then I created another variable that
counted up, otherwise it counted down students.  It would start with please enter Student ho 4 then 3 and so on.  So I created student
and set it to 1 and counted up.  */

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip> //Allows to set precision in a double
#include <cmath> // Math library
using namespace std;

int main()
{
	int classNum = 0, student = 0, i = 0, j = 0;
	double grade = 0, total = 0, average = 0;
	
	cout << "This is a Student Grade Calculator.\n\n\n";
		cout << "---------------------------------------------------\n\n\n";
	cout << endl << "How many students do you have to enter? " << endl << endl; //Input for the number of students to enter
	cin >> student;
	cout << "--------------------------------------------------------------\n\n";
	while (student < 1 || student > 100) { //Exception handling the number of students.  1-100
		cout << "Please enter a number between one and a one hundred." << endl << endl;
		cout << "Please reenter the number of students: " << endl << endl;
		cin >> student;
		cout << "--------------------------------------------------------------\n\n";
	}
	j = student; //Countdown Variable
	student = 1; //Student Number Variable
	for (j; j > 0; --j) { //Loop throught the number of students to get the grades and calculate the average
		char name[100];
		cout << "Enter the students last Name and first initial with no spaces between them. \n\n"; 
		cin >> name; 
		
		cout << "How many grades do you have to enter for " << name << "?\n\n" << endl; //Get grades for student n
		cin >> classNum;
		cout << "--------------------------------------------------------------\n\n";
		while (classNum < 1 || classNum > 100) { //Exception Handeling
			cout << "Please enter a number between one and a one hundred." << endl;
			cout << "Please reenter the number of grades to enter: " << endl;
			cin >> classNum;
			cout << "--------------------------------------------------------------\n\n";
		}
		cout << "Enter the grades each seperated by a space: " << endl << endl;
		i = classNum; //Get grades
		//cout << "--------------------------------------------------------------\n\n";


		for (i; i > 0; --i) { //Loop through the grades and calculate the average
			cin >> grade;
			while (grade < 0 || grade > 100) {
				cout << "Please re-enter ALL grades seperated by spaces." << endl;
				cout << "Be sure that the grades are between 1 and 100." << endl;
				i = classNum;
				cin >> grade;
				total = 0;
				
			}
			total = total + grade; //Calculate Grade
		}
		cout << "--------------------------------------------------------------\n\n";
		cout << name << "'s" << " average grade is " << (total / classNum) << setprecision(2) << fixed << endl << endl; //Output the average score for student
		cout << "----------------------------------------------------------------\n\n\n";
		
		student++; //Go to the Next Student
		total = 0; //Reset total variable to 0
	}
	return 0; 
}

