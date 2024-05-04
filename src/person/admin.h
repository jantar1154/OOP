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

    void add_employee(Employee* employee);
    void add_employee(string name, uint8_t age, size_t employee_id);
};

#endif // H_ADNIN
