#include "admin.h"
#include <sstream>

Admin::Admin(string name, uint8_t age, size_t employee_id, Shelter *shelter)
: Person(name, age) {
    this->employee_id = employee_id;
    this->shelter = shelter;
}
Admin::~Admin() {}

string Admin::get_name() const {
    return this->name;
}

uint8_t Admin::get_age() const {
    return this->age;
}

size_t Admin::get_employee_id() const {
    return this->employee_id;
}

Employee* Admin::add_employee(Employee *employee) {
    this->shelter->employees.push_back(employee);
    return employee;
}

Employee* Admin::add_employee(string name, uint8_t age, size_t employee_id) {
    Employee *employee = new Employee(name, age, employee_id);
    add_employee(employee);
    return employee;
}

Animal *Admin::add_animal(Animal *animal) {
    shelter->add_animal(animal);
    return animal;
}

Animal *Admin::add_animal(string name, uint8_t age) {
    Animal *animal = shelter->add_animal(name, age);
    return animal;
}

int Admin::adopt_animal(Animal *animal, Adopter *adopter) {
    if (0 != adopter->adopt_animal(animal)) return 1;
    if (0 != this->shelter->remove_animal(animal)) return 1;
    return 0;
}

string Admin::to_string() const {
    std::stringstream ss;
    ss << "ADMIN\n";
    ss << "Name: " << get_name() << '\n';
    ss << "Age: " << unsigned(get_age()) << '\n';
    ss << "Employee ID: " << get_employee_id();
    return ss.str();
}
