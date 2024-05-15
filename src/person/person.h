#ifndef H_PERSON
#define H_PERSON

#include <stdint.h>
#include <string>

using std::string;

class Person {
protected:
    Person(string name, uint8_t age);
    string name;
    uint8_t age;

public:
    virtual ~Person() = default;
    virtual string get_name() const = 0;
    virtual uint8_t get_age() const = 0;

    virtual string to_string() const = 0;
};

#endif // H_PERSON
