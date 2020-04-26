#include<iostream>
using namespace std;


class Lib{
	
protected: 
int Choise;


public:
	void intro(){
cout<<"																				"<<endl;		
		
cout<<"***********************************************          RAHUL LIBRARY            **************************************"<<endl;	
		
cout<<"***********************************************            ESTD-2019              **************************************"<<endl;		
		
cout<<"***********************************************     BANARHAT DIST:JALPAIGURI      ************************************"<<endl;

cout<<"																				"<<endl;
		
		cout<<"					1.Librarian "<<endl;
		cout<<"					2.Student "<<endl;
		
		cout<<"				Enter the Choise :"<<endl;
						cin>>Choise;
	}
	void Librarian(){
		int Password;
		if(Choise==1){
			cout<<"								Enter Your Password "<<endl;
																	cin>>Password;
			if(Password =1){
				cout<<"				Your Data is Sorted"<<endl;
				
			}
			else{
				cout<<"					Invalid Password"<<endl;
			}
			
		}
	
	}
//	void Student(){
//		int ch,ch1;
//	if(Choise==2)	{
//		cout<<"1.CSE"<<endl;
//		cout<<"2.EE"<<endl;
//		cout<<"3.CE"<<endl;
//		cout<<"4.ME"<<endl;
//		cout<<"5.ECE"<<endl;
//		cout<<"Enter the Choise"<<endl;
//		cin>>ch;
		//if(ch==1){
			
		//	cout<<"1.JAVA"<<endl;
		//	cout<<"2,PYTHON"<<endl;
		//	cout<<"3.C"<<endl;
		//	cout<<"C++"<<endl;
		//	cout<<"Enter the Choise"<<endl;
		//	cin>>ch1;
			
		//}
		
//	}
//}
};
class Lib1:public Lib{
	public:
		void Student(){
		int ch,input;
		int Count=0;
		int j=0,p=0,c1=0,c=0;
			int m=0,n=0,k=0,v=0;
			int h=0,g=0,f=0;
				int x=0,z=0,y=0;
				int o=0,w=0,t=0;
				
while(true)			{
	if(Choise==2)	{
		cout<<"									1.CSE"<<endl;
		cout<<"									2.EE"<<endl;
		cout<<"									3.CE"<<endl;
		cout<<"									4.ME"<<endl;
		cout<<"									5.ECE"<<endl;
		cout<<"									6.RECORDS"<<endl;
		cout<<"		Enter the Choise"<<endl;
				cin>>ch;

	
	if(ch==1){

cout<<"**********************************************************CSE***********************************************************"<<endl;		
			
			cout<<"	1.JAVA"<<endl;
			cout<<"	2.PYTHON"<<endl;
			cout<<"	3.C"<<endl;
			cout<<"	4.C++"<<endl;
			cout<<"	5.RECORDS"<<endl;
			cout<<"			Enter the Choise"<<endl;
									cin>>input;
			
if(input==1){
	if(Count<=50){
	

	Count = Count+1;
	j++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}		
else if(input==2){
	if(Count<=50){
	

	Count = Count+1;
	p++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}
else if(input==3){
	if(Count<=50){
	

	Count = Count+1;
	c++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}	
else if(input==4){
	if(Count<=50){
	

	Count = Count+1;
	c1++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}

		
else{
cout<<"***********************************************Ivalid Input*************************************************************"<<endl;
	cout<<"    "<<endl<<endl;		
	}
	
}


	
		
		if(ch==2){
cout<<"*********************************************************EE*************************************************************"<<endl;			
			
			cout<<"		1.CIRCUIT"<<endl;
			cout<<"		2.THEORY"<<endl;
			cout<<"		3.BULB"<<endl;
			cout<<"		4.KKKK"<<endl;
		
			cout<<"				Enter the Choise"<<endl;
											cin>>input;
			
			if(input==1){
	if(Count<=50){
	

	Count = Count+1;
	v++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}		
else if(input==2){
	if(Count<=50){
	

	Count = Count+1;
	k++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}
else if(input==3){
	if(Count<=50){
	

	Count = Count+1;
	m++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}	
else if(input==4){
	if(Count<=50){
	

	Count = Count+1;
	n++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}

else{
cout<<"***********************************************Ivalid Input*************************************************************"<<endl;
	cout<<"    "<<endl<<endl;		
	}
		}
		
		if(ch==3){
cout<<"**********************************************************CE************************************************************"<<endl;			
			cout<<"			1.BALU"<<endl;
			cout<<"			2.CEMENT"<<endl;
			cout<<"			3.STONE"<<endl;
				cout<<"						Enter the Choise"<<endl;
																	cin>>input;
			
			
			if(input==1){
	if(Count<=50){
	

	Count = Count+1;
	f++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}		
else if(input==2){
	if(Count<=50){
	

	Count = Count+1;
	g++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}
else if(input==3){
	if(Count<=50){
	

	Count = Count+1;
	h++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}	
		}
		
		
	}
	
	if(ch==4){
cout<<"**********************************************************ME************************************************************"<<endl;			
			cout<<"			1.MACHENICS"<<endl;
			cout<<"			2.THERMODYNAMICS"<<endl;
			cout<<"			3.LOHA"<<endl;
				cout<<"						Enter the Choise"<<endl;
																	cin>>input;
			
			
			if(input==1){
	if(Count<=50){
	

	Count = Count+1;
	z++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}		
else if(input==2){
	if(Count<=50){
	

	Count = Count+1;
	y++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}
else if(input==3){
	if(Count<=50){
	

	Count = Count+1;
	x++;
}
	
}
}



	if(ch==5){
cout<<"**********************************************************ECE************************************************************"<<endl;			
			cout<<"			1.ELECTRONICS"<<endl;
			cout<<"			2.COMMNUCATION"<<endl;
			cout<<"			3.NETWORK"<<endl;
				cout<<"						Enter the Choise"<<endl;
																	cin>>input;
			
			
			if(input==1){
	if(Count<=50){
	

	Count = Count+1;
	w++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}		
else if(input==2){
	if(Count<=50){
	

	Count = Count+1;
	o++;
}
else
cout<<"Books Are Not In Stock"<<endl;
	
}
else if(input==3){
	if(Count<=50){
	

	Count = Count+1;
	t++;
}
	
}
}
		

if(ch==6){
cout<<"************************************************************RECORDS*****************************************************"<<endl;

cout<<"	Total Book Sold : " <<Count<<endl;




cout<<"**********************************************************CSE***********************************************************"<<endl;


cout<<"	JAVA : " <<j<<endl;

cout<<"	PYTHON  : " <<p<<endl;
cout<<"	C : " <<c<<endl;

cout<<"	C++: " <<c1<<endl;




cout<<"**********************************************************EE************************************************************"<<endl;



cout<<"	CIRCUIT : " <<v<<endl;

cout<<"	THEORY  : " <<k<<endl;

cout<<"	BULB TUTORIAL BOOKS : " <<m<<endl;

cout<<"	KKKK : " <<n<<endl;




cout<<"***********************************************************CE***********************************************************"<<endl;




cout<<"	BALU: " <<f<<endl;

cout<<"	CEMENT  : " <<g<<endl;
	
cout<<"	STONE : " <<h<<endl;
	


cout<<"***********************************************************ME***********************************************************"<<endl;



cout<<"	MECHENICS: " <<x<<endl;

cout<<"	THERMODYNAMICS  : " <<y<<endl;
	
cout<<"	LOHA : " <<z<<endl;



cout<<"**********************************************************ECE************************************************************"<<endl;	



cout<<"	ELECTRONICS: " <<o<<endl;

cout<<"	NETWORK  : " <<t<<endl;
	
cout<<"	COMMNUCATION: " <<w<<endl;



	
		}
		
}
}
};

int main(){
	Lib1 l;
	l.intro();
	l.Librarian();
	l.Student();
	
}
