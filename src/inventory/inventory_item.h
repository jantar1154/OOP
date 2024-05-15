#ifndef H_INVENTORY_ITEM
#define H_INVENTORY_ITEM

#include <string>

using std::string;

class InventoryItem {
private:
    string name;
    int amount;
    float price;

public:
    InventoryItem(string name, float price, int amount);
    string get_name() const;
    float get_price() const;
    float get_total_price() const;
    int get_amount() const;
    string to_string() const;
};

#endif // H_INVENTORY_ITEM
