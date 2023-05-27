#ifndef TRANSPORT_TRUCK_H
#define TRANSPORT_TRUCK_H

#include "MotorTransport.h"
#include "../ICargo.h"

class Truck : public MotorTransport, public ICargo {
public:
    Truck(string model, string manufactured) : MotorTransport(model, manufactured) {}

    void Loading() override {
        cout << "Загрузка груза" << endl;
    }

    void UnLoading() override {
        cout << "Выгрузка груза" << endl;
    }
};


#endif //TRANSPORT_TRUCK_H
