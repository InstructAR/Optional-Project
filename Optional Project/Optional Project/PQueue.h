#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <queue>
#include <string>
#include <iomanip>


// Define the priority levels
const int HIGH_PRIORITY = 0;
const int MEDIUM_PRIORITY = 1;
const int LOW_PRIORITY = 2;

// Define the process structure
struct Process {
    std::string name;
    int priority;

    bool operator<(const Process& other) const {
        return priority > other.priority;
    }
};

// Function to return the priority level as a string
std::string getPriorityString(int priority);

#endif