#include "Packet.h"

void Packet::Receive()
{
    cout << "Receive" << endl;
}

Packet::~Packet()
{
    cout << "Deleted Packet" << endl;
}
