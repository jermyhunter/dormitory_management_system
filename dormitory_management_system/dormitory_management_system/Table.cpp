/*
	文件名：Table.cpp
	关联文件：Table.h
	功能：实现Table类
	内容：
*/
#include "Table.h"


Table::Table()
{
}


Table::~Table()
{
}
/*
	create
	功能：创建新文件
	内容：根据用户提示，创建学生（教师）宿舍信息管理文件，设置flag标记，并进行添加记录操作，
		之后根据用户提示进行增删查改操作
	返回值：
*/
bool Table::create()
{
	return false;
}
/*
	open
	功能：打开文件
	内容：提示用户，打开学生宿舍/教师宿舍文件，并设置flag标记，扫描文件，统计宿舍数room_num_、
		总价total_amount_，并计算每栋楼均价price_per_building_、宿舍均价price_per_room_、每平米价格price_per_meter_
	返回值：
*/
bool Table::open()
{
	return false;
}
/*
	update
	功能：修改指针数组中的数据
	内容：根据用户提示，修改指针数组中的内容
	返回值：
*/
bool Table::update()
{
	return false;
}
/*
	remove
	功能：进行物理删除和逻辑删除
	内容：根据用户提示，调用removePhysical或者removeLogical函数
	返回值：
*/
bool Table::remove()
{
	return false;
}
