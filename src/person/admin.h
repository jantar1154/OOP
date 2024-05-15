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
    ~Admin();

    string get_name() const override;
    uint8_t get_age() const override;

    Employee* add_employee(Employee* employee);
    Employee* add_employee(string name, uint8_t age, size_t employee_id);

    Animal *add_animal(Animal *animal);
    Animal *add_animal(string name, uint8_t age);

    size_t get_employee_id() const;
    void adopt_animal(Animal *animal, Adopter *adopter);

    string to_string() const override;
};

#endif // H_ADNIN
