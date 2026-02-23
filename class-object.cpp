#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int price;
    int year;

    Car(string b, string m, int p, int y){
        brand = b;
        model = m;
        price = p;
        year = y;
    }

    void displayInfo(){
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    int getPrice(int qty){
        return price * qty;
    }
};

int main(){
    Car toyota("Toyota", "Camry", 24000, 2020);
    Car honda("Honda", "Civic", 32000, 2019);

    toyota.displayInfo();
    honda.displayInfo();

    cout << "The total price for 3 Toyota cars is: $" << toyota.getPrice(3) << endl;
    cout << "The total price for 2 Honda cars is: $" << honda.getPrice(2) << endl;
}