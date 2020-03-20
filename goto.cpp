#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {
	string str;
	string zarez=",";
	int rjeci=1;
	cout<<"upisite recenicu "<<endl;
	getline(cin,str);
	for(int i=0;i!=str.size();i++)
	{
		if(str[i]==' '){rjeci=rjeci+1;
		
		}
		
	}
	cout<<"broj rjeci je "<<rjeci<<endl;
for(int i=0;i!=str.size();i++)
	{
		if(str[i]==' '){
			str[i]=',';
			
		}
	}
	
cout<<str;
	
	return 0;
}
