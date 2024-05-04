#ifndef H_ADOPTER
#define H_ADOPTER
#include <vector>

#include "person.h"
#include "../animal.h"

using std::vector;

class Adopter : public Person {
private:
    vector<Animal*> adopted_animals;

public:
    Adopter(string name, uint8_t age);
    const vector<Animal*> get_adopted_animals() const;
    void adopt_animal(Animal *animal);
};

#endif // H_ADOPTER
