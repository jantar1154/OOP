#include "inventory_item.h"
#include <sstream>

InventoryItem::InventoryItem(string name, float price) {
    this->name = name;
    this->price = price;
}

string InventoryItem::get_name() const {
    return this->name;
}

float InventoryItem::get_price() const {
    return this->price;
}

string InventoryItem::to_string() const {
    std::stringstream ss;
    ss << '[' << get_name() << "] " << get_price() << " Kc";
    return ss.str();
}
