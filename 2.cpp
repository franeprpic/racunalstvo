#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> prvi;
	prvi.push_back(3);
	prvi.push_back(10);
	prvi.push_back(33);
	
	cout<<"Vektori su: ";
	for(unsigned int i=0;i<prvi.size();i++) {
		cout<<prvi[i]<< " ";
	}
	cout<<endl;
	if (prvi.empty()) {
		cout<<"Vektor prvi je prazan.";
	}
	else {
		cout<<"Vektor prvi nije prazan.";
	}
	cout<<endl;
	vector<int> drugi;
	drugi.push_back(11);
	drugi.push_back(38);
	drugi.push_back(43);
	if (prvi!=drugi) {
		cout<<"Stari vektor nije jednak novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	prvi=drugi;
	
	if(prvi!=drugi) {
		cout<<"Stari vektori nije jedan novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
