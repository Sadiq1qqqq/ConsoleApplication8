

#include <iostream>
using namespace std;

int main()
{
	/*int aci = 0;
	while (aci<256)
	{
		cout<<aci << " :" << (char)aci << endl;
		aci++;
	}*/

	/*int u;
	cout<< "ulduz sayi : ";
	cin>>u;
	int say = 0;
	while (say < u) {
		cout << "*";
		say++;
	}
	cout << endl;*/




	//int num = 0;
	//while (num< 50)
	//{
	//	if (num%2== 0)
	//		cout << num << endl;
	//	num++;
	//}




	//int num;
	//cout << "Eded daxil edin: ";
	//cin >> num;
	//int num2;
	//cout << "Eded daxil edin: ";
	//cin >> num2;
	//int tek = 1;
	//int cut = 0;
	//while (num < num2)
	//{
	//	if (num % 2 == 0)
	//		cut += num;
	//	else
	//		tek *= num;
	//	num++;
	//}
	//cout << "Cut reqemlerin cemini:" << cut << endl;
	//cout << "Tek reqemlerin hasili:" << tek << endl;



	/*int num = 0;


	while (num < 100)
	{
		if (num % 3 == 0)
			cout<<num<<endl;
		num++;
	}*/



	//int num;
	// 
	//cout << "eded daxil edin: ";
	//cin >> num;
	//int f = 1;
	//while (num > 0)
	//{
	//	f *= num;
	//	num--;
	//}
	// 
	//cout << "Cavab: " << f << endl;



	//int num;

	//cout << "Eded daxil edin: ";
	//cin >> num;
	//int u;
	//cout << "Eded ustu daxil edin: ";
	//cin >> u;
	//int t = 1;
	//while (u > 0)
	//{
	//	t *= num;
	//	u++;
	//}
	//cout <<t<< endl;



	int num;
	cout << "Eded daxil edin: ";
	cin >> num;
	int c = 0;
	int r = 0;
	while (num > 0)
	{
		c += num % 10;
		num /= 10;
		r++;
	}
	cout << "Reqemlerin sayi: " << r << endl;
	cout << "Reqemlerin cemi: " << c << endl;
}

