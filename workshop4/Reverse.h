//a1764714,a1780903,a1810750,a1794041

#include <iostream>
#include <string>

#ifndef REVERSE_H
#define REVERSE_H

class Reverse
{
    public:
        Reverse() ;
        ~Reverse() ;
    
        int reverseDigit(int value) ;
            //takes in non-negative int value and reverses the digits using recursion, the 'reversed' int is then returned
        std::string reverseString(std::string letters) ;
            // takes in a std::string and returns the reversed string
    protected:
        int ReverseDig ;
        std::string ReverseStr ;
    private:
        int sum ;
        int remember ;
} ;

#endif
