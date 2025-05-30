#include <iostream>
using namespace std;

class ParkingSystem {
public:
    int big;
    int medium;
    int small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(big > 0){
                big--;
                return true;
            }
            return false;
        }
        else if(carType == 2){
            if (medium > 0){
                medium--;
                return true;
            }
            return false;
        }
        else{
            if(small > 0){
                small--;
                return true;
            }
            return false;
        }
    }
};

int main() {
    ParkingSystem* parkingSystem = new ParkingSystem(1, 1, 0);
    
    cout << (parkingSystem->addCar(1) ? "true" : "false") << endl; // true
    cout << (parkingSystem->addCar(2) ? "true" : "false") << endl; // true
    cout << (parkingSystem->addCar(3) ? "true" : "false") << endl; // false
    cout << (parkingSystem->addCar(1) ? "true" : "false") << endl; // false

    delete parkingSystem;
    return 0;
}