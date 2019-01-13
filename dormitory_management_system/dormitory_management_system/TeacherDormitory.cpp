/*
文件名：TeacherDormitory.cpp
关联文件：TeacherDormitory.h
功能：实现TeacherDormitory类
内容：
*/
#include "TeacherDormitory.h"


TeacherDormitory::TeacherDormitory()
{
}
/*
TeacherDormitory
功能：有参构造TeacherDormitory类对象
内容：
*/
TeacherDormitory::TeacherDormitory(int building_num, int floor_num, int room_num, double area, string repair_status, string teacher_ID, int move_in_year, int living_duration, int rent_per_month, int utility_bills)
{
	building_num_ = building_num;
	floor_num_ = floor_num;
	room_num_ = room_num;
	area_ = area;
	repair_status_ = repair_status;
	teacher_ID_ = teacher_ID;
	move_in_year_ = move_in_year;
	living_duration_ = living_duration;
	rent_per_month_ = rent_per_month;
	utility_bills_ = utility_bills;
	total_amount_ = (utility_bills_ + rent_per_month_) * living_duration_; //总费用=（水电费+月租）*入住时间
}


TeacherDormitory::~TeacherDormitory()
{
}
