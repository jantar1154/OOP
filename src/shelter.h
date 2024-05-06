#ifndef H_SHELTER
#define H_SHELTER
#include <vector>

#include "animal.h"
#include "person/adopter.h"
#include "person/employee.h"
#include "person/admin.h"

class Admin;

using std::vector;

class Shelter {
private:
    friend class Admin;
    string name;
    vector<Animal*> animals;
    vector<Employee*> employees;
    vector<Admin*> admins;

    void adopt_animal(Adopter *adopter, Animal *animal);

    Animal *add_animal(Animal *const animal);
    Animal *add_animal(string name, uint8_t age);

    void remove_animal(Animal *animal);

public:
    Shelter(string name);
    ~Shelter();

    vector<Animal*> get_animals();

    Admin* add_admin(string name, uint8_t age, size_t employee_id);

    const vector<Admin*> get_admins() const;
    const vector<Employee*> get_employees() const;
};

#endif //H_SHELTER
