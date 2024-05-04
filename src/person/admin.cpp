#include "admin.h"


Admin::Admin(string name, uint8_t age, size_t employee_id, Shelter *shelter)
: Person(name, age) {
    this->employee_id = employee_id;
    this->shelter = shelter;
}

void Admin::add_employee(Employee *employee) {
    this->shelter->employees.push_back(employee);
}

void Admin::add_employee(string name, uint8_t age, size_t employee_id) {
    Employee *employee = new Employee(name, age, employee_id);
    add_employee(employee);
}
