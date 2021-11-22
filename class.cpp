#include "class.h"
using namespace std;
int id = 1;
Student::Student(char *name, unsigned int course, int record_book_number):
name(name), course(course), record_book_number(record_book_number)
{
    this->std_id = id;
    this->name = name;
    this->course = course;
    this->record_book_number = record_book_number;
    id++;
}

int Student::GetStdId() {
    return this->std_id;
}

char* Student::GetName() {
    return this->name;
}
unsigned int Student::GetCourse(){
    return this->course;
}
int Student::GetRecordBookNumber() {
    return this->record_book_number;
}

void Student::SetName(char* name) {
    this->name = name;
}

void Student::SetCourse(unsigned int course) {
    this->course = course;
}

//FirstSession::FirstSession(char* name, unsigned int course, int record_book_number,std::vector<int> marks) {
//this->first_session_marks = marks;
//}
//
//std::vector<int> FirstSession::GetFirstSessionMarks() {
//    return this->first_session_marks;
//}
//
//void FirstSession::SetFirstSessionMarks(std::vector<int> marks) {
//    this->first_session_marks = marks;
//}
//
//SecondSession::SecondSession(char* name, unsigned int course, int record_book_number,std::vector<int> marks){
//this->second_session_marks = marks;
//}
//
//std::vector<int> SecondSession::GetSecondSessionMarks() {
//    return this->second_session_marks;
//}
//
//void SecondSession::SetSecondSessionMarks(std::vector<int> marks) {
//this->second_session_marks = marks;
//}
ostream &operator<<(ostream &out, Student &student) {
    out << "Student: " << student.GetName() << "\n"
    << "Course: " << student.GetCourse() << "\n"
    << "Id: " << student.GetStdId() << "\n"
    << "Record Book Number: " << student.GetRecordBookNumber() << "\n";
    return out;
}

//ostream &operator<<(ostream &out, FirstSession &student_after_first_session) {
//    out << "Student: " << student_after_first_session.GetName() << "\n"
//        << "Course: " << student_after_first_session.GetCourse() << "\n"
//        << "Id: " << student_after_first_session.GetStdId() << "\n"
//        << "Record Book Number: " << student_after_first_session.GetRecordBookNumber() << "\n"
//        << "First Mark: " << student_after_first_session.GetFirstSessionMarks()[0]<< "\n"
//        << "Second Mark: " << student_after_first_session.GetFirstSessionMarks()[1]<< "\n"
//        << "Third Mark: " << student_after_first_session.GetFirstSessionMarks()[2]<< "\n"
//        << "Fourth Mark: " << student_after_first_session.GetFirstSessionMarks()[3]<< "\n";
//    return out;
//}

