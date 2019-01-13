/*
文件名：Dormitory.cpp
关联文件：Dormitory.h
功能：实现Dormitory类
内容：
*/
#include "Dormitory.h"
#include<iostream>

Dormitory::Dormitory()
{
}
/*
Dormitory
功能：有参构造Dormitory类对象
内容：
*/
Dormitory::Dormitory(int building_num, int floor_num, int room_num, double area, string repair_status)
{
	building_num_ = building_num;
	floor_num_ = floor_num;
	room_num_ = room_num;
	area_ = area;
	repair_status_ = repair_status;
}


Dormitory::~Dormitory()
{
}

