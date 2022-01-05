#include <iostream>
#include <iomanip>
using namespace std;
double avg;
//class declaration
class main_class{
	public:main_class(){
		float subjects[5][0];
		double sb1=subjects[0][0];
		double sb2=subjects[1][0];
		double sb3=subjects[2][0];
		double sb4=subjects[3][0];
		double sb5=subjects[4][0];
		cout<<"Enter 5 subjects"<<endl;
		cout<<"Enter Subject 1"<<endl;
		cin>>sb1;
		cout<<"Enter Subject 2"<<endl;
		cin>>sb2;
		cout<<"Enter Subject 3"<<endl;
		cin>>sb3;
		cout<<"Enter Subject 4"<<endl;
		cin>>sb4;
		cout<<"Enter Subject 5"<<endl;
		cin>>sb5;
		double total=sb1+sb2+sb3+sb4+sb5;
		avg=total/5;
		cout<<"your Total is "<<total<<endl;
		cout<<"your Avg is "<<setprecision(2)<<avg<<endl;
		grade_l();
		cin.get();
		rules();
		cout<<"Press Enter To Exit"<<endl;
		cin.get();
	}
	grade_l(){
		cout<<"Your Grade Letter Is: ";
		if(avg>=92 & avg<=100){
    		cout<<"A+";
		} 
		else if(avg>=86 & avg<=91){
	    	cout<<"A";
		}
		else if(avg>=79 & avg<=85){
	    	cout<<"B+";
		}
	    else if(avg>=70 & avg<=78){
	    	cout<<"B";
		}
		else if(avg>=63 & avg<=69){
	    	cout<<"C+";
		}
		else if(avg>=56 & avg<=62){
	    	cout<<"C";
		}
		else if(avg>=50 & avg<=55){
	    	cout<<"D";
		}
		else if(avg>=0 & avg<=49){
	    	cout<<"F";
		}
		else {
			cout<<"Invalid!";
		}
		cout<<endl;
	}
	rules(){
		cout<<"\nMarks         Grade"<<endl;
		cout<<"92-100           A+"<<endl;;
		cout<<"86-91            A"<<endl;
		cout<<"79-85            B+"<<endl;
		cout<<"70-78            B"<<endl;
		cout<<"63-69            C+"<<endl;
		cout<<"56-62            C"<<endl;
		cout<<"50-55            D"<<endl;
		cout<<"0-49             F"<<endl;
	}
};


main(){
	main_class hello;
	
}
