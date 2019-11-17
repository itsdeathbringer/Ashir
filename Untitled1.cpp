#include<iostream>
using namespace std;
int main()
{
	const double feet_into_inch=12;
	const double inch_into_centi=2.54;
	
	
	double feet;
	cout<<"feet";
	cin>>feet;
		
		
		double inches;
		cout<<"inches";
		cin>>inches;
		
		
		double total_inches= feet*feet_into_inch;
		
		double total_centi = total_inches*inch_into_centi;
		
		
		cout<<"/n our result :"<< total_centi;
		
		return 0;
}
