#include <iostream>
using namespace std;


class Room {
  private:
    double length;
    double height;

  public:
    Room(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  Room wall1(8, 5);
  Room wall2(8.5, 4);

  cout << "Area of floor: " << wall1.calculateArea() << endl;
  cout << "Area of wall: " << wall2.calculateArea();

  return 0;
}