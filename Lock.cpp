// Lock.cpp
#include "Lock.h"

Lock::Lock() : unlocked(false) {} // initializer list
// ^ what is this syntax?

bool Lock::unlock() {
    if (unlocked) { // unlocked case
        return false; // if unlocked return false
    }
    unlocked = true; // else unlocks lock and returns true
    return true;
}

bool Lock::isUnlocked() const {
    return unlocked;
}