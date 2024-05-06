#include "admin.h"
#include <sstream>

Admin::Admin(string name, uint8_t age, size_t employee_id, Shelter *shelter)
: Person(name, age) {
    this->employee_id = employee_id;
    this->shelter = shelter;
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

string Admin::to_string() const {
    std::stringstream ss;
    ss << "ADMIN\n";
    ss << "Name: " << get_name() << '\n';
    ss << "Age: " << unsigned(get_age()) << '\n';
    ss << "Employee ID: " << get_employee_id();
    return ss.str();
}
