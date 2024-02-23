#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char str1[100];
     cout<<"WRITING ONTO THE FILE"<<endl;
    cout<<"Enter the msg you want to write into file"<<endl;
    cin.getline(str1,100);
    ofstream myfile("file1.txt",ios::app);
    myfile<<str1;
    cout<<"WRITEOPERATION DONE"<<endl;
    cout<<"Once gain write it"<<endl;
    char str2[200];
    cin.getline(str2,100);
    myfile<<str2;
    ifstream in("file1.txt");
    in.getline(str2,100);
    cout<<"Read the data firom file:"<<endl;
    cout<<str2<<endl;
    myfile.close();
    return 0;
}