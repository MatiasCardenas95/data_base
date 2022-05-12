#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    private:

        int identifier;
        string name;
        string surname;

    public:

        Student();
        virtual ~Student();

        void setIdentifier(int _identifier);
        void setName(string _name);
        void setSurname(string _surname);

        int getIdentifier();
        string getName();
        string getSurname();
};

#endif    

