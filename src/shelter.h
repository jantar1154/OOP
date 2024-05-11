#ifndef H_SHELTER
#define H_SHELTER
#include <vector>

#include "animal.h"
#include "person/adopter.h"
#include "person/employee.h"
#include "person/admin.h"
#include "inventory_item.h"

class Admin;

using std::vector;

class Shelter {
private:
    friend class Admin;
    string name;
    vector<Animal*> animals;
    vector<Employee*> employees;
    vector<Admin*> admins;
    vector<InventoryItem*> inventory;

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

    InventoryItem* add_to_inventory(InventoryItem* item);
    InventoryItem* add_to_inventory(string name, float price);
    const vector<InventoryItem*> get_inventory() const;
};

#endif //H_SHELTER
