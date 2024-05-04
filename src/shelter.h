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

    void add_animal(Animal *const animal);
    void add_animal(string name, uint8_t age);

public:
    Shelter(string name);
    ~Shelter();

    const vector<Animal*> get_animals() const;

    void add_admin(Admin* admin);
    void add_admin(string name, uint8_t age, size_t employee_id);
};

#endif //H_SHELTER
