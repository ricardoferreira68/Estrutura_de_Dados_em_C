#include <iostream>
using namespace std;
int A = 200;
void FUNC1()
{
	int B;
	A = B = -100;
	cout<<"FUNC1:Valor de A: "<<A<<endl;
	cout<<"FUNC1:Valor de B: "<<B<<endl;
}
void FUNC2()
{
	int B;
	A = B = -200;
	cout<<"FUNC2:Valor de A: "<<A<<endl;
	cout<<"FUNC2:Valor de B: "<<B<<endl;
}
 int main(void)
 {
	int B;
	system("clear");  //”cls” no Windows
	cout<<"-----------------------\n";
	B = 10;
	cout<<"main:Valor de A: "<<A<<endl;
	cout<<"main:Valor de B: "<<B<<endl;
	cout<<"-----------------------\n";
	B = 20;
	FUNC1();
	cout<<"main:Valor de A: "<<A<<endl;
	cout<<"main:Valor de B: "<<B<<endl;
	cout<<"-----------------------\n";
	B = 30;
	FUNC2();
	cout<<"main:Valor de A: "<<A<<endl;
	cout<<"main:Valor de B: "<<B<<endl;
	cout<<"-----------------------\n";
	getchar();
	return 0;
 }
