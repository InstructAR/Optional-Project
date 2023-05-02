#include "PQueue.h"

// Function to return the priority level as a string
std::string getPriorityString(int priority) {
    if (priority == HIGH_PRIORITY) {
        return "High";
    }
    else if (priority == MEDIUM_PRIORITY) {
        return "Medium";
    }
    else {
        return "Low";
    }
}
