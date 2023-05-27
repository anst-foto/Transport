#ifndef TRANSPORT_TRANSPORT_H
#define TRANSPORT_TRANSPORT_H

#include <string>

using namespace std;

class Transport {
public:
    string model;
    string manufactured;

    virtual void Moving() = 0;

protected:
    Transport(string model, string manufactured) {
        this->model = model;
        this->manufactured = manufactured;
    }
};


#endif //TRANSPORT_TRANSPORT_H
