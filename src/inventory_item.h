#ifndef H_INVENTORY_ITEM
#define H_INVENTORY_ITEM

#include <string>

using std::string;

class InventoryItem {
private:
    string name;
    float price;

public:
    InventoryItem(string name, float price);
    string get_name() const;
    float get_price() const;
    string to_string() const;
};

#endif // H_INVENTORY_ITEM
