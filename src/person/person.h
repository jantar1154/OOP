#ifndef H_PERSON
#define H_PERSON

#include <stdint.h>
#include <string>

using std::string;

class Person {
private:
    string name;
    uint8_t age;

public:
    Person(string name, uint8_t age);
    string get_name() const;
    uint8_t get_age() const;

    string to_string() const;
};

#endif // H_PERSON
