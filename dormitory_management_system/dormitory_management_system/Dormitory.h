/*
	文件名：Dormitory.h
	关联文件：Dormitory.cpp
	功能：实现Dormitory类
	内容：
*/
#ifndef DORMITORY_H
#define DORMITORY_H
#include<iostream>
using namespace std;
class Dormitory
{
public:
	Dormitory();//默认构造函数
	Dormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted);//有参构造函数
	virtual ~Dormitory();

protected:
	int building_num_;//楼号
	int floor_num_;//楼层号
	int room_num_;//房间号
	double area_;//面积
	string repair_status_;//修缮情况
	bool is_deleted_ = false;//逻辑删除

};
#endif // !DORMITORY_H