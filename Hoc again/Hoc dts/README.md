# Learning and stuff - Tóm tắt điện tử số
## Chuong 1
### Phần 1 Đại số boole

- Các phép toán cơ sở
    - Phép đảo A'
    - Phép cộng logic (phép or)
    - Phép nhân logic (phép and)

- Các định luật quan trọng
    - Đồng nhất: A.1 = A ; A+0 = A
    - Bù: A.A'=0 ; A+A'=1
    - Bất biến A.A=A ; A+A=A
    - Hấp thụ: A+AB=A ; A.(A+B)=A
    - Demorgan: (ABC)'= A'+B'+C' và ngược lại với (A+B+C)'
    - Phân phối kép: (A+B)(A+C)= A+BC

### Phần 2 Tối ưu hoá hàm logic
- Bảng trạng thái: liệt kê $2^n$ tổ hợp biến độc lập
    - Tổ hợp nhóm theo minterm (tổng các tích)
    - Tổ hợp nhóm theo maxterm (tích thành tổng)

- Bảng karnaugh: ko nói thêm vì quá quen, áp dụng khi số biến <= 5
    - Khi khoanh các ô trong bảng karnaugh để nhóm thì phải đảm bảo 1 nhóm có số ô là bội của $2^n$
    - Khi nhóm bảng karnaugh cần phải phủ toàn bộ các ô có số cần thiết: vd nhóm theo minterm thì phải khoanh đảm bảo các ô có số 1 đều phải được khoanh

## Chương 2: Mạch logic tổ hợp
### 1) Các kiến thức cơ bản
#### Định nghĩa:
-  Là mạch mà giá trị đầu ra chỉ phụ thuộc trực tiếp vào tổ hợp tín hiệu đầu vào  
- Mạch không có khả năng nhớ trạng thái

#### Cách làm bài toán thiết kế

- B1: phân tích bài toán
- B2: Lập bảng trạng thái 
- B3: Rút gọn bằng cách sử dụng bảng karnaugh hoặc đại số boole
- B4: Vẽ sơ đồ logic

### 2) Các linh kiện tổ hợp 
#### Bộ hợp kênh (MUX) 

- Bộ MUX: có tác dụng chọn dữ liệu. MUX chọn 1 trong số $2^n$ đường dữ liệu đầu vào để kết nối thông ra một đầu ra duy nhất. IC thường dùng: 74151

- Bộ Demux: ngược lại với MUX. Nhận dữ liệu từ 1 đường vào và truyền tới 1 trong số $2^n$ đầu ra riêng biệt dựa vào tổ hợp của các đường điều khiển. IC thường dùng 74LS138

// Bài tập sẽ ở đây

#### Bộ Decoder, bộ giải mã led 7 đoạn
- Decoder có nhiệm vụ nhẫn diện một mã nhị phân ở đầu vào để kích hoạt một đầu ra tương ứng n đầu vào giải mã ra $2^n$ đầu ra 
- Bộ giải mã led 7 đoạn: chuyển đổi mã nhị phân 4 bit thành tín hiệu led tương ứng (a, b, c, d, e, f, g) để hiển thị các số từ 0-9


#### Mạch số học
- Mạch half-adder: Thực hiện tổng 2 bit nhị phân a0,b0 và cho ra OUTPUT tổng S0 và một bit nhớ C0

- Mạch full-adder: Thực hiện cộng đầy đủ 3 bit đầu vào a,b và bit nhớ C OUTPUT cho ra bit đầu ra S và 1 bit nhớ C nữa

- Parity bit
    - số bit của từ mã khi đã có bit parity là n=m+r (m là số bit thông tin khi chưa có bit parity) với
    điều kiện $2^r >= m+r+1$
    - Mẹo nhớ bit parity (bit P) nào đang kiểm tra ở vị trí nào thì tuân theo nguyên tắc "nhặt n bỏ n".
    VD mã hamming là 1 hàng 7 bit đánh số  (1 2 3 4 5 6 7
        - VD bit P1 (nhặt 1 bỏ 1)
            - Lấy 1 bit số 1
            - Bỏ 1  bit số 2
            - Lấy 1 bit số 3
            - Bỏ 1 bit số 4
            tương tự bỏ 2 lấy 2, bỏ 4 lấy 4, vv







