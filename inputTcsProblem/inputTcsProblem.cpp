#include<bits/stdc++.h>
using namespace std;


int main(){

vector<float>f;
vector<string>s;
vector<int>v;



string str;
while (getline(cin,str)){ //till user is giving input, loop will run
stringstream ss(str);

string decimal;
getline(ss,decimal,',');
f.push_back(stod(decimal)); //stod means string to decimal


string st;      //stof means string to float
getline(ss,st,',');
s.push_back(st);

string integer;
getline(ss,integer,',');
v.push_back(stoi(integer));  //stoi means string to int
}

for(int i=0;i<f.size();i++){
cout<<"Decimals : "<<f[i]<<endl;
}

for(int i=0;i<s.size();i++){
cout<<"Sting : "<<s[i]<<endl;
}

for(int i=0;i<v.size();i++){
cout<<"Integer : "<<v[i]<<endl;
}

}