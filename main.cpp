#include <iostream>
#include "Lock.h"
#include "CodeLock.h"
int main(){
    // I can make a CodeLock or KeyLock but not a generic lock
    CodeLock mylock("1116");
}