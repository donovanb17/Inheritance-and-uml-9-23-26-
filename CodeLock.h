// CodeLock.h
#pragma once
#include "Lock.h" // include as has def of what lock is
#include <string> // string header

class CodeLock : public Lock { // for now public inheritance
private:
    std::string code; // add privatley a code (str)
public:
    CodeLock(std::string secretCode); // in constructor (requires a code [string])
    bool tryCode(std::string guess); // providing additional function 
};