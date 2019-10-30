#ifndef H_CPU
#define H_CPU

#include <string>
#include <cpu.cpp>


class CPU{
    private:
        std::vector <uint8_t> rom(0x1000000);
        std::vector <uint8_t> ram(0x4000000); 
        std::vector <uint32_t> r(32);
        uint32_t PC;
        
    public:
        void setup();
        void reset();
        void next();
        void AddressMapper();
}


#endif