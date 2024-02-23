#include<iostream>
#include<fstream>
using namespace std;
int main(){
   /* Reading operation from the file*/
   char arr[100];
  //string arr;
   //cin.getline(arr,100); 
   cout<<"Reading from the file"<<endl;
    ifstream obj("xyz.txt");
    obj.get(arr,100);
    cout<<"cotent in the file:"<<arr<<endl;
    obj.close();

    cout<<"file operation successfully"<<endl;
    return 0;
}