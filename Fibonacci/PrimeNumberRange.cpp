
#include "PrimeNumberRange.hpp"
#include <cmath>

bool PrimeNumberIterator::is_prime(int n) {
    if(n <= 1) return false;
    if(n == 2) return true;
    
    for(size_t i{2}; i <= sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool PrimeNumberIterator::operator!=(int x) const {
    return current < x;
}

PrimeNumberIterator& PrimeNumberIterator::operator++() {
    do {
        ++current;
    } while (!is_prime(current));
    
    return *this;
}

int PrimeNumberIterator::operator*() {
    return current;
}

PrimerNumberRange::PrimerNumberRange(const int max): max{max} {
    
}

PrimeNumberIterator PrimerNumberRange::begin() {
    return PrimeNumberIterator{};
}

int PrimerNumberRange::end() {
    return max;
}
