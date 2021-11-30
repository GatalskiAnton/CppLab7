#include "gtest/gtest.h"
#include "class.h"

TEST(testGetCourse, test1){
    Student student("Anton", 1, 1, 221231230);
    ASSERT_EQ(student.GetCourse(),1);
}
TEST(testGetGroup, test1){
    Student student("Anton", 1, 1, 221231230);
    ASSERT_EQ(student.GetGroupe(),1);
}
TEST(testGetId, test1){
    Student student("Anton", 1, 1, 221231230);
    ASSERT_EQ(student.GetStdId(),3);
}
TEST(testGetFirstSessionMarks,test1){
    int*marks = new int[4]{5,6,7,8};
    FirstSession  student_after_first_session("Anton", 1, 4, 221231230, marks);
    ASSERT_EQ(student_after_first_session.GetFirstSessionMarks(),marks);
}
TEST(testGetSecondSessionMarks,test1){
    int*marks = new int[4]{5,6,7,8};
    int *marks_second_session = new int[5]{4, 7, 6, 9, 8};
    SecondSession student_after_second_session("Anton", 1, 4, 221231230, marks, marks_second_session);
    ASSERT_EQ(student_after_second_session.GetSecondSessionMarks(),marks_second_session);
}
TEST(testAverageMarks,test1){
    int*marks = new int[4]{5,6,7,8};
    int *marks_second_session = new int[5]{4, 7, 6, 9, 8};
    SecondSession student_after_second_session("Anton", 1, 4, 221231230, marks, marks_second_session);
    ASSERT_EQ(student_after_second_session.AverageMark(),6);
}
