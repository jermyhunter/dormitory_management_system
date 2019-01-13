/*
	文件名：Table.h
	功能：声明Table类
	关联文件：Table.cpp
	内容：声明Table类，完成指针数组对类对象的连接，以及增、删、查、改的操作
*/
#ifndef TABLE_H
#define TABLE_H
#include "StudentDormitory.h"
#include "TeacherDormitory.h"
#include <vector>

class Table
{
public:
	Table();
	~Table();

	bool create();//创建新文件，对新文件进行操作
	bool open();//打开文件，同时进行读取操作，初始化指针数组
	bool save();//保存文件

	bool insert();//插入记录
	/*
		排序
		学生宿舍只进行房号排序；对教师宿舍进行编号、姓名排序
		排序需要根据是学生还是教师宿舍，进行分支
		*排序查找对于is_deleted_ = true的记录仍进行排序
	*/
	bool search();//根据用户提示，调用排序函数，以及查找函数

	void sortIDTeacher();//对教师宿舍按ID进行排序
	void sortNameTeacher();//对教师宿舍按姓名进行排序
	void sortRoomNum();//按房号进行排序

	bool searchIDStudent();//对学生宿舍进行ID的顺序查找
	bool searchIDTeacher();//对教师宿舍进行ID的顺序查找
	void searchNameStudent();//对学生宿舍进行姓名的顺序查找
	void searchNameTeacher();//对教师宿舍进行姓名的二分查找
	bool searchRoomNum();//按进行姓名的二分查找
	bool update();//改
	bool remove();//删
private:
	const static int student = 0;
	const static int teacher = 1;
	int flag = student;//flag标记，student表示当前table对学生宿舍进行处理，teacher表示对教师宿舍进行处理
	vector<StudentDormitory*> point_array_student_;//学生宿舍指针数组
	vector<TeacherDormitory*> point_array_teacher_;//教师宿舍指针数组
	/*
		以下为统计属性，新增宿舍房间数room_num_
	*/
	int room_num_ = 0;//宿舍房间数
	int total_amount_;//所有房间总价
	int price_per_building_;//	学生/教师宿舍 每栋楼平均价格
	int price_per_room_;//宿舍平均房间价
	int price_per_meter_;//平均每平米价格

};
#endif // !TABLE_H