#include<iostream>
#include<vector>
using namespace std;
int main()
{
int br=1;
int x=1;
int i,j;
vector<int> vec;
cout<<"unesite brojeve(za kraj unesite 0) "<<endl;
while(br!=0)
{
	cout<<"unesi "<<x<<" broj"<<endl;
	cin>>br;
	vec.push_back(br);
	x++;
	
}
cout<<"\n ponovljeni brojevi su "<<endl;
for(i=0;i<vec.size();i++)
{
	for(j=i+1;j<vec.size();j++)
	{
		if(vec[i]==vec[j])
		{
			cout<<vec[j]<<" ";
			break;
		}
	}
}
}
