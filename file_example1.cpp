//filehandling in c++
//file write operation 
#include<fstream>
#include<iostream>
using namespace std;
int main(){
	char arr[100];
	cout<<"ENter the your nma eand age:"<<endl;
	cin.getline(arr,100);
	ofstream myfile("xyz.txt");//ofstrema is the data type like int float
	//where myfile is the name of the data type ofstream 
	//xyz.txt is the file name it will set the file for the variable myfile
	//here just open the file
	myfile<<arr;
	myfile.close();
	cout<<"file write operationperformed successfully"<<endl;
	return 0;
}
