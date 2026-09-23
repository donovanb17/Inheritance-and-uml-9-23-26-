// Lock.h
#pragma once

class Lock {
private: // only visible in this file
    bool unlocked; // boolean that represents whether unlocked or not
protected: // reason to use this is because if these were private wouldn't be able to use outside class (includes sub classes)
    Lock(); // protected will let us use these in subclasses of lock but nowhere else
    bool unlock();
public: // things we can use anywhere
    bool isUnlocked() const;
};