#include <iostream>

#include "./lib/MotorTransport/Bus.h"
#include "./lib/MotorTransport/Truck.h"

#include "./lib/AirTransport/AirBus.h"

using namespace std;

void BoardingPassenger(IPassenger* passenger);
void UnBoardingPassenger(IPassenger* passenger);

void LoadingPassenger(ICargo* cargo);
void UnLoadingPassenger(ICargo* cargo);

void Move(Transport* transport);

int main() {
    Bus* bus = new Bus("", "");
    BoardingPassenger(bus);
    Move(bus);
    UnBoardingPassenger(bus);

    AirBus* air_bus = new AirBus("", "");
    BoardingPassenger(air_bus);
    Move(air_bus);
    UnBoardingPassenger(air_bus);

    return 0;
}
