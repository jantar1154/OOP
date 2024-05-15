#ifndef H_INVENTORY
#define H_INVENTORY

#include "inventory_item.h"
#include <unordered_set>

using std::unordered_set;

class Inventory {
private:
    unordered_set<InventoryItem*> items;
public:
    ~Inventory();
    InventoryItem* add_item(InventoryItem* item);
    unordered_set<InventoryItem*> get_items() const;
};

#endif // H_INVENTORY
