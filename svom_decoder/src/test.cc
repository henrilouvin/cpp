#include <iostream>
#include <sstream>
#include <cstdlib>
#include "packet.hh"

using namespace std;

int main()
{
        // Raw packets
        std::string alert("0240C00100570000003D000000010000000145434C414C4552544C310045434C414C4552544C310045434C414C4552544C310045434C414C4552544C310045434C414C4552544C310045434C414C4552544C31000000000000000000CDD0");
        std::string lcurve("0241400100570000003D0000002a000000000000000000000000000000000000000014650000103a00000c9b00000a790000060400000302053d0379032902ba01ae00cd057703b10353027d01b300ba04a9041403a10278010900d4e7f7");

        // Decode alert
        Packet packet1;
        packet1.decode(alert);
        cout<<"--\nFirst packet - APID: "<<packet1.CcsdsApid<<endl;

        // Decode lcurve
        Packet packet2;
        packet2.decode(lcurve);
        cout<<"--\nSecond packet - APID: "<<packet2.CcsdsApid<<endl;

    return 0;
}

