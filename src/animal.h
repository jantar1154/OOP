#ifndef H_ANIMAL
#define H_ANIMAL

#include <string>
#include <stdint.h>

using std::string;

class Animal {
private:
    string name;
    uint8_t age;

public:
    Animal(string name, uint8_t age);
    string get_name() const;
    uint8_t get_age() const;
    string to_string() const;
};

#endif // H_ANIMAL
