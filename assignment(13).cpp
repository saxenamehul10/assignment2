#include <iostream>

class Person {
protected:
    std::string name;
    int age;

public:
    void initializeData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void readData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void initializeData() {
        Person::initializeData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void readData() {
        Person::readData();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void initializeData() {
        Person::initializeData();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void readData() {
        Person::readData();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    std::cout << "Enter student details:" << std::endl;
    student.initializeData();

    std::cout << "Enter teacher details:" << std::endl;
    teacher.initializeData();

    std::cout << "\nStudent Details:" << std::endl;
    student.readData();

    std::cout << "\nTeacher Details:" << std::endl;
    teacher.readData();

    return 0;
}
