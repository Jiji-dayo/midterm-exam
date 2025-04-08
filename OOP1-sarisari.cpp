#include <iostream>
using namespace std;

class sariSari {
public:
    string name;
    string id;
    double price;
    double shelflife;
    double pcs;
    double total;

    double sarisaritotal() {
        total = price * pcs;
        return total;
    }

    void setData(string n, string i, double p, double s) {
        name = n;
        id = i;
        price = p;
        shelflife = s;
    }

    void displayProduct() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Shelf Life: " << shelflife << " days" << endl;
        cout << "Pieces: " << pcs << endl;
        cout << "Total: " << total << endl;
    }
};

int main() {
    sariSari product1, product2, product3, product4, product5, product6, product7, product8;

    product1.setData("Mangoes", "10245", 20, 60);
    product2.setData("Apple", "20255", 15, 38);
    product3.setData("C2 Red", "30356", 30, 360);
    product4.setData("Bukopie", "12347", 40, 120);
    product5.setData("Magic Sarap", "77878", 10, 520);
    product6.setData("C2 Green", "10255", 25, 360);
    product7.setData("Boy Bawang", "12032", 18, 400);
    product8.setData("Banana", "11234", 7, 24);
    
    string inputId;
    double inputPcs;

    cout << "Enter product ID: ";
    cin >> inputId;

    sariSari* selectedProduct = nullptr;

    if (inputId == product1.id) {
        selectedProduct = &product1;
    } else if (inputId == product2.id) {
        selectedProduct = &product2;
    } else if (inputId == product3.id) {
        selectedProduct = &product3;
    } else if (inputId == product4.id) {
        selectedProduct = &product4;
    } else if (inputId == product5.id) {
        selectedProduct = &product5;
    } else if (inputId == product6.id) {
        selectedProduct = &product6;
    } else if (inputId == product7.id) {
        selectedProduct = &product7;
    } else if (inputId == product8.id) {
        selectedProduct = &product8;
    }
    
    if (selectedProduct != nullptr) {
        cout << "Enter number of pieces: ";
        cin >> inputPcs;

        selectedProduct->pcs = inputPcs;
        selectedProduct->sarisaritotal();

        cout << "\nProduct Details:\n";
        selectedProduct->displayProduct();
    } else {
        cout << "Product ID not found!" << endl;
    }

    return 0;
}
