#ifndef TRANSPORT_AIRTRANSPORT_H
#define TRANSPORT_AIRTRANSPORT_H


#include <iostream>

#include "../Transport.h"

using namespace std;

class AirTransport : public Transport {
public:
    void Moving() override {
        cout << "Летим" << endl;
    }

protected:
    AirTransport(string model, string manufactured)
    : Transport(model, manufactured) {}

};


#endif //TRANSPORT_AIRTRANSPORT_H
