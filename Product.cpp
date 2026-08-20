#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int product_id;
    int product_quantity;
    string product_name;
    float product_price;
    float bill;

public:
    void inputDetails()
    {
        cout << "Enter Product ID: ";
        cin >> product_id;

        cout << "Enter Product Quantity: ";
        cin >> product_quantity;

        cout << "Enter Product Name: ";
        cin >> product_name;

        cout << "Enter Product Price: ";
        cin >> product_price;
    }

    void createBill()
    {
        bill = product_quantity * product_price;
    }

    void displayDetails()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << product_id << endl;
        cout << "Product Quantity: " << product_quantity << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Product Price: " << product_price << endl;
        cout << "Total Bill: " << bill << endl;
    }
};

int main()
{
    Product p1;

    p1.inputDetails();
    p1.createBill();
    p1.displayDetails();

    return 0;
}