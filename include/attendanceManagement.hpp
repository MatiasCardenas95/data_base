#ifndef ATTENDANCEMANAGEMENT_H
#define ATTENDANCEMANAGEMENT_H

#include <iostream>
#include <fstream>
#include "course.hpp"
#include "student.hpp"

#include <iostream>

using namespace std;

class AttendanceManagement
{
    public:
    
        AttendanceManagement();
        virtual ~AttendanceManagement();
        
        void takeAttendance(Student *student, Course *course, string date, bool state);
        void showAttendance ();

};


#endif
