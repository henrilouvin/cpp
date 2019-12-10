#ifndef INC_PACKET
#define INC_PACKET

#include <string>

class Packet
{
    public:
        uint16_t ccsdsApid;
        void decode(std::string &s);
};

#endif /* INC_PACKET */
