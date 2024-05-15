#include "inventory.h"

Inventory::~Inventory() {
    for (InventoryItem *i : this->items) delete i;
}

InventoryItem* Inventory::add_item(InventoryItem* item) {
    this->items.insert(item);
    return item;
}

unordered_set<InventoryItem*> Inventory::get_items() const {
    return this->items;
}
