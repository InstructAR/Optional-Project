#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

const int NUM_STUDENTS = 2;

int main() {
    Student students[NUM_STUDENTS];

    // Ask the user for the name and priority level of each class for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter the classes and priorities for student " << i + 1 << endl;

        // Get the number of classes from the user
        int numClasses;
        cout << "How many classes does the student have? ";
        cin >> numClasses;

        // Loop through each class and add it to the student's priority queue based on its priority
        for (int j = 0; j < numClasses; j++) {
            string className;
            int priority;

            // Ask the user for the name and priority level of the class
            cout << "Enter the name of class " << j + 1 << ": ";
            cin >> className;
            cout << "Enter the priority level of class " << j + 1 << " (0 = high, 1 = medium, 2 = low): ";
            cin >> priority;

            // Add the class and priority to the student's priority queue
            students[i].addClass(className, priority);
        }
    }

    // Print the schedule for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Schedule for student " << i + 1 << ":" << endl;
        students[i].printSchedule();
        cout << endl;
    }

    return 0;
}