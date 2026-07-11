#include <string>
#include <iostream>
#include <iomanip> 
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std; 

int main()
{
	int a;
	cin >> a;
	if (a<=0)
	{
		cout << "INVALID";
		return 0;
	}
	if (a%400==0 || (a%4==0 && a%100!=0)) 
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	
	
	ios::sync_with_stdio(false); // 2 cau lenh tang toc do doc ghi
	cin.tie(nullptr);
}

