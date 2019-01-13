/*
	文件名：StudentDormitory.cpp
	关联文件：StudentDormitory.h
	功能：实现StudentDormitory类
	内容：
*/
#include "StudentDormitory.h"

StudentDormitory::Student::Student(string sex, string faculty, string name, string student_ID)
{
	sex_ = sex;
	faculty_ = faculty;
	name_ = name;
	student_ID_ = student_ID;
}

StudentDormitory::StudentDormitory()
{
}
/*
	StudentDormitory
	功能：有参构造StudentDormitory类对象
	内容：
*/
StudentDormitory::StudentDormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted, int available_people, int actual_people, Student stu[], int price_per_student, int dormitory_actual_amount)
{
}


StudentDormitory::~StudentDormitory()
{
}

bool StudentDormitory::setDormitory()
{
	return false;
}
