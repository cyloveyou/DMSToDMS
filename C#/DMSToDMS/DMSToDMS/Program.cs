using System.Net;

namespace DMSToDMS;

internal class Program
{
    static (int d, int m, double s) DMSToDMS(double dmsAngle)
    {
        dmsAngle = dmsAngle * 10000;
        int sAngle = (int)dmsAngle;
        int d = sAngle / 10000;
        int m = (sAngle - d * 10000) / 100;
        double s = dmsAngle - d * 10000 - m * 100;
        return (d, m, s);
    }
    static void Main(string[] args)
    {
        double a = 1.40000;
        double b = 13.14520;
        double c = 13.14521;
        Console.WriteLine(DMSToDMS(a));
        Console.WriteLine(DMSToDMS(b));
        Console.WriteLine(DMSToDMS(c));
    }
}