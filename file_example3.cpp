#include<iostream>
#include<fstream>//header file
using namespace std;
int main(){
    string st;
    ofstream out;
    out.open("sample.txt");
    out<<"This is me";
    out<<"THis is anita";
    out<<"Hii i know!";
    out.close();//close the file

    ifstream in;
    in.open("sample_1.txt");
   /*in>>st>>st2; here it will take indivisual word like st take 1st word in the file st2 take next word like so on....*/
   /* so that to take entire w ewill use*/
   //cout<<st<<st2<<"\n";
    //  getline(in,st);/*reading from file*/
    // cout<<st<<"\n";
       /*OR*/
 while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
 }
    in.close();
    return 0;
}