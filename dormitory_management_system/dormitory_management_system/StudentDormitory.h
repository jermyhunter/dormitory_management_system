/*
文件名：StudentDormitory.h
关联文件：StudentDormitory.cpp
功能：声明StudentDormitory类
内容：
*/
#ifndef STUDENTDORMITORY_H
#define STUDENTDORMITORY_H
#include "Dormitory.h"
#include<vector>
#include<string>

class StudentDormitory :
	public Dormitory
{
public:
	class Student;
	StudentDormitory();//默认构造函数
	StudentDormitory( int building_num, int floor_num, int room_num, double area, string repair_status, 
		int available_people, int actual_people, Student stu[], int price_per_student, int dormitory_actual_amount);//有参构造函数
	~StudentDormitory();
	bool setDormitory();//设置值，在Table类的update函数中使用
						/*
						学生类
						*/
	class Student {
		Student();
		Student(string sex, string faculty, string name, string student_ID);
		string sex_;//性别
		string faculty_;//学院
		string name_;//学生姓名
		string student_ID_;//学号
	};
private:
	/*
	从父类Dortory继承来的属性
	int room_num_;//房间号
	int building_num_;//楼号
	int floor_num_;//楼层号
	int room_num_;//房间号
	int area_;//面积
	int repair_status_;//修缮情况
	bool is_deleted_ = false;//逻辑删除
	*/
	int available_people_;//可住人数
	int actual_people_;//实住人数
	vector<Student> student_;//记录每个学生的信息
	int price_per_student_;//每学生价格
	int dormitory_actual_amount_;
	/*
	宿舍实际征收金额=每学生价格*实住人数
	*/

};
#endif	// !STUDENTDORMITORY_H
