
#ifndef fibonacci_hpp
#define fibonacci_hpp

#include <cstdio>

struct FibonacciIterator {
    bool operator!=(int x) const;
    FibonacciIterator& operator++();
    int operator*() const;
    
private:
    int current{1}, last{1};
};


struct FibonacciRange {
    explicit FibonacciRange(const int max);
    FibonacciIterator begin() const;
    int end() const;
    
private:
    const int max;
};

#endif /* fibonacci_hpp */
