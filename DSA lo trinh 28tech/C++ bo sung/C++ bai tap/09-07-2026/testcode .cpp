//#include <string>
//#include <iostream>
//#include <iomanip> 
//#include <vector>
//#include <algorithm>
//#include <math.h>
//
//
//// nhap vao mot mang, duyet toan bo mang, dua ra cap so co tong la so chan
//using namespace std; 
//
////void change (int &n)
////{
////	n=n+100;
////	cout << n << " cnay la n "<< endl;
////}
//
//using namespace std;
//
//int main(){
//    vector<int> v;
//    v.push_back(1); // {1}
//    v.push_back(2); // {1, 2}
//    v.push_back(3); // {1, 2, 3}
//    v.push_back(4); // {1, 2, 3, 4}
//    int a = v.size();
//    cout << "Kich thuoc vector : " << a << endl; // v.length()
//    cout << "Duyet vector bang chi so : \n";
//    for(int i = 0; i < v.size(); i++){
//        cout << v[i] << ' ';
//    }  
//    cout << "\nDuyet vector bang ranged-base for loop :\n";
//    for(int x : v){
//        cout << x << ' ';
//    }
//    return 0;
//}
//	

//#include <iostream>
//#include <algorithm>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//int main(){
//   cout << "Hello PTIT.";
//   
//}
//


#include "stdio.h"
int main()
{
	int n;
	scanf("%d",&n);
	if (n==2)
	{
		printf("%d la so nguyen to",n);
		return 0;
	}
	else 
	{
			int check=0;
		for (int i=2; i<n; i++)
		{
			if (n%i==0) check=1;
		}
		if (check==1) printf("so %d la hop so",n);
		else printf("so %d la so nguyen to",n);
	}

}









