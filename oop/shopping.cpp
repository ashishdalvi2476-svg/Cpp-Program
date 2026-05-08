#include <bits/stdc++.h>
using namespace std;

class Dmart
{
protected:
    unordered_map<string, double> inventory;

public:
    void loadInventory(string filename)
    {
        ifstream file(filename);
        if (!file.is_open())  return;
        string item;
        double price;
        while (file >> item >> price)
        {
            inventory[item] = price;
        }
        file.close();
    }
    virtual void addItem(string itemname) = 0;
};

class Cart : public Dmart
{
private:
    vector<string> item;
    vector<double> itemprice;
    double sgst;
    double cgst;

public:
    void addItem(string itemName)
    {
        // Check if the item exists in the map
        if (inventory.find(itemName) != inventory.end())
        {
            item.push_back(itemName);
            itemprice.push_back(inventory[itemName]);
        }
        else
        {
            cout << "-> Item not found. !!" << endl;
        }
    }

    void displayBill()
    {
        if (item.empty())
            return;

        cout << "\n"
             << setfill('=') << setw(45) << "" << endl;
        cout << "              OFFICIAL RECEIPT               " << endl;
        cout << setfill('=') << setw(45) << "" << setfill(' ') << endl;

        cout << left << setw(30) << "Item"
             << setw(20) << "Price" << endl;

        // cout << string(45, '-') << endl;

        double grandTotal = 0;
        for (int i = 0; i < itemprice.size(); i++)
        {
            grandTotal += itemprice[i];
            cout << left << setw(30) << item[i]
                 << setw(20) << itemprice[i] << endl;
        }

        cout<<endl;

        sgst = (0.05 * grandTotal) / 2;
        cgst = (0.05 * grandTotal) / 2;

        // cout << string(45, '-') << endl;
        cout << left << setw(15) << "SGST:" << right << setw(20) << sgst << endl;
        cout << left << setw(15) << "CGST:" << right << setw(20) << cgst << endl;
        cout << left << setw(15) << "GRAND TOTAL:" << right << setw(20) << grandTotal+sgst+cgst << endl;
        cout << setfill('=') << setw(45) << "" << endl;
    }
};

int main()
{
    Cart myCart;
    myCart.loadInventory("inventory.txt");

    cout << "Welcome to Dmart! (Type 'checkout' to finish)" << endl;

    cout << "Please Enter Name As Per Mentioned . " << endl;

    while (true)
    {
        string itemName;
        cout << "Enter Item Name: ";
        getline(cin, itemName);

        if (itemName == "checkout")
            break;

        myCart.addItem(itemName);
    }

    myCart.displayBill();
    return 0;
}