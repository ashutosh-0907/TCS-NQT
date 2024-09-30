#include<bits/stdc++.h>
using namespace std;


int main(){

vector<float>f;
vector<string>s;
vector<int>v;


string input_data = "3.14,hello,33\n22.7,world,35"; 

stringstream input_stream(input_data);

string str;
while (getline(input_stream,str)){
stringstream ss(str);

string decimal;
getline(ss,decimal,',');
f.push_back(stod(decimal));

string st;
getline(ss,st,',');
s.push_back(st);

string integer;
getline(ss,integer,',');
v.push_back(stoi(integer));
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