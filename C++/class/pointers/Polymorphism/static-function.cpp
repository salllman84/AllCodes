#include <iostream>
#include <string>

using namespace std;

class SaleInvoice {
private:
    string prod_name;
    double prod_price;
    int prod_quantity;
    double total_amount;

public:
    // Setter functions
    void setProdName(string name) {
        prod_name = name;
    }

    void setProdPrice(double price) {
        prod_price = price;
    }

    void setProdQuantity(int quantity) {
        prod_quantity = quantity;
    }

    // Getter functions
    string getProdName() {
        return prod_name;
    }

    double getProdPrice() {
        return prod_price;
    }

    int getProdQuantity() {
        return prod_quantity;
    }

    double getTotalAmount() {
        return total_amount;
    }

    // Function to calculate the total amount
    void calculateInvoice() {
        total_amount = prod_price * prod_quantity;
    }

    // Static member function to get the quantity
    static int getQuantity(SaleInvoice& obj) {
        return obj.prod_quantity;
    }

    // Function to display the invoice
    void displayInvoice() {
        cout << "Product Name: " << prod_name << endl;
        cout << "Product Price: $" << prod_price << endl;
        cout << "Product Quantity: " << prod_quantity << endl;
        cout << "Total Amount: $" << total_amount << endl;
    }
};

int main() {
    // Create a SaleInvoice object
    SaleInvoice invoice;

    // Set product details
    invoice.setProdName("Laptop");
    invoice.setProdPrice(1200.50);
    invoice.setProdQuantity(2);

    // Calculate the invoice
    invoice.calculateInvoice();

    // Display the invoice
    invoice.displayInvoice();

    // Use the static member function to get the quantity
    // int quantity = SaleInvoice:: 
    cout<<"Quantity of product: "<<invoice.getQuantity(invoice);
    // cout << "The quantity of the product is: " << quantity << endl;

    return 0;
}
