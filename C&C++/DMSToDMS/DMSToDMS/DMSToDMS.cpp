#include<iostream>
using namespace std;

//ʹ�ýṹ��洢�ȷ���
typedef struct
{
	int d, m;
	double s;
}DMSAngle;

void DMSToDMS(double dmsAngle, DMSAngle* dms)
{
	dmsAngle = dmsAngle * 10000;// Ϊ�˱�֤����,�ȳ���10000
	int sAngle = (int)dmsAngle;// ȡ�������ֽ�����ȡ
	dms->d = sAngle / 10000;// ��ȡ��,��������������,�Զ�ȡ��
	dms->m = (sAngle - dms->d * 10000) / 100;//��ȡ��
	dms->s = dmsAngle - dms->d * 10000 - dms->m * 100;//��ȡ��
	//C����ֱ�Ӳ��ô���ָ��ķ�ʽ���нṹ����޸ģ���û�з���ֵ
}

int main() {
	//���е��ò���
	double a = 1.40000, b = 13.14520, c = 13.14521;
	DMSAngle dmsAngle_a;
	DMSToDMS(a, &dmsAngle_a);//ֱ�Ӵ��ݽṹ��ĵ�ַ����

	DMSAngle dmsAngle_b;
	DMSToDMS(b, &dmsAngle_b);

	DMSAngle dmsAngle_c;
	DMSToDMS(c, &dmsAngle_c);

	//���Խ�����,���Զ���ɺ�����ʹ��C++�����������ͽṹ�嶨���һ����Ҳ�ǲ����ѡ��
	cout << dmsAngle_a.d << " " << dmsAngle_a.m << " " << dmsAngle_a.s << endl;
	cout << dmsAngle_b.d << " " << dmsAngle_b.m << " " << dmsAngle_b.s << endl;
	cout << dmsAngle_c.d << " " << dmsAngle_c.m << " " << dmsAngle_c.s << endl;

	return 0;
}