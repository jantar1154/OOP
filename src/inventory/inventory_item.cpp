#include "inventory_item.h"
#include <sstream>

InventoryItem::InventoryItem(string name, float price, int amount) {
    this->name = name;
    this->price = price;
    this->amount = amount;
}

string InventoryItem::get_name() const {
    return this->name;
}

float InventoryItem::get_price() const {
    return this->price;
}

int InventoryItem::get_amount() const {
    return this->amount;
}

float InventoryItem::get_total_price() const {
    return get_amount() * this->get_price();
}

string InventoryItem::to_string() const {
    std::stringstream ss;
    ss << '[' << get_name() << "] " << get_total_price() << " Kc";
    return ss.str();
}
