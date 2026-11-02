#include <iostream>
#include <string>
using namespace std;
class Product { 
    private:
        int Product_id;
        int quantity;
        string product_name;
        float price;
        float bill;
    public:
        void inputDetails() {
            cout << "Enter Product ID: ";
            cin >> Product_id;
            cout << "Enter Product Name: ";
            getline(cin >> ws, product_name);
            cout << "Enter Product Price: ";
            cin >> price;
            cout << "Enter Product Quantity: ";
            cin >> quantity;
            bill = quantity * price;
        }
        void displayDetails() const {
            cout << "\n----- Product Details -----\n";\
            cout << "Product ID : " << Product_id << endl;
            cout << "Product Name : " << product_name << endl;
            cout << "Quantity : " << quantity << endl;
            cout << "Price : " << price << endl;
            cout << "Bill : " << bill << endl;
        }
        
};
int main() {
    Product s;
    s.inputDetails();
    s.displayDetails();
    return 0;
} 