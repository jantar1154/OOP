#include <iostream>
#include "shelter.h"

using std::cout;
using std::endl;

int main() {
    Shelter *sh01 = new Shelter("Utulek super 3000+");
    Admin *k = sh01->add_admin("Karel Adminak", 22, 0xA00001);
    Employee *p = k->add_employee("Pablo", 65, 0xE00001);

    cout << k->to_string() << endl;

    cout << p->to_string() << endl;

    delete sh01;
    return 0;
}
