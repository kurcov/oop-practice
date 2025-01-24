#include <iostream>
using namespace std;

class Car {
  private:
    string brand;
    int year;

  public:

    Car(string b, int y) : brand(b), year(y) {}

    void display() const{
      cout << "This is a " << year << " model " << brand << "\n";
    }
};

int main() {
  Car car("Sedan", 2023);
  car.display();
  return 0;
}
