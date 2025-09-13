#include "../include/lab1.h"


long elimenate_unset_bits(std::string number) {
    long result = 0;
    
    for (char c : number) {
        if (c == '1') {
            result = (result << 1) | 1;
        }
    }
    
    return result;
}