# OOP BED0178
## Utulek pro zvirata

### Shelter
Hlavni trida, ktera reprezentuje samotny utulek, a obaluje vsechny ostatni tridy a pracuje s nimi.
Nachazi se v ni list zamestnancu (`Employee`), adminu (`Admin`), registrovanych zakazniku (`Adopter`)
a zvirat (`Animal`).
Mimo manipulaci s inventarem, samotna trida nebude mit povoleni
manipulovat s vetsinou funkci.

### Person
Abstraktni trida, ze ktere potom budou dedit tridy `Employee`, `Adopter` a `Admin`.
Nachazi se v ni funkce jako treba `get_name()` a `get_age()`, ktere pak overriduji
potomci.

### Employee
Potomek abstraktni tridy `Person`, ktery reprezentuje zamestnance v utulku.
Muze dat zviratka k adopci.
Uklada zvirata, ktera ma zamestnanec na starost.

### Adopter
Registrovany zakaznik v utulku, ktery bude adoptovat zvirata.
Ukladaji se jiz adoptovane zvirata.

### Admin
Ma povoleni k manipulaci s databazi ve tride `Shelter`.
Muze davat zvirata k adopci a pridavat nova zvirata do databaze.
Muze mazat zvirata z databaze utulku.

### Animal
Trida reprezentujici zvirata. Nachazeji se budto v utulku, nebo jsou jiz
adoptovane a jsou v listu adoptovanych zvirat jednoho z `Adopter`.

### Inventory
Trida `Inventory` je inventar utulku, uklada polozky (`InventoryItem`).

### InventoryItem
Reprezentuje jednu polozku v inventari, ukldada nazev polozky, pocet a cenu za kus.
