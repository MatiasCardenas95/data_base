#include "../include/attendanceManagement.hpp"

AttendanceManagement::AttendanceManagement()
{

}

AttendanceManagement::~AttendanceManagement()
{

}

void AttendanceManagement::takeAttendance(Student *student, Course *course, string date, bool attendance)
{
       
       ifstream testCsv("attendance.csv");
       bool csvExists = testCsv.good(); //Boolean if exist file with headers
       testCsv.close(); 
       
       ofstream csvFile;

       csvFile.open("attendance.csv", ofstream::app);

       if (!csvFile.is_open())
       {
           cout << "No se pudo abrir el archivo"<<endl;
       }

       else
       {
           if(!csvExists)
           {         
                 csvFile << "Identificador Alumno,"
                    << "Nombre,"
                    << "Apellido,"
                    << "Id de Clase,"
                    << "Materia,"
                    << "Fecha,"
                    << "Asistencia\n";
           }         
                csvFile << student->getIdentifier() << ","
                    << student->getName() << ","
                    << student->getSurname() << ","
                    << course->getIdentifier() << ","
                    << course->getName() << ","
                    << date << ","
                    << attendance << "\n";

            csvFile.close();
       }


}

void AttendanceManagement::showAttendance ()
{
     ifstream csvFile("attendance.csv");

     if (csvFile.is_open())
     {
        string line;

            while (!csvFile.eof()) 
            {   
                getline(csvFile,line);
                cout << line << endl;
           } 

     }
     
    csvFile.close();

}