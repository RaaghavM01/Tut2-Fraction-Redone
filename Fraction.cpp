#include <iostream>
using namespace std;

class Fraction
{
private:
	double num, denom;

public:
	Fraction(double x,double y)
	{
		num = x;
		denom = y;
	}//Constructor

	~Fraction()
	{
		num = 5;
		denom = 7;
	}//Deconstructor

	double getNumDenominator()
	{
		return denom;
	}//getNumDenominator

	double getNumNumerator()
	{
		return num;
	}//getNumNumerator

	void setDenominator(double newVal1)
	{
		denom = newVal1;
	}//setDenominator

	void setNumerator(double newVal2)
	{
		num = newVal2;
	}//setNumerator

	void Add(double val)
	{
		cout << num<<"/" <<denom<<"+"<<val<<"="<<(num/denom)+val<< endl;
	}//Add

	void Add(float v)
	{
		cout << num << "/" << denom << "+" << v << "=" << (num / denom) + v << endl;
	}//AddOverload

	void Subtract(double val2)
	{
		cout << num << "/" << denom << "-" << val2 << "=" << (double)(num / denom) - val2 << endl;
	}//SubtractOverload

	void Subtract(float v2)
	{
		cout << num << "/" << denom << "-" << v2 << "=" << (double)(num / denom) - v2 << endl;
	}//SubtractOverload

	void Multiply(double val3)
	{
		cout << num << "/" << denom << "*" << val3 << "=" << (num / denom) * val3 << endl;
	}//MultiplyOverload

	void Multiply(float v3)
	{
		cout << num << "/" << denom << "*" << v3 << "=" << (num / denom) * v3 << endl;
	}//MultiplyOverload

	void Divide(double val4)
	{
		cout << num << "/" << denom << "*" << val4 << "=" << (num / denom) / val4 << endl;
	}//DivideOverload

	void Divide(float v4)
	{
		cout << num << "/" << denom << "/" << v4 << "=" << (num / denom) / v4 << endl;
	}//DivideOverload

	void print()
	{
		cout << "Fraction: " << num / denom << endl;
	}//Print

};
int main()
{
	double xx, yy;
	int ch;
	double nV1 = 0, nV2 = 0;
	bool flag = true;
	cout << "Enter numerator: " << endl;
	cin >> xx;
	cout << "Enter denominator: " << endl;
	cin >> yy;
	Fraction obj(xx,yy);
	while (flag == true)
	{
		cout << "Choose from the following options: \nEnter 0 to exit\n1. Get Numerator\n2. Get denominator\n3. Change Numerator value\n4. Change Denominator value\n5. Subtract\n6. Add\n7. Multiply\n8. Divide\n9. Print\n10. Use Overload functions" << endl;
		cin >> ch;
		switch (ch)
		{
		case 0:
			flag = false;
			break;
		case 1:
			cout << "Numerator: " << obj.getNumNumerator() << endl;
			break;
		case 2:
			cout<<"Denominator: "<<obj.getNumDenominator()<<endl;
			break;
		case 3:
			cout << "Please enter new numerator:" << endl;
			cin >> nV1;
			obj.setNumerator(nV1);
			cout << "Numerator: " << obj.getNumNumerator() << endl;
			break;
		case 4:
			cout << "Please enter new denominator:" << endl;
			cin >> nV2;
			obj.setDenominator(nV2);
			break;
		case 5:
			double x;
			cout << "Please enter value to subtract by:" << endl;
			cin >> x;
			obj.Subtract(x);
			break;
		case 6:
			double w;
			cout << "Please enter value to add to:" << endl;
			cin >> w;
			obj.Add(w);
			break;
		case 7:
			double y;
			cout << "Please enter value to multiply by:" << endl;
			cin >> y;
			obj.Multiply(y);
			break;
		case 8:
			double z;
			cout << "Please enter value to divide by:" << endl;
			cin >> z;
			obj.Divide(z);
			break;
		case 9:
			obj.print();
			break;
		case 10:
			float a;
			cout << "Enter value to add/multiply/divide/subtract with: " << endl;
			cin >>a ;
			obj.Add(a);
			obj.Divide(a);
			obj.Multiply(a);
			obj.Subtract(a);
			break; 
		default:
			cout << "Input isn't recognizable, please try again." << endl;
			break;
		}//Switch
	}//while
	return 0;
}