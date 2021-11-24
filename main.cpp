#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Student student("Anton", 1, 4, 221231230);
    cout << student;
    Student student2("NeAnton", 1, 4, 1635127351);
    cout << student2;
    int *marks = new int[4]{5, 7, 9, 6};
    FirstSession student_after_first_session("Anton", 1, 4, 221231230, marks);
    cout << student_after_first_session;
    int *marks_second_session = new int[5]{4, 7, 6, 9, 8};
    SecondSession student_after_second_session("Anton", 1, 4, 221231230, marks, marks_second_session);
    cout << student_after_second_session;
    FirstSession student2_after_first_session("Anton", 1, 4, 123123, marks);
    SecondSession student2_after_second_session("Anton", 1, 4, 12312312, marks, marks_second_session);
    vector<SecondSession *> students = {&student2_after_second_session, &student_after_second_session};
    AverageGroupMark(4, students);
    return 0;
}
