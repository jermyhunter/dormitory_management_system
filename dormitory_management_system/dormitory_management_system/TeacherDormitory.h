/*
	文件名：TeacherDormitory.h
	关联文件：TeacherDormitory.cpp
	功能：声明TeacherDormitory类
	内容：
*/
#ifndef TEACHERDORMITORY_H
#define TEACHERDORMITORY_H
#include "Dormitory.h"
class TeacherDormitory :
	public Dormitory
{
public:
	TeacherDormitory();//默认构造函数
	TeacherDormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted,
		string teacher_ID, int move_in_year, int living_duration, int rent_per_month, int utility_bills, int total_amount);//有参构造函数
	~TeacherDormitory();

	bool setTeacherDormitory();//设置值，在Table类的update函数中使用
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
	string teacher_ID_;//入住教师工号
	int move_in_year_;//搬入年份
	int living_duration_;//入住时间
	int rent_per_month_;//月租费
	/*
		月租金 = （1/2 *(当前年份-入住年份) + 1) * 5 * 面积
	*/
	int utility_bills_;//水电费
	int total_amount_;//总费用

};

#endif  // !TEACHERDORMITORY_H