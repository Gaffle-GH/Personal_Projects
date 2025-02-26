#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct item{
    int quantity;
    int id;
    double price;

    string name;
};

class inventory{
    public:
    void display();
    void option(int optioninput);

    void add();
    void remove();
    void edit();

    void search();
    void printItems(const vector<item> &items);
    void list();

    void saveFile();
    bool loadFile();

    private:
    vector<item> items;
};


void inventory::saveFile(){
    ofstream file("Inventory.txt");
    if (file.is_open()){
        file << "Inventory Info: " << endl;
        file << setfill('-') << setw(20) << "-" << endl;

        for (size_t i = 0; i < items.size(); i++){
            double count = 1;
            file << count << " Item ID: " << items[i].id << endl;
            file << count << " Item Name: " << items[i].name << endl;
            file << count << " Item Quantity: " << items[i].quantity << endl;
            file << count << " Item Price: $" << items[i].price << endl << endl;
            count++;
        }

        file << "##END OF INVENTORY##" << endl;

        file.close();
    }else{
        cout << "Error: Unable to Save File" << endl;

    }
}

bool inventory::loadFile(){
    return true;
}


void inventory::display(){
    int optioninput;
    cout << endl;
    cout << "Inventory Management System" << endl;
    cout << endl;
    cout << "Options: " << endl;
    cout << "1. Add Item" << endl;
    cout << "2. Remove Item" << endl;
    cout << "3. Edit Item" << endl;
    cout << "4. Search Item" << endl;
    cout << "5. List Inventory" << endl;
    cout << "6. Save and Exit" << endl;
    cout << endl;

    cout << "Enter Option: ";
    cin >> optioninput;
    cout << endl;
    return option(optioninput);
}

void inventory::option(int optioninput){
    switch(optioninput)
    {
    case 1:
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "Add Item Selected: " << endl << endl;
        return add();
    case 2:
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "Remove Item Selected: " << endl << endl;
        return remove();
    case 3:
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "Edit Item Selected: " << endl << endl;
        return edit();
    case 4:
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "Search Item Selected: " << endl << endl;
        return search();
    case 5: 
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "List Inventory Selected: " << endl << endl;
        return list();
    case 6:
        cout << setfill('-') << setw(20) << "-" << endl;
        cout << "Inventory Saved to Inventory.txt" << endl;
        cout << "Shutting Down..." << endl;
        return saveFile();
    default:
        cout << setfill('-') << setw(20) << "-" << endl << endl;
        cout << "Error: Invalid Option" << endl;
        cout << "Shutting Down.." << endl;
        break;
    }
}

void inventory::add(){
    item newitem;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, newitem.name);
    cout << "Enter Quantity: ";
    cin >> newitem.quantity;
    cout << "Enter Price Per Unit: $";
    cin >> newitem.price;
    cout << endl;
    cout << setfill('-') << setw(20) << "-" << endl;

    srand(static_cast<unsigned int>(time(0)));

    newitem.id = rand() % 10 + 1;

    cout << newitem.name << "'s Local ID: " << newitem.id << endl;
    cout << newitem.name << " added!" << endl;
    cout << setfill('-') << setw(20) << "-" << endl;
    items.push_back(newitem);
    display();
}
void inventory::remove(){

    display();
}

void inventory::edit(){
    EXIT_SUCCESS;
}

void inventory::search(){
    EXIT_SUCCESS;
}

void inventory::list(){
    cout << "Inventory List: " << endl;
    cout << setfill('-') << setw(20) << "-" << endl;
    printItems(items);
    cout << endl;
    display();
}

void inventory::printItems(const vector<item> &items){
    for (size_t i = 0; i < items.size(); ++i){
        int count = i + 1;
        cout << count << "." << " Item ID: " << items[i].id << endl;
        cout << count << "." << " Item Name: " << items[i].name << endl;
        cout << count << "." << " Item Quantity: " << items[i].quantity << endl;
        cout << count << "." << " Item Price: $" << items[i].price << endl;
        cout << setfill('-') << setw(20) << "-" << endl;
    }
}

