#include "Las1_3_handler.h"
#include <iostream>
#include <fstream>

int main(void)
{
    std::cout.precision(5);
    Las1_3_handler lasHandler("LDR-FW-FW10_01-201009821.LAS");
    PulseManager *p = lasHandler.readFileAndGetPulseManager();

    std::cout << "the pulse manager has : " << p->getNumOfPulses() << " pulses\n";

    p->printPulseInfo(104510);

    delete p;
    return 1;
}
