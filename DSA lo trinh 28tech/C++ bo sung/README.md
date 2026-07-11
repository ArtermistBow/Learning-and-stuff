# Learning and stuff
## Bai 1: lam quen voi C++ (09/07/2026)
### Tạo hàm main để code, ly thuyet co ban ve toan tu, kieu data, if else

- Mới đầu thì cứ máy móc như sau

``` c++
#include <iostream>

using namespace std; // chua bt la gi nhung cu ghi vao

int main()
{
	int a;
	cin >> a; // nhap xuat
	cout <<INT_MIN<< " "<< INT_MAX << " \n" << a << endl; // xuat du lieu
	
}
``` 

- Mấy phần toán tử so sánh, toán học, logic( &&, ||, !) giống C
- Kiểu dữ liệu giống C
- If else, switch case giống C

### Một số Bài khởi đầu
#### In ra sau dấu phẩy của float 2 số 

``` c++
#include <iostream>
#include <iomanip> // them cai thu vien nay ms cat ve 2 so sau dau phay dc

using namespace std; 

int main()
{
	int a,b;
	cin >> a >> b;
	int tong=a+b;
	int hieu=a-b;
	int tich=a*b;
	float thuong= (float)a/b;
	cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl; // in ra so co 2 chu so sau dau phay // ms dau cu hoc vet da
}

```

#### Tinh chu vi (In ra 2 số sau dấu phẩy của float)
``` c++
#include <iostream>
#include <iomanip> 
#include <math.h>

using namespace std; 

int main()
{
	int a;
	cin >> a;
	float chuvi = (float)a*2*3.14;
	float dientich = (float)pow(a,2)*3.14;
	cout << fixed << setprecision(2) << chuvi << " " <<  dientich << endl; 
}

```
#### Ep Kieu
``` c
#include <iostream>
#include <iomanip> 
#include <math.h>

using namespace std; 

int main()
{
	int a;
	cin >> a;
	long long ketqua = 1ll*a*(a+1); // ep kieu trong C++ so 1 va 2 chu ll // giong (long long)<bieuthuc> ben C // tuyet doi ko viet (long long)(<bieuthuc) vi se ra kqua sai
	cout<<ketqua<<endl;
}


```

#### a và b nguyên dương tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a. Không dùng vòng lặp và các hàm có sẵn.




``` c
#include <iostream>
#include <iomanip> 
#include <math.h>

using namespace std; 

int main()
{
	int a,b;
	cin >> a >>b;
	long long ketqua = 1ll*((a+b-1)/b*b); // ep kieu trong C++ so 1 va 2 chu ll // giong (long long)<bieuthuc> ben C // tuyet doi ko viet (long long)(<bieuthuc) vi se ra kqua sai
	cout<<ketqua<<endl;

	ios::sync_with_stdio(false); // 2 cau lenh tang toc do doc ghi
	cin.tie(nullptr);
}

```



