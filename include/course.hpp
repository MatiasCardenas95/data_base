#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course
{
    private:
        int identifier;
        string name;

    public:

        Course();
        virtual ~Course();

        void setIdentifier(int _identifier);
        void setName(string _name);
        
        int getIdentifier();
        string getName();
};


#endif