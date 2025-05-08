#include <iostream>
#include "PhantomDelay.h"  

int main() {
    std::cout << "pausing for 5 seconds...\n";
    stealth::PhantomDelay(5);
    std::cout << "done.\n";
    return 0;
}
