#include<iostream>
using namespace std;

//使用结构体存储度分秒
typedef struct
{
	int d, m;
	double s;
}DMSAngle;

void DMSToDMS(double dmsAngle, DMSAngle* dms)
{
	dmsAngle = dmsAngle * 10000;// 为了保证精度,先乘以10000
	int sAngle = (int)dmsAngle;// 取整数部分进行提取
	dms->d = sAngle / 10000;// 获取度,这里是整数除法,自动取整
	dms->m = (sAngle - dms->d * 10000) / 100;//获取分
	dms->s = dmsAngle - dms->d * 10000 - dms->m * 100;//获取秒
	//C语言直接采用传递指针的方式进行结构体的修改，故没有返回值
}

int main() {
	//进行调用测试
	double a = 1.40000, b = 13.14520, c = 13.14521;
	DMSAngle dmsAngle_a;
	DMSToDMS(a, &dmsAngle_a);//直接传递结构体的地址调用

	DMSAngle dmsAngle_b;
	DMSToDMS(b, &dmsAngle_b);

	DMSAngle dmsAngle_c;
	DMSToDMS(c, &dmsAngle_c);

	//测试结果输出,可以定义成函数，使用C++面向对象将输出和结构体定义成一个类也是不错的选择
	cout << dmsAngle_a.d << " " << dmsAngle_a.m << " " << dmsAngle_a.s << endl;
	cout << dmsAngle_b.d << " " << dmsAngle_b.m << " " << dmsAngle_b.s << endl;
	cout << dmsAngle_c.d << " " << dmsAngle_c.m << " " << dmsAngle_c.s << endl;

	return 0;
}