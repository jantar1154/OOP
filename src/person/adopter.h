#ifndef H_ADOPTER
#define H_ADOPTER
#include <vector>

#include "person.h"
#include "../animal.h"

using std::vector;

class Adopter : public Person {
private:
    friend class Admin;
    vector<Animal*> adopted_animals;
    void adopt_animal(Animal *animal);

public:
    Adopter(string name, uint8_t age);
    virtual ~Adopter();
    const vector<Animal*> get_adopted_animals() const;

    string to_string() const;
};

#endif // H_ADOPTER
