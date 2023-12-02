
#include <string>
#include<iostream>

class Student
{
public:
	Student() 
	{
		StudYearB = 1900;
		StudName = "NO_Name";
		StudGroup = "NO_Group";
	};
	Student(int YearOfBirth, std::string Name, std::string Group)
	{
		StudYearB = YearOfBirth;
		StudName = Name;
		StudGroup = Group;
	};
	
	void SetYearOfBirth(int YearOfBirth)
	{
		StudYearB = YearOfBirth;
	}
	void SetName(std::string Name) 
	{
		StudName = Name;
	}
	void SetGroup(std::string Group)
	{
		StudGroup = Group;
	}

	int GetYearOfBirth() { return StudYearB; }
	std::string GetName() { return StudName; }
	std::string GetGroup() { return StudGroup; }

private:

	int StudYearB;
	std::string StudName;
	std::string StudGroup;



};

int* ViborYear(Student* Obj, int Year) 
{
	int* arr = new int[6]{NULL};
	int a = 0;
	for (int i = 0; i < 6; i++)
	{
		if (Year == Obj[i].GetYearOfBirth()) { arr[a] = i+1; a++; }
	}
	

	return arr;
}

int* ViborGroup(Student* Obj, std::string Group)
{
	int* arr = new int[6]{ NULL };
	int a = 0;
	for (int i = 0; i < 6; i++)
	{
		if (Group == Obj[i].GetGroup()) { arr[a] = i + 1; a++; }
	}


	return arr;
}






int main() 
{
	int Year[]{1999,2000,2001,2002,2003,2004};
	std::string Name[]{ "Petya", "Vasya", "Andrey", "Pukin", "Chupkin", "Nikolay" };
	std::string Group[]{ "fg142", "sd555", "sd555", "se222", "se555", "se541" };


	Student* St = new Student[6];
	for (int i = 0; i < 6; i++)
	{
		St[i].SetYearOfBirth(Year[i]);
		St[i].SetName(Name[i]);
		St[i].SetGroup(Group[i]);
	}
	
	int* arrYear = ViborYear(St, 1999);
	int a = 0;
	while (arrYear[a] !=NULL)
	{
		std::cout << St[arrYear[a]-1].GetName() << std::endl;
		a++;
	}

	arrYear = ViborGroup(St, "se222");
	a = 0;
	while (arrYear[a] != NULL)
	{
		std::cout << St[arrYear[a] - 1].GetName() << std::endl;
		a++;
	}



	delete[] arrYear;
}