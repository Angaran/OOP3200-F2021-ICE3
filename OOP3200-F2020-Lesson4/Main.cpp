
#include <iostream>
#include <vector>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    Person person = Person("Bob", "Smith", 25.6f);
	person.SaysHello();

	std::cout << person.ToString() << std::endl;

	Student student = Student("Mike", "Jones", 22.0f, "MJ123456789");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;


	Professor professor = Professor("Tom", "Tsiliopoulos", 35.0f, "TS123456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;

	std::vector<Person*> people;

	people.push_back(new Professor("Alvaro", "Quevedo", 32.0f, "AQ123456789"));

	people[0]->SaysHello();

	std::cout << people[0]->ToString() << std::endl;


	people.push_back(new Student("Nick", "Smythe", 20.0f,"NS123456789"));

	people[0]->SaysHello();

	std::cout << people[1]->ToString() << std::endl;
}

