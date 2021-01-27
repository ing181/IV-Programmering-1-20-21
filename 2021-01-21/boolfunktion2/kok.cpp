#include "kok.h"
bool IsBoiling(int temperatur)
{
    if (temperatur < 100) {
        return false;
    }
    return true;
}
