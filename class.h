    #pragma once
    #include <iostream>
    #include <vector>
    using namespace std;
    class Student{
    private:
        int std_id;
        char* name;
        unsigned int course;
        int record_book_number;
    public:
        Student();
        Student(char* name, unsigned int course, int record_book_number);
        int Student::GetStdId();
        char* Student::GetName();
        unsigned int Student::GetCourse();
        int Student::GetRecordBookNumber();
        void Student::SetName(char* name);
        void Student::SetCourse(unsigned int course);

    };

//    class FirstSession:public Student{
//    private:
//        std::vector<int> first_session_marks;
//    public:
//        FirstSession();
//        FirstSession(char* name, unsigned int course, int record_book_number, std::vector<int> marks);
//        std::vector<int> GetFirstSessionMarks();
//        void SetFirstSessionMarks(std::vector<int> marks);
//    };
//
//    class SecondSession:public FirstSession{
//    private:
//        std::vector<int> second_session_marks;
//    public:
//        SecondSession(char* name, unsigned int course, int record_book_number,std::vector<int> marks);
//        std::vector<int> GetSecondSessionMarks();
//        void SetSecondSessionMarks(std::vector<int> marks);
//
//
//    };

    ostream &operator<<(ostream &out, Student &student);
//   ostream &operator<<(ostream &out, FirstSession &student_after_first_session);
