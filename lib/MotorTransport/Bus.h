#ifndef TRANSPORT_BUS_H
#define TRANSPORT_BUS_H

#include "MotorTransport.h"
#include "../IPassenger.h"

class Bus : public MotorTransport, public IPassenger {
public:
    Bus(string model, string manufactured)
        : MotorTransport(model, manufactured) {}

    void Boarding() override {
        cout << "Посадка пассажиров" << endl;
    }

    void UnBoarding() override {
        cout << "Высадка пассажиров" << endl;
    }
};


#endif //TRANSPORT_BUS_H
