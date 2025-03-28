#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle(int speed) : speed(speed) {}

    void start() {
        cout << "Vehicle started" << std::endl;
    }

    virtual void move() {
        cout << "Vehicle is moving at a speed of " << speed << " units" << std::endl;
    }

private:
    int speed;
};

class Airplane : public Vehicle {
public:
    Airplane(int speed, int altitude) : Vehicle(speed), altitude(altitude) {}

    void fly() {
        cout << "Airplane is flying at an altitude of " << altitude << " feet" << std::endl;
    }

    void move() override {
        cout << "Airplane is moving through the air at a speed of " << speed << " units" << std::endl;
    }

private:
    int altitude;
};

class Train : public Vehicle {
public:
    Train(int speed, int cars) : Vehicle(speed), cars(cars) {}

    void chug() {
        cout << "Train is chugging with " << cars << " cars" << std::endl;
    }

    void move() override {
        cout << "Train is moving on tracks at a speed of " << speed << " units" << std::endl;
    }

private:
    int cars;
};

int main() {
    const int numVehicles = 3;
    Vehicle* vehicles[numVehicles];

    vehicles[0] = new Airplane(600, 35000);
    vehicles[1] = new Train(100, 10);
    vehicles[2] = new Vehicle(50);

    for (int i = 0; i < numVehicles; i++) {
        vehicles[i]->start();
        vehicles[i]->move();

        Airplane* airplane = dynamic_cast<Airplane*>(vehicles[i]);
        if (airplane) {
            airplane->fly();
        }

        Train* train = dynamic_cast<Train*>(vehicles[i]);
        if (train) {
            train->chug();
        }

        std::cout << std::endl;
    }
    for (int i = 0; i < numVehicles; i++) {
        delete vehicles[i];
    }

    return 0;
}
