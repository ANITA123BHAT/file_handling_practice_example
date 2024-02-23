#include<iostream>
#include<fstream>
/*fstream is the classes for the working with file in c++
1.fstreambase -base class
2.ifstream --derived from fstreambase
3.ofstream -- derived from fstreambase */
/* Inorder to work with file in c++, you have to open it priarily ; there are 2 ways to open it*/

/*1.using the member function open() of the class
2.using the constructor*/
/*now we are using constructor 2nd method*/
using namespace std;
int main(){
    string str="Hi anita how is holiday?";
    string str2;
    /*open the files using constructor and writing it */
    ofstream out("sample.txt"); //writing operation
    /*out is the  object of ofstream class*/
    /* ofstream is the class to perform write operation*/
    out<<str;
/*NOTE:here out is the object name that name can be anything */
/*opening the file using constructor and reading it*/
ifstream in("sample_1.txt"); //reading operation
/*in>>str2; here this will take only the single word in the completee line not entoir line */
getline(in,str2);
cout<<str2<<endl;
    return 0;
}