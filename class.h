#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Student {
protected:
    int std_id;
    char *name;
    unsigned int course;
    unsigned int groupe;
    int record_book_number;

    Student();

public:
    Student(char *name, unsigned int course, int groupe, int record_book_number);

    Student(Student &student);

    int Student::GetStdId();

    char *Student::GetName();

    unsigned int Student::GetCourse();

    int Student::GetRecordBookNumber();

    void Student::SetName(char *name);

    void Student::SetCourse(unsigned int course);

    int Student::GetGroupe();

    int Student::AverageMark();
};

class FirstSession : public Student {
protected:
    FirstSession();

    int *marks = new int[4];
public:
    FirstSession(char *name, unsigned int course, int groupe, int record_book_number, int *marks);

    int *FirstSession::GetFirstSessionMarks();

    void FirstSession::SetFirstSessionMarks(int *marks);

    int FirstSession::AverageMark();
};

class SecondSession : public FirstSession {
protected:
    SecondSession();

    int *marks_second_session = new int[5];
public:
    SecondSession(char *name, unsigned int course, int groupe, int record_book_number, int *marks,
                  int *marks_second_session);

    int *SecondSession::GetSecondSessionMarks();

    void SecondSession::SetSecondSessionMarks(int *marks_second_session);

    int SecondSession::AverageMark();
};

ostream &operator<<(ostream &out, Student &student);

ostream &operator<<(ostream &out, FirstSession &student_after_first_session);

ostream &operator<<(ostream &out, SecondSession &student_after_second_session);

template<typename T>
int AverageGroupMark(int group, vector<T *> students) {
    int result = 0;
    int count = 0;
    for (int i = 0; i < students.size(); ++i) {
        if (students[0]->GetGroupe() == 4) {
            result += students[0]->AverageMark();
            count++;
        }
    }
    result /= count;
    return result;
}