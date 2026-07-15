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

### Một số kiến thức mới
#### Tham chiếu (gần giống con trỏ)
- Hai đoạn code này giống nhau

``` c++
// CODE 1
#include <string>
#include <iostream>
#include <iomanip> 
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std; 

void change (int &n)
{
	n=n+100;
	cout << n << " cnay la n "<< endl;
}

int main ()
{
	int m = 1000;
	cout << m << endl;

	
	change(m);
	cout << m << endl;
}
```


``` c++
// CODE 2
#include <string>
#include <iostream>
#include <iomanip> 
#include <vector>
#include <algorithm>
#include <math.h>



using namespace std; 

void change (int *n)
{
	*n=*n+100;
	cout << n << " cnay la n "<< endl; // in thu xem n ra ntn, k lquan lam
}

int main ()
{
	int m = 1000;
	cout << m << endl;
	int *p;
	p = &m;
	
	change(p);
	cout << m << endl;
}
```

#### pair (không quan trọng lắm bt là đủ r)
- pair là một chỗ lưu 2 biến khác nhau ( giống struct rút gọn về lưu trữ 2 biến ) và phải có thư viện utility

- syntax : có 4 kiểu nhưng lấy một kiểu làm vd
``` c++
//Cách 2 : Giá trị của first là value1, second là value2
pair<first_data_type, second_data_type> pair_name = make_pair(value1, value2)

```

- Ví dụ về pair 

``` C++
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> a = make_pair(28, 100);
    cout << a.first << ' ' << a.second << endl;

    pair<char, int> b = {'@', 28};
    cout << b.first << ' ' << b.second << endl;

    pair<char, char> c('#', '$');
    cout << c.first << ' ' << c.second << endl;
    return 0;
}

/* OUTPUT 
28 100
@ 28
# $
*/
```

// 3 1 3 0 2 4 1 6

#### Cấp phát bộ nhớ động (quan trọng)
>Trước khi vào phần chính thì đọc qua kiến thức sơ sơ về heap và stack như sau 
- Stack
	- Hoạt động theo nguyên tắc LIFO
	- Quản lý: Hệ thống hoặc trình biên dịch tự động quản lý
	- Tốc độ truy cập nhanh nhưng kích thước nhỏ
- Heap
	- Dùng để cấp phát bộ nhớ động
	- Ko có quy tắc hoạt động cố định
	- Quản lý: Cần cấp phát thủ công bằng new và giải phóng bằng delete
	- Tốc độ truy cập chậm, dung lượng lớn hơn nhiều so với stack'


> Mảng động
- Như đã hiểu thì mảng động là mảng không cố định kích cỡ

- **Toán tử "new": dùng để xin cấp phát vùng nhớ heap**
	- Cú pháp
	``` c
	pointer = new data_type [num_of_elements]
	```
	
	- Ví dụ 
	```c 
	#include <iostream>

	using namespace std;

	int main(){
		int *ptr = new int[5];
		cout << "Gia tri cua ptr : " << ptr << endl;
		ptr[0] = 1;
		ptr[1] = 2;
		ptr[2] = 3;
		ptr[3] = 4;
		ptr[4] = 5;
		for(int i = 0; i < 5; i++){
			cout << ptr[i] << ' '; // hoac *(ptr + i)
		}
	}
	```



- **Toán tử "delete" sử dụng để giải phóng vùng nhớ đã xin cấp phát trước đó bở toán tử new.**
	- Cú pháp
	```c
	delete [] pointer;
	```
	- Ví dụ
	```c
	#include <iostream>

	using namespace std;

	int main(){
		int n; cout << "Nhap so luong phan tu xin cap phat : ";
		cin >> n;
		int *ptr = new(nothrow) int[n];
		if(ptr == NULL){
			cout << "Khong du bo nho cap phat !\n";
		}
		else{
			cout << "Nhap cac phan tu trong day : ";
			for(int i = 0; i < n; i++){
				cin >> ptr[i];
			}
			cout << "Cac phan tu vua nhap : ";
			for(int i = 0; i < n; i++){
				cout << ptr[i] << ' ';
			}
			delete []ptr;
		}
		return 0;
	}
	``` 

#### Kiểu dữ liệu auto

- Từ khoá auto giúp suy luận ra kiểu giữ liệu của biến thay vì khai báo rõ là int, char, float,...

- VD
```c
#include <iostream>
#include "typeinfo"

using namespace std;

int main(){
   auto x = 100;
   auto y = 30.5f;
   auto z = '@';
   auto t = 1000000000000000;
   auto p = make_pair(10, 20);
   auto l = 30.5d;
   cout << "Kieu du lieu cua x : " << typeid(x).name() << endl; // note hàm typeid là hàm có thể trả về kiểu dữ liệu cho biến 
   cout << "Kieu du lieu cua y : " << typeid(y).name() << endl;
   cout << "Kieu du lieu cua z : " << typeid(z).name() << endl;
   cout << "Kieu du lieu cua t : " << typeid(t).name() << endl;
   cout << "Kieu du lieu cua p : " << typeid(p).name() << endl;
   cout << "Kieu du lieu cua l : " << typeid(l).name() << endl;
   return 0;




	/* OUTPUT là ntn
	Kieu du lieu cua x : i
	Kieu du lieu cua y : f
	Kieu du lieu cua z : c
	Kieu du lieu cua t : x
	Kieu du lieu cua p : St4pairIiiE
	Kieu du lieu cua l : d
	*/
```





## Bài 2: STL C++ (14/07/2026)
### Vecto trong C++
#### Khái niệm chung
- Vecto có tính chất giống một mảng động, tự thay đổi kích thước khi xoá hay thêm phần tử trong mảng.

- Có hỗ trợ truy cập phần tử thông qua chỉ số giống m1c

- Khai báo vecto 
``` c
vector<data_type> vector_name;
``` 

- Ví dụ 
``` c
int main(){
	//Khai báo vector rỗng
	vector<int> v1;
	//Khai báo vector với các phần tử
	vector<int> v2 = {1, 2, 3, 4, 5};
	//Khai báo vector có sẵn n phần tử
	int n = 20;
	vector<int> v3(n);
	//Khai báo vector có sẵn n phần tử có cùng giá trị val
	int val = 0;
	vector<int> v4(n, val);
	return 0;
}
```



### Một số hàm thường dùng trong vecto
- size(): trả về số lượng ptu 
- push_back(): thêm ptu vào cuối vecto
- pop_back(): xoá ptu cuối cùng trong vecto

- VD 1: tạo và duyệt vecto
```c 
// vecto so
int main(){
    vector<int> v;
    v.push_back(1); // {1}
    v.push_back(2); // {1, 2}
    v.push_back(3); // {1, 2, 3}
    v.push_back(4); // {1, 2, 3, 4}
    cout << "Kich thuoc vector : " << v.size() << endl; // v.length()
    cout << "Duyet vector bang chi so : \n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }  
    cout << "\nDuyet vector bang ranged-base for loop :\n";
    for(int x : v){
        cout << x << ' ';
    }
    return 0;



// vecto string
using namespace std;

int main(){
    vector<string> v = {"28tech", "STL"};
    cout << "Kich thuoc vector : " << v.size() << endl;
    v.push_back("C++");
    v.push_back("Java");
    v.push_back("PHP");
    cout << "Kich thuoc vector : " << v.size() << endl;
    cout << "Duyet vector : ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.pop_back(); // Xoa PHP
    cout << "\nKich thuoc vector : " << v.size() << endl;
}
``` 

### M1c và m2c với vecto
#### M1c
- Vecto có thể dùng y hệt mảng 1 chiều, nhưng vecto có thể tự tuỳ biến kích thước như mảng động. // (cái này hơi hơi liên quan nên remind một chút là chuẩn C++ ko có nhập n từ bàn phím r tạo mảng n như trình biên dịch bên c khi làm việc vs m1c, mà cái nhập n từ bàn phím này chỉ làm dc bên vecto theo chuẩn C++)

``` c
// nhap nhu mang dong
int main(){
	vector<int> v;
	int n, tmp; cout << "Nhap so luong phan tu : ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Nhap phan tu thu " << i + 1 << " : ";
		cin >> tmp;
		v.push_back(tmp);
	}
	cout << "Day so vua nhap : \n";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}
``` 


#### M2c
- Tư duy một chút thì m2c giống trục toạ độ xy. Tưởng tượng chưa có trục nào cả, tự nhiên có 1 vecto m1c tạo thành trục x, thì để tạo tiếp các giá trị của trục y thì ở mỗi ô giá trị của trục x sẽ thêm một vecto nữa, từ đó tạo ra trục y. Với tư duy đó có được cách triển khai m2c bằng vecto như sau

- VD1 nhập từng dòng của m2c cnhuw 1 vecto và thêm vào vecto chính
``` c
int main(){
	int n, m;
	cout << "Nhap hang, cot : ";
	cin >> n >> m;
	vector<vector<int>> v;
	for(int i = 0; i < n; i++){
		vector<int> row;
		for(int j = 0; j < m; j++){
			cout << "Nhap phan tu hang " << i + 1 << ", cot " << j + 1 << " : ";
			int tmp; cin >> tmp;
			row.push_back(tmp);
		}   
		v.push_back(row);
	}
	cout << "\nMang 2 chieu vua nhap : \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

```

- VD2: nhập kích thước hàng và cột như m2c truyền thống
``` c
int main(){
	int n, m;
	cout << "Nhap hang, cot : ";
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << "Nhap phan tu hang " << i + 1 << ", cot " << j + 1 << " : ";
			cin >> v[i][j];
		}   
	}
	cout << "\nMang 2 chieu vua nhap : \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
```

### Iterator


