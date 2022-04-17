#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int maxScore(string s)
{
	int maxres = 0;
	int maxnum = 0;
	for (int i = 0; i < s.size(); i++) 
	{    //右字串总和
		if (s[i] == '0')    maxnum++;
		else    maxnum += 2;
	}
	maxres = max(maxnum, maxres);
	for (int i = 0; i < s.size(); i++) 
	{    //滑动窗口
		if (s[i] == '0')    maxnum++;
		else    maxnum--;
		maxres = max(maxnum, maxres);
	}
	return maxres;
}

int main() {
	string s;
	cin >> s;
	cout << maxScore(s) << endl;
}



