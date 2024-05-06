#ifndef H_EMPLOYEE
#define H_EMPLOYEE

#include "person.h"
#include "../animal.h"

#include <vector>

using std::vector;

class Employee : public Person {
private:
    size_t employee_id;
    vector<Animal*> animals;

public:
    Employee(string name, uint8_t age, size_t employee_id);
    size_t get_employee_id() const;

    void add_animal(Animal* animal);

    const vector<Animal*> get_animals() const;

    string to_string() const;
};

#endif // H_EMPLOYEE
