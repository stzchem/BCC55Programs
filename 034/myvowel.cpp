#include <iostream>
using namespace std;

int main()
{
	char c;
	bool ischar;
	int isLowercaseVowel,isUppercaseVowel;
	cout<<"����һ����ĸ��";
	cin>>c;
	ischar=((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
	if(ischar)
	{
		isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
		isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
		if(isLowercaseVowel||isUppercaseVowel)
			cout<<c<<" ��Ԫ��";
		else
			cout<<c<<" �Ǹ���";
	}
	else
	{
		cout<<"����Ĳ�����ĸ������"<<endl;
	}

	return 0;
}