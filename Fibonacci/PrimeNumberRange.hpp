
#ifndef PrimeNumberRange_hpp
#define PrimeNumberRange_hpp

#include <stdio.h>

struct PrimeNumberIterator {
    bool is_prime(int n);
    bool operator!=(int x) const;
    PrimeNumberIterator& operator++();
    int operator*();
    
private:
    int current{2};
};

struct PrimerNumberRange {
    explicit PrimerNumberRange(const int max);
    PrimeNumberIterator begin();
    int end();
    
private:
    const int max;
};

#endif /* PrimeNumberRange_hpp */
