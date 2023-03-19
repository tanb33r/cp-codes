// Nick Garver
// taylorSeries
// taylorSeries.cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = atan(1.0)*4.0;
double angle_in_degrees = 0;
double radians = 0;
double degreesToRadians(double d);
double factorial(double factorial);
double mySine(double x);
double myCosine(double x);

int main()
{
//    cout << "\033[2J\033[1;1H";
//    cout.width(4); cout << left << "Deg";
//    cout.width(9); cout << left << "Radians";
//    cout.width(11); cout << left << "RealSine";
//    cout.width(11); cout << left << "MySin";
//    cout.width(12); cout << left << "RealCos";
//    cout.width(11); cout << left << "MyCos"<<endl;

    while (angle_in_degrees <= 360) //radian equivalent of 45 degrees
    {
        cin>>angle_in_degrees;
//        double sine = sin(degreesToRadians(angle_in_degrees));
//        double cosine = cos(degreesToRadians(angle_in_degrees));
//        //output
//        cout.width(4); cout << left << angle_in_degrees;
//        cout.width(9); cout << left << degreesToRadians(angle_in_degrees);
//        cout.width(11); cout << left << sine;
        cout.width(11); cout << left << mySine(angle_in_degrees);
        cout.width(11); cout << left <<sin(angle_in_degrees);
//        cout.width(12); cout << left << cosine;
//        cout.width(11); cout << left << myCosine(degreesToRadians(angle_in_degrees))<<endl;
    }
    cout << endl;
    return 0;
}


double degreesToRadians(double d)
{
    double answer;
    answer = (d*PI)/180;
    return answer;
}

double mySine(double x)
{
    double f,result = 0;
    for(int i = 1; i <= 1000; i++) {

        f

        if (i % 2 == 1)
            result += pow(x, i * 2 - 1) / factorial(i * 2 - 1);
        else
            result -= pow(x, i * 2 - 1) / factorial(i * 2 - 1);
    }
    return result;
}

double myCosine(double x)
{
    double positive = 0.0;
    double negative= 0.0;
    double result=0.0;
    for (int i=4; i<=1000; i+=4)
    {
        positive = positive + (pow(x,i) / factorial (i));
    }
    for (int i=2; i<=1000; i+=4)
    {
        negative = negative + (pow(x,i) / factorial (i));
    }
    result = (1 - (negative) + (positive));
    return result;
}

double factorial(double factorial)
{
    float x = 1;
    for (float counter = 1; counter <= factorial; counter++)
    {
        x = x * counter;
    }
    return x;
}
