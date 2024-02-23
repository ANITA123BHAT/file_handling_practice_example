#include<fstream>
#include<iostream>
using namespace std;
int main(){
	char arr[100];
	cout<<"ENter the your nma eand age:"<<endl;
	cin.getline(arr,100);
    /*here if we use fstream then we have to specify what we want to do perform
    like to write ios::out to read ios::in to append ios::app
    but in oftream and iftsream no need to specify it be deafult will do
    the write and read operation*/

   // fstream myfile("xyz.txt",ios::out | ios::app);

	ofstream myfile("xyz.txt",ios::app);//ofstrema is the data type like int float
	//where myfile is the name of the data type ofstream 
	//xyz.txt is the file name it will set the file for the variable myfile
	//here just open the file
	myfile<<arr;
	myfile.close();
	cout<<"file write operationperformed successfully"<<endl;
    cout<<"REdaing from the file operation started"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"array cotent:"<<arr1<<" "<<endl;
    cout<<"file read operation successful"<<endl;
	return 0;
}
