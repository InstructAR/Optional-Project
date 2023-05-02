#ifndef STUDENT_H
#define STUDENT_H

#include <queue>
#include <string>
#include "PQueue.h"

class Student {
public:
    Student();
    Student(std::string name);

    void addClass(std::string className, int priority);
    void printSchedule();

private:
    std::string name;
    std::queue<Process> schedule;
};

#endif