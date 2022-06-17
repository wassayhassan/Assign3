#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;



void displayCourses();
void displayMenu();
void insertStudent(int course);

int sectionmax = 30;


int main() {
	int courseNumber, operation;
	

	do {
		displayMenu();
		
		cin >> operation;
		if (operation == 1) {
			displayCourses();
			cin >> courseNumber;

			insertStudent(courseNumber);
		}
		else if (operation == 2) {
			
		}
		else if (operation == 3) {

		}
		else if (operation == 4) {

		}
	} while (operation != 0);
	




	system("pause");
	return 0;
}
void displayMenu() {
	cout << "What do you want to do" << endl;
	cout << "1: Enroll a Student in a section" << endl;
	cout << "2: Remove a Student from a section" << endl;
	cout << "3: Update the record of Student in a section" << endl;
	cout << "4: Transfer a Student from one section to another" << endl;
	cout << "5: Identitfy those secitons which have capacity to enroll more students" << endl;
	cout << "6: Identitfy those sections which have no capacity" << endl;
	cout << "0: Exit" << endl;
}
void displayCourses() {
	cout << "In which course, student wants to enroll" << endl;
	cout << "1: Programming Fundamentals" << endl;
	cout << "2: Calculus" << endl;
	cout << "3: Digital Logic Design" << endl;
	cout << "4: Pakistan Studies" << endl;
}
void insertStudent(int course) {
	int sectotal, userroll, userage, currentroll, currentage;
	char username[50], currentname[50];
	if (course == 1) {
		ifstream pf("pf.txt");
		pf >> sectotal;
		if (sectotal >= sectionmax) {
			cout << "Entry cannot occur in this section. No space left" << endl;
			cout << "You can try in anotheer section" << endl;
		}
		else if (sectotal < sectionmax) {
			cout << "Enter the roll number of student" << endl;
			cin >> userroll;
			cin.ignore();
			cout << "Enter the name of student" << endl;
			cin.getline(username, 30);
			cout << "Enter the age of student" << endl;
			cin >> userage;
			ofstream temp("temp.txt", ios::app);
			temp << (sectotal + 1);
			if (sectotal > 0) {
				while (!pf.eof()) {
					pf >> currentroll;
					pf.ignore();
					pf.getline(currentname, 30, '@');
					pf.ignore();
					pf >> currentage;
					temp << endl << currentroll << "@" << currentname << "@" << currentage;

				}

			}


			pf.close();

			temp << endl << userroll << "@" << username << "@" << userage;
			temp.close();
			

			char removefilename[] = "pf.txt"; char renameoldfile[] = "temp.txt", renamenewfile[] = "pf.txt";
			int deleteresult = remove(removefilename);
			int renameresult = rename(renameoldfile, renamenewfile);



		}
	}
	else if (course == 2) {
		ifstream cal("cal.txt");
		
		cal >> sectotal;
		if (sectotal >= sectionmax) {
			cout << "Entry cannot occur in this section. No space left" << endl;
			cout << "You can try in anotheer section" << endl;
		}
		else if (sectotal < sectionmax) {
			cout << "Enter the roll number of student" << endl;
			cin >> userroll;
			cin.ignore();
			cout << "Enter the name of student" << endl;
			cin.getline(username, 30);
			cout << "Enter the age of student" << endl;
			cin >> userage;
			ofstream temp("temp.txt", ios::app);
			temp << (sectotal + 1);
			if (sectotal > 0) {
				while (!cal.eof()) {
					cal >> currentroll;
					cal.ignore();
					cal.getline(currentname, 30, '@');
					cal.ignore();
					cal >> currentage;
					temp << endl << currentroll << "@" << currentname << "@" << currentage;

				}

			}


			cal.close();

			temp << endl << userroll << "@" << username << "@" << userage;
			temp.close();


			char removefilename[] = "cal.txt"; char renameoldfile[] = "temp.txt", renamenewfile[] = "cal.txt";
			int deleteresult = remove(removefilename);
			int renameresult = rename(renameoldfile, renamenewfile);



		}
	}
	else if (course == 3) {
		ifstream dld("dld.txt");
		dld >> sectotal;
		if (sectotal >= sectionmax) {
			cout << "Entry cannot occur in this section. No space left" << endl;
			cout << "You can try in anotheer section" << endl;
		}
		else if (sectotal < sectionmax) {
			cout << "Enter the roll number of student" << endl;
			cin >> userroll;
			cin.ignore();
			cout << "Enter the name of student" << endl;
			cin.getline(username, 30);
			cout << "Enter the age of student" << endl;
			cin >> userage;
			ofstream temp("temp.txt", ios::app);
			temp << (sectotal + 1);
			if (sectotal > 0) {
				while (!dld.eof()) {
					dld >> currentroll;
					dld.ignore();
					dld.getline(currentname, 30, '@');
					dld.ignore();
					dld >> currentage;
					temp << endl << currentroll << "@" << currentname << "@" << currentage;

				}

			}


			dld.close();

			temp << endl << userroll << "@" << username << "@" << userage;
			temp.close();


			char removefilename[] = "dld.txt"; char renameoldfile[] = "temp.txt", renamenewfile[] = "dld.txt";
			int deleteresult = remove(removefilename);
			int renameresult = rename(renameoldfile, renamenewfile);



		}

	}
	else if (course == 4) {
		ifstream pak("pak.txt");
		pak >> sectotal;
		if (sectotal >= sectionmax) {
			cout << "Entry cannot occur in this section. No space left" << endl;
			cout << "You can try in anotheer section" << endl;
		}
		else if (sectotal < sectionmax) {
			cout << "Enter the roll number of student" << endl;
			cin >> userroll;
			cin.ignore();
			cout << "Enter the name of student" << endl;
			cin.getline(username, 30);
			cout << "Enter the age of student" << endl;
			cin >> userage;
			ofstream temp("temp.txt", ios::app);
			temp << (sectotal + 1);
			if (sectotal > 0) {
				while (!pak.eof()) {
					pak >> currentroll;
					pak.ignore();
					pak.getline(currentname, 30, '@');
					pak.ignore();
					pak >> currentage;
					temp << endl << currentroll << "@" << currentname << "@" << currentage;

				}

			}


			pak.close();

			temp << endl << userroll << "@" << username << "@" << userage;
			temp.close();


			char removefilename[] = "pak.txt"; char renameoldfile[] = "temp.txt", renamenewfile[] = "pak.txt";
			int deleteresult = remove(removefilename);
			int renameresult = rename(renameoldfile, renamenewfile);



		}
	}


}
