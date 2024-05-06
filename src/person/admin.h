#ifndef H_ADMIN
#define H_ADMIN

#include "person.h"
#include "../shelter.h"

class Shelter;

class Admin : public Person {
private:
    size_t employee_id;
    Shelter* shelter;

public:
    Admin(string name, uint8_t age, size_t employee_id, Shelter *shelter);
    size_t get_employee_id() const;

    Employee* add_employee(Employee* employee);
    Employee* add_employee(string name, uint8_t age, size_t employee_id);

    string to_string() const;
};

#endif // H_ADNIN
