#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    int dailySales[365];
    int monthlySales[12];
    int yearlySales[1];
    int dailyCount, monthlyCount, yearlyCount;

public:
    Product(string productName) : name(productName), dailyCount(0), monthlyCount(0), yearlyCount(0) {
        fill(dailySales, dailySales + 365, 0);
        fill(monthlySales, monthlySales + 12, 0);
        fill(yearlySales, yearlySales + 1, 0);
    }

    void addDailySale(int sale) {
        if (dailyCount < 365) {
            dailySales[dailyCount++] = sale;
        }
    }

    void addMonthlySale(int sale) {
        if (monthlyCount < 12) {
            monthlySales[monthlyCount++] = sale;
        }
    }

    void addYearlySale(int sale) {
        if (yearlyCount < 1) {
            yearlySales[yearlyCount++] = sale;
        }
    }

    int getTotalDailySales() const {
        int total = 0;
        for (int i = 0; i < dailyCount; i++) {
            total += dailySales[i];
        }
        return total;
    }

    int getTotalMonthlySales() const {
        int total = 0;
        for (int i = 0; i < monthlyCount; i++) {
            total += monthlySales[i];
        }
        return total;
    }

    int getTotalYearlySales() const {
        int total = 0;
        for (int i = 0; i < yearlyCount; i++) {
            total += yearlySales[i];
        }
        return total;
    }

    string getName() const {
        return name;
    }
};

class SalesTracker {
    Product* products[100];
    int productCount;

public:
    SalesTracker() : productCount(0) {}

    void addProduct(Product* product) {
        if (productCount < 100) {
            products[productCount++] = product;
        }
    }

    void recordSale(string productName, int dailySale, int monthlySale, int yearlySale) {
        for (int i = 0; i < productCount; i++) {
            if (products[i]->getName() == productName) {
                products[i]->addDailySale(dailySale);
                products[i]->addMonthlySale(monthlySale);
                products[i]->addYearlySale(yearlySale);
                return;
            }
        }
        cout << "Product not found: " << productName << endl;
    }

    void printTotalSales() const {
        int totalDailySales = 0;
        int totalMonthlySales = 0;
        int totalYearlySales = 0;

        for (int i = 0; i < productCount; i++) {
            cout << "Product: " << products[i]->getName() << endl;
            cout << "  Daily Sales: " << products[i]->getTotalDailySales() << endl;
            cout << "  Monthly Sales: " << products[i]->getTotalMonthlySales() << endl;
            cout << "  Yearly Sales: " << products[i]->getTotalYearlySales() << endl;

            totalDailySales += products[i]->getTotalDailySales();
            totalMonthlySales += products[i]->getTotalMonthlySales();
            totalYearlySales += products[i]->getTotalYearlySales();
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

    tracker.addProduct(&product1);
    tracker.addProduct(&product2);

    tracker.recordSale("Product1", 100, 3000, 36000);
    tracker.recordSale("Product2", 200, 6000, 72000);

    tracker.recordSale("Product1", 150, 4500, 54000);
    tracker.recordSale("Product2", 250, 7500, 90000);

    tracker.printTotalSales();

    return 0;
}
