#include <iostream>
using namespace std;

int main()
{
	char c;
	bool ischar;
	int isLowercaseVowel,isUppercaseVowel;
	cout<<"输入一个字母：";
	cin>>c;
	ischar=((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
	if(ischar)
	{
		isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
		isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
		if(isLowercaseVowel||isUppercaseVowel)
			cout<<c<<" 是元音";
		else
			cout<<c<<" 是辅音";
	}
	else
	{
		cout<<"输入的不是字母！！！"<<endl;
	}

	return 0;
}