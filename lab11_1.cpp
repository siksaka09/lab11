#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int number = 1;
	do{
		cout << "Student [" <<number <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;
			//Do something
		}else if(grade == 'B'){ // if grade is B
			count[1]++;
			//Do something
		}else if(grade == 'C'){ // if grade is B
			count[2]++;
		}else if(grade == 'D'){ // if grade is B
			count[3]++;
		}else if(grade == 'F'){ // if grade is B
			count[4]++;
		}else if(grade == '0'){ // if grade is B
			break;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";//Do something
			number--;
		} 
		number++;
	}while(true);
	
	
	cout << "In total "<< number-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}