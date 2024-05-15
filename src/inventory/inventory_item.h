#ifndef H_INVENTORY_ITEM
#define H_INVENTORY_ITEM

#include <string>
#include <stdint.h>

using std::string;

class InventoryItem {
private:
    string name;
    uint32_t amount;
    float price;

public:
    InventoryItem(string name, float price, uint32_t amount);
    string get_name() const;
    float get_price() const;
    float get_total_price() const;
    uint32_t get_amount() const;
    string to_string() const;
};

#endif // H_INVENTORY_ITEM
