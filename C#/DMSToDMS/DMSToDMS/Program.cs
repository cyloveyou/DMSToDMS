using System.Net;

namespace DMSToDMS;

internal class Program
{
    static (int d, int m, double s) DMSToDMS(double dmsAngle)
    {
        dmsAngle = dmsAngle * 10000;//为了保证精度,先乘以10000
        int sAngle = (int)dmsAngle;//取整数部分进行提取
        int d = sAngle / 10000;// 获取度,这里是整数除法,自动取整
        int m = (sAngle - d * 10000) / 100;//获取分
        double s = dmsAngle - d * 10000 - m * 100;//获取秒

        return (d, m, s);//使用元组形式进行返回
    }
    static void Main(string[] args)
    {
        //测试函数
        double a = 1.40000;
        double b = 13.14520;
        double c = 13.14521;

        Console.WriteLine(DMSToDMS(a));
        Console.WriteLine(DMSToDMS(b));
        Console.WriteLine(DMSToDMS(c));
    }
}