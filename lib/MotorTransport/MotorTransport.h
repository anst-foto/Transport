#ifndef TRANSPORT_MOTORTRANSPORT_H
#define TRANSPORT_MOTORTRANSPORT_H

#include <iostream>

#include "../Transport.h"

using namespace std;

class MotorTransport : public Transport {
public:
    void Moving() override {
        cout << "Едем" << endl;
    }

protected:
    MotorTransport(string model, string manufactured)
        : Transport(model, manufactured) {}

};


#endif //TRANSPORT_MOTORTRANSPORT_H
