/*
Write a program that defines a base class called Person. The class has the following
members:
– A data member of type std::string called the name
–
– A single-parameter, user-defined constructor which initializes the name
–
– A getter function of type std::string called getname(), which returns the
–
name’s value
Then, write a class called Student, which inherits from the class Person. The class
Student has the following members:
– An integer data member called the semester
–
– A user-provided constructor that initializes the name and semester fields
–
– A getter function of type int called getsemester(), which returns the
–
semester’s value
In a nutshell, we have a base class Person, and we extend its functionality in the
derived Student class:
*/

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;

public:
    explicit Person(const std::string &aname) : name{aname} {}
    std::string getname() const { return name; }
};

class Student : public Person
{
private:
    int semester;

public:
    Student(const std::string &aname, int sem) : Person::Person{aname}, semester{sem} {}
    int getsemester() const { return semester; }
};
int main()
{
    Person person{"John Doe."};
    std::cout << person.getname() << '\n';
    Student student{"Jane Doe.", 2};
    std::cout << student.getname() << '\n';
    std::cout << "The semester is: " << student.getsemester() << '\n';
}