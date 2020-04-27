#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int cnt;

	while(1){
		getline(cin,str);
		if(str=="#") break;
		cnt=0;

		for(int i=0; i<str.length(); i++){
			char l= str.at(i);
			if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='U') cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
