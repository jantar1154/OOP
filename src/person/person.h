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

    virtual string get_name() const;
    virtual uint8_t get_age() const;

    virtual string to_string() const;
};

#endif // H_PERSON
