#include <iostream>
#include <string>
using namespace std;


class Bus {
private:
    string driverName;
    int busNumber;
    int routeNumber;
    string brand;
    int startYear;
    int mileage;

public:
    
    void setData(string dName, int bNumber, int rNumber, string bBrand, int sYear, int mMileage) {
        driverName = dName;
        busNumber = bNumber;
        routeNumber = rNumber;
        brand = bBrand;
        startYear = sYear;
        mileage = mMileage;
    }

   
    void display() {
        cout << "Driver: " << driverName << ", Bus №: " << busNumber
            << ", Route №: " << routeNumber << ", Brand: " << brand
            << ", Year of commencement of operation: " << startYear
            << ", Run: " << mileage << " km" << endl;
    }

   
    int getRouteNumber() {
        return routeNumber;
    }

   
    bool isMoreThan10Years(int currentYear) {
        return (currentYear - startYear) > 10;
    }

    
    bool hasBigMileage() {
        return mileage > 10000;
    }
};

int main() {
    const int SIZE = 3; 
    Bus buses[SIZE];

    
    buses[0].setData("Ivanenko I.I.", 101, 12, "Mercedes", 2010, 12000);
    buses[1].setData("Petrenko P.P.", 102, 15, "Volvo", 2018, 8000);
    buses[2].setData("Sydorenko S.S.", 103, 12, "MAN", 2005, 20000);

    int searchRoute;
    cout << "Enter the route number to search: ";
    cin >> searchRoute;

    int currentYear = 2025; 

    cout << "\na) Buses on the route №" << searchRoute << ":\n";
    for (int i = 0; i < SIZE; i++) {
        if (buses[i].getRouteNumber() == searchRoute) {
            buses[i].display();
        }
    }

    cout << "\nb) Buses in operation for more than 10 years:\n";
    for (int i = 0; i < SIZE; i++) {
        if (buses[i].isMoreThan10Years(currentYear)) {
            buses[i].display();
        }
    }

    cout << "\nc) Buses with mileage over 10,000 km:\n";
    for (int i = 0; i < SIZE; i++) {
        if (buses[i].hasBigMileage()) {
            buses[i].display();
        }
    }

    return 0;
}
