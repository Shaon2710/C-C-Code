#include<iostream>

using namespace std;

int main()
{
	long long year;
	while(cin>>year)
	{

		if(year%15==0)
		{
			if(year%4==0 || year%400==0)
			{
				cout<<"This is leap year."<<endl;
				cout<<"This is huluculu festival year."<<endl;
				cout<<endl;
			}
			else cout<<"This is huluculu festival year.\n"<<endl;
		}
		else if(year%4==0 || year%400==0)
		{
			if(year%55==0){
				cout<<"This is leap year."<<endl;
				 cout<<"This is bulukulu festival year.\n"<<endl;
			}
			else cout<<"This is leap year.\n"<<endl;
		}
		else if((year%4==0||year%400==0) && year%55==0 && year%15==0)
		{
			cout<<"This is leap year."<<endl;
			cout<<"This is huluculu festival year."<<endl;
			cout<<"This is bulukulu festival year."<<endl;
			cout<<endl;
		}
		else{
			cout<<"This is an ordinary year."<<endl;
		}
	}

	return 0;
}
