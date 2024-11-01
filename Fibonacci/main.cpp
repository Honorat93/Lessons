#include <cstdio>
#include "fibonacci.hpp"
#include "PrimeNumberRange.hpp"

int main() {
    printf("Fibonnaci suit: ");
    for(const auto i: FibonacciRange{500}) {
        printf(" %d ", i);
    }
    printf("\n\n");
    
    printf("Prime Numbers: ");
    for(const auto i: PrimerNumberRange{500}) {
        printf(" %d ", i);
    }
    printf("\n\n");
    
    return 0;
}
