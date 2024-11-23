#include <iostream>
#include <vector>
#include <string>
using namespace std;

// if a company offer me to write a program where i can see every product total sale of the 
// day, monthly and early. and also the total of all products daily, monthly, and early

class Product {
    string name;
    vector<int> dailySales;
    vector<int> monthlySales;
    vector<int> yearlySales;

public:
    Product(string productName) : name(productName) {}

    void addDailySale(int sale) {
        dailySales.push_back(sale);
    }

    void addMonthlySale(int sale) {
        monthlySales.push_back(sale);
    }

    void addYearlySale(int sale) {
        yearlySales.push_back(sale);
    }

    int getTotalDailySales() const {
        int total = 0;
        for (int sale : dailySales) {
            total += sale;
        }
        return total;
    }

    int getTotalMonthlySales() const {
        int total = 0;
        for (int sale : monthlySales) {
            total += sale;
        }
        return total;
    }

    int getTotalYearlySales() const {
        int total = 0;
        for (int sale : yearlySales) {
            total += sale;
        }
        return total;
    }

    string getName() const {
        return name;
    }
};

class SalesTracker {
    vector<Product> products;

public:
    void addProduct(Product product) {
        products.push_back(product);
    }

    void recordSale(string productName, int dailySale, int monthlySale, int yearlySale) {
        for (Product &product : products) {
            if (product.getName() == productName) {
                product.addDailySale(dailySale);
                product.addMonthlySale(monthlySale);
                product.addYearlySale(yearlySale);
                return;
            }
        }
        cout << "Product not found: " << productName << endl;
    }

    void printTotalSales() const {
        int totalDailySales = 0;
        int totalMonthlySales = 0;
        int totalYearlySales = 0;

        for (const Product &product : products) {
            cout << "Product: " << product.getName() << endl;
            cout << "  Daily Sales: " << product.getTotalDailySales() << endl;
            cout << "  Monthly Sales: " << product.getTotalMonthlySales() << endl;
            cout << "  Yearly Sales: " << product.getTotalYearlySales() << endl;

            totalDailySales += product.getTotalDailySales();
            totalMonthlySales += product.getTotalMonthlySales();
            totalYearlySales += product.getTotalYearlySales();
        }

        cout << "Total Sales for All Products:" << endl;
        cout << "  Total Daily Sales: " << totalDailySales << endl;
        cout << "  Total Monthly Sales: " << totalMonthlySales << endl;
        cout << "  Total Yearly Sales: " << totalYearlySales << endl;
    }
};

int main() {
    SalesTracker tracker;

    Product product1("Product1");
    Product product2("Product2");

    tracker.addProduct(product1);
    tracker.addProduct(product2);

    tracker.recordSale("Product1", 100, 3000, 36000);
    tracker.recordSale("Product2", 200, 6000, 72000);

    tracker.recordSale("Product1", 150, 4500, 54000);
    tracker.recordSale("Product2", 250, 7500, 90000);

    tracker.printTotalSales();

    return 0;
}
