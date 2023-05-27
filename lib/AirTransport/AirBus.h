#ifndef TRANSPORT_AIRBUS_H
#define TRANSPORT_AIRBUS_H

#include "AirTransport.h"
#include "../IPassenger.h"

class AirBus : public AirTransport, public IPassenger {
public:
    AirBus(string model, string manufactured)
        : AirTransport(model, manufactured) {}

    void Boarding() override {
        cout << "Посадка пассажиров" << endl;
    }

    void UnBoarding() override {
        cout << "Высадка пассажиров" << endl;
    }
};


#endif //TRANSPORT_AIRBUS_H
