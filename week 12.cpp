#include "stdafx.h"
#include "string.h"
#include "stdlib.h"

struct date
{
	int day, month, year;
};

struct student
{
	char firstName[50];
	char surname[50];
	int ID;
	struct date DOB;
};


int addStudent(struct student students[], int numStudents);
void printStudents(struct student students[], int numStudents);
void sortByID(struct student students[], int numStudents, int count);
void sortBySurname(struct student students[], int numStudents);

int main()
{

	struct student students[100] = { { "Rolando","Gamble", 17560001,{ 1,1,2000 } },{ "Kyra","Eaton", 17973061,{ 11,10,2016 } },{ "Chandler","Humphrey", 17427400,{ 6,12,1999 } },{ "Makayla","Huang", 17127058,{ 2,2,2000 } },{ "Jazmyn","Terrell", 17746780,{ 29,6,2000 } },{ "Erica","Glass", 17058753,{ 13,8,2000 } },{ "Alyvia","Blair", 17599020,{ 11,9,2000 } },{ "Talia","Chen", 17619205,{ 17,10,2000 } },{ "Rebekah","Hopkins", 17912255,{ 25,11,2000 } },{ "Jocelynn","Ware", 17899236,{ 27,4,1999 } } };

	int numStudents = 10;

	// use addStudent to add a new student and it returns the updated number of students
	// obviously, numStudents is the number of structures in the array (students[]) that contain data
	numStudents = addStudent(students, numStudents);

	// sort by ID number and print out list
	sortByID;
	printf("\n\n%d Students, Sorted by ID: \n", numStudents);
	printStudents(students, numStudents);

	// sort by surname and print out list
	sortBySurname(students, numStudents);
	printf("\n\n%d Students, Sorted by Surname: \n", numStudents);
	printStudents(students, numStudents);

	return 0;
}

int addStudent(struct student students[], int numStudents)
{
	char first[50], last[50];
	int id, dd, mm, yyyy;

	printf("what is your name ?\n");
	scanf_s("%c", &first);

	printf("what is your last name\n");
	scanf_s("%c", &last);


	printf("what is your date of birth ?\n");
	scanf_s("%d %d %d",&dd,mm,yyyy);

	printf("what is your student id ?\n");
	scanf_s("%d", &id);

	// Ask user for data for new student and add to the array of students
	// your code here

	return numStudents;
}

void printStudents(struct student students[], int numStudents)
{
	int i;

	printf("%20s%20s%15s\t\t%10s\n", "First Name", "Surname", "ID Number", "DOB");
	// write a for loop to print out each student structure
	// your code here
	
}

void sortByID(struct student students[], int numStudents,int count)
{
	struct student temp;
	int i, j;


	for (count = 0; count < numStudents; count++)
	{
		
		for (i = 0; i < numStudents - 1; i++)
		{
			
			if (students[i].ID > students[i + 1].ID)
			{
				temp = students[i];
				students [i] = students[i + 1];
				students[i + 1] = temp;
			}
		}
	}
}
void sortBySurname(struct student students[], int numStudents)
{
	struct student temp;
	int i, j;
	for (j = 1; j < numStudents; ++j)
	{
		for (i = 0 ; i < numStudents; ++i)
		{
			if (students[j].surname > students[i].surname)
			{
				temp = students[j];
				students[j] = students[i];
				students[i] = temp;
					// use the Bubble sort algorithm to sort the students by Surname
					// your code here
			}
		}

	}
}