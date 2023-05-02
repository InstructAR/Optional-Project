#include "Student.h"

Student::Student() {
    name = "";
}

Student::Student(std::string n) {
    name = n;
}

void Student::addClass(std::string className, int priority) {
    Process process = { className, priority };
    schedule.push(process);
}

void Student::printSchedule() {
    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ') << "| " << std::setw(13) << "Class Name" << " | "
        << std::setw(7) << "Priority" << " | " << std::setw(14) << "Priority Level" << " |" << std::endl;
    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ');

    // Print the schedule
    while (!schedule.empty()) {
        std::cout << "| " << std::setw(13) << schedule.front().name << " | "
            << std::setw(7) << schedule.front().priority << " | "
            << std::setw(14) << getPriorityString(schedule.front().priority) << " |" << std::endl;
        schedule.pop();
    }

    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ');
}