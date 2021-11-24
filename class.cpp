#include "class.h"

using namespace std;
int id = 1;

Student::Student(char *name, unsigned int course, int groupe, int record_book_number) {
    this->std_id = id;
    this->groupe = groupe;
    this->name = name;
    this->course = course;
    this->record_book_number = record_book_number;
    id++;
}

int Student::GetStdId() {
    return this->std_id;
}

char *Student::GetName() {
    return this->name;
}

unsigned int Student::GetCourse() {
    return this->course;
}

int Student::GetRecordBookNumber() {
    return this->record_book_number;
}

void Student::SetName(char *name) {
    this->name = name;
}

void Student::SetCourse(unsigned int course) {
    this->course = course;
}

Student::Student(Student &student) {
    this->name = student.GetName();
    this->course = student.GetCourse();
    this->std_id = student.GetStdId();
    this->record_book_number = student.GetRecordBookNumber();
}

int Student::AverageMark() {
    return 0;
}

int Student::GetGroupe() {
    return this->course;
}

FirstSession::FirstSession(char *name, unsigned int course, int groupe, int record_book_number, int *marks) : Student(
        name, course, groupe,
        record_book_number) {
    this->marks = marks;
}

int *FirstSession::GetFirstSessionMarks() {
    return this->marks;
}

void FirstSession::SetFirstSessionMarks(int *marks) {
    this->marks = marks;
}

int FirstSession::AverageMark() {
    int result = 0;
    result = (this->GetFirstSessionMarks()[0] + this->GetFirstSessionMarks()[1] + this->GetFirstSessionMarks()[2] +
              this->GetFirstSessionMarks()[3]) / 4;
    return result;
}

SecondSession::SecondSession(char *name, unsigned int course, int groupe, int record_book_number, int *marks,
                             int *marks_second_session) : FirstSession(name, course, groupe, record_book_number,
                                                                       marks) {
    this->marks_second_session = marks_second_session;
}

void SecondSession::SetSecondSessionMarks(int *marks_second_session) {
    this->marks_second_session = marks_second_session;
}

int *SecondSession::GetSecondSessionMarks() {
    return this->marks_second_session;
}

int SecondSession::AverageMark() {
    int result = 0;
    result = (this->GetFirstSessionMarks()[0] + this->GetFirstSessionMarks()[1] + this->GetFirstSessionMarks()[2] +
              this->GetFirstSessionMarks()[3] + this->GetSecondSessionMarks()[0] + this->GetSecondSessionMarks()[1] +
              this->GetSecondSessionMarks()[2] + this->GetSecondSessionMarks()[3] + this->GetSecondSessionMarks()[4]) /
             9;
    return result;
}

ostream &operator<<(ostream &out, SecondSession &student_after_second_session) {
    out << "Student: " << student_after_second_session.GetName() << "\n"
        << "Course: " << student_after_second_session.GetCourse() << "\n"
        << "Id: " << student_after_second_session.GetStdId() << "\n"
        << "Record Book Number: " << student_after_second_session.GetRecordBookNumber() << "\n"
        << "Group: " << student_after_second_session.GetGroupe() << "\n"
        << "First Mark: " << student_after_second_session.GetSecondSessionMarks()[0] << "\n"
        << "Second Mark: " << student_after_second_session.GetSecondSessionMarks()[1] << "\n"
        << "Third Mark: " << student_after_second_session.GetSecondSessionMarks()[2] << "\n"
        << "Fourth Mark: " << student_after_second_session.GetSecondSessionMarks()[3] << "\n"
        << "Fifth Mark: " << student_after_second_session.GetSecondSessionMarks()[4] << "\n"
        << "----------------------------------------------------------------------------" << "\n";
    return out;
}

ostream &operator<<(ostream &out, Student &student) {
    out << "Student: " << student.GetName() << "\n"
        << "Course: " << student.GetCourse() << "\n"
        << "Id: " << student.GetStdId() << "\n"
        << "Record Book Number: " << student.GetRecordBookNumber() << "\n"
        << "Groupe: " << student.GetGroupe() << "\n"
        << "----------------------------------------------------------------------------" << "\n";
    return out;
}

//while(true)
ostream &operator<<(ostream &out, FirstSession &student_after_first_session) {
    out << "Student: " << student_after_first_session.GetName() << "\n"
        << "Course: " << student_after_first_session.GetCourse() << "\n"
        << "Id: " << student_after_first_session.GetStdId() << "\n"
        << "Record Book Number: " << student_after_first_session.GetRecordBookNumber() << "\n"
        << "Group: " << student_after_first_session.GetGroupe() << "\n"
        << "First Mark: " << student_after_first_session.GetFirstSessionMarks()[0] << "\n"
        << "Second Mark: " << student_after_first_session.GetFirstSessionMarks()[1] << "\n"
        << "Third Mark: " << student_after_first_session.GetFirstSessionMarks()[2] << "\n"
        << "Fourth Mark: " << student_after_first_session.GetFirstSessionMarks()[3] << "\n"
        << "----------------------------------------------------------------------------" << "\n";
    return out;

}

